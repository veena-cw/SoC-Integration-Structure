// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_tlb__Bz1_EC8_EB2_E1.h"

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__4(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__4\n"); );
    // Body
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfU & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                   >> 0x14U));
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fU & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 0xaU));
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fU & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 1U));
    vlSelf->__VdfgTmp_h7c897945__0 = ((0x40U & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x13U)) 
                                      | ((0x20U & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                   >> 0x15U)) 
                                         | ((0x10U 
                                             & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x17U)) 
                                            | ((8U 
                                                & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                   >> 0x19U)) 
                                               | ((4U 
                                                   & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                      >> 0x1bU)) 
                                                  | ((2U 
                                                      & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                         >> 0x1dU)) 
                                                     | (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                        >> 0x1fU)))))));
}

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__5(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__5\n"); );
    // Body
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (1U & ((IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                 >> 1U));
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__enc_lo 
        = (((2U & ((IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                   >> 1U)) | (1U & ((IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                    >> 3U))) & (1U 
                                                | (2U 
                                                   & ((~ 
                                                       ((IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                        >> 3U)) 
                                                      << 1U))));
}

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__3(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__3\n"); );
    // Init
    IData/*31:0*/ __Vtemp_haa13316d__0;
    // Body
    __Vtemp_haa13316d__0 = ((0xff000000U & ((0xff000000U 
                                             & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                << 8U)) 
                                            | ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted) 
                                               << 0x18U))) 
                            | ((0xff0000U & ((0xffff0000U 
                                              & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                 << 8U)) 
                                             | ((IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                << 0x10U))) 
                               | ((0xff00U & ((vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                               | (IData)(vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                              << 8U)) 
                                  | VL_STREAML_FAST_III(8, 
                                                        ((0x80U 
                                                          & ((~ (IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r)) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & ((~ (IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r)) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & ((~ (IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r)) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & ((~ (IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r)) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & ((~ (IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r)) 
                                                                         << 3U)) 
                                                                     | (7U 
                                                                        & (~ 
                                                                           (((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r) 
                                                                             << 2U) 
                                                                            | (((IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                                                                << 1U) 
                                                                               | (IData)(vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r)))))))))), 0))));
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = __Vtemp_haa13316d__0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo 
        = (((0x80U & (vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                      >> 0x11U)) | (IData)(vlSelf->__VdfgTmp_h7c897945__0)) 
           & (1U | (0xfeU & ((~ (IData)(vlSelf->__VdfgTmp_h7c897945__0)) 
                             << 1U))));
}

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__4(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb__4\n"); );
    // Body
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xcU & (((IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                     | (IData)(vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                    << 2U)) | VL_STREAML_FAST_III(2, 
                                                  (3U 
                                                   & (~ 
                                                      (((IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r)))), 0));
}

VL_ATTR_COLD void Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___ctor_var_reset(Vtestbench_bp_tlb__Bz1_EC8_EB2_E1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                  Vtestbench_bp_tlb__Bz1_EC8_EB2_E1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    vlSelf->__PVT__fence_i = 0;
    vlSelf->__PVT__v_i = 0;
    vlSelf->__PVT__w_i = 0;
    vlSelf->__PVT__vtag_i = 0;
    vlSelf->__PVT__entry_i = 0;
    vlSelf->__PVT__v_o = 0;
    vlSelf->__PVT__entry_o = 0;
    vlSelf->__PVT__w_v_li = 0;
    vlSelf->__PVT__fill_gigapage = 0;
    vlSelf->__PVT__fill_megapage = 0;
    vlSelf->__PVT__fill_kilopage = 0;
    vlSelf->__PVT__flush_4k_li = 0;
    vlSelf->__PVT__tag_r_match_4k_lo = 0;
    vlSelf->__PVT__tag_4k_w_v_li = 0;
    vlSelf->__PVT__flush_2m_li = 0;
    vlSelf->__PVT__tag_r_match_2m_lo = 0;
    vlSelf->__PVT__tag_2m_w_v_li = 0;
    vlSelf->__PVT__tag_r_match_1g_lo = 0;
    vlSelf->__PVT__tag_1g_w_v_li = 0;
    vlSelf->__PVT__mem_4k_w_v_li = 0;
    vlSelf->__PVT__mem_2m_w_v_li = 0;
    vlSelf->__PVT__vtag_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__2__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__3__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__4__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__5__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__6__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_4k__DOT__nz__DOT__tag_array__BRA__7__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__way_lo = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_li = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_update_mask_lo = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_sel_lo = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_update_mask_lo = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__alloc_sel_lo = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__lru_reg__DOT__data_r = 0;
    vlSelf->replacement_4k__DOT__lru__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__enc_lo = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__addr = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__v = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_4k__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->replacement_4k__DOT__lru__DOT__read_decoder__DOT____VdfgTmp_hd35049cc__0 = 0;
    vlSelf->replacement_4k__DOT__lru__DOT__read_decoder__DOT____VdfgTmp_hd35d9a4f__0 = 0;
    vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_2m__DOT__nz__DOT__tag_array__BRA__1__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__way_lo = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__read_update_lo = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__lru_reg__DOT__data_r = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__enc_lo = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__b__DOT__v = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__empty_encoder__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__read_way_encoder__DOT__addr = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__read_way_encoder__DOT__v = 0;
    vlSelf->__PVT__replacement_2m__DOT__lru__DOT__read_way_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tag_array_1g__DOT__nz__DOT__tag_array__BRA__0__KET____DOT__tag_r_reg__DOT__data_r = 0;
    vlSelf->__PVT__mem_array_4k__BRA__0__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__mem_array_4k__BRA__1__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__mem_array_4k__BRA__2__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__mem_array_4k__BRA__3__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__mem_array_4k__BRA__4__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__mem_array_4k__BRA__5__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__mem_array_4k__BRA__6__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__mem_array_4k__BRA__7__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__0__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__genblk2__DOT__mem_array_2m__BRA__1__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__PVT__genblk3__DOT__mem_array_1g__BRA__0__KET____DOT__mem_reg__DOT__data_r = 0;
    vlSelf->__VdfgTmp_h0bfa2b3a__0 = 0;
    vlSelf->__VdfgTmp_hb2e0dc53__0 = 0;
    vlSelf->__VdfgTmp_heb03e355__0 = 0;
    vlSelf->__VdfgTmp_h9fd8b6d8__0 = 0;
    vlSelf->__VdfgTmp_h74fb92a4__0 = 0;
    vlSelf->__VdfgTmp_h5d8f972c__0 = 0;
    vlSelf->__VdfgTmp_hcc6a5e49__0 = 0;
    vlSelf->__VdfgTmp_hb124684b__0 = 0;
    vlSelf->__VdfgTmp_h5700274a__0 = 0;
    vlSelf->__VdfgTmp_h4f7ee412__0 = 0;
    vlSelf->__VdfgTmp_hcb35e6d5__0 = 0;
    vlSelf->__VdfgTmp_h688f3a1f__0 = 0;
    vlSelf->__VdfgTmp_h1c393d63__0 = 0;
    vlSelf->__VdfgTmp_hc9edb506__0 = 0;
    vlSelf->__VdfgTmp_hf5582777__0 = 0;
    vlSelf->__VdfgTmp_h8f743f3b__0 = 0;
    vlSelf->__VdfgTmp_h67e82bed__0 = 0;
    vlSelf->__VdfgTmp_h09fed89b__0 = 0;
    vlSelf->__VdfgTmp_h7c897945__0 = 0;
    vlSelf->__VdfgTmp_heb538426__0 = 0;
}
