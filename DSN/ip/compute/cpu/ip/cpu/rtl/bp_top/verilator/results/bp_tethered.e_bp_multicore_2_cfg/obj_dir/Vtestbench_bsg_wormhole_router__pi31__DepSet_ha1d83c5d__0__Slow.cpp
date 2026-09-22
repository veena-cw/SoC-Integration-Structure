// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_two_fifo__W80.h"
#include "Vtestbench_bsg_wormhole_router__pi31.h"

extern const VlUnpacked<CData/*3:0*/, 64> Vtestbench__ConstPool__TABLE_h23f06bdf_0;
extern const VlUnpacked<CData/*1:0*/, 64> Vtestbench__ConstPool__TABLE_h37fb9f2e_0;

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    __Vtableidx2 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                     << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx2];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx2];
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
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
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtestbench__ConstPool__TABLE_he9947f7f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtestbench__ConstPool__TABLE_hb25c36cc_0;
extern const VlUnpacked<CData/*4:0*/, 256> Vtestbench__ConstPool__TABLE_hd9b7275d_0;
extern const VlUnpacked<CData/*2:0*/, 256> Vtestbench__ConstPool__TABLE_h2d0a2573_0;

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
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
                        & (0U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (0U != (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((4U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    __Vtableidx4 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx4];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx4];
    __Vtableidx5 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx5];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx5];
    __Vtableidx3 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                     << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx3];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx3];
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (4U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
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
    __Vtableidx1 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                     << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx1];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx1];
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
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
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

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
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
    __Vtableidx7 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                     << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx7];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx7];
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
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
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*2:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*2:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
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
                        & (0U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (0U != (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((4U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    __Vtableidx9 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx9];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx9];
    __Vtableidx10 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx10];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx10];
    __Vtableidx8 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                     << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx8];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx8];
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (4U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
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
    __Vtableidx6 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                     << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx6];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx6];
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
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
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

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
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
    __Vtableidx12 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx12];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx12];
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
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
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*5:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    CData/*2:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*2:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
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
                        & (0U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (0U != (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((4U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    __Vtableidx14 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx14];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx14];
    __Vtableidx15 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx15];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx15];
    __Vtableidx13 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx13];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx13];
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (4U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
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
    __Vtableidx11 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx11];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx11];
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
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
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

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
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
    __Vtableidx17 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx17];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx17];
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
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
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((8U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r)) 
                     << 3U)) | ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r)) 
                                       << 2U)) | ((2U 
                                                   & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                                                      << 1U)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    CData/*5:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    CData/*2:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    CData/*2:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    VlWide<9>/*287:0*/ __Vtemp_h0a6f0380__0;
    VlWide<13>/*415:0*/ __Vtemp_h83f9f4fd__0;
    VlWide<17>/*543:0*/ __Vtemp_h0b221842__0;
    // Body
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U])));
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
                        & (0U != (3U & vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->data_o[0U]))))) 
            << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (IData)(((4U == (0xcU & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U])) 
                                   & (0U != (3U & vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->data_o[0U]))))) 
                       << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                   & (IData)(((4U == 
                                               (0xcU 
                                                & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))))) 
                                  << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                            & (IData)(
                                                      ((4U 
                                                        == 
                                                        (0xcU 
                                                         & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
                                                       & (0U 
                                                          != 
                                                          (3U 
                                                           & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))))))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (0U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    __Vtableidx19 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx19];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx19];
    __Vtableidx20 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx20];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx20];
    __Vtableidx18 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx18];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx18];
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo) 
             & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq))) 
            << 4U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo) 
                        & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq))) 
                       << 3U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
                                   & (3U == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq))) 
                                  << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                                              & (IData)(
                                                        (4U 
                                                         == 
                                                         (0xfU 
                                                          & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
                                             << 1U) 
                                            | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                               & (3U 
                                                  == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq)))))));
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
    __Vtableidx16 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx16];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx16];
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
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
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

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__0\n"); );
    // Body
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
    vlSelf->__VdfgTmp_h58c5e7f4__0 = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__VdfgTmp_h5c36a40b__0 = ((2U & ((~ (IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__twofer->__PVT__empty_r))));
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
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx21;
    __Vtableidx21 = 0;
    CData/*5:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    CData/*5:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    CData/*2:0*/ __Vtableidx24;
    __Vtableidx24 = 0;
    CData/*2:0*/ __Vtableidx25;
    __Vtableidx25 = 0;
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
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    __Vtableidx24 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx24];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx24];
    __Vtableidx25 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx25];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx25];
    __Vtableidx23 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx23];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx23];
    __Vtableidx22 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx22];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx22];
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
    __Vtableidx21 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx21];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx21];
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
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
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

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__1\n"); );
    // Init
    CData/*7:0*/ __Vtableidx26;
    __Vtableidx26 = 0;
    CData/*5:0*/ __Vtableidx27;
    __Vtableidx27 = 0;
    CData/*5:0*/ __Vtableidx28;
    __Vtableidx28 = 0;
    CData/*2:0*/ __Vtableidx29;
    __Vtableidx29 = 0;
    CData/*2:0*/ __Vtableidx30;
    __Vtableidx30 = 0;
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
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    __Vtableidx29 = (((IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx29];
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx29];
    __Vtableidx30 = (((IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx30];
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx30];
    __Vtableidx28 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx28];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx28];
    __Vtableidx27 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_h23f06bdf_0[__Vtableidx27];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h37fb9f2e_0[__Vtableidx27];
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
    __Vtableidx26 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx26];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx26];
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
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
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

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__1\n"); );
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
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
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
    __Vtableidx31 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx31];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx31];
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
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
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

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__1\n"); );
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
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq 
        = (((1U == (3U & (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                          >> 2U))) << 1U) | (1U == 
                                             (3U & 
                                              vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
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
    __Vtableidx36 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 3U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hd9b7275d_0[__Vtableidx36];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h2d0a2573_0[__Vtableidx36];
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
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
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
