// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_xbar_stream__pi92.h"

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        204, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.fe_lce.lce_cmd_fill_xbar.buffer[0].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        204, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.fe_lce.lce_cmd_fill_xbar.buffer[1].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtestbench__ConstPool__TABLE_h83ca26ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5029f386_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5efd7157_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h70f1aaf3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h49ada9e1_0;

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*203:0*/ __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(204, __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*203:0*/ __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(204, __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i) {
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U] 
                             >> 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
                             >> 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
                << 0xbU) | (0x7ffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
                                      >> 0xbU)));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
               >> 0x15U);
        __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i) {
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[0U];
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[1U];
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
                << 0xbU) | (0x7ffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U]));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
               >> 0x15U);
        __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r = 0U;
    } else {
        if (vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i) {
                __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__first_cnt) 
                         + (IData)(vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i)));
        }
        if (vlSelf->__PVT__cbc__DOT__rr_yumi_li) {
            vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r 
                = (1U & ((IData)(vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0)
                          ? ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                             >> 0xbU) : ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                                         >> 9U)));
        }
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & ((IData)(vlSelf->__PVT__cbc__DOT__rr_yumi_lo) 
                                                  << 2U)) 
                                           | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx2];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx2];
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & ((IData)(vlSelf->__PVT__cbc__DOT__rr_yumi_lo) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx1];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx1];
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx1];
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) 
         | ((IData)(vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i) 
            & (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__msg_last_lo)))) {
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r = 0U;
    } else if (vlSelf->cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__req_words_reg__en_i) {
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r 
            = (3U & (~ (IData)(vlSelf->cbc__DOT____Vcellout__rr__BRA__0__KET____DOT__rr0__grants_o)));
    }
    if (__Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    if (__Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__msg_ready_and_o = ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r))));
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li 
        = ((~ (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r)) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r)))));
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__1(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__1\n"); );
    // Body
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = ((0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)));
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
           & (0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i)));
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i) 
              >> 1U));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        204, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.be_lce.lce_cmd_fill_xbar.buffer[0].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        204, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.be_lce.lce_cmd_fill_xbar.buffer[1].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Body
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i)));
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i) 
              >> 1U));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*203:0*/ __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(204, __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*203:0*/ __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(204, __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i) {
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U] 
                             >> 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
                             >> 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
                << 0xbU) | (0x7ffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
                                      >> 0xbU)));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
               >> 0x15U);
        __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i) {
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[0U];
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[1U];
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
                << 0xbU) | (0x7ffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U]));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
               >> 0x15U);
        __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r = 0U;
    } else {
        if (vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i) {
                __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__first_cnt) 
                         + (IData)(vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i)));
        }
        if (vlSelf->__PVT__cbc__DOT__rr_yumi_li) {
            vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r 
                = (1U & ((IData)(vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0)
                          ? ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                             >> 0xbU) : ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                                         >> 9U)));
        }
    }
    __Vtableidx4 = (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & ((IData)(vlSelf->__PVT__cbc__DOT__rr_yumi_lo) 
                                                  << 2U)) 
                                           | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx4];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx4];
    }
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx4];
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx4];
    __Vtableidx3 = (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & ((IData)(vlSelf->__PVT__cbc__DOT__rr_yumi_lo) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx3];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx3];
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx3];
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) 
         | ((IData)(vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i) 
            & (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__msg_last_lo)))) {
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r = 0U;
    } else if (vlSelf->cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__req_words_reg__en_i) {
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r 
            = (3U & (~ (IData)(vlSelf->cbc__DOT____Vcellout__rr__BRA__0__KET____DOT__rr0__grants_o)));
    }
    if (__Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    if (__Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li 
        = ((~ (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r)) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r)))));
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__1(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__1\n"); );
    // Body
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = ((0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)));
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
           & (0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        204, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.fe_lce.lce_cmd_fill_xbar.buffer[0].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        204, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.fe_lce.lce_cmd_fill_xbar.buffer[1].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*0:0*/ __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*203:0*/ __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(204, __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*203:0*/ __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(204, __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i) {
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U] 
                             >> 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
                             >> 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
                << 0xbU) | (0x7ffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
                                      >> 0xbU)));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
               >> 0x15U);
        __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i) {
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[0U];
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[1U];
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
                << 0xbU) | (0x7ffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U]));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
               >> 0x15U);
        __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r = 0U;
    } else {
        if (vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i) {
                __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__first_cnt) 
                         + (IData)(vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i)));
        }
        if (vlSelf->__PVT__cbc__DOT__rr_yumi_li) {
            vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r 
                = (1U & ((IData)(vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0)
                          ? ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                             >> 0xbU) : ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                                         >> 9U)));
        }
    }
    __Vtableidx6 = (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & ((IData)(vlSelf->__PVT__cbc__DOT__rr_yumi_lo) 
                                                  << 2U)) 
                                           | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx6];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx6])) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx6];
    }
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx6];
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx6];
    __Vtableidx5 = (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & ((IData)(vlSelf->__PVT__cbc__DOT__rr_yumi_lo) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx5])) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx5];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx5])) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx5];
    }
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx5];
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx5];
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) 
         | ((IData)(vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i) 
            & (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__msg_last_lo)))) {
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r = 0U;
    } else if (vlSelf->cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__req_words_reg__en_i) {
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r 
            = (3U & (~ (IData)(vlSelf->cbc__DOT____Vcellout__rr__BRA__0__KET____DOT__rr0__grants_o)));
    }
    if (__Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    if (__Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__msg_ready_and_o = ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
                                             << 1U)) 
                                      | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r))));
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li 
        = ((~ (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r)) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r)))));
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__1(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_cmd_fill_xbar__1\n"); );
    // Body
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = ((0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)));
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
           & (0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i)));
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i) 
              >> 1U));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar\n"); );
    // Body
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        204, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.be_lce.lce_cmd_fill_xbar.buffer[0].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        204, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.core.core_lite.be_lce.lce_cmd_fill_xbar.buffer[1].in_fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___act_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Body
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i 
        = (1U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r)) 
                 & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i)));
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i 
        = ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r)) 
           & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i) 
              >> 1U));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*0:0*/ __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*203:0*/ __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(204, __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*203:0*/ __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(204, __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i) {
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U] 
                             >> 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
                << 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[3U] 
                             >> 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
                << 0xbU) | (0x7ffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[4U] 
                                      >> 0xbU)));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[4U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[5U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[6U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[7U] 
               >> 0x15U);
        __Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i) {
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[0U];
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[1U];
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
                << 0xbU) | (0x7ffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i[2U]));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[0U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[1U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[2U] 
                >> 0x15U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
                             << 0xbU));
        __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i[3U] 
               >> 0x15U);
        __Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r;
    }
    if (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) {
        __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r = 0U;
    } else {
        if (vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i) {
                __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__first_cnt) 
                         + (IData)(vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i)));
        }
        if (vlSelf->__PVT__cbc__DOT__rr_yumi_li) {
            vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r 
                = (1U & ((IData)(vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0)
                          ? ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                             >> 0xbU) : ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                                         >> 9U)));
        }
    }
    __Vtableidx8 = (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & ((IData)(vlSelf->__PVT__cbc__DOT__rr_yumi_lo) 
                                                  << 2U)) 
                                           | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx8])) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx8];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx8])) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx8];
    }
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx8];
    vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx8];
    __Vtableidx7 = (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r) 
                                           << 4U) | 
                                          ((8U & ((IData)(vlSelf->__PVT__cbc__DOT__rr_yumi_lo) 
                                                  << 3U)) 
                                           | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx7])) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx7];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx7])) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx7];
    }
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx7];
    vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx7];
    if (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r) 
         | ((IData)(vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i) 
            & (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__msg_last_lo)))) {
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r = 0U;
    } else if (vlSelf->cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__req_words_reg__en_i) {
        vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r 
            = (3U & (~ (IData)(vlSelf->cbc__DOT____Vcellout__rr__BRA__0__KET____DOT__rr0__grants_o)));
    }
    if (__Vdlyvset__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    if (__Vdlyvset__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[0U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][0U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[1U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][1U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[2U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][2U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[3U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][3U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[4U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][4U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[5U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][5U];
    vlSelf->__Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o[6U] 
        = vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r][6U];
    vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li 
        = ((~ (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r)) 
           & ((2U & ((~ (IData)(vlSelf->__PVT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r)) 
                     << 1U)) | (1U & (~ (IData)(vlSelf->__PVT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r)))));
    vlSelf->cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li));
}

VL_INLINE_OPT void Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__1(Vtestbench_bp_me_xbar_stream__pi92* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          Vtestbench_bp_me_xbar_stream__pi92___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_cmd_fill_xbar__1\n"); );
    // Body
    vlSelf->__PVT__cbc__DOT__rr_yumi_li = ((0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)) 
                                           & (~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)));
    vlSelf->__Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i 
        = ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__command__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
           & (0U != (IData)(vlSelf->__PVT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li)));
}
