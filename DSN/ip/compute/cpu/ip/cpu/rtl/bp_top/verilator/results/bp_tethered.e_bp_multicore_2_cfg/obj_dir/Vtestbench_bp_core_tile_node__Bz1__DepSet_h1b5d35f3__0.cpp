// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__12(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__12\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li 
        = (7U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r)
                  ? ((0x10000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                      ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_way_tv)
                      : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv))
                  : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o) 
                     >> 2U)));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__17(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__17\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0 = 0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                  >> 9U)) | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                                   >> 8U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                                     >> 0xcU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                                      >> 0x10U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                 >> 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                 >> 4U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                 >> 6U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr 
        = ((0xfffffe00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr) 
           | (0x100U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr 
        = ((0xfffffbffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr) 
           | (0x400U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr 
        = ((0xffffefffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr) 
           | (0x1000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr 
        = ((0xffffbfffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr) 
           | (0x4000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                         << 7U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0 
        = (1U & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                     >> 0xaU)) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                                  >> 0x18U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard 
        = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_ha44752dc__0) 
            & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0)) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) 
              & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U] 
                  >> 0xaU) & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0))));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li 
            = (0x3fU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x13U] 
                         << 0x10U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x13U] 
                                      >> 0x10U)));
    } else {
        if ((1U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                           >> 2U)))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
        } else if ((1U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                  >> 1U)))) {
            if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))) {
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                    = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                    = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                    = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                    = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                    = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                    = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                    = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                    = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                    = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                    = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                    = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                    = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                    = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
            } else {
                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                    = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                             >> 0x17U)) 
                                    << 0x14U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                    = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]) 
                       | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2);
                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                    = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                             >> 0x17U)) 
                                    << 0x14U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                    = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          << 0x17U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                    = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          >> 9U));
                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                    = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                             >> 0x17U)) 
                                    << 0x14U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                    = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          << 0xeU));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                    = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          >> 0x12U));
                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                    = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                             >> 0x17U)) 
                                    << 0x14U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                    = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          << 5U));
                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                    = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                             >> 0x17U)) 
                                    << 0x14U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                    = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          << 0x1cU));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                    = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          >> 4U));
                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                    = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                             >> 0x17U)) 
                                    << 0x14U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                    = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          << 0x13U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                    = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          >> 0xdU));
                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                    = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                             >> 0x17U)) 
                                    << 0x14U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                    = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]) 
                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                          << 0xaU));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                    = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]) 
                       | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                                       >> 0x16U)));
                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                    = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                             >> 0x17U)) 
                                    << 0x14U));
                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                    = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]) 
                       | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                                       << 1U)));
            }
        } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))) {
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                        >> 3U)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]) 
                   | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1);
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                        >> 3U)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      << 0x17U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      >> 9U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                        >> 3U)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      << 0xeU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      >> 0x12U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                        >> 3U)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      << 5U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                        >> 3U)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      << 0x1cU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      >> 4U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                        >> 3U)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      << 0x13U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      >> 0xdU));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                        >> 3U)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                      << 0xaU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]) 
                   | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                                   >> 0x16U)));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                        >> 3U)));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]) 
                   | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                                   << 1U)));
        } else {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
        }
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li 
            = (0x3fU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_fast_read)
                         ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                    >> 6U)) : (IData)(
                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                       >> 0x1dU))));
    }
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][0U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][1U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][2U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][3U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][5U];
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__18(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__18\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_write 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) 
           & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
               >> 0x18U) & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                >> 0x17U)) & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[1U] 
                                                  >> 1U)) 
                                              & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_li 
        = (0x3fU & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_write) 
                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_read))
                     ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x13U] 
                         << 0x10U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x13U] 
                                      >> 0x10U)) : 
                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o) 
                     >> 5U)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_li];
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__36(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__36\n"); );
    // Init
    CData/*31:0*/ __Vtemp_h2455d147__0;
    // Body
    __Vtemp_h2455d147__0 = (1U | ((0x40U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                             << 4U) 
                                            & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li) 
                                               << 5U))) 
                                  | ((0x20U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                << 3U) 
                                               & ((~ 
                                                   ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li) 
                                                    >> 1U)) 
                                                  << 5U))) 
                                     | ((0x10U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                   & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li)) 
                                                  << 3U)) 
                                        | ((8U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                   << 2U) 
                                                  & ((~ 
                                                      ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li) 
                                                       >> 1U)) 
                                                     << 3U))) 
                                           | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li) 
                                                   >> 2U)) 
                                               << 2U) 
                                              | (2U 
                                                 & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                     & (~ 
                                                        ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li) 
                                                         >> 2U))) 
                                                    << 1U))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo 
        = __Vtemp_h2455d147__0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li 
        = ((0U == (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) 
                    << 2U) | (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o))))
            ? 0U : ((2U == (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) 
                             << 2U) | (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o))))
                     ? 0U : (0xffU | ((((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li)) 
                                        & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                           >> 6U)) 
                                       << 0xeU) | (
                                                   (0x2000U 
                                                    & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li)) 
                                                        << 0xdU) 
                                                       & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                          << 8U))) 
                                                   | ((0x1000U 
                                                       & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li)) 
                                                           << 0xcU) 
                                                          & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                             << 8U))) 
                                                      | ((0x800U 
                                                          & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li)) 
                                                              << 0xbU) 
                                                             & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                                << 8U))) 
                                                         | ((0x400U 
                                                             & (((~ 
                                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li) 
                                                                   >> 1U)) 
                                                                 << 0xaU) 
                                                                & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                                   << 8U))) 
                                                            | ((0x200U 
                                                                & (((~ 
                                                                     ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li) 
                                                                      >> 1U)) 
                                                                    << 9U) 
                                                                   & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                                                                      << 8U))) 
                                                               | (0x100U 
                                                                  & (((~ 
                                                                       ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li) 
                                                                        >> 2U)) 
                                                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo)) 
                                                                     << 8U)))))))))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__43(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__43\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc95f2e3c__0;
    VlWide<3>/*95:0*/ __Vtemp_hdea9867c__0;
    VlWide<3>/*95:0*/ __Vtemp_h48043c93__0;
    VlWide<3>/*95:0*/ __Vtemp_hd62c3072__0;
    VlWide<3>/*95:0*/ __Vtemp_h1e1421bf__0;
    VlWide<3>/*95:0*/ __Vtemp_hcc11bff6__0;
    VlWide<3>/*95:0*/ __Vtemp_he37238e0__0;
    VlWide<4>/*127:0*/ __Vtemp_hb36bf47b__0;
    VlWide<4>/*127:0*/ __Vtemp_h87763968__0;
    VlWide<4>/*127:0*/ __Vtemp_h24eadf92__0;
    VlWide<4>/*127:0*/ __Vtemp_h0fccddb7__0;
    VlWide<4>/*127:0*/ __Vtemp_h0be70035__0;
    VlWide<4>/*127:0*/ __Vtemp_h0f4e9ac6__0;
    VlWide<5>/*159:0*/ __Vtemp_h399042ab__0;
    VlWide<5>/*159:0*/ __Vtemp_h34d38ca2__0;
    VlWide<5>/*159:0*/ __Vtemp_hfbe9f6c3__0;
    VlWide<5>/*159:0*/ __Vtemp_h71e1660e__0;
    VlWide<5>/*159:0*/ __Vtemp_hfffcd23c__0;
    VlWide<5>/*159:0*/ __Vtemp_hb8e85a3e__0;
    VlWide<6>/*191:0*/ __Vtemp_h854988a3__0;
    VlWide<6>/*191:0*/ __Vtemp_h1343c9a1__0;
    VlWide<6>/*191:0*/ __Vtemp_hf09619eb__0;
    VlWide<6>/*191:0*/ __Vtemp_he05132cb__0;
    // Body
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((3U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((5U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((6U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((7U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                               << 1U)));
    } else if ((1U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                              >> 2U)))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = (0x7fffffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = (0xff800000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = (0x3fffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = (0xffffc000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0x1fU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0xfffffe0U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0xf0000000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = (0x7ffffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = (0xfff80000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = (0x3ffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = (0xfffffc00U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = (1U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = (0xfffffeU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]);
    } else if ((1U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                              >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                = (0x700000U | (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                = (0x3800U | (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = (0x1cU | (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = (0xe000000U | (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
                = (0x70000U | (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
                = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
                = (0x380U | (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
                = (0xc0000000U | (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
                = (1U | (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
                = (0xe00000U | (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]));
        } else {
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU))))))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
                   | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2);
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 1U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0x17U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      >> 9U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 2U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0xeU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      >> 0x12U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 3U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 5U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 4U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0x1cU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
                = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      >> 4U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 5U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
                = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0x13U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
                = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      >> 0xdU));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 6U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
                = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0xaU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
                = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
                   | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                                   >> 0x16U)));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 7U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
                = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
                   | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                                   << 1U)));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & ((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU))))))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                        >> 0x1aU)))))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 1U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 1U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 2U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 2U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 3U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 3U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 4U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 4U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 5U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 5U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 6U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 6U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 7U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 7U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                               << 1U)));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = (0x7fffffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = (0xff800000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = (0x3fffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = (0xffffc000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0x1fU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0xfffffe0U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0xf0000000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = (0x7ffffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = (0xfff80000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = (0x3ffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = (0xfffffc00U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = (1U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = (0xfffffeU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]);
    }
    __Vtemp_hc95f2e3c__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                                                              >> 0x1fU)
                                                              ? 
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                              >> 0x1fU))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((0x40000000U 
                                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                 ? 
                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                 >> 0x1eU)
                                                                 : 
                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                 >> 0x1eU))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0x20000000U 
                                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                    ? 
                                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                    >> 0x1dU)
                                                                    : 
                                                                   (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                    >> 0x1dU))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((0x10000000U 
                                                                       & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                       ? 
                                                                      (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                       >> 0x1cU)
                                                                       : 
                                                                      (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                       >> 0x1cU))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0x8000000U 
                                                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                          ? 
                                                                         (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                          >> 0x1bU)
                                                                          : 
                                                                         (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                          >> 0x1bU))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((0x4000000U 
                                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                             ? 
                                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                             >> 0x1aU)
                                                                             : 
                                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                             >> 0x1aU))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                ? 
                                                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x19U)
                                                                                : 
                                                                               (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x19U))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x18U))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x17U))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x16U))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x15U))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x14U))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x13U))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]
                                                                                 : 
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]
                                                                                 : 
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_hc95f2e3c__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                                                               >> 0x1fU)
                                                               ? 
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                               >> 0x1fU)
                                                               : 
                                                              (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                               >> 0x1fU))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & ((0x40000000U 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                  ? 
                                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                  >> 0x1eU)
                                                                  : 
                                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                  >> 0x1eU))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((0x20000000U 
                                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                     ? 
                                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                     >> 0x1dU)
                                                                     : 
                                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                     >> 0x1dU))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((0x10000000U 
                                                                        & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                        ? 
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                        >> 0x1cU)
                                                                        : 
                                                                       (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                        >> 0x1cU))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((0x8000000U 
                                                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                           ? 
                                                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                           >> 0x1bU)
                                                                           : 
                                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                           >> 0x1bU))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((0x4000000U 
                                                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                              ? 
                                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                              >> 0x1aU)
                                                                              : 
                                                                             (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                              >> 0x1aU))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x19U))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x18U))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x17U))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x16U))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x15U))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x14U))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x13U))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]
                                                                                 : 
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]
                                                                                 : 
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_hdea9867c__0[2U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                               >> 4U)
                                            : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                             >> 3U)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                            >> 1U)
                                                            : 
                                                           (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]
                                                             : 
                                                            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U]))))));
    __Vtemp_h48043c93__0[2U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                >> 9U)
                                             : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                   >> 8U)
                                                : (
                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 7U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                     >> 6U)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 5U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_hdea9867c__0[2U])))));
    __Vtemp_hd62c3072__0[2U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                 >> 0xeU)
                                              : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                 >> 0xdU)
                                                 : 
                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                    >> 0xcU)
                                                    : 
                                                   (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                >> 0xbU)
                                             : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0xaU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h48043c93__0[2U])))));
    __Vtemp_h1e1421bf__0[2U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x13U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x12U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                     >> 0x11U)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x10U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0xfU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hd62c3072__0[2U])))));
    __Vtemp_hcc11bff6__0[2U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                   >> 0x17U)
                                                   : 
                                                  (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                             >> 0x16U)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x15U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x14U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h1e1421bf__0[2U])))));
    __Vtemp_he37238e0__0[2U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                             >> 0x1bU)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x1aU)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                                  >> 0x19U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_hcc11bff6__0[2U])))));
    __Vtemp_hb36bf47b__0[3U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                               >> 4U)
                                            : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                             >> 3U)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                            >> 1U)
                                                            : 
                                                           (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]
                                                             : 
                                                            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U]))))));
    __Vtemp_h87763968__0[3U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                >> 9U)
                                             : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                   >> 8U)
                                                : (
                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 7U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                     >> 6U)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 5U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_hb36bf47b__0[3U])))));
    __Vtemp_h24eadf92__0[3U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                 >> 0xeU)
                                              : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                 >> 0xdU)
                                                 : 
                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                    >> 0xcU)
                                                    : 
                                                   (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                >> 0xbU)
                                             : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0xaU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h87763968__0[3U])))));
    __Vtemp_h0fccddb7__0[3U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x13U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x12U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                     >> 0x11U)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x10U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0xfU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h24eadf92__0[3U])))));
    __Vtemp_h0be70035__0[3U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                   >> 0x17U)
                                                   : 
                                                  (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                             >> 0x16U)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x15U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x14U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h0fccddb7__0[3U])))));
    __Vtemp_h0f4e9ac6__0[3U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                             >> 0x1bU)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x1aU)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                                  >> 0x19U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h0be70035__0[3U])))));
    __Vtemp_h399042ab__0[4U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                               >> 4U)
                                            : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                             >> 3U)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                            >> 1U)
                                                            : 
                                                           (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]
                                                             : 
                                                            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U]))))));
    __Vtemp_h34d38ca2__0[4U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                >> 9U)
                                             : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                   >> 8U)
                                                : (
                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 7U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                     >> 6U)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 5U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h399042ab__0[4U])))));
    __Vtemp_hfbe9f6c3__0[4U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                 >> 0xeU)
                                              : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                 >> 0xdU)
                                                 : 
                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                    >> 0xcU)
                                                    : 
                                                   (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                >> 0xbU)
                                             : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0xaU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h34d38ca2__0[4U])))));
    __Vtemp_h71e1660e__0[4U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x13U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x12U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                     >> 0x11U)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x10U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0xfU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hfbe9f6c3__0[4U])))));
    __Vtemp_hfffcd23c__0[4U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                 >> 0x18U)
                                                 : 
                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                   >> 0x17U)
                                                   : 
                                                  (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                             >> 0x16U)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x15U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x14U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h71e1660e__0[4U])))));
    __Vtemp_hb8e85a3e__0[4U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                             >> 0x1bU)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x1aU)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                                  >> 0x19U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_hfffcd23c__0[4U])))));
    __Vtemp_h854988a3__0[5U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                            ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                               >> 4U)
                                            : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                          ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                             >> 3U)
                                          : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                         ? 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                         >> 2U)
                                                         : 
                                                        (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                            ? 
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                            >> 1U)
                                                            : 
                                                           (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                             ? 
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]
                                                             : 
                                                            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U]))))));
    __Vtemp_h1343c9a1__0[5U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                >> 9U)
                                             : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                   >> 8U)
                                                : (
                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                  >> 7U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                     >> 6U)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                  >> 5U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h854988a3__0[5U])))));
    __Vtemp_hf09619eb__0[5U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                              ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                 >> 0xeU)
                                              : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                 ? 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                 >> 0xdU)
                                                 : 
                                                (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                    ? 
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                    >> 0xcU)
                                                    : 
                                                   (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                             ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                >> 0xbU)
                                             : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                  >> 0xaU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h1343c9a1__0[5U])))));
    __Vtemp_he05132cb__0[5U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x13U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x12U)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                     ? 
                                                    (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                     >> 0x11U)
                                                     : 
                                                    (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                               ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                  >> 0x10U)
                                               : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                  ? 
                                                 (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                  >> 0xfU)
                                                  : 
                                                 (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hf09619eb__0[5U])))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = __Vtemp_hc95f2e3c__0[0U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = __Vtemp_hc95f2e3c__0[1U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                           >> 0x1fU) : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                                              >> 0x1eU)
                                           : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_he37238e0__0[2U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                           >> 0x1fU) : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                                              >> 0x1eU)
                                           : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_h0f4e9ac6__0[3U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
              >> 0x1fU) ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                           >> 0x1fU) : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                        >> 0x1fU)) 
            << 0x1fU) | ((0x40000000U & (((0x40000000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                                              >> 0x1eU)
                                           : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
                                              >> 0x1eU)) 
                                         << 0x1eU)) 
                         | __Vtemp_hb8e85a3e__0[4U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((0x800000U & (((0x800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                              >> 0x17U) : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                           >> 0x17U)) 
                         << 0x17U)) | ((0x400000U & 
                                        (((0x400000U 
                                           & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                           ? (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                              >> 0x16U)
                                           : (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                              >> 0x16U)) 
                                         << 0x16U)) 
                                       | ((0x200000U 
                                           & (((0x200000U 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                ? (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                   >> 0x15U)
                                                : (
                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 0x15U)) 
                                              << 0x15U)) 
                                          | ((0x100000U 
                                              & (((0x100000U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U])
                                                   ? 
                                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                                                   >> 0x14U)
                                                   : 
                                                  (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
                                                   >> 0x14U)) 
                                                 << 0x14U)) 
                                             | __Vtemp_he05132cb__0[5U]))));
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_hb8ea5438_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h1ce3b5f3_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h686d6437_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h2d784e4f_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtestbench__ConstPool__TABLE_h64a662f0_0;

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__66(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__66\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li) 
                     << 3U) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_li) 
                                << 2U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__num_els_r)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_lo 
        = Vtestbench__ConstPool__TABLE_hb8ea5438_0[__Vtableidx1];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el0_valid 
        = Vtestbench__ConstPool__TABLE_h1ce3b5f3_0[__Vtableidx1];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el1_valid 
        = Vtestbench__ConstPool__TABLE_h686d6437_0[__Vtableidx1];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el0_enable 
        = Vtestbench__ConstPool__TABLE_h2d784e4f_0[__Vtableidx1];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el1_enable 
        = Vtestbench__ConstPool__TABLE_h64a662f0_0[__Vtableidx1];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__mux0_sel 
        = Vtestbench__ConstPool__TABLE_h1ce3b5f3_0[__Vtableidx1];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__mux1_sel 
        = Vtestbench__ConstPool__TABLE_h686d6437_0[__Vtableidx1];
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
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_lo) 
           & ((~ (IData)((0U != (0xffU & ((- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read))) 
                                          & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
                                                >> 8U))))))) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_force_lo)));
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
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(7U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xfU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(6U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xeU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(5U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xdU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(4U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xcU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(3U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xbU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(2U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xaU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(1U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 9U)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & (- 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
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

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__72(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__72\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_snoop_match_lo 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tl_reg__DOT__data_r) 
            & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o) 
               & ((0x3fU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                    >> 0x27U))) == 
                  (0x3fU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 0x1dU)))))) 
           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tl_reg__DOT__data_r) 
               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_v_o) 
                  & ((0x3fU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r 
                                       >> 0x27U))) 
                     == (0x3fU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o) 
                                  >> 5U))))) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el0_valid) 
                                                 & ((~ 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                                                      >> 0xaU)) 
                                                    & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                                                       & ((0x3fU 
                                                           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r[0U] 
                                                              >> 6U)) 
                                                          == 
                                                          (0x3fU 
                                                           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                              >> 9U)))))) 
                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el1_valid) 
                                                    & ((~ 
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[3U] 
                                                         >> 0x10U)) 
                                                       & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                                                          & ((0x3fU 
                                                              & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r[0U] 
                                                                 >> 6U)) 
                                                             == 
                                                             (0x3fU 
                                                              & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                                 >> 9U)))))) 
                                                   | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_li) 
                                                      & ((~ 
                                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                                                           >> 0xaU)) 
                                                         & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                                                            & ((0x3fU 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x13U] 
                                                                   >> 0x10U)) 
                                                               == 
                                                               (0x3fU 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                                   >> 9U))))))))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__76(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__76\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o) 
           & ((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__lrsc_lock_cnt)) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_fast_read)) 
                 & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard)) 
                    & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_snoop_match_lo))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__clear_reservation 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_ha5f9224f__0) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__load_reserved_v_reg__DOT__data_r) 
                 & (((0x3fU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                       >> 0x1dU))) 
                     == (0x3fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__load_reserved_addr__DOT__data_r)) 
                    & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                            >> 3U))) 
                       == (0xfffffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__load_reserved_addr__DOT__data_r 
                                       >> 6U)))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_w_li 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
            & (4U != (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_fast_read) 
           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo) 
               & (4U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_w_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_w_li)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__77(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__77\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_v_o) 
           & ((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__lrsc_lock_cnt)) 
              & (~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_read) 
                    | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_write) 
                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_snoop_match_lo) 
                          & (1U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o)))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_slow_write 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo) 
           & (1U != (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_w_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_write) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_slow_write));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_read) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_write) 
              | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_slow_write) 
                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo) 
                    & (1U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o)))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_w_li)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__78(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__78\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0 = 0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
           & ((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__lrsc_lock_cnt)) 
              & ((~ ((0U != (0xffU & (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read))))) 
                     & (1U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U])))) 
                 & ((~ ((0U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_fast_write)) 
                        & (1U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U])))) 
                    & ((~ (IData)((0U != (0xffU & (
                                                   (- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read))) 
                                                   & (vlSelf->__VdfgTmp_h710fb075__0 
                                                      >> 8U)))))) 
                       & ((~ (IData)((0U != ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_fast_write) 
                                             & (vlSelf->__VdfgTmp_h710fb075__0 
                                                >> 8U))))) 
                          & ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tl_reg__DOT__data_r) 
                                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__cache_req_critical_o))) 
                             & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_snoop_match_lo)))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
           & (1U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U])));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo) 
           & (0U == (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U])));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9a22f7f__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0) 
           & (vlSelf->__VdfgTmp_h710fb075__0 >> 0xfU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9a7bea0__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0) 
           & (vlSelf->__VdfgTmp_h710fb075__0 >> 0xeU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9ab0991__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0) 
           & (vlSelf->__VdfgTmp_h710fb075__0 >> 0xdU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9af18ba__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0) 
           & (vlSelf->__VdfgTmp_h710fb075__0 >> 0xcU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9b39ff0__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0) 
           & (vlSelf->__VdfgTmp_h710fb075__0 >> 0xbU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9b7ac0f__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0) 
           & (vlSelf->__VdfgTmp_h710fb075__0 >> 0xaU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb4ffbf2a__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0) 
           & (vlSelf->__VdfgTmp_h710fb075__0 >> 9U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb4fa4f81__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8ab85cc1__0) 
           & (vlSelf->__VdfgTmp_h710fb075__0 >> 8U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7748342__0) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0) 
                 | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9a22f7f__0))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__w_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7748342__0) 
           | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9a22f7f__0));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0) 
                 | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9a7bea0__0))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__w_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0) 
           | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9a7bea0__0));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0) 
                 | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9ab0991__0))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__w_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0) 
           | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9ab0991__0));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0) 
                 | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9af18ba__0))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__w_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0) 
           | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9af18ba__0));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0) 
                 | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9b39ff0__0))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__w_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0) 
           | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9b39ff0__0));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0) 
                 | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9b7ac0f__0))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__w_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0) 
           | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9b7ac0f__0));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0) 
                 | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb4ffbf2a__0))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__w_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0) 
           | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb4ffbf2a__0));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__v_i 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read) 
           | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0) 
                 | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb4fa4f81__0))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__w_i 
        = ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0) 
           | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb4fa4f81__0));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__82(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__82\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dirty_mask_lo 
        = (0xffU & ((- (IData)(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_slow_write) 
                                | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_ha49e91cc__0)))) 
                    & ((IData)(1U) << (7U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r)
                                              ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_way_tv)
                                              : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o) 
                                                 >> 2U))))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__85(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__85\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li 
        = ((0U == (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) 
                    << 2U) | (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o))))
            ? 0x7fffU : ((2U == (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) 
                                  << 2U) | (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_cast_o))))
                          ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dirty_mask_lo)
                          : (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo) 
                              << 8U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dirty_mask_lo))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_n 
        = ((0x4000U & (((0x4000U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                         ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                            >> 0xeU) : ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                        >> 0xeU)) << 0xeU)) 
           | ((0x2000U & (((0x2000U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                            ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                               >> 0xdU) : ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                           >> 0xdU)) 
                          << 0xdU)) | ((0x1000U & (
                                                   ((0x1000U 
                                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                     >> 0xcU)
                                                     : 
                                                    ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                     >> 0xcU)) 
                                                   << 0xcU)) 
                                       | ((0x800U & 
                                           (((0x800U 
                                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                              ? ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                 >> 0xbU)
                                              : ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                 >> 0xbU)) 
                                            << 0xbU)) 
                                          | ((0x400U 
                                              & (((0x400U 
                                                   & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                   >> 0xaU)
                                                   : 
                                                  ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                   >> 0xaU)) 
                                                 << 0xaU)) 
                                             | ((0x200U 
                                                 & (((0x200U 
                                                      & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                      ? 
                                                     ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                      >> 9U)
                                                      : 
                                                     ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                      >> 9U)) 
                                                    << 9U)) 
                                                | ((0x100U 
                                                    & (((0x100U 
                                                         & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                         ? 
                                                        ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                         >> 8U)
                                                         : 
                                                        ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                         >> 8U)) 
                                                       << 8U)) 
                                                   | ((0x80U 
                                                       & (((0x80U 
                                                            & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                            ? 
                                                           ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                            >> 7U)
                                                            : 
                                                           ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                            >> 7U)) 
                                                          << 7U)) 
                                                      | ((0x40U 
                                                          & (((0x40U 
                                                               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                               >> 6U)
                                                               : 
                                                              ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                               >> 6U)) 
                                                             << 6U)) 
                                                         | ((0x20U 
                                                             & (((0x20U 
                                                                  & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                                  ? 
                                                                 ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                                  >> 5U)
                                                                  : 
                                                                 ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                                  >> 5U)) 
                                                                << 5U)) 
                                                            | ((0x10U 
                                                                & (((0x10U 
                                                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                                     ? 
                                                                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                                     >> 4U)
                                                                     : 
                                                                    ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                                     >> 4U)) 
                                                                   << 4U)) 
                                                               | ((8U 
                                                                   & (((8U 
                                                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                                        ? 
                                                                       ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                                        >> 3U)
                                                                        : 
                                                                       ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                                        >> 3U)) 
                                                                      << 3U)) 
                                                                  | ((4U 
                                                                      & (((4U 
                                                                           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                                           ? 
                                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                                           >> 2U)
                                                                           : 
                                                                          ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                                           >> 2U)) 
                                                                         << 2U)) 
                                                                     | ((2U 
                                                                         & (((2U 
                                                                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                                              ? 
                                                                             ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li) 
                                                                              >> 1U)
                                                                              : 
                                                                             ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0) 
                                                                              >> 1U)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & ((1U 
                                                                               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li))
                                                                               ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li)
                                                                               : (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0)))))))))))))))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__7(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__7\n"); );
    // Init
    VlWide<12>/*383:0*/ __Vtemp_h602c8cd9__0;
    VlWide<12>/*383:0*/ __Vtemp_h12e4b3d9__0;
    // Body
    __Vtemp_h602c8cd9__0[0U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                              >> 6U));
    __Vtemp_h602c8cd9__0[1U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                              >> 6U));
    __Vtemp_h602c8cd9__0[2U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                              >> 6U));
    __Vtemp_h602c8cd9__0[3U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                              >> 6U));
    __Vtemp_h602c8cd9__0[4U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                              >> 6U));
    __Vtemp_h602c8cd9__0[5U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[1U] 
                                              >> 6U));
    __Vtemp_h602c8cd9__0[6U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[2U] 
                                              >> 6U));
    __Vtemp_h602c8cd9__0[7U] = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                 << 0x1aU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[3U] 
                                              >> 6U));
    __Vtemp_h602c8cd9__0[8U] = 0U;
    __Vtemp_h602c8cd9__0[9U] = 0U;
    __Vtemp_h602c8cd9__0[0xaU] = 0U;
    __Vtemp_h602c8cd9__0[0xbU] = 0U;
    VL_SHIFTL_WWI(384,384,7, __Vtemp_h12e4b3d9__0, __Vtemp_h602c8cd9__0, 
                  (0x40U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U]));
    vlSelf->__VdfgTmp_h2d6add5a__0[0U] = __Vtemp_h12e4b3d9__0[0U];
    vlSelf->__VdfgTmp_h2d6add5a__0[1U] = __Vtemp_h12e4b3d9__0[1U];
    vlSelf->__VdfgTmp_h2d6add5a__0[2U] = __Vtemp_h12e4b3d9__0[2U];
    vlSelf->__VdfgTmp_h2d6add5a__0[3U] = __Vtemp_h12e4b3d9__0[3U];
    vlSelf->__VdfgTmp_h2d6add5a__0[4U] = __Vtemp_h12e4b3d9__0[4U];
    vlSelf->__VdfgTmp_h2d6add5a__0[5U] = __Vtemp_h12e4b3d9__0[5U];
    vlSelf->__VdfgTmp_h2d6add5a__0[6U] = __Vtemp_h12e4b3d9__0[6U];
    vlSelf->__VdfgTmp_h2d6add5a__0[7U] = __Vtemp_h12e4b3d9__0[7U];
    vlSelf->__VdfgTmp_h2d6add5a__0[8U] = __Vtemp_h12e4b3d9__0[8U];
    vlSelf->__VdfgTmp_h2d6add5a__0[9U] = __Vtemp_h12e4b3d9__0[9U];
    vlSelf->__VdfgTmp_h2d6add5a__0[0xaU] = __Vtemp_h12e4b3d9__0[0xaU];
    vlSelf->__VdfgTmp_h2d6add5a__0[0xbU] = __Vtemp_h12e4b3d9__0[0xbU];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__fill_mask_expand__o 
        = ((0xf0U & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__fill_mask_expand__o)) 
           | ((0xcU & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                         >> 3U)))) 
                       << 2U)) | (3U & (- (IData)((1U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                                      >> 2U)))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__fill_mask_expand__o 
        = ((0xfU & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__fill_mask_expand__o)) 
           | ((0xc0U & ((- (IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                          >> 5U)))) 
                        << 6U)) | (0x30U & ((- (IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[0U] 
                                                           >> 4U)))) 
                                            << 4U))));
    vlSelf->__VdfgTmp_h710fb075__0 = (0xffffffU & (
                                                   (0xffffU 
                                                    & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__fill_mask_expand__o) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__fill_mask_expand__o))) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__24(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__24\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h27524648__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h27524648__0 = 0;
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0 = 0;
    VlWide<3>/*78:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0;
    VL_ZERO_W(79, tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0);
    CData/*0:0*/ __VdfgTmp_ha81091b7__0;
    __VdfgTmp_ha81091b7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h5d5a9ce9__0;
    __VdfgTmp_h5d5a9ce9__0 = 0;
    CData/*0:0*/ __VdfgTmp_h90a626f1__0;
    __VdfgTmp_h90a626f1__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha025f22a__0;
    __VdfgTmp_ha025f22a__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha19f34b7__0;
    __VdfgTmp_ha19f34b7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h205f3b33__0;
    __VdfgTmp_h205f3b33__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8e6b3e34__0;
    __VdfgTmp_h8e6b3e34__0 = 0;
    CData/*0:0*/ __VdfgTmp_he60280e5__0;
    __VdfgTmp_he60280e5__0 = 0;
    CData/*0:0*/ __VdfgTmp_hda8d1d04__0;
    __VdfgTmp_hda8d1d04__0 = 0;
    CData/*0:0*/ __VdfgTmp_hda1016fe__0;
    __VdfgTmp_hda1016fe__0 = 0;
    CData/*0:0*/ __VdfgTmp_he9c4c66d__0;
    __VdfgTmp_he9c4c66d__0 = 0;
    CData/*0:0*/ __VdfgTmp_hffef52b4__0;
    __VdfgTmp_hffef52b4__0 = 0;
    CData/*0:0*/ __VdfgTmp_hed22929b__0;
    __VdfgTmp_hed22929b__0 = 0;
    CData/*0:0*/ __VdfgTmp_h13902c3b__0;
    __VdfgTmp_h13902c3b__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfe7476e5__0;
    __VdfgTmp_hfe7476e5__0 = 0;
    CData/*0:0*/ __VdfgTmp_hbebf8348__0;
    __VdfgTmp_hbebf8348__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha14b900a__0;
    __VdfgTmp_ha14b900a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h934c55c2__0;
    __VdfgTmp_h934c55c2__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8536b0df__0;
    __VdfgTmp_h8536b0df__0 = 0;
    CData/*0:0*/ __VdfgTmp_h9f60b048__0;
    __VdfgTmp_h9f60b048__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha3d878cb__0;
    __VdfgTmp_ha3d878cb__0 = 0;
    CData/*0:0*/ __VdfgTmp_h32c7aae7__0;
    __VdfgTmp_h32c7aae7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h27ee7c4d__0;
    __VdfgTmp_h27ee7c4d__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2fd87384__0;
    __VdfgTmp_h2fd87384__0 = 0;
    CData/*0:0*/ __VdfgTmp_h199f1d1f__0;
    __VdfgTmp_h199f1d1f__0 = 0;
    CData/*0:0*/ __VdfgTmp_h03fc72a3__0;
    __VdfgTmp_h03fc72a3__0 = 0;
    CData/*0:0*/ __VdfgTmp_h23db2668__0;
    __VdfgTmp_h23db2668__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3fc506a5__0;
    __VdfgTmp_h3fc506a5__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfa1ea3ff__0;
    __VdfgTmp_hfa1ea3ff__0 = 0;
    CData/*0:0*/ __VdfgTmp_h890effd3__0;
    __VdfgTmp_h890effd3__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd3215bc3__0;
    __VdfgTmp_hd3215bc3__0 = 0;
    CData/*0:0*/ __VdfgTmp_h38e994d9__0;
    __VdfgTmp_h38e994d9__0 = 0;
    CData/*0:0*/ __VdfgTmp_h04d55b71__0;
    __VdfgTmp_h04d55b71__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2f2dd972__0;
    __VdfgTmp_h2f2dd972__0 = 0;
    CData/*0:0*/ __VdfgTmp_h20d1c8cd__0;
    __VdfgTmp_h20d1c8cd__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfe631abb__0;
    __VdfgTmp_hfe631abb__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha45a3d1e__0;
    __VdfgTmp_ha45a3d1e__0 = 0;
    CData/*0:0*/ __VdfgTmp_h96fd5345__0;
    __VdfgTmp_h96fd5345__0 = 0;
    CData/*0:0*/ __VdfgTmp_h93a4260d__0;
    __VdfgTmp_h93a4260d__0 = 0;
    CData/*0:0*/ __VdfgTmp_had940408__0;
    __VdfgTmp_had940408__0 = 0;
    CData/*0:0*/ __VdfgTmp_h97ca8e67__0;
    __VdfgTmp_h97ca8e67__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha10a1344__0;
    __VdfgTmp_ha10a1344__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h188b0076__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[0U] 
        = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[0U]);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[1U] 
        = ((0x1fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[1U]) 
           | (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[1U]));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[2U] 
        = ((0x7000U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_reg__DOT__data_r) 
                       << 0xaU)) | ((0xf80U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[0U] 
                                               << 7U)) 
                                    | ((0x1fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[2U]) 
                                       | (0x60U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r[2U]))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_busy_lo 
        = (1U & ((~ ((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r)) 
                     | (1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r)))) 
                 | ((4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__timeout_cnt_r)) 
                    | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__cache_init_done_o)) 
                       | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__sync_done_reg__DOT__data_r)) 
                          & (1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_mode_r)))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__ptag_uncached_lo 
        = (IData)(((0ULL != (0xff0000000ULL & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo)) 
                   | ((0x80000U > (0xfffffffU & (IData)(
                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                                         >> 8U)))) 
                      | (0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_mode_r)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h227045bd__0 
        = ((~ (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                       >> 3U))) & (0U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_reg__DOT__data_r))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[0U] 
           & (- (IData)((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo)))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[1U] 
           & (- (IData)((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo)))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[2U] 
           & (- (IData)((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__safe_tl_we 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_busy_lo)) 
           & (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h27524648__0 
        = (((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                     >> 0x35U)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo) 
                                   & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__ptag_uncached_lo))) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__eaddr_oob_fault_v));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__data_priv_page_fault 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo) 
           & (((1U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_reg__DOT__data_r))) 
               & ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mstatus__DOT__mstatus_reg__DOT__data_r) 
                      >> 0xaU)) & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                           >> 3U)))) 
              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h227045bd__0)));
    vlSelf->__VdfgTmp_h7d5c756b__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 0xeU));
    vlSelf->__VdfgTmp_h794697ba__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 0xdU));
    vlSelf->__VdfgTmp_h642700a5__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 6U));
    vlSelf->__VdfgTmp_ha23ee035__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 5U));
    vlSelf->__VdfgTmp_hf489df16__0 = (0x1fU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                  | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])));
    __VdfgTmp_ha81091b7__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 0xbU));
    __VdfgTmp_h5d5a9ce9__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 0xaU));
    __VdfgTmp_h90a626f1__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 9U));
    __VdfgTmp_ha025f22a__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 8U));
    __VdfgTmp_ha19f34b7__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 7U));
    __VdfgTmp_had940408__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0xeU));
    __VdfgTmp_h97ca8e67__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0xdU));
    __VdfgTmp_ha10a1344__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0xaU));
    __VdfgTmp_h205f3b33__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x1aU));
    __VdfgTmp_h8e6b3e34__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x19U));
    __VdfgTmp_he60280e5__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x18U));
    __VdfgTmp_hda8d1d04__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x17U));
    __VdfgTmp_hda1016fe__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x16U));
    __VdfgTmp_he9c4c66d__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x15U));
    __VdfgTmp_hffef52b4__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x14U));
    __VdfgTmp_hed22929b__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x13U));
    __VdfgTmp_h13902c3b__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x12U));
    __VdfgTmp_hfe7476e5__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x11U));
    __VdfgTmp_hbebf8348__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x10U));
    __VdfgTmp_ha14b900a__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xfU));
    __VdfgTmp_h934c55c2__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xeU));
    __VdfgTmp_h8536b0df__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xdU));
    __VdfgTmp_h9f60b048__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xcU));
    __VdfgTmp_ha3d878cb__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xbU));
    vlSelf->__VdfgTmp_ha1025ae9__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0xaU));
    vlSelf->__VdfgTmp_h8e39025d__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 9U));
    vlSelf->__VdfgTmp_he36db9a2__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 8U));
    vlSelf->__VdfgTmp_hd1480425__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 7U));
    vlSelf->__VdfgTmp_ha2b9ba48__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 6U));
    vlSelf->__VdfgTmp_hbc76689f__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 5U));
    vlSelf->__VdfgTmp_haca5a853__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 4U));
    vlSelf->__VdfgTmp_hacc5df08__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 3U));
    vlSelf->__VdfgTmp_h9126797d__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 2U));
    vlSelf->__VdfgTmp_hb09cd8bf__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 1U));
    vlSelf->__VdfgTmp_hacb05d45__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 0xcU));
    vlSelf->__VdfgTmp_had4abe62__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 4U));
    vlSelf->__VdfgTmp_ha8b777c1__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 3U));
    vlSelf->__VdfgTmp_h94a40267__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 2U));
    vlSelf->__VdfgTmp_h90e5418e__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 1U));
    vlSelf->__VdfgTmp_h207c7b11__0 = (1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                            | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                               | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])));
    vlSelf->__VdfgTmp_h3268dc3b__0 = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                          | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                      >> 0x1fU);
    vlSelf->__VdfgTmp_h2a10eca3__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0x1eU));
    vlSelf->__VdfgTmp_h9e6597dd__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0x1dU));
    vlSelf->__VdfgTmp_hac6b7584__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0x1cU));
    vlSelf->__VdfgTmp_h3d9f4cbf__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0x1bU));
    vlSelf->__VdfgTmp_h870f76f2__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                            >> 5U));
    vlSelf->__VdfgTmp_h256b24a6__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 0xaU)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 0xbU)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 0xcU))));
    vlSelf->__VdfgTmp_h3d84d170__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 9U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 0xaU)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 0xbU))));
    vlSelf->__VdfgTmp_h0f4c7e23__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 7U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 8U)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 9U))));
    __VdfgTmp_h32c7aae7__0 = (1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                    | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                       | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])));
    __VdfgTmp_h27ee7c4d__0 = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                  | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                              >> 0x1fU);
    __VdfgTmp_h2fd87384__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1eU));
    __VdfgTmp_h199f1d1f__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1dU));
    __VdfgTmp_h03fc72a3__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1cU));
    __VdfgTmp_h23db2668__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1bU));
    __VdfgTmp_h3fc506a5__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1aU));
    __VdfgTmp_hfa1ea3ff__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x19U));
    __VdfgTmp_h890effd3__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x18U));
    __VdfgTmp_hd3215bc3__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x17U));
    __VdfgTmp_h38e994d9__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x16U));
    __VdfgTmp_h04d55b71__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x15U));
    __VdfgTmp_h2f2dd972__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x14U));
    __VdfgTmp_h20d1c8cd__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x13U));
    __VdfgTmp_hfe631abb__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x12U));
    __VdfgTmp_ha45a3d1e__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x11U));
    __VdfgTmp_h96fd5345__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x10U));
    __VdfgTmp_h93a4260d__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0xfU));
    vlSelf->__VdfgTmp_h354fa099__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 6U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 7U)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 8U))));
    vlSelf->__VdfgTmp_h372d3438__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 5U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 6U)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 7U))));
    vlSelf->__VdfgTmp_h393dabfe__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 4U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 5U)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 6U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_fast_read 
        = ((~ (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
                       >> 0x17U))) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__safe_tl_we));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__safe_tl_we) 
           & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o 
                      >> 0x1eU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_access_fault_v 
        = ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                    >> 0x37U)) & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h27524648__0));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_access_fault_v 
        = ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                    >> 0x36U)) & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h27524648__0));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_page_fault_v 
        = (IData)(((0x440000000000000ULL == (0x440000000000000ULL 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r)) 
                   & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__data_priv_page_fault) 
                      | (((~ (IData)((0x12ULL == (0x12ULL 
                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo)))) 
                          & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo)) 
                         | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__eaddr_canon_fault_v)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_page_fault_v 
        = (IData)(((0x480000000000000ULL == (0x480000000000000ULL 
                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r)) 
                   & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__data_priv_page_fault) 
                      | (((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo) 
                              | ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                          >> 2U)) & 
                                 ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mstatus__DOT__mstatus_reg__DOT__data_r) 
                                  >> 0xbU)))) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo)) 
                         | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__eaddr_canon_fault_v)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__clear_rd_li 
        = (((IData)(__VdfgTmp_ha81091b7__0) << 4U) 
           | (((IData)(__VdfgTmp_h5d5a9ce9__0) << 3U) 
              | (((IData)(__VdfgTmp_h90a626f1__0) << 2U) 
                 | (((IData)(__VdfgTmp_ha025f22a__0) 
                     << 1U) | (IData)(__VdfgTmp_ha19f34b7__0)))));
    vlSelf->__VdfgTmp_h4a121ab9__0 = (((IData)(__VdfgTmp_hd3215bc3__0) 
                                       << 8U) | (((IData)(__VdfgTmp_h38e994d9__0) 
                                                  << 7U) 
                                                 | (((IData)(__VdfgTmp_h04d55b71__0) 
                                                     << 6U) 
                                                    | (((IData)(__VdfgTmp_h2f2dd972__0) 
                                                        << 5U) 
                                                       | (((IData)(__VdfgTmp_h20d1c8cd__0) 
                                                           << 4U) 
                                                          | (((IData)(__VdfgTmp_hfe631abb__0) 
                                                              << 3U) 
                                                             | (((IData)(__VdfgTmp_ha45a3d1e__0) 
                                                                 << 2U) 
                                                                | (((IData)(__VdfgTmp_h96fd5345__0) 
                                                                    << 1U) 
                                                                   | (IData)(__VdfgTmp_h93a4260d__0)))))))));
    __Vtemp_h188b0076__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h3268dc3b__0)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_h2a10eca3__0)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->__VdfgTmp_h9e6597dd__0)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->__VdfgTmp_hac6b7584__0)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_h3d9f4cbf__0)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(__VdfgTmp_h205f3b33__0)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(__VdfgTmp_h8e6b3e34__0)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(__VdfgTmp_he60280e5__0)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(__VdfgTmp_hda8d1d04__0)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(__VdfgTmp_hda1016fe__0)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(__VdfgTmp_he9c4c66d__0)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(__VdfgTmp_hffef52b4__0)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(__VdfgTmp_hed22929b__0)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(__VdfgTmp_h13902c3b__0)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(__VdfgTmp_hfe7476e5__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(__VdfgTmp_hbebf8348__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha14b900a__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h934c55c2__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h8536b0df__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h9f60b048__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha3d878cb__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha1025ae9__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h8e39025d__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_he36db9a2__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hd1480425__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha2b9ba48__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hbc76689f__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_haca5a853__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hacc5df08__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h9126797d__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(__VdfgTmp_h32c7aae7__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(__VdfgTmp_h27ee7c4d__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(__VdfgTmp_h2fd87384__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(__VdfgTmp_h199f1d1f__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(__VdfgTmp_h03fc72a3__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(__VdfgTmp_h23db2668__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(__VdfgTmp_h3fc506a5__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(__VdfgTmp_hfa1ea3ff__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(__VdfgTmp_h890effd3__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(__VdfgTmp_hd3215bc3__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(__VdfgTmp_h38e994d9__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(__VdfgTmp_h04d55b71__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(__VdfgTmp_h2f2dd972__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(__VdfgTmp_h20d1c8cd__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(__VdfgTmp_hfe631abb__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(__VdfgTmp_ha45a3d1e__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(__VdfgTmp_h96fd5345__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(__VdfgTmp_h93a4260d__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(__VdfgTmp_had940408__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(__VdfgTmp_h97ca8e67__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h256b24a6__0))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h3d84d170__0))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(__VdfgTmp_ha10a1344__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h354fa099__0))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h372d3438__0))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h393dabfe__0))) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h870f76f2__0) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hf489df16__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h188b0076__0[1U] = (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_h3268dc3b__0)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->__VdfgTmp_h2a10eca3__0)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->__VdfgTmp_h9e6597dd__0)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->__VdfgTmp_hac6b7584__0)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->__VdfgTmp_h3d9f4cbf__0)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(__VdfgTmp_h205f3b33__0)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(__VdfgTmp_h8e6b3e34__0)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(__VdfgTmp_he60280e5__0)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(__VdfgTmp_hda8d1d04__0)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(__VdfgTmp_hda1016fe__0)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(__VdfgTmp_he9c4c66d__0)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(__VdfgTmp_hffef52b4__0)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(__VdfgTmp_hed22929b__0)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(__VdfgTmp_h13902c3b__0)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(__VdfgTmp_hfe7476e5__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(__VdfgTmp_hbebf8348__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha14b900a__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h934c55c2__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h8536b0df__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h9f60b048__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha3d878cb__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha1025ae9__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h8e39025d__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_he36db9a2__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hd1480425__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha2b9ba48__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hbc76689f__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_haca5a853__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hacc5df08__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h9126797d__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(__VdfgTmp_h32c7aae7__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(__VdfgTmp_h27ee7c4d__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(__VdfgTmp_h2fd87384__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(__VdfgTmp_h199f1d1f__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(__VdfgTmp_h03fc72a3__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(__VdfgTmp_h23db2668__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(__VdfgTmp_h3fc506a5__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(__VdfgTmp_hfa1ea3ff__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(__VdfgTmp_h890effd3__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(__VdfgTmp_hd3215bc3__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(__VdfgTmp_h38e994d9__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(__VdfgTmp_h04d55b71__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(__VdfgTmp_h2f2dd972__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(__VdfgTmp_h20d1c8cd__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(__VdfgTmp_hfe631abb__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(__VdfgTmp_ha45a3d1e__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(__VdfgTmp_h96fd5345__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(__VdfgTmp_h93a4260d__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(__VdfgTmp_had940408__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(__VdfgTmp_h97ca8e67__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h256b24a6__0))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h3d84d170__0))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(__VdfgTmp_ha10a1344__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h354fa099__0))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h372d3438__0))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h393dabfe__0))) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h870f76f2__0) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hf489df16__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellout__late_wb_mux_oh__data_o[0U] 
        = __Vtemp_h188b0076__0[0U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellout__late_wb_mux_oh__data_o[1U] 
        = __Vtemp_h188b0076__0[1U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellout__late_wb_mux_oh__data_o[2U] 
        = (((IData)(vlSelf->__VdfgTmp_h7d5c756b__0) 
            << 0xeU) | (((IData)(vlSelf->__VdfgTmp_h794697ba__0) 
                         << 0xdU) | (((IData)(vlSelf->__VdfgTmp_hacb05d45__0) 
                                      << 0xcU) | (((IData)(__VdfgTmp_ha81091b7__0) 
                                                   << 0xbU) 
                                                  | (((IData)(__VdfgTmp_h5d5a9ce9__0) 
                                                      << 0xaU) 
                                                     | (((IData)(__VdfgTmp_h90a626f1__0) 
                                                         << 9U) 
                                                        | (((IData)(__VdfgTmp_ha025f22a__0) 
                                                            << 8U) 
                                                           | (((IData)(__VdfgTmp_ha19f34b7__0) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->__VdfgTmp_h642700a5__0) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->__VdfgTmp_ha23ee035__0) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->__VdfgTmp_had4abe62__0) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_ha8b777c1__0) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->__VdfgTmp_h94a40267__0) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->__VdfgTmp_h90e5418e__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h207c7b11__0)))))))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__dcache_pte 
        = (((QData)((IData)(vlSelf->__VdfgTmp_had4abe62__0)) 
            << 0x3fU) | (((QData)((IData)(vlSelf->__VdfgTmp_ha8b777c1__0)) 
                          << 0x3eU) | (((QData)((IData)(vlSelf->__VdfgTmp_h94a40267__0)) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(vlSelf->__VdfgTmp_h90e5418e__0)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_h207c7b11__0)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->__VdfgTmp_h3268dc3b__0)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->__VdfgTmp_h2a10eca3__0)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_h9e6597dd__0)) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(vlSelf->__VdfgTmp_hac6b7584__0)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->__VdfgTmp_h3d9f4cbf__0)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(__VdfgTmp_h205f3b33__0)) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(__VdfgTmp_h8e6b3e34__0)) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(__VdfgTmp_he60280e5__0)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(__VdfgTmp_hda8d1d04__0)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(__VdfgTmp_hda1016fe__0)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(__VdfgTmp_he9c4c66d__0)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(__VdfgTmp_hffef52b4__0)) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(__VdfgTmp_hed22929b__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h13902c3b__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(__VdfgTmp_hfe7476e5__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(__VdfgTmp_hbebf8348__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha14b900a__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h934c55c2__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(__VdfgTmp_h8536b0df__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(__VdfgTmp_h9f60b048__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha3d878cb__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha1025ae9__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h8e39025d__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_he36db9a2__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hd1480425__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha2b9ba48__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hbc76689f__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__VdfgTmp_haca5a853__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hacc5df08__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h9126797d__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(__VdfgTmp_h32c7aae7__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(__VdfgTmp_h27ee7c4d__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(__VdfgTmp_h2fd87384__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(__VdfgTmp_h199f1d1f__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(__VdfgTmp_h03fc72a3__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(__VdfgTmp_h23db2668__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(__VdfgTmp_h3fc506a5__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(__VdfgTmp_hfa1ea3ff__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(__VdfgTmp_h890effd3__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(__VdfgTmp_hd3215bc3__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(__VdfgTmp_h38e994d9__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(__VdfgTmp_h04d55b71__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(__VdfgTmp_h2f2dd972__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(__VdfgTmp_h20d1c8cd__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(__VdfgTmp_hfe631abb__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(__VdfgTmp_ha45a3d1e__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(__VdfgTmp_h96fd5345__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(__VdfgTmp_h93a4260d__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(__VdfgTmp_had940408__0) 
                                                                                << 9U) 
                                                                                | (((IData)(__VdfgTmp_h97ca8e67__0) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h256b24a6__0))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h3d84d170__0))) 
                                                                                << 6U) 
                                                                                | (((IData)(__VdfgTmp_ha10a1344__0) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h354fa099__0))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h372d3438__0))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h393dabfe__0))) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h870f76f2__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf 
        = (0U != ((IData)(vlSelf->__VdfgTmp_h354fa099__0) 
                  | ((IData)(vlSelf->__VdfgTmp_h372d3438__0) 
                     | (IData)(vlSelf->__VdfgTmp_h393dabfe__0))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__any_fault_v 
        = ((((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                      >> 0x38U)) & ((((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r 
                                               >> 0x38U)) 
                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo) 
                                         & (0U != (0x7fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                                              >> 0x1dU)))))) 
                                     | (0U != ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo) 
                                               & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__hio_mask_r)) 
                                                  & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                                             >> 0x1dU)))))) 
                                    | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__eaddr_oob_fault_v))) 
            | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_access_fault_v) 
               | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_access_fault_v))) 
           | ((IData)(((0x500000000000000ULL == (0x500000000000000ULL 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r)) 
                       & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo) 
                           & (((1U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_reg__DOT__data_r))) 
                               & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                          >> 3U))) 
                              | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h227045bd__0))) 
                          | (((~ (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                          >> 2U))) 
                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo)) 
                             | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__eaddr_canon_fault_v))))) 
              | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_page_fault_v) 
                 | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_page_fault_v))));
    vlSelf->__VdfgTmp_hb75ec05f__0 = (((IData)(__VdfgTmp_h32c7aae7__0) 
                                       << 0x11U) | 
                                      (((IData)(__VdfgTmp_h27ee7c4d__0) 
                                        << 0x10U) | 
                                       (((IData)(__VdfgTmp_h2fd87384__0) 
                                         << 0xfU) | 
                                        (((IData)(__VdfgTmp_h199f1d1f__0) 
                                          << 0xeU) 
                                         | (((IData)(__VdfgTmp_h03fc72a3__0) 
                                             << 0xdU) 
                                            | (((IData)(__VdfgTmp_h23db2668__0) 
                                                << 0xcU) 
                                               | (((IData)(__VdfgTmp_h3fc506a5__0) 
                                                   << 0xbU) 
                                                  | (((IData)(__VdfgTmp_hfa1ea3ff__0) 
                                                      << 0xaU) 
                                                     | (((IData)(__VdfgTmp_h890effd3__0) 
                                                         << 9U) 
                                                        | (IData)(vlSelf->__VdfgTmp_h4a121ab9__0))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h37a6e350__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
           & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo)) 
              & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__any_fault_v))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_ptag_v 
        = ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_load_misaligned_lo) 
               | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_store_misaligned_lo))) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r) 
              & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__any_fault_v)) 
                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn_n 
        = (0xfffffffU & (IData)(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_start)
                                  ? (QData)((IData)(
                                                    (0xfffffffU 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_satp__DOT__satp_reg__DOT__data_r)))
                                  : (((QData)((IData)(__VdfgTmp_h205f3b33__0)) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(__VdfgTmp_h8e6b3e34__0)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(__VdfgTmp_he60280e5__0)) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(__VdfgTmp_hda8d1d04__0)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(__VdfgTmp_hda1016fe__0)) 
                                                             << 0x27U) 
                                                            | (((QData)((IData)(__VdfgTmp_he9c4c66d__0)) 
                                                                << 0x26U) 
                                                               | (((QData)((IData)(__VdfgTmp_hffef52b4__0)) 
                                                                   << 0x25U) 
                                                                  | (((QData)((IData)(__VdfgTmp_hed22929b__0)) 
                                                                      << 0x24U) 
                                                                     | (((QData)((IData)(__VdfgTmp_h13902c3b__0)) 
                                                                         << 0x23U) 
                                                                        | (((QData)((IData)(__VdfgTmp_hfe7476e5__0)) 
                                                                            << 0x22U) 
                                                                           | (((QData)((IData)(__VdfgTmp_hbebf8348__0)) 
                                                                               << 0x21U) 
                                                                              | (((QData)((IData)(__VdfgTmp_ha14b900a__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(__VdfgTmp_h934c55c2__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(__VdfgTmp_h8536b0df__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(__VdfgTmp_h9f60b048__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(__VdfgTmp_ha3d878cb__0) 
                                                                                << 0x1cU) 
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
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0) 
                                                                                << 0x12U) 
                                                                                | vlSelf->__VdfgTmp_hb75ec05f__0)))))))))))))))))))))))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults 
        = (1U & (((~ (IData)(vlSelf->__VdfgTmp_h870f76f2__0)) 
                  | ((~ (IData)((0U != (IData)(vlSelf->__VdfgTmp_h393dabfe__0)))) 
                     & (0U != (IData)(vlSelf->__VdfgTmp_h372d3438__0)))) 
                 | ((((IData)(vlSelf->__VdfgTmp_had4abe62__0) 
                      | ((IData)(vlSelf->__VdfgTmp_ha8b777c1__0) 
                         | ((IData)(vlSelf->__VdfgTmp_h94a40267__0) 
                            | ((IData)(vlSelf->__VdfgTmp_h90e5418e__0) 
                               | ((IData)(vlSelf->__VdfgTmp_h207c7b11__0) 
                                  | ((IData)(vlSelf->__VdfgTmp_h3268dc3b__0) 
                                     | ((IData)(vlSelf->__VdfgTmp_h2a10eca3__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_h9e6597dd__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hac6b7584__0) 
                                              | (IData)(vlSelf->__VdfgTmp_h3d9f4cbf__0)))))))))) 
                     | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf)) 
                        & (0U != ((IData)(vlSelf->__VdfgTmp_h3d84d170__0) 
                                  | ((IData)(vlSelf->__VdfgTmp_h256b24a6__0) 
                                     | (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0)))))) 
                    | (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf)) 
                        & (0U == (0x30000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r))) 
                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf) 
                          & ((((0U != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0)) 
                               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf) 
                                  & ((1U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_reg__DOT__data_r))) 
                                     & ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mstatus__DOT__mstatus_reg__DOT__data_r) 
                                            >> 0xaU)) 
                                        | (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                                                   >> 0x2cU)))))) 
                              | ((~ (IData)((0U != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0)))) 
                                 & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf) 
                                    & (0U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_reg__DOT__data_r)))))) 
                             | (((IData)(((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r)) 
                                          & (0U != (IData)(vlSelf->__VdfgTmp_h4a121ab9__0)))) 
                                 | (IData)(((0x20000000U 
                                             == (0x30000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r)) 
                                            & (0U != vlSelf->__VdfgTmp_hb75ec05f__0)))) 
                                | ((~ (IData)((0U != (IData)(vlSelf->__VdfgTmp_h3d84d170__0)))) 
                                   | ((~ (IData)((0U 
                                                  != (IData)(vlSelf->__VdfgTmp_h256b24a6__0)))) 
                                      & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                                                 >> 0x2aU)))))))))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0 
        = ((~ (IData)((0U != (0xffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                               >> 0x1cU)))))) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_ptag_v));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__instr_page_fault 
        = ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                    >> 0x2cU)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults) 
                                  | ((~ (IData)((0U 
                                                 != (IData)(vlSelf->__VdfgTmp_h354fa099__0)))) 
                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__store_page_fault 
        = ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                    >> 0x2aU)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults) 
                                  | ((~ (IData)((0U 
                                                 != (IData)(vlSelf->__VdfgTmp_h372d3438__0)))) 
                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__load_page_fault 
        = ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                    >> 0x2bU)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults) 
                                  | ((~ ((0U != (IData)(vlSelf->__VdfgTmp_h393dabfe__0)) 
                                         | ((0U != (IData)(vlSelf->__VdfgTmp_h354fa099__0)) 
                                            & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mstatus__DOT__mstatus_reg__DOT__data_r) 
                                               >> 0xbU)))) 
                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__0__KET____DOT__tag_match_tl 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0) 
           & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                   >> 8U))) == (0xfffffU 
                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[0U])));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__7__KET____DOT__tag_match_tl 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0) 
           & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                   >> 8U))) == (0xfffffU 
                                                & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                   >> 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__6__KET____DOT__tag_match_tl 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0) 
           & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                   >> 8U))) == (0xfffffU 
                                                & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                   >> 0xaU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__5__KET____DOT__tag_match_tl 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0) 
           & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                   >> 8U))) == (0xfffffU 
                                                & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                    << 0xdU) 
                                                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                      >> 0x13U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__4__KET____DOT__tag_match_tl 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0) 
           & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                   >> 8U))) == (0xfffffU 
                                                & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                    << 4U) 
                                                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                      >> 0x1cU)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__3__KET____DOT__tag_match_tl 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0) 
           & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                   >> 8U))) == (0xfffffU 
                                                & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                   >> 5U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__2__KET____DOT__tag_match_tl 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0) 
           & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                   >> 8U))) == (0xfffffU 
                                                & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                    << 0x12U) 
                                                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[1U] 
                                                      >> 0xeU)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__1__KET____DOT__tag_match_tl 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h952b898d__0) 
           & ((0xfffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo 
                                   >> 8U))) == (0xfffffU 
                                                & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[1U] 
                                                    << 9U) 
                                                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[0U] 
                                                      >> 0x17U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__page_fault_v 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__instr_page_fault) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__load_page_fault) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__store_page_fault)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_tl 
        = ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__7__KET____DOT__tag_match_tl) 
             & ((6U == (7U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                              >> 0x15U))) | (2U == 
                                             (7U & 
                                              (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                                               >> 0x15U))))) 
            << 7U) | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__6__KET____DOT__tag_match_tl) 
                        & ((6U == (7U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                                          << 2U) | 
                                         (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                          >> 0x1eU)))) 
                           | (2U == (7U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[5U] 
                                            << 2U) 
                                           | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                              >> 0x1eU)))))) 
                       << 6U) | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__5__KET____DOT__tag_match_tl) 
                                   & ((6U == (7U & 
                                              (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                               >> 7U))) 
                                      | (2U == (7U 
                                                & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                   >> 7U))))) 
                                  << 5U) | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__4__KET____DOT__tag_match_tl) 
                                              & ((6U 
                                                  == 
                                                  (7U 
                                                   & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                      >> 0x10U))) 
                                                 | (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                        >> 0x10U))))) 
                                             << 4U) 
                                            | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__3__KET____DOT__tag_match_tl) 
                                                 & ((6U 
                                                     == 
                                                     (7U 
                                                      & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                         >> 0x19U))) 
                                                    | (2U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                           >> 0x19U))))) 
                                                << 3U) 
                                               | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__2__KET____DOT__tag_match_tl) 
                                                    & ((6U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                            >> 2U))) 
                                                       | (2U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                              >> 2U))))) 
                                                   << 2U) 
                                                  | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__1__KET____DOT__tag_match_tl) 
                                                       & ((6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[1U] 
                                                               >> 0xbU))) 
                                                          | (2U 
                                                             == 
                                                             (7U 
                                                              & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[1U] 
                                                                 >> 0xbU))))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__0__KET____DOT__tag_match_tl) 
                                                        & ((6U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[0U] 
                                                                >> 0x14U))) 
                                                           | (2U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o[0U] 
                                                                  >> 0x14U))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT____VdfgTmp_hee722aea__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__page_fault_v));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__29(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__29\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0 = 0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
        = ((0xfffffe00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v) 
           | (((IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
               << 8U) | (0xffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x14U] 
                                  >> 0x12U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                  >> 9U)) | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                                   >> 8U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                  >> 0xdU)) | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                                     >> 0xcU)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                  >> 0x13U)) | (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                                      >> 0x10U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                 >> 2U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                 >> 4U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs 
        = (3U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                 >> 6U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr 
        = ((0xfffffe00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr) 
           | (0x100U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr 
        = ((0xfffffbffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr) 
           | (0x400U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                        << 7U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr 
        = ((0xffffefffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr) 
           | (0x1000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                         << 7U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr 
        = ((0xffffbfffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr) 
           | (0x4000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                         << 7U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0 
        = (1U & ((~ (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                     >> 0xaU)) & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v 
                                  >> 0x18U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard 
        = (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_ha44752dc__0) 
            & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0)) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r) 
              & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U] 
                  >> 0xaU) & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hef11fff9__0))));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
    } else if ((1U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                              >> 2U)))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
    } else if ((1U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                              >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
        } else {
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                         >> 0x17U)) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]) 
                   | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2);
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                         >> 0x17U)) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
                = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      << 0x17U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      >> 9U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                         >> 0x17U)) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
                = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      << 0xeU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      >> 0x12U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                         >> 0x17U)) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      << 5U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                         >> 0x17U)) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
                = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      << 0x1cU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      >> 4U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                         >> 0x17U)) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
                = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      << 0x13U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      >> 0xdU));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                         >> 0x17U)) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
                = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                      << 0xaU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]) 
                   | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                                   >> 0x16U)));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                = (0x700000U & ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                         >> 0x17U)) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
                = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]) 
                   | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 
                                   << 1U)));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
            = (0x7fffffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                    >> 3U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 
                               << 1U)));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U] 
            = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U] 
            = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U] 
            = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U] 
            = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U] 
            = (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U] 
            = (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li[5U]);
    }
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__46(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__46\n"); );
    // Body
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((3U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((5U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((6U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
            = (0x700000U & ((- (IData)((7U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv)))) 
                            << 0x14U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 
                               << 1U)));
    } else if ((1U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                              >> 2U)))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = (0x7fffffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = (0xff800000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = (0x3fffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = (0xffffc000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0x1fU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0xfffffe0U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0xf0000000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = (0x7ffffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = (0xfff80000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = (0x3ffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = (0xfffffc00U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = (1U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = (0xfffffeU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]);
    } else if ((1U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                              >> 1U)))) {
        if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                = (0x700000U | (0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                = (0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                = (0x3800U | (0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                = (0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = (0x1cU | (0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = (0xe000000U | (0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = (0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
                = (0x70000U | (0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
                = (0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
                = (0x380U | (0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
                = (0xc0000000U | (0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
                = (1U | (0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
                = (0xe00000U | (1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]));
        } else {
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU))))))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
                   | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2);
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 1U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
                = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0x17U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      >> 9U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 2U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
                = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0xeU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      >> 0x12U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 3U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 5U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 4U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
                = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0x1cU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
                = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      >> 4U));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 5U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
                = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0x13U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
                = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      >> 0xdU));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 6U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
                = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                      << 0xaU));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
                = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
                   | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                                   >> 0x16U)));
            vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                = (0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                               >> 0x1aU)))) 
                                                  >> 7U)))) 
                                << 0x14U));
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
                = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
                   | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 
                                   << 1U)));
        }
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & ((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                              >> 0x1aU))))))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                        >> 0x1aU)))))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = ((0xff800000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1);
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 1U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 1U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = ((0x7fffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0x17U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = ((0xffffc000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  >> 9U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 2U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 2U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = ((0x3fffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0xeU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xffffffe0U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  >> 0x12U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 3U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 3U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xf000001fU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 5U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 4U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 4U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = ((0xfffffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0x1cU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = ((0xfff80000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  >> 4U));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 5U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 5U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = ((0x7ffffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0x13U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = ((0xfffffc00U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  >> 0xdU));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 6U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 6U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = ((0x3ffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]) 
               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                  << 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = ((0xfffffeU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                               >> 0x16U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
            = ((0x700000U & ((- (IData)((1U & (((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                            >> 0x1aU)))) 
                                               >> 7U)))) 
                             << 0x14U)) | (0xfffffU 
                                           & (- (IData)(
                                                        (1U 
                                                         & (((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                                         >> 0x1aU)))) 
                                                            >> 7U))))));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]) 
               | (0xffffffU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 
                               << 1U)));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = (0x7fffffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U] 
            = (0xff800000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[0U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = (0x3fffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U] 
            = (0xffffc000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[1U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0x1fU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0xfffffe0U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U] 
            = (0xf0000000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[2U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = (0x7ffffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U] 
            = (0xfff80000U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[3U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = (0x3ffU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U] 
            = (0xfffffc00U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[4U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = (1U | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U] 
            = (0xfffffeU | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li[5U]);
    }
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__47(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__47\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li 
        = (0x3fU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard)
                     ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x13U] 
                         << 0x10U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x13U] 
                                      >> 0x10U)) : 
                    ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_fast_read)
                      ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                 >> 6U)) : (IData)(
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                    >> 0x1dU)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[0U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][0U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[1U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][1U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[2U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][2U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[3U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][3U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[4U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0[5U] 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li][5U];
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__73(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__73\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_lo) 
           & ((~ (IData)((0U != (0xffU & ((- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read))) 
                                          & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
                                                >> 8U))))))) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_force_lo)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__addr_i 
        = (0x1ffU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7748342__0)
                      ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                              >> 3U))
                                                   : 
                                                  ((0x1f8U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U)) 
                                                   | (7U 
                                                      & ((IData)(7U) 
                                                         - 
                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                           << 0x1aU) 
                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                             >> 6U))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__addr_i 
        = (0x1ffU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0)
                      ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                              >> 3U))
                                                   : 
                                                  ((0x1f8U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U)) 
                                                   | (7U 
                                                      & ((IData)(6U) 
                                                         - 
                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                           << 0x1aU) 
                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                             >> 6U))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__addr_i 
        = (0x1ffU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0)
                      ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                              >> 3U))
                                                   : 
                                                  ((0x1f8U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U)) 
                                                   | (7U 
                                                      & ((IData)(5U) 
                                                         - 
                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                           << 0x1aU) 
                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                             >> 6U))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__addr_i 
        = (0x1ffU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0)
                      ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                              >> 3U))
                                                   : 
                                                  ((0x1f8U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U)) 
                                                   | (7U 
                                                      & ((IData)(4U) 
                                                         - 
                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                           << 0x1aU) 
                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                             >> 6U))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__addr_i 
        = (0x1ffU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0)
                      ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                              >> 3U))
                                                   : 
                                                  ((0x1f8U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U)) 
                                                   | (7U 
                                                      & ((IData)(3U) 
                                                         - 
                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                           << 0x1aU) 
                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                             >> 6U))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__addr_i 
        = (0x1ffU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0)
                      ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                              >> 3U))
                                                   : 
                                                  ((0x1f8U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U)) 
                                                   | (7U 
                                                      & ((IData)(2U) 
                                                         - 
                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                           << 0x1aU) 
                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                             >> 6U))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__addr_i 
        = (0x1ffU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0)
                      ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                              >> 3U))
                                                   : 
                                                  ((0x1f8U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U)) 
                                                   | (7U 
                                                      & ((IData)(1U) 
                                                         - 
                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                           << 0x1aU) 
                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                             >> 6U))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__addr_i 
        = (0x1ffU & ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0)
                      ? ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)) : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                                              >> 3U))
                                                   : 
                                                  ((0x1f8U 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                       >> 6U)) 
                                                   | (7U 
                                                      & (- 
                                                         ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                           << 0x1aU) 
                                                          | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                             >> 6U))))))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__66(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__66\n"); );
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
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_lo) 
           & ((~ (IData)((0U != (0xffU & ((- (IData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read))) 
                                          & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
                                              << 0x18U) 
                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U] 
                                                >> 8U))))))) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_force_lo)));
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
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(7U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xfU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(6U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xeU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(5U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xdU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(4U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xcU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(3U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xbU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(2U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[5U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[4U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 0xaU)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & ((IData)(1U) 
                                                      - 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[7U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__VdfgTmp_h2d6add5a__0[6U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__write_mask_i 
            = (0xffU & (- (IData)((1U & (vlSelf->__VdfgTmp_h710fb075__0 
                                         >> 9U)))));
    }
    if (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0) {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                          << 0x1dU) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[0U] 
                                       >> 3U)));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[2U])) 
                << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[1U])));
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__write_mask_i 
            = (0xffU & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out[3U]);
    } else {
        vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__addr_i 
            = (0x1ffU & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read)
                          ? (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr 
                                     >> 3U)) : ((0x1f8U 
                                                 & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                    >> 6U)) 
                                                | (7U 
                                                   & (- 
                                                      ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                        << 0x1aU) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                                                          >> 6U)))))));
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
