// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_two_fifo__W80.h"

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

extern const VlUnpacked<CData/*3:0*/, 128> Vtestbench__ConstPool__TABLE_h83ca26ff_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5029f386_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h5efd7157_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h70f1aaf3_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtestbench__ConstPool__TABLE_h49ada9e1_0;

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx86;
    __Vtableidx86 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx86 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx86])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx86];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx86])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx86];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx86];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx86];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx87;
    __Vtableidx87 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx87 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx87])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx87];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx87])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx87];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx87];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx87];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx88;
    __Vtableidx88 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx88 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx88])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx88];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx88])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx88];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx88];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx88];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx89;
    __Vtableidx89 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx89 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx89])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx89];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx89])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx89];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx89];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx89];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                               >> 5U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx90;
    __Vtableidx90 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx90 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx90])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx90];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx90])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx90];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx90];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx90];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx91;
    __Vtableidx91 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx91 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx91])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx91];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx91])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx91];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx91];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx91];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx92;
    __Vtableidx92 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx92 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx92])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx92];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx92])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx92];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx92];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx92];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                               >> 5U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx93;
    __Vtableidx93 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx93 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__req_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_req_v_li) 
                                                   & ((~ 
                                                       (0x18U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx93])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx93];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx93])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx93];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx93];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx93];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_req_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx94;
    __Vtableidx94 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx94 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_link__DOT__cmd_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_v_li) 
                                                   & ((~ 
                                                       (0x810U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xbU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx94])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx94];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx94])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx94];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx94];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx94];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__lce_cmd_wh_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx95;
    __Vtableidx95 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx95 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_v_li) 
                                                   & ((~ 
                                                       (6U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xaU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx95])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx95];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx95])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx95];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx95];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx95];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx96;
    __Vtableidx96 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx96 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | ((((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__io_cce__DOT__rev_pump_in.__PVT__gearbox__DOT__fifo__DOT__full_r)) 
                                                & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_v_li) 
                                                   & ((~ 
                                                       (5U 
                                                        >> 
                                                        (0xfU 
                                                         & (vlSelf->data_o[0U] 
                                                            >> 0xaU)))) 
                                                      | ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r) 
                                                         & (1U 
                                                            == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__reset_r)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx96])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx96];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx96])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx96];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx96];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx96];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__link_o[4U] 
                                        >> 1U))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx97;
    __Vtableidx97 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx97 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx97])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx97];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx97])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx97];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx97];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx97];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx98;
    __Vtableidx98 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx98 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx98])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx98];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx98])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx98];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx98];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx98];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx99;
    __Vtableidx99 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx99 = (((IData)(vlSelf->__PVT__full_r) 
                      << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                 << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                            << 4U) 
                                           | (((IData)(
                                                       (0U 
                                                        != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                               << 3U) 
                                              | (((IData)(vlSelf->__PVT__tail_r) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->__PVT__enq_i) 
                                                     << 1U) 
                                                    | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx99])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx99];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx99])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx99];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx99];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx99];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx100;
    __Vtableidx100 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx100 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx100])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx100];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx100])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx100];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx100];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx100];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx101;
    __Vtableidx101 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx101 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx101])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx101];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx101])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx101];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx101];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx101];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx102;
    __Vtableidx102 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx102 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx102])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx102];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx102])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx102];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx102];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx102];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx103;
    __Vtableidx103 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx103 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx103])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx103];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx103])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx103];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx103];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx103];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx104;
    __Vtableidx104 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx104 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx104])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx104];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx104])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx104];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx104];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx104];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                                     >> 5U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx105;
    __Vtableidx105 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xdU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xeU] 
                             >> 6U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                << 0x1aU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xfU] 
                             >> 6U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx105 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__3__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx105])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx105];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx105])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx105];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx105];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx105];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__3__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                                     >> 7U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx106;
    __Vtableidx106 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x10U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x11U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x12U] 
                             >> 8U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                << 0x18U) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x13U] 
                             >> 8U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx106 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__4__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx106])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx106];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx106])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx106];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx106];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx106];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__4__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0x14U] 
                               >> 9U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx107;
    __Vtableidx107 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx107 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx107])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx107];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx107])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx107];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx107];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx107];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx108;
    __Vtableidx108 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx108 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx108])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx108];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx108])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx108];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx108];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx108];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx109;
    __Vtableidx109 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx109 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx109])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx109];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx109])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx109];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx109];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx109];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__0__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
                               >> 5U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                                     >> 1U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__0__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx110;
    __Vtableidx110 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U];
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U];
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx110 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx110])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx110];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx110])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx110];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx110];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx110];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                                     >> 3U)));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__1__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx111;
    __Vtableidx111 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
                             >> 2U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                << 0x1eU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
                             >> 2U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx111 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__1__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx111])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx111];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx111])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx111];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx111];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx111];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Body
    vlSelf->__PVT__enq_i = ((~ (IData)(vlSelf->__PVT__full_r)) 
                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                               >> 5U));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router__in_ch__BRA__2__KET____DOT__twofer__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx112;
    __Vtableidx112 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
                             >> 4U));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
                << 0x1cU) | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io.io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
                             >> 4U));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx112 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0U 
                                                         != (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_socket__DOT__routers__BRA__1__KET____DOT__router.__PVT__in_ch__BRA__2__KET____DOT__yumis_li))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx112])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx112];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx112])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx112];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx112];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx112];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx113;
    __Vtableidx113 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x15U] 
                << 0x16U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x14U] 
                             >> 0xaU));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x16U] 
                << 0x16U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x15U] 
                             >> 0xaU));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x17U] 
                << 0x16U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x16U] 
                             >> 0xaU));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
                << 0x16U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x17U] 
                             >> 0xaU));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx113 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | ((((~ (IData)(vlSymsp->TOP.testbench__DOT__host__DOT__register__DOT__fwd_fifo__DOT__dff_full__DOT__data_r)) 
                                                 & ((IData)(vlSymsp->TOP.testbench__DOT__mem_fwd_v_lo) 
                                                    & ((~ 
                                                        (6U 
                                                         >> 
                                                         (0xfU 
                                                          & (vlSelf->data_o[0U] 
                                                             >> 0xaU)))) 
                                                       | ((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r) 
                                                          & (1U 
                                                             == (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r)))))) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx113])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx113];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx113])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx113];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx113];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx113];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_fwd_mesh_lo[0x18U] 
                                        >> 0xbU))));
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx114;
    __Vtableidx114 = 0;
    CData/*0:0*/ __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    VlWide<4>/*127:0*/ __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    VL_ZERO_W(128, __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0);
    CData/*0:0*/ __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0;
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 0U;
    if (vlSelf->__PVT__enq_i) {
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x15U] 
                << 0x16U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x14U] 
                             >> 0xaU));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x16U] 
                << 0x16U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x15U] 
                             >> 0xaU));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x17U] 
                << 0x16U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x16U] 
                             >> 0xaU));
        __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U] 
            = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x18U] 
                << 0x16U) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x17U] 
                             >> 0xaU));
        __Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 = 1U;
        __Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0 
            = vlSelf->__PVT__tail_r;
    }
    __Vtableidx114 = (((IData)(vlSelf->__PVT__full_r) 
                       << 6U) | (((IData)(vlSelf->__PVT__empty_r) 
                                  << 5U) | (((IData)(vlSelf->__PVT__head_r) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__pr_hdr_yumi_li) 
                                                << 3U) 
                                               | (((IData)(vlSelf->__PVT__tail_r) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->__PVT__enq_i) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)))))));
    if ((1U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx114])) {
        vlSelf->__PVT__tail_r = Vtestbench__ConstPool__TABLE_h5029f386_0
            [__Vtableidx114];
    }
    if ((2U & Vtestbench__ConstPool__TABLE_h83ca26ff_0
         [__Vtableidx114])) {
        vlSelf->__PVT__head_r = Vtestbench__ConstPool__TABLE_h5efd7157_0
            [__Vtableidx114];
    }
    vlSelf->__PVT__empty_r = Vtestbench__ConstPool__TABLE_h70f1aaf3_0
        [__Vtableidx114];
    vlSelf->__PVT__full_r = Vtestbench__ConstPool__TABLE_h49ada9e1_0
        [__Vtableidx114];
    if (__Vdlyvset__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0) {
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][0U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[0U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][1U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[1U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][2U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[2U];
        vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vdlyvdim0__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0][3U] 
            = __Vdlyvval__mem_1r1w__DOT__synth__DOT__nz__DOT__mem__v0[3U];
    }
    vlSelf->data_o[0U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][0U];
    vlSelf->data_o[1U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][1U];
    vlSelf->data_o[2U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][2U];
    vlSelf->data_o[3U] = vlSelf->__PVT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem
        [vlSelf->__PVT__head_r][3U];
}

VL_INLINE_OPT void Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1(Vtestbench_bsg_two_fifo__W80* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bsg_two_fifo__W80___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__hdr_sipo__DOT__fifos__BRA__0__KET____DOT__twofifo__DOT__fifo__1\n"); );
    // Body
    vlSelf->__PVT__enq_i = (1U & ((~ (IData)(vlSelf->__PVT__full_r)) 
                                  & ((~ (IData)(vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                                     & (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_rev_mesh_lo[0x18U] 
                                        >> 0xbU))));
}
