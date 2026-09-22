// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"
#include "Vtestbench_bsg_mux_one_hot__W40_E8.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__75(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__75\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0 = 0;
    SData/*8:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0 = 0;
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0 = 0;
    VlWide<6>/*183:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0;
    VL_ZERO_W(184, tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0);
    VlWide<3>/*95:0*/ __Vtemp_he51361f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h00e9d4ed__0;
    VlWide<3>/*95:0*/ __Vtemp_h3aa10a64__0;
    VlWide<3>/*95:0*/ __Vtemp_h15a7b865__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b2992c5__0;
    VlWide<3>/*95:0*/ __Vtemp_h1d4bbac2__0;
    VlWide<3>/*95:0*/ __Vtemp_hd9761c6c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cc872e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h0c0d0d17__0;
    VlWide<4>/*127:0*/ __Vtemp_hd651c52a__0;
    VlWide<4>/*127:0*/ __Vtemp_ha6c0e52c__0;
    VlWide<4>/*127:0*/ __Vtemp_h7c0f0d83__0;
    VlWide<4>/*127:0*/ __Vtemp_he249255c__0;
    VlWide<5>/*159:0*/ __Vtemp_he69e650f__0;
    VlWide<5>/*159:0*/ __Vtemp_h9d423350__0;
    VlWide<5>/*159:0*/ __Vtemp_hc6a9f72c__0;
    VlWide<5>/*159:0*/ __Vtemp_h309096c6__0;
    VlWide<5>/*159:0*/ __Vtemp_h073c706b__0;
    VlWide<5>/*159:0*/ __Vtemp_h27942c08__0;
    VlWide<6>/*191:0*/ __Vtemp_h225afb71__0;
    VlWide<6>/*191:0*/ __Vtemp_h14cd8c67__0;
    VlWide<6>/*191:0*/ __Vtemp_he2faadde__0;
    VlWide<6>/*191:0*/ __Vtemp_h977b3fd8__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_catchup_lo 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li) 
           & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__double_branch)) 
              & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_haee8b913__0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__assembled_rebase 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_haee8b913__0) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__double_branch));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_li 
        = ((0x8000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t)
            ? (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__assembled_rebase) 
                | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_taken_li))
                ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_lo)
                : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_count))
            : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__linear_count));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_rebase 
        = ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[2U] 
               >> 0x18U)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li) 
                             & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__assembled_rebase)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____VdfgTmp_hc8f0f972__0 
        = (7U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_lo) 
                 - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_btaken) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_jmp) 
              | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret) 
                 | (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[2U] 
                      >> 0x18U) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li) 
                                   & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                          >> 0xfU)) 
                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_lo) 
                                         > (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__linear_count))))) 
                    | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_rebase)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____Vcellinp__partial_reg__data_i 
        = (((QData)((IData)((0xffffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li)
                                         ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__itlb_fill_response_v)
                                             ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                                 << 0x1cU) 
                                                | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                                   >> 4U))
                                             : ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
                                                 << 0x18U) 
                                                | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                                   >> 8U)))
                                         : (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux->data_o 
                                                    >> 0x30U)))))) 
            << 0x28U) | ((0xfffffffffeULL & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li)
                                               ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_pc_li
                                               : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li)
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_pc_lo 
                                                   + 
                                                   ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_li)) 
                                                    << 1U))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if2_stage_reg__DOT__data_r[2U])) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if2_stage_reg__DOT__data_r[2U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if2_stage_reg__DOT__data_r[1U])) 
                                                         >> 0x11U))))) 
                                             << 1U)) 
                         | (QData)((IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li)
                                                   ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_resume_li)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li)
                                                    ? 
                                                   (1U 
                                                    == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____VdfgTmp_hc8f0f972__0))
                                                    : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT__partial_reg__DOT__data_r))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_yumi_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_hit_v_lo) 
           & ((1U >= (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____VdfgTmp_hc8f0f972__0)) 
              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pred 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li)) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo)
               ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_btaken)
               : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_pred_lo)));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_taken 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_taken;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = (0x1ffffffffffffULL & (((QData)((IData)(
                                                      vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U])) 
                                                      >> 0x14U))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
            = (0x7fffffffffULL & (((QData)((IData)(
                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[3U])) 
                                   << 0x35U) | (((QData)((IData)(
                                                                 vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[3U])) 
                                                 << 0x15U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                   >> 0xbU))));
    } else if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_taken 
            = vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgExtracted_h620de693__0;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__metadata_if1;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1f7ffffffffffULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret)) 
                  << 0x2bU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
            = (0x7fffffffffULL & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret)
                                   ? vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT____Vcellout__mem__r_data_o
                                   : (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_btaken) 
                                       | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_jmp))
                                       ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__taken_tgt_lo
                                       : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_rebase)
                                           ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ntaken_tgt_lo
                                           : (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_pc_lo 
                                              + (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__fetch_scan_cast_o[3U])) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__fetch_scan_cast_o[3U])) 
                                                     << 0x12U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__fetch_scan_cast_o[2U])) 
                                                       >> 0xeU))))))));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_taken 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_taken;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata = 0ULL;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fbffffffffffULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_br_tgt_v_lo)) 
                  << 0x2aU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fffffffff00fULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_data_lo)) 
                  << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fffffffffffcULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghist_reg__DOT__data_r)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fffc00000fffULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)(((0x3fe000U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__tag_reg__DOT__data_r) 
                                                 << 0xdU)) 
                                   | ((0x1f80U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__tag_reg__DOT__data_r) 
                                                  >> 2U)) 
                                      | (0x7fU & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__pred_idx_reg__DOT__data_r)))))) 
                  << 0xcU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fffffffffff3ULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)((3U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__pred_idx_reg__DOT__data_r) 
                                         >> 7U)))) 
                  << 2U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
            = (0x7fffffffffULL & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_taken)
                                   ? vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT____Vcellout__btb_mem__r_data_o
                                   : (8ULL + (0x7ffffffff8ULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[0U])))))));
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n 
        = (3U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li)
                  ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                      << 0xcU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                  >> 0x14U)) : (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo)) 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__metadata_if1 
                                                    >> 0x30U))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghist_reg__DOT__data_r) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[2U] 
                                                       >> 0x18U)))
                                                 : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghist_reg__DOT__data_r))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_force_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_yumi_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_fence_v_lo) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_hit_v_lo) 
              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_yumi_li)));
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r)))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) 
                   | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v) 
                      | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo)));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo = 1U;
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT____Vcellinp__exception_reg__reset_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo) 
           | (IData)(vlSelf->__PVT__tile__DOT__reset_r));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h89094a34__0) 
           & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo)) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_req) 
                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cached_req) 
                    | (IData)((1U == (0x10000001U & 
                                      vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li 
        = (0x7ffffffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li)
                          ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[3U] 
                              << 9U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
                                        >> 0x17U)) : (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                              >> 0xcU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__r_addr_li 
        = (0x3fU & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                             >> 2U)) ^ (1U & (IData)(
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                      >> 1U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_idx_li 
        = (0x7fU & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                             >> 2U)) ^ (1U & (IData)(
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                      >> 1U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_bypass 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tl_reg__DOT__data_r) 
           & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                       >> 1U)) & ((0x3fU & (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                    >> 6U))) 
                                  == (0x3fU & (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                       >> 9U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write 
        = ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
               >> 2U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_yumi_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_we 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r)
            ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_yumi_li)
            : (0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_load_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo) 
           & (0U == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____VdfgTmp_h140e6b91__0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_store_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo) 
           & (1U == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____VdfgTmp_h140e6b91__0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__r_addr_li 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n) 
            << 7U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_idx_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_bypass) 
           & ((0x7ffffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                     >> 0xcU))) == 
              (0x7ffffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                     >> 0xfU)))));
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r)))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_force_li 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) 
                   | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v) 
                      | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo)));
        }
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_we 
        = (1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tl_reg__DOT__data_r)
                  ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_we) 
                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_force_li))
                  : (~ ((4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__timeout_cnt_r)) 
                        | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__cache_init_done_o)) 
                           | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__sync_done_reg__DOT__data_r)) 
                              & (1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_mode_r))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_v_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_we));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__r_addr_li) 
                 == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_idx_li))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__r_addr_li) 
                 == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__w_addr_li))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li) 
           & (~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hc0d69593__0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li)) 
           & (2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r)));
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
        } else if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v)))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
        }
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_r_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li))) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__w_v_li 
        = ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r)) 
           | ((~ ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li)) 
                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr))) 
              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li))) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_v_li 
        = ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
           | ((~ ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li)) 
                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr))) 
              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0 
        = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover)
                      ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                 >> 6U)) : (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                    >> 3U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_bypass)) 
              & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                     & ((IData)(1U) << (7U & (IData)(
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                      >> 3U))))) 
                    | ((0x7fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                 & (((IData)(1U) << 
                                     (7U & (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                    >> 3U)))) 
                                    >> 1U))) | ((0x3fU 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 2U))) 
                                                | ((0x1fU 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 3U))) 
                                                   | ((0xfU 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 4U))) 
                                                      | ((7U 
                                                          & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 5U))) 
                                                         | ((3U 
                                                             & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                                & (((IData)(1U) 
                                                                    << 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                   >> 6U))) 
                                                            | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               & (((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                               >> 3U)))) 
                                                                  >> 7U))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                     & (((IData)(1U) << (7U & (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                       >> 3U)))) 
                        >> 7U)) | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                    & ((IData)(1U) 
                                       << (7U & (IData)(
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                         >> 3U))))) 
                                   | ((0x7fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                >> 3U)))) 
                                                   >> 1U))) 
                                      | ((0x3fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 2U))) 
                                         | ((0x1fU 
                                             & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                >> 3U)))) 
                                                   >> 3U))) 
                                            | ((0xfU 
                                                & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 4U))) 
                                               | ((7U 
                                                   & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                      >> 3U)))) 
                                                         >> 5U))) 
                                                  | (3U 
                                                     & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                        >> 3U)))) 
                                                           >> 6U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((3U & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                           & (((IData)(1U) << (7U & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                              >> 6U))) | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                           & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                              >> 3U)))) 
                                              >> 7U)) 
                                          | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U))))) 
                                             | ((0x7fU 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 1U))) 
                                                | ((0x3fU 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 2U))) 
                                                   | ((0x1fU 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 3U))) 
                                                      | ((0xfU 
                                                          & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 4U))) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               & (((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                               >> 3U)))) 
                                                                  >> 5U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((7U & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                           & (((IData)(1U) << (7U & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                              >> 5U))) | ((3U & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                 >> 3U)))) 
                                                    >> 6U))) 
                                          | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                              >> 3U)))) 
                                                 >> 7U)) 
                                             | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                >> 3U))))) 
                                                | ((0x7fU 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 1U))) 
                                                   | ((0x3fU 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 2U))) 
                                                      | ((0x1fU 
                                                          & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 3U))) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               & (((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                               >> 3U)))) 
                                                                  >> 4U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((0xfU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                             & (((IData)(1U) << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                            >> 3U)))) 
                                >> 4U))) | ((7U & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 5U))) 
                                            | ((3U 
                                                & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 6U))) 
                                               | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 7U)) 
                                                  | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                     >> 3U))))) 
                                                     | ((0x7fU 
                                                         & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                            >> 3U)))) 
                                                               >> 1U))) 
                                                        | ((0x3fU 
                                                            & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                               & (((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                               >> 3U)))) 
                                                                  >> 2U))) 
                                                           | (0x1fU 
                                                              & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                                 & (((IData)(1U) 
                                                                     << 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                    >> 3U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((0x1fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                              & (((IData)(1U) << (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                                 >> 3U))) | ((0xfU 
                                              & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                 >> 3U)))) 
                                                    >> 4U))) 
                                             | ((7U 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 5U))) 
                                                | ((3U 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 6U))) 
                                                   | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 7U)) 
                                                      | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          & ((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                         >> 3U))))) 
                                                         | ((0x7fU 
                                                             & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                                & (((IData)(1U) 
                                                                    << 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                   >> 1U))) 
                                                            | (0x3fU 
                                                               & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                                  & (((IData)(1U) 
                                                                      << 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                     >> 2U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((0x3fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                              & (((IData)(1U) << (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                                 >> 2U))) | ((0x1fU 
                                              & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                 >> 3U)))) 
                                                    >> 3U))) 
                                             | ((0xfU 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 4U))) 
                                                | ((7U 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 5U))) 
                                                   | ((3U 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 6U))) 
                                                      | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 7U)) 
                                                         | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             & ((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                            >> 3U))))) 
                                                            | (0x7fU 
                                                               & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                                  & (((IData)(1U) 
                                                                      << 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                     >> 1U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((0x7fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                              & (((IData)(1U) << (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                                 >> 1U))) | ((0x3fU 
                                              & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                 >> 3U)))) 
                                                    >> 2U))) 
                                             | ((0x1fU 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 3U))) 
                                                | ((0xfU 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 4U))) 
                                                   | ((7U 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 5U))) 
                                                      | ((3U 
                                                          & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 6U))) 
                                                         | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 7U)) 
                                                            | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               & ((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                              >> 3U)))))))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_r_v_li) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo 
        = ((~ (((~ ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                    & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_v_li))) 
                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li)) 
               | ((~ ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r)) 
                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__w_v_li))) 
                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li)))) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li 
        = (0x3fU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read)
                     ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover)
                         ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                    >> 9U)) : (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                       >> 6U)))
                     : (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                >> 0x1dU))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(7U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(6U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(5U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(4U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(3U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(2U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(1U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & (- ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo 
        = ((2U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U]))
            ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_v_o)
            : ((~ ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0) 
                   | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0) 
                      | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0) 
                         | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0) 
                            | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0) 
                               | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0) 
                                  | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0) 
                                     | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0))))))))) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_v_o)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((((1U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
             & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71aa046__0)
                 ? (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                     >> 7U) ^ ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                  >> 6U))) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                              >> 7U))) 
            << 7U) | ((0x40U & (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                 | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71aa046__0)
                                     ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))
                                     : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                        >> 6U))) << 6U)) 
                      | ((((1U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                           & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71170c1__0)
                               ? (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                   >> 5U) ^ ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                             & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                >> 4U)))
                               : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                  >> 5U))) << 5U) | 
                         ((0x10U & (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                     | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71170c1__0)
                                         ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))
                                         : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                            >> 4U))) 
                                    << 4U)) | ((((1U 
                                                  != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc7a88338__0)
                                                     ? 
                                                    (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                      >> 3U) 
                                                     ^ 
                                                     ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                         >> 2U)))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                     >> 3U))) 
                                                << 3U) 
                                               | ((4U 
                                                   & (((1U 
                                                        == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                                       | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc7a88338__0)
                                                           ? 
                                                          (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))
                                                           : 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                           >> 2U))) 
                                                      << 2U)) 
                                                  | ((((1U 
                                                        != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_h22e177e6__0)
                                                           ? 
                                                          (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                            >> 1U) 
                                                           ^ 
                                                           ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                                            & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)))
                                                           : 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                           >> 1U))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((1U 
                                                            == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                                           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_h22e177e6__0)
                                                               ? 
                                                              (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))
                                                               : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r;
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li)
                    ? 2U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r));
        } else if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
        } else if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n = 3U;
        } else {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v) 
                   & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__fetch_exception_v)
                    ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_nonattaboy_v)
                ? 2U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
            = (1U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__empty)) 
                     & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_reset_v))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
            = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_reset_v) 
                & ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                   & ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r)) 
                      & (2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT__state_r)))))
                ? 3U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r));
    }
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][0U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][1U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][2U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][3U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][4U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
           & (1U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U])));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
           & (0U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U])));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr_n 
        = (3U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li)));
    __Vtemp_he51361f3__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
                                                              >> 0x1fU)
                                                              ? 
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                              >> 0x1fU))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((0x40000000U 
                                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                 ? 
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                 >> 0x1eU)
                                                                 : 
                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                 >> 0x1eU))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0x20000000U 
                                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                    ? 
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                    >> 0x1dU)
                                                                    : 
                                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                    >> 0x1dU))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((0x10000000U 
                                                                       & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                       ? 
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                       >> 0x1cU)
                                                                       : 
                                                                      (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                       >> 0x1cU))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0x8000000U 
                                                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                          ? 
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                          >> 0x1bU)
                                                                          : 
                                                                         (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                          >> 0x1bU))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((0x4000000U 
                                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                             ? 
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                             >> 0x1aU)
                                                                             : 
                                                                            (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                             >> 0x1aU))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                ? 
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x19U)
                                                                                : 
                                                                               (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x19U))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x18U))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x17U))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x16U))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x15U))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x14U))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x13U))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]
                                                                                 : 
                                                                                tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]
                                                                                 : 
                                                                                tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_he51361f3__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
                                                               >> 0x1fU)
                                                               ? 
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                               >> 0x1fU)
                                                               : 
                                                              (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                               >> 0x1fU))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & ((0x40000000U 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                  ? 
                                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                  >> 0x1eU)
                                                                  : 
                                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                  >> 0x1eU))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((0x20000000U 
                                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                     ? 
                                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                     >> 0x1dU)
                                                                     : 
                                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                     >> 0x1dU))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((0x10000000U 
                                                                        & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                        ? 
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                        >> 0x1cU)
                                                                        : 
                                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                        >> 0x1cU))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((0x8000000U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                           ? 
                                                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                           >> 0x1bU)
                                                                           : 
                                                                          (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                           >> 0x1bU))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((0x4000000U 
                                                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                              ? 
                                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                              >> 0x1aU)
                                                                              : 
                                                                             (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                              >> 0x1aU))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x19U))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x18U))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x17U))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x16U))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x15U))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x14U))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x13U))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]
                                                                                 : 
                                                                                tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]
                                                                                 : 
                                                                                tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h00e9d4ed__0[2U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                               >> 4U)
                                            : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                             >> 3U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                         >> 2U)
                                                         : 
                                                        (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                            >> 1U)
                                                            : 
                                                           (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]
                                                             : 
                                                            tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U]))))));
    __Vtemp_h3aa10a64__0[2U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                >> 9U)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                   >> 8U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 7U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                     >> 6U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 5U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h00e9d4ed__0[2U])))));
    __Vtemp_h15a7b865__0[2U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                 >> 0xeU)
                                              : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                 >> 0xdU)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                    >> 0xcU)
                                                    : 
                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                >> 0xbU)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0xaU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h3aa10a64__0[2U])))));
    __Vtemp_h2b2992c5__0[2U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x13U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x12U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                     >> 0x11U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x10U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0xfU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h15a7b865__0[2U])))));
    __Vtemp_h1d4bbac2__0[2U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                 >> 0x18U)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                   >> 0x17U)
                                                   : 
                                                  (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                             >> 0x16U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x15U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x14U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h2b2992c5__0[2U])))));
    __Vtemp_hd9761c6c__0[2U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                             >> 0x1bU)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x1aU)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x19U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h1d4bbac2__0[2U])))));
    __Vtemp_h8cc872e9__0[3U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                               >> 4U)
                                            : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                             >> 3U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                         >> 2U)
                                                         : 
                                                        (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                            >> 1U)
                                                            : 
                                                           (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]
                                                             : 
                                                            tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U]))))));
    __Vtemp_h0c0d0d17__0[3U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                >> 9U)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                   >> 8U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 7U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                     >> 6U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 5U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h8cc872e9__0[3U])))));
    __Vtemp_hd651c52a__0[3U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                 >> 0xeU)
                                              : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                 >> 0xdU)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                    >> 0xcU)
                                                    : 
                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                >> 0xbU)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0xaU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h0c0d0d17__0[3U])))));
    __Vtemp_ha6c0e52c__0[3U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x13U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x12U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                     >> 0x11U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x10U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0xfU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hd651c52a__0[3U])))));
    __Vtemp_h7c0f0d83__0[3U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                 >> 0x18U)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                   >> 0x17U)
                                                   : 
                                                  (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                             >> 0x16U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x15U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x14U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_ha6c0e52c__0[3U])))));
    __Vtemp_he249255c__0[3U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                             >> 0x1bU)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x1aU)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x19U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h7c0f0d83__0[3U])))));
    __Vtemp_he69e650f__0[4U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                               >> 4U)
                                            : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                             >> 3U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                         >> 2U)
                                                         : 
                                                        (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                            >> 1U)
                                                            : 
                                                           (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]
                                                             : 
                                                            tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U]))))));
    __Vtemp_h9d423350__0[4U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                >> 9U)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                   >> 8U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 7U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                     >> 6U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 5U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_he69e650f__0[4U])))));
    __Vtemp_hc6a9f72c__0[4U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                 >> 0xeU)
                                              : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                 >> 0xdU)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                    >> 0xcU)
                                                    : 
                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                >> 0xbU)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0xaU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h9d423350__0[4U])))));
    __Vtemp_h309096c6__0[4U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x13U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x12U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                     >> 0x11U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x10U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0xfU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hc6a9f72c__0[4U])))));
    __Vtemp_h073c706b__0[4U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                 >> 0x18U)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                   >> 0x17U)
                                                   : 
                                                  (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                             >> 0x16U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x15U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x14U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h309096c6__0[4U])))));
    __Vtemp_h27942c08__0[4U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                             >> 0x1bU)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x1aU)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x19U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h073c706b__0[4U])))));
    __Vtemp_h225afb71__0[5U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                               >> 4U)
                                            : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                             >> 3U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                         >> 2U)
                                                         : 
                                                        (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                            >> 1U)
                                                            : 
                                                           (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]
                                                             : 
                                                            tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U]))))));
    __Vtemp_h14cd8c67__0[5U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                >> 9U)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                   >> 8U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 7U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                     >> 6U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 5U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h225afb71__0[5U])))));
    __Vtemp_he2faadde__0[5U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                 >> 0xeU)
                                              : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                 >> 0xdU)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                    >> 0xcU)
                                                    : 
                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                >> 0xbU)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0xaU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h14cd8c67__0[5U])))));
    __Vtemp_h977b3fd8__0[5U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x13U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x12U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                     >> 0x11U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x10U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0xfU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_he2faadde__0[5U])))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = __Vtemp_he51361f3__0[0U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = __Vtemp_he51361f3__0[1U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                           >> 0x1fU) : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                              >> 0x1eU)
                                           : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_hd9761c6c__0[2U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                           >> 0x1fU) : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                              >> 0x1eU)
                                           : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_he249255c__0[3U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                           >> 0x1fU) : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                              >> 0x1eU)
                                           : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_h27942c08__0[4U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0x800000U & (((0x800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                              >> 0x17U) : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                           >> 0x17U)) 
                         << 0x17U)) | ((0x400000U & 
                                        (((0x400000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                              >> 0x16U)
                                           : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                              >> 0x16U)) 
                                         << 0x16U)) 
                                       | ((0x200000U 
                                           & (((0x200000U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                   >> 0x15U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 0x15U)) 
                                              << 0x15U)) 
                                          | ((0x100000U 
                                              & (((0x100000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                   >> 0x14U)
                                                   : 
                                                  (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 0x14U)) 
                                                 << 0x14U)) 
                                             | __Vtemp_h977b3fd8__0[5U]))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xeU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xdU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xcU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xbU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xaU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 9U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 8U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__w_i)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__7__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__6__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__5__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__4__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__3__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__2__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__1__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__0__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__v_i));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__64(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__64\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0 = 0;
    SData/*8:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0 = 0;
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0 = 0;
    VlWide<6>/*183:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0;
    VL_ZERO_W(184, tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0);
    VlWide<3>/*95:0*/ __Vtemp_he51361f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h00e9d4ed__0;
    VlWide<3>/*95:0*/ __Vtemp_h3aa10a64__0;
    VlWide<3>/*95:0*/ __Vtemp_h15a7b865__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b2992c5__0;
    VlWide<3>/*95:0*/ __Vtemp_h1d4bbac2__0;
    VlWide<3>/*95:0*/ __Vtemp_hd9761c6c__0;
    VlWide<4>/*127:0*/ __Vtemp_h8cc872e9__0;
    VlWide<4>/*127:0*/ __Vtemp_h0c0d0d17__0;
    VlWide<4>/*127:0*/ __Vtemp_hd651c52a__0;
    VlWide<4>/*127:0*/ __Vtemp_ha6c0e52c__0;
    VlWide<4>/*127:0*/ __Vtemp_h7c0f0d83__0;
    VlWide<4>/*127:0*/ __Vtemp_he249255c__0;
    VlWide<5>/*159:0*/ __Vtemp_he69e650f__0;
    VlWide<5>/*159:0*/ __Vtemp_h9d423350__0;
    VlWide<5>/*159:0*/ __Vtemp_hc6a9f72c__0;
    VlWide<5>/*159:0*/ __Vtemp_h309096c6__0;
    VlWide<5>/*159:0*/ __Vtemp_h073c706b__0;
    VlWide<5>/*159:0*/ __Vtemp_h27942c08__0;
    VlWide<6>/*191:0*/ __Vtemp_h225afb71__0;
    VlWide<6>/*191:0*/ __Vtemp_h14cd8c67__0;
    VlWide<6>/*191:0*/ __Vtemp_he2faadde__0;
    VlWide<6>/*191:0*/ __Vtemp_h977b3fd8__0;
    // Body
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_haee8b913__0 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
            >> 0xfU) & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_taken_li)) 
                        & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_lo) 
                           > (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_count))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_catchup_lo 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li) 
           & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__double_branch)) 
              & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_haee8b913__0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__assembled_rebase 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_haee8b913__0) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__double_branch));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_li 
        = ((0x8000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t)
            ? (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__assembled_rebase) 
                | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_taken_li))
                ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_lo)
                : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_count))
            : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__linear_count));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_rebase 
        = ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[2U] 
               >> 0x18U)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li) 
                             & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__assembled_rebase)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____VdfgTmp_hc8f0f972__0 
        = (7U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_lo) 
                 - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_btaken) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_jmp) 
              | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret) 
                 | (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[2U] 
                      >> 0x18U) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li) 
                                   & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                          >> 0xfU)) 
                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_lo) 
                                         > (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__linear_count))))) 
                    | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_rebase)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____Vcellinp__partial_reg__data_i 
        = (((QData)((IData)((0xffffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li)
                                         ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__itlb_fill_response_v)
                                             ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                                 << 0x1cU) 
                                                | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                                   >> 4U))
                                             : ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
                                                 << 0x18U) 
                                                | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                                   >> 8U)))
                                         : (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_set_select_mux->data_o 
                                                    >> 0x30U)))))) 
            << 0x28U) | ((0xfffffffffeULL & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li)
                                               ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_pc_li
                                               : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li)
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_pc_lo 
                                                   + 
                                                   ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_li)) 
                                                    << 1U))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if2_stage_reg__DOT__data_r[2U])) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if2_stage_reg__DOT__data_r[2U])) 
                                                       << 0xfU) 
                                                      | ((QData)((IData)(
                                                                         vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if2_stage_reg__DOT__data_r[1U])) 
                                                         >> 0x11U))))) 
                                             << 1U)) 
                         | (QData)((IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li)
                                                   ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_resume_li)
                                                   : 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li)
                                                    ? 
                                                   (1U 
                                                    == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____VdfgTmp_hc8f0f972__0))
                                                    : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT__partial_reg__DOT__data_r))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_yumi_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_hit_v_lo) 
           & ((1U >= (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____VdfgTmp_hc8f0f972__0)) 
              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pred 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li)) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo)
               ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_btaken)
               : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_pred_lo)));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_taken 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_taken;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = (0x1ffffffffffffULL & (((QData)((IData)(
                                                      vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                      << 0x2cU) | (
                                                   ((QData)((IData)(
                                                                    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    << 0xcU) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U])) 
                                                      >> 0x14U))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
            = (0x7fffffffffULL & (((QData)((IData)(
                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[3U])) 
                                   << 0x35U) | (((QData)((IData)(
                                                                 vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[3U])) 
                                                 << 0x15U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                   >> 0xbU))));
    } else if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_taken 
            = vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgExtracted_h620de693__0;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__metadata_if1;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1f7ffffffffffULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret)) 
                  << 0x2bU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
            = (0x7fffffffffULL & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret)
                                   ? vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT____Vcellout__mem__r_data_o
                                   : (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_btaken) 
                                       | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_jmp))
                                       ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__taken_tgt_lo
                                       : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_rebase)
                                           ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ntaken_tgt_lo
                                           : (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_pc_lo 
                                              + (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__fetch_scan_cast_o[3U])) 
                                                  << 0x32U) 
                                                 | (((QData)((IData)(
                                                                     vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__fetch_scan_cast_o[3U])) 
                                                     << 0x12U) 
                                                    | ((QData)((IData)(
                                                                       vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__fetch_scan_cast_o[2U])) 
                                                       >> 0xeU))))))));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_taken 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_taken;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata = 0ULL;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fbffffffffffULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_br_tgt_v_lo)) 
                  << 0x2aU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fffffffff00fULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_data_lo)) 
                  << 4U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fffffffffffcULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghist_reg__DOT__data_r)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fffc00000fffULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)(((0x3fe000U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__tag_reg__DOT__data_r) 
                                                 << 0xdU)) 
                                   | ((0x1f80U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__tag_reg__DOT__data_r) 
                                                  >> 2U)) 
                                      | (0x7fU & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__pred_idx_reg__DOT__data_r)))))) 
                  << 0xcU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata 
            = ((0x1fffffffffff3ULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata) 
               | ((QData)((IData)((3U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__pred_idx_reg__DOT__data_r) 
                                         >> 7U)))) 
                  << 2U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
            = (0x7fffffffffULL & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_taken)
                                   ? vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT____Vcellout__btb_mem__r_data_o
                                   : (8ULL + (0x7ffffffff8ULL 
                                              & (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[0U])))))));
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n 
        = (3U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li)
                  ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                      << 0xcU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                  >> 0x14U)) : (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo)) 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__metadata_if1 
                                                    >> 0x30U))
                                                 ? 
                                                ((2U 
                                                  & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghist_reg__DOT__data_r) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r[2U] 
                                                       >> 0x18U)))
                                                 : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghist_reg__DOT__data_r))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_force_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_yumi_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_fence_v_lo) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_hit_v_lo) 
              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_yumi_li)));
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r)))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) 
                   | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v) 
                      | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo)));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo = 1U;
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT____Vcellinp__exception_reg__reset_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo) 
           | (IData)(vlSelf->__PVT__tile__DOT__reset_r));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h89094a34__0) 
           & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo)) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_req) 
                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cached_req) 
                    | (IData)((1U == (0x10000001U & 
                                      vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U])))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li 
        = (0x7ffffffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li)
                          ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[3U] 
                              << 9U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
                                        >> 0x17U)) : (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                              >> 0xcU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__r_addr_li 
        = (0x3fU & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                             >> 2U)) ^ (1U & (IData)(
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                      >> 1U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_idx_li 
        = (0x7fU & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                             >> 2U)) ^ (1U & (IData)(
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                      >> 1U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_bypass 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tl_reg__DOT__data_r) 
           & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                       >> 1U)) & ((0x3fU & (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                    >> 6U))) 
                                  == (0x3fU & (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                       >> 9U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write 
        = ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
               >> 2U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_yumi_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_we 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r)
            ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_yumi_li)
            : (0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_load_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo) 
           & (0U == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____VdfgTmp_h140e6b91__0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_store_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo) 
           & (1U == (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____VdfgTmp_h140e6b91__0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__r_addr_li 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n) 
            << 7U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_idx_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_bypass) 
           & ((0x7ffffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                     >> 0xcU))) == 
              (0x7ffffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                     >> 0xfU)))));
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r)))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_force_li 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) 
                   | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v) 
                      | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo)));
        }
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_we 
        = (1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tl_reg__DOT__data_r)
                  ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_we) 
                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_force_li))
                  : (~ ((4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__timeout_cnt_r)) 
                        | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__cache_init_done_o)) 
                           | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__sync_done_reg__DOT__data_r)) 
                              & (1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_mode_r))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_v_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_we));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__r_addr_li) 
                 == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_idx_li))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__r_addr_li) 
                 == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__w_addr_li))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li) 
           & (~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hc0d69593__0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li)) 
           & (2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r)));
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
        } else if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
        } else if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v)))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
        }
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_r_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li))) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__w_v_li 
        = ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r)) 
           | ((~ ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li)) 
                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr))) 
              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li))) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_v_li 
        = ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
           | ((~ ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li)) 
                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr))) 
              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0 
        = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover)
                      ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                 >> 6U)) : (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                    >> 3U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_bypass)) 
              & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                     & ((IData)(1U) << (7U & (IData)(
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                      >> 3U))))) 
                    | ((0x7fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                 & (((IData)(1U) << 
                                     (7U & (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                    >> 3U)))) 
                                    >> 1U))) | ((0x3fU 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 2U))) 
                                                | ((0x1fU 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 3U))) 
                                                   | ((0xfU 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 4U))) 
                                                      | ((7U 
                                                          & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 5U))) 
                                                         | ((3U 
                                                             & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                                & (((IData)(1U) 
                                                                    << 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                   >> 6U))) 
                                                            | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               & (((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                               >> 3U)))) 
                                                                  >> 7U))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                     & (((IData)(1U) << (7U & (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                       >> 3U)))) 
                        >> 7U)) | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                    & ((IData)(1U) 
                                       << (7U & (IData)(
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                         >> 3U))))) 
                                   | ((0x7fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                >> 3U)))) 
                                                   >> 1U))) 
                                      | ((0x3fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 2U))) 
                                         | ((0x1fU 
                                             & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                & (((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                >> 3U)))) 
                                                   >> 3U))) 
                                            | ((0xfU 
                                                & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 4U))) 
                                               | ((7U 
                                                   & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                      & (((IData)(1U) 
                                                          << 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                      >> 3U)))) 
                                                         >> 5U))) 
                                                  | (3U 
                                                     & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                        & (((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                        >> 3U)))) 
                                                           >> 6U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((3U & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                           & (((IData)(1U) << (7U & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                              >> 6U))) | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                           & (((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                              >> 3U)))) 
                                              >> 7U)) 
                                          | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                              & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U))))) 
                                             | ((0x7fU 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 1U))) 
                                                | ((0x3fU 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 2U))) 
                                                   | ((0x1fU 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 3U))) 
                                                      | ((0xfU 
                                                          & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 4U))) 
                                                         | (7U 
                                                            & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               & (((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                               >> 3U)))) 
                                                                  >> 5U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((7U & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                           & (((IData)(1U) << (7U & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                              >> 5U))) | ((3U & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                 >> 3U)))) 
                                                    >> 6U))) 
                                          | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                              & (((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                              >> 3U)))) 
                                                 >> 7U)) 
                                             | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                >> 3U))))) 
                                                | ((0x7fU 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 1U))) 
                                                   | ((0x3fU 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 2U))) 
                                                      | ((0x1fU 
                                                          & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 3U))) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               & (((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                               >> 3U)))) 
                                                                  >> 4U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((0xfU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                             & (((IData)(1U) << (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                            >> 3U)))) 
                                >> 4U))) | ((7U & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 5U))) 
                                            | ((3U 
                                                & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 6U))) 
                                               | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                   & (((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                   >> 3U)))) 
                                                      >> 7U)) 
                                                  | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                     >> 3U))))) 
                                                     | ((0x7fU 
                                                         & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                            >> 3U)))) 
                                                               >> 1U))) 
                                                        | ((0x3fU 
                                                            & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                               & (((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                               >> 3U)))) 
                                                                  >> 2U))) 
                                                           | (0x1fU 
                                                              & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                                 & (((IData)(1U) 
                                                                     << 
                                                                     (7U 
                                                                      & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                    >> 3U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((0x1fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                              & (((IData)(1U) << (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                                 >> 3U))) | ((0xfU 
                                              & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                 >> 3U)))) 
                                                    >> 4U))) 
                                             | ((7U 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 5U))) 
                                                | ((3U 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 6U))) 
                                                   | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 7U)) 
                                                      | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          & ((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                         >> 3U))))) 
                                                         | ((0x7fU 
                                                             & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                                & (((IData)(1U) 
                                                                    << 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                   >> 1U))) 
                                                            | (0x3fU 
                                                               & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                                  & (((IData)(1U) 
                                                                      << 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                     >> 2U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((0x3fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                              & (((IData)(1U) << (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                                 >> 2U))) | ((0x1fU 
                                              & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                 >> 3U)))) 
                                                    >> 3U))) 
                                             | ((0xfU 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 4U))) 
                                                | ((7U 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 5U))) 
                                                   | ((3U 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 6U))) 
                                                      | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 7U)) 
                                                         | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             & ((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                            >> 3U))))) 
                                                            | (0x7fU 
                                                               & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                                  & (((IData)(1U) 
                                                                      << 
                                                                      (7U 
                                                                       & (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                                >> 3U)))) 
                                                                     >> 1U)))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover) 
           | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h7a653e30__0) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass)) 
                 | ((0x7fU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                              & (((IData)(1U) << (7U 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                             >> 3U)))) 
                                 >> 1U))) | ((0x3fU 
                                              & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                                 & (((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (IData)(
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                 >> 3U)))) 
                                                    >> 2U))) 
                                             | ((0x1fU 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                    & (((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                    >> 3U)))) 
                                                       >> 3U))) 
                                                | ((0xfU 
                                                    & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                       & (((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                       >> 3U)))) 
                                                          >> 4U))) 
                                                   | ((7U 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                          & (((IData)(1U) 
                                                              << 
                                                              (7U 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                          >> 3U)))) 
                                                             >> 5U))) 
                                                      | ((3U 
                                                          & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 6U))) 
                                                         | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                             >> 3U)))) 
                                                                >> 7U)) 
                                                            | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               & ((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                                              >> 3U)))))))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_r_v_li) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo 
        = ((~ (((~ ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                    & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_v_li))) 
                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li)) 
               | ((~ ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r)) 
                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__w_v_li))) 
                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li)))) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li 
        = (0x3fU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read)
                     ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover)
                         ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                    >> 9U)) : (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc 
                                                       >> 6U)))
                     : (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                >> 0x1dU))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(7U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(6U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(5U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(4U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(3U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(2U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & ((IData)(1U) 
                                           - ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__addr_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0)
            ? (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h4a3150e7__0)
            : ((0x1f8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                          >> 6U)) | (7U & (- ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                               << 0x1aU) 
                                              | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                 >> 6U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo 
        = ((2U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U]))
            ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_v_o)
            : ((~ ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0) 
                   | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0) 
                      | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0) 
                         | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0) 
                            | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0) 
                               | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0) 
                                  | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0) 
                                     | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0))))))))) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_v_o)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li 
        = ((((1U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
             & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71aa046__0)
                 ? (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                     >> 7U) ^ ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                  >> 6U))) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                              >> 7U))) 
            << 7U) | ((0x40U & (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                 | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71aa046__0)
                                     ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))
                                     : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                        >> 6U))) << 6U)) 
                      | ((((1U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                           & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71170c1__0)
                               ? (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                   >> 5U) ^ ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                             & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                >> 4U)))
                               : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                  >> 5U))) << 5U) | 
                         ((0x10U & (((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                     | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71170c1__0)
                                         ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))
                                         : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                            >> 4U))) 
                                    << 4U)) | ((((1U 
                                                  != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                                 & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc7a88338__0)
                                                     ? 
                                                    (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                      >> 3U) 
                                                     ^ 
                                                     ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                         >> 2U)))
                                                     : 
                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                     >> 3U))) 
                                                << 3U) 
                                               | ((4U 
                                                   & (((1U 
                                                        == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                                       | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc7a88338__0)
                                                           ? 
                                                          (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))
                                                           : 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                           >> 2U))) 
                                                      << 2U)) 
                                                  | ((((1U 
                                                        != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                                       & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_h22e177e6__0)
                                                           ? 
                                                          (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                            >> 1U) 
                                                           ^ 
                                                           ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo)) 
                                                            & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)))
                                                           : 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li) 
                                                           >> 1U))) 
                                                      << 1U) 
                                                     | (1U 
                                                        & ((1U 
                                                            == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                                                           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_h22e177e6__0)
                                                               ? 
                                                              (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo))
                                                               : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li)))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r;
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li)
                    ? 2U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r));
        } else if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
                = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li;
        } else if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n = 3U;
        } else {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v) 
                   & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
                = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__fetch_exception_v)
                    ? 1U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
            = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_nonattaboy_v)
                ? 2U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li 
            = (1U & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__empty)) 
                     & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_reset_v))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n 
            = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_reset_v) 
                & ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                   & ((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r)) 
                      & (2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT__state_r)))))
                ? 3U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r));
    }
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][0U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][1U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][2U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][3U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][4U];
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
           & (1U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U])));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo) 
           & (0U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U])));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr_n 
        = (3U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr__DOT__ptr_r) 
                 + (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li)));
    __Vtemp_he51361f3__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
                                                              >> 0x1fU)
                                                              ? 
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                              >> 0x1fU))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((0x40000000U 
                                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                 ? 
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                 >> 0x1eU)
                                                                 : 
                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                 >> 0x1eU))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0x20000000U 
                                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                    ? 
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                    >> 0x1dU)
                                                                    : 
                                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                    >> 0x1dU))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((0x10000000U 
                                                                       & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                       ? 
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                       >> 0x1cU)
                                                                       : 
                                                                      (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                       >> 0x1cU))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0x8000000U 
                                                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                          ? 
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                          >> 0x1bU)
                                                                          : 
                                                                         (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                          >> 0x1bU))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((0x4000000U 
                                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                             ? 
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                             >> 0x1aU)
                                                                             : 
                                                                            (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                             >> 0x1aU))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                ? 
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x19U)
                                                                                : 
                                                                               (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x19U))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x18U))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x17U))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x16U))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x15U))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x14U))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x13U))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]
                                                                                 : 
                                                                                tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]
                                                                                 : 
                                                                                tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_he51361f3__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U] 
                                                               >> 0x1fU)
                                                               ? 
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                               >> 0x1fU)
                                                               : 
                                                              (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                               >> 0x1fU))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & ((0x40000000U 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                  ? 
                                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                  >> 0x1eU)
                                                                  : 
                                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                  >> 0x1eU))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((0x20000000U 
                                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                     ? 
                                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                     >> 0x1dU)
                                                                     : 
                                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                     >> 0x1dU))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((0x10000000U 
                                                                        & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                        ? 
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                        >> 0x1cU)
                                                                        : 
                                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                        >> 0x1cU))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((0x8000000U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                           ? 
                                                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                           >> 0x1bU)
                                                                           : 
                                                                          (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                           >> 0x1bU))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((0x4000000U 
                                                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                              ? 
                                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                              >> 0x1aU)
                                                                              : 
                                                                             (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                              >> 0x1aU))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x19U))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x18U))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x17U))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x16U))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x15U))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x14U))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x13U))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[1U]
                                                                                 : 
                                                                                tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[0U]
                                                                                 : 
                                                                                tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_h00e9d4ed__0[2U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                               >> 4U)
                                            : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                             >> 3U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                         >> 2U)
                                                         : 
                                                        (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                            >> 1U)
                                                            : 
                                                           (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U]
                                                             : 
                                                            tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U]))))));
    __Vtemp_h3aa10a64__0[2U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                >> 9U)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                   >> 8U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 7U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                     >> 6U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 5U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h00e9d4ed__0[2U])))));
    __Vtemp_h15a7b865__0[2U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                 >> 0xeU)
                                              : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                 >> 0xdU)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                    >> 0xcU)
                                                    : 
                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                >> 0xbU)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0xaU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h3aa10a64__0[2U])))));
    __Vtemp_h2b2992c5__0[2U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x13U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x12U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                     >> 0x11U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x10U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0xfU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h15a7b865__0[2U])))));
    __Vtemp_h1d4bbac2__0[2U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                 >> 0x18U)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                   >> 0x17U)
                                                   : 
                                                  (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                             >> 0x16U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x15U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x14U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h2b2992c5__0[2U])))));
    __Vtemp_hd9761c6c__0[2U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                             >> 0x1bU)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x1aU)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x19U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h1d4bbac2__0[2U])))));
    __Vtemp_h8cc872e9__0[3U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                               >> 4U)
                                            : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                             >> 3U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                         >> 2U)
                                                         : 
                                                        (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                            >> 1U)
                                                            : 
                                                           (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U]
                                                             : 
                                                            tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U]))))));
    __Vtemp_h0c0d0d17__0[3U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                >> 9U)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                   >> 8U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 7U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                     >> 6U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 5U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h8cc872e9__0[3U])))));
    __Vtemp_hd651c52a__0[3U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                 >> 0xeU)
                                              : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                 >> 0xdU)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                    >> 0xcU)
                                                    : 
                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                >> 0xbU)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0xaU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h0c0d0d17__0[3U])))));
    __Vtemp_ha6c0e52c__0[3U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x13U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x12U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                     >> 0x11U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x10U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0xfU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hd651c52a__0[3U])))));
    __Vtemp_h7c0f0d83__0[3U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                 >> 0x18U)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                   >> 0x17U)
                                                   : 
                                                  (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                             >> 0x16U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x15U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x14U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_ha6c0e52c__0[3U])))));
    __Vtemp_he249255c__0[3U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                             >> 0x1bU)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x1aU)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x19U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h7c0f0d83__0[3U])))));
    __Vtemp_he69e650f__0[4U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                               >> 4U)
                                            : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                             >> 3U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                         >> 2U)
                                                         : 
                                                        (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                            >> 1U)
                                                            : 
                                                           (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U]
                                                             : 
                                                            tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U]))))));
    __Vtemp_h9d423350__0[4U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                >> 9U)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                   >> 8U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 7U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                     >> 6U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 5U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_he69e650f__0[4U])))));
    __Vtemp_hc6a9f72c__0[4U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                 >> 0xeU)
                                              : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                 >> 0xdU)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                    >> 0xcU)
                                                    : 
                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                >> 0xbU)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0xaU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h9d423350__0[4U])))));
    __Vtemp_h309096c6__0[4U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x13U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x12U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                     >> 0x11U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x10U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0xfU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hc6a9f72c__0[4U])))));
    __Vtemp_h073c706b__0[4U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                 >> 0x18U)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                   >> 0x17U)
                                                   : 
                                                  (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                             >> 0x16U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x15U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x14U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h309096c6__0[4U])))));
    __Vtemp_h27942c08__0[4U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                             >> 0x1bU)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x1aU)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x19U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h073c706b__0[4U])))));
    __Vtemp_h225afb71__0[5U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                               >> 4U)
                                            : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                             >> 3U)
                                          : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                         >> 2U)
                                                         : 
                                                        (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                            >> 1U)
                                                            : 
                                                           (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U]
                                                             : 
                                                            tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U]))))));
    __Vtemp_h14cd8c67__0[5U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                >> 9U)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                   >> 8U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 7U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                     >> 6U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 5U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h225afb71__0[5U])))));
    __Vtemp_he2faadde__0[5U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                 >> 0xeU)
                                              : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                 >> 0xdU)
                                                 : 
                                                (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                    >> 0xcU)
                                                    : 
                                                   (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                >> 0xbU)
                                             : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0xaU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h14cd8c67__0[5U])))));
    __Vtemp_h977b3fd8__0[5U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x13U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x12U)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                     >> 0x11U)
                                                     : 
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x10U)
                                               : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                  >> 0xfU)
                                                  : 
                                                 (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_he2faadde__0[5U])))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = __Vtemp_he51361f3__0[0U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = __Vtemp_he51361f3__0[1U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                           >> 0x1fU) : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[2U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[2U] 
                                              >> 0x1eU)
                                           : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_hd9761c6c__0[2U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                           >> 0x1fU) : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[3U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[3U] 
                                              >> 0x1eU)
                                           : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_he249255c__0[3U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                           >> 0x1fU) : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[4U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[4U] 
                                              >> 0x1eU)
                                           : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_h27942c08__0[4U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0x800000U & (((0x800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                              >> 0x17U) : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                           >> 0x17U)) 
                         << 0x17U)) | ((0x400000U & 
                                        (((0x400000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                              >> 0x16U)
                                           : (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                              >> 0x16U)) 
                                         << 0x16U)) 
                                       | ((0x200000U 
                                           & (((0x200000U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                   >> 0x15U)
                                                : (
                                                   tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 0x15U)) 
                                              << 0x15U)) 
                                          | ((0x100000U 
                                              & (((0x100000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li[5U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li[5U] 
                                                   >> 0x14U)
                                                   : 
                                                  (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 0x14U)) 
                                                 << 0x14U)) 
                                             | __Vtemp_h977b3fd8__0[5U]))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xeU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xdU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xcU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xbU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 0xaU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 9U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__w_i 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb136d796__0) 
           & (vlSelf->__VdfgTmp_h2d144dc2__0 >> 8U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__w_i)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__w_i)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__7__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__6__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__5__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__4__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__3__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__2__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__1__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__v_i));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__0__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__w_i)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__v_i));
}
