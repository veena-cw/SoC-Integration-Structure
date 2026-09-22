// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__69(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__69\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_mask_li 
        = ((0xffU & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_mask_li)) 
           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write)
                ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo)
                : 0x7fU) << 8U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_data_li 
        = ((0xffU & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_data_li)) 
           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write)
                ? ((0xffffffc0U & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode__DOT____VdfgTmp_hd35049cc__0) 
                                    << 6U) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo))) 
                   | ((0xffffffe0U & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode__DOT____VdfgTmp_hd35049cc__0) 
                                       << 5U) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo))) 
                      | ((0xfffffff0U & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode__DOT____VdfgTmp_hd35049cc__0) 
                                          << 4U) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo))) 
                         | ((0xfffffff8U & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode__DOT____VdfgTmp_hd35049cc__0) 
                                             << 3U) 
                                            & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo))) 
                            | ((0xfffffffcU & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode__DOT____VdfgTmp_hd35d9a4f__0) 
                                                << 2U) 
                                               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo))) 
                               | ((0xfffffffeU & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode__DOT____VdfgTmp_hd35d9a4f__0) 
                                                   << 1U) 
                                                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo))) 
                                  | (1U & ((~ ((IData)(vlSelf->__VdfgTmp_h50e17902__0) 
                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__addr 
                                                  >> 0x1aU))) 
                                           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo)))))))))
                : 0U) << 8U));
}

extern const VlUnpacked<CData/*2:0*/, 256> Vtestbench__ConstPool__TABLE_hc1a1ebca_0;

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__23(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__23\n"); );
    // Init
    CData/*7:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li 
        = ((0U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo)) 
           & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U] 
                  >> 7U)) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_force_lo)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fdata_yumi_lo 
        = (1U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                  & (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li)))) 
                 >> 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_yumi_lo 
        = (1U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                  & (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li)))) 
                 >> 1U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT____VdfgTmp_h530b7c19__0 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li)) 
           & (0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li) 
           & (IData)(vlSelf->__VdfgTmp_hacb05d45__0));
    __Vtableidx23 = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh_v_li) 
                      << 7U) | (((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__gets_high_part_r)
                                    ? (0x3fU == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__shift_counter_r))
                                    : (0x40U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__shift_counter_r)))
                                   ? 4U : 3U) << 4U) 
                                | ((((5U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__curr_state_r)) 
                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_yumi_lo)) 
                                    << 3U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__curr_state_r))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__next_state 
        = Vtestbench__ConstPool__TABLE_hc1a1ebca_0[__Vtableidx23];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state = 0U;
    if (((((((((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) {
            if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__idiv__v_i) {
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state = 1U;
            }
        } else {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state 
                = ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opC_reg__DOT__data_r[2U] 
                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__req_reg__DOT__data_r))
                        ? 2U : 3U) : ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                       ? 3U : ((3U 
                                                == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                    ? 
                                                   ((0x20U 
                                                     == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__calc_cnt))
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__add1_out[2U])
                                                      ? 5U
                                                      : 6U)
                                                     : 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[0U] 
                                                                        | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[1U]) 
                                                                       | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[2U])))) 
                                                          | (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__q_neg_r))))
                                                       ? 8U
                                                       : 7U)
                                                      : 8U))))));
        }
    } else if ((8U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state 
            = (((8U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)) 
                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_yumi_lo))
                ? 0U : 8U);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__resume_v 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT____VdfgTmp_h530b7c19__0) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__resume_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_done 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_v_li) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT____VdfgTmp_hee722aea__0));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_next 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT____VdfgTmp_hee722aea__0)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_n 
        = ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r))
            ? ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r))
                ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_replay)
                    ? 1U : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_done)
                             ? 0U : 3U)) : ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r))
                                             ? 3U : 2U))
            : ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r))
                ? (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r)) 
                    & ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__sync_reg__DOT__data_r) 
                           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__fdiv_busy_lo) 
                              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__idiv_busy_lo)))) 
                       & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__sync_reg__DOT__data_r) 
                          >> 1U))) ? 2U : 1U) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_start)
                                                  ? 1U
                                                  : 0U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__level_n 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_start)
            ? 2U : (3U & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r 
                           >> 0x1cU) - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_next))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_en 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_start) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_next) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_done)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_walk_lo 
        = ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r)) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_next));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_en)
            ? (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn_n))
            : (QData)((IData)((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_v_lo 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_walk_lo) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_done));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__tlb_w_entry 
        = (((QData)((IData)((0xfffffffU & (((0U < (3U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r 
                                                      >> 0x1cU)))
                                             ? (0x1ffU 
                                                & (IData)(
                                                          (0x7ffffffULL 
                                                           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                                                              >> 0xcU))))
                                             : (0x1ffU 
                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn))) 
                                           | ((((1U 
                                                 < 
                                                 (3U 
                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r 
                                                     >> 0x1cU)))
                                                 ? 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (0x3ffffULL 
                                                            & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                                                               >> 0x15U))))
                                                 : 
                                                (0x1ffU 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn 
                                                            >> 9U)))) 
                                               << 9U) 
                                              | ((((2U 
                                                    < 
                                                    (3U 
                                                     & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r 
                                                        >> 0x1cU)))
                                                    ? 
                                                   (0x1ffU 
                                                    & (IData)(
                                                              (0x1ffULL 
                                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                                                                  >> 0x1eU))))
                                                    : 
                                                   (0x1ffU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn 
                                                               >> 0x12U)))) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_ha1025ae9__0) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->__VdfgTmp_h8e39025d__0) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->__VdfgTmp_he36db9a2__0) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->__VdfgTmp_hd1480425__0) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->__VdfgTmp_ha2b9ba48__0) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->__VdfgTmp_hbc76689f__0) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->__VdfgTmp_haca5a853__0) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->__VdfgTmp_hacc5df08__0) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->__VdfgTmp_h9126797d__0) 
                                                                             << 0x13U) 
                                                                            | ((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0) 
                                                                               << 0x12U)))))))))))))))) 
            << 8U) | (QData)((IData)((((2U == (3U & 
                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r 
                                                >> 0x1cU))) 
                                       << 7U) | (((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r 
                                                       >> 0x1cU))) 
                                                  << 6U) 
                                                 | (((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->__VdfgTmp_h3d84d170__0))) 
                                                     << 5U) 
                                                    | (((IData)(
                                                                (0U 
                                                                 != (IData)(vlSelf->__VdfgTmp_h256b24a6__0))) 
                                                        << 4U) 
                                                       | (((IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0))) 
                                                           << 3U) 
                                                          | (((IData)(
                                                                      (0U 
                                                                       != (IData)(vlSelf->__VdfgTmp_h354fa099__0))) 
                                                              << 2U) 
                                                             | (((IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->__VdfgTmp_h372d3438__0))) 
                                                                 << 1U) 
                                                                | (0U 
                                                                   != (IData)(vlSelf->__VdfgTmp_h393dabfe__0))))))))))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__12(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__12\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____Vlvbound_h3a44e700__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____Vlvbound_h3a44e700__0 = 0;
    CData/*7:0*/ __Vtableidx23;
    __Vtableidx23 = 0;
    VlWide<5>/*159:0*/ __Vtemp_hb2dd4b98__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[0U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[1U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[2U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[3U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[6U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U] 
        = ((0x7fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U]) 
           | (0xffU & ((((~ ((2U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_r)) 
                             | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__full) 
                                | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__catchup__DOT__pipe_int_catchup__flush_i)))) 
                         & ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__struct_haz_v) 
                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__control_haz_v) 
                                   | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__data_haz_v)))) 
                            & (0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r)))) 
                        & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__empty))) 
                       << 7U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U] 
        = ((0xbfU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U]) 
           | (0xffU & (((4U == (7U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U])) 
                        & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__illegal_instr_lo))) 
                       << 6U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U] 
        = ((0xc3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U]) 
           | (0xfcU & ((((0U == (7U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U])) 
                         << 5U) | ((2U == (7U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U])) 
                                   << 4U)) | (((1U 
                                                == 
                                                (7U 
                                                 & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U])) 
                                               << 3U) 
                                              | ((3U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U])) 
                                                 << 2U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U] 
        = ((0xfdU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U]) 
           | (0xffU & (((4U == (7U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U])) 
                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__illegal_instr_lo)) 
                       << 1U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U] 
        = ((0x1fffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U]) 
           | (0xe0000000U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ecall_s_lo) 
                              << 0x1fU) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ecall_u_lo) 
                                            << 0x1eU) 
                                           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ebreak_lo) 
                                              << 0x1dU)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U] 
        = ((0xfeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U]) 
           | (0xffU & ((0x1fffffffU & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ecall_m_lo)) 
                       | ((0x1fffffffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ecall_s_lo) 
                                          >> 1U)) | 
                          ((0x1fffffffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ecall_u_lo) 
                                           >> 2U)) 
                           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ebreak_lo) 
                              >> 3U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U] 
        = ((0xe1ffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U]) 
           | (0xfe000000U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__dbreak_lo) 
                              << 0x1cU) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__dret_lo) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__mret_lo) 
                                               << 0x1aU) 
                                              | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__sret_lo) 
                                                 << 0x19U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U] 
        = ((0xfe1fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U]) 
           | (0xffe00000U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__wfi_lo) 
                              << 0x18U) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__sfence_vma_lo) 
                                            << 0x17U) 
                                           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__fencei_lo) 
                                               << 0x16U) 
                                              | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__csrw_lo) 
                                                 << 0x15U))))));
    __Vtemp_hb2dd4b98__0[3U] = (((IData)((0x7fffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[5U])) 
                                               << 0x39U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[5U])) 
                                                  << 0x19U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[4U])) 
                                                    >> 7U))) 
                                             + ((QData)((IData)(
                                                                (7U 
                                                                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_r)))) 
                                                << 1U)))) 
                                 >> 5U) | ((IData)(
                                                   ((0x7fffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[5U])) 
                                                          << 0x39U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[5U])) 
                                                             << 0x19U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[4U])) 
                                                               >> 7U))) 
                                                        + 
                                                        ((QData)((IData)(
                                                                         (7U 
                                                                          & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_r)))) 
                                                         << 1U))) 
                                                    >> 0x20U)) 
                                           << 0x1bU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[0U] 
        = (IData)((0x1ffffffffffffULL & (((QData)((IData)(
                                                          vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[1U])) 
                                          << 0x1aU) 
                                         | ((QData)((IData)(
                                                            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U])) 
                                            >> 6U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[1U] 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__decoded_imm_lo) 
            << 0x11U) | (IData)(((0x1ffffffffffffULL 
                                  & (((QData)((IData)(
                                                      vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[1U])) 
                                      << 0x1aU) | ((QData)((IData)(
                                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U])) 
                                                   >> 6U))) 
                                 >> 0x20U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[2U] 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__decoded_imm_lo) 
            >> 0xfU) | ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__decoded_imm_lo 
                                 >> 0x20U)) << 0x11U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[3U] 
        = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____VdfgExtracted_hd47060cf__0) 
            << 0x13U) | ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__decoded_imm_lo 
                                  >> 0x20U)) >> 0xfU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] 
        = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____VdfgExtracted_hd47060cf__0) 
            >> 0xdU) | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____VdfgExtracted_hd47060cf__0 
                                 >> 0x20U)) << 0x13U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
        = (((0x7c000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_reg__DOT__data_r 
                                  >> 2U)) << 0xeU)) 
            | ((IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____VdfgExtracted_hd47060cf__0 
                        >> 0x20U)) >> 0xdU)) | (0xfff80000U 
                                                & ((IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_reg__DOT__data_r 
                                                            >> 2U)) 
                                                   << 0xeU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[6U] 
        = (((0x7c000U & ((IData)((0x7fffffffffULL & 
                                  ((((QData)((IData)(
                                                     vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[5U])) 
                                     << 0x39U) | (((QData)((IData)(
                                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[5U])) 
                                                   << 0x19U) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[4U])) 
                                                     >> 7U))) 
                                   + ((QData)((IData)(
                                                      (7U 
                                                       & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_r)))) 
                                      << 1U)))) << 0xeU)) 
            | ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_reg__DOT__data_r 
                        >> 2U)) >> 0x12U)) | (__Vtemp_hb2dd4b98__0[3U] 
                                              << 0x13U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U] 
        = ((0xffe00000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[7U]) 
           | ((__Vtemp_hb2dd4b98__0[3U] >> 0xdU) | 
              (0xfff80000U & ((IData)(((0x7fffffffffULL 
                                        & ((((QData)((IData)(
                                                             vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[5U])) 
                                             << 0x39U) 
                                            | (((QData)((IData)(
                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[5U])) 
                                                << 0x19U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[4U])) 
                                                  >> 7U))) 
                                           + ((QData)((IData)(
                                                              (7U 
                                                               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_r)))) 
                                              << 1U))) 
                                       >> 0x20U)) << 0xeU))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____VdfgExtracted_hd47060cf__0 
        = (((QData)((IData)((7U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o[0U] 
                                   >> 3U)))) << 0x38U) 
           | (((QData)((IData)(((0x40U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U])
                                 ? (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_reg__DOT__data_r))
                                 : 3U))) << 0x36U) 
              | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__instr_decoder__DOT__decode_cast_o));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__irs_match_lo 
        = ((2U & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__int_scoreboard__DOT__scoreboard_reg__DOT__data_r 
                   >> (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[6U] 
                                >> 2U))) << 1U)) | 
           (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__int_scoreboard__DOT__scoreboard_reg__DOT__data_r 
                  >> (0x1fU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[6U] 
                                << 3U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                                          >> 0x1dU))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frs_match_lo 
        = ((4U & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fp_scoreboard__DOT__scoreboard_reg__DOT__data_r 
                   >> (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[6U] 
                                >> 9U))) << 2U)) | 
           ((2U & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fp_scoreboard__DOT__scoreboard_reg__DOT__data_r 
                    >> (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[6U] 
                                 >> 2U))) << 1U)) | 
            (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fp_scoreboard__DOT__scoreboard_reg__DOT__data_r 
                   >> (0x1fU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[6U] 
                                 << 3U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                                           >> 0x1dU)))))));
    vlSelf->__VdfgTmp_hb78f3160__0 = (0xfU & (((0xfU 
                                                & ((7U 
                                                    & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_r)) 
                                                   + 
                                                   (3U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                                                       >> 9U)))) 
                                               >= (7U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                                                      >> 0xbU)))
                                               ? ((IData)(8U) 
                                                  - 
                                                  (7U 
                                                   & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_r)))
                                               : (3U 
                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                                                     >> 9U))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____VdfgTmp_h6eb52fb8__0 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
            >> 8U) & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____VdfgTmp_he4d3fd22__0));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li 
        = ((0U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo)) 
           & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[8U] 
                  >> 7U)) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_force_lo)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fence_haz_v 
        = (1U & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] 
                  >> 0x16U) & (~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__sync_reg__DOT__data_r) 
                                  >> 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fflags_haz_v 
        = (1U & ((IData)((0U != (0x30000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U]))) 
                 & (((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[0U] 
                        >> 0x15U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[1U] 
                                     >> 0xcU)) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[2U] 
                                                  >> 3U)) 
                     | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[2U] 
                        >> 0x1aU)) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__fdiv_busy_lo))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__control_haz_v 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fence_haz_v) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fflags_haz_v));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____Vlvbound_h3a44e700__0 
        = ((0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                     >> 0x15U)) == (0x1fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[0U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector 
        = ((6U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector)) 
           | (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____Vlvbound_h3a44e700__0));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____Vlvbound_h3a44e700__0 
        = ((0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                     >> 0x15U)) == (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[0U] 
                                             >> 0x17U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector 
        = ((5U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector)) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____Vlvbound_h3a44e700__0) 
              << 1U));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____Vlvbound_h3a44e700__0 
        = ((0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                     >> 0x15U)) == (0x1fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[1U] 
                                             >> 0xeU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector 
        = ((3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector)) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____Vlvbound_h3a44e700__0) 
              << 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__iscore_haz_v 
        = (1U & (((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] 
                     >> 0x1bU) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[0U] 
                                  >> 6U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector)) 
                  | (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] 
                       >> 0x1bU) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[0U] 
                                    >> 0x1dU)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector) 
                                                  >> 1U))) 
                 | (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] 
                      >> 0x1bU) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[1U] 
                                   >> 0x14U)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector) 
                                                 >> 2U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fscore_haz_v 
        = (1U & (((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] 
                     >> 0x1aU) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[0U] 
                                  >> 5U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector)) 
                  | (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] 
                       >> 0x1aU) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[0U] 
                                    >> 0x1cU)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector) 
                                                  >> 1U))) 
                 | (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[4U] 
                      >> 0x1aU) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r[1U] 
                                   >> 0x13U)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector) 
                                                 >> 2U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__cmd_haz_v 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__full;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__struct_haz_v 
        = (1U & (((((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__cmd_haz_v) 
                      | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fscore_haz_v)) 
                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__iscore_haz_v)) 
                    | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__sync_reg__DOT__data_r) 
                       & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                          >> 7U))) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__sync_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                                         >> 5U))) | 
                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__fdiv_busy_lo) 
                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                      >> 1U))) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__idiv_busy_lo) 
                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o[5U] 
                                     >> 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fdata_yumi_lo 
        = (1U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                  & (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li)))) 
                 >> 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_yumi_lo 
        = (1U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                  & (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li)))) 
                 >> 1U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT____VdfgTmp_h530b7c19__0 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li)) 
           & (0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r)));
    __Vtableidx23 = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh_v_li) 
                      << 7U) | (((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__gets_high_part_r)
                                    ? (0x3fU == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__shift_counter_r))
                                    : (0x40U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__shift_counter_r)))
                                   ? 4U : 3U) << 4U) 
                                | ((((5U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__curr_state_r)) 
                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_yumi_lo)) 
                                    << 3U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__curr_state_r))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__next_state 
        = Vtestbench__ConstPool__TABLE_hc1a1ebca_0[__Vtableidx23];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state = 0U;
    if (((((((((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)) 
               | (1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
              | (2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
             | (3U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
            | (4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
           | (5U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
          | (6U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) 
         | (7U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)))) {
        if ((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) {
            if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__idiv__v_i) {
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state = 1U;
            }
        } else {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state 
                = ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                    ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opC_reg__DOT__data_r[2U] 
                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__req_reg__DOT__data_r))
                        ? 2U : 3U) : ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                       ? 3U : ((3U 
                                                == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                ? 4U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                    ? 
                                                   ((0x20U 
                                                     == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__calc_cnt))
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__add1_out[2U])
                                                      ? 5U
                                                      : 6U)
                                                     : 4U)
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                     ? 6U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))
                                                      ? 
                                                     ((1U 
                                                       & ((~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[0U] 
                                                                        | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[1U]) 
                                                                       | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r[2U])))) 
                                                          | (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__q_neg_r))))
                                                       ? 8U
                                                       : 7U)
                                                      : 8U))))));
        }
    } else if ((8U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state 
            = (((8U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state)) 
                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_yumi_lo))
                ? 0U : 8U);
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hb8ea5438_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h1ce3b5f3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h686d6437_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h2d784e4f_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h64a662f0_0;

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__66(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__66\n"); );
    // Init
    CData/*3:0*/ __Vtableidx22;
    __Vtableidx22 = 0;
    // Body
    __Vtableidx22 = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
                      << 3U) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_li) 
                                 << 2U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__num_els_r)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_hb8ea5438_0[__Vtableidx22];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_h1ce3b5f3_0[__Vtableidx22];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_h686d6437_0[__Vtableidx22];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2d784e4f_0[__Vtableidx22];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_h64a662f0_0[__Vtableidx22];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_h1ce3b5f3_0[__Vtableidx22];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_h686d6437_0[__Vtableidx22];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h4a137e31__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_force_lo) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_lo));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i 
        = (0xffU & ((- (IData)(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tl_reg__DOT__data_r) 
                                & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__bypass_word_addr 
                                    == (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[0U] 
                                        >> 3U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el0_valid))))) 
                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[3U]));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__mux1_sel) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[0U];
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U] 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[1U];
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U] 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[2U];
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[3U];
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
            = vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i[0U];
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U] 
            = vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i[1U];
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U] 
            = vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i[2U];
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
            = vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i[3U];
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__bypass_data_n 
        = (((QData)((IData)((0xffU & ((0x80U & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                       ? (((IData)(vlSelf->__VdfgTmp_hc05ad450__0) 
                                           << 7U) | 
                                          (((IData)(vlSelf->__VdfgTmp_hcb5afe62__0) 
                                            << 6U) 
                                           | (((IData)(vlSelf->__VdfgTmp_hd968c581__0) 
                                               << 5U) 
                                              | (((IData)(vlSelf->__VdfgTmp_hb04b8aa4__0) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->__VdfgTmp_hf4f0a807__0) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->__VdfgTmp_h9d12f3da__0) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->__VdfgTmp_h822baf81__0) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->__VdfgTmp_hf4ef8f45__0))))))))
                                       : ((0x80U & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                           ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[2U] 
                                               << 8U) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[2U] 
                                                 >> 0x18U))
                                           : ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[2U] 
                                               << 8U) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[2U] 
                                                 >> 0x18U))))))) 
            << 0x38U) | (((QData)((IData)((0xffU & 
                                           ((0x40U 
                                             & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                             ? (((IData)(vlSelf->__VdfgTmp_h36be5946__0) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__VdfgTmp_h3721f29a__0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__VdfgTmp_hc5f83ad4__0) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h0b14a7bb__0) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__VdfgTmp_h0e039a24__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->__VdfgTmp_h77657a03__0) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->__VdfgTmp_h7a3ac4eb__0) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__VdfgTmp_h48bb345d__0))))))))
                                             : ((0x40U 
                                                 & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                 ? 
                                                ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[2U] 
                                                    >> 0x10U))
                                                 : 
                                                ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[2U] 
                                                  << 0x10U) 
                                                 | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[2U] 
                                                    >> 0x10U))))))) 
                          << 0x30U) | (((QData)((IData)(
                                                        (0xffU 
                                                         & ((0x20U 
                                                             & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                             ? 
                                                            (((IData)(vlSelf->__VdfgTmp_h99d1840d__0) 
                                                              << 7U) 
                                                             | (((IData)(vlSelf->__VdfgTmp_hb697f037__0) 
                                                                 << 6U) 
                                                                | (((IData)(vlSelf->__VdfgTmp_hfa5ccaff__0) 
                                                                    << 5U) 
                                                                   | (((IData)(vlSelf->__VdfgTmp_hdcea8e3c__0) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->__VdfgTmp_h8ddc59bd__0) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSelf->__VdfgTmp_hc6c67d9e__0) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->__VdfgTmp_hc3abc214__0) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->__VdfgTmp_hb62c6968__0))))))))
                                                             : 
                                                            ((0x20U 
                                                              & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                              ? 
                                                             ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[2U] 
                                                                 >> 8U))
                                                              : 
                                                             ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[2U] 
                                                               << 0x18U) 
                                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[2U] 
                                                                 >> 8U))))))) 
                                        << 0x28U) | 
                                       (((QData)((IData)(
                                                         (0xffU 
                                                          & ((0x10U 
                                                              & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             (((IData)(vlSelf->__VdfgTmp_h658c8cdb__0) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->__VdfgTmp_ha462bda2__0) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->__VdfgTmp_ha2e7adf6__0) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->__VdfgTmp_h7aa856d4__0) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_h65096c67__0) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->__VdfgTmp_h02d2168f__0) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->__VdfgTmp_h29c37e91__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h78e49d68__0))))))))
                                                              : 
                                                             ((0x10U 
                                                               & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[2U]
                                                               : 
                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[2U]))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((((8U 
                                                              & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                              ? 
                                                             (((IData)(vlSelf->__VdfgTmp_h662f62d7__0) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->__VdfgTmp_h63b429a4__0) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->__VdfgTmp_h548897a6__0) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->__VdfgTmp_h9a536b62__0) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_h94c723fb__0) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->__VdfgTmp_h6ffdaeb5__0) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->__VdfgTmp_h1ad469e1__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h1a5590ca__0))))))))
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                               ? 
                                                              ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[1U] 
                                                                << 8U) 
                                                               | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[1U] 
                                                                  >> 0x18U))
                                                               : 
                                                              ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[1U] 
                                                                << 8U) 
                                                               | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[1U] 
                                                                  >> 0x18U)))) 
                                                            << 0x18U) 
                                                           | ((0xff0000U 
                                                               & (((4U 
                                                                    & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                    ? 
                                                                   (((IData)(vlSelf->__VdfgTmp_h0daeebb5__0) 
                                                                     << 7U) 
                                                                    | (((IData)(vlSelf->__VdfgTmp_h95abd302__0) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_h39a13ce8__0) 
                                                                           << 5U) 
                                                                          | (((IData)(vlSelf->__VdfgTmp_h67654a04__0) 
                                                                              << 4U) 
                                                                             | (((IData)(vlSelf->__VdfgTmp_h0b97170b__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h7b2c4021__0) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h6df19a25__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h5cc632aa__0))))))))
                                                                    : 
                                                                   ((4U 
                                                                     & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                     ? 
                                                                    ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[1U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[1U] 
                                                                        >> 0x10U))
                                                                     : 
                                                                    ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[1U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[1U] 
                                                                        >> 0x10U)))) 
                                                                  << 0x10U)) 
                                                              | ((0xff00U 
                                                                  & (((2U 
                                                                       & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                       ? 
                                                                      (((IData)(vlSelf->__VdfgTmp_h53b4c29d__0) 
                                                                        << 7U) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_h78a32db5__0) 
                                                                           << 6U) 
                                                                          | (((IData)(vlSelf->__VdfgTmp_h17ff034e__0) 
                                                                              << 5U) 
                                                                             | (((IData)(vlSelf->__VdfgTmp_h12c9814b__0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h7be20b3a__0) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h26b47603__0) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h2f3b6e44__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h2e31a902__0))))))))
                                                                       : 
                                                                      ((2U 
                                                                        & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                        ? 
                                                                       ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[1U] 
                                                                           >> 8U))
                                                                        : 
                                                                       ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[1U] 
                                                                         << 0x18U) 
                                                                        | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[1U] 
                                                                           >> 8U)))) 
                                                                     << 8U)) 
                                                                 | (0xffU 
                                                                    & ((1U 
                                                                        & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i))
                                                                        ? (IData)(vlSelf->__VdfgTmp_hf0c4d09a__0)
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i))
                                                                         ? 
                                                                        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[1U]
                                                                         : 
                                                                        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[1U]))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7748342__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
              >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
              >> 0xeU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
              >> 0xdU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
              >> 0xcU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
              >> 0xbU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
              >> 0xaU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
              >> 9U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
              >> 8U));
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7748342__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xfU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xeU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xdU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xcU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xbU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xaU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 9U)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 8U)))));
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_fast_write 
        = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7748342__0) 
            << 7U) | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0) 
                       << 6U) | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0) 
                                  << 5U) | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0) 
                                             << 4U) 
                                            | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0) 
                                                << 3U) 
                                               | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0))))))));
}
