// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_cce_dir_segment__pi102.h"

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=        368, els_p=         32 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.cce.t.cce.directory.icache_dir_segment.directory)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__5(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__5\n"); );
    // Init
    VlWide<12>/*367:0*/ directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0;
    VL_ZERO_W(368, directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0);
    VlWide<3>/*95:0*/ __Vtemp_h4f2bd358__0;
    VlWide<3>/*95:0*/ __Vtemp_heabae872__0;
    VlWide<3>/*95:0*/ __Vtemp_hf8ad60ff__0;
    VlWide<3>/*95:0*/ __Vtemp_h2196e1e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h4fa21688__0;
    VlWide<3>/*95:0*/ __Vtemp_h1ef8eadc__0;
    VlWide<3>/*95:0*/ __Vtemp_h7c459e7c__0;
    VlWide<4>/*127:0*/ __Vtemp_h455ede4f__0;
    VlWide<4>/*127:0*/ __Vtemp_h1856d513__0;
    VlWide<4>/*127:0*/ __Vtemp_h930fd64a__0;
    VlWide<4>/*127:0*/ __Vtemp_hcb99e068__0;
    VlWide<4>/*127:0*/ __Vtemp_h3fb49227__0;
    VlWide<4>/*127:0*/ __Vtemp_hbdef36a0__0;
    VlWide<5>/*159:0*/ __Vtemp_h65e62f53__0;
    VlWide<5>/*159:0*/ __Vtemp_h3792d1a9__0;
    VlWide<5>/*159:0*/ __Vtemp_h8d32524e__0;
    VlWide<5>/*159:0*/ __Vtemp_he61bb2f1__0;
    VlWide<5>/*159:0*/ __Vtemp_hba5e6da4__0;
    VlWide<5>/*159:0*/ __Vtemp_ha83ff5eb__0;
    VlWide<6>/*191:0*/ __Vtemp_h1ff214df__0;
    VlWide<6>/*191:0*/ __Vtemp_hc8bac538__0;
    VlWide<6>/*191:0*/ __Vtemp_hef028e70__0;
    VlWide<6>/*191:0*/ __Vtemp_hbcfa89ed__0;
    VlWide<6>/*191:0*/ __Vtemp_h291b2bae__0;
    VlWide<6>/*191:0*/ __Vtemp_ha67a8760__0;
    VlWide<7>/*223:0*/ __Vtemp_he3da8196__0;
    VlWide<7>/*223:0*/ __Vtemp_h1e5d2695__0;
    VlWide<7>/*223:0*/ __Vtemp_hcf1c9123__0;
    VlWide<7>/*223:0*/ __Vtemp_h4161035f__0;
    VlWide<7>/*223:0*/ __Vtemp_h43c4672c__0;
    VlWide<7>/*223:0*/ __Vtemp_ha35ae61c__0;
    VlWide<8>/*255:0*/ __Vtemp_hf1ecb349__0;
    VlWide<8>/*255:0*/ __Vtemp_h0e70f53d__0;
    VlWide<8>/*255:0*/ __Vtemp_h52f20a81__0;
    VlWide<8>/*255:0*/ __Vtemp_hb0f7c4e6__0;
    VlWide<8>/*255:0*/ __Vtemp_h93744081__0;
    VlWide<8>/*255:0*/ __Vtemp_hb3ddd9ff__0;
    VlWide<9>/*287:0*/ __Vtemp_h89f5c7ab__0;
    VlWide<9>/*287:0*/ __Vtemp_h1d81b125__0;
    VlWide<9>/*287:0*/ __Vtemp_hb41793f1__0;
    VlWide<9>/*287:0*/ __Vtemp_h35e4fa88__0;
    VlWide<9>/*287:0*/ __Vtemp_hd0c33b09__0;
    VlWide<9>/*287:0*/ __Vtemp_hc589b208__0;
    VlWide<10>/*319:0*/ __Vtemp_h622afd6d__0;
    VlWide<10>/*319:0*/ __Vtemp_hf068e7fc__0;
    VlWide<10>/*319:0*/ __Vtemp_h3dc634dd__0;
    VlWide<10>/*319:0*/ __Vtemp_h521b64a7__0;
    VlWide<10>/*319:0*/ __Vtemp_h2d73662b__0;
    VlWide<10>/*319:0*/ __Vtemp_h29cde91b__0;
    VlWide<11>/*351:0*/ __Vtemp_he3093f1b__0;
    VlWide<11>/*351:0*/ __Vtemp_h60b126ad__0;
    VlWide<11>/*351:0*/ __Vtemp_he2d2c564__0;
    VlWide<11>/*351:0*/ __Vtemp_h2fbe2eb7__0;
    VlWide<11>/*351:0*/ __Vtemp_h6c85c7bf__0;
    VlWide<11>/*351:0*/ __Vtemp_h16e1e8f7__0;
    VlWide<12>/*383:0*/ __Vtemp_h8f5c9943__0;
    VlWide<12>/*383:0*/ __Vtemp_h7c688640__0;
    VlWide<12>/*383:0*/ __Vtemp_h6b711595__0;
    // Body
    vlSelf->__PVT__set_id = (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_bypass_li)
                                       ? (0x1fU & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li))
                                       : (0x1fU & VL_STREAML_FAST_III(6, 
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                                                                                >> 6U))), 0))));
    vlSelf->__PVT__dir_data_o_v_n = 0U;
    vlSelf->__PVT__dir_ram_w_v = 0U;
    vlSelf->__PVT__dir_ram_v = 0U;
    vlSelf->__PVT__way_n = vlSelf->__PVT__way_r;
    vlSelf->__PVT__sharers_v_n = vlSelf->__PVT__sharers_v_r;
    vlSelf->__PVT__lce_n = vlSelf->__PVT__lce_r;
    vlSelf->__PVT__addr_dst_gpr_n = vlSelf->__PVT__addr_dst_gpr_r;
    vlSelf->__PVT__lru_way_n = vlSelf->__PVT__lru_way_r;
    vlSelf->__PVT__r_lru_v_n = vlSelf->__PVT__r_lru_v_r;
    vlSelf->__PVT__addr_n = vlSelf->__PVT__addr_r;
    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
    vlSelf->__PVT__cnt_clr = 0U;
    vlSelf->__PVT__cnt_inc = 0U;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__sharers_v_n = 1U;
                vlSelf->__PVT__addr_n = (QData)((IData)(
                                                        (((0x16fU 
                                                           >= 
                                                           ((IData)(3U) 
                                                            + 
                                                            (0x1ffU 
                                                             & (((IData)(0xb8U) 
                                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(0x17U) 
                                                                    * (IData)(vlSelf->__PVT__way_r)))))))
                                                           ? 
                                                          (0xfffffU 
                                                           & (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & (((IData)(0xb8U) 
                                                                         * (IData)(vlSelf->__PVT__lce_r)) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x17U) 
                                                                            * (IData)(vlSelf->__PVT__way_r))))))))
                                                                ? 0U
                                                                : 
                                                               (vlSelf->__Vcellout__directory__data_o[
                                                                (((IData)(0x16U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & (((IData)(0xb8U) 
                                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x17U) 
                                                                          * (IData)(vlSelf->__PVT__way_r)))))) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((IData)(0xb8U) 
                                                                          * (IData)(vlSelf->__PVT__lce_r)) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x17U) 
                                                                             * (IData)(vlSelf->__PVT__way_r)))))))))) 
                                                              | (vlSelf->__Vcellout__directory__data_o[
                                                                 (((IData)(3U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & (((IData)(0xb8U) 
                                                                        * (IData)(vlSelf->__PVT__lce_r)) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x17U) 
                                                                           * (IData)(vlSelf->__PVT__way_r)))))) 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((IData)(0xb8U) 
                                                                          * (IData)(vlSelf->__PVT__lce_r)) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x17U) 
                                                                             * (IData)(vlSelf->__PVT__way_r))))))))))
                                                           : 0U) 
                                                         << 0xcU)));
            }
        }
        vlSelf->__PVT__state_n = ((2U & (IData)(vlSelf->__PVT__state_r))
                                   ? 0U : ((1U & (IData)(vlSelf->__PVT__state_r))
                                            ? 0U : 2U));
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__sharers_v_n = 1U;
            vlSelf->__PVT__state_n = 2U;
            vlSelf->__PVT__cnt_clr = 1U;
            vlSelf->__PVT__cnt_inc = 0U;
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v) {
            vlSelf->__PVT__sharers_v_n = 0U;
            vlSelf->__PVT__cnt_clr = 1U;
            if ((1U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                vlSelf->__PVT__state_n = 3U;
            } else if ((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                vlSelf->__PVT__state_n = 4U;
            }
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_w_v) {
            vlSelf->__PVT__sharers_v_n = 0U;
            vlSelf->__PVT__state_n = 2U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
            if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v) {
                vlSelf->__PVT__addr_n = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li;
            } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_w_v) {
                vlSelf->__PVT__addr_n = 0ULL;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__cnt_clr = (0x1fU == (IData)(vlSelf->__PVT__cnt));
        vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__cnt_clr)
                                   ? 2U : 1U);
        vlSelf->__PVT__cnt_inc = (1U & (~ (IData)(vlSelf->__PVT__cnt_clr)));
    } else {
        vlSelf->__PVT__state_n = 1U;
        vlSelf->__PVT__cnt_clr = 1U;
    }
    vlSelf->__PVT__dir_ram_w_mask[0U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[1U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[2U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[3U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[4U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[5U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[6U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[7U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[8U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[9U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[0xaU] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[0xbU] = 0U;
    vlSelf->__PVT__dir_ram_w_data[0U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[1U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[2U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[3U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[4U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[5U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[6U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[7U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[8U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[9U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[0xaU] = 0U;
    vlSelf->__PVT__dir_ram_w_data[0xbU] = 0U;
    vlSelf->__PVT__dir_ram_addr = 0U;
    vlSelf->__PVT__dir_ram_addr_n = vlSelf->__PVT__dir_ram_addr_r;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v) {
                    vlSelf->__PVT__dir_ram_v = 1U;
                    vlSelf->__PVT__way_n = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li;
                    vlSelf->__PVT__lce_n = (1U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                  >> 1U));
                    vlSelf->__PVT__addr_dst_gpr_n = 0U;
                    vlSelf->__PVT__lru_way_n = (7U 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U] 
                                                    << 1U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                                                      >> 0x1fU)));
                    if ((1U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                        if ((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                            vlSelf->__PVT__lru_way_n = 0U;
                        }
                    }
                    vlSelf->__PVT__r_lru_v_n = 0U;
                    vlSelf->__PVT__dir_ram_addr_n = 0U;
                    if ((1U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                        vlSelf->__PVT__dir_data_o_v_n = 3U;
                        vlSelf->__PVT__r_lru_v_n = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_icache;
                        vlSelf->__PVT__dir_ram_addr 
                            = vlSelf->__PVT__set_id;
                        vlSelf->__PVT__dir_ram_addr_n 
                            = vlSelf->__PVT__dir_ram_addr;
                    } else if ((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                        vlSelf->__PVT__dir_ram_addr 
                            = vlSelf->__PVT__set_id;
                    }
                } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_w_v) {
                    vlSelf->__PVT__dir_ram_v = 1U;
                    vlSelf->__PVT__addr_dst_gpr_n = 0U;
                    vlSelf->__PVT__r_lru_v_n = 0U;
                    vlSelf->__PVT__dir_ram_addr = vlSelf->__PVT__set_id;
                    vlSelf->__PVT__dir_ram_addr_n = vlSelf->__PVT__set_id;
                }
                if ((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v)))) {
                    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_w_v) {
                        vlSelf->__PVT__dir_ram_w_v = 1U;
                        if ((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                            vlSelf->__PVT__dir_ram_w_mask[0U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[1U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[2U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[3U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[4U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[5U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[6U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[7U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[8U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[9U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[0xaU] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[0xbU] = 0xffffU;
                            vlSelf->__PVT__dir_ram_w_data[0U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[1U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[2U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[3U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[4U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[5U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[6U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[7U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[8U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[9U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[0xaU] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[0xbU] = 0U;
                        } else if ((7U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                            vlSelf->__Vlvbound_h8d6df08e__0 = 0x7fffffU;
                            vlSelf->__Vlvbound_h35b14da1__0 
                                = (0xfffffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                                                       >> 0xcU)));
                            if ((0x16fU >= ((IData)(3U) 
                                            + (0x1ffU 
                                               & (((IData)(0xb8U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                       >> 1U))) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li)))))))) {
                                VL_ASSIGNSEL_WI(368,20,
                                                ((IData)(3U) 
                                                 + 
                                                 (0x1ffU 
                                                  & (((IData)(0xb8U) 
                                                      * 
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                          >> 1U))) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x17U) 
                                                         * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li)))))), vlSelf->__PVT__dir_ram_w_data, vlSelf->__Vlvbound_h35b14da1__0);
                            }
                            vlSelf->__Vlvbound_h15006844__0 
                                = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li;
                            if ((0x16fU >= (0x1ffU 
                                            & (((IData)(0xb8U) 
                                                * (1U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                      >> 1U))) 
                                               + (0xffU 
                                                  & ((IData)(0x17U) 
                                                     * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))))) {
                                VL_ASSIGNSEL_WI(368,23,
                                                (0x1ffU 
                                                 & (((IData)(0xb8U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                         >> 1U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))), vlSelf->__PVT__dir_ram_w_mask, vlSelf->__Vlvbound_h8d6df08e__0);
                                VL_ASSIGNSEL_WI(368,3,
                                                (0x1ffU 
                                                 & (((IData)(0xb8U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                         >> 1U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))), vlSelf->__PVT__dir_ram_w_data, vlSelf->__Vlvbound_h15006844__0);
                            }
                        } else if ((8U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                            vlSelf->__Vlvbound_h59a319bb__0 = 7U;
                            vlSelf->__Vlvbound_h15006844__1 
                                = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li;
                            if ((0x16fU >= (0x1ffU 
                                            & (((IData)(0xb8U) 
                                                * (1U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                      >> 1U))) 
                                               + (0xffU 
                                                  & ((IData)(0x17U) 
                                                     * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))))) {
                                VL_ASSIGNSEL_WI(368,3,
                                                (0x1ffU 
                                                 & (((IData)(0xb8U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                         >> 1U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))), vlSelf->__PVT__dir_ram_w_mask, vlSelf->__Vlvbound_h59a319bb__0);
                                VL_ASSIGNSEL_WI(368,3,
                                                (0x1ffU 
                                                 & (((IData)(0xb8U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                         >> 1U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))), vlSelf->__PVT__dir_ram_w_data, vlSelf->__Vlvbound_h15006844__1);
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__dir_ram_w_v = 1U;
            vlSelf->__PVT__dir_ram_v = 1U;
            vlSelf->__PVT__dir_ram_w_mask[0U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[1U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[2U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[3U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[4U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[5U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[6U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[7U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[8U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[9U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[0xaU] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[0xbU] = 0xffffU;
            vlSelf->__PVT__dir_ram_w_data[0U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[1U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[2U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[3U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[4U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[5U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[6U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[7U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[8U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[9U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[0xaU] = 0U;
            vlSelf->__PVT__dir_ram_w_data[0xbU] = 0U;
            vlSelf->__PVT__dir_ram_addr = (0x1fU & (IData)(vlSelf->__PVT__cnt));
        }
    }
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][0U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][1U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][2U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][3U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][4U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][5U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][6U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][7U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][8U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][9U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][0xaU];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][0xbU];
    __Vtemp_h4f2bd358__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & ((vlSelf->__PVT__dir_ram_w_mask[1U] 
                                                              >> 0x1fU)
                                                              ? 
                                                             (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                              >> 0x1fU))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((0x40000000U 
                                                                 & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                 ? 
                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                 >> 0x1eU)
                                                                 : 
                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                 >> 0x1eU))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0x20000000U 
                                                                    & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                    ? 
                                                                   (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                    >> 0x1dU)
                                                                    : 
                                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                    >> 0x1dU))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((0x10000000U 
                                                                       & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                       ? 
                                                                      (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                       >> 0x1cU)
                                                                       : 
                                                                      (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                       >> 0x1cU))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0x8000000U 
                                                                          & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                          ? 
                                                                         (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                          >> 0x1bU)
                                                                          : 
                                                                         (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                          >> 0x1bU))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((0x4000000U 
                                                                             & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                             ? 
                                                                            (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                             >> 0x1aU)
                                                                             : 
                                                                            (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                             >> 0x1aU))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0x2000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                ? 
                                                                               (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x19U)
                                                                                : 
                                                                               (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x19U))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((0x1000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x18U))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x17U))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x16U))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x15U))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x14U))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x13U))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__dir_ram_w_data[1U]
                                                                                 : 
                                                                                directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__dir_ram_w_mask[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__dir_ram_w_data[0U]
                                                                                 : 
                                                                                directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h4f2bd358__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & ((vlSelf->__PVT__dir_ram_w_mask[1U] 
                                                               >> 0x1fU)
                                                               ? 
                                                              (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                               >> 0x1fU)
                                                               : 
                                                              (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                               >> 0x1fU))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & ((0x40000000U 
                                                                  & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                  ? 
                                                                 (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                  >> 0x1eU)
                                                                  : 
                                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                  >> 0x1eU))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((0x20000000U 
                                                                     & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                     ? 
                                                                    (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                     >> 0x1dU)
                                                                     : 
                                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                     >> 0x1dU))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((0x10000000U 
                                                                        & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                        ? 
                                                                       (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                        >> 0x1cU)
                                                                        : 
                                                                       (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                        >> 0x1cU))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((0x8000000U 
                                                                           & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                           ? 
                                                                          (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                           >> 0x1bU)
                                                                           : 
                                                                          (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                           >> 0x1bU))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((0x4000000U 
                                                                              & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                              ? 
                                                                             (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                              >> 0x1aU)
                                                                              : 
                                                                             (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                              >> 0x1aU))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((0x2000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x19U))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((0x1000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x18U))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x17U))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x16U))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x15U))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x14U))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x13U))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__dir_ram_w_data[1U]
                                                                                 : 
                                                                                directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__dir_ram_w_mask[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__dir_ram_w_data[0U]
                                                                                 : 
                                                                                directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_heabae872__0[2U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[2U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[2U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[2U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U]))))));
    __Vtemp_hf8ad60ff__0[2U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[2U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[2U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_heabae872__0[2U])))));
    __Vtemp_h2196e1e8__0[2U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[2U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[2U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_hf8ad60ff__0[2U])))));
    __Vtemp_h4fa21688__0[2U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[2U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[2U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h2196e1e8__0[2U])))));
    __Vtemp_h1ef8eadc__0[2U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[2U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[2U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h4fa21688__0[2U])))));
    __Vtemp_h7c459e7c__0[2U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[2U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[2U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h1ef8eadc__0[2U])))));
    __Vtemp_h455ede4f__0[3U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[3U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[3U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[3U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U]))))));
    __Vtemp_h1856d513__0[3U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[3U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[3U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h455ede4f__0[3U])))));
    __Vtemp_h930fd64a__0[3U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[3U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[3U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h1856d513__0[3U])))));
    __Vtemp_hcb99e068__0[3U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[3U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[3U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h930fd64a__0[3U])))));
    __Vtemp_h3fb49227__0[3U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[3U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[3U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_hcb99e068__0[3U])))));
    __Vtemp_hbdef36a0__0[3U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[3U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[3U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h3fb49227__0[3U])))));
    __Vtemp_h65e62f53__0[4U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[4U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[4U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[4U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U]))))));
    __Vtemp_h3792d1a9__0[4U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[4U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[4U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h65e62f53__0[4U])))));
    __Vtemp_h8d32524e__0[4U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[4U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[4U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h3792d1a9__0[4U])))));
    __Vtemp_he61bb2f1__0[4U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[4U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[4U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h8d32524e__0[4U])))));
    __Vtemp_hba5e6da4__0[4U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[4U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[4U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_he61bb2f1__0[4U])))));
    __Vtemp_ha83ff5eb__0[4U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[4U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[4U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_hba5e6da4__0[4U])))));
    __Vtemp_h1ff214df__0[5U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[5U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[5U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[5U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U]))))));
    __Vtemp_hc8bac538__0[5U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[5U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[5U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h1ff214df__0[5U])))));
    __Vtemp_hef028e70__0[5U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[5U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[5U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_hc8bac538__0[5U])))));
    __Vtemp_hbcfa89ed__0[5U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[5U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[5U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hef028e70__0[5U])))));
    __Vtemp_h291b2bae__0[5U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[5U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[5U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_hbcfa89ed__0[5U])))));
    __Vtemp_ha67a8760__0[5U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[5U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[5U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h291b2bae__0[5U])))));
    __Vtemp_he3da8196__0[6U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[6U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[6U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[6U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U]))))));
    __Vtemp_h1e5d2695__0[6U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[6U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[6U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_he3da8196__0[6U])))));
    __Vtemp_hcf1c9123__0[6U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[6U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[6U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h1e5d2695__0[6U])))));
    __Vtemp_h4161035f__0[6U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[6U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[6U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hcf1c9123__0[6U])))));
    __Vtemp_h43c4672c__0[6U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[6U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[6U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h4161035f__0[6U])))));
    __Vtemp_ha35ae61c__0[6U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[6U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[6U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h43c4672c__0[6U])))));
    __Vtemp_hf1ecb349__0[7U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[7U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[7U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[7U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U]))))));
    __Vtemp_h0e70f53d__0[7U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[7U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[7U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_hf1ecb349__0[7U])))));
    __Vtemp_h52f20a81__0[7U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[7U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[7U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h0e70f53d__0[7U])))));
    __Vtemp_hb0f7c4e6__0[7U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[7U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[7U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h52f20a81__0[7U])))));
    __Vtemp_h93744081__0[7U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[7U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[7U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_hb0f7c4e6__0[7U])))));
    __Vtemp_hb3ddd9ff__0[7U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[7U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[7U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h93744081__0[7U])))));
    __Vtemp_h89f5c7ab__0[8U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[8U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[8U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[8U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U]))))));
    __Vtemp_h1d81b125__0[8U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[8U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[8U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h89f5c7ab__0[8U])))));
    __Vtemp_hb41793f1__0[8U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[8U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[8U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h1d81b125__0[8U])))));
    __Vtemp_h35e4fa88__0[8U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[8U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[8U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hb41793f1__0[8U])))));
    __Vtemp_hd0c33b09__0[8U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[8U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[8U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h35e4fa88__0[8U])))));
    __Vtemp_hc589b208__0[8U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[8U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[8U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_hd0c33b09__0[8U])))));
    __Vtemp_h622afd6d__0[9U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[9U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[9U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[9U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U]))))));
    __Vtemp_hf068e7fc__0[9U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[9U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[9U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h622afd6d__0[9U])))));
    __Vtemp_h3dc634dd__0[9U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[9U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[9U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_hf068e7fc__0[9U])))));
    __Vtemp_h521b64a7__0[9U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[9U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[9U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h3dc634dd__0[9U])))));
    __Vtemp_h2d73662b__0[9U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[9U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[9U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h521b64a7__0[9U])))));
    __Vtemp_h29cde91b__0[9U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[9U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[9U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h2d73662b__0[9U])))));
    __Vtemp_he3093f1b__0[0xaU] = ((0x10U & (((0x10U 
                                              & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 4U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 4U)) 
                                            << 4U)) 
                                  | ((8U & (((8U & 
                                              vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 3U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 3U)) 
                                            << 3U)) 
                                     | ((4U & (((4U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 2U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 2U)) 
                                               << 2U)) 
                                        | ((2U & ((
                                                   (2U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 1U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 1U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((1U 
                                                & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                ? vlSelf->__PVT__dir_ram_w_data[0xaU]
                                                : directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU]))))));
    __Vtemp_h60b126ad__0[0xaU] = ((0x200U & (((0x200U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 9U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 9U)) 
                                             << 9U)) 
                                  | ((0x100U & (((0x100U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 8U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 8U)) 
                                                << 8U)) 
                                     | ((0x80U & ((
                                                   (0x80U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 7U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 7U)) 
                                                  << 7U)) 
                                        | ((0x40U & 
                                            (((0x40U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 6U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 6U)) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & (((0x20U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 5U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 5U)) 
                                                  << 5U)) 
                                              | __Vtemp_he3093f1b__0[0xaU])))));
    __Vtemp_he2d2c564__0[0xaU] = ((0x4000U & (((0x4000U 
                                                & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                   >> 0xeU)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                   >> 0xeU)) 
                                              << 0xeU)) 
                                  | ((0x2000U & (((0x2000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                   >> 0xdU)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (((0x1000U 
                                            & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                            ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                               >> 0xcU)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                               >> 0xcU)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (((0x800U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0xbU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0xbU)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (((0x400U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0xaU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0xaU)) 
                                                  << 0xaU)) 
                                              | __Vtemp_h60b126ad__0[0xaU])))));
    __Vtemp_h2fbe2eb7__0[0xaU] = ((0x80000U & (((0x80000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0x13U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0x13U)) 
                                               << 0x13U)) 
                                  | ((0x40000U & ((
                                                   (0x40000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0x12U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0x12U)) 
                                                  << 0x12U)) 
                                     | ((0x20000U & 
                                         (((0x20000U 
                                            & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                            ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                               >> 0x11U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                               >> 0x11U)) 
                                          << 0x11U)) 
                                        | ((0x10000U 
                                            & (((0x10000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0x10U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0x10U)) 
                                               << 0x10U)) 
                                           | ((0x8000U 
                                               & (((0x8000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0xfU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0xfU)) 
                                                  << 0xfU)) 
                                              | __Vtemp_he2d2c564__0[0xaU])))));
    __Vtemp_h6c85c7bf__0[0xaU] = ((0x1000000U & (((0x1000000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                   >> 0x18U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                   >> 0x18U)) 
                                                 << 0x18U)) 
                                  | ((0x800000U & (
                                                   ((0x800000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                     >> 0x17U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                     >> 0x17U)) 
                                                   << 0x17U)) 
                                     | ((0x400000U 
                                         & (((0x400000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0x16U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0x16U)) 
                                            << 0x16U)) 
                                        | ((0x200000U 
                                            & (((0x200000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0x15U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0x15U)) 
                                               << 0x15U)) 
                                           | ((0x100000U 
                                               & (((0x100000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0x14U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0x14U)) 
                                                  << 0x14U)) 
                                              | __Vtemp_h2fbe2eb7__0[0xaU])))));
    __Vtemp_h16e1e8f7__0[0xaU] = ((0x20000000U & ((
                                                   (0x20000000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0x1dU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0x1dU)) 
                                                  << 0x1dU)) 
                                  | ((0x10000000U & 
                                      (((0x10000000U 
                                         & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                         ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                            >> 0x1cU)
                                         : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                            >> 0x1cU)) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                          ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h6c85c7bf__0[0xaU])))));
    __Vtemp_h8f5c9943__0[0xbU] = ((0x10U & (((0x10U 
                                              & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                 >> 4U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                 >> 4U)) 
                                            << 4U)) 
                                  | ((8U & (((8U & 
                                              vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                 >> 3U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                 >> 3U)) 
                                            << 3U)) 
                                     | ((4U & (((4U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                 >> 2U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                 >> 2U)) 
                                               << 2U)) 
                                        | ((2U & ((
                                                   (2U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                    >> 1U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                    >> 1U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((1U 
                                                & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                ? vlSelf->__PVT__dir_ram_w_data[0xbU]
                                                : directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU]))))));
    __Vtemp_h7c688640__0[0xbU] = ((0x200U & (((0x200U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                  >> 9U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                  >> 9U)) 
                                             << 9U)) 
                                  | ((0x100U & (((0x100U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                  >> 8U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                  >> 8U)) 
                                                << 8U)) 
                                     | ((0x80U & ((
                                                   (0x80U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                    >> 7U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                    >> 7U)) 
                                                  << 7U)) 
                                        | ((0x40U & 
                                            (((0x40U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                  >> 6U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                  >> 6U)) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & (((0x20U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                    >> 5U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                    >> 5U)) 
                                                  << 5U)) 
                                              | __Vtemp_h8f5c9943__0[0xbU])))));
    __Vtemp_h6b711595__0[0xbU] = ((0x4000U & (((0x4000U 
                                                & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                   >> 0xeU)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                   >> 0xeU)) 
                                              << 0xeU)) 
                                  | ((0x2000U & (((0x2000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                   >> 0xdU)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (((0x1000U 
                                            & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                            ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                               >> 0xcU)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                               >> 0xcU)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (((0x800U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                 >> 0xbU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                 >> 0xbU)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (((0x400U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                    >> 0xaU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                    >> 0xaU)) 
                                                  << 0xaU)) 
                                              | __Vtemp_h7c688640__0[0xbU])))));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = __Vtemp_h4f2bd358__0[0U];
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = __Vtemp_h4f2bd358__0[1U];
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[2U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[2U])
                                ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_h7c459e7c__0[2U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[3U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[3U])
                                ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_hbdef36a0__0[3U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[4U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[4U])
                                ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_ha83ff5eb__0[4U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[5U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[5U])
                                ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_ha67a8760__0[5U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[6U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[6U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[6U])
                                ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_ha35ae61c__0[6U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[7U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[7U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[7U])
                                ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_hb3ddd9ff__0[7U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[8U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[8U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[8U])
                                ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_hc589b208__0[8U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[9U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[9U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[9U])
                                ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_h29cde91b__0[9U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0xaU] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[0xaU] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_h16e1e8f7__0[0xaU]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0xbU] 
        = ((0x8000U & (((0x8000U & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                         ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                            >> 0xfU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                        >> 0xfU)) << 0xfU)) 
           | __Vtemp_h6b711595__0[0xbU]);
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__7(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__7\n"); );
    // Body
    vlSelf->__PVT__sharers_hits_n = vlSelf->__PVT__sharers_hits_r;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__sharers_hits_n = ((2U 
                                                  & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                                 | (((0xfffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__addr_r 
                                                                 >> 0xcU))) 
                                                     == 
                                                     ((0x16fU 
                                                       >= 
                                                       ((IData)(3U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0xb8U) 
                                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x17U) 
                                                                * (IData)(vlSelf->__PVT__way_r)))))))
                                                       ? 
                                                      (0xfffffU 
                                                       & (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(3U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r))))))))
                                                            ? 0U
                                                            : 
                                                           (vlSelf->__Vcellout__directory__data_o[
                                                            (((IData)(0x16U) 
                                                              + 
                                                              (0x1ffU 
                                                               & (((IData)(0xb8U) 
                                                                   * (IData)(vlSelf->__PVT__lce_r)) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x17U) 
                                                                      * (IData)(vlSelf->__PVT__way_r)))))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & (((IData)(0xb8U) 
                                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x17U) 
                                                                         * (IData)(vlSelf->__PVT__way_r)))))))))) 
                                                          | (vlSelf->__Vcellout__directory__data_o[
                                                             (((IData)(3U) 
                                                               + 
                                                               (0x1ffU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r)))))) 
                                                              >> 5U)] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & (((IData)(0xb8U) 
                                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x17U) 
                                                                         * (IData)(vlSelf->__PVT__way_r))))))))))
                                                       : 0U)) 
                                                    & (0U 
                                                       != 
                                                       ((0x16fU 
                                                         >= 
                                                         (0x1ffU 
                                                          & (((IData)(0xb8U) 
                                                              * (IData)(vlSelf->__PVT__lce_r)) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x17U) 
                                                                 * (IData)(vlSelf->__PVT__way_r))))))
                                                         ? 
                                                        (7U 
                                                         & (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & (((IData)(0xb8U) 
                                                                   * (IData)(vlSelf->__PVT__lce_r)) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x17U) 
                                                                      * (IData)(vlSelf->__PVT__way_r))))))
                                                              ? 0U
                                                              : 
                                                             (vlSelf->__Vcellout__directory__data_o[
                                                              (((IData)(2U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r)))))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r)))))))) 
                                                            | (vlSelf->__Vcellout__directory__data_o[
                                                               (0xfU 
                                                                & ((((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r)))) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x1fU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r))))))))
                                                         : 0U))));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__sharers_hits_n = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(vlSelf->__PVT__cnt) 
                                                      << 1U)))) 
                                              & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                             | (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->__PVT__sharers_hits)) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__cnt) 
                                                       << 1U)))));
            vlSelf->__PVT__sharers_hits_n = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__cnt) 
                                                       << 1U))))) 
                                              & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                             | (3U 
                                                & ((1U 
                                                    & ((IData)(vlSelf->__PVT__sharers_hits) 
                                                       >> 1U)) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__cnt) 
                                                        << 1U))))));
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v) {
            vlSelf->__PVT__sharers_hits_n = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__8(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__8\n"); );
    // Body
    vlSelf->__PVT__sharers_ways_n = vlSelf->__PVT__sharers_ways_r;
    vlSelf->__PVT__sharers_coh_states_n = vlSelf->__PVT__sharers_coh_states_r;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__sharers_ways_n = ((0x38U 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (IData)(vlSelf->__PVT__way_r));
                vlSelf->__PVT__sharers_coh_states_n 
                    = ((0x38U & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | ((0x16fU >= (0x1ffU & (((IData)(0xb8U) 
                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                + (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->__PVT__way_r))))))
                           ? (7U & (((0U == (0x1fU 
                                             & (((IData)(0xb8U) 
                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                + (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->__PVT__way_r))))))
                                      ? 0U : (vlSelf->__Vcellout__directory__data_o[
                                              (((IData)(2U) 
                                                + (0x1ffU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__way_r)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__way_r)))))))) 
                                    | (vlSelf->__Vcellout__directory__data_o[
                                       (0xfU & ((((IData)(0xb8U) 
                                                  * (IData)(vlSelf->__PVT__lce_r)) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x17U) 
                                                     * (IData)(vlSelf->__PVT__way_r)))) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           (((IData)(0xb8U) 
                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                            + (0xffU 
                                               & ((IData)(0x17U) 
                                                  * (IData)(vlSelf->__PVT__way_r))))))))
                           : 0U));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__Vlvbound_h2ae7ea29__0 = (7U & (IData)(vlSelf->__PVT__sharers_ways));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(vlSelf->__PVT__cnt) 
                                             << 1U))))) {
                vlSelf->__PVT__sharers_ways_n = (((~ 
                                                   ((IData)(7U) 
                                                    << 
                                                    (7U 
                                                     & ((IData)(3U) 
                                                        * 
                                                        ((IData)(vlSelf->__PVT__cnt) 
                                                         << 1U))))) 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (0x3fU 
                                                    & ((IData)(vlSelf->__Vlvbound_h2ae7ea29__0) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(3U) 
                                                           * 
                                                           ((IData)(vlSelf->__PVT__cnt) 
                                                            << 1U))))));
            }
            vlSelf->__Vlvbound_h2ae7ea29__0 = (7U & 
                                               ((IData)(vlSelf->__PVT__sharers_ways) 
                                                >> 3U));
            vlSelf->__Vlvbound_hb97b11e9__0 = (7U & (IData)(vlSelf->__PVT__sharers_coh_states));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(vlSelf->__PVT__cnt) 
                                             << 1U))))) {
                vlSelf->__PVT__sharers_coh_states_n 
                    = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                                  * 
                                                  ((IData)(vlSelf->__PVT__cnt) 
                                                   << 1U))))) 
                        & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | (0x3fU & ((IData)(vlSelf->__Vlvbound_hb97b11e9__0) 
                                   << (7U & ((IData)(3U) 
                                             * ((IData)(vlSelf->__PVT__cnt) 
                                                << 1U))))));
            }
            vlSelf->__Vlvbound_hb97b11e9__0 = (7U & 
                                               ((IData)(vlSelf->__PVT__sharers_coh_states) 
                                                >> 3U));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__cnt) 
                                                << 1U)))))) {
                vlSelf->__PVT__sharers_ways_n = (((~ 
                                                   ((IData)(7U) 
                                                    << 
                                                    (7U 
                                                     & ((IData)(3U) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__cnt) 
                                                          << 1U)))))) 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (0x3fU 
                                                    & ((IData)(vlSelf->__Vlvbound_h2ae7ea29__0) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(3U) 
                                                           * 
                                                           ((IData)(1U) 
                                                            + 
                                                            ((IData)(vlSelf->__PVT__cnt) 
                                                             << 1U)))))));
                vlSelf->__PVT__sharers_coh_states_n 
                    = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                                  * 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->__PVT__cnt) 
                                                    << 1U)))))) 
                        & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | (0x3fU & ((IData)(vlSelf->__Vlvbound_hb97b11e9__0) 
                                   << (7U & ((IData)(3U) 
                                             * ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__cnt) 
                                                   << 1U)))))));
            }
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v) {
            vlSelf->__PVT__sharers_ways_n = 0U;
            vlSelf->__PVT__sharers_coh_states_n = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__0(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__0\n"); );
    // Init
    CData/*5:0*/ __Vdly__cnt;
    __Vdly__cnt = 0;
    CData/*4:0*/ __Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<12>/*367:0*/ __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(368, __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__directory__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__directory__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__directory__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__cnt = vlSelf->__PVT__cnt;
    if (((IData)(vlSelf->__PVT__dir_ram_v) & (IData)(vlSelf->__PVT__dir_ram_w_v))) {
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[1U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[2U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[3U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[4U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[5U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[6U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[7U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[7U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[8U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[8U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[9U] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[9U];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[0xaU] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0xaU];
        __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[0xbU] 
            = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0xbU];
        __Vdlyvset__directory__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__dir_ram_addr;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__cnt = 0U;
        vlSelf->__PVT__addr_dst_gpr_r = 0U;
        vlSelf->__PVT__dir_ram_addr_r = 0U;
        vlSelf->__PVT__way_r = 0U;
        vlSelf->__PVT__sharers_ways_r = 0U;
        vlSelf->__PVT__dir_data_o_v_r = 0U;
        vlSelf->__PVT__addr_r = 0ULL;
        vlSelf->__PVT__lru_way_r = 0U;
        vlSelf->__PVT__state_r = 0U;
        vlSelf->__PVT__sharers_coh_states_r = 0U;
        vlSelf->__PVT__sharers_hits_r = 0U;
    } else {
        if (vlSelf->__PVT__cnt_clr) {
            __Vdly__cnt = vlSelf->__PVT__cnt_inc;
        } else if (vlSelf->__PVT__cnt_inc) {
            __Vdly__cnt = (0x3fU & ((IData)(1U) + (IData)(vlSelf->__PVT__cnt)));
        }
        vlSelf->__PVT__addr_dst_gpr_r = vlSelf->__PVT__addr_dst_gpr_n;
        vlSelf->__PVT__dir_ram_addr_r = vlSelf->__PVT__dir_ram_addr_n;
        vlSelf->__PVT__way_r = vlSelf->__PVT__way_n;
        vlSelf->__PVT__sharers_ways_r = vlSelf->__PVT__sharers_ways_n;
        vlSelf->__PVT__dir_data_o_v_r = vlSelf->__PVT__dir_data_o_v_n;
        vlSelf->__PVT__addr_r = vlSelf->__PVT__addr_n;
        vlSelf->__PVT__lru_way_r = vlSelf->__PVT__lru_way_n;
        vlSelf->__PVT__state_r = vlSelf->__PVT__state_n;
        vlSelf->__PVT__sharers_coh_states_r = vlSelf->__PVT__sharers_coh_states_n;
        vlSelf->__PVT__sharers_hits_r = vlSelf->__PVT__sharers_hits_n;
    }
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r 
        = (((~ (IData)(vlSelf->__PVT__dir_ram_w_v)) 
            & (IData)(vlSelf->__PVT__dir_ram_v)) ? (IData)(vlSelf->__PVT__dir_ram_addr)
            : 0U);
    vlSelf->__PVT__r_lru_v_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                & (IData)(vlSelf->__PVT__r_lru_v_n));
    vlSelf->__PVT__lce_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                            & (IData)(vlSelf->__PVT__lce_n));
    vlSelf->__PVT__sharers_v_r = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
                                  & (IData)(vlSelf->__PVT__sharers_v_n));
    if (__Vdlyvset__directory__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[6U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][7U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[7U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][8U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[8U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][9U] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[9U];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][0xaU] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[0xaU];
        vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__directory__DOT__synth__DOT__nz__DOT__mem__v0][0xbU] 
            = __Vdlyvval__directory__DOT__synth__DOT__nz__DOT__mem__v0[0xbU];
    }
    vlSelf->__PVT__cnt = __Vdly__cnt;
    vlSelf->__Vcellout__directory__data_o[0U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][0U];
    vlSelf->__Vcellout__directory__data_o[1U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][1U];
    vlSelf->__Vcellout__directory__data_o[2U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][2U];
    vlSelf->__Vcellout__directory__data_o[3U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][3U];
    vlSelf->__Vcellout__directory__data_o[4U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][4U];
    vlSelf->__Vcellout__directory__data_o[5U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][5U];
    vlSelf->__Vcellout__directory__data_o[6U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][6U];
    vlSelf->__Vcellout__directory__data_o[7U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][7U];
    vlSelf->__Vcellout__directory__data_o[8U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][8U];
    vlSelf->__Vcellout__directory__data_o[9U] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][9U];
    vlSelf->__Vcellout__directory__data_o[0xaU] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][0xaU];
    vlSelf->__Vcellout__directory__data_o[0xbU] = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__addr_r][0xbU];
    vlSelf->__PVT__lru_v_o = ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                >> (IData)(vlSelf->__PVT__lce_r)) 
                               & (~ (IData)(vlSelf->__PVT__cnt))) 
                              & (IData)(vlSelf->__PVT__r_lru_v_r));
    vlSelf->__PVT__addr_v_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (IData)(vlSelf->__PVT__state_r))) {
                vlSelf->__PVT__unnamedblk1__DOT__j = 2U;
            }
        }
    }
    vlSelf->__PVT__busy_o = 0U;
    vlSelf->__PVT__addr_o = 0ULL;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__addr_v_o = 1U;
                vlSelf->__PVT__busy_o = 1U;
                vlSelf->__PVT__addr_o = (QData)((IData)(
                                                        (((0x16fU 
                                                           >= 
                                                           ((IData)(3U) 
                                                            + 
                                                            (0x1ffU 
                                                             & (((IData)(0xb8U) 
                                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(0x17U) 
                                                                    * (IData)(vlSelf->__PVT__way_r)))))))
                                                           ? 
                                                          (0xfffffU 
                                                           & (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & (((IData)(0xb8U) 
                                                                         * (IData)(vlSelf->__PVT__lce_r)) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x17U) 
                                                                            * (IData)(vlSelf->__PVT__way_r))))))))
                                                                ? 0U
                                                                : 
                                                               (vlSelf->__Vcellout__directory__data_o[
                                                                (((IData)(0x16U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & (((IData)(0xb8U) 
                                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x17U) 
                                                                          * (IData)(vlSelf->__PVT__way_r)))))) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((IData)(0xb8U) 
                                                                          * (IData)(vlSelf->__PVT__lce_r)) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x17U) 
                                                                             * (IData)(vlSelf->__PVT__way_r)))))))))) 
                                                              | (vlSelf->__Vcellout__directory__data_o[
                                                                 (((IData)(3U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & (((IData)(0xb8U) 
                                                                        * (IData)(vlSelf->__PVT__lce_r)) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x17U) 
                                                                           * (IData)(vlSelf->__PVT__way_r)))))) 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((IData)(0xb8U) 
                                                                          * (IData)(vlSelf->__PVT__lce_r)) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x17U) 
                                                                             * (IData)(vlSelf->__PVT__way_r))))))))))
                                                           : 0U) 
                                                         << 0xcU)));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__busy_o = 1U;
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__busy_o = 1U;
    }
    vlSelf->tag_checker__DOT____Vcellinp__sharers_ways_gen__BRA__0__KET____DOT__row_hits_to_way_ids_and_v__i 
        = ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
             & (((0xfffffU & (vlSelf->__Vcellout__directory__data_o[5U] 
                              >> 4U)) == (0xfffffU 
                                          & (IData)(
                                                    (vlSelf->__PVT__addr_r 
                                                     >> 0xcU)))) 
                & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[5U] 
                                >> 1U))))) << 7U) | 
           ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
              & (((0xfffffU & ((vlSelf->__Vcellout__directory__data_o[5U] 
                                << 0x13U) | (vlSelf->__Vcellout__directory__data_o[4U] 
                                             >> 0xdU))) 
                  == (0xfffffU & (IData)((vlSelf->__PVT__addr_r 
                                          >> 0xcU)))) 
                 & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[4U] 
                                 >> 0xaU))))) << 6U) 
            | ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                 & (((0xfffffU & ((vlSelf->__Vcellout__directory__data_o[4U] 
                                   << 0xaU) | (vlSelf->__Vcellout__directory__data_o[3U] 
                                               >> 0x16U))) 
                     == (0xfffffU & (IData)((vlSelf->__PVT__addr_r 
                                             >> 0xcU)))) 
                    & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[3U] 
                                    >> 0x13U))))) << 5U) 
               | ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                    & (((0xfffffU & ((vlSelf->__Vcellout__directory__data_o[3U] 
                                      << 1U) | (vlSelf->__Vcellout__directory__data_o[2U] 
                                                >> 0x1fU))) 
                        == (0xfffffU & (IData)((vlSelf->__PVT__addr_r 
                                                >> 0xcU)))) 
                       & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[2U] 
                                       >> 0x1cU))))) 
                   << 4U) | ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                               & (((0xfffffU & (vlSelf->__Vcellout__directory__data_o[2U] 
                                                >> 8U)) 
                                   == (0xfffffU & (IData)(
                                                          (vlSelf->__PVT__addr_r 
                                                           >> 0xcU)))) 
                                  & (0U != (7U & (vlSelf->__Vcellout__directory__data_o[2U] 
                                                  >> 5U))))) 
                              << 3U) | ((((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                          & (((0xfffffU 
                                               & ((vlSelf->__Vcellout__directory__data_o[2U] 
                                                   << 0xfU) 
                                                  | (vlSelf->__Vcellout__directory__data_o[1U] 
                                                     >> 0x11U))) 
                                              == (0xfffffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__addr_r 
                                                             >> 0xcU)))) 
                                             & (0U 
                                                != 
                                                (7U 
                                                 & (vlSelf->__Vcellout__directory__data_o[1U] 
                                                    >> 0xeU))))) 
                                         << 2U) | (
                                                   (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                     & (((0xfffffU 
                                                          & ((vlSelf->__Vcellout__directory__data_o[1U] 
                                                              << 6U) 
                                                             | (vlSelf->__Vcellout__directory__data_o[0U] 
                                                                >> 0x1aU))) 
                                                         == 
                                                         (0xfffffU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__addr_r 
                                                                     >> 0xcU)))) 
                                                        & (0U 
                                                           != 
                                                           (7U 
                                                            & (vlSelf->__Vcellout__directory__data_o[0U] 
                                                               >> 0x17U))))) 
                                                    << 1U) 
                                                   | ((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                      & (((0xfffffU 
                                                           & (vlSelf->__Vcellout__directory__data_o[0U] 
                                                              >> 3U)) 
                                                          == 
                                                          (0xfffffU 
                                                           & (IData)(
                                                                     (vlSelf->__PVT__addr_r 
                                                                      >> 0xcU)))) 
                                                         & (0U 
                                                            != 
                                                            (7U 
                                                             & vlSelf->__Vcellout__directory__data_o[0U])))))))))));
    vlSelf->tag_checker__DOT____Vcellinp__sharers_ways_gen__BRA__1__KET____DOT__row_hits_to_way_ids_and_v__i 
        = ((0xffffff80U & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                            << 6U) & ((((0xfffffU & 
                                         ((vlSelf->__Vcellout__directory__data_o[0xbU] 
                                           << 4U) | 
                                          (vlSelf->__Vcellout__directory__data_o[0xaU] 
                                           >> 0x1cU))) 
                                        == (0xfffffU 
                                            & (IData)(
                                                      (vlSelf->__PVT__addr_r 
                                                       >> 0xcU)))) 
                                       & (0U != (7U 
                                                 & (vlSelf->__Vcellout__directory__data_o[0xaU] 
                                                    >> 0x19U)))) 
                                      << 7U))) | ((0xffffffc0U 
                                                   & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                       << 5U) 
                                                      & ((((0xfffffU 
                                                            & (vlSelf->__Vcellout__directory__data_o[0xaU] 
                                                               >> 5U)) 
                                                           == 
                                                           (0xfffffU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__addr_r 
                                                                       >> 0xcU)))) 
                                                          & (0U 
                                                             != 
                                                             (7U 
                                                              & (vlSelf->__Vcellout__directory__data_o[0xaU] 
                                                                 >> 2U)))) 
                                                         << 6U))) 
                                                  | ((0xffffffe0U 
                                                      & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                          << 4U) 
                                                         & ((((0xfffffU 
                                                               & ((vlSelf->__Vcellout__directory__data_o[0xaU] 
                                                                   << 0x12U) 
                                                                  | (vlSelf->__Vcellout__directory__data_o[9U] 
                                                                     >> 0xeU))) 
                                                              == 
                                                              (0xfffffU 
                                                               & (IData)(
                                                                         (vlSelf->__PVT__addr_r 
                                                                          >> 0xcU)))) 
                                                             & (0U 
                                                                != 
                                                                (7U 
                                                                 & (vlSelf->__Vcellout__directory__data_o[9U] 
                                                                    >> 0xbU)))) 
                                                            << 5U))) 
                                                     | ((0xfffffff0U 
                                                         & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                             << 3U) 
                                                            & ((((0xfffffU 
                                                                  & ((vlSelf->__Vcellout__directory__data_o[9U] 
                                                                      << 9U) 
                                                                     | (vlSelf->__Vcellout__directory__data_o[8U] 
                                                                        >> 0x17U))) 
                                                                 == 
                                                                 (0xfffffU 
                                                                  & (IData)(
                                                                            (vlSelf->__PVT__addr_r 
                                                                             >> 0xcU)))) 
                                                                & (0U 
                                                                   != 
                                                                   (7U 
                                                                    & (vlSelf->__Vcellout__directory__data_o[8U] 
                                                                       >> 0x14U)))) 
                                                               << 4U))) 
                                                        | ((0xfffffff8U 
                                                            & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                                << 2U) 
                                                               & ((((0xfffffU 
                                                                     & vlSelf->__Vcellout__directory__data_o[8U]) 
                                                                    == 
                                                                    (0xfffffU 
                                                                     & (IData)(
                                                                               (vlSelf->__PVT__addr_r 
                                                                                >> 0xcU)))) 
                                                                   & (0U 
                                                                      != 
                                                                      (vlSelf->__Vcellout__directory__data_o[7U] 
                                                                       >> 0x1dU))) 
                                                                  << 3U))) 
                                                           | ((0xfffffffcU 
                                                               & (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                                   << 1U) 
                                                                  & ((((0xfffffU 
                                                                        & (vlSelf->__Vcellout__directory__data_o[7U] 
                                                                           >> 9U)) 
                                                                       == 
                                                                       (0xfffffU 
                                                                        & (IData)(
                                                                                (vlSelf->__PVT__addr_r 
                                                                                >> 0xcU)))) 
                                                                      & (0U 
                                                                         != 
                                                                         (7U 
                                                                          & (vlSelf->__Vcellout__directory__data_o[7U] 
                                                                             >> 6U)))) 
                                                                     << 2U))) 
                                                              | ((0xfffffffeU 
                                                                  & ((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                                     & ((((0xfffffU 
                                                                           & ((vlSelf->__Vcellout__directory__data_o[7U] 
                                                                               << 0xeU) 
                                                                              | (vlSelf->__Vcellout__directory__data_o[6U] 
                                                                                >> 0x12U))) 
                                                                          == 
                                                                          (0xfffffU 
                                                                           & (IData)(
                                                                                (vlSelf->__PVT__addr_r 
                                                                                >> 0xcU)))) 
                                                                         & (0U 
                                                                            != 
                                                                            (7U 
                                                                             & (vlSelf->__Vcellout__directory__data_o[6U] 
                                                                                >> 0xfU)))) 
                                                                        << 1U))) 
                                                                 | (((IData)(vlSelf->__PVT__dir_data_o_v_r) 
                                                                     >> 1U) 
                                                                    & (((0xfffffU 
                                                                         & ((vlSelf->__Vcellout__directory__data_o[6U] 
                                                                             << 5U) 
                                                                            | (vlSelf->__Vcellout__directory__data_o[5U] 
                                                                               >> 0x1bU))) 
                                                                        == 
                                                                        (0xfffffU 
                                                                         & (IData)(
                                                                                (vlSelf->__PVT__addr_r 
                                                                                >> 0xcU)))) 
                                                                       & (0U 
                                                                          != 
                                                                          (7U 
                                                                           & (vlSelf->__Vcellout__directory__data_o[5U] 
                                                                              >> 0x18U))))))))))));
    vlSelf->__PVT__lru_extract__DOT__row[0U] = vlSelf->__Vcellout__directory__data_o[0U];
    vlSelf->__PVT__lru_extract__DOT__row[1U] = vlSelf->__Vcellout__directory__data_o[1U];
    vlSelf->__PVT__lru_extract__DOT__row[2U] = vlSelf->__Vcellout__directory__data_o[2U];
    vlSelf->__PVT__lru_extract__DOT__row[3U] = vlSelf->__Vcellout__directory__data_o[3U];
    vlSelf->__PVT__lru_extract__DOT__row[4U] = vlSelf->__Vcellout__directory__data_o[4U];
    vlSelf->__PVT__lru_extract__DOT__row[5U] = vlSelf->__Vcellout__directory__data_o[5U];
    vlSelf->__PVT__lru_extract__DOT__row[6U] = vlSelf->__Vcellout__directory__data_o[6U];
    vlSelf->__PVT__lru_extract__DOT__row[7U] = vlSelf->__Vcellout__directory__data_o[7U];
    vlSelf->__PVT__lru_extract__DOT__row[8U] = vlSelf->__Vcellout__directory__data_o[8U];
    vlSelf->__PVT__lru_extract__DOT__row[9U] = vlSelf->__Vcellout__directory__data_o[9U];
    vlSelf->__PVT__lru_extract__DOT__row[0xaU] = vlSelf->__Vcellout__directory__data_o[0xaU];
    vlSelf->__PVT__lru_extract__DOT__row[0xbU] = vlSelf->__Vcellout__directory__data_o[0xbU];
    vlSelf->__PVT__lru_coh_state_o = ((0x16fU >= (0x1ffU 
                                                  & (((IData)(0xb8U) 
                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x17U) 
                                                         * (IData)(vlSelf->__PVT__lru_way_r))))))
                                       ? (7U & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__lru_way_r))))))
                                                  ? 0U
                                                  : 
                                                 (vlSelf->__PVT__lru_extract__DOT__row[
                                                  (((IData)(2U) 
                                                    + 
                                                    (0x1ffU 
                                                     & (((IData)(0xb8U) 
                                                         * (IData)(vlSelf->__PVT__lce_r)) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x17U) 
                                                            * (IData)(vlSelf->__PVT__lru_way_r)))))) 
                                                   >> 5U)] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(0xb8U) 
                                                        * (IData)(vlSelf->__PVT__lce_r)) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x17U) 
                                                           * (IData)(vlSelf->__PVT__lru_way_r)))))))) 
                                                | (vlSelf->__PVT__lru_extract__DOT__row[
                                                   (0xfU 
                                                    & ((((IData)(0xb8U) 
                                                         * (IData)(vlSelf->__PVT__lce_r)) 
                                                        + 
                                                        (0xffU 
                                                         & ((IData)(0x17U) 
                                                            * (IData)(vlSelf->__PVT__lru_way_r)))) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & (((IData)(0xb8U) 
                                                        * (IData)(vlSelf->__PVT__lce_r)) 
                                                       + 
                                                       (0xffU 
                                                        & ((IData)(0x17U) 
                                                           * (IData)(vlSelf->__PVT__lru_way_r))))))))
                                       : 0U);
    vlSelf->__PVT__lru_tag_lo = ((0x16fU >= ((IData)(3U) 
                                             + (0x1ffU 
                                                & (((IData)(0xb8U) 
                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                   + 
                                                   (0xffU 
                                                    & ((IData)(0x17U) 
                                                       * (IData)(vlSelf->__PVT__lru_way_r)))))))
                                  ? (0xfffffU & (((0U 
                                                   == 
                                                   (0x1fU 
                                                    & ((IData)(3U) 
                                                       + 
                                                       (0x1ffU 
                                                        & (((IData)(0xb8U) 
                                                            * (IData)(vlSelf->__PVT__lce_r)) 
                                                           + 
                                                           (0xffU 
                                                            & ((IData)(0x17U) 
                                                               * (IData)(vlSelf->__PVT__lru_way_r))))))))
                                                   ? 0U
                                                   : 
                                                  (vlSelf->__PVT__lru_extract__DOT__row[
                                                   (((IData)(0x16U) 
                                                     + 
                                                     (0x1ffU 
                                                      & (((IData)(0xb8U) 
                                                          * (IData)(vlSelf->__PVT__lce_r)) 
                                                         + 
                                                         (0xffU 
                                                          & ((IData)(0x17U) 
                                                             * (IData)(vlSelf->__PVT__lru_way_r)))))) 
                                                    >> 5U)] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0xb8U) 
                                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x17U) 
                                                                * (IData)(vlSelf->__PVT__lru_way_r)))))))))) 
                                                 | (vlSelf->__PVT__lru_extract__DOT__row[
                                                    (((IData)(3U) 
                                                      + 
                                                      (0x1ffU 
                                                       & (((IData)(0xb8U) 
                                                           * (IData)(vlSelf->__PVT__lce_r)) 
                                                          + 
                                                          (0xffU 
                                                           & ((IData)(0x17U) 
                                                              * (IData)(vlSelf->__PVT__lru_way_r)))))) 
                                                     >> 5U)] 
                                                    >> 
                                                    (0x1fU 
                                                     & ((IData)(3U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0xb8U) 
                                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x17U) 
                                                                * (IData)(vlSelf->__PVT__lru_way_r))))))))))
                                  : 0U);
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__1(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__1\n"); );
    // Body
    if (VL_UNLIKELY((((0x21U == (IData)(vlSelf->__PVT__cnt)) 
                      & (IData)(vlSelf->__PVT__cnt_inc)) 
                     & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.cce.t.cce.directory.icache_dir_segment.counter error: counter overflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__4(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___nba_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_dir_segment__4\n"); );
    // Body
    vlSelf->__PVT__sharers_ways_n = vlSelf->__PVT__sharers_ways_r;
    vlSelf->__PVT__sharers_hits_n = vlSelf->__PVT__sharers_hits_r;
    vlSelf->__PVT__sharers_coh_states_n = vlSelf->__PVT__sharers_coh_states_r;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__sharers_ways_n = ((0x38U 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (IData)(vlSelf->__PVT__way_r));
                vlSelf->__PVT__sharers_hits_n = ((2U 
                                                  & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                                 | (((0xfffffU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__addr_r 
                                                                 >> 0xcU))) 
                                                     == 
                                                     ((0x16fU 
                                                       >= 
                                                       ((IData)(3U) 
                                                        + 
                                                        (0x1ffU 
                                                         & (((IData)(0xb8U) 
                                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(0x17U) 
                                                                * (IData)(vlSelf->__PVT__way_r)))))))
                                                       ? 
                                                      (0xfffffU 
                                                       & (((0U 
                                                            == 
                                                            (0x1fU 
                                                             & ((IData)(3U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r))))))))
                                                            ? 0U
                                                            : 
                                                           (vlSelf->__Vcellout__directory__data_o[
                                                            (((IData)(0x16U) 
                                                              + 
                                                              (0x1ffU 
                                                               & (((IData)(0xb8U) 
                                                                   * (IData)(vlSelf->__PVT__lce_r)) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x17U) 
                                                                      * (IData)(vlSelf->__PVT__way_r)))))) 
                                                             >> 5U)] 
                                                            << 
                                                            ((IData)(0x20U) 
                                                             - 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & (((IData)(0xb8U) 
                                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x17U) 
                                                                         * (IData)(vlSelf->__PVT__way_r)))))))))) 
                                                          | (vlSelf->__Vcellout__directory__data_o[
                                                             (((IData)(3U) 
                                                               + 
                                                               (0x1ffU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r)))))) 
                                                              >> 5U)] 
                                                             >> 
                                                             (0x1fU 
                                                              & ((IData)(3U) 
                                                                 + 
                                                                 (0x1ffU 
                                                                  & (((IData)(0xb8U) 
                                                                      * (IData)(vlSelf->__PVT__lce_r)) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(0x17U) 
                                                                         * (IData)(vlSelf->__PVT__way_r))))))))))
                                                       : 0U)) 
                                                    & (0U 
                                                       != 
                                                       ((0x16fU 
                                                         >= 
                                                         (0x1ffU 
                                                          & (((IData)(0xb8U) 
                                                              * (IData)(vlSelf->__PVT__lce_r)) 
                                                             + 
                                                             (0xffU 
                                                              & ((IData)(0x17U) 
                                                                 * (IData)(vlSelf->__PVT__way_r))))))
                                                         ? 
                                                        (7U 
                                                         & (((0U 
                                                              == 
                                                              (0x1fU 
                                                               & (((IData)(0xb8U) 
                                                                   * (IData)(vlSelf->__PVT__lce_r)) 
                                                                  + 
                                                                  (0xffU 
                                                                   & ((IData)(0x17U) 
                                                                      * (IData)(vlSelf->__PVT__way_r))))))
                                                              ? 0U
                                                              : 
                                                             (vlSelf->__Vcellout__directory__data_o[
                                                              (((IData)(2U) 
                                                                + 
                                                                (0x1ffU 
                                                                 & (((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r)))))) 
                                                               >> 5U)] 
                                                              << 
                                                              ((IData)(0x20U) 
                                                               - 
                                                               (0x1fU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r)))))))) 
                                                            | (vlSelf->__Vcellout__directory__data_o[
                                                               (0xfU 
                                                                & ((((IData)(0xb8U) 
                                                                     * (IData)(vlSelf->__PVT__lce_r)) 
                                                                    + 
                                                                    (0xffU 
                                                                     & ((IData)(0x17U) 
                                                                        * (IData)(vlSelf->__PVT__way_r)))) 
                                                                   >> 5U))] 
                                                               >> 
                                                               (0x1fU 
                                                                & (((IData)(0xb8U) 
                                                                    * (IData)(vlSelf->__PVT__lce_r)) 
                                                                   + 
                                                                   (0xffU 
                                                                    & ((IData)(0x17U) 
                                                                       * (IData)(vlSelf->__PVT__way_r))))))))
                                                         : 0U))));
                vlSelf->__PVT__sharers_coh_states_n 
                    = ((0x38U & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | ((0x16fU >= (0x1ffU & (((IData)(0xb8U) 
                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                + (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->__PVT__way_r))))))
                           ? (7U & (((0U == (0x1fU 
                                             & (((IData)(0xb8U) 
                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                + (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSelf->__PVT__way_r))))))
                                      ? 0U : (vlSelf->__Vcellout__directory__data_o[
                                              (((IData)(2U) 
                                                + (0x1ffU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__way_r)))))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & (((IData)(0xb8U) 
                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(0x17U) 
                                                          * (IData)(vlSelf->__PVT__way_r)))))))) 
                                    | (vlSelf->__Vcellout__directory__data_o[
                                       (0xfU & ((((IData)(0xb8U) 
                                                  * (IData)(vlSelf->__PVT__lce_r)) 
                                                 + 
                                                 (0xffU 
                                                  & ((IData)(0x17U) 
                                                     * (IData)(vlSelf->__PVT__way_r)))) 
                                                >> 5U))] 
                                       >> (0x1fU & 
                                           (((IData)(0xb8U) 
                                             * (IData)(vlSelf->__PVT__lce_r)) 
                                            + (0xffU 
                                               & ((IData)(0x17U) 
                                                  * (IData)(vlSelf->__PVT__way_r))))))))
                           : 0U));
            }
        }
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__Vlvbound_h2ae7ea29__0 = (7U & (IData)(vlSelf->__PVT__sharers_ways));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(vlSelf->__PVT__cnt) 
                                             << 1U))))) {
                vlSelf->__PVT__sharers_ways_n = (((~ 
                                                   ((IData)(7U) 
                                                    << 
                                                    (7U 
                                                     & ((IData)(3U) 
                                                        * 
                                                        ((IData)(vlSelf->__PVT__cnt) 
                                                         << 1U))))) 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (0x3fU 
                                                    & ((IData)(vlSelf->__Vlvbound_h2ae7ea29__0) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(3U) 
                                                           * 
                                                           ((IData)(vlSelf->__PVT__cnt) 
                                                            << 1U))))));
            }
            vlSelf->__Vlvbound_h2ae7ea29__0 = (7U & 
                                               ((IData)(vlSelf->__PVT__sharers_ways) 
                                                >> 3U));
            vlSelf->__PVT__sharers_hits_n = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(vlSelf->__PVT__cnt) 
                                                      << 1U)))) 
                                              & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                             | (3U 
                                                & ((1U 
                                                    & (IData)(vlSelf->__PVT__sharers_hits)) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(vlSelf->__PVT__cnt) 
                                                       << 1U)))));
            vlSelf->__PVT__sharers_hits_n = (((~ ((IData)(1U) 
                                                  << 
                                                  (1U 
                                                   & ((IData)(1U) 
                                                      + 
                                                      ((IData)(vlSelf->__PVT__cnt) 
                                                       << 1U))))) 
                                              & (IData)(vlSelf->__PVT__sharers_hits_n)) 
                                             | (3U 
                                                & ((1U 
                                                    & ((IData)(vlSelf->__PVT__sharers_hits) 
                                                       >> 1U)) 
                                                   << 
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       + 
                                                       ((IData)(vlSelf->__PVT__cnt) 
                                                        << 1U))))));
            vlSelf->__Vlvbound_hb97b11e9__0 = (7U & (IData)(vlSelf->__PVT__sharers_coh_states));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(vlSelf->__PVT__cnt) 
                                             << 1U))))) {
                vlSelf->__PVT__sharers_coh_states_n 
                    = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                                  * 
                                                  ((IData)(vlSelf->__PVT__cnt) 
                                                   << 1U))))) 
                        & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | (0x3fU & ((IData)(vlSelf->__Vlvbound_hb97b11e9__0) 
                                   << (7U & ((IData)(3U) 
                                             * ((IData)(vlSelf->__PVT__cnt) 
                                                << 1U))))));
            }
            vlSelf->__Vlvbound_hb97b11e9__0 = (7U & 
                                               ((IData)(vlSelf->__PVT__sharers_coh_states) 
                                                >> 3U));
            if ((5U >= (7U & ((IData)(3U) * ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__cnt) 
                                                << 1U)))))) {
                vlSelf->__PVT__sharers_ways_n = (((~ 
                                                   ((IData)(7U) 
                                                    << 
                                                    (7U 
                                                     & ((IData)(3U) 
                                                        * 
                                                        ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->__PVT__cnt) 
                                                          << 1U)))))) 
                                                  & (IData)(vlSelf->__PVT__sharers_ways_n)) 
                                                 | (0x3fU 
                                                    & ((IData)(vlSelf->__Vlvbound_h2ae7ea29__0) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(3U) 
                                                           * 
                                                           ((IData)(1U) 
                                                            + 
                                                            ((IData)(vlSelf->__PVT__cnt) 
                                                             << 1U)))))));
                vlSelf->__PVT__sharers_coh_states_n 
                    = (((~ ((IData)(7U) << (7U & ((IData)(3U) 
                                                  * 
                                                  ((IData)(1U) 
                                                   + 
                                                   ((IData)(vlSelf->__PVT__cnt) 
                                                    << 1U)))))) 
                        & (IData)(vlSelf->__PVT__sharers_coh_states_n)) 
                       | (0x3fU & ((IData)(vlSelf->__Vlvbound_hb97b11e9__0) 
                                   << (7U & ((IData)(3U) 
                                             * ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__cnt) 
                                                   << 1U)))))));
            }
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v) {
            vlSelf->__PVT__sharers_ways_n = 0U;
            vlSelf->__PVT__sharers_hits_n = 0U;
            vlSelf->__PVT__sharers_coh_states_n = 0U;
        }
    }
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1rw_sync_mask_write_bit: instantiating width_p=        368, els_p=         32 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.cce.t.cce.directory.dcache.dcache_dir_segment.directory)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__5(Vtestbench_bp_cce_dir_segment__pi102* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_cce_dir_segment__pi102___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_dir_segment__5\n"); );
    // Init
    VlWide<12>/*367:0*/ directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0;
    VL_ZERO_W(368, directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0);
    VlWide<3>/*95:0*/ __Vtemp_h4f2bd358__0;
    VlWide<3>/*95:0*/ __Vtemp_heabae872__0;
    VlWide<3>/*95:0*/ __Vtemp_hf8ad60ff__0;
    VlWide<3>/*95:0*/ __Vtemp_h2196e1e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h4fa21688__0;
    VlWide<3>/*95:0*/ __Vtemp_h1ef8eadc__0;
    VlWide<3>/*95:0*/ __Vtemp_h7c459e7c__0;
    VlWide<4>/*127:0*/ __Vtemp_h455ede4f__0;
    VlWide<4>/*127:0*/ __Vtemp_h1856d513__0;
    VlWide<4>/*127:0*/ __Vtemp_h930fd64a__0;
    VlWide<4>/*127:0*/ __Vtemp_hcb99e068__0;
    VlWide<4>/*127:0*/ __Vtemp_h3fb49227__0;
    VlWide<4>/*127:0*/ __Vtemp_hbdef36a0__0;
    VlWide<5>/*159:0*/ __Vtemp_h65e62f53__0;
    VlWide<5>/*159:0*/ __Vtemp_h3792d1a9__0;
    VlWide<5>/*159:0*/ __Vtemp_h8d32524e__0;
    VlWide<5>/*159:0*/ __Vtemp_he61bb2f1__0;
    VlWide<5>/*159:0*/ __Vtemp_hba5e6da4__0;
    VlWide<5>/*159:0*/ __Vtemp_ha83ff5eb__0;
    VlWide<6>/*191:0*/ __Vtemp_h1ff214df__0;
    VlWide<6>/*191:0*/ __Vtemp_hc8bac538__0;
    VlWide<6>/*191:0*/ __Vtemp_hef028e70__0;
    VlWide<6>/*191:0*/ __Vtemp_hbcfa89ed__0;
    VlWide<6>/*191:0*/ __Vtemp_h291b2bae__0;
    VlWide<6>/*191:0*/ __Vtemp_ha67a8760__0;
    VlWide<7>/*223:0*/ __Vtemp_he3da8196__0;
    VlWide<7>/*223:0*/ __Vtemp_h1e5d2695__0;
    VlWide<7>/*223:0*/ __Vtemp_hcf1c9123__0;
    VlWide<7>/*223:0*/ __Vtemp_h4161035f__0;
    VlWide<7>/*223:0*/ __Vtemp_h43c4672c__0;
    VlWide<7>/*223:0*/ __Vtemp_ha35ae61c__0;
    VlWide<8>/*255:0*/ __Vtemp_hf1ecb349__0;
    VlWide<8>/*255:0*/ __Vtemp_h0e70f53d__0;
    VlWide<8>/*255:0*/ __Vtemp_h52f20a81__0;
    VlWide<8>/*255:0*/ __Vtemp_hb0f7c4e6__0;
    VlWide<8>/*255:0*/ __Vtemp_h93744081__0;
    VlWide<8>/*255:0*/ __Vtemp_hb3ddd9ff__0;
    VlWide<9>/*287:0*/ __Vtemp_h89f5c7ab__0;
    VlWide<9>/*287:0*/ __Vtemp_h1d81b125__0;
    VlWide<9>/*287:0*/ __Vtemp_hb41793f1__0;
    VlWide<9>/*287:0*/ __Vtemp_h35e4fa88__0;
    VlWide<9>/*287:0*/ __Vtemp_hd0c33b09__0;
    VlWide<9>/*287:0*/ __Vtemp_hc589b208__0;
    VlWide<10>/*319:0*/ __Vtemp_h622afd6d__0;
    VlWide<10>/*319:0*/ __Vtemp_hf068e7fc__0;
    VlWide<10>/*319:0*/ __Vtemp_h3dc634dd__0;
    VlWide<10>/*319:0*/ __Vtemp_h521b64a7__0;
    VlWide<10>/*319:0*/ __Vtemp_h2d73662b__0;
    VlWide<10>/*319:0*/ __Vtemp_h29cde91b__0;
    VlWide<11>/*351:0*/ __Vtemp_he3093f1b__0;
    VlWide<11>/*351:0*/ __Vtemp_h60b126ad__0;
    VlWide<11>/*351:0*/ __Vtemp_he2d2c564__0;
    VlWide<11>/*351:0*/ __Vtemp_h2fbe2eb7__0;
    VlWide<11>/*351:0*/ __Vtemp_h6c85c7bf__0;
    VlWide<11>/*351:0*/ __Vtemp_h16e1e8f7__0;
    VlWide<12>/*383:0*/ __Vtemp_h8f5c9943__0;
    VlWide<12>/*383:0*/ __Vtemp_h7c688640__0;
    VlWide<12>/*383:0*/ __Vtemp_h6b711595__0;
    // Body
    vlSelf->__PVT__set_id = (0x1fU & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_bypass_li)
                                       ? (0x1fU & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li))
                                       : (0x1fU & VL_STREAML_FAST_III(6, 
                                                                      (0x3fU 
                                                                       & (IData)(
                                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                                                                                >> 6U))), 0))));
    vlSelf->__PVT__dir_data_o_v_n = 0U;
    vlSelf->__PVT__dir_ram_w_v = 0U;
    vlSelf->__PVT__dir_ram_v = 0U;
    vlSelf->__PVT__way_n = vlSelf->__PVT__way_r;
    vlSelf->__PVT__sharers_v_n = vlSelf->__PVT__sharers_v_r;
    vlSelf->__PVT__lce_n = vlSelf->__PVT__lce_r;
    vlSelf->__PVT__addr_dst_gpr_n = vlSelf->__PVT__addr_dst_gpr_r;
    vlSelf->__PVT__lru_way_n = vlSelf->__PVT__lru_way_r;
    vlSelf->__PVT__r_lru_v_n = vlSelf->__PVT__r_lru_v_r;
    vlSelf->__PVT__addr_n = vlSelf->__PVT__addr_r;
    vlSelf->__PVT__state_n = vlSelf->__PVT__state_r;
    vlSelf->__PVT__cnt_clr = 0U;
    vlSelf->__PVT__cnt_inc = 0U;
    if ((4U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                vlSelf->__PVT__sharers_v_n = 1U;
                vlSelf->__PVT__addr_n = (QData)((IData)(
                                                        (((0x16fU 
                                                           >= 
                                                           ((IData)(3U) 
                                                            + 
                                                            (0x1ffU 
                                                             & (((IData)(0xb8U) 
                                                                 * (IData)(vlSelf->__PVT__lce_r)) 
                                                                + 
                                                                (0xffU 
                                                                 & ((IData)(0x17U) 
                                                                    * (IData)(vlSelf->__PVT__way_r)))))))
                                                           ? 
                                                          (0xfffffU 
                                                           & (((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (0x1ffU 
                                                                     & (((IData)(0xb8U) 
                                                                         * (IData)(vlSelf->__PVT__lce_r)) 
                                                                        + 
                                                                        (0xffU 
                                                                         & ((IData)(0x17U) 
                                                                            * (IData)(vlSelf->__PVT__way_r))))))))
                                                                ? 0U
                                                                : 
                                                               (vlSelf->__Vcellout__directory__data_o[
                                                                (((IData)(0x16U) 
                                                                  + 
                                                                  (0x1ffU 
                                                                   & (((IData)(0xb8U) 
                                                                       * (IData)(vlSelf->__PVT__lce_r)) 
                                                                      + 
                                                                      (0xffU 
                                                                       & ((IData)(0x17U) 
                                                                          * (IData)(vlSelf->__PVT__way_r)))))) 
                                                                 >> 5U)] 
                                                                << 
                                                                ((IData)(0x20U) 
                                                                 - 
                                                                 (0x1fU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((IData)(0xb8U) 
                                                                          * (IData)(vlSelf->__PVT__lce_r)) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x17U) 
                                                                             * (IData)(vlSelf->__PVT__way_r)))))))))) 
                                                              | (vlSelf->__Vcellout__directory__data_o[
                                                                 (((IData)(3U) 
                                                                   + 
                                                                   (0x1ffU 
                                                                    & (((IData)(0xb8U) 
                                                                        * (IData)(vlSelf->__PVT__lce_r)) 
                                                                       + 
                                                                       (0xffU 
                                                                        & ((IData)(0x17U) 
                                                                           * (IData)(vlSelf->__PVT__way_r)))))) 
                                                                  >> 5U)] 
                                                                 >> 
                                                                 (0x1fU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (0x1ffU 
                                                                      & (((IData)(0xb8U) 
                                                                          * (IData)(vlSelf->__PVT__lce_r)) 
                                                                         + 
                                                                         (0xffU 
                                                                          & ((IData)(0x17U) 
                                                                             * (IData)(vlSelf->__PVT__way_r))))))))))
                                                           : 0U) 
                                                         << 0xcU)));
            }
        }
        vlSelf->__PVT__state_n = ((2U & (IData)(vlSelf->__PVT__state_r))
                                   ? 0U : ((1U & (IData)(vlSelf->__PVT__state_r))
                                            ? 0U : 2U));
    } else if ((2U & (IData)(vlSelf->__PVT__state_r))) {
        if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__sharers_v_n = 1U;
            vlSelf->__PVT__state_n = 2U;
            vlSelf->__PVT__cnt_clr = 1U;
            vlSelf->__PVT__cnt_inc = 0U;
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v) {
            vlSelf->__PVT__sharers_v_n = 0U;
            vlSelf->__PVT__cnt_clr = 1U;
            if ((1U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                vlSelf->__PVT__state_n = 3U;
            } else if ((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                vlSelf->__PVT__state_n = 4U;
            }
        } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_w_v) {
            vlSelf->__PVT__sharers_v_n = 0U;
            vlSelf->__PVT__state_n = 2U;
        }
        if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
            if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v) {
                vlSelf->__PVT__addr_n = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li;
            } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_w_v) {
                vlSelf->__PVT__addr_n = 0ULL;
            }
        }
    } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
        vlSelf->__PVT__cnt_clr = (0x1fU == (IData)(vlSelf->__PVT__cnt));
        vlSelf->__PVT__state_n = ((IData)(vlSelf->__PVT__cnt_clr)
                                   ? 2U : 1U);
        vlSelf->__PVT__cnt_inc = (1U & (~ (IData)(vlSelf->__PVT__cnt_clr)));
    } else {
        vlSelf->__PVT__state_n = 1U;
        vlSelf->__PVT__cnt_clr = 1U;
    }
    vlSelf->__PVT__dir_ram_w_mask[0U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[1U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[2U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[3U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[4U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[5U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[6U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[7U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[8U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[9U] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[0xaU] = 0U;
    vlSelf->__PVT__dir_ram_w_mask[0xbU] = 0U;
    vlSelf->__PVT__dir_ram_w_data[0U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[1U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[2U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[3U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[4U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[5U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[6U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[7U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[8U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[9U] = 0U;
    vlSelf->__PVT__dir_ram_w_data[0xaU] = 0U;
    vlSelf->__PVT__dir_ram_w_data[0xbU] = 0U;
    vlSelf->__PVT__dir_ram_addr = 0U;
    vlSelf->__PVT__dir_ram_addr_n = vlSelf->__PVT__dir_ram_addr_r;
    if ((1U & (~ ((IData)(vlSelf->__PVT__state_r) >> 2U)))) {
        if ((2U & (IData)(vlSelf->__PVT__state_r))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__state_r)))) {
                if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v) {
                    vlSelf->__PVT__dir_ram_v = 1U;
                    vlSelf->__PVT__way_n = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li;
                    vlSelf->__PVT__lce_n = (1U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                  >> 1U));
                    vlSelf->__PVT__addr_dst_gpr_n = 0U;
                    vlSelf->__PVT__lru_way_n = (7U 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[2U] 
                                                    << 1U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r[1U] 
                                                      >> 0x1fU)));
                    if ((1U != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                        if ((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                            vlSelf->__PVT__lru_way_n = 0U;
                        }
                    }
                    vlSelf->__PVT__r_lru_v_n = 0U;
                    vlSelf->__PVT__dir_ram_addr_n = 0U;
                    if ((1U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                        vlSelf->__PVT__dir_data_o_v_n = 3U;
                        vlSelf->__PVT__r_lru_v_n = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_dcache;
                        vlSelf->__PVT__dir_ram_addr 
                            = vlSelf->__PVT__set_id;
                        vlSelf->__PVT__dir_ram_addr_n 
                            = vlSelf->__PVT__dir_ram_addr;
                    } else if ((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                        vlSelf->__PVT__dir_ram_addr 
                            = vlSelf->__PVT__set_id;
                    }
                } else if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_w_v) {
                    vlSelf->__PVT__dir_ram_v = 1U;
                    vlSelf->__PVT__addr_dst_gpr_n = 0U;
                    vlSelf->__PVT__r_lru_v_n = 0U;
                    vlSelf->__PVT__dir_ram_addr = vlSelf->__PVT__set_id;
                    vlSelf->__PVT__dir_ram_addr_n = vlSelf->__PVT__set_id;
                }
                if ((1U & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v)))) {
                    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_w_v) {
                        vlSelf->__PVT__dir_ram_w_v = 1U;
                        if ((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                            vlSelf->__PVT__dir_ram_w_mask[0U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[1U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[2U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[3U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[4U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[5U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[6U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[7U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[8U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[9U] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[0xaU] = 0xffffffffU;
                            vlSelf->__PVT__dir_ram_w_mask[0xbU] = 0xffffU;
                            vlSelf->__PVT__dir_ram_w_data[0U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[1U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[2U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[3U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[4U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[5U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[6U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[7U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[8U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[9U] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[0xaU] = 0U;
                            vlSelf->__PVT__dir_ram_w_data[0xbU] = 0U;
                        } else if ((7U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                            vlSelf->__Vlvbound_h8d6df08e__0 = 0x7fffffU;
                            vlSelf->__Vlvbound_h35b14da1__0 
                                = (0xfffffU & (IData)(
                                                      (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li 
                                                       >> 0xcU)));
                            if ((0x16fU >= ((IData)(3U) 
                                            + (0x1ffU 
                                               & (((IData)(0xb8U) 
                                                   * 
                                                   (1U 
                                                    & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                       >> 1U))) 
                                                  + 
                                                  (0xffU 
                                                   & ((IData)(0x17U) 
                                                      * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li)))))))) {
                                VL_ASSIGNSEL_WI(368,20,
                                                ((IData)(3U) 
                                                 + 
                                                 (0x1ffU 
                                                  & (((IData)(0xb8U) 
                                                      * 
                                                      (1U 
                                                       & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                          >> 1U))) 
                                                     + 
                                                     (0xffU 
                                                      & ((IData)(0x17U) 
                                                         * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li)))))), vlSelf->__PVT__dir_ram_w_data, vlSelf->__Vlvbound_h35b14da1__0);
                            }
                            vlSelf->__Vlvbound_h15006844__0 
                                = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li;
                            if ((0x16fU >= (0x1ffU 
                                            & (((IData)(0xb8U) 
                                                * (1U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                      >> 1U))) 
                                               + (0xffU 
                                                  & ((IData)(0x17U) 
                                                     * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))))) {
                                VL_ASSIGNSEL_WI(368,23,
                                                (0x1ffU 
                                                 & (((IData)(0xb8U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                         >> 1U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))), vlSelf->__PVT__dir_ram_w_mask, vlSelf->__Vlvbound_h8d6df08e__0);
                                VL_ASSIGNSEL_WI(368,3,
                                                (0x1ffU 
                                                 & (((IData)(0xb8U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                         >> 1U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))), vlSelf->__PVT__dir_ram_w_data, vlSelf->__Vlvbound_h15006844__0);
                            }
                        } else if ((8U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd))) {
                            vlSelf->__Vlvbound_h59a319bb__0 = 7U;
                            vlSelf->__Vlvbound_h15006844__1 
                                = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li;
                            if ((0x16fU >= (0x1ffU 
                                            & (((IData)(0xb8U) 
                                                * (1U 
                                                   & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                      >> 1U))) 
                                               + (0xffU 
                                                  & ((IData)(0x17U) 
                                                     * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))))) {
                                VL_ASSIGNSEL_WI(368,3,
                                                (0x1ffU 
                                                 & (((IData)(0xb8U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                         >> 1U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))), vlSelf->__PVT__dir_ram_w_mask, vlSelf->__Vlvbound_h59a319bb__0);
                                VL_ASSIGNSEL_WI(368,3,
                                                (0x1ffU 
                                                 & (((IData)(0xb8U) 
                                                     * 
                                                     (1U 
                                                      & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li) 
                                                         >> 1U))) 
                                                    + 
                                                    (0xffU 
                                                     & ((IData)(0x17U) 
                                                        * (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li))))), vlSelf->__PVT__dir_ram_w_data, vlSelf->__Vlvbound_h15006844__1);
                            }
                        }
                    }
                }
            }
        } else if ((1U & (IData)(vlSelf->__PVT__state_r))) {
            vlSelf->__PVT__dir_ram_w_v = 1U;
            vlSelf->__PVT__dir_ram_v = 1U;
            vlSelf->__PVT__dir_ram_w_mask[0U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[1U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[2U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[3U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[4U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[5U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[6U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[7U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[8U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[9U] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[0xaU] = 0xffffffffU;
            vlSelf->__PVT__dir_ram_w_mask[0xbU] = 0xffffU;
            vlSelf->__PVT__dir_ram_w_data[0U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[1U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[2U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[3U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[4U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[5U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[6U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[7U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[8U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[9U] = 0U;
            vlSelf->__PVT__dir_ram_w_data[0xaU] = 0U;
            vlSelf->__PVT__dir_ram_w_data[0xbU] = 0U;
            vlSelf->__PVT__dir_ram_addr = (0x1fU & (IData)(vlSelf->__PVT__cnt));
        }
    }
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][0U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][1U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][2U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][3U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][4U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][5U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][6U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][7U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][8U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][9U];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][0xaU];
    directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
        = vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__dir_ram_addr][0xbU];
    __Vtemp_h4f2bd358__0[0U] = (IData)((((QData)((IData)(
                                                         (1U 
                                                          & ((vlSelf->__PVT__dir_ram_w_mask[1U] 
                                                              >> 0x1fU)
                                                              ? 
                                                             (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                              >> 0x1fU)
                                                              : 
                                                             (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                              >> 0x1fU))))) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & ((0x40000000U 
                                                                 & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                 ? 
                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                 >> 0x1eU)
                                                                 : 
                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                 >> 0x1eU))))) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & ((0x20000000U 
                                                                    & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                    ? 
                                                                   (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                    >> 0x1dU)
                                                                    : 
                                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                    >> 0x1dU))))) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & ((0x10000000U 
                                                                       & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                       ? 
                                                                      (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                       >> 0x1cU)
                                                                       : 
                                                                      (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                       >> 0x1cU))))) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & ((0x8000000U 
                                                                          & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                          ? 
                                                                         (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                          >> 0x1bU)
                                                                          : 
                                                                         (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                          >> 0x1bU))))) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & ((0x4000000U 
                                                                             & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                             ? 
                                                                            (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                             >> 0x1aU)
                                                                             : 
                                                                            (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                             >> 0x1aU))))) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & ((0x2000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                ? 
                                                                               (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x19U)
                                                                                : 
                                                                               (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x19U))))) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & ((0x1000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x18U))))) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x17U))))) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x16U))))) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x15U))))) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x14U))))) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x13U))))) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__dir_ram_w_data[1U]
                                                                                 : 
                                                                                directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__dir_ram_w_mask[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__dir_ram_w_data[0U]
                                                                                 : 
                                                                                directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h4f2bd358__0[1U] = (IData)(((((QData)((IData)(
                                                          (1U 
                                                           & ((vlSelf->__PVT__dir_ram_w_mask[1U] 
                                                               >> 0x1fU)
                                                               ? 
                                                              (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                               >> 0x1fU)
                                                               : 
                                                              (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                               >> 0x1fU))))) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(
                                                             (1U 
                                                              & ((0x40000000U 
                                                                  & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                  ? 
                                                                 (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                  >> 0x1eU)
                                                                  : 
                                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                  >> 0x1eU))))) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & ((0x20000000U 
                                                                     & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                     ? 
                                                                    (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                     >> 0x1dU)
                                                                     : 
                                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                     >> 0x1dU))))) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & ((0x10000000U 
                                                                        & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                        ? 
                                                                       (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                        >> 0x1cU)
                                                                        : 
                                                                       (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                        >> 0x1cU))))) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & ((0x8000000U 
                                                                           & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                           ? 
                                                                          (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                           >> 0x1bU)
                                                                           : 
                                                                          (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                           >> 0x1bU))))) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & ((0x4000000U 
                                                                              & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                              ? 
                                                                             (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                              >> 0x1aU)
                                                                              : 
                                                                             (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                              >> 0x1aU))))) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(
                                                                            (1U 
                                                                             & ((0x2000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x19U))))) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(
                                                                               (1U 
                                                                                & ((0x1000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x18U))))) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x17U))))) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x16U))))) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x15U))))) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x14U))))) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x13U))))) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x12U))))) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x11U))))) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0x10U))))) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x8000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xfU))))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x4000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xeU))))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x2000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xdU))))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x1000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xcU))))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x800U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xbU))))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x400U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 0xaU))))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x200U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 9U))))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x100U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 8U))))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x80U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 7U))))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x40U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 6U))))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x20U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 5U))))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((0x10U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 4U))))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((8U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 3U))))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((4U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 2U))))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((2U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[1U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U] 
                                                                                >> 1U))))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[1U])
                                                                                 ? 
                                                                                vlSelf->__PVT__dir_ram_w_data[1U]
                                                                                 : 
                                                                                directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((((vlSelf->__PVT__dir_ram_w_mask[0U] 
                                                                                >> 0x1fU)
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1fU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1fU)) 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (((0x40000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1eU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1eU)) 
                                                                                << 0x1eU)) 
                                                                                | ((0x20000000U 
                                                                                & (((0x20000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1dU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1dU)) 
                                                                                << 0x1dU)) 
                                                                                | ((0x10000000U 
                                                                                & (((0x10000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1cU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1cU)) 
                                                                                << 0x1cU)) 
                                                                                | ((0x8000000U 
                                                                                & (((0x8000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1bU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1bU)) 
                                                                                << 0x1bU)) 
                                                                                | ((0x4000000U 
                                                                                & (((0x4000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x1aU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x1aU)) 
                                                                                << 0x1aU)) 
                                                                                | ((0x2000000U 
                                                                                & (((0x2000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x19U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x19U)) 
                                                                                << 0x19U)) 
                                                                                | ((0x1000000U 
                                                                                & (((0x1000000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x18U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x18U)) 
                                                                                << 0x18U)) 
                                                                                | ((0x800000U 
                                                                                & (((0x800000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x17U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x17U)) 
                                                                                << 0x17U)) 
                                                                                | ((0x400000U 
                                                                                & (((0x400000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x16U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x16U)) 
                                                                                << 0x16U)) 
                                                                                | ((0x200000U 
                                                                                & (((0x200000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x15U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x15U)) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((0x100000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x14U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x14U)) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((0x80000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x13U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x13U)) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((0x40000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x12U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x12U)) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((0x20000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x11U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x11U)) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((0x10000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0x10U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0x10U)) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((0x8000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xfU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xfU)) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((0x4000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xeU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xeU)) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((0x2000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xdU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xdU)) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((0x1000U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xcU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xcU)) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((0x800U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xbU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xbU)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((0x400U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 0xaU)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 0xaU)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((0x200U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 9U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 9U)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((0x100U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 8U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 8U)) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((0x80U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 7U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 7U)) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((0x40U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 6U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 6U)) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((0x20U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 5U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 5U)) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((0x10U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 4U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 4U)) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((8U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 3U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 3U)) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((4U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 2U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 2U)) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((2U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                (vlSelf->__PVT__dir_ram_w_data[0U] 
                                                                                >> 1U)
                                                                                 : 
                                                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U] 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((1U 
                                                                                & vlSelf->__PVT__dir_ram_w_mask[0U])
                                                                                 ? 
                                                                                vlSelf->__PVT__dir_ram_w_data[0U]
                                                                                 : 
                                                                                directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0U]))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    __Vtemp_heabae872__0[2U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[2U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[2U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[2U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U]))))));
    __Vtemp_hf8ad60ff__0[2U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[2U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[2U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_heabae872__0[2U])))));
    __Vtemp_h2196e1e8__0[2U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[2U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[2U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_hf8ad60ff__0[2U])))));
    __Vtemp_h4fa21688__0[2U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[2U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[2U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h2196e1e8__0[2U])))));
    __Vtemp_h1ef8eadc__0[2U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[2U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[2U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h4fa21688__0[2U])))));
    __Vtemp_h7c459e7c__0[2U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[2U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[2U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[2U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[2U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h1ef8eadc__0[2U])))));
    __Vtemp_h455ede4f__0[3U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[3U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[3U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[3U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U]))))));
    __Vtemp_h1856d513__0[3U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[3U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[3U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h455ede4f__0[3U])))));
    __Vtemp_h930fd64a__0[3U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[3U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[3U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h1856d513__0[3U])))));
    __Vtemp_hcb99e068__0[3U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[3U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[3U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h930fd64a__0[3U])))));
    __Vtemp_h3fb49227__0[3U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[3U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[3U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_hcb99e068__0[3U])))));
    __Vtemp_hbdef36a0__0[3U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[3U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[3U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[3U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[3U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h3fb49227__0[3U])))));
    __Vtemp_h65e62f53__0[4U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[4U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[4U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[4U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U]))))));
    __Vtemp_h3792d1a9__0[4U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[4U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[4U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h65e62f53__0[4U])))));
    __Vtemp_h8d32524e__0[4U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[4U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[4U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h3792d1a9__0[4U])))));
    __Vtemp_he61bb2f1__0[4U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[4U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[4U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h8d32524e__0[4U])))));
    __Vtemp_hba5e6da4__0[4U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[4U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[4U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_he61bb2f1__0[4U])))));
    __Vtemp_ha83ff5eb__0[4U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[4U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[4U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[4U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[4U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_hba5e6da4__0[4U])))));
    __Vtemp_h1ff214df__0[5U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[5U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[5U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[5U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U]))))));
    __Vtemp_hc8bac538__0[5U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[5U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[5U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h1ff214df__0[5U])))));
    __Vtemp_hef028e70__0[5U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[5U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[5U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_hc8bac538__0[5U])))));
    __Vtemp_hbcfa89ed__0[5U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[5U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[5U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hef028e70__0[5U])))));
    __Vtemp_h291b2bae__0[5U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[5U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[5U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_hbcfa89ed__0[5U])))));
    __Vtemp_ha67a8760__0[5U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[5U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[5U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[5U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[5U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h291b2bae__0[5U])))));
    __Vtemp_he3da8196__0[6U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[6U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[6U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[6U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U]))))));
    __Vtemp_h1e5d2695__0[6U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[6U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[6U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_he3da8196__0[6U])))));
    __Vtemp_hcf1c9123__0[6U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[6U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[6U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h1e5d2695__0[6U])))));
    __Vtemp_h4161035f__0[6U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[6U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[6U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hcf1c9123__0[6U])))));
    __Vtemp_h43c4672c__0[6U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[6U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[6U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h4161035f__0[6U])))));
    __Vtemp_ha35ae61c__0[6U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[6U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[6U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[6U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[6U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h43c4672c__0[6U])))));
    __Vtemp_hf1ecb349__0[7U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[7U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[7U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[7U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U]))))));
    __Vtemp_h0e70f53d__0[7U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[7U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[7U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_hf1ecb349__0[7U])))));
    __Vtemp_h52f20a81__0[7U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[7U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[7U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h0e70f53d__0[7U])))));
    __Vtemp_hb0f7c4e6__0[7U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[7U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[7U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h52f20a81__0[7U])))));
    __Vtemp_h93744081__0[7U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[7U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[7U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_hb0f7c4e6__0[7U])))));
    __Vtemp_hb3ddd9ff__0[7U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[7U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[7U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[7U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[7U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h93744081__0[7U])))));
    __Vtemp_h89f5c7ab__0[8U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[8U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[8U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[8U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U]))))));
    __Vtemp_h1d81b125__0[8U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[8U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[8U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h89f5c7ab__0[8U])))));
    __Vtemp_hb41793f1__0[8U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[8U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[8U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_h1d81b125__0[8U])))));
    __Vtemp_h35e4fa88__0[8U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[8U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[8U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_hb41793f1__0[8U])))));
    __Vtemp_hd0c33b09__0[8U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[8U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[8U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h35e4fa88__0[8U])))));
    __Vtemp_hc589b208__0[8U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[8U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[8U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[8U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[8U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_hd0c33b09__0[8U])))));
    __Vtemp_h622afd6d__0[9U] = ((0x10U & (((0x10U & 
                                            vlSelf->__PVT__dir_ram_w_mask[9U])
                                            ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                               >> 4U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                               >> 4U)) 
                                          << 4U)) | 
                                ((8U & (((8U & vlSelf->__PVT__dir_ram_w_mask[9U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                             >> 3U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                             >> 3U)) 
                                        << 3U)) | (
                                                   (4U 
                                                    & (((4U 
                                                         & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                         ? 
                                                        (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                         >> 2U)
                                                         : 
                                                        (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                         >> 2U)) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((2U 
                                                            & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                            ? 
                                                           (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                            >> 1U)
                                                            : 
                                                           (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                            >> 1U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((1U 
                                                             & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                             ? 
                                                            vlSelf->__PVT__dir_ram_w_data[9U]
                                                             : 
                                                            directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U]))))));
    __Vtemp_hf068e7fc__0[9U] = ((0x200U & (((0x200U 
                                             & vlSelf->__PVT__dir_ram_w_mask[9U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                >> 9U)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                >> 9U)) 
                                           << 9U)) 
                                | ((0x100U & (((0x100U 
                                                & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[9U] 
                                                   >> 8U)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                   >> 8U)) 
                                              << 8U)) 
                                   | ((0x80U & (((0x80U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 7U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 7U)) 
                                                << 7U)) 
                                      | ((0x40U & (
                                                   ((0x40U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                     >> 6U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                     >> 6U)) 
                                                   << 6U)) 
                                         | ((0x20U 
                                             & (((0x20U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 5U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 5U)) 
                                                << 5U)) 
                                            | __Vtemp_h622afd6d__0[9U])))));
    __Vtemp_h3dc634dd__0[9U] = ((0x4000U & (((0x4000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[9U])
                                              ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                 >> 0xeU)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                 >> 0xeU)) 
                                            << 0xeU)) 
                                | ((0x2000U & (((0x2000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                 >> 0xdU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                 >> 0xdU)) 
                                               << 0xdU)) 
                                   | ((0x1000U & ((
                                                   (0x1000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                    >> 0xcU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                    >> 0xcU)) 
                                                  << 0xcU)) 
                                      | ((0x800U & 
                                          (((0x800U 
                                             & vlSelf->__PVT__dir_ram_w_mask[9U])
                                             ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                >> 0xbU)
                                             : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                >> 0xbU)) 
                                           << 0xbU)) 
                                         | ((0x400U 
                                             & (((0x400U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0xaU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0xaU)) 
                                                << 0xaU)) 
                                            | __Vtemp_hf068e7fc__0[9U])))));
    __Vtemp_h521b64a7__0[9U] = ((0x80000U & (((0x80000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[9U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x13U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x13U)) 
                                             << 0x13U)) 
                                | ((0x40000U & (((0x40000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x12U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x12U)) 
                                                << 0x12U)) 
                                   | ((0x20000U & (
                                                   ((0x20000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                     >> 0x11U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                     >> 0x11U)) 
                                                   << 0x11U)) 
                                      | ((0x10000U 
                                          & (((0x10000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[9U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x10U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x10U)) 
                                             << 0x10U)) 
                                         | ((0x8000U 
                                             & (((0x8000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0xfU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0xfU)) 
                                                << 0xfU)) 
                                            | __Vtemp_h3dc634dd__0[9U])))));
    __Vtemp_h2d73662b__0[9U] = ((0x1000000U & (((0x1000000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                 >> 0x18U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                 >> 0x18U)) 
                                               << 0x18U)) 
                                | ((0x800000U & (((0x800000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                   >> 0x17U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                   >> 0x17U)) 
                                                 << 0x17U)) 
                                   | ((0x400000U & 
                                       (((0x400000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[9U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                             >> 0x16U)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                             >> 0x16U)) 
                                        << 0x16U)) 
                                      | ((0x200000U 
                                          & (((0x200000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[9U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x15U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x15U)) 
                                             << 0x15U)) 
                                         | ((0x100000U 
                                             & (((0x100000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x14U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x14U)) 
                                                << 0x14U)) 
                                            | __Vtemp_h521b64a7__0[9U])))));
    __Vtemp_h29cde91b__0[9U] = ((0x20000000U & (((0x20000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x1dU)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x1dU)) 
                                                << 0x1dU)) 
                                | ((0x10000000U & (
                                                   ((0x10000000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                     >> 0x1cU)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                     >> 0x1cU)) 
                                                   << 0x1cU)) 
                                   | ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[9U])
                                          ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[9U])
                                               ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[9U])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[9U] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h2d73662b__0[9U])))));
    __Vtemp_he3093f1b__0[0xaU] = ((0x10U & (((0x10U 
                                              & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 4U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 4U)) 
                                            << 4U)) 
                                  | ((8U & (((8U & 
                                              vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 3U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 3U)) 
                                            << 3U)) 
                                     | ((4U & (((4U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 2U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 2U)) 
                                               << 2U)) 
                                        | ((2U & ((
                                                   (2U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 1U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 1U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((1U 
                                                & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                ? vlSelf->__PVT__dir_ram_w_data[0xaU]
                                                : directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU]))))));
    __Vtemp_h60b126ad__0[0xaU] = ((0x200U & (((0x200U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 9U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 9U)) 
                                             << 9U)) 
                                  | ((0x100U & (((0x100U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 8U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 8U)) 
                                                << 8U)) 
                                     | ((0x80U & ((
                                                   (0x80U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 7U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 7U)) 
                                                  << 7U)) 
                                        | ((0x40U & 
                                            (((0x40U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 6U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 6U)) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & (((0x20U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 5U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 5U)) 
                                                  << 5U)) 
                                              | __Vtemp_he3093f1b__0[0xaU])))));
    __Vtemp_he2d2c564__0[0xaU] = ((0x4000U & (((0x4000U 
                                                & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                   >> 0xeU)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                   >> 0xeU)) 
                                              << 0xeU)) 
                                  | ((0x2000U & (((0x2000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                   >> 0xdU)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (((0x1000U 
                                            & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                            ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                               >> 0xcU)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                               >> 0xcU)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (((0x800U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0xbU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0xbU)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (((0x400U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0xaU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0xaU)) 
                                                  << 0xaU)) 
                                              | __Vtemp_h60b126ad__0[0xaU])))));
    __Vtemp_h2fbe2eb7__0[0xaU] = ((0x80000U & (((0x80000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0x13U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0x13U)) 
                                               << 0x13U)) 
                                  | ((0x40000U & ((
                                                   (0x40000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0x12U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0x12U)) 
                                                  << 0x12U)) 
                                     | ((0x20000U & 
                                         (((0x20000U 
                                            & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                            ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                               >> 0x11U)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                               >> 0x11U)) 
                                          << 0x11U)) 
                                        | ((0x10000U 
                                            & (((0x10000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0x10U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0x10U)) 
                                               << 0x10U)) 
                                           | ((0x8000U 
                                               & (((0x8000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0xfU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0xfU)) 
                                                  << 0xfU)) 
                                              | __Vtemp_he2d2c564__0[0xaU])))));
    __Vtemp_h6c85c7bf__0[0xaU] = ((0x1000000U & (((0x1000000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                   >> 0x18U)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                   >> 0x18U)) 
                                                 << 0x18U)) 
                                  | ((0x800000U & (
                                                   ((0x800000U 
                                                     & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                     ? 
                                                    (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                     >> 0x17U)
                                                     : 
                                                    (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                     >> 0x17U)) 
                                                   << 0x17U)) 
                                     | ((0x400000U 
                                         & (((0x400000U 
                                              & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0x16U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0x16U)) 
                                            << 0x16U)) 
                                        | ((0x200000U 
                                            & (((0x200000U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                 >> 0x15U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                 >> 0x15U)) 
                                               << 0x15U)) 
                                           | ((0x100000U 
                                               & (((0x100000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0x14U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0x14U)) 
                                                  << 0x14U)) 
                                              | __Vtemp_h2fbe2eb7__0[0xaU])))));
    __Vtemp_h16e1e8f7__0[0xaU] = ((0x20000000U & ((
                                                   (0x20000000U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                    >> 0x1dU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                    >> 0x1dU)) 
                                                  << 0x1dU)) 
                                  | ((0x10000000U & 
                                      (((0x10000000U 
                                         & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                         ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                            >> 0x1cU)
                                         : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                            >> 0x1cU)) 
                                       << 0x1cU)) | 
                                     ((0x8000000U & 
                                       (((0x8000000U 
                                          & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                          ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                             >> 0x1bU)
                                          : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                             >> 0x1bU)) 
                                        << 0x1bU)) 
                                      | ((0x4000000U 
                                          & (((0x4000000U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 0x1aU)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 0x1aU)) 
                                             << 0x1aU)) 
                                         | ((0x2000000U 
                                             & (((0x2000000U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                                  >> 0x19U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                  >> 0x19U)) 
                                                << 0x19U)) 
                                            | __Vtemp_h6c85c7bf__0[0xaU])))));
    __Vtemp_h8f5c9943__0[0xbU] = ((0x10U & (((0x10U 
                                              & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                 >> 4U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                 >> 4U)) 
                                            << 4U)) 
                                  | ((8U & (((8U & 
                                              vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                              ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                 >> 3U)
                                              : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                 >> 3U)) 
                                            << 3U)) 
                                     | ((4U & (((4U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                 >> 2U)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                 >> 2U)) 
                                               << 2U)) 
                                        | ((2U & ((
                                                   (2U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                    >> 1U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                    >> 1U)) 
                                                  << 1U)) 
                                           | (1U & 
                                              ((1U 
                                                & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                ? vlSelf->__PVT__dir_ram_w_data[0xbU]
                                                : directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU]))))));
    __Vtemp_h7c688640__0[0xbU] = ((0x200U & (((0x200U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                  >> 9U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                  >> 9U)) 
                                             << 9U)) 
                                  | ((0x100U & (((0x100U 
                                                  & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                  ? 
                                                 (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                  >> 8U)
                                                  : 
                                                 (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                  >> 8U)) 
                                                << 8U)) 
                                     | ((0x80U & ((
                                                   (0x80U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                    >> 7U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                    >> 7U)) 
                                                  << 7U)) 
                                        | ((0x40U & 
                                            (((0x40U 
                                               & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                               ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                  >> 6U)
                                               : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                  >> 6U)) 
                                             << 6U)) 
                                           | ((0x20U 
                                               & (((0x20U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                    >> 5U)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                    >> 5U)) 
                                                  << 5U)) 
                                              | __Vtemp_h8f5c9943__0[0xbU])))));
    __Vtemp_h6b711595__0[0xbU] = ((0x4000U & (((0x4000U 
                                                & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                ? (
                                                   vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                   >> 0xeU)
                                                : (
                                                   directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                   >> 0xeU)) 
                                              << 0xeU)) 
                                  | ((0x2000U & (((0x2000U 
                                                   & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                   ? 
                                                  (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                   >> 0xdU)
                                                   : 
                                                  (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                   >> 0xdU)) 
                                                 << 0xdU)) 
                                     | ((0x1000U & 
                                         (((0x1000U 
                                            & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                            ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                               >> 0xcU)
                                            : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                               >> 0xcU)) 
                                          << 0xcU)) 
                                        | ((0x800U 
                                            & (((0x800U 
                                                 & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                 ? 
                                                (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                 >> 0xbU)
                                                 : 
                                                (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                 >> 0xbU)) 
                                               << 0xbU)) 
                                           | ((0x400U 
                                               & (((0x400U 
                                                    & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                                                    ? 
                                                   (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                                                    >> 0xaU)
                                                    : 
                                                   (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                                    >> 0xaU)) 
                                                  << 0xaU)) 
                                              | __Vtemp_h7c688640__0[0xbU])))));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0U] 
        = __Vtemp_h4f2bd358__0[0U];
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[1U] 
        = __Vtemp_h4f2bd358__0[1U];
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[2U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[2U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[2U])
                                ? (vlSelf->__PVT__dir_ram_w_data[2U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[2U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_h7c459e7c__0[2U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[3U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[3U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[3U])
                                ? (vlSelf->__PVT__dir_ram_w_data[3U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[3U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_hbdef36a0__0[3U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[4U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[4U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[4U])
                                ? (vlSelf->__PVT__dir_ram_w_data[4U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[4U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_ha83ff5eb__0[4U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[5U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[5U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[5U])
                                ? (vlSelf->__PVT__dir_ram_w_data[5U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[5U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_ha67a8760__0[5U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[6U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[6U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[6U])
                                ? (vlSelf->__PVT__dir_ram_w_data[6U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[6U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_ha35ae61c__0[6U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[7U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[7U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[7U])
                                ? (vlSelf->__PVT__dir_ram_w_data[7U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[7U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_hb3ddd9ff__0[7U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[8U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[8U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[8U])
                                ? (vlSelf->__PVT__dir_ram_w_data[8U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[8U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_hc589b208__0[8U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[9U] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[9U] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[9U])
                                ? (vlSelf->__PVT__dir_ram_w_data[9U] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[9U] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_h29cde91b__0[9U]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0xaU] 
        = ((((vlSelf->__PVT__dir_ram_w_mask[0xaU] >> 0x1fU)
              ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                 >> 0x1fU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                              >> 0x1fU)) << 0x1fU) 
           | ((0x40000000U & (((0x40000000U & vlSelf->__PVT__dir_ram_w_mask[0xaU])
                                ? (vlSelf->__PVT__dir_ram_w_data[0xaU] 
                                   >> 0x1eU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xaU] 
                                                >> 0x1eU)) 
                              << 0x1eU)) | __Vtemp_h16e1e8f7__0[0xaU]));
    vlSelf->__PVT__directory__DOT__synth__DOT__nz__DOT__data_n[0xbU] 
        = ((0x8000U & (((0x8000U & vlSelf->__PVT__dir_ram_w_mask[0xbU])
                         ? (vlSelf->__PVT__dir_ram_w_data[0xbU] 
                            >> 0xfU) : (directory__DOT__synth__DOT____VdfgTmp_hc309fe9f__0[0xbU] 
                                        >> 0xfU)) << 0xfU)) 
           | __Vtemp_h6b711595__0[0xbU]);
}
