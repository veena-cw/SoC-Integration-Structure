// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_int_unbox__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__irs1_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__irs1_unbox__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he20d86c2__0;
    VlWide<3>/*95:0*/ __Vtemp_h993951fb__0;
    VlWide<3>/*95:0*/ __Vtemp_he84e6007__0;
    VlWide<3>/*95:0*/ __Vtemp_haef572f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h1eb98c65__0;
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U))) ? 
                          (((- (QData)((IData)((1U 
                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                   >> 2U))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                         >> 3U)))))
                           : ((2U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                            >> 3U)))
                               ? (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                          >> 2U))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                                   >> 3U)))))
                               : ((1U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                >> 3U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                                      >> 2U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                                                     << 0x1dU) 
                                                                    | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                                       >> 3U)))))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U])) 
                                        >> 3U))))));
    if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        __Vtemp_he20d86c2__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 7U)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_he84e6007__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    } else {
        __Vtemp_he20d86c2__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0xfU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_he84e6007__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    }
    if ((2U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            __Vtemp_h993951fb__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
            __Vtemp_haef572f4__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
        } else {
            __Vtemp_h993951fb__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
            __Vtemp_haef572f4__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
        }
    } else if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        __Vtemp_h993951fb__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x1fU))))))) 
                                            >> 0x20U));
        __Vtemp_haef572f4__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_h993951fb__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
        __Vtemp_haef572f4__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
    }
    if (((3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU]) 
         >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                   >> 3U)))) {
        if ((2U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            __Vtemp_h1eb98c65__0[0U] = ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                         ? (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U)))))))) 
                                             << 8U) 
                                            | (0xffU 
                                               & (IData)(vlSelf->__PVT__raw)))
                                         : (((IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU)))))))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & (IData)(vlSelf->__PVT__raw))));
            __Vtemp_h1eb98c65__0[1U] = __Vtemp_he20d86c2__0[1U];
        } else if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            __Vtemp_h1eb98c65__0[0U] = (IData)(vlSelf->__PVT__raw);
            __Vtemp_h1eb98c65__0[1U] = (IData)((0x1ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x1fU))))))));
        } else {
            __Vtemp_h1eb98c65__0[0U] = (IData)(vlSelf->__PVT__raw);
            __Vtemp_h1eb98c65__0[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
    } else if ((2U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        __Vtemp_h1eb98c65__0[0U] = ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                     ? (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)))
                                     : (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw))));
        __Vtemp_h1eb98c65__0[1U] = __Vtemp_he84e6007__0[1U];
    } else if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        __Vtemp_h1eb98c65__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h1eb98c65__0[1U] = (IData)((0x1ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__raw 
                                                                             >> 0x3fU))))))));
    } else {
        __Vtemp_h1eb98c65__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h1eb98c65__0[1U] = (IData)((vlSelf->__PVT__raw 
                                            >> 0x20U));
    }
    if ((4U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        if ((2U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            vlSelf->__PVT__val_o[0U] = ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                         ? (0xffU & (IData)(vlSelf->__PVT__raw))
                                         : (0xffffU 
                                            & (IData)(vlSelf->__PVT__raw)));
            vlSelf->__PVT__val_o[1U] = 0U;
        } else if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = 0U;
        } else {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
        vlSelf->__PVT__val_o[2U] = 0U;
    } else {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h1eb98c65__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_h1eb98c65__0[1U];
        vlSelf->__PVT__val_o[2U] = (((3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU]) 
                                     >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                               >> 3U)))
                                     ? __Vtemp_h993951fb__0[2U]
                                     : __Vtemp_haef572f4__0[2U]);
    }
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__irs2_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__irs2_unbox__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h1ea6a2d0__0;
    VlWide<3>/*95:0*/ __Vtemp_hb634bbb3__0;
    VlWide<3>/*95:0*/ __Vtemp_h18278316__0;
    VlWide<3>/*95:0*/ __Vtemp_h4c2672d5__0;
    VlWide<3>/*95:0*/ __Vtemp_h60996f41__0;
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U))) ? 
                          (((- (QData)((IData)((1U 
                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                   >> 2U))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                         >> 3U)))))
                           : ((2U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                            >> 3U)))
                               ? (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                          >> 2U))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                                   >> 3U)))))
                               : ((1U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                >> 3U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                                      >> 2U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                                                     << 0x1dU) 
                                                                    | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                                       >> 3U)))))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U])) 
                                        >> 3U))))));
    if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
        __Vtemp_h1ea6a2d0__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 7U)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h18278316__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    } else {
        __Vtemp_h1ea6a2d0__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0xfU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h18278316__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    }
    if ((0x40000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
        if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
            __Vtemp_hb634bbb3__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_hb634bbb3__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
            __Vtemp_h4c2672d5__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h4c2672d5__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
        } else {
            __Vtemp_hb634bbb3__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_hb634bbb3__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
            __Vtemp_h4c2672d5__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h4c2672d5__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
        }
    } else if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
        __Vtemp_hb634bbb3__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_hb634bbb3__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x1fU))))))) 
                                            >> 0x20U));
        __Vtemp_h4c2672d5__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h4c2672d5__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_hb634bbb3__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_hb634bbb3__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
        __Vtemp_h4c2672d5__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h4c2672d5__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
    }
    __Vtemp_h60996f41__0[1U] = (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                        >> 0x1dU)) 
                                 >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                           >> 3U)))
                                 ? ((0x40000000U & 
                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                     ? __Vtemp_h1ea6a2d0__0[1U]
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x1fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U))))
                                 : ((0x40000000U & 
                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                     ? __Vtemp_h18278316__0[1U]
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U)))));
    if ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
            vlSelf->__PVT__val_o[0U] = ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                         ? (0xffU & (IData)(vlSelf->__PVT__raw))
                                         : (0xffffU 
                                            & (IData)(vlSelf->__PVT__raw)));
            vlSelf->__PVT__val_o[1U] = 0U;
        } else if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = 0U;
        } else {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
        vlSelf->__PVT__val_o[2U] = 0U;
    } else if (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                       >> 0x1dU)) >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                            >> 3U)))) {
        vlSelf->__PVT__val_o[0U] = __Vtemp_hb634bbb3__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_h60996f41__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_hb634bbb3__0[2U];
    } else {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h4c2672d5__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_h60996f41__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_h4c2672d5__0[2U];
    }
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__irs1_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__irs1_unbox__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h2cba27ce__0;
    VlWide<3>/*95:0*/ __Vtemp_h14d30337__0;
    VlWide<3>/*95:0*/ __Vtemp_h7653fba8__0;
    VlWide<3>/*95:0*/ __Vtemp_h601d125f__0;
    VlWide<3>/*95:0*/ __Vtemp_h4648c8a8__0;
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                        >> 6U))) ? 
                          (((- (QData)((IData)((1U 
                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                                   >> 5U))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                         >> 6U)))))
                           : ((2U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                            >> 6U)))
                               ? (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                                          >> 5U))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                                   >> 6U)))))
                               : ((1U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                                >> 6U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                                                      >> 5U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[6U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                                       >> 6U)))))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) 
                                       << 0x3aU) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[6U])) 
                                        << 0x1aU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U])) 
                                        >> 6U))))));
    if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        __Vtemp_h2cba27ce__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 7U)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h7653fba8__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    } else {
        __Vtemp_h2cba27ce__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0xfU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h7653fba8__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    }
    if ((0x40000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            __Vtemp_h14d30337__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h14d30337__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
            __Vtemp_h601d125f__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h601d125f__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
        } else {
            __Vtemp_h14d30337__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h14d30337__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
            __Vtemp_h601d125f__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h601d125f__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
        }
    } else if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        __Vtemp_h14d30337__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h14d30337__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x1fU))))))) 
                                            >> 0x20U));
        __Vtemp_h601d125f__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h601d125f__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_h14d30337__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h14d30337__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
        __Vtemp_h601d125f__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h601d125f__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
    }
    __Vtemp_h4648c8a8__0[1U] = (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                        >> 0x1dU)) 
                                 >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                           >> 6U)))
                                 ? ((0x40000000U & 
                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                     ? __Vtemp_h2cba27ce__0[1U]
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x1fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U))))
                                 : ((0x40000000U & 
                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                     ? __Vtemp_h7653fba8__0[1U]
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U)))));
    if ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            vlSelf->__PVT__val_o[0U] = ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (0xffU & (IData)(vlSelf->__PVT__raw))
                                         : (0xffffU 
                                            & (IData)(vlSelf->__PVT__raw)));
            vlSelf->__PVT__val_o[1U] = 0U;
        } else if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = 0U;
        } else {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
        vlSelf->__PVT__val_o[2U] = 0U;
    } else if (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                       >> 0x1dU)) >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                            >> 6U)))) {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h14d30337__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_h4648c8a8__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_h14d30337__0[2U];
    } else {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h601d125f__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_h4648c8a8__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_h601d125f__0[2U];
    }
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__irs2_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__irs2_unbox__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3fb11fe7__0;
    VlWide<3>/*95:0*/ __Vtemp_hcff61482__0;
    VlWide<3>/*95:0*/ __Vtemp_h85455a78__0;
    VlWide<3>/*95:0*/ __Vtemp_h42baa677__0;
    VlWide<3>/*95:0*/ __Vtemp_hc37ada15__0;
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                        >> 4U))) ? 
                          (((- (QData)((IData)((1U 
                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                   >> 3U))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[3U] 
                                                         >> 4U)))))
                           : ((2U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                            >> 4U)))
                               ? (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                          >> 3U))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[3U] 
                                                                   >> 4U)))))
                               : ((1U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                >> 4U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                                      >> 3U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[4U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[3U] 
                                                                       >> 4U)))))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[4U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[3U])) 
                                        >> 4U))))));
    if ((0x4000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        __Vtemp_h3fb11fe7__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 7U)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h85455a78__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    } else {
        __Vtemp_h3fb11fe7__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0xfU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h85455a78__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    }
    if ((0x8000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        if ((0x4000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            __Vtemp_hcff61482__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_hcff61482__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
            __Vtemp_h42baa677__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h42baa677__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
        } else {
            __Vtemp_hcff61482__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_hcff61482__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
            __Vtemp_h42baa677__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h42baa677__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
        }
    } else if ((0x4000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        __Vtemp_hcff61482__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_hcff61482__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x1fU))))))) 
                                            >> 0x20U));
        __Vtemp_h42baa677__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h42baa677__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_hcff61482__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_hcff61482__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
        __Vtemp_h42baa677__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h42baa677__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
    }
    __Vtemp_hc37ada15__0[1U] = (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                        >> 0x1aU)) 
                                 >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                           >> 4U)))
                                 ? ((0x8000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                     ? __Vtemp_h3fb11fe7__0[1U]
                                     : ((0x4000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x1fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U))))
                                 : ((0x8000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                     ? __Vtemp_h85455a78__0[1U]
                                     : ((0x4000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U)))));
    if ((0x10000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        if ((0x8000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            vlSelf->__PVT__val_o[0U] = ((0x4000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (0xffU & (IData)(vlSelf->__PVT__raw))
                                         : (0xffffU 
                                            & (IData)(vlSelf->__PVT__raw)));
            vlSelf->__PVT__val_o[1U] = 0U;
        } else if ((0x4000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = 0U;
        } else {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
        vlSelf->__PVT__val_o[2U] = 0U;
    } else if (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                       >> 0x1aU)) >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                            >> 4U)))) {
        vlSelf->__PVT__val_o[0U] = __Vtemp_hcff61482__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_hc37ada15__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_hcff61482__0[2U];
    } else {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h42baa677__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_hc37ada15__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_h42baa677__0[2U];
    }
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox__0\n"); );
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                           ? (((- (QData)((IData)((
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[1U] 
                                                   >> 0x1fU)))) 
                               << 8U) | (QData)((IData)(
                                                        (0xffU 
                                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[0U]))))
                           : ((2U == (3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                               ? (((- (QData)((IData)(
                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[1U] 
                                                       >> 0x1fU)))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[0U]))))
                               : ((1U == (3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[1U] 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[0U])))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[0U]))))));
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__irs1_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__irs1_unbox__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_heab9bdab__0;
    VlWide<3>/*95:0*/ __Vtemp_hb5086b4a__0;
    VlWide<3>/*95:0*/ __Vtemp_h46403330__0;
    VlWide<3>/*95:0*/ __Vtemp_h7d0625b8__0;
    VlWide<3>/*95:0*/ __Vtemp_h27cce549__0;
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U))) ? 
                          (((- (QData)((IData)((1U 
                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                   >> 2U))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                         >> 3U)))))
                           : ((2U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                            >> 3U)))
                               ? (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                          >> 2U))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                                   >> 3U)))))
                               : ((1U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                >> 3U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                                      >> 2U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                                                     << 0x1dU) 
                                                                    | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                                       >> 3U)))))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U])) 
                                        >> 3U))))));
    if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        __Vtemp_heab9bdab__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 7U)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h46403330__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    } else {
        __Vtemp_heab9bdab__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0xfU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h46403330__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    }
    if ((2U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            __Vtemp_hb5086b4a__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
            __Vtemp_h7d0625b8__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
        } else {
            __Vtemp_hb5086b4a__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
            __Vtemp_h7d0625b8__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
        }
    } else if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        __Vtemp_hb5086b4a__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x1fU))))))) 
                                            >> 0x20U));
        __Vtemp_h7d0625b8__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_hb5086b4a__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
        __Vtemp_h7d0625b8__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
    }
    if (((3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU]) 
         >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                   >> 3U)))) {
        if ((2U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            __Vtemp_h27cce549__0[0U] = ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                         ? (((IData)(
                                                     (0x1ffffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U)))))))) 
                                             << 8U) 
                                            | (0xffU 
                                               & (IData)(vlSelf->__PVT__raw)))
                                         : (((IData)(
                                                     (0x1ffffffffffffULL 
                                                      & (- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU)))))))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & (IData)(vlSelf->__PVT__raw))));
            __Vtemp_h27cce549__0[1U] = __Vtemp_heab9bdab__0[1U];
        } else if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            __Vtemp_h27cce549__0[0U] = (IData)(vlSelf->__PVT__raw);
            __Vtemp_h27cce549__0[1U] = (IData)((0x1ffffffffULL 
                                                & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x1fU))))))));
        } else {
            __Vtemp_h27cce549__0[0U] = (IData)(vlSelf->__PVT__raw);
            __Vtemp_h27cce549__0[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
    } else if ((2U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        __Vtemp_h27cce549__0[0U] = ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                     ? (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)))
                                     : (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw))));
        __Vtemp_h27cce549__0[1U] = __Vtemp_h46403330__0[1U];
    } else if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        __Vtemp_h27cce549__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h27cce549__0[1U] = (IData)((0x1ffffffffULL 
                                            & (- (QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__raw 
                                                                             >> 0x3fU))))))));
    } else {
        __Vtemp_h27cce549__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h27cce549__0[1U] = (IData)((vlSelf->__PVT__raw 
                                            >> 0x20U));
    }
    if ((4U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
        if ((2U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            vlSelf->__PVT__val_o[0U] = ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                         ? (0xffU & (IData)(vlSelf->__PVT__raw))
                                         : (0xffffU 
                                            & (IData)(vlSelf->__PVT__raw)));
            vlSelf->__PVT__val_o[1U] = 0U;
        } else if ((1U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])) {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = 0U;
        } else {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
        vlSelf->__PVT__val_o[2U] = 0U;
    } else {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h27cce549__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_h27cce549__0[1U];
        vlSelf->__PVT__val_o[2U] = (((3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU]) 
                                     >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                               >> 3U)))
                                     ? __Vtemp_hb5086b4a__0[2U]
                                     : __Vtemp_h7d0625b8__0[2U]);
    }
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__irs2_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__irs2_unbox__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he94fdde0__0;
    VlWide<3>/*95:0*/ __Vtemp_hd6875493__0;
    VlWide<3>/*95:0*/ __Vtemp_hf2856405__0;
    VlWide<3>/*95:0*/ __Vtemp_h100b4bb3__0;
    VlWide<3>/*95:0*/ __Vtemp_h4a9aaec3__0;
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U))) ? 
                          (((- (QData)((IData)((1U 
                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                   >> 2U))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                         >> 3U)))))
                           : ((2U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                            >> 3U)))
                               ? (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                          >> 2U))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                                   >> 3U)))))
                               : ((1U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                >> 3U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                                                      >> 2U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                                                     << 0x1dU) 
                                                                    | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                                                       >> 3U)))))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U])) 
                                       << 0x3dU) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U])) 
                                        << 0x1dU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U])) 
                                        >> 3U))))));
    if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
        __Vtemp_he94fdde0__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 7U)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_hf2856405__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    } else {
        __Vtemp_he94fdde0__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0xfU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_hf2856405__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    }
    if ((0x40000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
        if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
            __Vtemp_hd6875493__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_hd6875493__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
            __Vtemp_h100b4bb3__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h100b4bb3__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
        } else {
            __Vtemp_hd6875493__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_hd6875493__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
            __Vtemp_h100b4bb3__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h100b4bb3__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
        }
    } else if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
        __Vtemp_hd6875493__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_hd6875493__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x1fU))))))) 
                                            >> 0x20U));
        __Vtemp_h100b4bb3__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h100b4bb3__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_hd6875493__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_hd6875493__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
        __Vtemp_h100b4bb3__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h100b4bb3__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
    }
    __Vtemp_h4a9aaec3__0[1U] = (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                        >> 0x1dU)) 
                                 >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                           >> 3U)))
                                 ? ((0x40000000U & 
                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                     ? __Vtemp_he94fdde0__0[1U]
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x1fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U))))
                                 : ((0x40000000U & 
                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                     ? __Vtemp_hf2856405__0[1U]
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U)))));
    if ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
            vlSelf->__PVT__val_o[0U] = ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])
                                         ? (0xffU & (IData)(vlSelf->__PVT__raw))
                                         : (0xffffU 
                                            & (IData)(vlSelf->__PVT__raw)));
            vlSelf->__PVT__val_o[1U] = 0U;
        } else if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU])) {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = 0U;
        } else {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
        vlSelf->__PVT__val_o[2U] = 0U;
    } else if (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                       >> 0x1dU)) >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                            >> 3U)))) {
        vlSelf->__PVT__val_o[0U] = __Vtemp_hd6875493__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_h4a9aaec3__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_hd6875493__0[2U];
    } else {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h100b4bb3__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_h4a9aaec3__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_h100b4bb3__0[2U];
    }
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__irs1_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__irs1_unbox__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc3c8a555__0;
    VlWide<3>/*95:0*/ __Vtemp_h8a9dc71e__0;
    VlWide<3>/*95:0*/ __Vtemp_h4ea8a26a__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b8f41bd__0;
    VlWide<3>/*95:0*/ __Vtemp_hf94f2558__0;
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                        >> 6U))) ? 
                          (((- (QData)((IData)((1U 
                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                                   >> 5U))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                         >> 6U)))))
                           : ((2U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                            >> 6U)))
                               ? (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                                          >> 5U))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                                   >> 6U)))))
                               : ((1U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                                >> 6U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                                                      >> 5U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[6U] 
                                                                     << 0x1aU) 
                                                                    | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                                       >> 6U)))))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) 
                                       << 0x3aU) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[6U])) 
                                        << 0x1aU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U])) 
                                        >> 6U))))));
    if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        __Vtemp_hc3c8a555__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 7U)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_h4ea8a26a__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    } else {
        __Vtemp_hc3c8a555__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0xfU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h4ea8a26a__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    }
    if ((0x40000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            __Vtemp_h8a9dc71e__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h8a9dc71e__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
            __Vtemp_h9b8f41bd__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h9b8f41bd__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
        } else {
            __Vtemp_h8a9dc71e__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h8a9dc71e__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
            __Vtemp_h9b8f41bd__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_h9b8f41bd__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
        }
    } else if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        __Vtemp_h8a9dc71e__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h8a9dc71e__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x1fU))))))) 
                                            >> 0x20U));
        __Vtemp_h9b8f41bd__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h9b8f41bd__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_h8a9dc71e__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h8a9dc71e__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
        __Vtemp_h9b8f41bd__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_h9b8f41bd__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
    }
    __Vtemp_hf94f2558__0[1U] = (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                        >> 0x1dU)) 
                                 >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                           >> 6U)))
                                 ? ((0x40000000U & 
                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                     ? __Vtemp_hc3c8a555__0[1U]
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x1fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U))))
                                 : ((0x40000000U & 
                                     vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                     ? __Vtemp_h4ea8a26a__0[1U]
                                     : ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U)))));
    if ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            vlSelf->__PVT__val_o[0U] = ((0x20000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (0xffU & (IData)(vlSelf->__PVT__raw))
                                         : (0xffffU 
                                            & (IData)(vlSelf->__PVT__raw)));
            vlSelf->__PVT__val_o[1U] = 0U;
        } else if ((0x20000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = 0U;
        } else {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
        vlSelf->__PVT__val_o[2U] = 0U;
    } else if (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                       >> 0x1dU)) >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                            >> 6U)))) {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h8a9dc71e__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_hf94f2558__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_h8a9dc71e__0[2U];
    } else {
        vlSelf->__PVT__val_o[0U] = __Vtemp_h9b8f41bd__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_hf94f2558__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_h9b8f41bd__0[2U];
    }
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__irs2_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__irs2_unbox__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he2acaaf7__0;
    VlWide<3>/*95:0*/ __Vtemp_hf67c455e__0;
    VlWide<3>/*95:0*/ __Vtemp_haf69f70b__0;
    VlWide<3>/*95:0*/ __Vtemp_heac542d3__0;
    VlWide<3>/*95:0*/ __Vtemp_hb20fa88d__0;
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                        >> 4U))) ? 
                          (((- (QData)((IData)((1U 
                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                   >> 3U))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[3U] 
                                                         >> 4U)))))
                           : ((2U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                            >> 4U)))
                               ? (((- (QData)((IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                          >> 3U))))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[3U] 
                                                                   >> 4U)))))
                               : ((1U == (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                >> 4U)))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                                                      >> 3U)))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[4U] 
                                                                     << 0x1cU) 
                                                                    | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[3U] 
                                                                       >> 4U)))))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U])) 
                                       << 0x3cU) | 
                                      (((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[4U])) 
                                        << 0x1cU) | 
                                       ((QData)((IData)(
                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[3U])) 
                                        >> 4U))))));
    if ((0x4000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        __Vtemp_he2acaaf7__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 7U)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
        __Vtemp_haf69f70b__0[1U] = (((IData)((0x1ffffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x18U) | ((IData)(
                                                          ((0x1ffffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 8U));
    } else {
        __Vtemp_he2acaaf7__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0xfU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_haf69f70b__0[1U] = (((IData)((0x1ffffffffffffULL 
                                              & (- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__raw 
                                                                               >> 0x3fU)))))))) 
                                     >> 0x10U) | ((IData)(
                                                          ((0x1ffffffffffffULL 
                                                            & (- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                           >> 0x20U)) 
                                                  << 0x10U));
    }
    if ((0x8000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        if ((0x4000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            __Vtemp_hf67c455e__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_hf67c455e__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 7U))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
            __Vtemp_heac542d3__0[0U] = (((IData)((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 8U) | (0xffU 
                                                   & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_heac542d3__0[2U] = ((IData)(((0x1ffffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x18U);
        } else {
            __Vtemp_hf67c455e__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_hf67c455e__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0xfU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
            __Vtemp_heac542d3__0[0U] = (((IData)((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU)))))))) 
                                         << 0x10U) 
                                        | (0xffffU 
                                           & (IData)(vlSelf->__PVT__raw)));
            __Vtemp_heac542d3__0[2U] = ((IData)(((0x1ffffffffffffULL 
                                                  & (- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))) 
                                                 >> 0x20U)) 
                                        >> 0x10U);
        }
    } else if ((0x4000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        __Vtemp_hf67c455e__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_hf67c455e__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x1fU))))))) 
                                            >> 0x20U));
        __Vtemp_heac542d3__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_heac542d3__0[2U] = (IData)(((0x1ffffffffULL 
                                             & (- (QData)((IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__raw 
                                                                              >> 0x3fU))))))) 
                                            >> 0x20U));
    } else {
        __Vtemp_hf67c455e__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_hf67c455e__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
        __Vtemp_heac542d3__0[0U] = (IData)(vlSelf->__PVT__raw);
        __Vtemp_heac542d3__0[2U] = (1U & (IData)((vlSelf->__PVT__raw 
                                                  >> 0x3fU)));
    }
    __Vtemp_hb20fa88d__0[1U] = (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                                        >> 0x1aU)) 
                                 >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                           >> 4U)))
                                 ? ((0x8000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                     ? __Vtemp_he2acaaf7__0[1U]
                                     : ((0x4000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x1fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U))))
                                 : ((0x8000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                     ? __Vtemp_haf69f70b__0[1U]
                                     : ((0x4000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (IData)(
                                                   (0x1ffffffffULL 
                                                    & (- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->__PVT__raw 
                                                                                >> 0x3fU))))))))
                                         : (IData)(
                                                   (vlSelf->__PVT__raw 
                                                    >> 0x20U)))));
    if ((0x10000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
        if ((0x8000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            vlSelf->__PVT__val_o[0U] = ((0x4000000U 
                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])
                                         ? (0xffU & (IData)(vlSelf->__PVT__raw))
                                         : (0xffffU 
                                            & (IData)(vlSelf->__PVT__raw)));
            vlSelf->__PVT__val_o[1U] = 0U;
        } else if ((0x4000000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U])) {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = 0U;
        } else {
            vlSelf->__PVT__val_o[0U] = (IData)(vlSelf->__PVT__raw);
            vlSelf->__PVT__val_o[1U] = (IData)((vlSelf->__PVT__raw 
                                                >> 0x20U));
        }
        vlSelf->__PVT__val_o[2U] = 0U;
    } else if (((3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[7U] 
                       >> 0x1aU)) >= (3U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r[5U] 
                                            >> 4U)))) {
        vlSelf->__PVT__val_o[0U] = __Vtemp_hf67c455e__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_hb20fa88d__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_hf67c455e__0[2U];
    } else {
        vlSelf->__PVT__val_o[0U] = __Vtemp_heac542d3__0[0U];
        vlSelf->__PVT__val_o[1U] = __Vtemp_hb20fa88d__0[1U];
        vlSelf->__PVT__val_o[2U] = __Vtemp_heac542d3__0[2U];
    }
}

VL_INLINE_OPT void Vtestbench_bp_be_int_unbox__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox__0(Vtestbench_bp_be_int_unbox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_int_unbox__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox__0\n"); );
    // Body
    vlSelf->__PVT__raw = ((3U == (3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                           ? (((- (QData)((IData)((
                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[1U] 
                                                   >> 0x1fU)))) 
                               << 8U) | (QData)((IData)(
                                                        (0xffU 
                                                         & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[0U]))))
                           : ((2U == (3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                               ? (((- (QData)((IData)(
                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[1U] 
                                                       >> 0x1fU)))) 
                                   << 0x10U) | (QData)((IData)(
                                                               (0xffffU 
                                                                & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[0U]))))
                               : ((1U == (3U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                   ? (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[1U] 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[0U])))
                                   : (((QData)((IData)(
                                                       vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[0U]))))));
}
