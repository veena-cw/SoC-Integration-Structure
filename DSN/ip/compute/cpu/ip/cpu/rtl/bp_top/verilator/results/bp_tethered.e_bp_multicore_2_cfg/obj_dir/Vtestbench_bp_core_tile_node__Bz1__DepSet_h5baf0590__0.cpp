// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h00a540f1_0;

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__5(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__5\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h31bdb563__0;
    VlWide<17>/*543:0*/ __Vtemp_h31bdb563__1;
    VlWide<17>/*543:0*/ __Vtemp_h31bdb563__2;
    // Body
    VL_SHIFTL_WWI(520,520,32, __Vtemp_h31bdb563__0, vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xcU] 
                       & __Vtemp_h31bdb563__0[0xcU]) 
                      >> 4U) & (0U != (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r))));
    VL_SHIFTL_WWI(520,520,32, __Vtemp_h31bdb563__1, vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li 
        = (((((Vtestbench__ConstPool__CONST_h00a540f1_0[0xcU] 
               & __Vtemp_h31bdb563__1[0xcU]) >> 4U) 
             & ((IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                >> 1U)) << 1U) | (1U & ((~ (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer->__PVT__full_r)) 
                                        & ((IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0) 
                                           >> 1U))));
    VL_SHIFTL_WWI(520,520,32, __Vtemp_h31bdb563__2, vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i 
        = ((4U & (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xcU] 
                    & __Vtemp_h31bdb563__2[0xcU]) >> 2U) 
                  & ((IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                     << 2U))) | (1U & ((~ (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer->__PVT__full_r)) 
                                       & (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0))));
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                       >> 2U));
    } else if (((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                       >> 2U));
    } else if (((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__5(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__5\n"); );
    // Body
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[4U] 
                     & (0U != (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release)))) 
                  & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[8U] 
                      >> 2U) & (0U != (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__reqs_li))
                      ? (~ (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li 
        = (((IData)(((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[8U] 
                      >> 2U) & ((IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                                >> 1U))) << 1U) | (1U 
                                                   & ((~ (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer->__PVT__full_r)) 
                                                      & ((IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0) 
                                                         >> 1U))));
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__yumis_li 
        = (((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[4U] 
             & ((IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                >> 1U)) << 1U) | ((~ (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer->__PVT__full_r)) 
                                  & ((IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0) 
                                     >> 2U)));
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i 
        = ((4U & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[8U] 
                  & ((IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
                     << 2U))) | ((2U & ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[4U] 
                                         & (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0)) 
                                        << 1U)) | (1U 
                                                   & ((~ (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_twofer->__PVT__full_r)) 
                                                      & (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0)))));
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__twofer->data_o[0U] 
                       >> 2U));
    } else if (((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__twofer->data_o[0U] 
                       >> 2U));
    } else if (((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__yumis_li)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (0U != (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer->data_o[0U] 
                       >> 2U));
    } else if (((0U != (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (0U != (IData)(vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) {
        vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
}
