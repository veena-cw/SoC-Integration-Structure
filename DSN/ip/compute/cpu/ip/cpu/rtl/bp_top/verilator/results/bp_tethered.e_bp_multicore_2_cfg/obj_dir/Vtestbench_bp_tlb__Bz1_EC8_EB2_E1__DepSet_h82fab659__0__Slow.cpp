// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_tlb__Bz1_EC8_EB2_E1.h"

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__0\n"); );
    // Body
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
    vlSelf->__PVT__flush_2m_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li) 
                                  | ((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))));
    vlSelf->__VdfgTmp_heb538426__0 = (0U == (((IData)(vlSelf->__PVT__tag_r_match_4k_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__VdfgTmp_hcb35e6d5__0 = (((IData)((0U 
                                                != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__PVT__flush_4k_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li) 
                                  | (((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                      | (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo))));
}

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0\n"); );
    // Body
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
    vlSelf->__PVT__flush_2m_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i) 
                                  | ((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))));
    vlSelf->__PVT__flush_4k_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i) 
                                  | (((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                      | (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo))));
    vlSelf->__VdfgTmp_heb538426__0 = (0U == (((IData)(vlSelf->__PVT__tag_r_match_4k_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__VdfgTmp_hcb35e6d5__0 = (((IData)((0U 
                                                != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
}

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__0\n"); );
    // Body
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
    vlSelf->__PVT__flush_2m_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li) 
                                  | ((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))));
    vlSelf->__VdfgTmp_heb538426__0 = (0U == (((IData)(vlSelf->__PVT__tag_r_match_4k_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__VdfgTmp_hcb35e6d5__0 = (((IData)((0U 
                                                != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__PVT__flush_4k_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li) 
                                  | (((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                      | (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo))));
}

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb__0\n"); );
    // Body
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
    vlSelf->__PVT__flush_2m_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i) 
                                  | ((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))));
    vlSelf->__PVT__flush_4k_li = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i) 
                                  | (((IData)(vlSelf->__PVT__tag_r_match_1g_lo) 
                                      | (0U != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                     & (0U != (IData)(vlSelf->__PVT__tag_r_match_4k_lo))));
    vlSelf->__VdfgTmp_heb538426__0 = (0U == (((IData)(vlSelf->__PVT__tag_r_match_4k_lo) 
                                              - (IData)(1U)) 
                                             & (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
    vlSelf->__VdfgTmp_hcb35e6d5__0 = (((IData)((0U 
                                                != (IData)(vlSelf->__PVT__tag_r_match_2m_lo))) 
                                       << 1U) | (0U 
                                                 != (IData)(vlSelf->__PVT__tag_r_match_4k_lo)));
}
