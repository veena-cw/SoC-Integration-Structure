// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_two_fifo__W80.h"
#include "Vtestbench_bsg_wormhole_router__pi33.h"

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__0(Vtestbench_bsg_wormhole_router__pi33* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__0\n"); );
    // Body
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li 
        = ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r)) 
                  << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__release_li 
        = ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                  << 1U)) | (1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo 
        = (1U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                 & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__release_li)) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release 
        = ((~ ((4U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 2U)) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__release_li))) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r));
}

extern const VlUnpacked<CData/*1:0*/, 8> Vtestbench__ConstPool__TABLE_he9947f7f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtestbench__ConstPool__TABLE_hb25c36cc_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtestbench__ConstPool__TABLE_hcf3d328a_0;
extern const VlUnpacked<CData/*1:0*/, 32> Vtestbench__ConstPool__TABLE_h40450cd2_0;

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi33* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
             & (1U > (7U & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & (1U > (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt 
        = ((1U != (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
           & (1U <= (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
             & (1U == (7U & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))) 
            << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                        & (1U == (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))) 
                       << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                 & (1U == (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])))));
    __Vtableidx2 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx2];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx2];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
             & ((1U != (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                & (1U <= (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt)));
    __Vtableidx1 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                     << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hcf3d328a_0[__Vtableidx1];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h40450cd2_0[__Vtableidx1];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    __Vtableidx3 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx3];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx3];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                     << 2U)) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li)));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[6U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[7U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[8U] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                  << 4U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                             << 3U) 
                                            | ((4U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 2U)) 
                                               | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x1eU))));
    vlSelf->__PVT__link_o[9U] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1cU) | (((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                               << 4U));
    vlSelf->__PVT__link_o[0xaU] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1cU) | (((
                                                   vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 << 4U));
    vlSelf->__PVT__link_o[0xbU] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1cU) | (((
                                                   vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 << 4U));
    vlSelf->__PVT__link_o[0xcU] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                    << 5U) | ((0x10U 
                                               & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                  << 4U)) 
                                              | (((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 >> 0x1cU)));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi33* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
             & (1U > (7U & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & (1U > (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt 
        = ((1U != (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
           & (1U <= (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
             & (1U == (7U & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))) 
            << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                        & (1U == (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))) 
                       << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                 & (1U == (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])))));
    __Vtableidx5 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx5];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx5];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
             & ((1U != (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                & (1U <= (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt)));
    __Vtableidx4 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                     << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hcf3d328a_0[__Vtableidx4];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h40450cd2_0[__Vtableidx4];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    __Vtableidx6 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx6];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx6];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                     << 2U)) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li)));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[6U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[7U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[8U] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                  << 4U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                             << 3U) 
                                            | ((4U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 2U)) 
                                               | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x1eU))));
    vlSelf->__PVT__link_o[9U] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1cU) | (((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                               << 4U));
    vlSelf->__PVT__link_o[0xaU] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1cU) | (((
                                                   vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 << 4U));
    vlSelf->__PVT__link_o[0xbU] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1cU) | (((
                                                   vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 << 4U));
    vlSelf->__PVT__link_o[0xcU] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                    << 5U) | ((0x10U 
                                               & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                  << 4U)) 
                                              | (((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 >> 0x1cU)));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi33* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*2:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*2:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
             & (1U > (7U & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & (1U > (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt 
        = ((1U != (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
           & (1U <= (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
             & (1U == (7U & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))) 
            << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                        & (1U == (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))) 
                       << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                 & (1U == (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])))));
    __Vtableidx8 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx8];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx8];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
             & ((1U != (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                & (1U <= (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt)));
    __Vtableidx7 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                     << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hcf3d328a_0[__Vtableidx7];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h40450cd2_0[__Vtableidx7];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    __Vtableidx9 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                     << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx9];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx9];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                     << 2U)) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li)));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[6U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[7U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[8U] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                  << 4U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                             << 3U) 
                                            | ((4U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 2U)) 
                                               | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x1eU))));
    vlSelf->__PVT__link_o[9U] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1cU) | (((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                               << 4U));
    vlSelf->__PVT__link_o[0xaU] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1cU) | (((
                                                   vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 << 4U));
    vlSelf->__PVT__link_o[0xbU] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1cU) | (((
                                                   vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 << 4U));
    vlSelf->__PVT__link_o[0xcU] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                    << 5U) | ((0x10U 
                                               & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                  << 4U)) 
                                              | (((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 >> 0x1cU)));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__1(Vtestbench_bsg_wormhole_router__pi33* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi33___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*2:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*2:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
        = vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U];
    vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
             & (1U > (7U & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & (1U > (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U]))));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt 
        = ((1U != (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])) 
           & (1U <= (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])));
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo) 
             & (1U == (7U & vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U]))) 
            << 2U) | ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
                        & (1U == (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U]))) 
                       << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                                 & (1U == (7U & vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U])))));
    __Vtableidx11 = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx11];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx11];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li 
        = ((((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo) 
             & ((1U != (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])) 
                & (1U <= (7U & vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U])))) 
            << 1U) | ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo) 
                      & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__gt)));
    __Vtableidx10 = (((IData)(vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i) 
                      << 2U) | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_hcf3d328a_0[__Vtableidx10];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_h40450cd2_0[__Vtableidx10];
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release));
    __Vtableidx12 = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li) 
                      << 1U) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx12];
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o 
        = Vtestbench__ConstPool__TABLE_hb25c36cc_0[__Vtableidx12];
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__empty_r)))));
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release));
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
           & ((4U & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__empty_r)) 
                     << 2U)) | (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li)));
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
           & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__valids_li));
    vlSelf->__PVT__link_o[0U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[1U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[1U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[1U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[1U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[2U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[2U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[2U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[2U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[3U] = ((vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->data_o[3U] 
                                  & (- (IData)((1U 
                                                & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                   >> 2U))))) 
                                 | ((vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->data_o[3U] 
                                     & (- (IData)((1U 
                                                   & ((IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo) 
                                                      >> 1U))))) 
                                    | (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->data_o[3U] 
                                       & (- (IData)(
                                                    (1U 
                                                     & (IData)(vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo)))))));
    vlSelf->__PVT__link_o[4U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  << 2U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0))) 
                                             << 1U) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)))));
    vlSelf->__PVT__link_o[5U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[6U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[5U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[1U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[7U] = ((((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[6U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[2U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1eU) | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                               << 2U));
    vlSelf->__PVT__link_o[8U] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                  << 4U) | (((IData)(
                                                     (0U 
                                                      != (IData)(vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                             << 3U) 
                                            | ((4U 
                                                & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer->__PVT__full_r)) 
                                                   << 2U)) 
                                               | (((vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[7U] 
                                                    & (- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo) 
                                                                     >> 1U))))) 
                                                   | (vlSelf->__Vcellout__out_ch__BRA__1__KET____DOT__conc4__o[3U] 
                                                      & (- (IData)(
                                                                   (1U 
                                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo)))))) 
                                                  >> 0x1eU))));
    vlSelf->__PVT__link_o[9U] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[4U] 
                                    & (- (IData)((1U 
                                                  & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                     >> 1U))))) 
                                   | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[0U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                  >> 0x1cU) | (((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
                                                 & (- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                  >> 1U))))) 
                                                | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                               << 4U));
    vlSelf->__PVT__link_o[0xaU] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[5U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[1U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1cU) | (((
                                                   vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 << 4U));
    vlSelf->__PVT__link_o[0xbU] = ((((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[6U] 
                                      & (- (IData)(
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                       >> 1U))))) 
                                     | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[2U] 
                                        & (- (IData)(
                                                     (1U 
                                                      & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                    >> 0x1cU) | (((
                                                   vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 << 4U));
    vlSelf->__PVT__link_o[0xcU] = (((IData)((0U != (IData)(vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))) 
                                    << 5U) | ((0x10U 
                                               & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__twofer->__PVT__full_r)) 
                                                  << 4U)) 
                                              | (((vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[7U] 
                                                   & (- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo) 
                                                                    >> 1U))))) 
                                                  | (vlSelf->__Vcellout__out_ch__BRA__2__KET____DOT__conc4__o[3U] 
                                                     & (- (IData)(
                                                                  (1U 
                                                                   & (IData)(vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo)))))) 
                                                 >> 0x1cU)));
}
