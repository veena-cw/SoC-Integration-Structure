// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_pipe_int__Bz1.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__461(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__461\n"); );
    // Init
    QData/*63:0*/ __Vtemp_h97040335__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__npc_w_v 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__catchup__DOT__pipe_int_catchup__flush_i) 
           | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__br_pkt_cast_o 
              >> 0x2aU));
    __Vtemp_h97040335__0 = (((QData)((IData)((0x30U 
                                              == (0x30U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U])))) 
                             << 0x2aU) | (((QData)((IData)(
                                                           ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__br_pkt_cast_o 
                                                             >> 0x2aU) 
                                                            & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU] 
                                                                >> 0x11U) 
                                                               | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0))))) 
                                           << 0x29U) 
                                          | (((QData)((IData)(
                                                              ((IData)(
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__br_pkt_cast_o 
                                                                        >> 0x2aU)) 
                                                               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__btaken_o)))) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__br_pkt_cast_o 
                                                                   >> 0x2aU) 
                                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                                                     >> 3U)))) 
                                                 << 0x27U) 
                                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__btaken_o)
                                                    ? 
                                                   (0x7ffffffffeULL 
                                                    & ((((QData)((IData)(
                                                                         ((0x8000U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                                                           ? 
                                                                          ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xcU] 
                                                                            << 0x1bU) 
                                                                           | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xbU] 
                                                                              >> 5U))
                                                                           : (IData)(
                                                                                ((0x7fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U])) 
                                                                                << 0x1fU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xfU])) 
                                                                                >> 1U))) 
                                                                                >> 0x20U))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0x8000U 
                                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xdU])
                                                                            ? 
                                                                           ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xbU] 
                                                                             << 0x1bU) 
                                                                            | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xaU] 
                                                                               >> 5U))
                                                                            : (IData)(
                                                                                (0x7fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U])) 
                                                                                << 0x1fU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xfU])) 
                                                                                >> 1U)))))))) 
                                                       + 
                                                       (((QData)((IData)(
                                                                         vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[7U])) 
                                                         << 0x3dU) 
                                                        | (((QData)((IData)(
                                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[7U])) 
                                                            << 0x1dU) 
                                                           | ((QData)((IData)(
                                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[6U])) 
                                                              >> 3U)))))
                                                    : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__br_pkt_cast_o 
        = __Vtemp_h97040335__0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__last_instr_was_btaken 
        = (1U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__attaboy_pending_reg__DOT__data_r) 
                  >> 1U) | (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__br_pkt_cast_o 
                                    >> 0x28U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__last_instr_was_branch 
        = (1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__attaboy_pending_reg__DOT__data_r) 
                 | (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__br_pkt_cast_o 
                            >> 0x29U))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__87(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__87\n"); );
    // Init
    QData/*37:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 = 0;
    IData/*31:0*/ __Vtemp_h0a7306fd__0;
    CData/*31:0*/ __Vtemp_h1edfa4be__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = (0xffffffc0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]);
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[0U]))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0x3fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 6U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffff000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
               >> 0x1aU) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                                     >> 0x20U)) << 6U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U])) 
                                            >> 6U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 0xcU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0xfffc0000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
               >> 0x14U) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                                     >> 0x20U)) << 0xcU)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])) 
                               << 0x14U) | ((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U])) 
                                            >> 0xcU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0x3ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 0x12U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
        = ((0xff000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U]) 
           | (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
               >> 0xeU) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                                    >> 0x20U)) << 0x12U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[4U])) 
                               << 0xeU) | ((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])) 
                                           >> 0x12U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
        = ((0xffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 0x18U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
        = ((0xc0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U]) 
           | (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
               >> 8U) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                                  >> 0x20U)) << 0x18U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[5U])) 
                               << 8U) | ((QData)((IData)(
                                                         vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[4U])) 
                                         >> 0x18U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
        = ((0x3fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[6U] 
        = (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
            >> 2U) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                               >> 0x20U)) << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[7U] 
        = (0xfU & ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                            >> 0x20U)) >> 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffffffdfU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x20U & ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                       | (0xffffe0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                       >> 8U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffffffefU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x10U & ((0xfffffff0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                       | (0xfffff0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                       >> 8U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xfffffff7U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (8U & ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                    | (0xfffff8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                    >> 8U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (4U & ((0xfffffffcU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                    | (0xfffffcU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                    >> 8U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
        = ((0xfffffe00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U]) 
           | (0x1ffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
                        | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0U])));
    __Vtemp_h0a7306fd__0 = (0x1ffffffU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                                            << 0x17U) 
                                           | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
                                              >> 9U)) 
                                          | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[1U] 
                                              << 0x17U) 
                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0U] 
                                                >> 9U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
        = ((0x1ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U]) 
           | (0xfffffe00U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0U])));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xfffffffcU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (__Vtemp_h0a7306fd__0 >> 0x17U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffffffdfU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x20U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                       & (((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                               >> 0x15U)) << 5U) | 
                          (0x7ffffe0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                         >> 5U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                        & (((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                                >> 0x15U)) << 0xbU) 
                           | (0xfffff800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                             << 9U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0xfffdffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | (0x20000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                          & (((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                                  >> 0x15U)) << 0x11U) 
                             | (0xfffe0000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                               << 9U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
        = ((0xff7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U]) 
           | (0x800000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
                           & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                               << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U] 
                                         << 9U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffffffefU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x10U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                       & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                              >> 0x15U)) << 4U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x400U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                        & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                               >> 0x15U)) << 0xaU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | (0x10000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                          & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                                 >> 0x15U)) << 0x10U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xefffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x10000000U & ((0xf0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                             | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys_illegal_instr_lo) 
                                << 0x1cU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x4000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffefffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x100000U & ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                           | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h37a6e350__0) 
                               & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                                          >> 0x36U))) 
                              << 0x14U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffdfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x200000U & ((0xffe00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                           | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h37a6e350__0) 
                               & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                                          >> 0x37U))) 
                              << 0x15U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x40000000U & ((0xc0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                             | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_load_misaligned_lo) 
                                << 0x1eU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0x7fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x80000000U & ((0x80000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
                                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_access_fault_v)) 
                                << 0x1fU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x40U & ((0xffffffc0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                       | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
                           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_page_fault_v)) 
                          << 6U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                    | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_store_misaligned_lo))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffffffdU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (2U & ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                    | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_access_fault_v)) 
                       << 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffffff7fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x80U & ((0xffffff80U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                       | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
                           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_page_fault_v)) 
                          << 7U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]));
    __Vtemp_h1edfa4be__0 = (1U & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                                   >> 0x15U) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                                 >> 9U) 
                                                & (((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU] 
                                                       >> 0x11U) 
                                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__comp_result)) 
                                                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0))
                                                     ? 
                                                    (0x7ffffffffeULL 
                                                     & ((((QData)((IData)(
                                                                          ((0x8000U 
                                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                                            ? 
                                                                           ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xcU] 
                                                                             << 0x1bU) 
                                                                            | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xbU] 
                                                                               >> 5U))
                                                                            : (IData)(
                                                                                ((0x7fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U])) 
                                                                                << 0x1fU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xfU])) 
                                                                                >> 1U))) 
                                                                                >> 0x20U))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((0x8000U 
                                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                                             ? 
                                                                            ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xbU] 
                                                                              << 0x1bU) 
                                                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xaU] 
                                                                                >> 5U))
                                                                             : (IData)(
                                                                                (0x7fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U])) 
                                                                                << 0x1fU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xfU])) 
                                                                                >> 1U)))))))) 
                                                        + 
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[7U])) 
                                                          << 0x3dU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[7U])) 
                                                             << 0x1dU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[6U])) 
                                                               >> 3U)))))
                                                     : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt) 
                                                   != 
                                                   (0x7fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xfU])) 
                                                          >> 1U)))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffdfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (__Vtemp_h1edfa4be__0 << 0x15U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xefffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x10000000U & ((0xf0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                             | (((~ (((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                                          >> 0xaU)) 
                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_v)) 
                                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li))) 
                                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)) 
                                << 0x1cU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffefffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x100000U & ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r) 
                               & ((~ ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                                       >> 0xaU) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_v))) 
                                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li))) 
                              << 0x14U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x400000U & ((0xffc00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                           | (((0U != (0x3ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])) 
                                           << 0x14U) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U])) 
                                             >> 0xcU)))) 
                               & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li)) 
                                  & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__full) 
                                     | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                                         == (3U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__wptr__DOT__ptr_r)))) 
                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_v_li))))) 
                              << 0x16U))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__88(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__88\n"); );
    // Init
    VlWide<3>/*78:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0;
    VL_ZERO_W(79, tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0);
    VlWide<3>/*95:0*/ __Vtemp_hdd3c867c__0;
    VlWide<3>/*95:0*/ __Vtemp_h2fdadcb2__0;
    VlWide<3>/*95:0*/ __Vtemp_h0ae68b42__0;
    VlWide<3>/*95:0*/ __Vtemp_hf6c18fb6__0;
    VlWide<3>/*95:0*/ __Vtemp_h44cb6e81__0;
    VlWide<3>/*95:0*/ __Vtemp_h52ada55f__0;
    VlWide<3>/*95:0*/ __Vtemp_h09e5c1ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h2c505855__0;
    VlWide<3>/*95:0*/ __Vtemp_haafc7da8__0;
    VlWide<3>/*95:0*/ __Vtemp_h70b1c969__0;
    VlWide<3>/*95:0*/ __Vtemp_h95cbd0ae__0;
    CData/*31:0*/ __Vtemp_hc6161148__0;
    CData/*31:0*/ __Vtemp_h84330053__0;
    CData/*31:0*/ __Vtemp_hb4a7e3c9__0;
    CData/*31:0*/ __Vtemp_hddf3c923__0;
    // Body
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] = 0U;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] = 0U;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = ((0x6000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[8U] 
                       >> 2U)) | (0xf80U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[9U] 
                                            >> 3U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
        = tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[1U] 
        = tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xffff8000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U]);
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[1U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[2U]);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0x7fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0xfU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 0x11U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                         << 0xfU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xc0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
               >> 0x11U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                            << 0xfU)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[3U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[2U] 
                         >> 0xfU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[4U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[3U] 
                         >> 0xfU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[4U] 
                      >> 0xfU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0x3fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 2U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                      << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
            >> 2U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                      << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffe000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
              >> 2U));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[5U] 
            << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[4U] 
                      >> 0x1eU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[6U] 
            << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[5U] 
                      >> 0x1eU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[7U] 
                       << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[6U] 
                                 >> 0x1eU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0x1fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0xdU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 0x13U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                         << 0xdU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xf0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
               >> 0x13U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                            << 0xdU)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[8U] 
            << 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[7U] 
                         >> 0xdU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[9U] 
            << 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[8U] 
                         >> 0xdU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[9U] 
                      >> 0xdU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0x1cU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 4U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                      << 0x1cU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
            >> 4U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                      << 0x1cU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0xfffff800U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
              >> 4U));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xaU] 
            << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[9U] 
                      >> 0x1cU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xbU] 
            << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xaU] 
                      >> 0x1cU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xcU] 
                       << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xbU] 
                                 >> 0x1cU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0x7ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0xbU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 0x15U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                         << 0xbU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xeU] 
        = (0x3ffffffU & ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                          >> 0x15U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                                       << 0xbU)));
    __Vtemp_hdd3c867c__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[1U] 
                                  << 0x1bU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
                                               >> 5U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[4U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[3U] 
                                        >> 4U)) : 0U));
    __Vtemp_hdd3c867c__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                                  << 0x1bU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[1U] 
                                               >> 5U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[5U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[4U] 
                                        >> 4U)) : 0U));
    __Vtemp_hdd3c867c__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                                        >> 5U)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                                                    ? 
                                                   ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[6U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[5U] 
                                                       >> 4U))
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
        = ((0x1fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U]) 
           | ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                   ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[4U] 
                       << 0x1cU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[3U] 
                                    >> 4U)) : 0U) << 5U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[1U] 
        = ((__Vtemp_hdd3c867c__0[0U] >> 0x1bU) | (__Vtemp_hdd3c867c__0[1U] 
                                                  << 5U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xffffff80U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | ((__Vtemp_hdd3c867c__0[1U] >> 0x1bU) | 
              (__Vtemp_hdd3c867c__0[2U] << 5U)));
    __Vtemp_h2fdadcb2__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                  << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                                              >> 0x14U)) 
                                | ((((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                         >> 3U)) & 
                                     vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xeU]) 
                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                                       >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0)
                                                   ? (IData)(
                                                             (((QData)((IData)(
                                                                               (0x1ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                                               << 0x27U) 
                                                              | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt))
                                                   : 
                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__box__DOT__reg_cast_o[0U])
                                    : 0U));
    __Vtemp_h2fdadcb2__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                  << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                              >> 0x14U)) 
                                | ((((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                         >> 3U)) & 
                                     vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xeU]) 
                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                                       >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0)
                                                   ? (IData)(
                                                             ((((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                                                << 0x27U) 
                                                               | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt) 
                                                              >> 0x20U))
                                                   : 
                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__box__DOT__reg_cast_o[1U])
                                    : 0U));
    __Vtemp_h2fdadcb2__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                        >> 0x14U)) 
                                      | ((((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                               >> 3U)) 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xeU]) 
                                          & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                                             >> 8U))
                                          ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0)
                                              ? 0U : 
                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__box__DOT__reg_cast_o[2U])
                                          : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
              | (((((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                        >> 3U)) & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xeU]) 
                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                      >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0)
                                  ? (IData)((((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                              << 0x27U) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt))
                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__box__DOT__reg_cast_o[0U])
                   : 0U) << 0x14U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
        = ((__Vtemp_h2fdadcb2__0[0U] >> 0xcU) | (__Vtemp_h2fdadcb2__0[1U] 
                                                 << 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xffc00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | ((__Vtemp_h2fdadcb2__0[1U] >> 0xcU) | 
              (__Vtemp_h2fdadcb2__0[2U] << 0x14U)));
    __Vtemp_hf6c18fb6__0[1U] = (IData)((((0x144U == 
                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                           >> 0x14U))
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r) 
                                                                     >> 1U)))) 
                                                 & (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sie_rwmask_li 
                                                                               >> 9U)))))) 
                                                << 9U))
                                          : ((0x344U 
                                              == (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                  >> 0x14U))
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r) 
                                                                        >> 1U)))) 
                                                    << 9U))
                                              : (((1U 
                                                   == 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                    >> 0x14U)) 
                                                  | (3U 
                                                     == 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                      >> 0x14U)))
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                  | (QData)((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT____Vcellinp__csr__fflags_acc_i)))
                                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo))) 
                                        >> 0x20U));
    __Vtemp_h44cb6e81__0[0U] = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys_data_v_lo)
                                 ? (IData)(((0x144U 
                                             == (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                 >> 0x14U))
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r) 
                                                                        >> 1U)))) 
                                                    & (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sie_rwmask_li 
                                                                                >> 9U)))))) 
                                                   << 9U))
                                             : ((0x344U 
                                                 == 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                  >> 0x14U))
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r) 
                                                                        >> 1U)))) 
                                                    << 9U))
                                                 : 
                                                (((1U 
                                                   == 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                    >> 0x14U)) 
                                                  | (3U 
                                                     == 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                      >> 0x14U)))
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                  | (QData)((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT____Vcellinp__csr__fflags_acc_i)))
                                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo))))
                                 : 0U);
    __Vtemp_h0ae68b42__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                  << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                                              >> 0x14U)) 
                                | __Vtemp_h44cb6e81__0[0U]);
    __Vtemp_h0ae68b42__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                  << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                              >> 0x14U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys_data_v_lo)
                                    ? __Vtemp_hf6c18fb6__0[1U]
                                    : 0U));
    __Vtemp_h0ae68b42__0[2U] = (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                      >> 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
              | (__Vtemp_h44cb6e81__0[0U] << 0x14U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
        = ((__Vtemp_h0ae68b42__0[0U] >> 0xcU) | (__Vtemp_h0ae68b42__0[1U] 
                                                 << 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xffc00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | ((__Vtemp_h0ae68b42__0[1U] >> 0xcU) | 
              (__Vtemp_h0ae68b42__0[2U] << 0x14U)));
    __Vtemp_h52ada55f__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                               >> 3U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o[0U]
                                    : 0U));
    __Vtemp_h52ada55f__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                               >> 3U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o[1U]
                                    : 0U));
    __Vtemp_h52ada55f__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r)
                                                    ? 
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o[2U]
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((7U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r)
                   ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o[0U]
                   : 0U) << 3U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
        = ((__Vtemp_h52ada55f__0[0U] >> 0x1dU) | (__Vtemp_h52ada55f__0[1U] 
                                                  << 3U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((__Vtemp_h52ada55f__0[1U] >> 0x1dU) | 
              (__Vtemp_h52ada55f__0[2U] << 3U)));
    __Vtemp_h09e5c1ef__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                               >> 3U)) 
                                | ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[1U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U] 
                                        >> 1U)) : 0U));
    __Vtemp_h09e5c1ef__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                               >> 3U)) 
                                | ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[1U] 
                                        >> 1U)) : 0U));
    __Vtemp_h09e5c1ef__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U)) | (
                                                   (1U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                                    >> 1U)
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((7U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
              | (((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                   ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[1U] 
                       << 0x1fU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U] 
                                    >> 1U)) : 0U) << 3U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
        = ((__Vtemp_h09e5c1ef__0[0U] >> 0x1dU) | (__Vtemp_h09e5c1ef__0[1U] 
                                                  << 3U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((__Vtemp_h09e5c1ef__0[1U] >> 0x1dU) | 
              (__Vtemp_h09e5c1ef__0[2U] << 3U)));
    __Vtemp_h2c505855__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                               >> 3U)) 
                                | ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                      >> 9U) & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xeU]) 
                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U] 
                                       >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0)
                                                   ? (IData)(
                                                             (((QData)((IData)(
                                                                               (0x1ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                                               << 0x27U) 
                                                              | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt))
                                                   : 
                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__box__DOT__reg_cast_o[0U])
                                    : 0U));
    __Vtemp_h2c505855__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                               >> 3U)) 
                                | ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                      >> 9U) & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xeU]) 
                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U] 
                                       >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0)
                                                   ? (IData)(
                                                             ((((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                                                << 0x27U) 
                                                               | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt) 
                                                              >> 0x20U))
                                                   : 
                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__box__DOT__reg_cast_o[1U])
                                    : 0U));
    __Vtemp_h2c505855__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U)) | (
                                                   (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                                      >> 9U) 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xeU]) 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U] 
                                                       >> 8U))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0)
                                                     ? 0U
                                                     : 
                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__box__DOT__reg_cast_o[2U])
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((7U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
              | (((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                     >> 9U) & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xeU]) 
                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U] 
                      >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0)
                                  ? (IData)((((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                              << 0x27U) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt))
                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__box__DOT__reg_cast_o[0U])
                   : 0U) << 3U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
        = ((__Vtemp_h2c505855__0[0U] >> 0x1dU) | (__Vtemp_h2c505855__0[1U] 
                                                  << 3U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((__Vtemp_h2c505855__0[1U] >> 0x1dU) | 
              (__Vtemp_h2c505855__0[2U] << 3U)));
    __Vtemp_haafc7da8__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                  << 0xeU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                              >> 0x12U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[1U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[0U] 
                                        >> 5U)) : 0U));
    __Vtemp_haafc7da8__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                  << 0xeU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                              >> 0x12U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[2U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[1U] 
                                        >> 5U)) : 0U));
    __Vtemp_haafc7da8__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                        >> 0x12U)) 
                                      | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[2U] 
                                             >> 5U)
                                          : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0x3ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((0xfffc0000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                   ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[1U] 
                       << 0x1bU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[0U] 
                                    >> 5U)) : 0U) << 0x12U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
        = ((__Vtemp_haafc7da8__0[0U] >> 0xeU) | (__Vtemp_haafc7da8__0[1U] 
                                                 << 0x12U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | ((__Vtemp_haafc7da8__0[1U] >> 0xeU) | 
              (__Vtemp_haafc7da8__0[2U] << 0x12U)));
    __Vtemp_h70b1c969__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                  << 0xeU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                              >> 0x12U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r[0U]
                                    : 0U));
    __Vtemp_h70b1c969__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                  << 0xeU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                              >> 0x12U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r[1U]
                                    : 0U));
    __Vtemp_h70b1c969__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                        >> 0x12U)) 
                                      | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                          ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r[2U]
                                          : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0x3ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((0xfffc0000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                   ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r[0U]
                   : 0U) << 0x12U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
        = ((__Vtemp_h70b1c969__0[0U] >> 0xeU) | (__Vtemp_h70b1c969__0[1U] 
                                                 << 0x12U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | ((__Vtemp_h70b1c969__0[1U] >> 0xeU) | 
              (__Vtemp_h70b1c969__0[2U] << 0x12U)));
    __Vtemp_h95cbd0ae__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                                  << 0x1fU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                               >> 1U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[0U]
                                    : 0U));
    __Vtemp_h95cbd0ae__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                  << 0x1fU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                                               >> 1U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[1U]
                                    : 0U));
    __Vtemp_h95cbd0ae__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                        >> 1U)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                                    ? 
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U]
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
        = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU]) 
           | ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                   ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[0U]
                   : 0U) << 1U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
        = ((__Vtemp_h95cbd0ae__0[0U] >> 0x1fU) | (__Vtemp_h95cbd0ae__0[1U] 
                                                  << 1U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | ((__Vtemp_h95cbd0ae__0[1U] >> 0x1fU) | 
              (__Vtemp_h95cbd0ae__0[2U] << 1U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U]) 
           | (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                           ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[2U] 
                               << 0x1eU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[1U] 
                                            >> 2U))
                           : 0U))));
    __Vtemp_hc6161148__0 = (0x1fU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                       << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                                 >> 0x1eU)) 
                                     | ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                         ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                             << 0x1dU) 
                                            | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                               >> 3U))
                                         : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0x3fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (0xc0000000U & ((0xc0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
                             | (((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                  ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                      << 0x1dU) | (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                                   >> 3U))
                                  : 0U) << 0x1eU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | (__Vtemp_hc6161148__0 >> 2U));
    __Vtemp_h84330053__0 = (0x1fU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                       << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                                 >> 0x1cU)) 
                                     | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                         ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U] 
                                             << 0x1eU) 
                                            | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U] 
                                               >> 2U))
                                         : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0xf0000000U & ((0xf0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                  ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U] 
                                      << 0x1eU) | (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U] 
                                                   >> 2U))
                                  : 0U) << 0x1cU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU]) 
           | (__Vtemp_h84330053__0 >> 4U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | (0x4000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                            << 9U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xdfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (0x20000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                                << 0x12U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffefffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (0x1000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                            >> 5U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0x8000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                            & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
                               << 4U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0xfffffbffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | (0x400U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
                           >> 0x13U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xffffdfffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | (0x2000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                            << 8U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xefffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (0x10000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                                << 0x11U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (0x800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                           >> 6U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfbffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0x4000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                            & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
                               << 3U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0xfffffdffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | (0x200U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
                           >> 0x14U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U]) 
           | (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
                       & (- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                                           >> 5U)))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xfff07fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | (0xf8000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                          & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                                               >> 0xbU)))) 
                             << 0xfU))));
    __Vtemp_hb4a7e3c9__0 = (0x1fU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                       << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                                 >> 0x1eU)) 
                                     & (- (IData)((1U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                                                      >> 0x11U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0x3fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (0xc0000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                             & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                                                  >> 0x11U)))) 
                                << 0x1eU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | (__Vtemp_hb4a7e3c9__0 >> 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xfffc1fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (0x3e000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                          & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
                                               >> 0x17U)))) 
                             << 0xdU))));
    __Vtemp_hddf3c923__0 = (0x1fU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                       << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                                 >> 0x1cU)) 
                                     & (- (IData)((1U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
                                                      >> 0x1dU))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0xf0000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                             & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
                                                  >> 0x1dU)))) 
                                << 0x1cU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU]) 
           | (__Vtemp_hddf3c923__0 >> 4U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0x8000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                            & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[0U] 
                                   >> 1U)) << 0x1bU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfbffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0x4000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                            & ((~ vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[0U]) 
                               << 0x1aU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
            << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                        >> 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
            << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                        >> 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[2U] 
        = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
             << 0x1fU) | (0x7ffffffcU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                         >> 1U))) | 
           (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                  >> 0x14U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[3U] 
        = ((3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                  >> 1U)) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                              << 0x1fU) | (0x7ffffffcU 
                                           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                              >> 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[4U] 
        = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
             << 0x12U) | (0x3fff0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                      >> 0xeU))) | 
           ((3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                   >> 1U)) | (0xcU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                      >> 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[5U] 
        = ((0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                    >> 0xeU)) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                  << 0x12U) | (0x3fff0U 
                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                                  >> 0xeU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[6U] 
        = ((0xffffffc0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                           << 5U)) | ((0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                               >> 0xeU)) 
                                      | (0x30U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                                  >> 0xeU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[7U] 
        = (((0x20U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                      << 5U)) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                 >> 0x1bU)) | (0xffffffc0U 
                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                                                  << 5U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[8U] 
        = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
             << 0x18U) | (0xffff00U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                       >> 8U))) | (
                                                   ((0x20U 
                                                     & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                                        << 5U)) 
                                                    | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                                                       >> 0x1bU)) 
                                                   | (0xc0U 
                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                                         << 5U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[9U] 
        = ((0xffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
                     >> 8U)) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xeU] 
                                 << 0x18U) | (0xffff00U 
                                              & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
                                                 >> 8U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[0xaU] 
        = ((0xffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xeU] 
                     >> 8U)) | (0x300U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xeU] 
                                          >> 8U)));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__85(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__85\n"); );
    // Init
    VlWide<3>/*78:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0;
    VL_ZERO_W(79, tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0);
    QData/*37:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 = 0;
    IData/*31:0*/ __Vtemp_h0a7306fd__0;
    CData/*31:0*/ __Vtemp_h1edfa4be__0;
    VlWide<3>/*95:0*/ __Vtemp_hdd3c867c__0;
    VlWide<3>/*95:0*/ __Vtemp_h2fdadcb2__0;
    VlWide<3>/*95:0*/ __Vtemp_h0ae68b42__0;
    VlWide<3>/*95:0*/ __Vtemp_hf6c18fb6__0;
    VlWide<3>/*95:0*/ __Vtemp_h44cb6e81__0;
    VlWide<3>/*95:0*/ __Vtemp_h52ada55f__0;
    VlWide<3>/*95:0*/ __Vtemp_h09e5c1ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h2c505855__0;
    VlWide<3>/*95:0*/ __Vtemp_haafc7da8__0;
    VlWide<3>/*95:0*/ __Vtemp_h70b1c969__0;
    VlWide<3>/*95:0*/ __Vtemp_h95cbd0ae__0;
    CData/*31:0*/ __Vtemp_hc6161148__0;
    CData/*31:0*/ __Vtemp_h84330053__0;
    CData/*31:0*/ __Vtemp_hb4a7e3c9__0;
    CData/*31:0*/ __Vtemp_hddf3c923__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = (0xffffffc0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]);
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[0U]))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0x3fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 6U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffff000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
               >> 0x1aU) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                                     >> 0x20U)) << 6U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U])) 
                               << 0x1aU) | ((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U])) 
                                            >> 6U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 0xcU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0xfffc0000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
               >> 0x14U) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                                     >> 0x20U)) << 0xcU)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])) 
                               << 0x14U) | ((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U])) 
                                            >> 0xcU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0x3ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 0x12U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
        = ((0xff000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U]) 
           | (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
               >> 0xeU) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                                    >> 0x20U)) << 0x12U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[4U])) 
                               << 0xeU) | ((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])) 
                                           >> 0x12U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
        = ((0xffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 0x18U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
        = ((0xc0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U]) 
           | (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
               >> 8U) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                                  >> 0x20U)) << 0x18U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
        = (0x3fffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[5U])) 
                               << 8U) | ((QData)((IData)(
                                                         vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[4U])) 
                                         >> 0x18U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
        = ((0x3fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U]) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
              << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[6U] 
        = (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0) 
            >> 2U) | ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                               >> 0x20U)) << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[7U] 
        = (0xfU & ((IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_hf4f301a5__0 
                            >> 0x20U)) >> 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffffffdfU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x20U & ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                       | (0xffffe0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                       >> 8U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffffffefU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x10U & ((0xfffffff0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                       | (0xfffff0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                       >> 8U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xfffffff7U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (8U & ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                    | (0xfffff8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                    >> 8U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xfffffffbU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (4U & ((0xfffffffcU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                    | (0xfffffcU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                    >> 8U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
        = ((0xfffffe00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U]) 
           | (0x1ffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
                        | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0U])));
    __Vtemp_h0a7306fd__0 = (0x1ffffffU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                                            << 0x17U) 
                                           | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
                                              >> 9U)) 
                                          | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[1U] 
                                              << 0x17U) 
                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0U] 
                                                >> 9U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
        = ((0x1ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U]) 
           | (0xfffffe00U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[0U] 
                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0U])));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xfffffffcU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (__Vtemp_h0a7306fd__0 >> 0x17U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffffffdfU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x20U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                       & (((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                               >> 0x15U)) << 5U) | 
                          (0x7ffffe0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[0xbU] 
                                         >> 5U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                        & (((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                                >> 0x15U)) << 0xbU) 
                           | (0xfffff800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                             << 9U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0xfffdffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | (0x20000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                          & (((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                                  >> 0x15U)) << 0x11U) 
                             | (0xfffe0000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                               << 9U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
        = ((0xff7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U]) 
           | (0x800000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
                           & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                               << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U] 
                                         << 9U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffffffefU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x10U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                       & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                              >> 0x15U)) << 4U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffffbffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x400U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                        & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                               >> 0x15U)) << 0xaU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0xfffeffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | (0x10000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                          & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[6U] 
                                 >> 0x15U)) << 0x10U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xefffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x10000000U & ((0xf0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                             | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys_illegal_instr_lo) 
                                << 0x1cU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xfbffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x4000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffefffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x100000U & ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                           | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h37a6e350__0) 
                               & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                                          >> 0x36U))) 
                              << 0x14U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xffdfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x200000U & ((0xffe00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                           | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h37a6e350__0) 
                               & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                                          >> 0x37U))) 
                              << 0x15U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0xbfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x40000000U & ((0xc0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                             | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_load_misaligned_lo) 
                                << 0x1eU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
        = ((0x7fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
           | (0x80000000U & ((0x80000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U]) 
                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
                                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_access_fault_v)) 
                                << 0x1fU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffffffbfU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x40U & ((0xffffffc0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                       | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
                           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_page_fault_v)) 
                          << 6U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                    | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_store_misaligned_lo))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xfffffffdU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (2U & ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                    | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_access_fault_v)) 
                       << 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffffff7fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x80U & ((0xffffff80U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                       | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
                           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_page_fault_v)) 
                          << 7U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
        = ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]) 
           | (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U]));
    __Vtemp_h1edfa4be__0 = (1U & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                                   >> 0x15U) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                                 >> 9U) 
                                                & (((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU] 
                                                       >> 0x11U) 
                                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__comp_result)) 
                                                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0))
                                                     ? 
                                                    (0x7ffffffffeULL 
                                                     & ((((QData)((IData)(
                                                                          ((0x8000U 
                                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                                            ? 
                                                                           ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xcU] 
                                                                             << 0x1bU) 
                                                                            | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xbU] 
                                                                               >> 5U))
                                                                            : (IData)(
                                                                                ((0x7fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U])) 
                                                                                << 0x1fU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xfU])) 
                                                                                >> 1U))) 
                                                                                >> 0x20U))))) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           ((0x8000U 
                                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xdU])
                                                                             ? 
                                                                            ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xbU] 
                                                                              << 0x1bU) 
                                                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xaU] 
                                                                                >> 5U))
                                                                             : (IData)(
                                                                                (0x7fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U])) 
                                                                                << 0x1fU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xfU])) 
                                                                                >> 1U)))))))) 
                                                        + 
                                                        (((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[7U])) 
                                                          << 0x3dU) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[7U])) 
                                                             << 0x1dU) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[6U])) 
                                                               >> 3U)))))
                                                     : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt) 
                                                   != 
                                                   (0x7fffffffffULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U])) 
                                                        << 0x1fU) 
                                                       | ((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xfU])) 
                                                          >> 1U)))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffdfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (__Vtemp_h1edfa4be__0 << 0x15U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xefffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x10000000U & ((0xf0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                             | (((~ (((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                                          >> 0xaU)) 
                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_v)) 
                                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li))) 
                                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)) 
                                << 0x1cU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffefffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x100000U & ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r) 
                               & ((~ ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                                       >> 0xaU) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_v))) 
                                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li))) 
                              << 0x14U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
        = ((0xffbfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
           | (0x400000U & ((0xffc00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U]) 
                           | (((0U != (0x3ffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])) 
                                           << 0x14U) 
                                          | ((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U])) 
                                             >> 0xcU)))) 
                               & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li)) 
                                  & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__full) 
                                     | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                                         == (3U & ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__wptr__DOT__ptr_r)))) 
                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_v_li))))) 
                              << 0x16U))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] = 0U;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] = 0U;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = ((0x6000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[8U] 
                       >> 2U)) | (0xf80U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[9U] 
                                            >> 3U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
        = tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[1U] 
        = tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xffff8000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U]);
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[1U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[2U]);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0x7fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0xfU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 0x11U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                         << 0xfU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xc0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
               >> 0x11U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                            << 0xfU)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[3U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[2U] 
                         >> 0xfU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[4U] 
            << 0x11U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[3U] 
                         >> 0xfU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[4U] 
                      >> 0xfU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0x3fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 2U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                      << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
            >> 2U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                      << 0x1eU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffe000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
              >> 2U));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[5U] 
            << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[4U] 
                      >> 0x1eU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[6U] 
            << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[5U] 
                      >> 0x1eU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[7U] 
                       << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[6U] 
                                 >> 0x1eU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0x1fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0xdU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 0x13U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                         << 0xdU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xf0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
               >> 0x13U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                            << 0xdU)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[8U] 
            << 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[7U] 
                         >> 0xdU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[9U] 
            << 0x13U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[8U] 
                         >> 0xdU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[9U] 
                      >> 0xdU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0x1cU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 4U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                      << 0x1cU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
            >> 4U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                      << 0x1cU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0xfffff800U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
              >> 4U));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xaU] 
            << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[9U] 
                      >> 0x1cU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xbU] 
            << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xaU] 
                      >> 0x1cU));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
        = (0x7fffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xcU] 
                       << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r[0xbU] 
                                 >> 0x1cU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0x7ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
              << 0xbU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
        = ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[0U] 
            >> 0x15U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                         << 0xbU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xeU] 
        = (0x3ffffffU & ((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[1U] 
                          >> 0x15U) | (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vlvbound_h9a3e37d0__0[2U] 
                                       << 0xbU)));
    __Vtemp_hdd3c867c__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[1U] 
                                  << 0x1bU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
                                               >> 5U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[4U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[3U] 
                                        >> 4U)) : 0U));
    __Vtemp_hdd3c867c__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                                  << 0x1bU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[1U] 
                                               >> 5U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[5U] 
                                        << 0x1cU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[4U] 
                                        >> 4U)) : 0U));
    __Vtemp_hdd3c867c__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                                        >> 5U)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                                                    ? 
                                                   ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[6U] 
                                                     << 0x1cU) 
                                                    | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[5U] 
                                                       >> 4U))
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
        = ((0x1fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U]) 
           | ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                   ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[4U] 
                       << 0x1cU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[3U] 
                                    >> 4U)) : 0U) << 5U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[1U] 
        = ((__Vtemp_hdd3c867c__0[0U] >> 0x1bU) | (__Vtemp_hdd3c867c__0[1U] 
                                                  << 5U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xffffff80U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | ((__Vtemp_hdd3c867c__0[1U] >> 0x1bU) | 
              (__Vtemp_hdd3c867c__0[2U] << 5U)));
    __Vtemp_h2fdadcb2__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                  << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                                              >> 0x14U)) 
                                | ((((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                         >> 3U)) & 
                                     vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xeU]) 
                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                                       >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0)
                                                   ? (IData)(
                                                             (((QData)((IData)(
                                                                               (0x1ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                                               << 0x27U) 
                                                              | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt))
                                                   : 
                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__box__DOT__reg_cast_o[0U])
                                    : 0U));
    __Vtemp_h2fdadcb2__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                  << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                              >> 0x14U)) 
                                | ((((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                         >> 3U)) & 
                                     vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xeU]) 
                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                                       >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0)
                                                   ? (IData)(
                                                             ((((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                                                << 0x27U) 
                                                               | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt) 
                                                              >> 0x20U))
                                                   : 
                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__box__DOT__reg_cast_o[1U])
                                    : 0U));
    __Vtemp_h2fdadcb2__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                        << 0xcU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                        >> 0x14U)) 
                                      | ((((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                                               >> 3U)) 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xeU]) 
                                          & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                                             >> 8U))
                                          ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0)
                                              ? 0U : 
                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__box__DOT__reg_cast_o[2U])
                                          : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
              | (((((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[1U] 
                        >> 3U)) & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0xeU]) 
                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation[0x10U] 
                      >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__VdfgTmp_hf8f076a0__0)
                                  ? (IData)((((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                              << 0x27U) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__ntaken_tgt))
                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_int_early->__PVT__box__DOT__reg_cast_o[0U])
                   : 0U) << 0x14U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
        = ((__Vtemp_h2fdadcb2__0[0U] >> 0xcU) | (__Vtemp_h2fdadcb2__0[1U] 
                                                 << 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xffc00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | ((__Vtemp_h2fdadcb2__0[1U] >> 0xcU) | 
              (__Vtemp_h2fdadcb2__0[2U] << 0x14U)));
    __Vtemp_hf6c18fb6__0[1U] = (IData)((((0x144U == 
                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                           >> 0x14U))
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r) 
                                                                     >> 1U)))) 
                                                 & (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sie_rwmask_li 
                                                                               >> 9U)))))) 
                                                << 9U))
                                          : ((0x344U 
                                              == (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                  >> 0x14U))
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r) 
                                                                        >> 1U)))) 
                                                    << 9U))
                                              : (((1U 
                                                   == 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                    >> 0x14U)) 
                                                  | (3U 
                                                     == 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                      >> 0x14U)))
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                  | (QData)((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT____Vcellinp__csr__fflags_acc_i)))
                                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo))) 
                                        >> 0x20U));
    __Vtemp_h44cb6e81__0[0U] = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys_data_v_lo)
                                 ? (IData)(((0x144U 
                                             == (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                 >> 0x14U))
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r) 
                                                                        >> 1U)))) 
                                                    & (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sie_rwmask_li 
                                                                                >> 9U)))))) 
                                                   << 9U))
                                             : ((0x344U 
                                                 == 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                  >> 0x14U))
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                 | ((QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r) 
                                                                        >> 1U)))) 
                                                    << 9U))
                                                 : 
                                                (((1U 
                                                   == 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                    >> 0x14U)) 
                                                  | (3U 
                                                     == 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r 
                                                      >> 0x14U)))
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo 
                                                  | (QData)((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT____Vcellinp__csr__fflags_acc_i)))
                                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo))))
                                 : 0U);
    __Vtemp_h0ae68b42__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                  << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                                              >> 0x14U)) 
                                | __Vtemp_h44cb6e81__0[0U]);
    __Vtemp_h0ae68b42__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                  << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                                              >> 0x14U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys_data_v_lo)
                                    ? __Vtemp_hf6c18fb6__0[1U]
                                    : 0U));
    __Vtemp_h0ae68b42__0[2U] = (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                      >> 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xfffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
              | (__Vtemp_h44cb6e81__0[0U] << 0x14U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
        = ((__Vtemp_h0ae68b42__0[0U] >> 0xcU) | (__Vtemp_h0ae68b42__0[1U] 
                                                 << 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xffc00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | ((__Vtemp_h0ae68b42__0[1U] >> 0xcU) | 
              (__Vtemp_h0ae68b42__0[2U] << 0x14U)));
    __Vtemp_h52ada55f__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                               >> 3U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o[0U]
                                    : 0U));
    __Vtemp_h52ada55f__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                               >> 3U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o[1U]
                                    : 0U));
    __Vtemp_h52ada55f__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r)
                                                    ? 
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o[2U]
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((7U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r)
                   ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o[0U]
                   : 0U) << 3U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
        = ((__Vtemp_h52ada55f__0[0U] >> 0x1dU) | (__Vtemp_h52ada55f__0[1U] 
                                                  << 3U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((__Vtemp_h52ada55f__0[1U] >> 0x1dU) | 
              (__Vtemp_h52ada55f__0[2U] << 3U)));
    __Vtemp_h09e5c1ef__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                               >> 3U)) 
                                | ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[1U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U] 
                                        >> 1U)) : 0U));
    __Vtemp_h09e5c1ef__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                               >> 3U)) 
                                | ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[1U] 
                                        >> 1U)) : 0U));
    __Vtemp_h09e5c1ef__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U)) | (
                                                   (1U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                                    >> 1U)
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((7U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
              | (((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                   ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[1U] 
                       << 0x1fU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U] 
                                    >> 1U)) : 0U) << 3U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
        = ((__Vtemp_h09e5c1ef__0[0U] >> 0x1dU) | (__Vtemp_h09e5c1ef__0[1U] 
                                                  << 3U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((__Vtemp_h09e5c1ef__0[1U] >> 0x1dU) | 
              (__Vtemp_h09e5c1ef__0[2U] << 3U)));
    __Vtemp_h2c505855__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                               >> 3U)) 
                                | ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                      >> 9U) & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xeU]) 
                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U] 
                                       >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0)
                                                   ? (IData)(
                                                             (((QData)((IData)(
                                                                               (0x1ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                                               << 0x27U) 
                                                              | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt))
                                                   : 
                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__box__DOT__reg_cast_o[0U])
                                    : 0U));
    __Vtemp_h2c505855__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                  << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                               >> 3U)) 
                                | ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                      >> 9U) & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xeU]) 
                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U] 
                                       >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0)
                                                   ? (IData)(
                                                             ((((QData)((IData)(
                                                                                (0x1ffffffU 
                                                                                & (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                                                << 0x27U) 
                                                               | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt) 
                                                              >> 0x20U))
                                                   : 
                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__box__DOT__reg_cast_o[1U])
                                    : 0U));
    __Vtemp_h2c505855__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                        << 0x1dU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                        >> 3U)) | (
                                                   (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                                                      >> 9U) 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xeU]) 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U] 
                                                       >> 8U))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0)
                                                     ? 0U
                                                     : 
                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__box__DOT__reg_cast_o[2U])
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((7U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
              | (((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[2U] 
                     >> 9U) & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0xeU]) 
                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r[0x10U] 
                      >> 8U)) ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__VdfgTmp_hf8f076a0__0)
                                  ? (IData)((((QData)((IData)(
                                                              (0x1ffffffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt 
                                                                                >> 0x26U)))))))) 
                                              << 0x27U) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__ntaken_tgt))
                                  : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__pipe_int_catchup->__PVT__box__DOT__reg_cast_o[0U])
                   : 0U) << 3U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
        = ((__Vtemp_h2c505855__0[0U] >> 0x1dU) | (__Vtemp_h2c505855__0[1U] 
                                                  << 3U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((__Vtemp_h2c505855__0[1U] >> 0x1dU) | 
              (__Vtemp_h2c505855__0[2U] << 3U)));
    __Vtemp_haafc7da8__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                  << 0xeU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                              >> 0x12U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[1U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[0U] 
                                        >> 5U)) : 0U));
    __Vtemp_haafc7da8__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                  << 0xeU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                              >> 0x12U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[2U] 
                                        << 0x1bU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[1U] 
                                        >> 5U)) : 0U));
    __Vtemp_haafc7da8__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                        >> 0x12U)) 
                                      | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[2U] 
                                             >> 5U)
                                          : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0x3ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((0xfffc0000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                   ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[1U] 
                       << 0x1bU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[0U] 
                                    >> 5U)) : 0U) << 0x12U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
        = ((__Vtemp_haafc7da8__0[0U] >> 0xeU) | (__Vtemp_haafc7da8__0[1U] 
                                                 << 0x12U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | ((__Vtemp_haafc7da8__0[1U] >> 0xeU) | 
              (__Vtemp_haafc7da8__0[2U] << 0x12U)));
    __Vtemp_h70b1c969__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                  << 0xeU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                              >> 0x12U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r[0U]
                                    : 0U));
    __Vtemp_h70b1c969__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                  << 0xeU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                              >> 0x12U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r[1U]
                                    : 0U));
    __Vtemp_h70b1c969__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                        << 0xeU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                        >> 0x12U)) 
                                      | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                                          ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r[2U]
                                          : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0x3ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | ((0xfffc0000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r)
                   ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r[0U]
                   : 0U) << 0x12U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
        = ((__Vtemp_h70b1c969__0[0U] >> 0xeU) | (__Vtemp_h70b1c969__0[1U] 
                                                 << 0x12U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfff00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | ((__Vtemp_h70b1c969__0[1U] >> 0xeU) | 
              (__Vtemp_h70b1c969__0[2U] << 0x12U)));
    __Vtemp_h95cbd0ae__0[0U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                                  << 0x1fU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                               >> 1U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[0U]
                                    : 0U));
    __Vtemp_h95cbd0ae__0[1U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                  << 0x1fU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                                               >> 1U)) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[1U]
                                    : 0U));
    __Vtemp_h95cbd0ae__0[2U] = (3U & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
                                        << 0x1fU) | 
                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                        >> 1U)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                                    ? 
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U]
                                                    : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
        = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU]) 
           | ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU]) 
              | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                   ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[0U]
                   : 0U) << 1U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
        = ((__Vtemp_h95cbd0ae__0[0U] >> 0x1fU) | (__Vtemp_h95cbd0ae__0[1U] 
                                                  << 1U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | ((__Vtemp_h95cbd0ae__0[1U] >> 0x1fU) | 
              (__Vtemp_h95cbd0ae__0[2U] << 1U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U]) 
           | (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection)
                           ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[2U] 
                               << 0x1eU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o[1U] 
                                            >> 2U))
                           : 0U))));
    __Vtemp_hc6161148__0 = (0x1fU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                       << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                                 >> 0x1eU)) 
                                     | ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                         ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                             << 0x1dU) 
                                            | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                               >> 3U))
                                         : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0x3fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (0xc0000000U & ((0xc0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
                             | (((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[0U])
                                  ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                      << 0x1dU) | (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r[2U] 
                                                   >> 3U))
                                  : 0U) << 0x1eU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | (__Vtemp_hc6161148__0 >> 2U));
    __Vtemp_h84330053__0 = (0x1fU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                       << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                                 >> 0x1cU)) 
                                     | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                         ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U] 
                                             << 0x1eU) 
                                            | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U] 
                                               >> 2U))
                                         : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0xf0000000U & ((0xf0000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r)
                                  ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U] 
                                      << 0x1eU) | (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r[2U] 
                                                   >> 2U))
                                  : 0U) << 0x1cU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU]) 
           | (__Vtemp_h84330053__0 >> 4U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xffffbfffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | (0x4000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                            << 9U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xdfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (0x20000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                                << 0x12U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xffffefffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (0x1000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                            >> 5U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0x8000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                            & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
                               << 4U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0xfffffbffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | (0x400U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
                           >> 0x13U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xffffdfffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | (0x2000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                            << 8U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0xefffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (0x10000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                                << 0x11U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xfffff7ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (0x800U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                           >> 6U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfbffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0x4000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                            & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
                               << 3U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
        = ((0xfffffdffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU]) 
           | (0x200U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
                           >> 0x14U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
        = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U]) 
           | (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0U] 
                       & (- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[1U] 
                                           >> 5U)))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
        = ((0xfff07fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U]) 
           | (0xf8000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                          & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[2U] 
                                               >> 0xbU)))) 
                             << 0xfU))));
    __Vtemp_hb4a7e3c9__0 = (0x1fU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                       << 2U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                                                 >> 0x1eU)) 
                                     & (- (IData)((1U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                                                      >> 0x11U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
        = ((0x3fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U]) 
           | (0xc0000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                             & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[3U] 
                                                  >> 0x11U)))) 
                                << 0x1eU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
        = ((0xfffffff8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U]) 
           | (__Vtemp_hb4a7e3c9__0 >> 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
        = ((0xfffc1fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U]) 
           | (0x3e000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                          & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[4U] 
                                               >> 0x17U)))) 
                             << 0xdU))));
    __Vtemp_hddf3c923__0 = (0x1fU & (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                       << 4U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                                 >> 0x1cU)) 
                                     & (- (IData)((1U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
                                                      >> 0x1dU))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0xf0000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                             & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n[5U] 
                                                  >> 0x1dU)))) 
                                << 0x1cU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
        = ((0xfffffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU]) 
           | (__Vtemp_hddf3c923__0 >> 4U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xf7ffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0x8000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                            & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[0U] 
                                   >> 1U)) << 0x1bU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
        = ((0xfbffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U]) 
           | (0x4000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                            & ((~ vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt[0U]) 
                               << 0x1aU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
            << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[2U] 
                        >> 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[1U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
            << 0xcU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[3U] 
                        >> 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[2U] 
        = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
             << 0x1fU) | (0x7ffffffcU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[5U] 
                                         >> 1U))) | 
           (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[4U] 
                  >> 0x14U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[3U] 
        = ((3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                  >> 1U)) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                              << 0x1fU) | (0x7ffffffcU 
                                           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[6U] 
                                              >> 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[4U] 
        = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
             << 0x12U) | (0x3fff0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                      >> 0xeU))) | 
           ((3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                   >> 1U)) | (0xcU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[7U] 
                                      >> 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[5U] 
        = ((0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                    >> 0xeU)) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                  << 0x12U) | (0x3fff0U 
                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[8U] 
                                                  >> 0xeU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[6U] 
        = ((0xffffffc0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                           << 5U)) | ((0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                               >> 0xeU)) 
                                      | (0x30U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[9U] 
                                                  >> 0xeU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[7U] 
        = (((0x20U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                      << 5U)) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xaU] 
                                 >> 0x1bU)) | (0xffffffc0U 
                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                                                  << 5U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[8U] 
        = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
             << 0x18U) | (0xffff00U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                       >> 8U))) | (
                                                   ((0x20U 
                                                     & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                                        << 5U)) 
                                                    | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xbU] 
                                                       >> 0x1bU)) 
                                                   | (0xc0U 
                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xcU] 
                                                         << 5U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[9U] 
        = ((0xffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
                     >> 8U)) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xeU] 
                                 << 0x18U) | (0xffff00U 
                                              & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xdU] 
                                                 >> 8U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data[0xaU] 
        = ((0xffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xeU] 
                     >> 8U)) | (0x300U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n[0xeU] 
                                          >> 8U)));
}
