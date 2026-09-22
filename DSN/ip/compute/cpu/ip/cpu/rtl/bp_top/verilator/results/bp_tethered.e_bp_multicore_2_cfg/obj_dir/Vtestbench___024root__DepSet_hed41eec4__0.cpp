// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                           "/home/cw025_jishnu/Documents/black-parrot-clean/external/basejump_stl/bsg_test/bsg_nonsynth_clock_gen.sv", 
                                           22);
        vlSelf->testbench__DOT__tb_clk = (1U & (~ (IData)(vlSelf->testbench__DOT__tb_clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__3\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "/home/cw025_jishnu/Documents/black-parrot-clean/external/basejump_stl/bsg_test/bsg_nonsynth_clock_gen.sv", 
                                           22);
        vlSelf->testbench__DOT__dut_clk = (1U & (~ (IData)(vlSelf->testbench__DOT__dut_clk)));
    }
}

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__state_n 
        = ((2U == (IData)(vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__state_r))
            ? ((IData)(vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__plusargs_en_li)
                ? 1U : (IData)(vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__state_r))
            : ((1U == (IData)(vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__state_r))
                ? ((IData)(vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__plusargs_en_li)
                    ? (IData)(vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__state_r)
                    : 2U) : ((0U != vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__inited)
                              ? 2U : (IData)(vlSelf->testbench__DOT__dram__DOT__dram_tracer__DOT__state_r))));
}

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                 >> 6U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                 >> 1U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect 
        = (0xfU & ((~ (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                             >> 9U))) & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                                         >> 8U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo 
        = (3U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect) 
                  >> 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect)));
}

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__2\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                 >> 6U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                 >> 1U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect 
        = (0xfU & ((~ (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                             >> 9U))) & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                                         >> 8U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo 
        = (3U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect) 
                  >> 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect)));
}

extern const VlWide<9>/*287:0*/ Vtestbench__ConstPool__CONST_h52851b57_0;
extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h00a540f1_0;

VL_INLINE_OPT void Vtestbench___024root___act_sequent__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_sequent__TOP__3\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hc032d2f1__0;
    VlWide<17>/*543:0*/ __Vtemp_hc032d2f1__1;
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
              >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_up_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_up_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o = 0U;
    vlSelf->testbench__DOT__dram__DOT__state_n = vlSelf->testbench__DOT__dram__DOT__state_r;
    vlSelf->testbench__DOT__dram__DOT__up_li = 0U;
    vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li = 0U;
    if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o 
                = (((~ ((IData)(1U) << (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))) 
                    & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o)) 
                   | (3U & ((1U & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0xcU] 
                                   >> 4U)) << (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))));
            if ((1U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o) 
                        & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o)) 
                       >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li 
                    = (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_count_lo));
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_up_li 
                    = (3U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_count_lo));
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n 
                    = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li)
                        ? 1U : 3U);
            }
        } else if ((0x10U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0xcU])) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 3U;
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((0U != (3U & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o)))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 2U;
        }
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 1U;
    }
    if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o 
                = (((~ ((IData)(1U) << (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))) 
                    & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o)) 
                   | (3U & ((1U & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0x10U] 
                                   >> 6U)) << (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))));
            if ((1U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o) 
                        >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)) 
                       & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                          >> ((IData)(2U) + (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)))))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li 
                    = (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_count_lo));
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_up_li 
                    = (3U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_count_lo));
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n 
                    = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li)
                        ? 1U : 3U);
            }
        } else if ((0x40U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0x10U])) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 3U;
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((0U != (3U & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                          >> 2U)))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 2U;
        }
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 1U;
    }
    vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o = 0U;
    vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o = 0U;
    vlSelf->testbench__DOT__dram__DOT__mem_read = 0U;
    vlSelf->testbench__DOT__dram__DOT__mem_write = 0U;
    if ((0U == (IData)(vlSelf->testbench__DOT__dram__DOT__state_r))) {
        vlSelf->testbench__DOT__dram__DOT__mem_read 
            = (1U & ((~ (IData)(vlSelf->testbench__DOT__dram__DOT__two_fifo__DOT__empty_r)) 
                     & (~ (IData)((vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o 
                                   >> 0x27U)))));
        vlSelf->testbench__DOT__dram__DOT__state_n 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__two_fifo__DOT__empty_r)
                ? (IData)(vlSelf->testbench__DOT__dram__DOT__state_r)
                : ((IData)(vlSelf->testbench__DOT__dram__DOT__mem_read)
                    ? 1U : 2U));
    } else if ((1U == (IData)(vlSelf->testbench__DOT__dram__DOT__state_r))) {
        vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o 
            = ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))));
        vlSelf->testbench__DOT__dram__DOT__up_li = 
            (1U & (((((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o) 
                      << 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o)) 
                    >> (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o))) 
                   & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                      >> (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))));
        vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__up_li) 
               & (3U == (IData)(vlSelf->testbench__DOT__dram__DOT__count_lo)));
        vlSelf->testbench__DOT__dram__DOT__mem_read 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__up_li) 
               & (3U != (IData)(vlSelf->testbench__DOT__dram__DOT__count_lo)));
        vlSelf->testbench__DOT__dram__DOT__state_n 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li)
                ? 0U : (IData)(vlSelf->testbench__DOT__dram__DOT__state_r));
    } else if ((2U == (IData)(vlSelf->testbench__DOT__dram__DOT__state_r))) {
        vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o 
            = (((~ ((IData)(1U) << (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))) 
                & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o)) 
               | (0xfU & ((1U & ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_v_o) 
                                   << 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_v_o)) 
                                 >> (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))) 
                          << (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))));
        vlSelf->testbench__DOT__dram__DOT__up_li = 
            (1U & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
                   >> (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o))));
        vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__up_li) 
               & (3U == (IData)(vlSelf->testbench__DOT__dram__DOT__count_lo)));
        vlSelf->testbench__DOT__dram__DOT__mem_write 
            = vlSelf->testbench__DOT__dram__DOT__up_li;
        vlSelf->testbench__DOT__dram__DOT__state_n 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li)
                ? 0U : (IData)(vlSelf->testbench__DOT__dram__DOT__state_r));
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_yumi_li = 0U;
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            if ((0U != (3U & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o)))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_yumi_li = 1U;
            }
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_yumi_li = 0U;
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            if ((0U != (3U & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                              >> 2U)))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_yumi_li = 1U;
            }
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
        = (1U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = (0x1ffU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[2U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[3U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = (0x10U | (0xffffffc3U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = ((0xfffffffcU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]) 
           | (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__src_cord_r) 
                    >> (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                              << 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = ((0xfffffe3fU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]) 
           | (((5U >= (7U & ((IData)(3U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))))
                ? (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__src_cid_r) 
                         >> (7U & ((IData)(3U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)))))
                : 0U) << 6U));
    if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = ((1U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]) 
                   | (2U & (((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)) 
                            << 1U)));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                = (((0U == (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                     << 7U))) ? 0U : 
                    (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                     ((IData)(1U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                           << 2U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                             << 2U))] >> (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                   << 7U))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                = (((0U == (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                     << 7U))) ? 0U : 
                    (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                     ((IData)(2U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                           << 2U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(1U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 2U)))] 
                      >> (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                   << 7U))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                = (((0U == (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                     << 7U))) ? 0U : 
                    (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                     ((IData)(3U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                           << 2U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(2U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 2U)))] 
                      >> (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                   << 7U))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                = (((0U == (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                     << 7U))) ? 0U : 
                    (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                     ((IData)(4U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                           << 2U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(3U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 2U)))] 
                      >> (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                   << 7U))));
        } else {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = (2U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[1U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[2U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[3U];
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
        = (1U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = (0x1ffU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[2U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[3U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = (0x10U | (0xffffffc3U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = ((0xfffffffcU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]) 
           | (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__src_cord_r) 
                    >> (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                              << 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = ((0xfffffe3fU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]) 
           | (((5U >= (7U & ((IData)(3U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))))
                ? (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__src_cid_r) 
                         >> (7U & ((IData)(3U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)))))
                : 0U) << 6U));
    if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = ((1U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]) 
                   | (2U & (((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                             >> ((IData)(2U) + (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))) 
                            << 1U)));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                = (((0U == (0x1fU & ((IData)(0x100U) 
                                     + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                 << 7U)))))
                     ? 0U : (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                             ((IData)(1U) + (((IData)(0x100U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                    << 7U))) 
                                             >> 5U))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      (((IData)(0x100U) + (0xffU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))) 
                       >> 5U)] >> (0x1fU & ((IData)(0x100U) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                  << 7U))))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                = (((0U == (0x1fU & ((IData)(0x100U) 
                                     + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                 << 7U)))))
                     ? 0U : (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                             ((IData)(2U) + (((IData)(0x100U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                    << 7U))) 
                                             >> 5U))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(1U) + (((IData)(0x100U) 
                                       + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                   << 7U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                = (((0U == (0x1fU & ((IData)(0x100U) 
                                     + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                 << 7U)))))
                     ? 0U : (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                             ((IData)(3U) + (((IData)(0x100U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                    << 7U))) 
                                             >> 5U))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(2U) + (((IData)(0x100U) 
                                       + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                   << 7U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                = (((0U == (0x1fU & ((IData)(0x100U) 
                                     + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                 << 7U)))))
                     ? 0U : (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                             ((IData)(4U) + (((IData)(0x100U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                    << 7U))) 
                                             >> 5U))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(3U) + (((IData)(0x100U) 
                                       + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                   << 7U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))));
        } else {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = (2U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[1U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[2U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[3U];
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_yumi_i 
        = ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_v_o));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____VdfgTmp_he721d02c__0 
        = (IData)((((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
                    >> 3U) & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_v_o) 
                              >> 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____VdfgTmp_h9c281bd5__0 
        = (1U & (((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
                  >> 2U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_v_o)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_up_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_clear_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
        = (2U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
    if ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r)))) {
                if ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_yumi_i) 
                           >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))) {
                    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_up_li 
                        = (3U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_count_lo));
                    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                        = (1U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
                }
            }
        }
        if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
        } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
        } else if ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_yumi_i) 
                          >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_clear_li 
                = (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_count_lo));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
                = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_clear_li)
                    ? 1U : 4U);
        }
    } else if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
            = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))
                ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                          >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                    ? 4U : 3U) : ((0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                   ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                                       ? 1U : 2U) : 
                                  ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                    ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                                              >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                                        ? 4U : 2U) : 
                                   ((3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                     ? ((0x20U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0xcU])
                                         ? 3U : 2U)
                                     : 1U))));
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
            = ((2U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]) 
               | (1U & ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))
                         ? ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                            >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r))
                         : (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)) 
                            | (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__opcode_r))))));
    } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        if ((0x20U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0xcU])) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 2U;
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = (1U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
        }
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_yumi_i 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____VdfgTmp_he721d02c__0) 
            << 1U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____VdfgTmp_h9c281bd5__0));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_up_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_clear_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
        = (2U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
    if ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r)))) {
                if ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_yumi_i) 
                           >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))) {
                    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_up_li 
                        = (3U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_count_lo));
                    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                        = (1U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
                }
            }
        }
        if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
        } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
        } else if ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_yumi_i) 
                          >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_clear_li 
                = (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_count_lo));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
                = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_clear_li)
                    ? 1U : 4U);
        }
    } else if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
            = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))
                ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                          >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                    ? 4U : 3U) : ((0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                   ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                                       ? 1U : 2U) : 
                                  ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                    ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                                              >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                                        ? 4U : 2U) : 
                                   ((3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                     ? ((0x80U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0x10U])
                                         ? 3U : 2U)
                                     : 1U))));
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
            = ((2U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]) 
               | (1U & ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))
                         ? ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                            >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r))
                         : (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)) 
                            | (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__opcode_r))))));
    } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        if ((0x80U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0x10U])) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 2U;
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = (1U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
        }
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[8U] 
        = ((0xfU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[8U]) 
           | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
              << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[9U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
            >> 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xaU] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
            >> 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xbU] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
            >> 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xcU] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
            >> 0x1cU) | ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                          << 6U) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                                    << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xdU] 
        = (((0xfU & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                     >> 0x1aU)) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                                   >> 0x1cU)) | ((0x30U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                                                     >> 0x1aU)) 
                                                 | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                                                    << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xeU] 
        = ((0xfU & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                    >> 0x1aU)) | ((0x30U & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                                            >> 0x1aU)) 
                                  | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                                     << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xfU] 
        = ((0xfU & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                    >> 0x1aU)) | ((0x30U & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                                            >> 0x1aU)) 
                                  | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                                     << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0x10U] 
        = (0xffU & ((0xfU & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                             >> 0x1aU)) | ((0x30U & 
                                            (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                                             >> 0x1aU)) 
                                           | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                                              << 6U))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[9U] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[8U] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[1U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xaU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[9U] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[2U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xbU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xaU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[3U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xcU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xbU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[4U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xdU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xcU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[5U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xeU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xdU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[6U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xfU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xeU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[7U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0x10U] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xfU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[8U] 
        = ((0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[0U] 
                            << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[8U])) 
           | (Vtestbench__ConstPool__CONST_h52851b57_0[8U] 
              & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0x10U] 
                 >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[9U] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[0U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[9U])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[1U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[9U])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xaU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[1U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xaU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[2U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xaU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xbU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[2U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xbU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[3U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xbU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xcU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[3U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xcU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[4U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xcU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xdU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[4U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xdU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[5U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xdU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xeU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[5U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xeU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[6U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xeU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xfU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[6U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xfU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[7U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xfU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0x10U] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[7U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0x10U])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[8U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0x10U])));
    VL_SHIFTL_WWI(520,520,32, __Vtemp_hc032d2f1__0, vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
    VL_SHIFTL_WWI(520,520,32, __Vtemp_hc032d2f1__1, vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[0U] 
        = (((Vtestbench__ConstPool__CONST_h00a540f1_0[5U] 
             & __Vtemp_hc032d2f1__1[5U]) << 0x1eU) 
           | ((Vtestbench__ConstPool__CONST_h00a540f1_0[4U] 
               & __Vtemp_hc032d2f1__1[4U]) >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[1U] 
        = (((Vtestbench__ConstPool__CONST_h00a540f1_0[6U] 
             & __Vtemp_hc032d2f1__1[6U]) << 0x1eU) 
           | ((Vtestbench__ConstPool__CONST_h00a540f1_0[5U] 
               & __Vtemp_hc032d2f1__1[5U]) >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[2U] 
        = (((Vtestbench__ConstPool__CONST_h00a540f1_0[7U] 
             & __Vtemp_hc032d2f1__1[7U]) << 0x1eU) 
           | ((Vtestbench__ConstPool__CONST_h00a540f1_0[6U] 
               & __Vtemp_hc032d2f1__1[6U]) >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[3U] 
        = (((Vtestbench__ConstPool__CONST_h00a540f1_0[8U] 
             & __Vtemp_hc032d2f1__1[8U]) << 0x1eU) 
           | ((Vtestbench__ConstPool__CONST_h00a540f1_0[7U] 
               & __Vtemp_hc032d2f1__1[7U]) >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[4U] 
        = ((((Vtestbench__ConstPool__CONST_h00a540f1_0[0xdU] 
              & __Vtemp_hc032d2f1__0[0xdU]) << 0x1cU) 
            | (0xffffffcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xcU] 
                              & __Vtemp_hc032d2f1__0[0xcU]) 
                             >> 4U))) | (3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[8U] 
                                                & __Vtemp_hc032d2f1__1[8U]) 
                                               >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[5U] 
        = ((3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xdU] 
                   & __Vtemp_hc032d2f1__0[0xdU]) >> 4U)) 
           | (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xeU] 
                & __Vtemp_hc032d2f1__0[0xeU]) << 0x1cU) 
              | (0xffffffcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xdU] 
                                & __Vtemp_hc032d2f1__0[0xdU]) 
                               >> 4U))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[6U] 
        = ((3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xeU] 
                   & __Vtemp_hc032d2f1__0[0xeU]) >> 4U)) 
           | (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xfU] 
                & __Vtemp_hc032d2f1__0[0xfU]) << 0x1cU) 
              | (0xffffffcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xeU] 
                                & __Vtemp_hc032d2f1__0[0xeU]) 
                               >> 4U))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[7U] 
        = ((3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xfU] 
                   & __Vtemp_hc032d2f1__0[0xfU]) >> 4U)) 
           | (((Vtestbench__ConstPool__CONST_h00a540f1_0[0x10U] 
                & __Vtemp_hc032d2f1__0[0x10U]) << 0x1cU) 
              | (0xffffffcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xfU] 
                                & __Vtemp_hc032d2f1__0[0xfU]) 
                               >> 4U))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[8U] 
        = ((3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0x10U] 
                   & __Vtemp_hc032d2f1__0[0x10U]) >> 4U)) 
           | (0xcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0x10U] 
                       & __Vtemp_hc032d2f1__0[0x10U]) 
                      >> 4U)));
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__v 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__v)) 
           | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
               << 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__v));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__addr 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__addr)) 
           | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__v) 
                    << 1U)));
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__2(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__2\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__v 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__v)) 
           | (((IData)((0U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs))) 
               << 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs 
        = (3U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__v));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__addr 
        = ((8U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__addr)) 
           | (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__v) 
                    << 1U)));
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__3\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t 
        = ((0xf00U & ((0xffffff00U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                                      << 4U)) | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                 << 8U))) 
           | ((0xf0U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                         | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                        << 4U)) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0) 
                                    << 2U) | (3U & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o)))));
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__4(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__4\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t 
        = ((0xf00U & ((0xffffff00U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                                      << 4U)) | ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                 << 8U))) 
           | ((0xf0U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t) 
                         | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                        << 4U)) | (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0) 
                                    << 2U) | (3U & 
                                              ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                                               >> 2U)))));
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__5(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__5\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r;
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            if ((0U != (3U & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                              >> 2U)))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_n 
                    = ((0U == (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo) 
                                - (IData)(1U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo))) 
                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__addr) 
                          >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__6(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__6\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r;
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            if ((0U != (3U & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o)))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_n 
                    = ((0U == (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo) 
                                - (IData)(1U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo))) 
                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__addr) 
                          >> 2U));
            }
        }
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Body
    VL_WRITEF("__________ ___________  _______________________________\n\\______   \\\\_   _____/ /   _____/\\_   _____/\\__    ___/\n |       _/ |    __)_  \\_____  \\  |    __)_   |    |   \n |    |   \\ |        \\ /        \\ |        \\  |    |  1->0 time = %10#\n |____|_  //_______  //_______  //_______  /  |____|   \n ASYNC  \\/         \\/         \\/         \\/            \n",
              32,(IData)(VL_TIME_UNITED_Q(1)));
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__1\n"); );
    // Body
    VL_WRITEF("__________ ___________  _______________________________\n\\______   \\\\_   _____/ /   _____/\\_   _____/\\__    ___/\n |       _/ |    __)_  \\_____  \\  |    __)_   |    |   \n |    |   \\ |        \\ /        \\ |        \\  |    |  0->1 time = %10#\n |____|_  //_______  //_______  //_______  /  |____|   \n ASYNC  \\/         \\/         \\/         \\/            \n",
              32,(IData)(VL_TIME_UNITED_Q(1)));
    Verilated::runFlushCallbacks();
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__7(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__7\n"); );
    // Init
    CData/*1:0*/ __Vdly__testbench__DOT__tb_reset_gen__DOT__ctr_lo_r;
    __Vdly__testbench__DOT__tb_reset_gen__DOT__ctr_lo_r = 0;
    // Body
    __Vdly__testbench__DOT__tb_reset_gen__DOT__ctr_lo_r 
        = vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_lo_r;
    if ((1U & (~ (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__phase_lo_r)))) {
        __Vdly__testbench__DOT__tb_reset_gen__DOT__ctr_lo_r 
            = (3U & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_lo_r)));
    }
    if ((0U == (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_lo_r))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__phase_hi_r)))) {
            vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_hi_r 
                = (0x3fU & ((IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_hi_r) 
                            + (0U == (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_lo_r))));
        }
    }
    vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_lo_r 
        = __Vdly__testbench__DOT__tb_reset_gen__DOT__ctr_lo_r;
    vlSelf->testbench__DOT__tb_reset_gen__DOT__phase_lo_r 
        = (0U == (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_lo_r));
    vlSelf->testbench__DOT__tb_reset_gen__DOT__phase_hi_r 
        = (0x32U == (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_hi_r));
    vlSelf->testbench__DOT__tb_reset = ((0U == (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_lo_r)) 
                                        ^ (0x32U == (IData)(vlSelf->testbench__DOT__tb_reset_gen__DOT__ctr_hi_r)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__9(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__9\n"); );
    // Body
    vlSelf->testbench__DOT__dut_reset = ((0U == (IData)(vlSelf->testbench__DOT__dut_reset_gen__DOT__ctr_lo_r)) 
                                         ^ (0x14U == (IData)(vlSelf->testbench__DOT__dut_reset_gen__DOT__ctr_hi_r)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hc032d2f1__0;
    VlWide<17>/*543:0*/ __Vtemp_hc032d2f1__1;
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
              >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a290b4__0 
        = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr0__DOT__fi2__DOT__thermocode_r) 
           & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_up_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_up_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o = 0U;
    vlSelf->testbench__DOT__dram__DOT__state_n = vlSelf->testbench__DOT__dram__DOT__state_r;
    vlSelf->testbench__DOT__dram__DOT__up_li = 0U;
    vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li = 0U;
    if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o 
                = (((~ ((IData)(1U) << (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))) 
                    & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o)) 
                   | (3U & ((1U & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0xcU] 
                                   >> 4U)) << (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))));
            if ((1U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o) 
                        & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o)) 
                       >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li 
                    = (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_count_lo));
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_up_li 
                    = (3U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_count_lo));
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n 
                    = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li)
                        ? 1U : 3U);
            }
        } else if ((0x10U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0xcU])) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 3U;
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((0U != (3U & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o)))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 2U;
        }
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 1U;
    }
    if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o 
                = (((~ ((IData)(1U) << (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))) 
                    & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o)) 
                   | (3U & ((1U & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0x10U] 
                                   >> 6U)) << (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))));
            if ((1U & (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o) 
                        >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)) 
                       & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                          >> ((IData)(2U) + (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)))))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li 
                    = (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_count_lo));
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_up_li 
                    = (3U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_count_lo));
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n 
                    = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_clear_li)
                        ? 1U : 3U);
            }
        } else if ((0x40U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0x10U])) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 3U;
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((0U != (3U & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                          >> 2U)))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 2U;
        }
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_n = 1U;
    }
    vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o = 0U;
    vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o = 0U;
    vlSelf->testbench__DOT__dram__DOT__mem_read = 0U;
    vlSelf->testbench__DOT__dram__DOT__mem_write = 0U;
    if ((0U == (IData)(vlSelf->testbench__DOT__dram__DOT__state_r))) {
        vlSelf->testbench__DOT__dram__DOT__mem_read 
            = (1U & ((~ (IData)(vlSelf->testbench__DOT__dram__DOT__two_fifo__DOT__empty_r)) 
                     & (~ (IData)((vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o 
                                   >> 0x27U)))));
        vlSelf->testbench__DOT__dram__DOT__state_n 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__two_fifo__DOT__empty_r)
                ? (IData)(vlSelf->testbench__DOT__dram__DOT__state_r)
                : ((IData)(vlSelf->testbench__DOT__dram__DOT__mem_read)
                    ? 1U : 2U));
    } else if ((1U == (IData)(vlSelf->testbench__DOT__dram__DOT__state_r))) {
        vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o 
            = ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
               | (0xfU & ((IData)(1U) << (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))));
        vlSelf->testbench__DOT__dram__DOT__up_li = 
            (1U & (((((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o) 
                      << 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_ready_and_o)) 
                    >> (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o))) 
                   & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                      >> (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))));
        vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__up_li) 
               & (3U == (IData)(vlSelf->testbench__DOT__dram__DOT__count_lo)));
        vlSelf->testbench__DOT__dram__DOT__mem_read 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__up_li) 
               & (3U != (IData)(vlSelf->testbench__DOT__dram__DOT__count_lo)));
        vlSelf->testbench__DOT__dram__DOT__state_n 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li)
                ? 0U : (IData)(vlSelf->testbench__DOT__dram__DOT__state_r));
    } else if ((2U == (IData)(vlSelf->testbench__DOT__dram__DOT__state_r))) {
        vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o 
            = (((~ ((IData)(1U) << (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))) 
                & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o)) 
               | (0xfU & ((1U & ((((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_v_o) 
                                   << 2U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_v_o)) 
                                 >> (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))) 
                          << (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o)))));
        vlSelf->testbench__DOT__dram__DOT__up_li = 
            (1U & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
                   >> (3U & (IData)(vlSelf->testbench__DOT__dram__DOT____Vcellout__two_fifo__data_o))));
        vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__up_li) 
               & (3U == (IData)(vlSelf->testbench__DOT__dram__DOT__count_lo)));
        vlSelf->testbench__DOT__dram__DOT__mem_write 
            = vlSelf->testbench__DOT__dram__DOT__up_li;
        vlSelf->testbench__DOT__dram__DOT__state_n 
            = ((IData)(vlSelf->testbench__DOT__dram__DOT__dma_pkt_yumi_li)
                ? 0U : (IData)(vlSelf->testbench__DOT__dram__DOT__state_r));
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_yumi_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_yumi_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r;
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            if ((0U != (3U & (IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o)))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_yumi_li = 1U;
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_n 
                    = ((0U == (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo) 
                                - (IData)(1U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo))) 
                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__addr) 
                          >> 2U));
            }
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r;
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            if ((0U != (3U & ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                              >> 2U)))) {
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_yumi_li = 1U;
                vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_n 
                    = ((0U == (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo) 
                                - (IData)(1U)) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__rr_grants_lo))) 
                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__eoh__DOT__addr) 
                          >> 2U));
            }
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
        = (1U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = (0x1ffU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[2U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[3U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = (0x10U | (0xffffffc3U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = ((0xfffffffcU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]) 
           | (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__src_cord_r) 
                    >> (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                              << 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = ((0xfffffe3fU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]) 
           | (((5U >= (7U & ((IData)(3U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))))
                ? (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__src_cid_r) 
                         >> (7U & ((IData)(3U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)))))
                : 0U) << 6U));
    if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = ((1U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]) 
                   | (2U & (((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)) 
                            << 1U)));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                = (((0U == (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                     << 7U))) ? 0U : 
                    (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                     ((IData)(1U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                           << 2U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                             << 2U))] >> (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                   << 7U))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                = (((0U == (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                     << 7U))) ? 0U : 
                    (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                     ((IData)(2U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                           << 2U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(1U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 2U)))] 
                      >> (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                   << 7U))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                = (((0U == (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                     << 7U))) ? 0U : 
                    (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                     ((IData)(3U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                           << 2U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(2U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 2U)))] 
                      >> (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                   << 7U))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                = (((0U == (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                     << 7U))) ? 0U : 
                    (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                     ((IData)(4U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                           << 2U)))] 
                     << ((IData)(0x20U) - (0x1fU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(3U) + (4U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 2U)))] 
                      >> (0x1fU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                   << 7U))));
        } else {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = (2U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[1U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[2U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[3U];
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
        = (1U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = (0x1ffU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[1U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[2U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[3U] = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = (0x10U | (0xffffffc3U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = ((0xfffffffcU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]) 
           | (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__src_cord_r) 
                    >> (3U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                              << 1U)))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U] 
        = ((0xfffffe3fU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U]) 
           | (((5U >= (7U & ((IData)(3U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))))
                ? (7U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__src_cid_r) 
                         >> (7U & ((IData)(3U) * (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r)))))
                : 0U) << 6U));
    if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = ((1U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]) 
                   | (2U & (((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_v_o) 
                             >> ((IData)(2U) + (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r))) 
                            << 1U)));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                = (((0U == (0x1fU & ((IData)(0x100U) 
                                     + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                 << 7U)))))
                     ? 0U : (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                             ((IData)(1U) + (((IData)(0x100U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                    << 7U))) 
                                             >> 5U))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      (((IData)(0x100U) + (0xffU & 
                                           ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                            << 7U))) 
                       >> 5U)] >> (0x1fU & ((IData)(0x100U) 
                                            + (0xffU 
                                               & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                  << 7U))))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                = (((0U == (0x1fU & ((IData)(0x100U) 
                                     + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                 << 7U)))))
                     ? 0U : (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                             ((IData)(2U) + (((IData)(0x100U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                    << 7U))) 
                                             >> 5U))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(1U) + (((IData)(0x100U) 
                                       + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                   << 7U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                = (((0U == (0x1fU & ((IData)(0x100U) 
                                     + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                 << 7U)))))
                     ? 0U : (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                             ((IData)(3U) + (((IData)(0x100U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                    << 7U))) 
                                             >> 5U))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(2U) + (((IData)(0x100U) 
                                       + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                   << 7U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                = (((0U == (0x1fU & ((IData)(0x100U) 
                                     + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                 << 7U)))))
                     ? 0U : (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                             ((IData)(4U) + (((IData)(0x100U) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                    << 7U))) 
                                             >> 5U))] 
                             << ((IData)(0x20U) - (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))))) 
                   | (vlSelf->testbench__DOT____Vcellout__dram__dma_data_o[
                      ((IData)(3U) + (((IData)(0x100U) 
                                       + (0xffU & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                   << 7U))) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(0x100U) 
                                                      + 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__recv_cache_id_r) 
                                                          << 7U))))));
        } else {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = (2U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[0U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[1U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[2U];
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__header_flit_out[3U];
        }
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_yumi_i 
        = ((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
           & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_v_o));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____VdfgTmp_he721d02c__0 
        = (IData)((((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
                    >> 3U) & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_v_o) 
                              >> 1U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____VdfgTmp_h9c281bd5__0 
        = (1U & (((IData)(vlSelf->testbench__DOT____Vcellout__dram__dma_data_yumi_o) 
                  >> 2U) & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_v_o)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_up_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_clear_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
        = (2U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
    if ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r)))) {
                if ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_yumi_i) 
                           >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))) {
                    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_up_li 
                        = (3U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_count_lo));
                    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                        = (1U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
                }
            }
        }
        if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
        } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
        } else if ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_data_yumi_i) 
                          >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_clear_li 
                = (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_count_lo));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
                = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_clear_li)
                    ? 1U : 4U);
        }
    } else if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
            = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))
                ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                          >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                    ? 4U : 3U) : ((0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                   ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                                       ? 1U : 2U) : 
                                  ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                    ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                                              >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                                        ? 4U : 2U) : 
                                   ((3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                     ? ((0x20U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0xcU])
                                         ? 3U : 2U)
                                     : 1U))));
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
            = ((2U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]) 
               | (1U & ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))
                         ? ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                            >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r))
                         : (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)) 
                            | (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__opcode_r))))));
    } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        if ((0x20U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0xcU])) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 2U;
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = (1U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
        }
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_yumi_i 
        = (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____VdfgTmp_he721d02c__0) 
            << 1U) | (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____VdfgTmp_h9c281bd5__0));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_up_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
        = vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_clear_li = 0U;
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
        = (2U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
    if ((4U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r)))) {
                if ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_yumi_i) 
                           >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))) {
                    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_up_li 
                        = (3U != (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_count_lo));
                    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                        = (1U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
                }
            }
        }
        if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
        } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
        } else if ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_data_yumi_i) 
                          >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_clear_li 
                = (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_count_lo));
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
                = ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_clear_li)
                    ? 1U : 4U);
        }
    } else if ((2U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n 
            = ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))
                ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                          >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                    ? 4U : 3U) : ((0U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                   ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                                       ? 1U : 2U) : 
                                  ((2U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                    ? ((1U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                                              >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)))
                                        ? 4U : 2U) : 
                                   ((3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__opcode_r))
                                     ? ((0x80U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0x10U])
                                         ? 3U : 2U)
                                     : 1U))));
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
            = ((2U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]) 
               | (1U & ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))
                         ? ((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                            >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r))
                         : (((IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellinp__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__dma_pkt_yumi_i) 
                             >> (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_cache_id_r)) 
                            | (3U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__opcode_r))))));
    } else if ((1U & (IData)(vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_r))) {
        if ((0x80U & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT____Vcellout__m__DOT__multicore__dma_link_o[0x10U])) {
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 2U;
            vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                = (1U | vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U]);
        }
    } else {
        vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__send_state_n = 1U;
    }
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[8U] 
        = ((0xfU & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[8U]) 
           | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
              << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[9U] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
            >> 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xaU] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
            >> 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xbU] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
            >> 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                         << 4U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xcU] 
        = ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
            >> 0x1cU) | ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                          << 6U) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                                    << 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xdU] 
        = (((0xfU & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                     >> 0x1aU)) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__0__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                                   >> 0x1cU)) | ((0x30U 
                                                  & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[0U] 
                                                     >> 0x1aU)) 
                                                 | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                                                    << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xeU] 
        = ((0xfU & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                    >> 0x1aU)) | ((0x30U & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[1U] 
                                            >> 0x1aU)) 
                                  | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                                     << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xfU] 
        = ((0xfU & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                    >> 0x1aU)) | ((0x30U & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[2U] 
                                            >> 0x1aU)) 
                                  | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                                     << 6U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0x10U] 
        = (0xffU & ((0xfU & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                             >> 0x1aU)) | ((0x30U & 
                                            (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[3U] 
                                             >> 0x1aU)) 
                                           | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__column__BRA__1__KET____DOT__wh_to_cache_dma__DOT__wh_link_sif_out[4U] 
                                              << 6U))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[0U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[9U] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[8U] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[1U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[1U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xaU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[9U] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[2U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[2U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xbU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xaU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[3U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[3U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xcU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xbU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[4U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[4U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xdU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xcU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[5U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[5U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xeU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xdU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[6U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[6U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xfU] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xeU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[7U] 
        = (Vtestbench__ConstPool__CONST_h52851b57_0[7U] 
           & ((vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0x10U] 
               << 0x1cU) | (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0xfU] 
                            >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[8U] 
        = ((0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[0U] 
                            << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[8U])) 
           | (Vtestbench__ConstPool__CONST_h52851b57_0[8U] 
              & (vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_li[0x10U] 
                 >> 4U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[9U] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[0U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[9U])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[1U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[9U])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xaU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[1U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xaU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[2U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xaU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xbU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[2U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xbU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[3U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xbU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xcU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[3U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xcU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[4U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xcU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xdU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[4U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xdU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[5U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xdU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xeU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[5U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xeU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[6U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xeU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0xfU] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[6U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xfU])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[7U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0xfU])));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o[0x10U] 
        = ((0xfU & ((Vtestbench__ConstPool__CONST_h52851b57_0[7U] 
                     >> 0x1cU) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0x10U])) 
           | (0xfffffff0U & ((Vtestbench__ConstPool__CONST_h52851b57_0[8U] 
                              << 4U) & vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_ver_link_lo[0x10U])));
    VL_SHIFTL_WWI(520,520,32, __Vtemp_hc032d2f1__0, vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
    VL_SHIFTL_WWI(520,520,32, __Vtemp_hc032d2f1__1, vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT____Vcellout__mc__dma_link_o, 0x104U);
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[0U] 
        = (((Vtestbench__ConstPool__CONST_h00a540f1_0[5U] 
             & __Vtemp_hc032d2f1__1[5U]) << 0x1eU) 
           | ((Vtestbench__ConstPool__CONST_h00a540f1_0[4U] 
               & __Vtemp_hc032d2f1__1[4U]) >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[1U] 
        = (((Vtestbench__ConstPool__CONST_h00a540f1_0[6U] 
             & __Vtemp_hc032d2f1__1[6U]) << 0x1eU) 
           | ((Vtestbench__ConstPool__CONST_h00a540f1_0[5U] 
               & __Vtemp_hc032d2f1__1[5U]) >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[2U] 
        = (((Vtestbench__ConstPool__CONST_h00a540f1_0[7U] 
             & __Vtemp_hc032d2f1__1[7U]) << 0x1eU) 
           | ((Vtestbench__ConstPool__CONST_h00a540f1_0[6U] 
               & __Vtemp_hc032d2f1__1[6U]) >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[3U] 
        = (((Vtestbench__ConstPool__CONST_h00a540f1_0[8U] 
             & __Vtemp_hc032d2f1__1[8U]) << 0x1eU) 
           | ((Vtestbench__ConstPool__CONST_h00a540f1_0[7U] 
               & __Vtemp_hc032d2f1__1[7U]) >> 2U));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[4U] 
        = ((((Vtestbench__ConstPool__CONST_h00a540f1_0[0xdU] 
              & __Vtemp_hc032d2f1__0[0xdU]) << 0x1cU) 
            | (0xffffffcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xcU] 
                              & __Vtemp_hc032d2f1__0[0xcU]) 
                             >> 4U))) | (3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[8U] 
                                                & __Vtemp_hc032d2f1__1[8U]) 
                                               >> 2U)));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[5U] 
        = ((3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xdU] 
                   & __Vtemp_hc032d2f1__0[0xdU]) >> 4U)) 
           | (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xeU] 
                & __Vtemp_hc032d2f1__0[0xeU]) << 0x1cU) 
              | (0xffffffcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xdU] 
                                & __Vtemp_hc032d2f1__0[0xdU]) 
                               >> 4U))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[6U] 
        = ((3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xeU] 
                   & __Vtemp_hc032d2f1__0[0xeU]) >> 4U)) 
           | (((Vtestbench__ConstPool__CONST_h00a540f1_0[0xfU] 
                & __Vtemp_hc032d2f1__0[0xfU]) << 0x1cU) 
              | (0xffffffcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xeU] 
                                & __Vtemp_hc032d2f1__0[0xeU]) 
                               >> 4U))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[7U] 
        = ((3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xfU] 
                   & __Vtemp_hc032d2f1__0[0xfU]) >> 4U)) 
           | (((Vtestbench__ConstPool__CONST_h00a540f1_0[0x10U] 
                & __Vtemp_hc032d2f1__0[0x10U]) << 0x1cU) 
              | (0xffffffcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0xfU] 
                                & __Vtemp_hc032d2f1__0[0xfU]) 
                               >> 4U))));
    vlSelf->testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT____Vcellinp__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__dma_link_i[8U] 
        = ((3U & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0x10U] 
                   & __Vtemp_hc032d2f1__0[0x10U]) >> 4U)) 
           | (0xcU & ((Vtestbench__ConstPool__CONST_h00a540f1_0[0x10U] 
                       & __Vtemp_hc032d2f1__0[0x10U]) 
                      >> 4U)));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__3(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->testbench__DOT__wrapper__DOT__ds__DOT__strobe__DOT__new_val 
        = ((IData)(vlSelf->testbench__DOT__dut_reset) 
           | (7U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__ds__DOT__strobe__DOT__S_reg__DOT__data_r)));
    vlSelf->testbench__DOT__wrapper__DOT__ds__DOT__strobe__DOT__C_n 
        = (3U & (~ ((- (IData)((7U == (IData)(vlSelf->testbench__DOT__wrapper__DOT__ds__DOT__strobe__DOT__S_reg__DOT__data_r)))) 
                    | ((~ ((IData)(vlSelf->testbench__DOT__wrapper__DOT__ds__DOT__strobe__DOT__S_reg__DOT__data_r) 
                           & (1U | (2U & ((IData)(vlSelf->testbench__DOT__wrapper__DOT__ds__DOT__strobe__DOT__C_reg__DOT__data_r) 
                                          << 1U))))) 
                       | (- (IData)((IData)(vlSelf->testbench__DOT__dut_reset)))))));
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);
void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf);
void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    VlTriggerVec<2590> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtestbench___024root___eval_triggers__act(vlSelf);
            Vtestbench___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/cw025_jishnu/Documents/black-parrot-clean/bp_top/test/tb/bp_tethered/testbench.sv", 18, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtestbench___024root___timing_resume(vlSelf);
                Vtestbench___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/cw025_jishnu/Documents/black-parrot-clean/bp_top/test/tb/bp_tethered/testbench.sv", 18, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtestbench___024root___eval_nba(vlSelf);
        }
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    // Body
    if ((! (0x8000ULL & vlSelf->__VactTriggered.word(0x28U)))) {
        vlSelf->__VtrigSched_h2885d8d3__0.commit("@(posedge testbench.dut_clk)");
    }
    if ((! (0x20000ULL & vlSelf->__VactTriggered.word(0x28U)))) {
        vlSelf->__VtrigSched_haa0098e8__0.commit("@(negedge testbench.dut_reset)");
    }
    if ((! (0x2000000ULL & vlSelf->__VactTriggered.word(0x28U)))) {
        vlSelf->__VtrigSched_haa009ba8__0.commit("@([changed] testbench.dut_reset)");
    }
    if ((! (0x8000000ULL & vlSelf->__VactTriggered.word(0x28U)))) {
        vlSelf->__VtrigSched_h428fa53a__0.commit("@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)");
    }
    if ((! (0x10000000ULL & vlSelf->__VactTriggered.word(0x28U)))) {
        vlSelf->__VtrigSched_h36b79f23__0.commit("@([changed] testbench.tb_reset)");
    }
    if ((! (0x20000000ULL & vlSelf->__VactTriggered.word(0x28U)))) {
        vlSelf->__VtrigSched_h2855e638__0.commit("@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)");
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if ((0x8000ULL & vlSelf->__VactTriggered.word(0x28U))) {
        vlSelf->__VtrigSched_h2885d8d3__0.resume("@(posedge testbench.dut_clk)");
    }
    if ((0x20000ULL & vlSelf->__VactTriggered.word(0x28U))) {
        vlSelf->__VtrigSched_haa0098e8__0.resume("@(negedge testbench.dut_reset)");
    }
    if ((0x2000000ULL & vlSelf->__VactTriggered.word(0x28U))) {
        vlSelf->__VtrigSched_haa009ba8__0.resume("@([changed] testbench.dut_reset)");
    }
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0x28U))) {
        vlSelf->__VdlySched.resume();
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0x28U))) {
        vlSelf->__VtrigSched_h428fa53a__0.resume("@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[0].tile_node.tile.reset_r)");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0x28U))) {
        vlSelf->__VtrigSched_h36b79f23__0.resume("@([changed] testbench.tb_reset)");
    }
    if ((0x20000000ULL & vlSelf->__VactTriggered.word(0x28U))) {
        vlSelf->__VtrigSched_h2855e638__0.resume("@([changed] testbench.wrapper.processor.m.multicore.cc.y[0].x[1].tile_node.tile.reset_r)");
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
