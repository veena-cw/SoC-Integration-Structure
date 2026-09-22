// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_wormhole_router__pi31.h"

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[0].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[1].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[2].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.core_coh_socket.routers[3].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__0__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[0].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__1__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[1].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__2__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[2].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__core_coh_socket__DOT__routers__BRA__3__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.core_coh_socket.routers[3].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[0].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_coh_socket.routers[1].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__0__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[0].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__2(Vtestbench_bsg_wormhole_router__pi31* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vtestbench_bsg_wormhole_router__pi31___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__io_coh_socket__DOT__routers__BRA__1__KET____DOT__router__2\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[2].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__2__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[2].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[1].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__1__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[1].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[4].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__4__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[4].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[3].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__PVT__in_ch__BRA__3__KET____DOT__yumis_li)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[3].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & (0xfU == (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[0].wic.ctr error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSymsp->TOP.testbench__DOT__dut_reset)) 
                      & ((~ (IData)((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)))) 
                         & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))) 
                     & ((0U != (IData)(vlSelf->__PVT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r)) 
                        & (0U != (IData)(vlSelf->__Vcellinp__in_ch__BRA__0__KET____DOT__conc__i)))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_coh_socket.routers[1].router.in_ch[0].wic.ctr error: set and down non-exclusive at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}
