// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_io_tile_node__Bz1.h"
#include "Vtestbench_bp_me_stream_pump_in__pi70.h"
#include "Vtestbench_bsg_two_fifo__W80.h"
#include "Vtestbench_bsg_wormhole_router__pi33.h"

extern const VlUnpacked<CData/*3:0*/, 128> Vtestbench__ConstPool__TABLE_h83ca26ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5029f386_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5efd7157_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h70f1aaf3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h49ada9e1_0;

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__0(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*0:0*/ __Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*193:0*/ __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(194, __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*0:0*/ __Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*193:0*/ __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(194, __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[0U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[2U];
        __Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__io_tile__DOT__reset_r) {
        __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
    } else {
        if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up) {
                __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up)));
        }
        if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up) {
                __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up)));
        }
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    }
    if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[1U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[2U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[3U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                << 0x16U) | (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                             >> 0xaU));
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                << 0x16U) | (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                             >> 0xaU));
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (3U & (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                     >> 0xaU));
        __Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    __Vtableidx2 = (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx2];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx2])) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx2];
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx2];
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx2];
    __Vtableidx1 = (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx1];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx1])) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx1];
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx1];
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx1];
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_n));
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n));
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_n));
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_n));
    if (__Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (__Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->io_tile__DOT____Vcellout__mem_fwd_wormhole_to_stream__link_ready_and_o 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)
                  ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r))
                  : (~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))));
}

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__0(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*0:0*/ __Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*193:0*/ __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(194, __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    CData/*0:0*/ __Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<7>/*193:0*/ __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(194, __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    CData/*1:0*/ __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    // Body
    __Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r;
    __Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[0U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[1U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[2U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__cmd_pump_in->gearbox__DOT____Vcellout__fifo__data_o[3U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[0U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[1U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fsm_rev_header_li[2U];
        __Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    if (vlSelf->__PVT__io_tile__DOT__reset_r) {
        __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r = 0U;
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0U;
    } else {
        if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up) {
                __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__cnt_up)));
        }
        if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r) {
            if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up) {
                __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r)));
            }
        } else {
            __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r 
                = (3U & ((IData)((vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr 
                                  >> 4U)) + (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__cnt_up)));
        }
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
        vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r 
            = vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n;
    }
    if (vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__enq_i) {
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[0U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[1U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[2U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSelf->__PVT__io_socket__DOT__routers__BRA__1__KET____DOT__router->__PVT__link_o[3U];
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U] 
            = ((vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                << 0x16U) | (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[0U] 
                             >> 0xaU));
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U] 
            = ((vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                << 0x16U) | (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[1U] 
                             >> 0xaU));
        __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U] 
            = (3U & (vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->data_o[2U] 
                     >> 0xaU));
        __Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r;
    }
    __Vtableidx4 = (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx4];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx4])) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx4];
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx4];
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx4];
    __Vtableidx3 = (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r) 
                     << 6U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r) 
                                << 5U) | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r) 
                                           << 4U) | 
                                          (((IData)(vlSelf->io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i) 
                                            << 3U) 
                                           | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r) 
                                               << 2U) 
                                              | (((IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__enq_i) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r 
            = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx3];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx3])) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r 
            = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx3];
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r 
        = Vtestbench__ConstPool__TABLE_h70f1aaf3_0[__Vtableidx3];
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r 
        = Vtestbench__ConstPool__TABLE_h49ada9e1_0[__Vtableidx3];
    vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_n));
    vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n));
    vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_n));
    vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_n));
    if (__Vdlyvset__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__cnt_r;
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r 
        = __Vdly__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r;
    if (__Vdlyvset__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][4U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[4U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][5U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[5U];
        vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][6U] 
            = __Vdlyvval__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[6U];
    }
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_r 
        = ((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
           & (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__nz__DOT__state_n));
    vlSelf->io_tile__DOT____Vcellout__mem_fwd_wormhole_to_stream__link_ready_and_o 
        = (1U & ((IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)
                  ? (~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r))
                  : (~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo->__PVT__full_r))));
}
