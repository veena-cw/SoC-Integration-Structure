// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_wormhole_concentrator_in__pi26.h"

extern const VlUnpacked<CData/*1:0*/, 8> Vtestbench__ConstPool__TABLE_he9947f7f_0;
extern const VlUnpacked<CData/*0:0*/, 8> Vtestbench__ConstPool__TABLE_hb25c36cc_0;

VL_ATTR_COLD void Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__req_concentrator__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx1 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx1];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx1];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__resp_concentrator__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx2 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx2];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx2];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx3 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx3];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx3];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__req_concentrator__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx4 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx4];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx4];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__resp_concentrator__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx5 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx5];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx5];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__fill_concentrator__DOT__concentrator_in__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][0U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][1U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][2U];
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U] 
        = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r][3U];
    vlSelf->__PVT__woc__DOT__scheduled_with_release 
        = ((~ ((2U & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                      << 1U)) | (1U & (~ (IData)((0U 
                                                  != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r))))))) 
           & (IData)(vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r) 
           == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r));
    if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r[3U];
    } else if (vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r) {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out[3U];
    } else {
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[0U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[0U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[1U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[1U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[2U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[2U];
        vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o[3U] 
            = vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r[3U];
    }
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r));
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full 
        = ((IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs) 
           & (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r));
    vlSelf->__PVT__reqs = ((2U & (((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty))) 
                                  << 1U)) | (1U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                                                   & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
    vlSelf->__PVT__links_ready_and_rev_o = ((2U & (
                                                   (~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full)) 
                                                   << 1U)) 
                                            | (1U & 
                                               (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full))));
    __Vtableidx6 = (((IData)(vlSelf->__PVT__reqs) << 1U) 
                    | (IData)(vlSelf->__PVT__woc__DOT__brr__DOT__last_r));
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n 
        = Vtestbench__ConstPool__TABLE_he9947f7f_0[__Vtableidx6];
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = Vtestbench__ConstPool__TABLE_hb25c36cc_0
        [__Vtableidx6];
    vlSelf->__PVT__data_sel_lo = (((IData)(vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n) 
                                   & (- (IData)((1U 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release)))))))) 
                                  | (IData)(vlSelf->__PVT__woc__DOT__scheduled_with_release));
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = ((IData)(vlSelf->__PVT__data_sel_lo) 
                                                & ((2U 
                                                    & ((~ (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty)))));
}

VL_ATTR_COLD void Vtestbench_bsg_wormhole_concentrator_in__pi26___ctor_var_reset(Vtestbench_bsg_wormhole_concentrator_in__pi26* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                      Vtestbench_bsg_wormhole_concentrator_in__pi26___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    vlSelf->__PVT__links_v_i = 0;
    VL_ZERO_RESET_W(256, vlSelf->__PVT__links_data_i);
    vlSelf->__PVT__links_ready_and_rev_o = 0;
    vlSelf->__PVT__links_credit_late_o = 0;
    vlSelf->__PVT__concentrated_link_ready_and_rev_i = 0;
    vlSelf->__PVT__concentrated_link_v_o = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__concentrated_link_data_o);
    vlSelf->__PVT__reqs = 0;
    vlSelf->__PVT__data_sel_lo = 0;
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o);
    vlSelf->__Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->__Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o);
    vlSelf->__PVT__woc__DOT__scheduled_with_release = 0;
    vlSelf->woc__DOT____VdfgTmp_hc8ebdcaa__0 = 0;
    vlSelf->__PVT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en = 0;
    vlSelf->in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    VL_ZERO_RESET_W(128, vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out);
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r);
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en = 0;
    vlSelf->in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    VL_ZERO_RESET_W(128, vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out);
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r);
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
}
