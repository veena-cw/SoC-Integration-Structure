// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_wormhole_router__pi31.h"

VL_ATTR_COLD void Vtestbench_bsg_wormhole_router__pi31___ctor_var_reset(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk_i = 0;
    vlSelf->__PVT__reset_i = 0;
    VL_ZERO_RESET_W(650, vlSelf->__PVT__link_i);
    VL_ZERO_RESET_W(650, vlSelf->__PVT__link_o);
    vlSelf->__PVT__my_cord_i = 0;
    vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__detected_header_lo = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__detected_header_lo = 0;
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li = 0;
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__detected_header_lo = 0;
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li = 0;
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__detected_header_lo = 0;
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li = 0;
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__detected_header_lo = 0;
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__data_sel_lo = 0;
    vlSelf->__Vcellinp__out_ch__BRA__0__KET____DOT__conc__i = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__reqs_li = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__data_sel_lo = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__reqs_li = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__data_sel_lo = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__reqs_li = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__data_sel_lo = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__reqs_li = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__data_sel_lo = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__eq = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__eq = 0;
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__eq = 0;
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__eq = 0;
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h01f98fc4__0 = 0;
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_5__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_h35fbae03__0 = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_4__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->out_ch__BRA__3__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__out_ch__BRA__3__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->out_ch__BRA__4__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__out_ch__BRA__4__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n = 0;
    vlSelf->__VdfgTmp_h58c5e7f4__0 = 0;
    vlSelf->__VdfgTmp_h5c36a40b__0 = 0;
}
