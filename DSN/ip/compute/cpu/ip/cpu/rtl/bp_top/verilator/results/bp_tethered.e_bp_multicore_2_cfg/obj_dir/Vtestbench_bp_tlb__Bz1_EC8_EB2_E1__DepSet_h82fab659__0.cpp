// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_tlb__Bz1_EC8_EB2_E1.h"

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__9(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__9\n"); );
    // Body
    vlSelf->__PVT__w_v_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_v_li) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li));
    vlSelf->__PVT__fill_gigapage = ((IData)(vlSelf->__PVT__w_v_li) 
                                    & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                       >> 0xbU));
    vlSelf->__PVT__fill_megapage = ((IData)(vlSelf->__PVT__w_v_li) 
                                    & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                       >> 0xaU));
    vlSelf->__PVT__tag_1g_w_v_li = ((IData)(vlSelf->__PVT__fill_gigapage) 
                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li));
    vlSelf->__PVT__fill_kilopage = ((~ ((IData)(vlSelf->__PVT__fill_gigapage) 
                                        | (IData)(vlSelf->__PVT__fill_megapage))) 
                                    & (IData)(vlSelf->__PVT__w_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_ha01de1e0__0;
    VlWide<4>/*127:0*/ __Vtemp_hd84c1a5d__0;
    VlWide<4>/*127:0*/ __Vtemp_h5723307a__0;
    VlWide<4>/*127:0*/ __Vtemp_h37591d09__0;
    VlWide<4>/*127:0*/ __Vtemp_h9aa6779e__0;
    VlWide<4>/*127:0*/ __Vtemp_h6faaee26__0;
    VlWide<4>/*127:0*/ __Vtemp_h5de90e94__0;
    VlWide<4>/*127:0*/ __Vtemp_h211550b8__0;
    VlWide<4>/*127:0*/ __Vtemp_h5d7cd681__0;
    VlWide<4>/*127:0*/ __Vtemp_h425e8308__0;
    VlWide<4>/*127:0*/ __Vtemp_hac965415__0;
    VlWide<4>/*127:0*/ __Vtemp_ha1b4e213__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f416427__0;
    VlWide<4>/*127:0*/ __Vtemp_h98a92e0c__0;
    VlWide<4>/*127:0*/ __Vtemp_hb3d34c4d__0;
    VlWide<4>/*127:0*/ __Vtemp_hf28a3bb9__0;
    VlWide<4>/*127:0*/ __Vtemp_ha8fb85d6__0;
    VlWide<4>/*127:0*/ __Vtemp_h08526475__0;
    VlWide<4>/*127:0*/ __Vtemp_h2971c7a0__0;
    VlWide<4>/*127:0*/ __Vtemp_h9a11bf85__0;
    VlWide<4>/*127:0*/ __Vtemp_h93333a2a__0;
    VlWide<4>/*127:0*/ __Vtemp_h6fbe479c__0;
    // Body
    if (((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li)) 
         & (IData)(vlSelf->__PVT__tag_1g_w_v_li))) {
        vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
    } else {
        if (vlSelf->__PVT__tag_1g_w_v_li) {
            vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li)));
        }
        if (((0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo)) 
             | (IData)(vlSelf->__PVT__fill_megapage))) {
            vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r 
                = (1U & ((IData)(vlSelf->__PVT__fill_megapage)
                          ? (~ (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__way_lo))
                          : (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__read_update_lo)));
        }
        if (((0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)) 
             | (IData)(vlSelf->__PVT__fill_kilopage))) {
            vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r 
                = ((0x40U & (((0x40U & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                               ? ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                     >> 6U)) : (IData)(vlSelf->__VdfgTmp_h688f3a1f__0)) 
                             << 6U)) | ((0x20U & ((
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                    ? 
                                                   ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                    & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                       >> 5U))
                                                    : (IData)(vlSelf->__VdfgTmp_h1c393d63__0)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (((0x10U 
                                               & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                               ? ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                     >> 4U))
                                               : (IData)(vlSelf->__VdfgTmp_hc9edb506__0)) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((8U 
                                                  & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                  ? 
                                                 ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                     >> 3U))
                                                  : (IData)(vlSelf->__VdfgTmp_hf5582777__0)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((4U 
                                                       & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                         >> 1U)) 
                                                       & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                          >> 2U))
                                                       : (IData)(vlSelf->__VdfgTmp_h8f743f3b__0)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((2U 
                                                          & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                            >> 1U)) 
                                                          & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                             >> 1U))
                                                          : (IData)(vlSelf->__VdfgTmp_h67e82bed__0)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((1U 
                                                           & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                           ? 
                                                          ((~ 
                                                            ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                             >> 2U)) 
                                                           & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo))
                                                           : (IData)(vlSelf->__VdfgTmp_h09fed89b__0)))))))));
        }
        if ((2U & (IData)(vlSelf->__PVT__tag_2m_w_v_li))) {
            vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_2m_li)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tag_2m_w_v_li))) {
            vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_2m_li)));
        }
        if ((0x80U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((8U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((4U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((2U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
    }
    if ((2U & (IData)(vlSelf->__PVT__mem_2m_w_v_li))) {
        __Vtemp_ha01de1e0__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_ha01de1e0__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_ha01de1e0__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_ha01de1e0__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hd84c1a5d__0, __Vtemp_ha01de1e0__0, 0x1cU);
        vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffU & ((__Vtemp_hd84c1a5d__0[2U] 
                              << 0x13U) | (__Vtemp_hd84c1a5d__0[1U] 
                                           >> 0xdU)));
    }
    if ((1U & (IData)(vlSelf->__PVT__mem_2m_w_v_li))) {
        __Vtemp_h5723307a__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h5723307a__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h5723307a__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h5723307a__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h37591d09__0, __Vtemp_h5723307a__0, 0x1cU);
        vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffU & ((__Vtemp_h37591d09__0[2U] 
                              << 0x13U) | (__Vtemp_h37591d09__0[1U] 
                                           >> 0xdU)));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h9aa6779e__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h9aa6779e__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h9aa6779e__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h9aa6779e__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h6faaee26__0, __Vtemp_h9aa6779e__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h6faaee26__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h6faaee26__0[1U])) 
                                               >> 4U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h5de90e94__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h5de90e94__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h5de90e94__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h5de90e94__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h211550b8__0, __Vtemp_h5de90e94__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h211550b8__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h211550b8__0[1U])) 
                                               >> 4U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h5d7cd681__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h5d7cd681__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h5d7cd681__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h5d7cd681__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h425e8308__0, __Vtemp_h5d7cd681__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h425e8308__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h425e8308__0[1U])) 
                                               >> 4U)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_hac965415__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_hac965415__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_hac965415__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hac965415__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_ha1b4e213__0, __Vtemp_hac965415__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_ha1b4e213__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_ha1b4e213__0[1U])) 
                                               >> 4U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h5f416427__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h5f416427__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h5f416427__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h5f416427__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h98a92e0c__0, __Vtemp_h5f416427__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h98a92e0c__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h98a92e0c__0[1U])) 
                                               >> 4U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_hb3d34c4d__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_hb3d34c4d__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_hb3d34c4d__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hb3d34c4d__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hf28a3bb9__0, __Vtemp_hb3d34c4d__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_hf28a3bb9__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_hf28a3bb9__0[1U])) 
                                               >> 4U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_ha8fb85d6__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_ha8fb85d6__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_ha8fb85d6__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_ha8fb85d6__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h08526475__0, __Vtemp_ha8fb85d6__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h08526475__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h08526475__0[1U])) 
                                               >> 4U)));
    }
    if ((1U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h2971c7a0__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h2971c7a0__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h2971c7a0__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h2971c7a0__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h9a11bf85__0, __Vtemp_h2971c7a0__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h9a11bf85__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h9a11bf85__0[1U])) 
                                               >> 4U)));
    }
    if (vlSelf->__PVT__fill_gigapage) {
        __Vtemp_h93333a2a__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h93333a2a__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h93333a2a__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h93333a2a__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h6fbe479c__0, __Vtemp_h93333a2a__0, 0x1cU);
        vlSelf->__PVT__genblk3__DOT__mem_array_1g__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x3ffffU & ((__Vtemp_h6fbe479c__0[2U] 
                            << 0xaU) | (__Vtemp_h6fbe479c__0[1U] 
                                        >> 0x16U)));
    }
    if (((~ (IData)(vlSelf->__PVT__flush_2m_li)) & 
         ((IData)(vlSelf->__PVT__tag_2m_w_v_li) >> 1U))) {
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_2m_li)) 
               & (IData)(vlSelf->__PVT__tag_2m_w_v_li)))) {
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if (((~ (IData)(vlSelf->__PVT__flush_4k_li)) & 
         ((IData)(vlSelf->__PVT__tag_4k_w_v_li) >> 7U))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 6U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 5U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 4U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 3U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 2U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 1U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & (IData)(vlSelf->__PVT__tag_4k_w_v_li)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_v_li) {
        vlSelf->__PVT__vtag_reg__DOT__data_r = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    vlSelf->replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                 >> ((IData)(1U) + (1U & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r)))));
    vlSelf->__PVT__tag_r_match_1g_lo = ((IData)(vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                        & (vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                           == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5700274a__0 = ((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h4f7ee412__0 = ((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h0bfa2b3a__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hb2e0dc53__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_heb03e355__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h9fd8b6d8__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h74fb92a4__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5d8f972c__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hcc6a5e49__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hb124684b__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__PVT__tag_r_match_2m_lo = (((IData)(vlSelf->__VdfgTmp_h5700274a__0) 
                                         << 1U) | (IData)(vlSelf->__VdfgTmp_h4f7ee412__0));
    vlSelf->__PVT__tag_r_match_4k_lo = (((IData)(vlSelf->__VdfgTmp_h0bfa2b3a__0) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->__VdfgTmp_hb2e0dc53__0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__VdfgTmp_heb03e355__0) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h9fd8b6d8__0) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__VdfgTmp_h74fb92a4__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->__VdfgTmp_h5d8f972c__0) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->__VdfgTmp_hcc6a5e49__0) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__VdfgTmp_hb124684b__0))))))));
    vlSelf->__VdfgTmp_heb538426__0 = (0U == (((IData)(vlSelf->__PVT__tag_r_match_4k_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__VdfgTmp_hcb35e6d5__0 = (((IData)((0U 
                                                != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__1(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__1\n"); );
    // Body
    vlSelf->__PVT__flush_2m_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li) 
                                  | ((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))));
    vlSelf->__PVT__flush_4k_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li) 
                                  | (((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                      | (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo))));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0\n"); );
    // Body
    vlSelf->__PVT__w_v_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_li) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_w_v_li));
    vlSelf->__PVT__fill_gigapage = ((IData)(vlSelf->__PVT__w_v_li) 
                                    & (IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li 
                                               >> 7U)));
    vlSelf->__PVT__fill_megapage = ((IData)(vlSelf->__PVT__w_v_li) 
                                    & (IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li 
                                               >> 6U)));
    vlSelf->__PVT__tag_1g_w_v_li = ((IData)(vlSelf->__PVT__fill_gigapage) 
                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i));
    vlSelf->__PVT__fill_kilopage = ((~ ((IData)(vlSelf->__PVT__fill_gigapage) 
                                        | (IData)(vlSelf->__PVT__fill_megapage))) 
                                    & (IData)(vlSelf->__PVT__w_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__1(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h9f321d1c__0;
    VlWide<4>/*127:0*/ __Vtemp_h093ab052__0;
    VlWide<4>/*127:0*/ __Vtemp_hfda0d8bf__0;
    VlWide<4>/*127:0*/ __Vtemp_h53f5d31d__0;
    VlWide<4>/*127:0*/ __Vtemp_h960143cd__0;
    VlWide<4>/*127:0*/ __Vtemp_h997de121__0;
    VlWide<4>/*127:0*/ __Vtemp_h0bd0c8a1__0;
    VlWide<4>/*127:0*/ __Vtemp_h080b5ad3__0;
    VlWide<4>/*127:0*/ __Vtemp_h1769623a__0;
    VlWide<4>/*127:0*/ __Vtemp_h0763e7d6__0;
    VlWide<4>/*127:0*/ __Vtemp_h3e3239bc__0;
    VlWide<4>/*127:0*/ __Vtemp_h3c13106e__0;
    VlWide<4>/*127:0*/ __Vtemp_h07d3b92e__0;
    VlWide<4>/*127:0*/ __Vtemp_h1e67f65d__0;
    VlWide<4>/*127:0*/ __Vtemp_h2c325399__0;
    VlWide<4>/*127:0*/ __Vtemp_hdbff2cd4__0;
    VlWide<4>/*127:0*/ __Vtemp_h226f1c77__0;
    VlWide<4>/*127:0*/ __Vtemp_h406f5d48__0;
    VlWide<4>/*127:0*/ __Vtemp_h7bf689d1__0;
    VlWide<4>/*127:0*/ __Vtemp_h3641d803__0;
    VlWide<4>/*127:0*/ __Vtemp_h8546afa5__0;
    VlWide<4>/*127:0*/ __Vtemp_h9de96935__0;
    // Body
    if (((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i)) 
         & (IData)(vlSelf->__PVT__tag_1g_w_v_li))) {
        vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((2U & (IData)(vlSelf->__PVT__mem_2m_w_v_li))) {
        __Vtemp_h9f321d1c__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h9f321d1c__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h9f321d1c__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h9f321d1c__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h093ab052__0, __Vtemp_h9f321d1c__0, 0x1cU);
        vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffU & ((__Vtemp_h093ab052__0[2U] 
                              << 0x13U) | (__Vtemp_h093ab052__0[1U] 
                                           >> 0xdU)));
    }
    if ((1U & (IData)(vlSelf->__PVT__mem_2m_w_v_li))) {
        __Vtemp_hfda0d8bf__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_hfda0d8bf__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_hfda0d8bf__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hfda0d8bf__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h53f5d31d__0, __Vtemp_hfda0d8bf__0, 0x1cU);
        vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffU & ((__Vtemp_h53f5d31d__0[2U] 
                              << 0x13U) | (__Vtemp_h53f5d31d__0[1U] 
                                           >> 0xdU)));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h960143cd__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h960143cd__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h960143cd__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h960143cd__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h997de121__0, __Vtemp_h960143cd__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h997de121__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h997de121__0[1U])) 
                                               >> 4U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h0bd0c8a1__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h0bd0c8a1__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h0bd0c8a1__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h0bd0c8a1__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h080b5ad3__0, __Vtemp_h0bd0c8a1__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h080b5ad3__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h080b5ad3__0[1U])) 
                                               >> 4U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h1769623a__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h1769623a__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h1769623a__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h1769623a__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h0763e7d6__0, __Vtemp_h1769623a__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h0763e7d6__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h0763e7d6__0[1U])) 
                                               >> 4U)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h3e3239bc__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h3e3239bc__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h3e3239bc__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h3e3239bc__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h3c13106e__0, __Vtemp_h3e3239bc__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h3c13106e__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h3c13106e__0[1U])) 
                                               >> 4U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h07d3b92e__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h07d3b92e__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h07d3b92e__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h07d3b92e__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h1e67f65d__0, __Vtemp_h07d3b92e__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h1e67f65d__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h1e67f65d__0[1U])) 
                                               >> 4U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h2c325399__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h2c325399__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h2c325399__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h2c325399__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hdbff2cd4__0, __Vtemp_h2c325399__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_hdbff2cd4__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_hdbff2cd4__0[1U])) 
                                               >> 4U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h226f1c77__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h226f1c77__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h226f1c77__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h226f1c77__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h406f5d48__0, __Vtemp_h226f1c77__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h406f5d48__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h406f5d48__0[1U])) 
                                               >> 4U)));
    }
    if ((1U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h7bf689d1__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h7bf689d1__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h7bf689d1__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h7bf689d1__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h3641d803__0, __Vtemp_h7bf689d1__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h3641d803__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h3641d803__0[1U])) 
                                               >> 4U)));
    }
    if (vlSelf->__PVT__fill_gigapage) {
        __Vtemp_h8546afa5__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h8546afa5__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h8546afa5__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h8546afa5__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h9de96935__0, __Vtemp_h8546afa5__0, 0x1cU);
        vlSelf->__PVT__genblk3__DOT__mem_array_1g__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x3ffffU & ((__Vtemp_h9de96935__0[2U] 
                            << 0xaU) | (__Vtemp_h9de96935__0[1U] 
                                        >> 0x16U)));
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
    } else {
        if (((0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo)) 
             | (IData)(vlSelf->__PVT__fill_megapage))) {
            vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r 
                = (1U & ((IData)(vlSelf->__PVT__fill_megapage)
                          ? (~ (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__way_lo))
                          : (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__read_update_lo)));
        }
        if (vlSelf->__PVT__tag_1g_w_v_li) {
            vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i)));
        }
        if (((0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)) 
             | (IData)(vlSelf->__PVT__fill_kilopage))) {
            vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r 
                = ((0x40U & (((0x40U & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                               ? ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                     >> 6U)) : (IData)(vlSelf->__VdfgTmp_h688f3a1f__0)) 
                             << 6U)) | ((0x20U & ((
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                    ? 
                                                   ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                    & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                       >> 5U))
                                                    : (IData)(vlSelf->__VdfgTmp_h1c393d63__0)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (((0x10U 
                                               & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                               ? ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                     >> 4U))
                                               : (IData)(vlSelf->__VdfgTmp_hc9edb506__0)) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((8U 
                                                  & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                  ? 
                                                 ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                     >> 3U))
                                                  : (IData)(vlSelf->__VdfgTmp_hf5582777__0)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((4U 
                                                       & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                         >> 1U)) 
                                                       & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                          >> 2U))
                                                       : (IData)(vlSelf->__VdfgTmp_h8f743f3b__0)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((2U 
                                                          & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                            >> 1U)) 
                                                          & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                             >> 1U))
                                                          : (IData)(vlSelf->__VdfgTmp_h67e82bed__0)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((1U 
                                                           & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                           ? 
                                                          ((~ 
                                                            ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                             >> 2U)) 
                                                           & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo))
                                                           : (IData)(vlSelf->__VdfgTmp_h09fed89b__0)))))))));
        }
        if ((2U & (IData)(vlSelf->__PVT__tag_2m_w_v_li))) {
            vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_2m_li)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tag_2m_w_v_li))) {
            vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_2m_li)));
        }
        if ((0x80U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((8U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((4U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((2U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
    }
    if (((~ (IData)(vlSelf->__PVT__flush_2m_li)) & 
         ((IData)(vlSelf->__PVT__tag_2m_w_v_li) >> 1U))) {
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_2m_li)) 
               & (IData)(vlSelf->__PVT__tag_2m_w_v_li)))) {
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if (((~ (IData)(vlSelf->__PVT__flush_4k_li)) & 
         ((IData)(vlSelf->__PVT__tag_4k_w_v_li) >> 7U))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 6U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 5U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 4U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 3U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 2U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 1U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & (IData)(vlSelf->__PVT__tag_4k_w_v_li)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_li) {
        vlSelf->__PVT__vtag_reg__DOT__data_r = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    vlSelf->replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                 >> ((IData)(1U) + (1U & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r)))));
    vlSelf->__PVT__tag_r_match_1g_lo = ((IData)(vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                        & (vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                           == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5700274a__0 = ((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h4f7ee412__0 = ((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h0bfa2b3a__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hb2e0dc53__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_heb03e355__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h9fd8b6d8__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h74fb92a4__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5d8f972c__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hcc6a5e49__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hb124684b__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__PVT__tag_r_match_2m_lo = (((IData)(vlSelf->__VdfgTmp_h5700274a__0) 
                                         << 1U) | (IData)(vlSelf->__VdfgTmp_h4f7ee412__0));
    vlSelf->__PVT__tag_r_match_4k_lo = (((IData)(vlSelf->__VdfgTmp_h0bfa2b3a__0) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->__VdfgTmp_hb2e0dc53__0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__VdfgTmp_heb03e355__0) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h9fd8b6d8__0) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__VdfgTmp_h74fb92a4__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->__VdfgTmp_h5d8f972c__0) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->__VdfgTmp_hcc6a5e49__0) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__VdfgTmp_hb124684b__0))))))));
    vlSelf->__VdfgTmp_heb538426__0 = (0U == (((IData)(vlSelf->__PVT__tag_r_match_4k_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__VdfgTmp_hcb35e6d5__0 = (((IData)((0U 
                                                != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0\n"); );
    // Body
    vlSelf->__PVT__flush_2m_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i) 
                                  | ((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))));
    vlSelf->__PVT__flush_4k_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i) 
                                  | (((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                      | (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo))));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__9(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__9\n"); );
    // Body
    vlSelf->__PVT__w_v_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_v_li) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li));
    vlSelf->__PVT__fill_gigapage = ((IData)(vlSelf->__PVT__w_v_li) 
                                    & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                       >> 0xbU));
    vlSelf->__PVT__fill_megapage = ((IData)(vlSelf->__PVT__w_v_li) 
                                    & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                       >> 0xaU));
    vlSelf->__PVT__tag_1g_w_v_li = ((IData)(vlSelf->__PVT__fill_gigapage) 
                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li));
    vlSelf->__PVT__fill_kilopage = ((~ ((IData)(vlSelf->__PVT__fill_gigapage) 
                                        | (IData)(vlSelf->__PVT__fill_megapage))) 
                                    & (IData)(vlSelf->__PVT__w_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hf9ad89a0__0;
    VlWide<4>/*127:0*/ __Vtemp_hc1a9c0e7__0;
    VlWide<4>/*127:0*/ __Vtemp_h8e9d7086__0;
    VlWide<4>/*127:0*/ __Vtemp_ha80486a9__0;
    VlWide<4>/*127:0*/ __Vtemp_h41d89855__0;
    VlWide<4>/*127:0*/ __Vtemp_h7635d191__0;
    VlWide<4>/*127:0*/ __Vtemp_h924a1265__0;
    VlWide<4>/*127:0*/ __Vtemp_h2681914f__0;
    VlWide<4>/*127:0*/ __Vtemp_h351ac9a3__0;
    VlWide<4>/*127:0*/ __Vtemp_hb5c5a48f__0;
    VlWide<4>/*127:0*/ __Vtemp_h6787a6d0__0;
    VlWide<4>/*127:0*/ __Vtemp_h9935aa05__0;
    VlWide<4>/*127:0*/ __Vtemp_hc93ed710__0;
    VlWide<4>/*127:0*/ __Vtemp_h1b67687a__0;
    VlWide<4>/*127:0*/ __Vtemp_hfa36bd05__0;
    VlWide<4>/*127:0*/ __Vtemp_h4616372f__0;
    VlWide<4>/*127:0*/ __Vtemp_h20e74168__0;
    VlWide<4>/*127:0*/ __Vtemp_h40202e05__0;
    VlWide<4>/*127:0*/ __Vtemp_hccd86a7f__0;
    VlWide<4>/*127:0*/ __Vtemp_hd981f96d__0;
    VlWide<4>/*127:0*/ __Vtemp_hc029d399__0;
    VlWide<4>/*127:0*/ __Vtemp_h5b85203e__0;
    // Body
    if (((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li)) 
         & (IData)(vlSelf->__PVT__tag_1g_w_v_li))) {
        vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
    } else {
        if (vlSelf->__PVT__tag_1g_w_v_li) {
            vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li)));
        }
        if (((0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo)) 
             | (IData)(vlSelf->__PVT__fill_megapage))) {
            vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r 
                = (1U & ((IData)(vlSelf->__PVT__fill_megapage)
                          ? (~ (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__way_lo))
                          : (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__read_update_lo)));
        }
        if (((0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)) 
             | (IData)(vlSelf->__PVT__fill_kilopage))) {
            vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r 
                = ((0x40U & (((0x40U & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                               ? ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                     >> 6U)) : (IData)(vlSelf->__VdfgTmp_h688f3a1f__0)) 
                             << 6U)) | ((0x20U & ((
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                    ? 
                                                   ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                    & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                       >> 5U))
                                                    : (IData)(vlSelf->__VdfgTmp_h1c393d63__0)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (((0x10U 
                                               & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                               ? ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                     >> 4U))
                                               : (IData)(vlSelf->__VdfgTmp_hc9edb506__0)) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((8U 
                                                  & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                  ? 
                                                 ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                     >> 3U))
                                                  : (IData)(vlSelf->__VdfgTmp_hf5582777__0)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((4U 
                                                       & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                         >> 1U)) 
                                                       & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                          >> 2U))
                                                       : (IData)(vlSelf->__VdfgTmp_h8f743f3b__0)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((2U 
                                                          & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                            >> 1U)) 
                                                          & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                             >> 1U))
                                                          : (IData)(vlSelf->__VdfgTmp_h67e82bed__0)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((1U 
                                                           & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                           ? 
                                                          ((~ 
                                                            ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                             >> 2U)) 
                                                           & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo))
                                                           : (IData)(vlSelf->__VdfgTmp_h09fed89b__0)))))))));
        }
        if ((2U & (IData)(vlSelf->__PVT__tag_2m_w_v_li))) {
            vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_2m_li)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tag_2m_w_v_li))) {
            vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_2m_li)));
        }
        if ((0x80U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((8U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((4U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((2U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
    }
    if ((2U & (IData)(vlSelf->__PVT__mem_2m_w_v_li))) {
        __Vtemp_hf9ad89a0__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_hf9ad89a0__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_hf9ad89a0__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hf9ad89a0__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hc1a9c0e7__0, __Vtemp_hf9ad89a0__0, 0x1cU);
        vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffU & ((__Vtemp_hc1a9c0e7__0[2U] 
                              << 0x13U) | (__Vtemp_hc1a9c0e7__0[1U] 
                                           >> 0xdU)));
    }
    if ((1U & (IData)(vlSelf->__PVT__mem_2m_w_v_li))) {
        __Vtemp_h8e9d7086__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h8e9d7086__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h8e9d7086__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h8e9d7086__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_ha80486a9__0, __Vtemp_h8e9d7086__0, 0x1cU);
        vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffU & ((__Vtemp_ha80486a9__0[2U] 
                              << 0x13U) | (__Vtemp_ha80486a9__0[1U] 
                                           >> 0xdU)));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h41d89855__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h41d89855__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h41d89855__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h41d89855__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h7635d191__0, __Vtemp_h41d89855__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h7635d191__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h7635d191__0[1U])) 
                                               >> 4U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h924a1265__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h924a1265__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h924a1265__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h924a1265__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h2681914f__0, __Vtemp_h924a1265__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h2681914f__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h2681914f__0[1U])) 
                                               >> 4U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h351ac9a3__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h351ac9a3__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h351ac9a3__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h351ac9a3__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hb5c5a48f__0, __Vtemp_h351ac9a3__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_hb5c5a48f__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_hb5c5a48f__0[1U])) 
                                               >> 4U)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h6787a6d0__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h6787a6d0__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h6787a6d0__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h6787a6d0__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h9935aa05__0, __Vtemp_h6787a6d0__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h9935aa05__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h9935aa05__0[1U])) 
                                               >> 4U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_hc93ed710__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_hc93ed710__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_hc93ed710__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hc93ed710__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h1b67687a__0, __Vtemp_hc93ed710__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h1b67687a__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h1b67687a__0[1U])) 
                                               >> 4U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_hfa36bd05__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_hfa36bd05__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_hfa36bd05__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hfa36bd05__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h4616372f__0, __Vtemp_hfa36bd05__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h4616372f__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h4616372f__0[1U])) 
                                               >> 4U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h20e74168__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_h20e74168__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_h20e74168__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h20e74168__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h40202e05__0, __Vtemp_h20e74168__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h40202e05__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h40202e05__0[1U])) 
                                               >> 4U)));
    }
    if ((1U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_hccd86a7f__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_hccd86a7f__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_hccd86a7f__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hccd86a7f__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hd981f96d__0, __Vtemp_hccd86a7f__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_hd981f96d__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_hd981f96d__0[1U])) 
                                               >> 4U)));
    }
    if (vlSelf->__PVT__fill_gigapage) {
        __Vtemp_hc029d399__0[0U] = (IData)((0xfffffffffULL 
                                            & (((QData)((IData)(
                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                << 0x1cU) 
                                               | ((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                  >> 4U))));
        __Vtemp_hc029d399__0[1U] = (((IData)((0xfffffffffULL 
                                              & (((QData)((IData)(
                                                                  vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                  << 0x1cU) 
                                                 | ((QData)((IData)(
                                                                    vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                    >> 4U)))) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & (((QData)((IData)(
                                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                            << 0x1cU) 
                                                           | ((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                              >> 4U))) 
                                                       >> 0x20U)));
        __Vtemp_hc029d399__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                           << 0x1cU) 
                                                          | ((QData)((IData)(
                                                                             vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                             >> 4U)))) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                              << 0x1cU) 
                                                             | ((QData)((IData)(
                                                                                vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])) 
                                                                >> 4U))) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hc029d399__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h5b85203e__0, __Vtemp_hc029d399__0, 0x1cU);
        vlSelf->__PVT__genblk3__DOT__mem_array_1g__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x3ffffU & ((__Vtemp_h5b85203e__0[2U] 
                            << 0xaU) | (__Vtemp_h5b85203e__0[1U] 
                                        >> 0x16U)));
    }
    if (((~ (IData)(vlSelf->__PVT__flush_2m_li)) & 
         ((IData)(vlSelf->__PVT__tag_2m_w_v_li) >> 1U))) {
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_2m_li)) 
               & (IData)(vlSelf->__PVT__tag_2m_w_v_li)))) {
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if (((~ (IData)(vlSelf->__PVT__flush_4k_li)) & 
         ((IData)(vlSelf->__PVT__tag_4k_w_v_li) >> 7U))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 6U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 5U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 4U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 3U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 2U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 1U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & (IData)(vlSelf->__PVT__tag_4k_w_v_li)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_v_li) {
        vlSelf->__PVT__vtag_reg__DOT__data_r = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li;
    }
    vlSelf->replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                 >> ((IData)(1U) + (1U & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r)))));
    vlSelf->__PVT__tag_r_match_1g_lo = ((IData)(vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                        & (vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                           == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5700274a__0 = ((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h4f7ee412__0 = ((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h0bfa2b3a__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hb2e0dc53__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_heb03e355__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h9fd8b6d8__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h74fb92a4__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5d8f972c__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hcc6a5e49__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hb124684b__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__PVT__tag_r_match_2m_lo = (((IData)(vlSelf->__VdfgTmp_h5700274a__0) 
                                         << 1U) | (IData)(vlSelf->__VdfgTmp_h4f7ee412__0));
    vlSelf->__PVT__tag_r_match_4k_lo = (((IData)(vlSelf->__VdfgTmp_h0bfa2b3a__0) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->__VdfgTmp_hb2e0dc53__0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__VdfgTmp_heb03e355__0) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h9fd8b6d8__0) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__VdfgTmp_h74fb92a4__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->__VdfgTmp_h5d8f972c__0) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->__VdfgTmp_hcc6a5e49__0) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__VdfgTmp_hb124684b__0))))))));
    vlSelf->__VdfgTmp_heb538426__0 = (0U == (((IData)(vlSelf->__PVT__tag_r_match_4k_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__VdfgTmp_hcb35e6d5__0 = (((IData)((0U 
                                                != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__1(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__1\n"); );
    // Body
    vlSelf->__PVT__flush_2m_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li) 
                                  | ((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))));
    vlSelf->__PVT__flush_4k_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li) 
                                  | (((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                      | (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo))));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0\n"); );
    // Body
    vlSelf->__PVT__w_v_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_li) 
                             & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_w_v_li));
    vlSelf->__PVT__fill_gigapage = ((IData)(vlSelf->__PVT__w_v_li) 
                                    & (IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li 
                                               >> 7U)));
    vlSelf->__PVT__fill_megapage = ((IData)(vlSelf->__PVT__w_v_li) 
                                    & (IData)((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li 
                                               >> 6U)));
    vlSelf->__PVT__tag_1g_w_v_li = ((IData)(vlSelf->__PVT__fill_gigapage) 
                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i));
    vlSelf->__PVT__fill_kilopage = ((~ ((IData)(vlSelf->__PVT__fill_gigapage) 
                                        | (IData)(vlSelf->__PVT__fill_megapage))) 
                                    & (IData)(vlSelf->__PVT__w_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__1(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__1\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h889eebca__0;
    VlWide<4>/*127:0*/ __Vtemp_h6ac2261c__0;
    VlWide<4>/*127:0*/ __Vtemp_h43ed5833__0;
    VlWide<4>/*127:0*/ __Vtemp_h25672570__0;
    VlWide<4>/*127:0*/ __Vtemp_hbdc645a9__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd429597__0;
    VlWide<4>/*127:0*/ __Vtemp_h470f4333__0;
    VlWide<4>/*127:0*/ __Vtemp_ha9152938__0;
    VlWide<4>/*127:0*/ __Vtemp_hfd87c6f5__0;
    VlWide<4>/*127:0*/ __Vtemp_hafbc1afb__0;
    VlWide<4>/*127:0*/ __Vtemp_h406bae9b__0;
    VlWide<4>/*127:0*/ __Vtemp_h53a8cb76__0;
    VlWide<4>/*127:0*/ __Vtemp_h8fb1abba__0;
    VlWide<4>/*127:0*/ __Vtemp_h987d54fe__0;
    VlWide<4>/*127:0*/ __Vtemp_h74e50105__0;
    VlWide<4>/*127:0*/ __Vtemp_h9c9ae4cc__0;
    VlWide<4>/*127:0*/ __Vtemp_he40ce04c__0;
    VlWide<4>/*127:0*/ __Vtemp_hd4c0f43b__0;
    VlWide<4>/*127:0*/ __Vtemp_hd56e4f88__0;
    VlWide<4>/*127:0*/ __Vtemp_hfb3c5ac6__0;
    VlWide<4>/*127:0*/ __Vtemp_h98dff2d3__0;
    VlWide<4>/*127:0*/ __Vtemp_h91ae15df__0;
    // Body
    if (((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i)) 
         & (IData)(vlSelf->__PVT__tag_1g_w_v_li))) {
        vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((2U & (IData)(vlSelf->__PVT__mem_2m_w_v_li))) {
        __Vtemp_h889eebca__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h889eebca__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h889eebca__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h889eebca__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h6ac2261c__0, __Vtemp_h889eebca__0, 0x1cU);
        vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffU & ((__Vtemp_h6ac2261c__0[2U] 
                              << 0x13U) | (__Vtemp_h6ac2261c__0[1U] 
                                           >> 0xdU)));
    }
    if ((1U & (IData)(vlSelf->__PVT__mem_2m_w_v_li))) {
        __Vtemp_h43ed5833__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h43ed5833__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h43ed5833__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h43ed5833__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h25672570__0, __Vtemp_h43ed5833__0, 0x1cU);
        vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x7ffffffU & ((__Vtemp_h25672570__0[2U] 
                              << 0x13U) | (__Vtemp_h25672570__0[1U] 
                                           >> 0xdU)));
    }
    if ((0x80U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_hbdc645a9__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_hbdc645a9__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_hbdc645a9__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hbdc645a9__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hfd429597__0, __Vtemp_hbdc645a9__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_hfd429597__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_hfd429597__0[1U])) 
                                               >> 4U)));
    }
    if ((0x40U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h470f4333__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h470f4333__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h470f4333__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h470f4333__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_ha9152938__0, __Vtemp_h470f4333__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_ha9152938__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_ha9152938__0[1U])) 
                                               >> 4U)));
    }
    if ((0x20U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_hfd87c6f5__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_hfd87c6f5__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_hfd87c6f5__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hfd87c6f5__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hafbc1afb__0, __Vtemp_hfd87c6f5__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_hafbc1afb__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_hafbc1afb__0[1U])) 
                                               >> 4U)));
    }
    if ((0x10U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h406bae9b__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h406bae9b__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h406bae9b__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h406bae9b__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h53a8cb76__0, __Vtemp_h406bae9b__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h53a8cb76__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h53a8cb76__0[1U])) 
                                               >> 4U)));
    }
    if ((8U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h8fb1abba__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h8fb1abba__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h8fb1abba__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h8fb1abba__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h987d54fe__0, __Vtemp_h8fb1abba__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h987d54fe__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h987d54fe__0[1U])) 
                                               >> 4U)));
    }
    if ((4U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_h74e50105__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h74e50105__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h74e50105__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h74e50105__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h9c9ae4cc__0, __Vtemp_h74e50105__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_h9c9ae4cc__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_h9c9ae4cc__0[1U])) 
                                               >> 4U)));
    }
    if ((2U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_he40ce04c__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_he40ce04c__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_he40ce04c__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_he40ce04c__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hd4c0f43b__0, __Vtemp_he40ce04c__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_hd4c0f43b__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_hd4c0f43b__0[1U])) 
                                               >> 4U)));
    }
    if ((1U & (IData)(vlSelf->__PVT__mem_4k_w_v_li))) {
        __Vtemp_hd56e4f88__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_hd56e4f88__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_hd56e4f88__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_hd56e4f88__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_hfb3c5ac6__0, __Vtemp_hd56e4f88__0, 0x1cU);
        vlSelf->__PVT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0xfffffffffULL & (((QData)((IData)(__Vtemp_hfb3c5ac6__0[2U])) 
                                  << 0x1cU) | ((QData)((IData)(
                                                               __Vtemp_hfb3c5ac6__0[1U])) 
                                               >> 4U)));
    }
    if (vlSelf->__PVT__fill_gigapage) {
        __Vtemp_h98dff2d3__0[0U] = (IData)((0xfffffffffULL 
                                            & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li));
        __Vtemp_h98dff2d3__0[1U] = (((IData)((0xfffffffffULL 
                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                     << 4U) | (IData)(
                                                      ((0xfffffffffULL 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                       >> 0x20U)));
        __Vtemp_h98dff2d3__0[2U] = (0xffU & (((IData)(
                                                      (0xfffffffffULL 
                                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li)) 
                                              >> 0x1cU) 
                                             | ((IData)(
                                                        ((0xfffffffffULL 
                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li) 
                                                         >> 0x20U)) 
                                                << 4U)));
        __Vtemp_h98dff2d3__0[3U] = 0U;
        VL_SHIFTL_WWI(108,108,6, __Vtemp_h91ae15df__0, __Vtemp_h98dff2d3__0, 0x1cU);
        vlSelf->__PVT__genblk3__DOT__mem_array_1g__BRA__0__KET____DOT__mem_reg__DOT__data_r 
            = (0x3ffffU & ((__Vtemp_h91ae15df__0[2U] 
                            << 0xaU) | (__Vtemp_h91ae15df__0[1U] 
                                        >> 0x16U)));
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0U;
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0U;
    } else {
        if (((0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo)) 
             | (IData)(vlSelf->__PVT__fill_megapage))) {
            vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r 
                = (1U & ((IData)(vlSelf->__PVT__fill_megapage)
                          ? (~ (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__way_lo))
                          : (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__read_update_lo)));
        }
        if (vlSelf->__PVT__tag_1g_w_v_li) {
            vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i)));
        }
        if (((0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)) 
             | (IData)(vlSelf->__PVT__fill_kilopage))) {
            vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r 
                = ((0x40U & (((0x40U & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                               ? ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                     >> 6U)) : (IData)(vlSelf->__VdfgTmp_h688f3a1f__0)) 
                             << 6U)) | ((0x20U & ((
                                                   (0x20U 
                                                    & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                    ? 
                                                   ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                    & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                       >> 5U))
                                                    : (IData)(vlSelf->__VdfgTmp_h1c393d63__0)) 
                                                  << 5U)) 
                                        | ((0x10U & 
                                            (((0x10U 
                                               & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                               ? ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                     >> 4U))
                                               : (IData)(vlSelf->__VdfgTmp_hc9edb506__0)) 
                                             << 4U)) 
                                           | ((8U & 
                                               (((8U 
                                                  & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                  ? 
                                                 ((~ (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo)) 
                                                  & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                     >> 3U))
                                                  : (IData)(vlSelf->__VdfgTmp_hf5582777__0)) 
                                                << 3U)) 
                                              | ((4U 
                                                  & (((4U 
                                                       & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                       ? 
                                                      ((~ 
                                                        ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                         >> 1U)) 
                                                       & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                          >> 2U))
                                                       : (IData)(vlSelf->__VdfgTmp_h8f743f3b__0)) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((2U 
                                                          & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                          ? 
                                                         ((~ 
                                                           ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                            >> 1U)) 
                                                          & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo) 
                                                             >> 1U))
                                                          : (IData)(vlSelf->__VdfgTmp_h67e82bed__0)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((1U 
                                                           & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo))
                                                           ? 
                                                          ((~ 
                                                            ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo) 
                                                             >> 2U)) 
                                                           & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo))
                                                           : (IData)(vlSelf->__VdfgTmp_h09fed89b__0)))))))));
        }
        if ((2U & (IData)(vlSelf->__PVT__tag_2m_w_v_li))) {
            vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_2m_li)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tag_2m_w_v_li))) {
            vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_2m_li)));
        }
        if ((0x80U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((8U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((4U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((2U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
        if ((1U & (IData)(vlSelf->__PVT__tag_4k_w_v_li))) {
            vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r 
                = (1U & (~ (IData)(vlSelf->__PVT__flush_4k_li)));
        }
    }
    if (((~ (IData)(vlSelf->__PVT__flush_2m_li)) & 
         ((IData)(vlSelf->__PVT__tag_2m_w_v_li) >> 1U))) {
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_2m_li)) 
               & (IData)(vlSelf->__PVT__tag_2m_w_v_li)))) {
        vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if (((~ (IData)(vlSelf->__PVT__flush_4k_li)) & 
         ((IData)(vlSelf->__PVT__tag_4k_w_v_li) >> 7U))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 6U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 5U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 4U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 3U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 2U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & ((IData)(vlSelf->__PVT__tag_4k_w_v_li) 
                  >> 1U)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if ((1U & ((~ (IData)(vlSelf->__PVT__flush_4k_li)) 
               & (IData)(vlSelf->__PVT__tag_4k_w_v_li)))) {
        vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_li) {
        vlSelf->__PVT__vtag_reg__DOT__data_r = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li;
    }
    vlSelf->replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o 
        = (1U & ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r) 
                 >> ((IData)(1U) + (1U & (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r)))));
    vlSelf->__PVT__tag_r_match_1g_lo = ((IData)(vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                        & (vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                           == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5700274a__0 = ((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h4f7ee412__0 = ((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h0bfa2b3a__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hb2e0dc53__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_heb03e355__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h9fd8b6d8__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h74fb92a4__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_h5d8f972c__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hcc6a5e49__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__VdfgTmp_hb124684b__0 = ((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r) 
                                      & (vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r 
                                         == vlSelf->__PVT__vtag_reg__DOT__data_r));
    vlSelf->__PVT__tag_r_match_2m_lo = (((IData)(vlSelf->__VdfgTmp_h5700274a__0) 
                                         << 1U) | (IData)(vlSelf->__VdfgTmp_h4f7ee412__0));
    vlSelf->__PVT__tag_r_match_4k_lo = (((IData)(vlSelf->__VdfgTmp_h0bfa2b3a__0) 
                                         << 7U) | (
                                                   ((IData)(vlSelf->__VdfgTmp_hb2e0dc53__0) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__VdfgTmp_heb03e355__0) 
                                                       << 5U) 
                                                      | (((IData)(vlSelf->__VdfgTmp_h9fd8b6d8__0) 
                                                          << 4U) 
                                                         | (((IData)(vlSelf->__VdfgTmp_h74fb92a4__0) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->__VdfgTmp_h5d8f972c__0) 
                                                                << 2U) 
                                                               | (((IData)(vlSelf->__VdfgTmp_hcc6a5e49__0) 
                                                                   << 1U) 
                                                                  | (IData)(vlSelf->__VdfgTmp_hb124684b__0))))))));
    vlSelf->__VdfgTmp_heb538426__0 = (0U == (((IData)(vlSelf->__PVT__tag_r_match_4k_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__VdfgTmp_hcb35e6d5__0 = (((IData)((0U 
                                                != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
}

VL_INLINE_OPT void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0\n"); );
    // Body
    vlSelf->__PVT__flush_2m_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i) 
                                  | ((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))));
    vlSelf->__PVT__flush_4k_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i) 
                                  | (((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                      | (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo))));
}
