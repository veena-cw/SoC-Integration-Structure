// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_two_fifo__W80.h"
#include "Vtestbench_bsg_wormhole_router__pi31.h"

extern const VlUnpacked<CData/*1:0*/, 8> Vtestbench__ConstPool__TABLE_he9947f7f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtestbench__ConstPool__TABLE_hb25c36cc_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtestbench__ConstPool__TABLE_h23f06bdf_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtestbench__ConstPool__TABLE_h37fb9f2e_0;
extern const VlUnpacked<CData/*4:0*/, 256> Vtestbench__ConstPool__TABLE_hd9b7275d_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtestbench__ConstPool__TABLE_h2d0a2573_0;

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx31;
    __Vtableidx31 = 0;
    CData/*5:0*/ __Vtableidx32;
    __Vtableidx32 = 0;
    CData/*5:0*/ __Vtableidx33;
    __Vtableidx33 = 0;
    CData/*2:0*/ __Vtableidx34;
    __Vtableidx34 = 0;
    CData/*2:0*/ __Vtableidx35;
    __Vtableidx35 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP.testbench__DOT__dut_reset) {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0)))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((0x10U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         << 4U)) | ((8U & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                           << 3U)) 
                                    | ((4U & ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                              << 2U)) 
                                       | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (1U > (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                            >> 2U)))) << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                                & (1U 
                                                   > 
                                                   (3U 
                                                    & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                                       >> 2U)))));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
             & ((1U != (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                              >> 2U))) & (1U <= (3U 
                                                 & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                                    >> 2U))))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & ((1U != (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       >> 2U))) & (1U 
                                                   <= 
                                                   (3U 
                                                    & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                                       >> 2U))))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & ((1U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                           & (1U <= (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & ((1U != (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                      & (1U <= (3U 
                                                & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((4U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & ((1U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                                 & (1U 
                                                    <= 
                                                    (3U 
                                                     & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & ((1U 
                                                           != 
                                                           (3U 
                                                            & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                          & (1U 
                                                             <= 
                                                             (3U 
                                                              & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])))))))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & (1U > (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (1U > (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (IData)(((4U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])) 
                                              & (1U 
                                                 > 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (1U 
                                                          > 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (5U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
    __Vtableidx34 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx34];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx34];
    __Vtableidx35 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx35];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx35];
    __Vtableidx33 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx33];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx33];
    __Vtableidx32 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx32];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx32];
    __Vtableidx31 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx31];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx31];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0))));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((0x10U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                        << 4U)) | ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                          << 3U)) | 
                                   ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0)))));
    __Vtemp_h0a6f0380__0[5U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[6U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[7U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h83f9f4fd__0[8U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                            << 3U) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                << 2U)) 
                                              | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 3U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 2U))))) 
                                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                          >> 1U))))) 
                                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                                 >> 0x1eU))));
    __Vtemp_h83f9f4fd__0[9U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                              << 4U));
    __Vtemp_h83f9f4fd__0[0xaU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h83f9f4fd__0[0xbU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h0b221842__0[0xcU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                   << 6U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                              << 5U) 
                                             | ((0x10U 
                                                 & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                    << 4U)) 
                                                | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 3U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 2U))))) 
                                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                            >> 1U))))) 
                                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                   >> 0x1cU))));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 3U))))) 
                                   | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                        >> 2U))))) 
                                      | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                          & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                           >> 1U))))) 
                                         | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = __Vtemp_h0a6f0380__0[5U];
    vlSelf->__PVT__link_o[6U] = __Vtemp_h0a6f0380__0[6U];
    vlSelf->__PVT__link_o[7U] = __Vtemp_h0a6f0380__0[7U];
    vlSelf->__PVT__link_o[8U] = __Vtemp_h83f9f4fd__0[8U];
    vlSelf->__PVT__link_o[9U] = __Vtemp_h83f9f4fd__0[9U];
    vlSelf->__PVT__link_o[0xaU] = __Vtemp_h83f9f4fd__0[0xaU];
    vlSelf->__PVT__link_o[0xbU] = __Vtemp_h83f9f4fd__0[0xbU];
    vlSelf->__PVT__link_o[0xcU] = __Vtemp_h0b221842__0[0xcU];
    vlSelf->__PVT__link_o[0xdU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xeU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xfU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0x10U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     << 8U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                                << 7U) 
                                               | ((0x40U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__full_r)) 
                                                      << 6U)) 
                                                  | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                        >> 1U))))) 
                                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                     >> 0x1aU))));
    vlSelf->__PVT__link_o[0x11U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x12U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x13U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x14U] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                     << 9U) | ((0x100U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 8U)) 
                                               | (((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__1\n"); );
    // Body
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (7U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                     & (0U != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i))
                      ? ((0U == (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o))
                          ? 4U : ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                                  - (IData)(1U))) : (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                      >> 2U) & (0U != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                      >> 4U) & (0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
                      >> 6U) & (0U != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & (0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                   >> 3U) & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 1U))));
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                   >> 1U) & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 2U))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li 
        = (((IData)(((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                >> 1U))) << 3U) | (
                                                   (4U 
                                                    & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                                   | ((2U 
                                                       & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                                                           & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0)) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                                                            & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                               >> 3U))))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li 
        = ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
              >> 6U) & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                        >> 1U)) << 3U) | ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                                             >> 4U) 
                                            & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                               >> 3U)) 
                                           << 2U) | 
                                          ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                                              >> 2U) 
                                             & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                >> 3U)) 
                                            << 1U) 
                                           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                                              & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                 >> 4U)))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i 
        = ((0x10U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x14U] 
                      >> 4U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                << 4U))) | ((8U & (
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0x10U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                                      << 3U))) 
                                            | ((4U 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[0xcU] 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                      << 2U))) 
                                               | ((2U 
                                                   & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[8U] 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                         << 1U))) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i[4U] 
                                                        & (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0)))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx36;
    __Vtableidx36 = 0;
    CData/*5:0*/ __Vtableidx37;
    __Vtableidx37 = 0;
    CData/*5:0*/ __Vtableidx38;
    __Vtableidx38 = 0;
    CData/*2:0*/ __Vtableidx39;
    __Vtableidx39 = 0;
    CData/*2:0*/ __Vtableidx40;
    __Vtableidx40 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP.testbench__DOT__dut_reset) {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0)))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((0x10U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         << 4U)) | ((8U & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                           << 3U)) 
                                    | ((4U & ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                              << 2U)) 
                                       | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (1U > (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                            >> 2U)))) << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                                & (1U 
                                                   > 
                                                   (3U 
                                                    & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                                       >> 2U)))));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
             & ((1U != (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                              >> 2U))) & (1U <= (3U 
                                                 & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                                    >> 2U))))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & ((1U != (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       >> 2U))) & (1U 
                                                   <= 
                                                   (3U 
                                                    & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                                       >> 2U))))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & ((1U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                           & (1U <= (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & ((1U != (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                      & (1U <= (3U 
                                                & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((4U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & ((1U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                                 & (1U 
                                                    <= 
                                                    (3U 
                                                     & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & ((1U 
                                                           != 
                                                           (3U 
                                                            & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                          & (1U 
                                                             <= 
                                                             (3U 
                                                              & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])))))))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & (1U > (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (1U > (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (IData)(((4U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])) 
                                              & (1U 
                                                 > 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (1U 
                                                          > 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (5U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
    __Vtableidx39 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx39];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx39];
    __Vtableidx40 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx40];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx40];
    __Vtableidx38 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx38];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx38];
    __Vtableidx37 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx37];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx37];
    __Vtableidx36 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx36];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx36];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0))));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((0x10U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                        << 4U)) | ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                          << 3U)) | 
                                   ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0)))));
    __Vtemp_h0a6f0380__0[5U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[6U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[7U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h83f9f4fd__0[8U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                            << 3U) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                << 2U)) 
                                              | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 3U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 2U))))) 
                                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                          >> 1U))))) 
                                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                                 >> 0x1eU))));
    __Vtemp_h83f9f4fd__0[9U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                              << 4U));
    __Vtemp_h83f9f4fd__0[0xaU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h83f9f4fd__0[0xbU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h0b221842__0[0xcU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                   << 6U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                              << 5U) 
                                             | ((0x10U 
                                                 & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                    << 4U)) 
                                                | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 3U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 2U))))) 
                                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                            >> 1U))))) 
                                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                   >> 0x1cU))));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 3U))))) 
                                   | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                        >> 2U))))) 
                                      | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                          & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                           >> 1U))))) 
                                         | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = __Vtemp_h0a6f0380__0[5U];
    vlSelf->__PVT__link_o[6U] = __Vtemp_h0a6f0380__0[6U];
    vlSelf->__PVT__link_o[7U] = __Vtemp_h0a6f0380__0[7U];
    vlSelf->__PVT__link_o[8U] = __Vtemp_h83f9f4fd__0[8U];
    vlSelf->__PVT__link_o[9U] = __Vtemp_h83f9f4fd__0[9U];
    vlSelf->__PVT__link_o[0xaU] = __Vtemp_h83f9f4fd__0[0xaU];
    vlSelf->__PVT__link_o[0xbU] = __Vtemp_h83f9f4fd__0[0xbU];
    vlSelf->__PVT__link_o[0xcU] = __Vtemp_h0b221842__0[0xcU];
    vlSelf->__PVT__link_o[0xdU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xeU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xfU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0x10U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     << 8U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                                << 7U) 
                                               | ((0x40U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__full_r)) 
                                                      << 6U)) 
                                                  | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                        >> 1U))))) 
                                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                     >> 0x1aU))));
    vlSelf->__PVT__link_o[0x11U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x12U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x13U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x14U] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                     << 9U) | ((0x100U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 8U)) 
                                               | (((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__1\n"); );
    // Body
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (7U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                     & (0U != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i))
                      ? ((0U == (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o))
                          ? 4U : ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                                  - (IData)(1U))) : (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                      >> 2U) & (0U != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                      >> 4U) & (0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
                      >> 6U) & (0U != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & (0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                   >> 3U) & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 1U))));
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                   >> 1U) & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 2U))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li 
        = (((IData)(((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                >> 1U))) << 3U) | (
                                                   (4U 
                                                    & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                                   | ((2U 
                                                       & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                                                           & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0)) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                                                            & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                               >> 3U))))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li 
        = ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
              >> 6U) & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                        >> 1U)) << 3U) | ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                                             >> 4U) 
                                            & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                               >> 3U)) 
                                           << 2U) | 
                                          ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                                              >> 2U) 
                                             & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                >> 3U)) 
                                            << 1U) 
                                           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                                              & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                 >> 4U)))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i 
        = ((0x10U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x14U] 
                      >> 4U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                << 4U))) | ((8U & (
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0x10U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                                      << 3U))) 
                                            | ((4U 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[0xcU] 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                      << 2U))) 
                                               | ((2U 
                                                   & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[8U] 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                         << 1U))) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i[4U] 
                                                        & (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0)))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx41;
    __Vtableidx41 = 0;
    CData/*5:0*/ __Vtableidx42;
    __Vtableidx42 = 0;
    CData/*5:0*/ __Vtableidx43;
    __Vtableidx43 = 0;
    CData/*2:0*/ __Vtableidx44;
    __Vtableidx44 = 0;
    CData/*2:0*/ __Vtableidx45;
    __Vtableidx45 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP.testbench__DOT__dut_reset) {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    __Vtableidx44 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx44];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx44];
    __Vtableidx42 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx42];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx42];
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0)))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((0x10U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         << 4U)) | ((8U & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                           << 3U)) 
                                    | ((4U & ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                              << 2U)) 
                                       | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
             & (0U != (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                             >> 2U)))) << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                                        >> 2U)))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & (0U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (0U != (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((0U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (0U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
    vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
    __Vtableidx45 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx45];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx45];
    __Vtableidx43 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx43];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx43];
    __Vtableidx41 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx41];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx41];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0))));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((0x10U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                        << 4U)) | ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                          << 3U)) | 
                                   ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0)))));
    __Vtemp_h0a6f0380__0[5U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[6U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[7U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h83f9f4fd__0[8U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                            << 3U) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                << 2U)) 
                                              | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 3U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 2U))))) 
                                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                          >> 1U))))) 
                                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                                 >> 0x1eU))));
    __Vtemp_h83f9f4fd__0[9U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                              << 4U));
    __Vtemp_h83f9f4fd__0[0xaU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h83f9f4fd__0[0xbU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h0b221842__0[0xcU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                   << 6U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                              << 5U) 
                                             | ((0x10U 
                                                 & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                    << 4U)) 
                                                | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 3U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 2U))))) 
                                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                            >> 1U))))) 
                                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                   >> 0x1cU))));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 3U))))) 
                                   | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                        >> 2U))))) 
                                      | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                          & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                           >> 1U))))) 
                                         | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = __Vtemp_h0a6f0380__0[5U];
    vlSelf->__PVT__link_o[6U] = __Vtemp_h0a6f0380__0[6U];
    vlSelf->__PVT__link_o[7U] = __Vtemp_h0a6f0380__0[7U];
    vlSelf->__PVT__link_o[8U] = __Vtemp_h83f9f4fd__0[8U];
    vlSelf->__PVT__link_o[9U] = __Vtemp_h83f9f4fd__0[9U];
    vlSelf->__PVT__link_o[0xaU] = __Vtemp_h83f9f4fd__0[0xaU];
    vlSelf->__PVT__link_o[0xbU] = __Vtemp_h83f9f4fd__0[0xbU];
    vlSelf->__PVT__link_o[0xcU] = __Vtemp_h0b221842__0[0xcU];
    vlSelf->__PVT__link_o[0xdU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xeU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xfU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0x10U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     << 8U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                                << 7U) 
                                               | ((0x40U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__full_r)) 
                                                      << 6U)) 
                                                  | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                        >> 1U))))) 
                                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                     >> 0x1aU))));
    vlSelf->__PVT__link_o[0x11U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x12U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x13U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x14U] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                     << 9U) | ((0x100U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 8U)) 
                                               | (((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__1\n"); );
    // Body
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (7U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                     & (0U != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i))
                      ? ((0U == (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o))
                          ? 4U : ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                                  - (IData)(1U))) : (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                      >> 2U) & (0U != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                      >> 4U) & (0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                      >> 6U) & (0U != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & (0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                   >> 3U) & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 1U))));
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                   >> 1U) & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 2U))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li 
        = (((IData)(((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                >> 1U))) << 3U) | (
                                                   (4U 
                                                    & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                                   | ((2U 
                                                       & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                                           & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0)) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                                            & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                               >> 3U))))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li 
        = ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
              >> 6U) & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                        >> 1U)) << 3U) | ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                             >> 4U) 
                                            & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                               >> 3U)) 
                                           << 2U) | 
                                          ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                              >> 2U) 
                                             & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                >> 3U)) 
                                            << 1U) 
                                           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                              & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                 >> 4U)))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i 
        = ((0x10U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                      >> 4U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                << 4U))) | ((8U & (
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                                      << 3U))) 
                                            | ((4U 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                      << 2U))) 
                                               | ((2U 
                                                   & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                         << 1U))) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                                        & (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0)))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx46;
    __Vtableidx46 = 0;
    CData/*5:0*/ __Vtableidx47;
    __Vtableidx47 = 0;
    CData/*5:0*/ __Vtableidx48;
    __Vtableidx48 = 0;
    CData/*2:0*/ __Vtableidx49;
    __Vtableidx49 = 0;
    CData/*2:0*/ __Vtableidx50;
    __Vtableidx50 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP.testbench__DOT__dut_reset) {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    __Vtableidx49 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx49];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx49];
    __Vtableidx47 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx47];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx47];
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0)))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((0x10U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         << 4U)) | ((8U & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                           << 3U)) 
                                    | ((4U & ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                              << 2U)) 
                                       | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
             & (0U != (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                             >> 2U)))) << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                                        >> 2U)))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & (0U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (0U != (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((0U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (0U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
    vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
    __Vtableidx50 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx50];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx50];
    __Vtableidx48 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx48];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx48];
    __Vtableidx46 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx46];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx46];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0))));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((0x10U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                        << 4U)) | ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                          << 3U)) | 
                                   ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0)))));
    __Vtemp_h0a6f0380__0[5U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[6U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[7U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h83f9f4fd__0[8U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                            << 3U) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                << 2U)) 
                                              | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 3U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 2U))))) 
                                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                          >> 1U))))) 
                                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                                 >> 0x1eU))));
    __Vtemp_h83f9f4fd__0[9U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                              << 4U));
    __Vtemp_h83f9f4fd__0[0xaU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h83f9f4fd__0[0xbU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h0b221842__0[0xcU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                   << 6U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                              << 5U) 
                                             | ((0x10U 
                                                 & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                    << 4U)) 
                                                | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 3U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 2U))))) 
                                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                            >> 1U))))) 
                                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                   >> 0x1cU))));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 3U))))) 
                                   | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                        >> 2U))))) 
                                      | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                          & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                           >> 1U))))) 
                                         | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = __Vtemp_h0a6f0380__0[5U];
    vlSelf->__PVT__link_o[6U] = __Vtemp_h0a6f0380__0[6U];
    vlSelf->__PVT__link_o[7U] = __Vtemp_h0a6f0380__0[7U];
    vlSelf->__PVT__link_o[8U] = __Vtemp_h83f9f4fd__0[8U];
    vlSelf->__PVT__link_o[9U] = __Vtemp_h83f9f4fd__0[9U];
    vlSelf->__PVT__link_o[0xaU] = __Vtemp_h83f9f4fd__0[0xaU];
    vlSelf->__PVT__link_o[0xbU] = __Vtemp_h83f9f4fd__0[0xbU];
    vlSelf->__PVT__link_o[0xcU] = __Vtemp_h0b221842__0[0xcU];
    vlSelf->__PVT__link_o[0xdU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xeU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xfU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0x10U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     << 8U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                                << 7U) 
                                               | ((0x40U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__full_r)) 
                                                      << 6U)) 
                                                  | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                        >> 1U))))) 
                                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                     >> 0x1aU))));
    vlSelf->__PVT__link_o[0x11U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x12U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x13U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x14U] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                     << 9U) | ((0x100U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 8U)) 
                                               | (((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__1\n"); );
    // Body
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (7U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                     & (0U != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i))
                      ? ((0U == (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o))
                          ? 4U : ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                                  - (IData)(1U))) : (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                      >> 2U) & (0U != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                      >> 4U) & (0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                      >> 6U) & (0U != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & (0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                   >> 3U) & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 1U))));
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                   >> 1U) & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 2U))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li 
        = (((IData)(((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                >> 1U))) << 3U) | (
                                                   (4U 
                                                    & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                                   | ((2U 
                                                       & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                                           & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0)) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                                            & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                               >> 3U))))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li 
        = ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
              >> 6U) & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                        >> 1U)) << 3U) | ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                             >> 4U) 
                                            & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                               >> 3U)) 
                                           << 2U) | 
                                          ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                              >> 2U) 
                                             & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                >> 3U)) 
                                            << 1U) 
                                           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                              & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                 >> 4U)))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i 
        = ((0x10U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                      >> 4U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                << 4U))) | ((8U & (
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                                      << 3U))) 
                                            | ((4U 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                      << 2U))) 
                                               | ((2U 
                                                   & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                         << 1U))) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                                        & (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0)))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx51;
    __Vtableidx51 = 0;
    CData/*5:0*/ __Vtableidx52;
    __Vtableidx52 = 0;
    CData/*5:0*/ __Vtableidx53;
    __Vtableidx53 = 0;
    CData/*2:0*/ __Vtableidx54;
    __Vtableidx54 = 0;
    CData/*2:0*/ __Vtableidx55;
    __Vtableidx55 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP.testbench__DOT__dut_reset) {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    __Vtableidx54 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx54];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx54];
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0)))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((0x10U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         << 4U)) | ((8U & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                           << 3U)) 
                                    | ((4U & ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                              << 2U)) 
                                       | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
             & (0U != (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                             >> 2U)))) << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                                        >> 2U)))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & ((1U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                           & (1U <= (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & ((1U != (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                      & (1U <= (3U 
                                                & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((0U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & ((1U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                                 & (1U 
                                                    <= 
                                                    (3U 
                                                     & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & ((1U 
                                                           != 
                                                           (3U 
                                                            & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                          & (1U 
                                                             <= 
                                                             (3U 
                                                              & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])))))))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & (1U > (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (1U > (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (IData)(((0U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])) 
                                              & (1U 
                                                 > 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (1U 
                                                          > 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (1U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
    vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    __Vtableidx55 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx55];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx55];
    __Vtableidx53 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx53];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx53];
    __Vtableidx52 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx52];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx52];
    __Vtableidx51 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx51];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx51];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0))));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((0x10U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                        << 4U)) | ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                          << 3U)) | 
                                   ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0)))));
    __Vtemp_h0a6f0380__0[5U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[6U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[7U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h83f9f4fd__0[8U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                            << 3U) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                << 2U)) 
                                              | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 3U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 2U))))) 
                                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                          >> 1U))))) 
                                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                                 >> 0x1eU))));
    __Vtemp_h83f9f4fd__0[9U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                              << 4U));
    __Vtemp_h83f9f4fd__0[0xaU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h83f9f4fd__0[0xbU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h0b221842__0[0xcU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                   << 6U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                              << 5U) 
                                             | ((0x10U 
                                                 & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                    << 4U)) 
                                                | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 3U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 2U))))) 
                                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                            >> 1U))))) 
                                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                   >> 0x1cU))));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 3U))))) 
                                   | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                        >> 2U))))) 
                                      | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                          & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                           >> 1U))))) 
                                         | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = __Vtemp_h0a6f0380__0[5U];
    vlSelf->__PVT__link_o[6U] = __Vtemp_h0a6f0380__0[6U];
    vlSelf->__PVT__link_o[7U] = __Vtemp_h0a6f0380__0[7U];
    vlSelf->__PVT__link_o[8U] = __Vtemp_h83f9f4fd__0[8U];
    vlSelf->__PVT__link_o[9U] = __Vtemp_h83f9f4fd__0[9U];
    vlSelf->__PVT__link_o[0xaU] = __Vtemp_h83f9f4fd__0[0xaU];
    vlSelf->__PVT__link_o[0xbU] = __Vtemp_h83f9f4fd__0[0xbU];
    vlSelf->__PVT__link_o[0xcU] = __Vtemp_h0b221842__0[0xcU];
    vlSelf->__PVT__link_o[0xdU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xeU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xfU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0x10U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     << 8U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                                << 7U) 
                                               | ((0x40U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__full_r)) 
                                                      << 6U)) 
                                                  | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                        >> 1U))))) 
                                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                     >> 0x1aU))));
    vlSelf->__PVT__link_o[0x11U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x12U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x13U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x14U] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                     << 9U) | ((0x100U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 8U)) 
                                               | (((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__1\n"); );
    // Body
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (7U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                     & (0U != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i))
                      ? ((0U == (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o))
                          ? 4U : ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                                  - (IData)(1U))) : (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                      >> 2U) & (0U != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                      >> 4U) & (0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                      >> 6U) & (0U != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & (0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                   >> 3U) & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 1U))));
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                   >> 1U) & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 2U))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li 
        = (((IData)(((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                >> 1U))) << 3U) | (
                                                   (4U 
                                                    & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                                   | ((2U 
                                                       & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                                           & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0)) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                                            & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                               >> 3U))))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li 
        = ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
              >> 6U) & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                        >> 1U)) << 3U) | ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                             >> 4U) 
                                            & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                               >> 3U)) 
                                           << 2U) | 
                                          ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                              >> 2U) 
                                             & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                >> 3U)) 
                                            << 1U) 
                                           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                              & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                 >> 4U)))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i 
        = ((0x10U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                      >> 4U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                << 4U))) | ((8U & (
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                                      << 3U))) 
                                            | ((4U 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                      << 2U))) 
                                               | ((2U 
                                                   & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                         << 1U))) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                                        & (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0)))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx56;
    __Vtableidx56 = 0;
    CData/*5:0*/ __Vtableidx57;
    __Vtableidx57 = 0;
    CData/*5:0*/ __Vtableidx58;
    __Vtableidx58 = 0;
    CData/*2:0*/ __Vtableidx59;
    __Vtableidx59 = 0;
    CData/*2:0*/ __Vtableidx60;
    __Vtableidx60 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((0U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r 
        = ((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n));
    if (vlSymsp->TOP.testbench__DOT__dut_reset) {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r = 0U;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0U;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0U;
    } else {
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n;
        vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo;
        vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r 
            = vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo;
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n;
    }
    __Vtableidx59 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx59];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx59];
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (
                                                   (2U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((8U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 3U)) | ((4U & ((~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                        << 2U)) | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0)))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((0x10U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         << 4U)) | ((8U & ((~ (IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                           << 3U)) 
                                    | ((4U & ((~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                              << 2U)) 
                                       | (IData)(vlSelf->__VdfgTmp_h5c36a40b__0))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
             & (0U != (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                             >> 2U)))) << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                                 & (0U 
                                                    != 
                                                    (3U 
                                                     & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                                        >> 2U)))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & ((1U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                           & (1U <= (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & ((1U != (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                      & (1U <= (3U 
                                                & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((0U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & ((1U 
                                                  != 
                                                  (3U 
                                                   & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                                 & (1U 
                                                    <= 
                                                    (3U 
                                                     & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & ((1U 
                                                           != 
                                                           (3U 
                                                            & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                          & (1U 
                                                             <= 
                                                             (3U 
                                                              & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])))))))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])) 
                        & (1U > (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((0U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (1U > (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (IData)(((0U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])) 
                                              & (1U 
                                                 > 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((0U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (1U 
                                                          > 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (1U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
    vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    __Vtableidx60 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx60];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx60];
    __Vtableidx58 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx58];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx58];
    __Vtableidx57 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx57];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx57];
    __Vtableidx56 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx56];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx56];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0))));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((0x10U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                        << 4U)) | ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                          << 3U)) | 
                                   ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                           << 2U)) 
                                    | (IData)(vlSelf->__VdfgTmp_h58c5e7f4__0)))));
    __Vtemp_h0a6f0380__0[5U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[6U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h0a6f0380__0[7U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1eU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                              << 2U));
    __Vtemp_h83f9f4fd__0[8U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 << 4U) | (((IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                            << 3U) 
                                           | ((4U & 
                                               ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                << 2U)) 
                                              | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                    >> 3U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                       >> 2U))))) 
                                                     | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                          >> 1U))))) 
                                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                                 >> 0x1eU))));
    __Vtemp_h83f9f4fd__0[9U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                   & (- (IData)((1U 
                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                    >> 3U))))) 
                                  | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 2U))))) 
                                     | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                          >> 1U))))) 
                                        | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                 >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                & (- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                 >> 3U))))) 
                                               | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 2U))))) 
                                                  | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                       >> 1U))))) 
                                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                              << 4U));
    __Vtemp_h83f9f4fd__0[0xaU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h83f9f4fd__0[0xbU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                   >> 0x1cU) | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                  & (- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                   >> 3U))))) 
                                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 2U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 1U))))) 
                                                       | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                << 4U));
    __Vtemp_h0b221842__0[0xcU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                   << 6U) | (((IData)(
                                                      (0U 
                                                       != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                              << 5U) 
                                             | ((0x10U 
                                                 & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                    << 4U)) 
                                                | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                      >> 3U))))) 
                                                    | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                        & (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                         >> 2U))))) 
                                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                            >> 1U))))) 
                                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                             & (- (IData)(
                                                                          (1U 
                                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))))) 
                                                   >> 0x1cU))));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 4U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 3U))))) 
                                    | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                         >> 2U))))) 
                                       | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                            >> 1U))))) 
                                          | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                             & (- (IData)(
                                                          (1U 
                                                           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 3U))))) 
                                   | ((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                        >> 2U))))) 
                                      | ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                          & (- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                           >> 1U))))) 
                                         | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                            & (- (IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = __Vtemp_h0a6f0380__0[5U];
    vlSelf->__PVT__link_o[6U] = __Vtemp_h0a6f0380__0[6U];
    vlSelf->__PVT__link_o[7U] = __Vtemp_h0a6f0380__0[7U];
    vlSelf->__PVT__link_o[8U] = __Vtemp_h83f9f4fd__0[8U];
    vlSelf->__PVT__link_o[9U] = __Vtemp_h83f9f4fd__0[9U];
    vlSelf->__PVT__link_o[0xaU] = __Vtemp_h83f9f4fd__0[0xaU];
    vlSelf->__PVT__link_o[0xbU] = __Vtemp_h83f9f4fd__0[0xbU];
    vlSelf->__PVT__link_o[0xcU] = __Vtemp_h0b221842__0[0xcU];
    vlSelf->__PVT__link_o[0xdU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xeU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0xfU] = ((((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1aU) | (((
                                                   vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                 << 6U));
    vlSelf->__PVT__link_o[0x10U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     << 8U) | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                                << 7U) 
                                               | ((0x40U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__full_r)) 
                                                      << 6U)) 
                                                  | (((vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[3U] 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo) 
                                                                        >> 1U))))) 
                                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo)))))) 
                                                     >> 0x1aU))));
    vlSelf->__PVT__link_o[0x11U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x12U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x13U] = ((((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                        >> 1U))))) 
                                      | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                         & (- (IData)(
                                                      (1U 
                                                       & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                     >> 0x18U) | ((
                                                   (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  << 8U));
    vlSelf->__PVT__link_o[0x14U] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                     << 9U) | ((0x100U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 8U)) 
                                               | (((vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[3U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x18U)));
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__1\n"); );
    // Body
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (7U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                     & (0U != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i))
                      ? ((0U == (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o))
                          ? 4U : ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                                  - (IData)(1U))) : (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                      >> 2U) & (0U != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (3U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                      >> 4U) & (0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li))
                      ? ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o) 
                         - (IData)(1U)) : (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                      >> 6U) & (0U != (IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & (0U != (IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                   >> 3U) & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 1U))));
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li 
        = ((2U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                   >> 1U) & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                    & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                       >> 2U))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li 
        = (((IData)(((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                      >> 8U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                >> 1U))) << 3U) | (
                                                   (4U 
                                                    & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                                        >> 2U) 
                                                       & (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0))) 
                                                   | ((2U 
                                                       & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                                           & (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0)) 
                                                          >> 1U)) 
                                                      | (1U 
                                                         & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                                            & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                               >> 3U))))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li 
        = ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
              >> 6U) & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                        >> 1U)) << 3U) | ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                             >> 4U) 
                                            & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                               >> 3U)) 
                                           << 2U) | 
                                          ((((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                              >> 2U) 
                                             & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                >> 3U)) 
                                            << 1U) 
                                           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                              & ((IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0) 
                                                 >> 4U)))));
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i 
        = ((0x10U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                      >> 4U) & ((IData)(vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                << 4U))) | ((8U & (
                                                   (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                                      << 3U))) 
                                            | ((4U 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                                    >> 2U) 
                                                   & ((IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                      << 2U))) 
                                               | ((2U 
                                                   & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                                       >> 1U) 
                                                      & ((IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0) 
                                                         << 1U))) 
                                                  | (1U 
                                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                                        & (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0)))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                       >> 4U));
    } else if (((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}
