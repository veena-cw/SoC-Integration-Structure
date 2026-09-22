// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bp_lce_cmd__pi93.h"

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__81(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__81\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h472ccd2d__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_cmd_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_cmd_yumi_lo) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__fsm_v_o));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_fill_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_fill_ready_then_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_fill_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_resp_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_resp_ready_then_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_resp_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__snoop_hit 
        = (0xffU & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                     << (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                               >> 6U))) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_v_o) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                             >> 0x1aU))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_v_o));
    __Vtemp_h472ccd2d__0[0x10U] = ((0xfffff000U & (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                         >> 0x15U))) 
                                                    << 0x13U) 
                                                   | (((0U 
                                                        != 
                                                        (7U 
                                                         & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                             << 2U) 
                                                            | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                               >> 0x1eU)))) 
                                                       << 0x12U) 
                                                      | (((0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                               >> 7U))) 
                                                          << 0x11U) 
                                                         | (((0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                                  >> 0x10U))) 
                                                             << 0x10U) 
                                                            | (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                                     >> 0x19U))) 
                                                                << 0xfU) 
                                                               | (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                                        >> 2U))) 
                                                                   << 0xeU) 
                                                                  | (((0U 
                                                                       != 
                                                                       (7U 
                                                                        & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[1U] 
                                                                           >> 0xbU))) 
                                                                      << 0xdU) 
                                                                     | ((0U 
                                                                         != 
                                                                         (7U 
                                                                          & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[0U] 
                                                                             >> 0x14U))) 
                                                                        << 0xcU))))))))) 
                                   | ((0xfffffff0U 
                                       & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             << 5U) 
                                                            | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               << 4U))))))))) 
                                      | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xfU] 
                                         >> 0x1cU)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0U] 
            << 4U) | ((8U & ((((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ptag_v_lo)) 
                               & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                          >> 1U))) 
                              | (IData)(((6ULL == (6ULL 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r)) 
                                         & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__ptag_uncached_lo) 
                                            | (2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_mode_r)))))) 
                             << 3U)) | ((((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                   >> 1U)) 
                                          & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__ptag_uncached_lo)) 
                                         << 2U) | (3U 
                                                   & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[1U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[1U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[2U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[1U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[2U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[3U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[2U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[3U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[4U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[3U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[4U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[5U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[4U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[5U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[6U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[5U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[6U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[7U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[6U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[7U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[8U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[7U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[8U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[9U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[8U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[9U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xaU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[9U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xaU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xbU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xaU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xbU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xcU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xbU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xcU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xdU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xcU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xdU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xeU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xdU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xeU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xfU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xeU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xfU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x10U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
            << 0x1cU) | ((0xff00000U & (((IData)(1U) 
                                         << (7U & (IData)(
                                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                           >> 6U)))) 
                                        << 0x14U)) 
                         | __Vtemp_h472ccd2d__0[0x10U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x11U] 
        = vlSelf->__VdfgTmp_h149788ac__0[4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x12U] 
        = vlSelf->__VdfgTmp_h149788ac__0[5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x13U] 
        = vlSelf->__VdfgTmp_h149788ac__0[6U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x14U] 
        = vlSelf->__VdfgTmp_h149788ac__0[7U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x15U] 
        = vlSelf->__VdfgTmp_h149788ac__0[4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x16U] 
        = vlSelf->__VdfgTmp_h149788ac__0[5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x17U] 
        = vlSelf->__VdfgTmp_h149788ac__0[6U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x18U] 
        = vlSelf->__VdfgTmp_h149788ac__0[7U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x19U] 
        = vlSelf->__VdfgTmp_h149788ac__0[4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1aU] 
        = vlSelf->__VdfgTmp_h149788ac__0[5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1bU] 
        = vlSelf->__VdfgTmp_h149788ac__0[6U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1cU] 
        = vlSelf->__VdfgTmp_h149788ac__0[7U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1dU] 
        = vlSelf->__VdfgTmp_h149788ac__0[4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1eU] 
        = vlSelf->__VdfgTmp_h149788ac__0[5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1fU] 
        = vlSelf->__VdfgTmp_h149788ac__0[6U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x20U] 
        = vlSelf->__VdfgTmp_h149788ac__0[7U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x21U] 
        = ((0xff0000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                         >> 4U)) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__snoop_hit) 
                                     << 8U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__snoop_hit)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
           & (4U != (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read) 
           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
               & (4U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_li)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__83(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__83\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_cmd_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_cmd_yumi_lo) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__fsm_v_o));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_fill_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_fill_ready_then_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_fill_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_resp_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_resp_ready_then_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_resp_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__coherence_blocked 
        = (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo)) 
            & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o)) 
           | (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o)) 
              | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)) 
                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_v_o))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h0ae2a02e__0 
        = (1U & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_v_o)) 
                  | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)) 
                 & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o)) 
                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
                    & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o)) 
                       | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo)))));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__81(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__81\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h472ccd2d__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_cmd_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_cmd_yumi_lo) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__fsm_v_o));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_fill_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_fill_ready_then_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_fill_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_resp_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_resp_ready_then_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__fsm_resp_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__snoop_hit 
        = (0xffU & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_v_o) 
                     << (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__data_mem_pkt_cast_o[4U] 
                               >> 6U))) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_v_o) 
                                           << (7U & (IData)(
                                                            (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o 
                                                             >> 0x1aU))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_v_o));
    __Vtemp_h472ccd2d__0[0x10U] = ((0xfffff000U & (
                                                   ((0U 
                                                     != 
                                                     (7U 
                                                      & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                         >> 0x15U))) 
                                                    << 0x13U) 
                                                   | (((0U 
                                                        != 
                                                        (7U 
                                                         & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[5U] 
                                                             << 2U) 
                                                            | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                               >> 0x1eU)))) 
                                                       << 0x12U) 
                                                      | (((0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[4U] 
                                                               >> 7U))) 
                                                          << 0x11U) 
                                                         | (((0U 
                                                              != 
                                                              (7U 
                                                               & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[3U] 
                                                                  >> 0x10U))) 
                                                             << 0x10U) 
                                                            | (((0U 
                                                                 != 
                                                                 (7U 
                                                                  & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                                     >> 0x19U))) 
                                                                << 0xfU) 
                                                               | (((0U 
                                                                    != 
                                                                    (7U 
                                                                     & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[2U] 
                                                                        >> 2U))) 
                                                                   << 0xeU) 
                                                                  | (((0U 
                                                                       != 
                                                                       (7U 
                                                                        & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[1U] 
                                                                           >> 0xbU))) 
                                                                      << 0xdU) 
                                                                     | ((0U 
                                                                         != 
                                                                         (7U 
                                                                          & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o[0U] 
                                                                             >> 0x14U))) 
                                                                        << 0xcU))))))))) 
                                   | ((0xfffffff0U 
                                       & (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0) 
                                                             << 5U) 
                                                            | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0) 
                                                               << 4U))))))))) 
                                      | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xfU] 
                                         >> 0x1cU)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0U] 
            << 4U) | ((8U & ((((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ptag_v_lo)) 
                               & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                          >> 1U))) 
                              | (IData)(((6ULL == (6ULL 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r)) 
                                         & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__ptag_uncached_lo) 
                                            | (2U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_mode_r)))))) 
                             << 3U)) | ((((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                   >> 1U)) 
                                          & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__ptag_uncached_lo)) 
                                         << 2U) | (3U 
                                                   & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[1U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[1U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[2U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[1U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[2U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[3U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[2U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[3U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[4U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[3U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[4U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[5U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[4U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[5U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[6U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[5U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[6U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[7U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[6U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[7U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[8U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[7U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[8U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[9U] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[8U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[9U] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xaU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[9U] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xaU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xbU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xaU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xbU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xcU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xbU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xcU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xdU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xcU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xdU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xeU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xdU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xeU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0xfU] 
        = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xeU] 
            >> 0x1cU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i[0xfU] 
                         << 4U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x10U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
            << 0x1cU) | ((0xff00000U & (((IData)(1U) 
                                         << (7U & (IData)(
                                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r 
                                                           >> 6U)))) 
                                        << 0x14U)) 
                         | __Vtemp_h472ccd2d__0[0x10U]));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x11U] 
        = vlSelf->__VdfgTmp_h149788ac__0[4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x12U] 
        = vlSelf->__VdfgTmp_h149788ac__0[5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x13U] 
        = vlSelf->__VdfgTmp_h149788ac__0[6U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x14U] 
        = vlSelf->__VdfgTmp_h149788ac__0[7U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x15U] 
        = vlSelf->__VdfgTmp_h149788ac__0[4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x16U] 
        = vlSelf->__VdfgTmp_h149788ac__0[5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x17U] 
        = vlSelf->__VdfgTmp_h149788ac__0[6U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x18U] 
        = vlSelf->__VdfgTmp_h149788ac__0[7U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x19U] 
        = vlSelf->__VdfgTmp_h149788ac__0[4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1aU] 
        = vlSelf->__VdfgTmp_h149788ac__0[5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1bU] 
        = vlSelf->__VdfgTmp_h149788ac__0[6U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1cU] 
        = vlSelf->__VdfgTmp_h149788ac__0[7U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1dU] 
        = vlSelf->__VdfgTmp_h149788ac__0[4U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1eU] 
        = vlSelf->__VdfgTmp_h149788ac__0[5U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x1fU] 
        = vlSelf->__VdfgTmp_h149788ac__0[6U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x20U] 
        = vlSelf->__VdfgTmp_h149788ac__0[7U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i[0x21U] 
        = ((0xff0000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                         >> 4U)) | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__snoop_hit) 
                                     << 8U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__snoop_hit)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
           & (4U != (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_v_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read) 
           | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo) 
               & (4U == (7U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command->__PVT__tag_mem_pkt_cast_o)))) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_li)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en 
        = ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_li)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_v_li));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__83(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__83\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_cmd_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_cmd_yumi_lo) 
           & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__fsm_v_o));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_fill_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_fill_ready_then_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_fill_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_resp_ack 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_resp_ready_then_li) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__fsm_resp_v_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__coherence_blocked 
        = (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo)) 
            & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o)) 
           | (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
               & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o)) 
              | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)) 
                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_v_o))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h0ae2a02e__0 
        = (1U & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__stat_mem_pkt_v_o)) 
                  | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo)) 
                 & (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__tag_mem_pkt_v_o)) 
                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo)) 
                    & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command->__PVT__data_mem_pkt_v_o)) 
                       | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo)))));
}
