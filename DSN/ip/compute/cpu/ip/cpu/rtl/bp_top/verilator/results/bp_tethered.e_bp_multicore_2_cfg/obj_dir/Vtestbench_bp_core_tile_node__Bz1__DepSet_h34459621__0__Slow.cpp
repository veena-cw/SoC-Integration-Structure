// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__1(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__1\n"); );
    // Init
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h58cd2faa__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h58cd2faa__0 = 0;
    CData/*0:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h501295f4__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h501295f4__0 = 0;
    QData/*63:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__wbuf_data_in_mux__data_o;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__wbuf_data_in_mux__data_o = 0;
    QData/*63:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 = 0;
    QData/*63:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0;
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 = 0;
    // Body
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo 
        = (((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
            & (- (IData)((1U & (~ (IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__scheduled_with_release)))))))) 
           | (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__scheduled_with_release));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_last_li 
        = ((3U & ((IData)((vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr 
                           >> 4U)) + (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__size_li))) 
           == (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_lo));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_taken 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_br_tgt_v_lo) 
           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_pred_lo) 
              | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT____VdfgTmp_h939c642d__0) 
                 & (IData)((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT____Vcellout__btb_mem__r_data_o 
                            >> 0x30U)))));
    vlSelf->__VdfgTmp_h9811c712__0 = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mei) 
                                       << 0xbU) | (
                                                   (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_hc8f7c4aa__0) 
                                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_sei)) 
                                                    << 9U) 
                                                   | ((((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_hb9a50c2b__0) 
                                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mti)) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_h6b253670__0) 
                                                           & ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_ssi)) 
                                                              & ((~ 
                                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mideleg__DOT__mideleg_reg__DOT__data_r) 
                                                                   >> 1U)) 
                                                                 & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sti)))) 
                                                          << 5U) 
                                                         | ((((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mei)) 
                                                              & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__msi)) 
                                                             << 3U) 
                                                            | (((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_h6b253670__0) 
                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_ssi)) 
                                                               << 1U))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_pc_li 
        = (0x7fffffffffULL & ((((QData)((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[3U])) 
                                << 0x35U) | (((QData)((IData)(
                                                              vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[3U])) 
                                              << 0x15U) 
                                             | ((QData)((IData)(
                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U])) 
                                                >> 0xbU))) 
                              - ((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_resume_li)) 
                                 << 1U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_taken 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_v) 
           & (0x40000U == (0xc0000U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U])));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li 
        = ((1U != (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r)) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_v));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tl_flush_lo = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_v_li = 0U;
    if ((2U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v)))) {
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v) {
                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tl_flush_lo 
                        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__itlb_fill_response_v) 
                           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__itlb_fence_v));
                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li 
                        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__itlb_fence_v;
                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li 
                        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__itlb_fill_response_v;
                }
            }
        }
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_v_li 
            = (1U & ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))
                      ? (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__empty))
                      : ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v) 
                         | (~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v)))));
    } else if ((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r))) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tl_flush_lo = 1U;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_w 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_w) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__pc_redirect_v) 
              & (0xa0U == (0xe0U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U]))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_r 
        = (3U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_w)
                  ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                      << 0x11U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                   >> 0xfU)) : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_reg__DOT__dff__DOT__data_r)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data 
        = ((0x200000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
            ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_data_tv
            : (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_data_tv 
               << 0x20U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_alu_result 
        = ((1U & (0xffeU >> (0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                     >> 5U)))) ? ((0x100U 
                                                   & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                   ? 
                                                  ((0x80U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                    ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data
                                                    : 
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                      ? 
                                                     ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data 
                                                       > vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)
                                                       ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data
                                                       : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)
                                                      : 
                                                     ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data 
                                                       < vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)
                                                       ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data
                                                       : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                      ? 
                                                     (VL_GTS_IQQ(64, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)
                                                       ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data
                                                       : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)
                                                      : 
                                                     (VL_LTS_IQQ(64, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)
                                                       ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data
                                                       : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data))))
                                                   : 
                                                  ((0x80U 
                                                    & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                    ? 
                                                   ((0x40U 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                     ? 
                                                    ((0x20U 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                      ? 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data 
                                                      | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)
                                                      : 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data))
                                                     : 
                                                    ((0x20U 
                                                      & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
                                                      ? 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data 
                                                      ^ vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)
                                                      : 
                                                     (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data 
                                                      + vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data)))
                                                    : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data))
            : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_result 
        = ((0x200000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])
            ? vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_alu_result
            : (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_alu_result 
               >> 0x20U));
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[0U] 
        = ((vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo) 
                                >> 1U))))) | (vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo))))));
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[1U] 
        = ((vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo) 
                                >> 1U))))) | (vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo))))));
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[2U] 
        = ((vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo) 
                                >> 1U))))) | (vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo))))));
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i[3U] 
        = ((vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo) 
                                >> 1U))))) | (vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo))))));
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__resume_lo 
        = (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__freeze_li)) 
            & (0U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_r))) 
           | (((4U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_r)) 
               & ((0U != (IData)(vlSelf->__VdfgTmp_h26fbe7e1__0)) 
                  | (0U != (IData)(vlSelf->__VdfgTmp_h9811c712__0)))) 
              | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__sync_reg__DOT__data_r)) 
                 & (1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_r)))));
    if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li 
            = (0xffU & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                         << 8U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                   >> 0x18U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_offset_li 
            = (3U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                      << 0xaU) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                  >> 0x16U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_idx_li 
            = (0x3fU & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                         << 0x19U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                      >> 7U)));
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li 
            = (0xffU & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                         << 6U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                   >> 0x1aU)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_offset_li 
            = (3U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                      << 8U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                >> 0x18U)));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_idx_li 
            = (0x3fU & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                         << 0x17U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                      >> 9U)));
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__w_addr_li 
        = (0x1ffU & ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r))
                      ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__init_cnt)
                      : ((0x180U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li)
                                      ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                          << 0xcU) 
                                         | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                            >> 0x14U))
                                      : ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                          << 0xaU) 
                                         | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U] 
                                            >> 0x16U))) 
                                    << 7U)) | (0x7fU 
                                               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li)
                                                   ? 
                                                  vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U]
                                                   : 
                                                  ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                                      >> 2U)))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__full) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li) 
            & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
               >> 4U)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v) 
                          & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
                             >> 6U)));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h58cd2faa__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_taken) 
           & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li));
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__last_n 
        = (1U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__scheduled_with_release)))) 
                  & ((~ (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)) 
                     & (0U != (IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0))))
                  ? (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__tag_o)
                  : ((0U != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__reqs))
                      ? (~ (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__tag_o))
                      : (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__last_r))));
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)) 
                 & (IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0)));
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i 
        = ((~ (IData)(vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__twofer->__PVT__full_r)) 
           & ((IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0) 
              >> 1U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71aa046__0 
        = (1U & ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                 | (1U & (((IData)(1U) << (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_offset_li)) 
                          >> 3U))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71170c1__0 
        = (1U & ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                 | (3U & (((IData)(1U) << (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_offset_li)) 
                          >> 2U))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc7a88338__0 
        = (1U & ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                 | (7U & (((IData)(1U) << (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_offset_li)) 
                          >> 1U))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_h22e177e6__0 
        = (1U & ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r)) 
                 | ((IData)(1U) << (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_offset_li))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h501295f4__0 
        = ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h58cd2faa__0) 
           & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
              >> 0x1eU));
    if ((0x4000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U])) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__2__KET____DOT__slice_data 
            = (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_result);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__3__KET____DOT__slice_data 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_result;
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__2__KET____DOT__slice_data 
            = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[2U] 
                << 0x16U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[1U] 
                             >> 0xaU));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__3__KET____DOT__slice_data 
            = (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[3U])) 
                << 0x36U) | (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[2U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[1U])) 
                                           >> 0xaU)));
    }
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
                       >> 2U));
    } else if (((0U != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
        = vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r;
    if (((~ (IData)((0U != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
         & (IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & (vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
                       >> 2U));
    } else if (((0U != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                & (IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i))) {
        vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n 
            = (0xfU & ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n) 
                       - (IData)(1U)));
    }
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n 
        = (1U & ((IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i)
                  ? ((IData)(1U) + (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r))
                  : (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_clr_li 
        = (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h501295f4__0) 
            & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
               >> 0x1fU)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li) 
                             & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_v) 
                                 & (0U == (0xc0000U 
                                           & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[0U]))) 
                                & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                                   >> 0x1eU))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
        = ((((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__2__KET____DOT__slice_data)) 
             << 0x20U) | (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__2__KET____DOT__slice_data))) 
           & (- (QData)((IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                       >> 0x14U))))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__3__KET____DOT__slice_data 
           & (- (QData)((IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                       >> 0x15U))))));
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r) 
           != (IData)(vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li 
        = (((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h58cd2faa__0) 
            & (IData)((0U == (0xc0000000U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U])))) 
           | (((~ (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[1U] 
                   >> 0x1fU)) & (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgTmp_h501295f4__0)) 
              | ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v) 
                   & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
                      >> 7U)) & (~ (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
                                    | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o[2U] 
                                       >> 1U)))) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_clr_li))));
    vlSelf->__VdfgTmp_hc05ad450__0 = (IData)(((((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                 | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0) 
                                                | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0) 
                                               | vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0) 
                                              >> 0x3fU));
    vlSelf->__VdfgTmp_hcb5afe62__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x3eU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x3eU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x3eU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x3eU))))));
    vlSelf->__VdfgTmp_hd968c581__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x3dU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x3dU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x3dU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x3dU))))));
    vlSelf->__VdfgTmp_hb04b8aa4__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x3cU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x3cU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x3cU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x3cU))))));
    vlSelf->__VdfgTmp_hf4f0a807__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x3bU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x3bU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x3bU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x3bU))))));
    vlSelf->__VdfgTmp_h9d12f3da__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x3aU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x3aU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x3aU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x3aU))))));
    vlSelf->__VdfgTmp_h822baf81__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x39U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x39U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x39U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x39U))))));
    vlSelf->__VdfgTmp_hf4ef8f45__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x38U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x38U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x38U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x38U))))));
    vlSelf->__VdfgTmp_h36be5946__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x37U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x37U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x37U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x37U))))));
    vlSelf->__VdfgTmp_h3721f29a__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x36U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x36U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x36U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x36U))))));
    vlSelf->__VdfgTmp_hc5f83ad4__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x35U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x35U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x35U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x35U))))));
    vlSelf->__VdfgTmp_h0b14a7bb__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x34U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x34U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x34U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x34U))))));
    vlSelf->__VdfgTmp_h0e039a24__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x33U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x33U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x33U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x33U))))));
    vlSelf->__VdfgTmp_h77657a03__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x32U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x32U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x32U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x32U))))));
    vlSelf->__VdfgTmp_h7a3ac4eb__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x31U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x31U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x31U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x31U))))));
    vlSelf->__VdfgTmp_h48bb345d__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x30U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x30U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x30U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x30U))))));
    vlSelf->__VdfgTmp_h99d1840d__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x2fU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x2fU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x2fU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x2fU))))));
    vlSelf->__VdfgTmp_hb697f037__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x2eU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x2eU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x2eU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x2eU))))));
    vlSelf->__VdfgTmp_hfa5ccaff__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x2dU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x2dU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x2dU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x2dU))))));
    vlSelf->__VdfgTmp_hdcea8e3c__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x2cU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x2cU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x2cU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x2cU))))));
    vlSelf->__VdfgTmp_h8ddc59bd__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x2bU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x2bU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x2bU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x2bU))))));
    vlSelf->__VdfgTmp_hc6c67d9e__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x2aU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x2aU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x2aU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x2aU))))));
    vlSelf->__VdfgTmp_hc3abc214__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x29U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x29U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x29U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x29U))))));
    vlSelf->__VdfgTmp_hb62c6968__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x28U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x28U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x28U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x28U))))));
    vlSelf->__VdfgTmp_h658c8cdb__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x27U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x27U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x27U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x27U))))));
    vlSelf->__VdfgTmp_ha462bda2__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x26U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x26U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x26U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x26U))))));
    vlSelf->__VdfgTmp_ha2e7adf6__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x25U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x25U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x25U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x25U))))));
    vlSelf->__VdfgTmp_h7aa856d4__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x24U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x24U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x24U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x24U))))));
    vlSelf->__VdfgTmp_h65096c67__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x23U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x23U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x23U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x23U))))));
    vlSelf->__VdfgTmp_h02d2168f__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x22U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x22U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x22U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x22U))))));
    vlSelf->__VdfgTmp_h29c37e91__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x21U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x21U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x21U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x21U))))));
    vlSelf->__VdfgTmp_h78e49d68__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x20U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x20U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x20U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x20U))))));
    vlSelf->__VdfgTmp_h662f62d7__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x1fU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x1fU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x1fU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x1fU))))));
    vlSelf->__VdfgTmp_h63b429a4__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x1eU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x1eU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x1eU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x1eU))))));
    vlSelf->__VdfgTmp_h548897a6__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x1dU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x1dU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x1dU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x1dU))))));
    vlSelf->__VdfgTmp_h9a536b62__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x1cU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x1cU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x1cU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x1cU))))));
    vlSelf->__VdfgTmp_h94c723fb__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x1bU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x1bU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x1bU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x1bU))))));
    vlSelf->__VdfgTmp_h6ffdaeb5__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x1aU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x1aU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x1aU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x1aU))))));
    vlSelf->__VdfgTmp_h1ad469e1__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x19U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x19U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x19U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x19U))))));
    vlSelf->__VdfgTmp_h1a5590ca__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x18U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x18U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x18U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x18U))))));
    vlSelf->__VdfgTmp_h0daeebb5__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x17U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x17U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x17U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x17U))))));
    vlSelf->__VdfgTmp_h95abd302__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x16U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x16U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x16U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x16U))))));
    vlSelf->__VdfgTmp_h39a13ce8__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x15U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x15U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x15U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x15U))))));
    vlSelf->__VdfgTmp_h67654a04__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x14U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x14U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x14U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x14U))))));
    vlSelf->__VdfgTmp_h0b97170b__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x13U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x13U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x13U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x13U))))));
    vlSelf->__VdfgTmp_h7b2c4021__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x12U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x12U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x12U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x12U))))));
    vlSelf->__VdfgTmp_h6df19a25__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x11U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x11U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x11U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x11U))))));
    vlSelf->__VdfgTmp_h5cc632aa__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0x10U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0x10U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0x10U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0x10U))))));
    vlSelf->__VdfgTmp_h53b4c29d__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0xfU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0xfU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0xfU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0xfU))))));
    vlSelf->__VdfgTmp_h78a32db5__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0xeU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0xeU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0xeU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0xeU))))));
    vlSelf->__VdfgTmp_h17ff034e__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0xdU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0xdU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0xdU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0xdU))))));
    vlSelf->__VdfgTmp_h12c9814b__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0xcU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0xcU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0xcU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0xcU))))));
    vlSelf->__VdfgTmp_h7be20b3a__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0xbU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0xbU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0xbU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0xbU))))));
    vlSelf->__VdfgTmp_h26b47603__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 0xaU)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 0xaU)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 0xaU)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 0xaU))))));
    vlSelf->__VdfgTmp_h2f3b6e44__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 9U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 9U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 9U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 9U))))));
    vlSelf->__VdfgTmp_h2e31a902__0 = (1U & ((IData)(
                                                    (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0 
                                                     >> 8U)) 
                                            | ((IData)(
                                                       (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0 
                                                        >> 8U)) 
                                               | ((IData)(
                                                          (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 
                                                           >> 8U)) 
                                                  | (IData)(
                                                            (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 
                                                             >> 8U))))));
    vlSelf->__VdfgTmp_hf0c4d09a__0 = (0xffU & ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hd8921c77__0) 
                                               | ((IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h375ab43b__0) 
                                                  | ((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0) 
                                                     | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0)))));
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en 
        = ((IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i) 
           & (IData)(vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__wbuf_data_in_mux__data_o 
        = (((QData)((IData)(vlSelf->__VdfgTmp_hc05ad450__0)) 
            << 0x3fU) | (((QData)((IData)(vlSelf->__VdfgTmp_hcb5afe62__0)) 
                          << 0x3eU) | (((QData)((IData)(vlSelf->__VdfgTmp_hd968c581__0)) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(vlSelf->__VdfgTmp_hb04b8aa4__0)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_hf4f0a807__0)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->__VdfgTmp_h9d12f3da__0)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->__VdfgTmp_h822baf81__0)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_hf4ef8f45__0)) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(vlSelf->__VdfgTmp_h36be5946__0)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->__VdfgTmp_h3721f29a__0)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(vlSelf->__VdfgTmp_hc5f83ad4__0)) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(vlSelf->__VdfgTmp_h0b14a7bb__0)) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h0e039a24__0)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(vlSelf->__VdfgTmp_h77657a03__0)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(vlSelf->__VdfgTmp_h7a3ac4eb__0)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(vlSelf->__VdfgTmp_h48bb345d__0)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(vlSelf->__VdfgTmp_h99d1840d__0)) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(vlSelf->__VdfgTmp_hb697f037__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hfa5ccaff__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hdcea8e3c__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h8ddc59bd__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hc6c67d9e__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hc3abc214__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hb62c6968__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h658c8cdb__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha462bda2__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha2e7adf6__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h7aa856d4__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h65096c67__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h02d2168f__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h29c37e91__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h78e49d68__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__VdfgTmp_h662f62d7__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h63b429a4__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h548897a6__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h9a536b62__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h94c723fb__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h6ffdaeb5__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h1ad469e1__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h1a5590ca__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h0daeebb5__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h95abd302__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h39a13ce8__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h67654a04__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h0b97170b__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h7b2c4021__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h6df19a25__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h5cc632aa__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h53b4c29d__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h78a32db5__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h17ff034e__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h12c9814b__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h7be20b3a__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h26b47603__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h2f3b6e44__0) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h2e31a902__0) 
                                                                                << 8U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hf0c4d09a__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i[0U] 
        = ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x14U] 
            << 0x16U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x13U] 
                         >> 0xaU));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i[1U] 
        = (IData)(tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__wbuf_data_in_mux__data_o);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i[2U] 
        = (IData)((tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__wbuf_data_in_mux__data_o 
                   >> 0x20U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i[3U] 
        = ((0x10000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0x15U] 
                        << 6U)) | ((0xff00U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select_tv) 
                                                | (- (IData)(
                                                             (1U 
                                                              & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                                                 >> 0x16U))))) 
                                               << 8U)) 
                                   | (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__wbuf_data_mem_mask_in_mux__data_o)));
}
