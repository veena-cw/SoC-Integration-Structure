// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_io_tile_node__Bz1.h"

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io\n"); );
    // Body
    vlSelf->__PVT__io_tile__DOT__cce_id_li = 2U;
    vlSelf->__PVT__io_tile__DOT__lce_id_li = 4U;
    vlSelf->__PVT__io_tile__DOT__id_map__DOT__lce_id1_o = 0U;
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        194, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.lce_link.fwd_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        194, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.lce_link.rev_pump_out.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__3(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__0__KET____DOT__io__3\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.mem_fwd_wormhole_to_stream.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.mem_rev_wormhole_to_stream.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                         & (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.mem_fwd_wormhole_to_stream.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                         & (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.mem_rev_wormhole_to_stream.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.lce_req_wh_to_stream.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.lce_cmd_wh_to_stream.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                         & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.lce_req_wh_to_stream.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                         & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[0].io.io_tile.lce_cmd_wh_to_stream.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___eval_initial__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io\n"); );
    // Body
    vlSelf->__PVT__io_tile__DOT__cce_id_li = 3U;
    vlSelf->__PVT__io_tile__DOT__lce_id_li = 5U;
    vlSelf->__PVT__io_tile__DOT__id_map__DOT__lce_id1_o = 0U;
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        194, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.lce_link.fwd_pump_in.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    VL_WRITEF("## bsg_mem_1r1w: instantiating width_p=        194, els_p=          2, read_write_same_addr_p=          0, harden_p=          0 (%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.lce_link.rev_pump_out.gearbox.fifo.mem_1r1w)\n",
              vlSymsp->name());
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__0(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__0\n"); );
    // Body
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[0U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[1U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[2U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__io_tile__mem_fwd_link_o[3U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__io_tile__mem_fwd_link_o[4U]);
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[1U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[2U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[3U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[4U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[5U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[6U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[7U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_fwd_link_i[8U] 
                         << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__3(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__3\n"); );
    // Body
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[0U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[1U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[1U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[2U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[2U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[3U] 
        = vlSelf->__Vcellout__io_tile__mem_rev_link_o[3U];
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[4U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[0U] 
            << 2U) | vlSelf->__Vcellout__io_tile__mem_rev_link_o[4U]);
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[5U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[0U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[1U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[6U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[1U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[2U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[7U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[2U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[3U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[8U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[3U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[4U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[9U] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[4U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[5U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xaU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[5U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[6U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xbU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[6U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[7U] 
                         << 2U));
    vlSelf->io_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i[0xcU] 
        = ((vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[7U] 
            >> 0x1eU) | (vlSymsp->TOP.testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT____Vcellinp__node__BRA__1__KET____DOT__io__mem_rev_link_i[8U] 
                         << 2U));
}

VL_INLINE_OPT void Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__4(Vtestbench_bp_io_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_io_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__node__BRA__1__KET____DOT__io__4\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.mem_fwd_wormhole_to_stream.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.mem_rev_wormhole_to_stream.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((IData)(vlSelf->io_tile__DOT__mem_fwd_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                         & (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__state_r))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.mem_fwd_wormhole_to_stream.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((IData)(vlSelf->io_tile__DOT__mem_rev_wormhole_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                         & (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__state_r))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.mem_rev_wormhole_to_stream.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.lce_req_wh_to_stream.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((~ (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r)) 
                         & (IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.lce_cmd_wh_to_stream.stream_control.hdr_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((IData)(vlSelf->io_tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                         & (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.lce_req_wh_to_stream.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->__PVT__io_tile__DOT__reset_r)) 
                      & ((IData)(vlSelf->io_tile__DOT__lce_cmd_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i) 
                         & (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r))) 
                     & (0xfU == (IData)(vlSelf->__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n))))) {
        VL_WRITEF("%Ntestbench.wrapper.processor.m.multicore.ic.node[1].io.io_tile.lce_cmd_wh_to_stream.stream_control.data_flit_counter error: counter underflow at time %t\n",
                  vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                  -12);
        Verilated::runFlushCallbacks();
    }
}
