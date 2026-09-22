// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___eval_static__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___eval_static__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__plusargs_en_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__warm = 1U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__plusargs_en_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__plusargs_en_li = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__plusargs_en_li = 0U;
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__plusargs_en_li = 0U;
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__7(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__7\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (3U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                 >> 6U));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (7U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                 >> 1U));
    vlSelf->__VdfgTmp_hc68e922d__0 = ((4U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                             >> 7U)) 
                                      | ((2U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                >> 9U)) 
                                         | (1U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                                  >> 0xbU))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__23(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__23\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                   >> 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 0xaU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 1U));
    vlSelf->__VdfgTmp_h34b8b2ab__0 = ((0x40U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x13U)) 
                                      | ((0x20U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                   >> 0x15U)) 
                                         | ((0x10U 
                                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x17U)) 
                                            | ((8U 
                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                   >> 0x19U)) 
                                               | ((4U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                      >> 0x1bU)) 
                                                  | ((2U 
                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                         >> 0x1dU)) 
                                                     | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                        >> 0x1fU)))))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__33(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__33\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                   >> 0x14U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 0xaU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                    >> 1U));
    vlSelf->__VdfgTmp_h6bcf8fad__0 = ((0x40U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x13U)) 
                                      | ((0x20U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                   >> 0x15U)) 
                                         | ((0x10U 
                                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x17U)) 
                                            | ((8U 
                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                   >> 0x19U)) 
                                               | ((4U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                      >> 0x1bU)) 
                                                  | ((2U 
                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                         >> 0x1dU)) 
                                                     | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                        >> 0x1fU)))))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__34(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__34\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t) 
                 >> 5U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (3U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t) 
                 >> 1U));
    vlSelf->__VdfgTmp_h192a1e68__0 = ((2U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t) 
                                             >> 6U)) 
                                      | (1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t) 
                                               >> 8U)));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__35(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__35\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)((0xffffffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                         << 8U) | (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                                   >> 0x18U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0xffffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                               << 0x10U) | ((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                            >> 0x10U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (0xffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                 << 0x10U) | ((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                              >> 0x10U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                  << 0x2cU) | (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                << 0xcU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                  >> 0x14U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                   >> 0x1aU))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U])) 
                                                >> 1U)));
    vlSelf->__VdfgTmp_hce79832a__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                           >> 0x11U)))) 
                                       << 0x36U) | 
                                      (((QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                            >> 0x12U)))) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                             >> 0x13U)))) 
                                         << 0x34U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                >> 0x14U)))) 
                                            << 0x33U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                   >> 0x15U)))) 
                                               << 0x32U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                      >> 0x16U)))) 
                                                  << 0x31U) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                         >> 0x17U)))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                            >> 0x18U)))) 
                                                        << 0x2fU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                               >> 0x19U)))) 
                                                           << 0x2eU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x1aU)))) 
                                                              << 0x2dU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x1bU)))) 
                                                                 << 0x2cU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x1cU)))) 
                                                                    << 0x2bU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x1dU)))) 
                                                                       << 0x2aU) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x1eU)))) 
                                                                          << 0x29U) 
                                                                         | (((QData)((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                                                >> 0x1fU))) 
                                                                             << 0x28U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU]))) 
                                                                                << 0x27U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 2U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 6U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 7U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0x17U)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0x15U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0x13U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0x11U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xfU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 7U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 5U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 3U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                << 1U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 1U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 3U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 5U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 7U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                                                >> 7U))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__36(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__36\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted[0U] 
        = (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                 >> 6U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted[1U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted[2U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted[0U] 
        = (IData)((0x1ffffffffULL & (((QData)((IData)(
                                                      vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU])) 
                                      << 0x1bU) | ((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU])) 
                                                   >> 5U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted[1U] 
        = (IData)(((0x1ffffffffULL & (((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU])) 
                                       << 0x1bU) | 
                                      ((QData)((IData)(
                                                       vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU])) 
                                       >> 5U))) >> 0x20U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted[2U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted[0U] 
        = (IData)((0x1ffffffffffffULL & (((QData)((IData)(
                                                          vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                               >> 0x14U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted[1U] 
        = (IData)(((0x1ffffffffffffULL & (((QData)((IData)(
                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU])) 
                                           << 0x2cU) 
                                          | (((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                              << 0xcU) 
                                             | ((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                >> 0x14U)))) 
                   >> 0x20U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted[2U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted[0U] 
        = (IData)((0x1ffffffffffffffULL & (((QData)((IData)(
                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                            << 0x35U) 
                                           | (((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                               << 0x15U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                 >> 0xbU)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted[1U] 
        = (IData)(((0x1ffffffffffffffULL & (((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                             << 0x35U) 
                                            | (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U])) 
                                                << 0x15U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                  >> 0xbU)))) 
                   >> 0x20U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted[2U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted[0U] 
        = (IData)((0x1fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                             << 0x3aU) 
                                            | (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                << 0x1aU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  >> 6U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted[1U] 
        = (IData)(((0x1fffffffffffffffULL & (((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                   >> 6U)))) 
                   >> 0x20U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted[2U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted[0U] 
        = (IData)((0x7fffffffffffffffULL & (((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                             << 0x3dU) 
                                            | (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                << 0x1dU) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                  >> 3U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted[1U] 
        = (IData)(((0x7fffffffffffffffULL & (((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                   >> 3U)))) 
                   >> 0x20U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted[2U] = 0U;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted[0U] 
        = (IData)((((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                    << 0x3fU) | (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                  << 0x1fU) | ((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U])) 
                                               >> 1U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted[1U] 
        = (IData)(((((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                     << 0x3fU) | (((QData)((IData)(
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U])) 
                                                >> 1U))) 
                   >> 0x20U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted[2U] = 0U;
    vlSelf->__VdfgTmp_hac6c2f6a__0 = (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                           >> 8U)))) 
                                       << 0x3fU) | 
                                      (((QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                            >> 9U)))) 
                                        << 0x3eU) | 
                                       (((QData)((IData)(
                                                         (1U 
                                                          & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                             >> 0xaU)))) 
                                         << 0x3dU) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                >> 0xbU)))) 
                                            << 0x3cU) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                   >> 0xcU)))) 
                                               << 0x3bU) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                      >> 0xdU)))) 
                                                  << 0x3aU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                         >> 0xeU)))) 
                                                     << 0x39U) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                            >> 0xfU)))) 
                                                        << 0x38U) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                               >> 0x10U)))) 
                                                           << 0x37U) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x11U)))) 
                                                              << 0x36U) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x12U)))) 
                                                                 << 0x35U) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x13U)))) 
                                                                    << 0x34U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x14U)))) 
                                                                       << 0x33U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x15U)))) 
                                                                          << 0x32U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x16U)))) 
                                                                             << 0x31U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x17U)))) 
                                                                                << 0x30U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x18U)))) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x19U)))) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                                                >> 0x1fU))) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU]))) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 1U)))) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 2U)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 3U)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 4U)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 5U)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 6U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 7U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 0x17U)) 
                                                                                | ((0x40000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 0x15U)) 
                                                                                | ((0x20000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 0x13U)) 
                                                                                | ((0x10000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 0x11U)) 
                                                                                | ((0x8000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 0xfU)) 
                                                                                | ((0x4000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 0xdU)) 
                                                                                | ((0x2000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 0xbU)) 
                                                                                | ((0x1000000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 9U)) 
                                                                                | ((0x800000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 7U)) 
                                                                                | ((0x400000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 5U)) 
                                                                                | ((0x200000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 3U)) 
                                                                                | ((0x100000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                << 1U)) 
                                                                                | ((0x80000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 1U)) 
                                                                                | ((0x40000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 3U)) 
                                                                                | ((0x20000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 5U)) 
                                                                                | ((0x10000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 7U)) 
                                                                                | ((0x8000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 9U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 0xbU)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 0xfU)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 0x11U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 0x13U)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 0x15U)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
                                                                                >> 0x17U)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
                                                                                << 5U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
                                                                                << 3U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
                                                                                << 1U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
                                                                                >> 1U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
                                                                                >> 3U)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
                                                                                >> 5U)) 
                                                                                | (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
                                                                                >> 7U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__66(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__66\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted 
        = (QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[0xbU]));
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted 
        = (0xffffffffffffULL & (((QData)((IData)(vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[9U])) 
                                 << 0x10U) | ((QData)((IData)(
                                                              vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[8U])) 
                                              >> 0x10U)));
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (0xffffffffffffffULL & (((QData)((IData)(
                                                   vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[7U])) 
                                   << 0x18U) | ((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[6U])) 
                                                >> 8U)));
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfffffffffffffffULL & (((QData)((IData)(
                                                    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[5U])) 
                                    << 0x1cU) | ((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[4U])) 
                                                 >> 4U)));
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0x3fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[3U])) 
                                     << 0x1eU) | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[2U])) 
                                                  >> 2U)));
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fffffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[1U])) 
                                     << 0x1fU) | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t[0U])) 
                                                  >> 1U)));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__105(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__105\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
           >> 0x18U);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0xfffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                     >> 4U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
           >> 0x12U);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x7fffU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                      >> 1U));
    vlSelf->__VdfgTmp_h1782175f__0 = ((0x4000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                  << 0xdU)) 
                                      | ((0x2000U & 
                                          (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                           << 0xbU)) 
                                         | ((0x1000U 
                                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                << 9U)) 
                                            | ((0x800U 
                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                   << 7U)) 
                                               | ((0x400U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                      << 5U)) 
                                                  | ((0x200U 
                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                         << 3U)) 
                                                     | ((0x100U 
                                                         & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                            << 1U)) 
                                                        | ((0x80U 
                                                            & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                               >> 1U)) 
                                                           | ((0x40U 
                                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                                  >> 3U)) 
                                                              | ((0x20U 
                                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                                     >> 5U)) 
                                                                 | ((0x10U 
                                                                     & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                                        >> 7U)) 
                                                                    | ((8U 
                                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                                           >> 9U)) 
                                                                       | ((4U 
                                                                           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                                              >> 0xbU)) 
                                                                          | ((2U 
                                                                              & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                                                >> 0xdU)) 
                                                                             | (1U 
                                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                                                >> 0xfU))))))))))))))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__120(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__120\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                 >> 0xeU));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (7U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                 >> 7U));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0xfU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                   >> 1U));
    vlSelf->__VdfgTmp_h086a8c7e__0 = ((8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                             >> 0xdU)) 
                                      | ((4U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0xfU)) 
                                         | ((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                   >> 0x11U)) 
                                            | (1U & 
                                               (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                >> 0x13U)))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__151(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__151\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__biased_sp 
        = (0x1ffU & ((IData)(0x100U) + (0x1fffU & (
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__raw_cast_o[2U] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__raw_cast_o[1U] 
                                                      >> 0x18U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__biased_dp 
        = (0xfffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__raw_cast_o[2U] 
                      << 8U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__raw_cast_o[1U] 
                                >> 0x18U)));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__152(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__152\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__biased_sp 
        = (0x1ffU & ((IData)(0x100U) + (0x1fffU & (
                                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__raw_cast_o[2U] 
                                                    << 8U) 
                                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__raw_cast_o[1U] 
                                                      >> 0x18U)))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__biased_dp 
        = (0xfffU & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__raw_cast_o[2U] 
                      << 8U) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__raw_cast_o[1U] 
                                >> 0x18U)));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__153(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__153\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted 
        = (3U & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t 
                         >> 0x26U)));
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted 
        = (0x3fU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t 
                            >> 0x18U)));
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted 
        = (0xffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t 
                            >> 0xcU)));
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted 
        = (0x1ffU & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t 
                             >> 1U)));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__8(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__8\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hba250ae9__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__exception_v_lo = 0U;
    if ((1U & (~ (IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_h8ced9202__0)))) {
        if ((1U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) {
            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__exception_v_lo = 1U;
        }
    }
    __Vtemp_hba250ae9__0[0U] = (((IData)((((QData)((IData)(
                                                           ((0xffff0000U 
                                                             & ((0xffff0000U 
                                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
                                                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted) 
                                                                   << 0x10U))) 
                                                            | (0xffffU 
                                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                                  | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0xffff0000U 
                                                              & ((0xffff0000U 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
                                                                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                                    << 0x10U))) 
                                                             | (0xffffU 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                                   | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)))))))) 
                                 << 0x10U) | VL_STREAML_FAST_III(16, 
                                                                 (((IData)(
                                                                           (0x22000U 
                                                                            == 
                                                                            (0x22000U 
                                                                             & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U]))) 
                                                                   << 0xfU) 
                                                                  | ((((0x20000U 
                                                                        & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])
                                                                        ? 
                                                                       (7U 
                                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U] 
                                                                           >> 0xaU))
                                                                        : 0U) 
                                                                      << 0xbU) 
                                                                     | ((0x20000U 
                                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])
                                                                         ? 
                                                                        (0x3ffU 
                                                                         & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r[3U])
                                                                         : 0U))), 0));
    __Vtemp_hba250ae9__0[1U] = (((IData)((((QData)((IData)(
                                                           ((0xffff0000U 
                                                             & ((0xffff0000U 
                                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
                                                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted) 
                                                                   << 0x10U))) 
                                                            | (0xffffU 
                                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                                  | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0xffff0000U 
                                                              & ((0xffff0000U 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
                                                                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                                    << 0x10U))) 
                                                             | (0xffffU 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                                   | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)))))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((0xffff0000U 
                                                                           & ((0xffff0000U 
                                                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
                                                                              | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted) 
                                                                                << 0x10U))) 
                                                                          | (0xffffU 
                                                                             & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                                                | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)))))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          ((0xffff0000U 
                                                                            & ((0xffff0000U 
                                                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
                                                                               | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                                                << 0x10U))) 
                                                                           | (0xffffU 
                                                                              & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                                                | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))))))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hba250ae9__0[2U] = ((IData)(((((QData)((IData)(
                                                           ((0xffff0000U 
                                                             & ((0xffff0000U 
                                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U]) 
                                                                | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted) 
                                                                   << 0x10U))) 
                                                            | (0xffffU 
                                                               & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                                  | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((0xffff0000U 
                                                              & ((0xffff0000U 
                                                                  & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]) 
                                                                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                                    << 0x10U))) 
                                                             | (0xffffU 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                                                   | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))))))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = __Vtemp_hba250ae9__0[0U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_hba250ae9__0[1U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_hba250ae9__0[2U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__enc_lo 
        = (((0x8000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                        << 0xfU)) | (IData)(vlSelf->__VdfgTmp_h1782175f__0)) 
           & (1U | (0xfffeU & ((~ (IData)(vlSelf->__VdfgTmp_h1782175f__0)) 
                               << 1U))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__16(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__16\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xf00U & ((0xffffff00U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                                      << 4U)) | ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                 << 8U))) 
           | ((0xf0U & (((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                         | (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                        << 4U)) | VL_STREAML_FAST_III(4, (IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_r), 0)));
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__enc_lo 
        = (((8U & ((IData)(vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t) 
                   >> 5U)) | (IData)(vlSelf->__VdfgTmp_hc68e922d__0)) 
           & (1U | (0xeU & ((~ (IData)(vlSelf->__VdfgTmp_hc68e922d__0)) 
                            << 1U))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__17(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__17\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xff000000U & ((0xff000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                           << 8U)) 
                           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted) 
                              << 0x18U))) | ((0xff0000U 
                                              & ((0xffff0000U 
                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                     << 8U)) 
                                                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                    << 0x10U))) 
                                             | ((0xff00U 
                                                 & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                    << 8U)) 
                                                | VL_STREAML_FAST_III(8, 
                                                                      (0xffU 
                                                                       & (~ 
                                                                          ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                                                            << 0x14U) 
                                                                           | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r[0U] 
                                                                              >> 0xcU)))), 0))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__enc_lo 
        = (((0x80U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                      >> 0x11U)) | (IData)(vlSelf->__VdfgTmp_h34b8b2ab__0)) 
           & (1U | (0xfeU & ((~ (IData)(vlSelf->__VdfgTmp_h34b8b2ab__0)) 
                             << 1U))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__18(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__18\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
        = ((0xff000000U & ((0xff000000U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                           << 8U)) 
                           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted) 
                              << 0x18U))) | ((0xff0000U 
                                              & ((0xffff0000U 
                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                     << 8U)) 
                                                 | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                    << 0x10U))) 
                                             | ((0xff00U 
                                                 & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                                                     | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                    << 8U)) 
                                                | VL_STREAML_FAST_III(8, 
                                                                      (0xffU 
                                                                       & (~ 
                                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cached_hit_reg__DOT__data_r) 
                                                                           >> 4U))), 0))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__enc_lo 
        = (((0x80U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                      >> 0x11U)) | (IData)(vlSelf->__VdfgTmp_h6bcf8fad__0)) 
           & (1U | (0xfeU & ((~ (IData)(vlSelf->__VdfgTmp_h6bcf8fad__0)) 
                             << 1U))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__19(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__19\n"); );
    // Init
    VlWide<3>/*78:0*/ tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0;
    VL_ZERO_W(79, tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0);
    CData/*0:0*/ __VdfgTmp_ha81091b7__0;
    __VdfgTmp_ha81091b7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h5d5a9ce9__0;
    __VdfgTmp_h5d5a9ce9__0 = 0;
    CData/*0:0*/ __VdfgTmp_h90a626f1__0;
    __VdfgTmp_h90a626f1__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha025f22a__0;
    __VdfgTmp_ha025f22a__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha19f34b7__0;
    __VdfgTmp_ha19f34b7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h205f3b33__0;
    __VdfgTmp_h205f3b33__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8e6b3e34__0;
    __VdfgTmp_h8e6b3e34__0 = 0;
    CData/*0:0*/ __VdfgTmp_he60280e5__0;
    __VdfgTmp_he60280e5__0 = 0;
    CData/*0:0*/ __VdfgTmp_hda8d1d04__0;
    __VdfgTmp_hda8d1d04__0 = 0;
    CData/*0:0*/ __VdfgTmp_hda1016fe__0;
    __VdfgTmp_hda1016fe__0 = 0;
    CData/*0:0*/ __VdfgTmp_he9c4c66d__0;
    __VdfgTmp_he9c4c66d__0 = 0;
    CData/*0:0*/ __VdfgTmp_hffef52b4__0;
    __VdfgTmp_hffef52b4__0 = 0;
    CData/*0:0*/ __VdfgTmp_hed22929b__0;
    __VdfgTmp_hed22929b__0 = 0;
    CData/*0:0*/ __VdfgTmp_h13902c3b__0;
    __VdfgTmp_h13902c3b__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfe7476e5__0;
    __VdfgTmp_hfe7476e5__0 = 0;
    CData/*0:0*/ __VdfgTmp_hbebf8348__0;
    __VdfgTmp_hbebf8348__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha14b900a__0;
    __VdfgTmp_ha14b900a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h934c55c2__0;
    __VdfgTmp_h934c55c2__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8536b0df__0;
    __VdfgTmp_h8536b0df__0 = 0;
    CData/*0:0*/ __VdfgTmp_h9f60b048__0;
    __VdfgTmp_h9f60b048__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha3d878cb__0;
    __VdfgTmp_ha3d878cb__0 = 0;
    CData/*0:0*/ __VdfgTmp_h32c7aae7__0;
    __VdfgTmp_h32c7aae7__0 = 0;
    CData/*0:0*/ __VdfgTmp_h27ee7c4d__0;
    __VdfgTmp_h27ee7c4d__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2fd87384__0;
    __VdfgTmp_h2fd87384__0 = 0;
    CData/*0:0*/ __VdfgTmp_h199f1d1f__0;
    __VdfgTmp_h199f1d1f__0 = 0;
    CData/*0:0*/ __VdfgTmp_h03fc72a3__0;
    __VdfgTmp_h03fc72a3__0 = 0;
    CData/*0:0*/ __VdfgTmp_h23db2668__0;
    __VdfgTmp_h23db2668__0 = 0;
    CData/*0:0*/ __VdfgTmp_h3fc506a5__0;
    __VdfgTmp_h3fc506a5__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfa1ea3ff__0;
    __VdfgTmp_hfa1ea3ff__0 = 0;
    CData/*0:0*/ __VdfgTmp_h890effd3__0;
    __VdfgTmp_h890effd3__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd3215bc3__0;
    __VdfgTmp_hd3215bc3__0 = 0;
    CData/*0:0*/ __VdfgTmp_h38e994d9__0;
    __VdfgTmp_h38e994d9__0 = 0;
    CData/*0:0*/ __VdfgTmp_h04d55b71__0;
    __VdfgTmp_h04d55b71__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2f2dd972__0;
    __VdfgTmp_h2f2dd972__0 = 0;
    CData/*0:0*/ __VdfgTmp_h20d1c8cd__0;
    __VdfgTmp_h20d1c8cd__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfe631abb__0;
    __VdfgTmp_hfe631abb__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha45a3d1e__0;
    __VdfgTmp_ha45a3d1e__0 = 0;
    CData/*0:0*/ __VdfgTmp_h96fd5345__0;
    __VdfgTmp_h96fd5345__0 = 0;
    CData/*0:0*/ __VdfgTmp_h93a4260d__0;
    __VdfgTmp_h93a4260d__0 = 0;
    CData/*0:0*/ __VdfgTmp_had940408__0;
    __VdfgTmp_had940408__0 = 0;
    CData/*0:0*/ __VdfgTmp_h97ca8e67__0;
    __VdfgTmp_h97ca8e67__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha10a1344__0;
    __VdfgTmp_ha10a1344__0 = 0;
    VlWide<3>/*95:0*/ __Vtemp_h188b0076__0;
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t 
        = ((0x1c0U & ((0xffffffc0U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t) 
                                      << 3U)) | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted) 
                                                 << 6U))) 
           | ((0x38U & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t) 
                         | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                        << 3U)) | VL_STREAML_FAST_III(3, 
                                                      (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fdata_v_lo) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_v_lo) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_force_lo))), 0)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo 
        = (((4U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t) 
                   >> 4U)) | (IData)(vlSelf->__VdfgTmp_h192a1e68__0)) 
           & (1U | (6U & ((~ (IData)(vlSelf->__VdfgTmp_h192a1e68__0)) 
                          << 1U))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[0U] 
           & (- (IData)((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo)))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[1U] 
           & (- (IData)((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo)))));
    tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt[2U] 
           & (- (IData)((1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_iwb_pkt[0U] 
           & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                               >> 1U)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_iwb_pkt[1U] 
           & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                               >> 1U)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_iwb_pkt[2U] 
           & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                               >> 1U)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fwb_pkt[0U] 
           & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                               >> 2U)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fwb_pkt[1U] 
           & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                               >> 2U)))));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
        = (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fwb_pkt[2U] 
           & (- (IData)((1U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo) 
                               >> 2U)))));
    vlSelf->__VdfgTmp_h7d5c756b__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 0xeU));
    vlSelf->__VdfgTmp_h794697ba__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 0xdU));
    vlSelf->__VdfgTmp_h642700a5__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 6U));
    vlSelf->__VdfgTmp_ha23ee035__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 5U));
    vlSelf->__VdfgTmp_hf489df16__0 = (0x1fU & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                  | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])));
    __VdfgTmp_ha81091b7__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 0xbU));
    __VdfgTmp_h5d5a9ce9__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 0xaU));
    __VdfgTmp_h90a626f1__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 9U));
    __VdfgTmp_ha025f22a__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 8U));
    __VdfgTmp_ha19f34b7__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                    >> 7U));
    __VdfgTmp_had940408__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0xeU));
    __VdfgTmp_h97ca8e67__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0xdU));
    __VdfgTmp_ha10a1344__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0xaU));
    __VdfgTmp_h205f3b33__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x1aU));
    __VdfgTmp_h8e6b3e34__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x19U));
    __VdfgTmp_he60280e5__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x18U));
    __VdfgTmp_hda8d1d04__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x17U));
    __VdfgTmp_hda1016fe__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x16U));
    __VdfgTmp_he9c4c66d__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x15U));
    __VdfgTmp_hffef52b4__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x14U));
    __VdfgTmp_hed22929b__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x13U));
    __VdfgTmp_h13902c3b__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x12U));
    __VdfgTmp_hfe7476e5__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x11U));
    __VdfgTmp_hbebf8348__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0x10U));
    __VdfgTmp_ha14b900a__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xfU));
    __VdfgTmp_h934c55c2__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xeU));
    __VdfgTmp_h8536b0df__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xdU));
    __VdfgTmp_h9f60b048__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xcU));
    __VdfgTmp_ha3d878cb__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                    >> 0xbU));
    vlSelf->__VdfgTmp_ha1025ae9__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0xaU));
    vlSelf->__VdfgTmp_h8e39025d__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 9U));
    vlSelf->__VdfgTmp_he36db9a2__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 8U));
    vlSelf->__VdfgTmp_hd1480425__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 7U));
    vlSelf->__VdfgTmp_ha2b9ba48__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 6U));
    vlSelf->__VdfgTmp_hbc76689f__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 5U));
    vlSelf->__VdfgTmp_haca5a853__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 4U));
    vlSelf->__VdfgTmp_hacc5df08__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 3U));
    vlSelf->__VdfgTmp_h9126797d__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 2U));
    vlSelf->__VdfgTmp_hb09cd8bf__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 1U));
    vlSelf->__VdfgTmp_hacb05d45__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 0xcU));
    vlSelf->__VdfgTmp_had4abe62__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 4U));
    vlSelf->__VdfgTmp_ha8b777c1__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 3U));
    vlSelf->__VdfgTmp_h94a40267__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 2U));
    vlSelf->__VdfgTmp_h90e5418e__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])) 
                                            >> 1U));
    vlSelf->__VdfgTmp_h207c7b11__0 = (1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[2U] 
                                            | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[2U] 
                                               | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[2U])));
    vlSelf->__VdfgTmp_h3268dc3b__0 = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                          | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                      >> 0x1fU);
    vlSelf->__VdfgTmp_h2a10eca3__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0x1eU));
    vlSelf->__VdfgTmp_h9e6597dd__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0x1dU));
    vlSelf->__VdfgTmp_hac6b7584__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0x1cU));
    vlSelf->__VdfgTmp_h3d9f4cbf__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])) 
                                            >> 0x1bU));
    vlSelf->__VdfgTmp_h870f76f2__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                            >> 5U));
    vlSelf->__VdfgTmp_h256b24a6__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 0xaU)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 0xbU)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 0xcU))));
    vlSelf->__VdfgTmp_h3d84d170__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 9U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 0xaU)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 0xbU))));
    vlSelf->__VdfgTmp_h0f4c7e23__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 7U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 8U)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 9U))));
    __VdfgTmp_h32c7aae7__0 = (1U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[1U] 
                                    | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[1U] 
                                       | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[1U])));
    __VdfgTmp_h27ee7c4d__0 = ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                  | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                              >> 0x1fU);
    __VdfgTmp_h2fd87384__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1eU));
    __VdfgTmp_h199f1d1f__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1dU));
    __VdfgTmp_h03fc72a3__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1cU));
    __VdfgTmp_h23db2668__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1bU));
    __VdfgTmp_h3fc506a5__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x1aU));
    __VdfgTmp_hfa1ea3ff__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x19U));
    __VdfgTmp_h890effd3__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x18U));
    __VdfgTmp_hd3215bc3__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x17U));
    __VdfgTmp_h38e994d9__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x16U));
    __VdfgTmp_h04d55b71__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x15U));
    __VdfgTmp_h2f2dd972__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x14U));
    __VdfgTmp_h20d1c8cd__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x13U));
    __VdfgTmp_hfe631abb__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x12U));
    __VdfgTmp_ha45a3d1e__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x11U));
    __VdfgTmp_h96fd5345__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0x10U));
    __VdfgTmp_h93a4260d__0 = (1U & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                     | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                        | tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U])) 
                                    >> 0xfU));
    vlSelf->__VdfgTmp_h354fa099__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 6U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 7U)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 8U))));
    vlSelf->__VdfgTmp_h372d3438__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 5U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 6U)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 7U))));
    vlSelf->__VdfgTmp_h393dabfe__0 = ((4U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0[0U] 
                                             >> 4U)) 
                                      | ((2U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0[0U] 
                                                >> 5U)) 
                                         | (1U & (tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_hb9ff5155__0[0U] 
                                                  >> 6U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__clear_rd_li 
        = (((IData)(__VdfgTmp_ha81091b7__0) << 4U) 
           | (((IData)(__VdfgTmp_h5d5a9ce9__0) << 3U) 
              | (((IData)(__VdfgTmp_h90a626f1__0) << 2U) 
                 | (((IData)(__VdfgTmp_ha025f22a__0) 
                     << 1U) | (IData)(__VdfgTmp_ha19f34b7__0)))));
    vlSelf->__VdfgTmp_h4a121ab9__0 = (((IData)(__VdfgTmp_hd3215bc3__0) 
                                       << 8U) | (((IData)(__VdfgTmp_h38e994d9__0) 
                                                  << 7U) 
                                                 | (((IData)(__VdfgTmp_h04d55b71__0) 
                                                     << 6U) 
                                                    | (((IData)(__VdfgTmp_h2f2dd972__0) 
                                                        << 5U) 
                                                       | (((IData)(__VdfgTmp_h20d1c8cd__0) 
                                                           << 4U) 
                                                          | (((IData)(__VdfgTmp_hfe631abb__0) 
                                                              << 3U) 
                                                             | (((IData)(__VdfgTmp_ha45a3d1e__0) 
                                                                 << 2U) 
                                                                | (((IData)(__VdfgTmp_h96fd5345__0) 
                                                                    << 1U) 
                                                                   | (IData)(__VdfgTmp_h93a4260d__0)))))))));
    __Vtemp_h188b0076__0[0U] = (IData)((((QData)((IData)(vlSelf->__VdfgTmp_h3268dc3b__0)) 
                                         << 0x3fU) 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_h2a10eca3__0)) 
                                            << 0x3eU) 
                                           | (((QData)((IData)(vlSelf->__VdfgTmp_h9e6597dd__0)) 
                                               << 0x3dU) 
                                              | (((QData)((IData)(vlSelf->__VdfgTmp_hac6b7584__0)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_h3d9f4cbf__0)) 
                                                     << 0x3bU) 
                                                    | (((QData)((IData)(__VdfgTmp_h205f3b33__0)) 
                                                        << 0x3aU) 
                                                       | (((QData)((IData)(__VdfgTmp_h8e6b3e34__0)) 
                                                           << 0x39U) 
                                                          | (((QData)((IData)(__VdfgTmp_he60280e5__0)) 
                                                              << 0x38U) 
                                                             | (((QData)((IData)(__VdfgTmp_hda8d1d04__0)) 
                                                                 << 0x37U) 
                                                                | (((QData)((IData)(__VdfgTmp_hda1016fe__0)) 
                                                                    << 0x36U) 
                                                                   | (((QData)((IData)(__VdfgTmp_he9c4c66d__0)) 
                                                                       << 0x35U) 
                                                                      | (((QData)((IData)(__VdfgTmp_hffef52b4__0)) 
                                                                          << 0x34U) 
                                                                         | (((QData)((IData)(__VdfgTmp_hed22929b__0)) 
                                                                             << 0x33U) 
                                                                            | (((QData)((IData)(__VdfgTmp_h13902c3b__0)) 
                                                                                << 0x32U) 
                                                                               | (((QData)((IData)(__VdfgTmp_hfe7476e5__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(__VdfgTmp_hbebf8348__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha14b900a__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h934c55c2__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h8536b0df__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h9f60b048__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha3d878cb__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha1025ae9__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h8e39025d__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_he36db9a2__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hd1480425__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha2b9ba48__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hbc76689f__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_haca5a853__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hacc5df08__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h9126797d__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(__VdfgTmp_h32c7aae7__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(__VdfgTmp_h27ee7c4d__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(__VdfgTmp_h2fd87384__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(__VdfgTmp_h199f1d1f__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(__VdfgTmp_h03fc72a3__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(__VdfgTmp_h23db2668__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(__VdfgTmp_h3fc506a5__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(__VdfgTmp_hfa1ea3ff__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(__VdfgTmp_h890effd3__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(__VdfgTmp_hd3215bc3__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(__VdfgTmp_h38e994d9__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(__VdfgTmp_h04d55b71__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(__VdfgTmp_h2f2dd972__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(__VdfgTmp_h20d1c8cd__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(__VdfgTmp_hfe631abb__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(__VdfgTmp_ha45a3d1e__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(__VdfgTmp_h96fd5345__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(__VdfgTmp_h93a4260d__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(__VdfgTmp_had940408__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(__VdfgTmp_h97ca8e67__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h256b24a6__0))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h3d84d170__0))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(__VdfgTmp_ha10a1344__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h354fa099__0))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h372d3438__0))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h393dabfe__0))) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h870f76f2__0) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hf489df16__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vtemp_h188b0076__0[1U] = (IData)(((((QData)((IData)(vlSelf->__VdfgTmp_h3268dc3b__0)) 
                                          << 0x3fU) 
                                         | (((QData)((IData)(vlSelf->__VdfgTmp_h2a10eca3__0)) 
                                             << 0x3eU) 
                                            | (((QData)((IData)(vlSelf->__VdfgTmp_h9e6597dd__0)) 
                                                << 0x3dU) 
                                               | (((QData)((IData)(vlSelf->__VdfgTmp_hac6b7584__0)) 
                                                   << 0x3cU) 
                                                  | (((QData)((IData)(vlSelf->__VdfgTmp_h3d9f4cbf__0)) 
                                                      << 0x3bU) 
                                                     | (((QData)((IData)(__VdfgTmp_h205f3b33__0)) 
                                                         << 0x3aU) 
                                                        | (((QData)((IData)(__VdfgTmp_h8e6b3e34__0)) 
                                                            << 0x39U) 
                                                           | (((QData)((IData)(__VdfgTmp_he60280e5__0)) 
                                                               << 0x38U) 
                                                              | (((QData)((IData)(__VdfgTmp_hda8d1d04__0)) 
                                                                  << 0x37U) 
                                                                 | (((QData)((IData)(__VdfgTmp_hda1016fe__0)) 
                                                                     << 0x36U) 
                                                                    | (((QData)((IData)(__VdfgTmp_he9c4c66d__0)) 
                                                                        << 0x35U) 
                                                                       | (((QData)((IData)(__VdfgTmp_hffef52b4__0)) 
                                                                           << 0x34U) 
                                                                          | (((QData)((IData)(__VdfgTmp_hed22929b__0)) 
                                                                              << 0x33U) 
                                                                             | (((QData)((IData)(__VdfgTmp_h13902c3b__0)) 
                                                                                << 0x32U) 
                                                                                | (((QData)((IData)(__VdfgTmp_hfe7476e5__0)) 
                                                                                << 0x31U) 
                                                                                | (((QData)((IData)(__VdfgTmp_hbebf8348__0)) 
                                                                                << 0x30U) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha14b900a__0)) 
                                                                                << 0x2fU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h934c55c2__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h8536b0df__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h9f60b048__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha3d878cb__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha1025ae9__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h8e39025d__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_he36db9a2__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hd1480425__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha2b9ba48__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hbc76689f__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_haca5a853__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hacc5df08__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h9126797d__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(__VdfgTmp_h32c7aae7__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(__VdfgTmp_h27ee7c4d__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(__VdfgTmp_h2fd87384__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(__VdfgTmp_h199f1d1f__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(__VdfgTmp_h03fc72a3__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(__VdfgTmp_h23db2668__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(__VdfgTmp_h3fc506a5__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(__VdfgTmp_hfa1ea3ff__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(__VdfgTmp_h890effd3__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(__VdfgTmp_hd3215bc3__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(__VdfgTmp_h38e994d9__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(__VdfgTmp_h04d55b71__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(__VdfgTmp_h2f2dd972__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(__VdfgTmp_h20d1c8cd__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(__VdfgTmp_hfe631abb__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(__VdfgTmp_ha45a3d1e__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(__VdfgTmp_h96fd5345__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(__VdfgTmp_h93a4260d__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(__VdfgTmp_had940408__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(__VdfgTmp_h97ca8e67__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h256b24a6__0))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h3d84d170__0))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(__VdfgTmp_ha10a1344__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h354fa099__0))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h372d3438__0))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h393dabfe__0))) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h870f76f2__0) 
                                                                                << 5U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_hf489df16__0)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        >> 0x20U));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellout__late_wb_mux_oh__data_o[0U] 
        = __Vtemp_h188b0076__0[0U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellout__late_wb_mux_oh__data_o[1U] 
        = __Vtemp_h188b0076__0[1U];
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellout__late_wb_mux_oh__data_o[2U] 
        = (((IData)(vlSelf->__VdfgTmp_h7d5c756b__0) 
            << 0xeU) | (((IData)(vlSelf->__VdfgTmp_h794697ba__0) 
                         << 0xdU) | (((IData)(vlSelf->__VdfgTmp_hacb05d45__0) 
                                      << 0xcU) | (((IData)(__VdfgTmp_ha81091b7__0) 
                                                   << 0xbU) 
                                                  | (((IData)(__VdfgTmp_h5d5a9ce9__0) 
                                                      << 0xaU) 
                                                     | (((IData)(__VdfgTmp_h90a626f1__0) 
                                                         << 9U) 
                                                        | (((IData)(__VdfgTmp_ha025f22a__0) 
                                                            << 8U) 
                                                           | (((IData)(__VdfgTmp_ha19f34b7__0) 
                                                               << 7U) 
                                                              | (((IData)(vlSelf->__VdfgTmp_h642700a5__0) 
                                                                  << 6U) 
                                                                 | (((IData)(vlSelf->__VdfgTmp_ha23ee035__0) 
                                                                     << 5U) 
                                                                    | (((IData)(vlSelf->__VdfgTmp_had4abe62__0) 
                                                                        << 4U) 
                                                                       | (((IData)(vlSelf->__VdfgTmp_ha8b777c1__0) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSelf->__VdfgTmp_h94a40267__0) 
                                                                              << 2U) 
                                                                             | (((IData)(vlSelf->__VdfgTmp_h90e5418e__0) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h207c7b11__0)))))))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__dcache_pte 
        = (((QData)((IData)(vlSelf->__VdfgTmp_had4abe62__0)) 
            << 0x3fU) | (((QData)((IData)(vlSelf->__VdfgTmp_ha8b777c1__0)) 
                          << 0x3eU) | (((QData)((IData)(vlSelf->__VdfgTmp_h94a40267__0)) 
                                        << 0x3dU) | 
                                       (((QData)((IData)(vlSelf->__VdfgTmp_h90e5418e__0)) 
                                         << 0x3cU) 
                                        | (((QData)((IData)(vlSelf->__VdfgTmp_h207c7b11__0)) 
                                            << 0x3bU) 
                                           | (((QData)((IData)(vlSelf->__VdfgTmp_h3268dc3b__0)) 
                                               << 0x3aU) 
                                              | (((QData)((IData)(vlSelf->__VdfgTmp_h2a10eca3__0)) 
                                                  << 0x39U) 
                                                 | (((QData)((IData)(vlSelf->__VdfgTmp_h9e6597dd__0)) 
                                                     << 0x38U) 
                                                    | (((QData)((IData)(vlSelf->__VdfgTmp_hac6b7584__0)) 
                                                        << 0x37U) 
                                                       | (((QData)((IData)(vlSelf->__VdfgTmp_h3d9f4cbf__0)) 
                                                           << 0x36U) 
                                                          | (((QData)((IData)(__VdfgTmp_h205f3b33__0)) 
                                                              << 0x35U) 
                                                             | (((QData)((IData)(__VdfgTmp_h8e6b3e34__0)) 
                                                                 << 0x34U) 
                                                                | (((QData)((IData)(__VdfgTmp_he60280e5__0)) 
                                                                    << 0x33U) 
                                                                   | (((QData)((IData)(__VdfgTmp_hda8d1d04__0)) 
                                                                       << 0x32U) 
                                                                      | (((QData)((IData)(__VdfgTmp_hda1016fe__0)) 
                                                                          << 0x31U) 
                                                                         | (((QData)((IData)(__VdfgTmp_he9c4c66d__0)) 
                                                                             << 0x30U) 
                                                                            | (((QData)((IData)(__VdfgTmp_hffef52b4__0)) 
                                                                                << 0x2fU) 
                                                                               | (((QData)((IData)(__VdfgTmp_hed22929b__0)) 
                                                                                << 0x2eU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h13902c3b__0)) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(__VdfgTmp_hfe7476e5__0)) 
                                                                                << 0x2cU) 
                                                                                | (((QData)((IData)(__VdfgTmp_hbebf8348__0)) 
                                                                                << 0x2bU) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha14b900a__0)) 
                                                                                << 0x2aU) 
                                                                                | (((QData)((IData)(__VdfgTmp_h934c55c2__0)) 
                                                                                << 0x29U) 
                                                                                | (((QData)((IData)(__VdfgTmp_h8536b0df__0)) 
                                                                                << 0x28U) 
                                                                                | (((QData)((IData)(__VdfgTmp_h9f60b048__0)) 
                                                                                << 0x27U) 
                                                                                | (((QData)((IData)(__VdfgTmp_ha3d878cb__0)) 
                                                                                << 0x26U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha1025ae9__0)) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_h8e39025d__0)) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_he36db9a2__0)) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hd1480425__0)) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_ha2b9ba48__0)) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(vlSelf->__VdfgTmp_hbc76689f__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(vlSelf->__VdfgTmp_haca5a853__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hacc5df08__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h9126797d__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(__VdfgTmp_h32c7aae7__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(__VdfgTmp_h27ee7c4d__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(__VdfgTmp_h2fd87384__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(__VdfgTmp_h199f1d1f__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(__VdfgTmp_h03fc72a3__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(__VdfgTmp_h23db2668__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(__VdfgTmp_h3fc506a5__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(__VdfgTmp_hfa1ea3ff__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(__VdfgTmp_h890effd3__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(__VdfgTmp_hd3215bc3__0) 
                                                                                << 0x12U) 
                                                                                | (((IData)(__VdfgTmp_h38e994d9__0) 
                                                                                << 0x11U) 
                                                                                | (((IData)(__VdfgTmp_h04d55b71__0) 
                                                                                << 0x10U) 
                                                                                | (((IData)(__VdfgTmp_h2f2dd972__0) 
                                                                                << 0xfU) 
                                                                                | (((IData)(__VdfgTmp_h20d1c8cd__0) 
                                                                                << 0xeU) 
                                                                                | (((IData)(__VdfgTmp_hfe631abb__0) 
                                                                                << 0xdU) 
                                                                                | (((IData)(__VdfgTmp_ha45a3d1e__0) 
                                                                                << 0xcU) 
                                                                                | (((IData)(__VdfgTmp_h96fd5345__0) 
                                                                                << 0xbU) 
                                                                                | (((IData)(__VdfgTmp_h93a4260d__0) 
                                                                                << 0xaU) 
                                                                                | (((IData)(__VdfgTmp_had940408__0) 
                                                                                << 9U) 
                                                                                | (((IData)(__VdfgTmp_h97ca8e67__0) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h256b24a6__0))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h3d84d170__0))) 
                                                                                << 6U) 
                                                                                | (((IData)(__VdfgTmp_ha10a1344__0) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h354fa099__0))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h372d3438__0))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->__VdfgTmp_h393dabfe__0))) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->__VdfgTmp_h870f76f2__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf 
        = (0U != ((IData)(vlSelf->__VdfgTmp_h354fa099__0) 
                  | ((IData)(vlSelf->__VdfgTmp_h372d3438__0) 
                     | (IData)(vlSelf->__VdfgTmp_h393dabfe__0))));
    vlSelf->__VdfgTmp_hb75ec05f__0 = (((IData)(__VdfgTmp_h32c7aae7__0) 
                                       << 0x11U) | 
                                      (((IData)(__VdfgTmp_h27ee7c4d__0) 
                                        << 0x10U) | 
                                       (((IData)(__VdfgTmp_h2fd87384__0) 
                                         << 0xfU) | 
                                        (((IData)(__VdfgTmp_h199f1d1f__0) 
                                          << 0xeU) 
                                         | (((IData)(__VdfgTmp_h03fc72a3__0) 
                                             << 0xdU) 
                                            | (((IData)(__VdfgTmp_h23db2668__0) 
                                                << 0xcU) 
                                               | (((IData)(__VdfgTmp_h3fc506a5__0) 
                                                   << 0xbU) 
                                                  | (((IData)(__VdfgTmp_hfa1ea3ff__0) 
                                                      << 0xaU) 
                                                     | (((IData)(__VdfgTmp_h890effd3__0) 
                                                         << 9U) 
                                                        | (IData)(vlSelf->__VdfgTmp_h4a121ab9__0))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn_n 
        = (0xfffffffU & (IData)(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_start)
                                  ? (QData)((IData)(
                                                    (0xfffffffU 
                                                     & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_satp__DOT__satp_reg__DOT__data_r)))
                                  : (((QData)((IData)(__VdfgTmp_h205f3b33__0)) 
                                      << 0x2bU) | (
                                                   ((QData)((IData)(__VdfgTmp_h8e6b3e34__0)) 
                                                    << 0x2aU) 
                                                   | (((QData)((IData)(__VdfgTmp_he60280e5__0)) 
                                                       << 0x29U) 
                                                      | (((QData)((IData)(__VdfgTmp_hda8d1d04__0)) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(__VdfgTmp_hda1016fe__0)) 
                                                             << 0x27U) 
                                                            | (((QData)((IData)(__VdfgTmp_he9c4c66d__0)) 
                                                                << 0x26U) 
                                                               | (((QData)((IData)(__VdfgTmp_hffef52b4__0)) 
                                                                   << 0x25U) 
                                                                  | (((QData)((IData)(__VdfgTmp_hed22929b__0)) 
                                                                      << 0x24U) 
                                                                     | (((QData)((IData)(__VdfgTmp_h13902c3b__0)) 
                                                                         << 0x23U) 
                                                                        | (((QData)((IData)(__VdfgTmp_hfe7476e5__0)) 
                                                                            << 0x22U) 
                                                                           | (((QData)((IData)(__VdfgTmp_hbebf8348__0)) 
                                                                               << 0x21U) 
                                                                              | (((QData)((IData)(__VdfgTmp_ha14b900a__0)) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                (((IData)(__VdfgTmp_h934c55c2__0) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(__VdfgTmp_h8536b0df__0) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(__VdfgTmp_h9f60b048__0) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(__VdfgTmp_ha3d878cb__0) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_ha1025ae9__0) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h8e39025d__0) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_he36db9a2__0) 
                                                                                << 0x19U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hd1480425__0) 
                                                                                << 0x18U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_ha2b9ba48__0) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hbc76689f__0) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_haca5a853__0) 
                                                                                << 0x15U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hacc5df08__0) 
                                                                                << 0x14U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_h9126797d__0) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlSelf->__VdfgTmp_hb09cd8bf__0) 
                                                                                << 0x12U) 
                                                                                | vlSelf->__VdfgTmp_hb75ec05f__0)))))))))))))))))))))))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults 
        = (1U & (((~ (IData)(vlSelf->__VdfgTmp_h870f76f2__0)) 
                  | ((~ (IData)((0U != (IData)(vlSelf->__VdfgTmp_h393dabfe__0)))) 
                     & (0U != (IData)(vlSelf->__VdfgTmp_h372d3438__0)))) 
                 | ((((IData)(vlSelf->__VdfgTmp_had4abe62__0) 
                      | ((IData)(vlSelf->__VdfgTmp_ha8b777c1__0) 
                         | ((IData)(vlSelf->__VdfgTmp_h94a40267__0) 
                            | ((IData)(vlSelf->__VdfgTmp_h90e5418e__0) 
                               | ((IData)(vlSelf->__VdfgTmp_h207c7b11__0) 
                                  | ((IData)(vlSelf->__VdfgTmp_h3268dc3b__0) 
                                     | ((IData)(vlSelf->__VdfgTmp_h2a10eca3__0) 
                                        | ((IData)(vlSelf->__VdfgTmp_h9e6597dd__0) 
                                           | ((IData)(vlSelf->__VdfgTmp_hac6b7584__0) 
                                              | (IData)(vlSelf->__VdfgTmp_h3d9f4cbf__0)))))))))) 
                     | ((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf)) 
                        & (0U != ((IData)(vlSelf->__VdfgTmp_h3d84d170__0) 
                                  | ((IData)(vlSelf->__VdfgTmp_h256b24a6__0) 
                                     | (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0)))))) 
                    | (((~ (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf)) 
                        & (0U == (0x30000000U & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r))) 
                       | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf) 
                          & ((((0U != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0)) 
                               & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf) 
                                  & ((1U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_reg__DOT__data_r))) 
                                     & ((~ ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mstatus__DOT__mstatus_reg__DOT__data_r) 
                                            >> 0xaU)) 
                                        | (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                                                   >> 0x2cU)))))) 
                              | ((~ (IData)((0U != (IData)(vlSelf->__VdfgTmp_h0f4c7e23__0)))) 
                                 & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf) 
                                    & (0U == (3U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_reg__DOT__data_r)))))) 
                             | (((IData)(((0x10000000U 
                                           == (0x30000000U 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r)) 
                                          & (0U != (IData)(vlSelf->__VdfgTmp_h4a121ab9__0)))) 
                                 | (IData)(((0x20000000U 
                                             == (0x30000000U 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r)) 
                                            & (0U != vlSelf->__VdfgTmp_hb75ec05f__0)))) 
                                | ((~ (IData)((0U != (IData)(vlSelf->__VdfgTmp_h3d84d170__0)))) 
                                   | ((~ (IData)((0U 
                                                  != (IData)(vlSelf->__VdfgTmp_h256b24a6__0)))) 
                                      & (IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                                                 >> 0x2aU)))))))))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__instr_page_fault 
        = ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                    >> 0x2cU)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults) 
                                  | ((~ (IData)((0U 
                                                 != (IData)(vlSelf->__VdfgTmp_h354fa099__0)))) 
                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__store_page_fault 
        = ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                    >> 0x2aU)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults) 
                                  | ((~ (IData)((0U 
                                                 != (IData)(vlSelf->__VdfgTmp_h372d3438__0)))) 
                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__load_page_fault 
        = ((IData)((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r 
                    >> 0x2bU)) & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults) 
                                  | ((~ ((0U != (IData)(vlSelf->__VdfgTmp_h393dabfe__0)) 
                                         | ((0U != (IData)(vlSelf->__VdfgTmp_h354fa099__0)) 
                                            & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mstatus__DOT__mstatus_reg__DOT__data_r) 
                                               >> 0xbU)))) 
                                     & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__page_fault_v 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__instr_page_fault) 
           | ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__load_page_fault) 
              | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__store_page_fault)));
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT____VdfgTmp_hee722aea__0 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf) 
           | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__page_fault_v));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__20(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__20\n"); );
    // Init
    VlWide<13>/*415:0*/ __Vtemp_hb809abf7__0;
    // Body
    __Vtemp_hb809abf7__0[1U] = (((IData)((0xffffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                 << 0x18U) | (IData)(
                                                     (VL_STREAML_FAST_QQI(56, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed, 0) 
                                                      >> 0x20U)));
    __Vtemp_hb809abf7__0[2U] = (((IData)((0xffffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted))) 
                                 >> 8U) | ((IData)(
                                                   ((0xffffffffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                        | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_hb809abf7__0[3U] = (((IData)((0xffffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                    >> 0x18U))) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                 << 0x10U) | ((IData)(
                                                      ((0xffffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U]))) 
                                                           | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              >> 8U));
    __Vtemp_hb809abf7__0[4U] = (((IData)((0xffffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                  << 8U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                    >> 0x18U))) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted))) 
                                 >> 0x10U) | ((IData)(
                                                      ((0xffffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                             << 0x28U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                                << 8U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                                  >> 0x18U))) 
                                                           | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_hb809abf7__0[5U] = (((IData)((0xffffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                    >> 0x10U))) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                 << 8U) | ((IData)(
                                                   ((0xffffffffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                          << 0x28U) 
                                                         | (((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U])) 
                                                             << 8U) 
                                                            | ((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U])) 
                                                               >> 0x18U))) 
                                                        | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted)) 
                                                    >> 0x20U)) 
                                           >> 0x10U));
    __Vtemp_hb809abf7__0[6U] = (((IData)((0xffffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                  << 0x10U) 
                                                 | ((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                    >> 0x10U))) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted))) 
                                 >> 0x18U) | ((IData)(
                                                      ((0xffffffffffffffULL 
                                                        & ((((QData)((IData)(
                                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                             << 0x30U) 
                                                            | (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U])) 
                                                                << 0x10U) 
                                                               | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U])) 
                                                                  >> 0x10U))) 
                                                           | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted)) 
                                                       >> 0x20U)) 
                                              << 8U));
    __Vtemp_hb809abf7__0[7U] = (IData)((0xffffffffffffffULL 
                                        & ((((QData)((IData)(
                                                             vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                << 0x18U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                  >> 8U))) 
                                           | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)));
    __Vtemp_hb809abf7__0[8U] = (((IData)((0xffffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U]))) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                 << 0x18U) | (IData)(
                                                     ((0xffffffffffffffULL 
                                                       & ((((QData)((IData)(
                                                                            vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                            << 0x38U) 
                                                           | (((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U])) 
                                                               << 0x18U) 
                                                              | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U])) 
                                                                 >> 8U))) 
                                                          | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted)) 
                                                      >> 0x20U)));
    __Vtemp_hb809abf7__0[9U] = (((IData)((0xffffffffffffffULL 
                                          & ((((QData)((IData)(
                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U]))) 
                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted))) 
                                 >> 8U) | ((IData)(
                                                   ((0xffffffffffffffULL 
                                                     & ((((QData)((IData)(
                                                                          vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U]))) 
                                                        | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted)) 
                                                    >> 0x20U)) 
                                           << 0x18U));
    __Vtemp_hb809abf7__0[0xaU] = (((IData)((0xffffffffffffffULL 
                                            & ((((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU])) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                      >> 0x18U))) 
                                               | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                   << 0x10U) | ((IData)(
                                                        ((0xffffffffffffffULL 
                                                          & ((((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U]))) 
                                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted)) 
                                                         >> 0x20U)) 
                                                >> 8U));
    __Vtemp_hb809abf7__0[0xbU] = (((IData)((0xffffffffffffffULL 
                                            & ((((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU])) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                      >> 0x18U))) 
                                               | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted))) 
                                   >> 0x10U) | ((IData)(
                                                        ((0xffffffffffffffULL 
                                                          & ((((QData)((IData)(
                                                                               vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU])) 
                                                               << 0x28U) 
                                                              | (((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                                  << 8U) 
                                                                 | ((QData)((IData)(
                                                                                vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                                    >> 0x18U))) 
                                                             | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted)) 
                                                         >> 0x20U)) 
                                                << 0x10U));
    __Vtemp_hb809abf7__0[0xcU] = ((IData)(((0xffffffffffffffULL 
                                            & ((((QData)((IData)(
                                                                 vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU])) 
                                                 << 0x28U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U])) 
                                                    << 8U) 
                                                   | ((QData)((IData)(
                                                                      vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U])) 
                                                      >> 0x18U))) 
                                               | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted)) 
                                           >> 0x20U)) 
                                  >> 0x10U);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = (IData)(VL_STREAML_FAST_QQI(56, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed, 0));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_hb809abf7__0[1U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_hb809abf7__0[2U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = __Vtemp_hb809abf7__0[3U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = __Vtemp_hb809abf7__0[4U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = __Vtemp_hb809abf7__0[5U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = __Vtemp_hb809abf7__0[6U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = __Vtemp_hb809abf7__0[7U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = __Vtemp_hb809abf7__0[8U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = __Vtemp_hb809abf7__0[9U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
        = __Vtemp_hb809abf7__0[0xaU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
        = __Vtemp_hb809abf7__0[0xbU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
        = __Vtemp_hb809abf7__0[0xcU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__enc_lo 
        = ((((QData)((IData)((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                    >> 0x10U)))) << 0x37U) 
            | vlSelf->__VdfgTmp_hce79832a__0) & (1ULL 
                                                 | (0xfffffffffffffeULL 
                                                    & ((~ vlSelf->__VdfgTmp_hce79832a__0) 
                                                       << 1U))));
    vlSelf->__VdfgTmp_hc65958a5__0 = (0ULL == ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__enc_lo 
                                                - 1ULL) 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__enc_lo));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__21(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__21\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h0ffbc5d9__0;
    VlWide<3>/*95:0*/ __Vtemp_h0bc24d23__0;
    VlWide<3>/*95:0*/ __Vtemp_h639dda77__0;
    VlWide<3>/*95:0*/ __Vtemp_heae316cc__0;
    // Body
    VL_STREAML_WWI(65, __Vtemp_h0bc24d23__0, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__reversed, 1U);
    __Vtemp_h0ffbc5d9__0[2U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                  | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted[0U]) 
                                 << 1U) | __Vtemp_h0bc24d23__0[2U]);
    __Vtemp_h0ffbc5d9__0[3U] = (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
                                  | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted[0U]) 
                                 >> 0x1fU) | ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                               | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted[1U]) 
                                              << 1U));
    __Vtemp_h0ffbc5d9__0[4U] = (((0xfffffffcU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                 << 1U)) 
                                 | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted[0U] 
                                    << 2U)) | (((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
                                                 | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted[1U]) 
                                                >> 0x1fU) 
                                               | (2U 
                                                  & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                                      | vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted[2U]) 
                                                     << 1U))));
    __Vtemp_h0ffbc5d9__0[5U] = ((((2U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                         << 1U)) | 
                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
                                   >> 0x1fU)) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted[0U] 
                                                 >> 0x1eU)) 
                                | ((0xfffffffcU & (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                   << 1U)) 
                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted[1U] 
                                      << 2U)));
    __Vtemp_h0ffbc5d9__0[6U] = (((0xfffffff8U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                 << 1U)) 
                                 | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted[0U] 
                                    << 3U)) | ((((2U 
                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                     << 1U)) 
                                                 | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
                                                    >> 0x1fU)) 
                                                | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted[1U] 
                                                   >> 0x1eU)) 
                                               | (4U 
                                                  & ((0xfffffffcU 
                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                                         << 1U)) 
                                                     | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted[2U] 
                                                        << 2U)))));
    __Vtemp_h0ffbc5d9__0[7U] = ((((6U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
                                         << 1U)) | 
                                  (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
                                   >> 0x1fU)) | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted[0U] 
                                                 >> 0x1dU)) 
                                | ((0xfffffff8U & (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
                                                   << 1U)) 
                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted[1U] 
                                      << 3U)));
    __Vtemp_h0ffbc5d9__0[8U] = (((0xfffffff0U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                 << 1U)) 
                                 | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted[0U] 
                                    << 4U)) | ((((6U 
                                                  & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                     << 1U)) 
                                                 | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
                                                    >> 0x1fU)) 
                                                | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted[1U] 
                                                   >> 0x1dU)) 
                                               | (8U 
                                                  & ((0xfffffff8U 
                                                      & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                                         << 1U)) 
                                                     | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted[2U] 
                                                        << 3U)))));
    __Vtemp_h0ffbc5d9__0[9U] = ((((0xeU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                           << 1U)) 
                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
                                     >> 0x1fU)) | (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted[0U] 
                                                   >> 0x1cU)) 
                                | ((0xfffffff0U & (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                   << 1U)) 
                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted[1U] 
                                      << 4U)));
    __Vtemp_h0ffbc5d9__0[0xaU] = (((0xffffffe0U & (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
                                                   << 1U)) 
                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted[0U] 
                                      << 5U)) | (((
                                                   (0xeU 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
                                                       << 1U)) 
                                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
                                                      >> 0x1fU)) 
                                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted[1U] 
                                                     >> 0x1cU)) 
                                                 | (0x10U 
                                                    & ((0xfffffff0U 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
                                                           << 1U)) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted[2U] 
                                                          << 4U)))));
    __Vtemp_h0ffbc5d9__0[0xbU] = ((((0x1eU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                              << 1U)) 
                                    | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
                                       >> 0x1fU)) | 
                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted[0U] 
                                    >> 0x1bU)) | ((0xffffffe0U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                                      << 1U)) 
                                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted[1U] 
                                                     << 5U)));
    __Vtemp_h0ffbc5d9__0[0xcU] = (((0xffffffc0U & (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                   << 1U)) 
                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted[0U] 
                                      << 6U)) | (((
                                                   (0x1eU 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                       << 1U)) 
                                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
                                                      >> 0x1fU)) 
                                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted[1U] 
                                                     >> 0x1bU)) 
                                                 | (0x20U 
                                                    & ((0xffffffe0U 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                                           << 1U)) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted[2U] 
                                                          << 5U)))));
    __Vtemp_h0ffbc5d9__0[0xdU] = ((((0x3eU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                              << 1U)) 
                                    | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
                                       >> 0x1fU)) | 
                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted[0U] 
                                    >> 0x1aU)) | ((0xffffffc0U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                      << 1U)) 
                                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted[1U] 
                                                     << 6U)));
    __Vtemp_h0ffbc5d9__0[0xeU] = (((0xffffff80U & (
                                                   vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                   << 1U)) 
                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted[0U] 
                                      << 7U)) | (((
                                                   (0x3eU 
                                                    & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                       << 1U)) 
                                                   | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
                                                      >> 0x1fU)) 
                                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted[1U] 
                                                     >> 0x1aU)) 
                                                 | (0x40U 
                                                    & ((0xffffffc0U 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                                           << 1U)) 
                                                       | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted[2U] 
                                                          << 6U)))));
    __Vtemp_h0ffbc5d9__0[0xfU] = ((((0x7eU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xdU] 
                                              << 1U)) 
                                    | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
                                       >> 0x1fU)) | 
                                   (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted[0U] 
                                    >> 0x19U)) | ((0xffffff80U 
                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xdU] 
                                                      << 1U)) 
                                                  | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted[1U] 
                                                     << 7U)));
    __Vtemp_h0ffbc5d9__0[0x10U] = ((((0x7eU & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                               << 1U)) 
                                     | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xdU] 
                                        >> 0x1fU)) 
                                    | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted[1U] 
                                       >> 0x19U)) | 
                                   (0x80U & ((0xffffff80U 
                                              & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                                                 << 1U)) 
                                             | (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted[2U] 
                                                << 7U))));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0U] 
        = __Vtemp_h0bc24d23__0[0U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[1U] 
        = __Vtemp_h0bc24d23__0[1U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[2U] 
        = __Vtemp_h0ffbc5d9__0[2U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[3U] 
        = __Vtemp_h0ffbc5d9__0[3U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[4U] 
        = __Vtemp_h0ffbc5d9__0[4U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[5U] 
        = __Vtemp_h0ffbc5d9__0[5U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[6U] 
        = __Vtemp_h0ffbc5d9__0[6U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[7U] 
        = __Vtemp_h0ffbc5d9__0[7U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[8U] 
        = __Vtemp_h0ffbc5d9__0[8U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[9U] 
        = __Vtemp_h0ffbc5d9__0[9U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xaU] 
        = __Vtemp_h0ffbc5d9__0[0xaU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xbU] 
        = __Vtemp_h0ffbc5d9__0[0xbU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xcU] 
        = __Vtemp_h0ffbc5d9__0[0xcU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xdU] 
        = __Vtemp_h0ffbc5d9__0[0xdU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
        = __Vtemp_h0ffbc5d9__0[0xeU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xfU] 
        = __Vtemp_h0ffbc5d9__0[0xfU];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0x10U] 
        = __Vtemp_h0ffbc5d9__0[0x10U];
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__enc_lo[0U] 
        = ((IData)(vlSelf->__VdfgTmp_hac6c2f6a__0) 
           & (1U | ((IData)((~ vlSelf->__VdfgTmp_hac6c2f6a__0)) 
                    << 1U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__enc_lo[1U] 
        = ((IData)((vlSelf->__VdfgTmp_hac6c2f6a__0 
                    >> 0x20U)) & (((IData)((~ vlSelf->__VdfgTmp_hac6c2f6a__0)) 
                                   >> 0x1fU) | ((IData)(
                                                        ((~ vlSelf->__VdfgTmp_hac6c2f6a__0) 
                                                         >> 0x20U)) 
                                                << 1U)));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__enc_lo[2U] 
        = (1U & ((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t[0xeU] 
                  >> 7U) & ((IData)(((~ vlSelf->__VdfgTmp_hac6c2f6a__0) 
                                     >> 0x20U)) >> 0x1fU)));
    __Vtemp_h639dda77__0[0U] = 1U;
    __Vtemp_h639dda77__0[1U] = 0U;
    __Vtemp_h639dda77__0[2U] = 0U;
    VL_SUB_W(3, __Vtemp_heae316cc__0, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__enc_lo, __Vtemp_h639dda77__0);
    vlSelf->__VdfgTmp_h4697936b__0 = (0U == (((__Vtemp_heae316cc__0[0U] 
                                               & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__enc_lo[0U]) 
                                              | (__Vtemp_heae316cc__0[1U] 
                                                 & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__enc_lo[1U])) 
                                             | (__Vtemp_heae316cc__0[2U] 
                                                & vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__enc_lo[2U])));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__28(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___stl_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__28\n"); );
    // Body
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__enc_lo 
        = (((0x10U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t 
                      >> 0xbU)) | (IData)(vlSelf->__VdfgTmp_h086a8c7e__0)) 
           & (1U | (0x1eU & ((~ (IData)(vlSelf->__VdfgTmp_h086a8c7e__0)) 
                             << 1U))));
}

VL_ATTR_COLD void Vtestbench_bp_core_tile_node__Bz1___ctor_var_reset(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___ctor_var_reset\n"); );
    // Body
    vlSelf->core_clk_i = 0;
    vlSelf->rt_clk_i = 0;
    vlSelf->core_reset_i = 0;
    vlSelf->coh_clk_i = 0;
    vlSelf->coh_reset_i = 0;
    vlSelf->dma_clk_i = 0;
    vlSelf->dma_reset_i = 0;
    vlSelf->my_did_i = 0;
    vlSelf->host_did_i = 0;
    vlSelf->my_cord_i = 0;
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_req_link_i);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_req_link_o);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_cmd_link_i);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_cmd_link_o);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_fill_link_i);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_fill_link_o);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_resp_link_i);
    VL_ZERO_RESET_W(520, vlSelf->coh_lce_resp_link_o);
    VL_ZERO_RESET_W(260, vlSelf->dma_link_i);
    VL_ZERO_RESET_W(260, vlSelf->dma_link_o);
    VL_ZERO_RESET_W(130, vlSelf->__Vcellout__tile__lce_resp_link_o);
    VL_ZERO_RESET_W(130, vlSelf->__Vcellout__tile__lce_cmd_link_o);
    VL_ZERO_RESET_W(130, vlSelf->__Vcellout__tile__lce_req_link_o);
    vlSelf->__PVT__tile__DOT__reset_r = 0;
    vlSelf->__PVT__tile__DOT__lce_req_v_li = 0;
    vlSelf->__PVT__tile__DOT__lce_resp_v_li = 0;
    vlSelf->__PVT__tile__DOT__lce_cmd_dst_cord_lo = 0;
    vlSelf->tile__DOT____Vcellout__lce_req_wh_to_stream__link_ready_and_o = 0;
    vlSelf->tile__DOT____Vcellout__lce_resp_wh_to_stream__link_ready_and_o = 0;
    VL_ZERO_RESET_W(256, vlSelf->tile__DOT____Vcellinp__req_concentrator__links_data_i);
    vlSelf->tile__DOT____Vcellinp__req_concentrator__links_v_i = 0;
    VL_ZERO_RESET_W(130, vlSelf->tile__DOT____Vcellout__fill_concentrator__concentrated_link_o);
    VL_ZERO_RESET_W(256, vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_data_i);
    vlSelf->tile__DOT____Vcellinp__resp_concentrator__links_v_i = 0;
    vlSelf->__PVT__tile__DOT__cce_ucode_data_li = 0;
    VL_ZERO_RESET_W(66, vlSelf->tile__DOT____Vcellinp__cce__mem_rev_header_i);
    vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__req_router_cord__cce_cord_o = 0;
    vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__fill_router_cord__lce_cord_o = 0;
    vlSelf->tile__DOT____Vcellout__lce__BRA__0__KET____DOT__resp_router_cord__cce_cord_o = 0;
    vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__req_router_cord__cce_cord_o = 0;
    vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__pr_v_o = 0;
    vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__pr_v_o = 0;
    vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__fill_router_cord__lce_cord_o = 0;
    vlSelf->tile__DOT____Vcellout__lce__BRA__1__KET____DOT__resp_router_cord__cce_cord_o = 0;
    vlSelf->tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_data_yumi_o = 0;
    vlSelf->tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_data_v_o = 0;
    vlSelf->tile__DOT____Vcellout__dma__BRA__0__KET____DOT__dma2wh__dma_pkt_yumi_o = 0;
    vlSelf->tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_data_yumi_o = 0;
    vlSelf->tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_data_v_o = 0;
    vlSelf->tile__DOT____Vcellout__dma__BRA__1__KET____DOT__dma2wh__dma_pkt_yumi_o = 0;
    vlSelf->tile__DOT__lce_req_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i = 0;
    vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce_req_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    vlSelf->tile__DOT__lce_resp_wh_to_stream__DOT____Vcellinp__stream_control__link_accept_i = 0;
    vlSelf->__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce_resp_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_yumis = 0;
    vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__valid_o = 0;
    vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__yumi_o = 0;
    vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o = 0;
    vlSelf->tile__DOT__cmd_concentrator__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__detected_header_o = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__data_sel_o = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__scheduled_with_release = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__v_o = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__inputs_1__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__data_sel_o = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__scheduled_with_release = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__v_o = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__tile__DOT__cmd_concentrator__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__inputs_1__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_v_li = 0;
    VL_ZERO_RESET_W(256, vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__links_data_li);
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_yumis = 0;
    vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__valid_o = 0;
    vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__yumi_o = 0;
    vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__valid_o = 0;
    vlSelf->tile__DOT__fill_concentrator__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__detected_header_o = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__data_sel_o = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__scheduled_with_release = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__v_o = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__inputs_1__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__data_sel_o = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__scheduled_with_release = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__v_o = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__tile__DOT__fill_concentrator__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__inputs_1__DOT__sel_one_hot_n = 0;
    VL_ZERO_RESET_W(128, vlSelf->tile__DOT__core__DOT____Vcellout__rev_xbar__msg_data_o);
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__is_cfg_fwd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__is_clint_fwd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__proc_fwd_dst_sel = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_req_credits_full_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_req_credits_full_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_tag_mem_pkt_yumi_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_pkt_yumi_lo = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_data_mem_lo);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__icache_stat_mem_pkt_yumi_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_tag_mem_pkt_yumi_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_pkt_yumi_lo = 0;
    VL_ZERO_RESET_W(512, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_data_mem_lo);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__dcache_stat_mem_pkt_yumi_lo = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT____Vcellinp__fe_lce__lce_fill_v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT____Vcellinp__fe_lce__lce_cmd_v_i = 0;
    VL_ZERO_RESET_W(174, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_queue_lo);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe_cmd_yumi_li = 0;
    VL_ZERO_RESET_W(114, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT____Vcellout__be__fe_cmd_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_w = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_w = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__attaboy_yumi_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_pc_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__redirect_resume_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ovr_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_hit_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_miss_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__if2_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_force_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tl_flush_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_fence_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_pc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_taken_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_count_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__fetch_catchup_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_r_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_w_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__itlb_fence_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__ptag_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__tv_flush_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__assembled_count_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_priv_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__shadow_translation_en_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghistory_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pc = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_pred_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_br_tgt_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_metadata = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_pred = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__next_taken = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_ret = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_btaken = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_jmp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ovr_rebase = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_taken = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__taken_tgt_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ntaken_tgt_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_r_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_w_force_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_clr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_idx_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_w_offset_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht_row_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__metadata_if1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__metadata_if2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_call_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras_w_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb_miss_br = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT____VdfgExtracted_h620de693__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__init_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__rw_same_addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__w_v_li = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT____Vcellout__btb_mem__r_data_o = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT____VdfgTmp_h939c642d__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__r_addr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__r_addr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__btb_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__btb__DOT__tag_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__init_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__rw_same_addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__w_data_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_idx_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__r_data_lo = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71aa046__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc71170c1__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_hc7a88338__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT____VdfgTmp_h22e177e6__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__r_addr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__r_addr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__w_addr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__bht_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__bht__DOT__pred_idx_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(90, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if1_stage_reg__DOT__data_r);
    VL_ZERO_RESET_W(90, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__if2_stage_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT__init_cnt = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT____Vcellinp__ptr_reg__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT____Vcellout__mem__r_data_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT__ptr_reg__DOT__data_r = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ras__DOT__mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__pc_gen__DOT__ghist_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_r_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_vtag_li = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT____Vcellout__entry_reg__data_o = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT____Vcellinp__entry_reg__data_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_entry_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__tlb_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__ptag_uncached_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__eaddr_canon_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__eaddr_oob_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__instr_access_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__instr_priv_page_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__instr_page_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__any_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__read_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__entry_reg__DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__immu__DOT__entry_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_we = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_we = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tl_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__critical_recv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__snoop_hit = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_li = 0;
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_w_mask_li);
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_data_li);
    VL_ZERO_RESET_W(184, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__tag_mem__data_o);
    VL_ZERO_RESET_W(540, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__hit_mux__data_o);
    VL_ZERO_RESET_W(1080, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__hit_mux__data_i);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__paddr_tv_n = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__paddr_reg__en_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__ld_data_way_select_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_w_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_data_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_mask_li = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__stat_mem__data_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cached_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__uncached_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_or_repl_way = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__do_recover = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_bypass = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_fast_read = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellout__fill_mask_expand__o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bypass = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_fast_write = 0;
    VL_ZERO_RESET_W(512, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__read_data_rotate__data_i);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_read = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem_fast_write = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode_mask_lo = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__0__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__1__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__2__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__3__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__4__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__5__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__6__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vcellinp__data_mems__BRA__7__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h88e6873f__1 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____Vlvbound_h7ea16d69__1 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_he99e1c20__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h89094a34__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h10bb38c6__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hc0d69593__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h952b898d__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_hb1d2c143__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01792c66__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0175fa57__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01708f18__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h012cfe41__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h01027fed__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0105e1f4__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0c27d583__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT____VdfgTmp_h0d9bc4a2__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li = 0;
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out);
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tl_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tl_stage_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__v_tv_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(541, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tv_stage_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__paddr_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__enc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_index_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc25ab652__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__cache_req_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__hit_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__tag_mem_pkt_way_reg__DOT__data_r = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0c68904__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cbf9b9__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0cfeaae__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f3dbc3__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0f65881__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf0fb881c__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf039f92b__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_bank_select_adder__DOT____VdfgTmp_hf025a8a6__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mem_pkt_way_reg__DOT__data_r = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode__DOT____VdfgTmp_hd35049cc__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__lru_decode__DOT____VdfgTmp_hd35d9a4f__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__data_mem_ack_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__tag_mem_ack_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__stat_mem_ack_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__cache_req_ack_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__cache_req_critical_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__cache_req_last_r = 0;
    VL_ZERO_RESET_W(143, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__data_mem_pkt_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__tag_mem_pkt_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__stat_mem_pkt_r = 0;
    VL_ZERO_RESET_W(117, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__cache_req_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__plusargs_en_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__file = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__icache_tracer__DOT__inited = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__0__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__0__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__0__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__0__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__0__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__0__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__1__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__1__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__1__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__1__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__1__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__1__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__2__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__2__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__2__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__2__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__2__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__2__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__3__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__3__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__3__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__3__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__3__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__3__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__4__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__4__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__4__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__4__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__4__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__4__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__5__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__5__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__5__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__5__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__5__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__5__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__6__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__6__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__6__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__6__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__6__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__6__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__7__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__7__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__7__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__7__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__7__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__icache__DOT__data_mems__BRA__7__KET____DOT__data_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____Vcellinp__partial_reg__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT____VdfgTmp_hc8f0f972__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__realigner__DOT__partial_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(125, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__fetch_scan_cast_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__full1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__linear_count = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_vector = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_count = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__last_branch_addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__double_branch = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____Vcellout__branch_decode_mux__data_o = 0;
    VL_ZERO_RESET_W(282, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____Vcellinp__branch_decode_mux__data_i);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__next_sel = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__assembled_rebase = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__curr_instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_full2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_comp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_br = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_jal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_jalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_link_dest = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_link_src = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_cbr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_cj = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__is_cjalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__0__KET____DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__curr_instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_full2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_comp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_br = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_jal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_jalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_link_dest = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_link_src = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_cbr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_cj = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__is_cjalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__1__KET____DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__curr_instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_full2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_comp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_br = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_jal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_jalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_link_dest = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_link_src = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_cbr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_cj = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__is_cjalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__2__KET____DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__curr_instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_full2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_comp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_br = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_jal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_jalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_link_dest = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_link_src = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_cbr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_cj = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__is_cjalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__3__KET____DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__curr_instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_full2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_comp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_br = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_jal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_jalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_link_dest = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_link_src = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_cbr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_cj = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__is_cjalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__4__KET____DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__curr_instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_full2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_comp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_br = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_jal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_jalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_link_dest = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_link_src = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_cbr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_cj = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__is_cjalr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__scan__BRA__5__KET____DOT__imm = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h00b9ad1c__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h4909f4ea__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_hed700d88__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h84b4089a__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h00b5bd53__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_hed64325c__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h541a5473__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h0fcefcd2__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h10c204a3__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h8255be2c__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h002f31fa__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h7dc7606b__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h81b120a2__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h7bb0d2c4__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h8ce4fd51__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h1441d355__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h7acca0e4__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_h92b08297__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT____VdfgTmp_haee8b913__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__enc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__complete_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__enc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__branch_sel_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__enc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__scan__DOT__second_branch_pe__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    VL_ZERO_RESET_W(174, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__fe_queue_cast_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__pc_redirect_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__icache_fill_response_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__icache_fence_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__state_reset_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__itlb_fill_response_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__itlb_fence_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__br_miss_taken = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__attaboy_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_nonattaboy_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_immediate_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__cmd_complex_v = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT____Vcellinp__exception_reg__reset_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__fetch_instr_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__fetch_exception_v = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT____VdfgTmp_he80b2d46__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__fe__DOT__controller__DOT__exception_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__ispec_v = 0;
    VL_ZERO_RESET_W(214, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__commit_pkt);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__decode_info_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_force_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__late_wb_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__expected_npc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__npc_mismatch_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__poison_isd_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__clear_iss_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__resume_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cmd_empty_n_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cmd_empty_r_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__idiv_busy_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__fdiv_busy_lo = 0;
    VL_ZERO_RESET_W(114, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_li);
    VL_ZERO_RESET_W(72, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_pc_redirect_operands);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__npc_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__npc_w_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__last_instr_was_branch = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__last_instr_was_btaken = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__freeze_li = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT____VdfgExtracted_h0b73b880__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT____VdfgExtracted_h0b70c97c__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT____VdfgExtracted_h0b588f2b__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT____VdfgExtracted_h0b742354__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT____VdfgExtracted_h8d17529a__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__npc_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__attaboy_pending_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__enq_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__deq_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__empty = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__full = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__equal_ptrs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__wptr__DOT__n_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__ft__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_RESET_W(114, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__director__DOT__fe_cmd_fifo__DOT__fifo_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__irs1_sb_raw_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__irs2_sb_raw_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__ird_sb_waw_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__irs1_data_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__irs2_data_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frs1_sb_raw_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frs2_sb_raw_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frs3_sb_raw_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frd_sb_waw_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frs1_data_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frs2_data_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frs3_data_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rs1_match_vector = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rs2_match_vector = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rs3_match_vector = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__rd_match_vector = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__instr = 0;
    VL_ZERO_RESET_W(92, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fence_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__cmd_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fflags_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__iscore_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fscore_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__data_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__control_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__struct_haz_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__clear_rd_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__irs1_ispec_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__irs2_ispec_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__irs_match_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__score_int_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__frs_match_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__score_fp_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__dep_status_n = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____VdfgTmp_h6eb52fb8__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____VdfgTmp_h32ca1bc4__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT____VdfgTmp_he4d3fd22__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__int_scoreboard__DOT__scoreboard_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__detector__DOT__fp_scoreboard__DOT__scoreboard_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(366, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__dispatch_pkt_cast_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_walk_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__resume_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__interrupt_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__be_exc_not_instr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fe_exc_not_instr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fe_instr_not_exc_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fe_queue_read_li = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__irf_rs1);
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__irf_rs2);
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__frf_rs1);
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__frf_rs2);
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__frf_rs3);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT____VdfgTmp_h530b7c19__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__dcache_pte = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__level_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__instr_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__store_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__load_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__ppn = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__pte_is_leaf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__common_faults = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__instr_page_fault = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__load_page_fault = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__store_page_fault = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__page_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_start = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_replay = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_next = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_done = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__tlb_w_entry = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT____VdfgTmp_hee722aea__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__miss_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__ptw__DOT__walk_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__preissue_pkt_cast_o = 0;
    VL_ZERO_RESET_W(264, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_pkt_cast_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__empty = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__full = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__deq = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__cptr__n_o = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__wptr__n_o = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__rptr__n_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__preissue_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__bypass_preissue = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellinp__preissue_fifo_mem__w_v_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__preissue_entry_sel = 0;
    VL_ZERO_RESET_W(160, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__preissue_instr);
    VL_ZERO_RESET_W(174, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____Vcellout__queue_fifo_mem__r_data_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__decoded_imm_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__illegal_instr_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ecall_m_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ecall_s_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ecall_u_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__ebreak_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__dbreak_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__dret_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__mret_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__sret_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__wfi_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__sfence_vma_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__fencei_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__csrw_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__0__KET____DOT__instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__1__KET____DOT__instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__2__KET____DOT__instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__3__KET____DOT__instr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__4__KET____DOT__instr = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____VdfgExtracted_hd47060cf__0 = 0;
    VL_ZERO_RESET_W(80, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT____VdfgTmp_h275a4594__0);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__cptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__cptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__cptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__wptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__rptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_ZERO_RESET_W(80, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__preissue_fifo_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__issue_reg__DOT__data_r = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_ZERO_RESET_W(174, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__queue_fifo_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__instr_decoder__DOT__decode_cast_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__0__KET____DOT__expander__DOT__rs1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__0__KET____DOT__expander__DOT__rs2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__0__KET____DOT__expander__DOT__rd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__0__KET____DOT__expander__DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__1__KET____DOT__expander__DOT__rs1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__1__KET____DOT__expander__DOT__rs2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__1__KET____DOT__expander__DOT__rd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__1__KET____DOT__expander__DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__2__KET____DOT__expander__DOT__rs1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__2__KET____DOT__expander__DOT__rs2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__2__KET____DOT__expander__DOT__rd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__2__KET____DOT__expander__DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__3__KET____DOT__expander__DOT__rs1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__3__KET____DOT__expander__DOT__rs2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__3__KET____DOT__expander__DOT__rd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__3__KET____DOT__expander__DOT__imm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__4__KET____DOT__expander__DOT__rs1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__4__KET____DOT__expander__DOT__rs2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__4__KET____DOT__expander__DOT__rd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__issue_queue__DOT__e__BRA__4__KET____DOT__expander__DOT__imm = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__0__KET____DOT__fwd_data_lo);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__0__KET____DOT__fwd_rs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__0__KET____DOT__replace_rs = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__1__KET____DOT__fwd_data_lo);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__1__KET____DOT__fwd_rs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__1__KET____DOT__replace_rs = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__rd_reg__DOT__data_r);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__tworonew__DOT__rf__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__tworonew__DOT__rf__DOT__synth__DOT__nz__DOT__r0_addr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__tworonew__DOT__rf__DOT__synth__DOT__nz__DOT__r1_addr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__0__KET____DOT__rs_r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__0__KET____DOT__rs_addr_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__0__KET____DOT__rs_data_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__1__KET____DOT__rs_r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__1__KET____DOT__rs_addr_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__int_regfile__DOT__bypass__BRA__1__KET____DOT__rs_data_reg__DOT__data_r);
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__0__KET____DOT__fwd_data_lo);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__0__KET____DOT__fwd_rs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__0__KET____DOT__replace_rs = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__1__KET____DOT__fwd_data_lo);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__1__KET____DOT__fwd_rs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__1__KET____DOT__replace_rs = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__2__KET____DOT__fwd_data_lo);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__2__KET____DOT__fwd_rs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__2__KET____DOT__replace_rs = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__rd_reg__DOT__data_r);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__threeronew__DOT__rf__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__threeronew__DOT__rf__DOT__synth__DOT__nz__DOT__r0_addr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__threeronew__DOT__rf__DOT__synth__DOT__nz__DOT__r1_addr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__threeronew__DOT__rf__DOT__synth__DOT__nz__DOT__r2_addr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__0__KET____DOT__rs_r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__0__KET____DOT__rs_addr_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__0__KET____DOT__rs_data_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__1__KET____DOT__rs_r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__1__KET____DOT__rs_addr_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__1__KET____DOT__rs_data_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__2__KET____DOT__rs_r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__2__KET____DOT__rs_addr_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__scheduler__DOT__fp_regfile__DOT__bypass__BRA__2__KET____DOT__rs_data_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__br_pkt_cast_o = 0;
    VL_ZERO_RESET_W(228, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_n);
    VL_ZERO_RESET_W(474, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_n);
    VL_ZERO_RESET_W(79, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_iwb_pkt);
    VL_ZERO_RESET_W(79, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fwb_pkt);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_dcache_load_miss_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_load_misaligned_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_store_misaligned_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys_illegal_instr_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys_data_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_idata_yumi_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fdata_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long_fdata_yumi_lo = 0;
    VL_ZERO_RESET_W(79, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem_late_wb_pkt);
    VL_ZERO_RESET_W(330, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__forward_data);
    VL_ZERO_RESET_W(198, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__bypass_rs);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__pipe_mem__sfence_i = 0;
    VL_ZERO_RESET_W(79, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellout__late_wb_mux_oh__data_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__injection = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__0__KET____DOT__match_rs_onehot = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__1__KET____DOT__match_rs_onehot = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__2__KET____DOT__match_rs_onehot = 0;
    VL_ZERO_RESET_W(521, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_n);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____Vcellinp__catchup__DOT__pipe_int_catchup__flush_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____VdfgTmp_h511ec324__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____VdfgTmp_h163633cc__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____VdfgTmp_h1419e33f__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____VdfgTmp_h0ca296a7__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT____VdfgTmp_h0e7751a0__0 = 0;
    VL_ZERO_RESET_W(366, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_n);
    VL_ZERO_RESET_W(65, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT____Vcellout__frs1_unbox__val_o);
    VL_ZERO_RESET_W(65, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT____Vcellout__frs2_unbox__val_o);
    VL_ZERO_RESET_W(65, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT____Vcellout__frs3_unbox__val_o);
    VL_ZERO_RESET_W(521, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__reservation);
    VL_ZERO_RESET_W(366, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__dispatch_pkt_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs1_unbox__DOT__out_sp_rec__DOT__isInf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs1_unbox__DOT__out_sp_rec__DOT__isSubnormal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs1_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs1_unbox__DOT__out_dp_rec__DOT__isInf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs1_unbox__DOT__out_dp_rec__DOT__sig = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs1_unbox__DOT__out_dp_rec__DOT__isSubnormal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs2_unbox__DOT__out_sp_rec__DOT__isInf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs2_unbox__DOT__out_sp_rec__DOT__isSubnormal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs2_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs2_unbox__DOT__out_dp_rec__DOT__isInf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs2_unbox__DOT__out_dp_rec__DOT__sig = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs2_unbox__DOT__out_dp_rec__DOT__isSubnormal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs3_unbox__DOT__out_sp_rec__DOT__isInf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs3_unbox__DOT__out_sp_rec__DOT__isSubnormal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs3_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs3_unbox__DOT__out_dp_rec__DOT__isInf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs3_unbox__DOT__out_dp_rec__DOT__sig = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__reservation_reg__DOT__frs3_unbox__DOT__out_dp_rec__DOT__isSubnormal = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT____Vcellinp__csr__fflags_acc_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_npc_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_nvaddr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_vaddr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_ndata_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_nsize_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_size_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_ncount_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_count_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_ninstr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_instr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_niscore_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_iscore_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_nfscore_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_fscore_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_nspec_w_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_spec_w_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__retire_data_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__instret_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_data_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__exception_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__interrupt_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sie_rwmask_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mip_wmask_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__debug_mode_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__translation_en_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__is_m_mode = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__dcsr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__dpc_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__dpc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__dscratch0_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__dscratch1_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mstatus_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mstatus_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__medeleg_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__medeleg_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mideleg_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mie_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mie_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mtvec_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mtvec_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcounteren_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mscratch_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mepc_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mepc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mtval_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mtval_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mip_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mip_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcycle_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__minstret_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcountinhibit_li = 0;
    VL_ZERO_RESET_W(1024, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr_li);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg_li);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr0_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr0_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg0_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg0_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr1_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr1_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg1_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg1_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr2_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr2_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg2_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg2_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr3_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr3_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg3_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg3_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr4_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr4_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg4_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg4_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr5_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr5_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg5_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg5_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr6_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr6_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg6_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg6_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr7_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr7_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg7_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg7_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr8_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr8_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg8_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg8_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr9_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr9_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg9_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg9_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr10_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr10_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg10_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg10_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr11_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr11_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg11_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg11_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr12_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr12_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg12_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg12_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr13_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr13_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg13_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg13_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr14_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr14_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg14_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg14_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr15_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpaddr15_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg15_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__pmpcfg15_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__stvec_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__stvec_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__scounteren_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sscratch_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sepc_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sepc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__scause_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__scause_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__stval_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__stval_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__satp_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__satp_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__fcsr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mgie = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sgie = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mti = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__msi = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mei = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sti = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__ssi = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__sei = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_sei = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_ssi = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_sei = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_ssi = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__exception_ecode_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__csr_w_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__enter_debug = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__exit_debug = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__apc_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__ret_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__core_npc = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____Vcellinp__priv_mode_reg__data_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__tval_li = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_h8ced9202__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_h8cf5d065__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_h2e377620__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_h974b936d__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_h8cf5bff6__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_hd0efcca5__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_h8cf53407__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgExtracted_h8cf52418__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_h90d4de9a__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_h54213fe9__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_h6ca3a595__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_h03850b67__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_hb9a50c2b__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_hc8f7c4aa__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_h6b253670__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_h477d5295__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT____VdfgTmp_hbfd1567c__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__enc_lo = 0;
    VL_ZERO_RESET_W(80, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted = 0;
    VL_ZERO_RESET_W(80, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(80, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__v);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__mcause_exception_enc__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    VL_ZERO_RESET_W(80, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__addr);
    VL_ZERO_RESET_W(80, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__v);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__m_interrupt_enc__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    VL_ZERO_RESET_W(80, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__addr);
    VL_ZERO_RESET_W(80, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__v);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__s_interrupt_enc__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__debug_mode_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__apc_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__cfg_npc_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__priv_mode_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__file = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__inited = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__cycle_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__instr_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__perf__DOT__warm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_dcsr__DOT__dcsr_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_dpc__DOT__dpc_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_dscratch0__DOT__dscratch0_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_dscratch1__DOT__dscratch1_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mstatus__DOT__mstatus_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_medeleg__DOT__medeleg_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mideleg__DOT__mideleg_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mie__DOT__mie_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mtvec__DOT__mtvec_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mcounteren__DOT__mcounteren_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mscratch__DOT__mscratch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mepc__DOT__mepc_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mcause__DOT__mcause_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mtval__DOT__mtval_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mip__DOT__mip_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mcycle__DOT__mcycle_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_minstret__DOT__minstret_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_mcountinhibit__DOT__mcountinhibit_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_stvec__DOT__stvec_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_scounteren__DOT__scounteren_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_sscratch__DOT__sscratch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_sepc__DOT__sepc_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_scause__DOT__scause_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_stval__DOT__stval_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_satp__DOT__satp_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_sys__DOT__csr__DOT__creg_fcsr__DOT__fcsr_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fclass_result = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_result);
    VL_ZERO_RESET_W(75, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_raw);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT____Vcellout__i2f_rec_to_raw__sign = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_result = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fsgnj_a = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__flt_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__feq_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__ieee_result = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__iaux_result = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__aux_fflags = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__raw_cast_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__biased_sp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs1_to_raw__DOT__biased_dp = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__raw_cast_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__biased_sp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__frs2_to_raw__DOT__biased_dp = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__sig);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__absIn = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__adjustedNormDist = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__reversed);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__enc_lo);
    VL_ZERO_RESET_W(520, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__6__KET____DOT__shifted);
    VL_ZERO_RESET_W(1024, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(1024, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__v);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__32__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__33__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__34__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__35__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__36__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__37__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__38__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__39__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__40__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__41__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__42__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__43__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__44__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__45__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__46__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__47__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__48__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__49__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__50__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__51__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__52__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__53__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__54__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__55__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__56__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__57__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__58__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__59__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__60__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__61__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__62__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__63__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__16__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__17__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__18__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__19__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__20__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__21__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__22__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__23__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__24__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__25__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__26__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__27__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__28__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__29__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__30__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__31__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__iNToRawFN__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__7__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__roundRawToOut__DOT__genblk2__DOT__anyRound = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f__DOT__roundRawToOut__DOT____VdfgTmp_hea34fb4e__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__i2f_rec_to_raw__DOT__exp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__magJustBelowOne = 0;
    VL_ZERO_RESET_W(117, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__shiftedSig);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_inexact = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundIncr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__roundCarryBut2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__common_overflow = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__invalidExc = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__overflow = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__inexact = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT____VdfgTmp_hc4c9534f__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT____VdfgTmp_he999b775__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2dw__DOT__iNFromException__DOT__maxInt = 0;
    VL_ZERO_RESET_W(85, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__shiftedSig);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_inexact = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundIncr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__roundCarryBut2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__common_overflow = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__overflow = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT__inexact = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT____VdfgTmp_h1485a4d1__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__f2w__DOT____VdfgTmp_hecf30549__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__isNaNA = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__isInfA = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__isSigNaNA = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__isNaNB = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__isInfB = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__sigB = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__isSigNaNB = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__ordered = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__bothInfs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__bothZeros = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__eqHiExps = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__eqExps = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__common_ltMags = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__common_eqMags = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__fcmp__DOT__invalid = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__int_box__DOT__reg_cast_o);
    VL_ZERO_RESET_W(72, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i);
    VL_ZERO_RESET_W(72, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__eaddr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_store = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_load = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_cbo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_ptw = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dtlb_r_size = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT____Vcellinp__dmmu__trans_en_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_pkt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_ptag_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_data = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache_busy_lo = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__req_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_r_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_w_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_vtag_li = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____Vcellout__entry_reg__data_o = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____Vcellinp__entry_reg__data_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_entry_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__tlb_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__ptag_uncached_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__eaddr_canon_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__eaddr_oob_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_access_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_access_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__data_priv_page_fault = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__load_page_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__store_page_fault_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__any_fault_v = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h37a6e350__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_hd1279033__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT____VdfgTmp_h227045bd__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__read_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__r_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__entry_reg__DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dmmu__DOT__entry_reg__DOT__bypass__DOT__data_reg__DOT__dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__freg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__safe_tl_we = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_write_hazard = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__nonblocking_hazard = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__blocking_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__blocking_sent = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__nonblocking_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__flush_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__snoop_v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_w_li = 0;
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_data_li);
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_mask_li);
    VL_ZERO_RESET_W(184, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__tag_mem__data_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_tl = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sc_success_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__sc_fail_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_way_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_way_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_way_select_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__ld_data_dword_merged = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__final_data_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__any_miss_tv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_w_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_data_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_mask_li = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__stat_mem__data_o = 0;
    VL_ZERO_RESET_W(113, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_entry_out);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_force_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_snoop_match_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_reg_data = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_mem_data = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_alu_result = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__atomic_result = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__wbuf_data_mem_mask_in_mux__data_o = 0;
    VL_ZERO_RESET_W(117, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_cast_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__uncached_amo_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__uncached_load_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__uncached_store_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__binval_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__bclean_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__bflush_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__inval_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__clean_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__flush_req = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_fast_read = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__fill_mask_expand__o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_fast_write = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_assoc_read = 0;
    VL_ZERO_RESET_W(512, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__read_data_rotate__data_i);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_read = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_fast_write = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_slow_write = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_mask_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_decode_way_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dirty_mask_lo = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__write_mask_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__0__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__write_mask_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__1__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__write_mask_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__2__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__write_mask_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__3__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__write_mask_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__4__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__write_mask_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__5__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__write_mask_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__6__KET____DOT__data_mem__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__write_mask_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__data_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__addr_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__w_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellinp__d__BRA__7__KET____DOT__data_mem__v_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__0__KET____DOT__tag_match_tl = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__1__KET____DOT__tag_match_tl = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__2__KET____DOT__tag_match_tl = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__3__KET____DOT__tag_match_tl = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__4__KET____DOT__tag_match_tl = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__5__KET____DOT__tag_match_tl = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__6__KET____DOT__tag_match_tl = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_comp_tl__BRA__7__KET____DOT__tag_match_tl = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vcellout__wbuf_in__BRA__1__KET____DOT__expand__o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__2__KET____DOT__slice_data = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_in__BRA__3__KET____DOT__slice_data = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__set_reservation = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__clear_reservation = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__lrsc_lock_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__lrsc_lock_up = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__1 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__1 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h9765fcd0__2 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____Vlvbound_h0977667f__2 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_ha44752dc__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h0ae2a02e__0 = 0;
    VL_ZERO_RESET_W(682, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hf6bad368__0);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_ha5f9224f__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hd3879556__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_ha49e91cc__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hc440fe6b__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h4a137e31__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9a22f7f__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9a7bea0__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9ab0991__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9af18ba__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9b39ff0__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb9b7ac0f__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb4ffbf2a__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_hb4fa4f81__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_h8a14ad6c__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7748342__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he770bfd9__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he77ca33c__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7789bb3__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7204d47__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he72c6400__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he7286cbd__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT____VdfgTmp_he76e4d46__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pkt_decoder__DOT__decode_cast_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__addr_li = 0;
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_out);
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__data_n);
    VL_ZERO_RESET_W(184, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT____VdfgTmp_hc30d6162__0);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(184, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tl_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tl_stage_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__v_tv_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(683, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tv_stage_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__store_hit_index_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__load_hit_index_encoder__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_r = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__read_en = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__addr_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_out = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__data_n = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT____VdfgTmp_hc23b694a__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__lru_encoder__DOT____Vcellout__lru__DOT__rank__BRA__1__KET____DOT__nz__DOT__mux__data_o = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_h19d3127b__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf_data_in_mux__DOT____VdfgTmp_hb9fe24f7__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__num_els_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el0_valid = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el1_valid = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el0_enable = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__el1_enable = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__mux0_sel = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__mux1_sel = 0;
    VL_ZERO_RESET_W(113, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__wbuf_entry0_reg__data_i);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__bypass_word_addr = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge0__sel_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__bypass_data_n = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT____Vcellinp__mux_segmented_merge1__sel_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__bypass_data_masked = 0;
    VL_ZERO_RESET_W(113, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry0_reg__DOT__data_r);
    VL_ZERO_RESET_W(113, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__wbuf_entry1_reg__DOT__data_r);
    VL_ZERO_RESET_W(72, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__wbuf__DOT__bypass_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cache_req_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__cached_hit_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__enc_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__pe_invalid__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__tag_mem_pkt_way_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__data_mem_pkt_way_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__stat_mem_pkt_way_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(138, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__mshr_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__data_mem_ack_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__tag_mem_ack_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__stat_mem_ack_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__cache_req_ack_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__cache_req_critical_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__cache_req_last_r = 0;
    VL_ZERO_RESET_W(143, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__data_mem_pkt_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__tag_mem_pkt_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__stat_mem_pkt_r = 0;
    VL_ZERO_RESET_W(117, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__cache_req_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__plusargs_en_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__file = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__dcache_tracer__DOT__inited = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__load_reserved_v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__dcache__DOT__l1_lrsc__DOT__load_reserved_addr__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__early_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__int_box__DOT__reg_cast_o);
    VL_ZERO_RESET_W(71, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__data_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__final_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_mem__DOT__sync_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__is_faddsub_li = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_a_li);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_b_li);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_c_li);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__invalid_exc = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__is_nan = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__is_inf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__is_zero = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_out_sign = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT____Vcellout__fma__out_sig = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__intermed_CDom_CAlignDist = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__isInfA = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__isInfB = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__isInfC = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__sigC = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__signProd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__sExpAlignedProd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__doSubMags = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__opSignC = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__sNatCAlignDist = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__isMinCAlign = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__CIsDominant = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__sExpSum = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT____Vcellinp__lowMask_CExtraMask____pinNumber1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__reduced4CExtra = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__isNaNAOrB = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__isNaNAny = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__isInfAOrB = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__notNaN_addZeros = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__specialCase = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT__specialNotNaN_signOut = 0;
    VL_ZERO_RESET_W(165, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_preMul__DOT____VdfgTmp_h1e2071df__0);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAdd__DOT__a_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAdd__DOT__b_r = 0;
    VL_ZERO_RESET_W(106, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAdd__DOT__c_r);
    VL_ZERO_RESET_W(107, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAdd__DOT__o_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__signProd = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__doSubMags = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__CIsDominant = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__bit0AlignedSigC = 0;
    VL_ZERO_RESET_W(108, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__CDom_absSigSum);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__CDom_reduced4LowSig = 0;
    VL_ZERO_RESET_W(109, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__notCDom_absSigSum);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced2AbsSigSum = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__notCDom_normDistReduced2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__CDom_grainAlignedLowReduced2Sig = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__notCDom_reduced4AbsSigSum = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__notCDom_sigExtraMask = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT____VdfgTmp_h292ffc5b__0 = 0;
    VL_ZERO_RESET_W(107, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT____VdfgTmp_h3dd96b7e__0);
    VL_ZERO_RESET_W(108, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT____VdfgTmp_hf421f2d9__0);
    VL_ZERO_RESET_W(110, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT____VdfgTmp_h86797bf4__0);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__reversed = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__enc_lo = 0;
    VL_ZERO_RESET_W(392, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__t);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted = 0;
    VL_ZERO_RESET_W(448, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__addr);
    VL_ZERO_RESET_W(448, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__v);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__16__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__17__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__18__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__19__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__20__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__21__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__22__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__23__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__24__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__25__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__26__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__27__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__28__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__29__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__30__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__31__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__8__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__9__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__10__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__11__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__12__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__13__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__14__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__15__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__4__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__5__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__6__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__3__KET____DOT__rof1__BRA__7__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__4__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__5__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma__DOT__mulAddToRaw_postMul__DOT__clz__DOT__pe0__DOT__b__DOT__rof__BRA__6__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_box__DOT__reg_cast_o);
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r);
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r);
    VL_ZERO_RESET_W(71, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT____Vcellinp__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__data_i);
    VL_ZERO_RESET_W(71, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r);
    VL_ZERO_RESET_W(71, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r);
    VL_ZERO_RESET_W(71, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_retiming_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__imul_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__1__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__2__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_v_chain__DOT__chained__DOT__genblk1__BRA__3__KET____DOT__ch_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__int_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fp_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__signed_div_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__signed_opB_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh_v_li = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__imulh__reset_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__idiv__v_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__iresult = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fsqrt_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__invalid_exc = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__infinite_exc = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdivsqrt_pending_reg__reset_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_pending = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__mask_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__shift_counter_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__gets_high_part_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__curr_state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__next_state = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__opA_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__opB_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__result_r = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__adder_result);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__latch_input = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__signed_opA_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__signed_opB_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__need_neg_result_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__signed_opA = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__signed_opB = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__imulh__DOT__all_sh_lsb_zero_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__divisor_msb = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__dividend_msb = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__latch_signed_div_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_sel_lo = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__add1_out);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__add2_out);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opB_sel_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opC_sel_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_ld_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opB_ld_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opC_ld_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_inv_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opB_inv_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_clr_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opB_clr_lo = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__add2_in1);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__adder1_cin_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__req_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opA_reg__DOT__data_r);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opB_reg__DOT__data_r);
    VL_ZERO_RESET_W(65, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__opC_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__q_neg_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__r_neg_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__neg_ld = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__add1_neg_last_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__add2_neg_last_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__state = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__next_state = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__calc_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__calc_up_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__control__DOT__calc_done = 0;
    VL_ZERO_RESET_W(65, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_h2030e2f0__0);
    VL_ZERO_RESET_W(65, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__idiv__DOT__genblk1__DOT__muxC__DOT____VdfgTmp_hb9fe4790__0);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__iwb_reg__DOT__data_r = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__ird_box__DOT__reg_cast_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_div = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__notSigNaNIn_invalidExc_S_sqrt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__specialCaseA_S = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__normalCase_S = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__sExpQuot_S_div = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__oddSqrt_S = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__cycleNum = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__sqrtOp_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__majorExc_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__isNaN_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__isInf_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__isZero_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__sign_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__sExp_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__fractB_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__roundingMode_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__rem_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__notZeroRem_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__sigX_Z = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__idle = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__entering = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__entering_normalCase = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__skipCycle2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__step1Case = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__rem = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__loadDiv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__loadEvenSqrt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__loadOddSqrt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__calcDiv = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__calcSqrt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__trialTerm = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__trialRem1 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__sigXNext = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__remNext = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__trialRem2 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__sigX_N = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__trialTerm_mux__DOT____VdfgTmp_h266de1d4__0 = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdiv__DOT__divSqrtTwoBitPerIter__DOT__divSqrtRecFNToRaw__DOT__trialTerm_mux__DOT____VdfgTmp_hb6541bd9__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_pending_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__grants_unmasked_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_arb__DOT__enc__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    VL_ZERO_RESET_W(79, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h60ce3f98__0);
    VL_ZERO_RESET_W(79, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__late_wb_mux_oh__DOT____VdfgTmp_h223b71f7__0);
    VL_ZERO_RESET_W(395, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__comp_stage_reg__DOT__data_r);
    VL_ZERO_RESET_W(190, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__exc_stage_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__0__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__0__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__0__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__0__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__1__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__1__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__1__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__1__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__2__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__2__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__2__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pencode__BRA__2__KET____DOT__pencode_oh__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    VL_ZERO_RESET_W(521, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__catchup__DOT__catchup_reservation_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__cycle_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__instr_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__stall_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__halt_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__halted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__file = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__watchdog__DOT__inited = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_enq = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq = 0;
    VL_ZERO_RESET_W(467, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_frd_pending = 0;
    VL_ZERO_RESET_W(66, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i);
    VL_ZERO_RESET_W(66, vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__inited = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__0__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__1__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__2__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__3__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__4__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__5__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__6__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__7__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__8__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__9__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__10__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__11__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__12__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__13__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__14__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__15__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__16__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__17__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__18__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__19__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__20__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__21__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__22__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__23__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__24__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__25__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__26__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__27__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__28__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__29__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__30__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__ird_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__ird_fifo__w_enq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__frd_fifo__r_deq_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__wb__BRA__31__KET____DOT__frd_fifo__w_enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__r_ptr_gray_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__r_valid_o_tmp = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        VL_ZERO_RESET_W(467, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__MSYNC_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__w_ptr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__w_ptr_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__w_ptr_p1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__w_ptr_p1_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__w_ptr_gray_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_p1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_p1_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_gray_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i = 0;
    VL_ZERO_RESET_W(256, vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i);
    VL_ZERO_RESET_W(150, vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellinp__lce_fill_fifo__yumi_i = 0;
    VL_ZERO_RESET_W(203, vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT____Vcellout__lce_fill_fifo__data_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__timeout_cnt_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__coherence_blocked = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_done = 0;
    VL_ZERO_RESET_W(117, vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____Vcellout__cache_req_fifo__data_o);
    VL_ZERO_RESET_W(117, vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____Vcellinp__cache_req_fifo__data_i);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__yumi_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__v_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_load_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_store_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__fsm_req_header_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__fsm_req_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__miss_load_v_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__credit_count_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__req_cce_id_lo = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT____VdfgTmp_h140e6b91__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(117, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(203, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_fill_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_req_ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_cmd_ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_fill_ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__lce_resp_ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__plusargs_en_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__file = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__inited = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__latency_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__req_pending = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__cmd_pending = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__fill_pending = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__fe_lce__DOT__lce_tracer__DOT__resp_pending = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_v_i = 0;
    VL_ZERO_RESET_W(256, vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_data_i);
    VL_ZERO_RESET_W(150, vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_cmd_fill_xbar__msg_header_i);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellinp__lce_fill_fifo__yumi_i = 0;
    VL_ZERO_RESET_W(203, vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT____Vcellout__lce_fill_fifo__data_o);
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__timeout_cnt_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__coherence_blocked = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_done = 0;
    VL_ZERO_RESET_W(117, vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT____Vcellout__cache_req_fifo__data_o);
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__yumi_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__v_i = 0;
    vlSelf->tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT____Vcellinp__cache_req_metadata_fifo__data_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__miss_load_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__miss_store_v_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__fsm_req_header_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__fsm_req_v_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__credit_count_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__req_cce_id_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(117, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__request__DOT__cache_req_metadata_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(203, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_fill_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_req_ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_cmd_ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_fill_ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__lce_resp_ack = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__plusargs_en_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__file = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__inited = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__latency_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__req_pending = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__cmd_pending = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__fill_pending = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__be_lce__DOT__lce_tracer__DOT__resp_pending = 0;
    VL_ZERO_RESET_W(589, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__posedge_latch__DOT__data_r);
    VL_ZERO_RESET_W(410, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__negedge_latch__DOT__data_r);
    VL_ZERO_RESET_W(194, vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__cb__i);
    VL_ZERO_RESET_W(197, vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT____Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o);
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__2__KET____DOT__pump_control__ack_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__3__KET____DOT__pump_control__ack_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT____Vcellinp__sink_comb__BRA__4__KET____DOT__pump_control__ack_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT__o_select = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__req_words_reg__en_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__rr0__yumi_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__0__KET____DOT__rr0__grants_o = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__req_words_reg__en_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__1__KET____DOT__rr0__yumi_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__1__KET____DOT__rr0__grants_o = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__2__KET____DOT__req_words_reg__en_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__2__KET____DOT__rr0__grants_o = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__3__KET____DOT__req_words_reg__en_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__3__KET____DOT__rr0__grants_o = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__4__KET____DOT__req_words_reg__en_i = 0;
    vlSelf->tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__4__KET____DOT__rr0__grants_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT__rr__BRA__1__KET____DOT__req_words_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT__rr__BRA__2__KET____DOT__req_words_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT__rr__BRA__3__KET____DOT__req_words_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__cbc__DOT__rr__BRA__4__KET____DOT__req_words_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(197, vlSelf->__PVT__tile__DOT__core__DOT__fwd_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    VL_ZERO_RESET_W(194, vlSelf->tile__DOT__core__DOT__rev_xbar__DOT____Vcellout__cb__o);
    VL_ZERO_RESET_W(195, vlSelf->tile__DOT__core__DOT__rev_xbar__DOT____Vcellout__buffer__BRA__0__KET____DOT__in_fifo__data_o);
    VL_ZERO_RESET_W(195, vlSelf->tile__DOT__core__DOT__rev_xbar__DOT____Vcellout__buffer__BRA__1__KET____DOT__in_fifo__data_o);
    VL_ZERO_RESET_W(195, vlSelf->tile__DOT__core__DOT__rev_xbar__DOT____Vcellout__buffer__BRA__2__KET____DOT__in_fifo__data_o);
    VL_ZERO_RESET_W(195, vlSelf->tile__DOT__core__DOT__rev_xbar__DOT____Vcellout__buffer__BRA__3__KET____DOT__in_fifo__data_o);
    VL_ZERO_RESET_W(195, vlSelf->tile__DOT__core__DOT__rev_xbar__DOT____Vcellout__buffer__BRA__4__KET____DOT__in_fifo__data_o);
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__sink_comb__BRA__0__KET____DOT__msg_last_lo = 0;
    vlSelf->tile__DOT__core__DOT__rev_xbar__DOT____Vcellinp__sink_comb__BRA__0__KET____DOT__pump_control__ack_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr_yumi_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__reqs_li = 0;
    vlSelf->tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT____Vcellinp__rr__BRA__0__KET____DOT__req_words_reg__en_i = 0;
    vlSelf->tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT____Vcellout__rr__BRA__0__KET____DOT__rr0__grants_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__req_words_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__thermocode_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__edge_detect = 0;
    vlSelf->tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT____VdfgTmp_h50a24305__0 = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__cbc__DOT__rr__BRA__0__KET____DOT__rr0__DOT__fi2__DOT__barrc__DOT__fi2__DOT__scan__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(195, vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__0__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__1__KET____DOT__in_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__1__KET____DOT__in_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__1__KET____DOT__in_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__1__KET____DOT__in_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__1__KET____DOT__in_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(195, vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__1__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__2__KET____DOT__in_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__2__KET____DOT__in_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__2__KET____DOT__in_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__2__KET____DOT__in_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__2__KET____DOT__in_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(195, vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__2__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__3__KET____DOT__in_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__3__KET____DOT__in_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__3__KET____DOT__in_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__3__KET____DOT__in_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__3__KET____DOT__in_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(195, vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__3__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__4__KET____DOT__in_fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__4__KET____DOT__in_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__4__KET____DOT__in_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__4__KET____DOT__in_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__4__KET____DOT__in_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(195, vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__buffer__BRA__4__KET____DOT__in_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__first_cnt = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__rev_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__DOT__nz__DOT__cnt_lo = 0;
    vlSelf->tile__DOT__core__DOT__rev_xbar__DOT__sink_comb__BRA__0__KET____DOT__pump_control__DOT____VdfgTmp_he38ce85f__0 = 0;
    vlSelf->tile__DOT__core__DOT__cfgs__DOT____Vcellout__cfgs_register__w_v_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__freeze_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__npc_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_mode_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_mode_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_mode_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__hio_mask_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__icache_id_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__dcache_id_li = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cfgs_register__DOT__v_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cfgs_register__DOT__rdata_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cfgs_register__DOT__addr_match = 0;
    vlSelf->tile__DOT__core__DOT__cfgs__DOT__cfgs_register__DOT__fwd_fifo__DOT____Vcellinp__dff_full__data_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cfgs_register__DOT__fwd_fifo__DOT__dff_full__DOT__data_r = 0;
    VL_ZERO_RESET_W(194, vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cfgs_register__DOT__fwd_fifo__DOT__dff__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cfgs_register__DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cfgs_register__DOT__fwd_bus_pack__DOT__data_lo = 0;
    vlSelf->tile__DOT__core__DOT__clints__DOT____Vcellout__clints_register__w_v_o = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clk_ds_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__rt_clk_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clints_register__DOT__v_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clints_register__DOT__rdata_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clints_register__DOT__addr_match = 0;
    vlSelf->tile__DOT__core__DOT__clints__DOT__clints_register__DOT__fwd_fifo__DOT____Vcellinp__dff_full__data_i = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clints_register__DOT__fwd_fifo__DOT__dff_full__DOT__data_r = 0;
    VL_ZERO_RESET_W(194, vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clints_register__DOT__fwd_fifo__DOT__dff__DOT__data_r);
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clints_register__DOT__v_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__clints_register__DOT__fwd_bus_pack__DOT__data_lo = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtimesel_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__S_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__C_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__new_val = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__C_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__ds__DOT__strobe__DOT__S_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__w_ptr_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__w_ptr_p1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__w_ptr_p1_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__w_ptr_gray_n = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__1__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__1__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__1__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__2__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__2__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__2__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__3__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__3__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__3__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__4__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__4__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__4__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__5__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__5__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__5__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__6__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__6__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__6__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__7__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__7__KET____DOT__blss__DOT__bsg_SYNC_1_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtime_gray__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__7__KET____DOT__blss__DOT__bsg_SYNC_2_r = 0;
    VL_ZERO_RESET_W(448, vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__t);
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__2__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__3__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__4__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__g2b__DOT__scan_xor__DOT__scanN__DOT__row__BRA__5__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mtimecmp_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__mipi_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__plic_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__clints__DOT__debug_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__loopback__DOT__fsm_fwd_yumi_li = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__slice_select__DOT__data_i);
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__slice_select__DOT__is_tag_op = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__rof__BRA__1__KET____DOT__rof1__BRA__2__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__rof__BRA__1__KET____DOT__rof1__BRA__3__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__rof__BRA__2__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__core__DOT__fwd_dest__BRA__0__KET____DOT__fwd_pe__DOT__rof__BRA__3__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__plusargs_en_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__file = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__cce_tracer__DOT__inited = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_req_yumi_lo = 0;
    VL_ZERO_RESET_W(75, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_header_lo);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_data_lo);
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_cmd_v_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_v_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_yumi_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_resp_last_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_rev_yumi_lo = 0;
    VL_ZERO_RESET_W(66, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_header_lo);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_data_lo);
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fsm_fwd_v_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cce_normal_mode_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cce_normal_mode_n = 0;
    VL_ZERO_RESET_W(134, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_r);
    VL_ZERO_RESET_W(134, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mshr_n);
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_r_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_w_addr = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_busy = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_cmd_busy = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_r_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_w_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_cmd = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_v_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_hits_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_busy_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_addr_bypass_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lce_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_way_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_lru_way_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__dir_coh_state_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_uf_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_csf_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cef_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cmf_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cof_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad_cff_lo = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____Vcellout__directory__sharers_coh_states_o = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____Vcellout__directory__sharers_ways_o = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____Vcellinp__gad__gad_v_i = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__req_pma_cacheable_addr_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_pma_cacheable_addr_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__rev_pma_cacheable_addr_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_rst = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_inc = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_dec = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_clr = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0_inc = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_0 = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_clr = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1_inc = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__cnt_1 = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__mem_credit_count_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_w_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_v_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__squash_v_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__fwd_mod_v_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__state_v_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_sharers_n = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pe_lce_id = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_ways_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_ways_n = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_hits_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_hits_n = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__lce_resp_coh_ack_yumi = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__transfer_flag = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__uc_inv_owner = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__invalidate_flag = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____VdfgExtracted_hf7da3a43__0 = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT____VdfgTmp_h32362ea5__0 = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__msg_yumi_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__stream_size = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__cnt_up = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT____VdfgExtracted_h5933db0c__5 = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellinp__fifo__yumi_i = 0;
    VL_ZERO_RESET_W(188, vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT____Vcellout__fifo__data_o);
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__enq_i = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(188, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__size_li = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__addr_mask = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__base_addr = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_r = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__pump_control__DOT__nz__DOT__cnt_lo = 0;
    VL_ZERO_RESET_W(96, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_r);
    VL_ZERO_RESET_W(96, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT__pending_bits_n);
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT____Vlvbound_h675b2708__1 = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__pending_bits__DOT____Vlvbound_h675b2708__2 = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_icache = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__lce_is_dcache = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_r_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__icache_w_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_r_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__directory__DOT__dcache__DOT__dcache_w_v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_E = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_M = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_O = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_F = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__req_lce_cached = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_one_hot = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__owner_lce_lo = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT____VdfgTmp_hf9b9d42f__0 = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT____VdfgTmp_h347b9d5e__0 = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_to_lce_id__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_to_lce_id__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_to_lce_id__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_to_lce_id__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__gad__DOT__lce_cached_to_lce_id__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    VL_ZERO_RESET_W(192, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_r);
    VL_ZERO_RESET_W(192, vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT__spec_bits_n);
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb8193ef0__0 = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb85225f3__0 = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_hb851304c__0 = 0;
    vlSelf->tile__DOT__cce__DOT__t__DOT__cce__DOT__spec_bits__DOT____Vlvbound_h69ffed01__0 = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__enc_lo = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__t = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__0__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__a__DOT__nw1__DOT__scan__DOT__scanN__DOT__row__BRA__1__KET____DOT__shifted = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__b__DOT__addr = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__b__DOT__v = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__b__DOT__rof__BRA__1__KET____DOT__rof1__BRA__1__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__cce__DOT__t__DOT__cce__DOT__sharers_pri_enc__DOT__b__DOT__rof__BRA__2__KET____DOT__rof1__BRA__0__KET____DOT__vs = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__reqs = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__data_sel_lo = 0;
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__yumi_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__0__KET____DOT__twofer__data_o);
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellinp__in_ch__BRA__1__KET____DOT__twofer__yumi_i = 0;
    VL_ZERO_RESET_W(128, vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT____Vcellout__in_ch__BRA__1__KET____DOT__twofer__data_o);
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en = 0;
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out);
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__enque = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__full = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__empty = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__rptr_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_mem_en = 0;
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT____VdfgTmp_h106e2711__0 = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__enq_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__deq_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__equal_ptrs = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__rptr__DOT__ptr_wrap = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__n_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_nowrap = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__fts__DOT__wptr__DOT__ptr_wrap = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__mem[__Vi0]);
    }
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__data_out);
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__r_addr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__read_en_dff__DOT__data_r = 0;
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__mem_1r1w_sync__DOT__synth__DOT__nz__DOT__llr__DOT__dff_bypass__DOT__dff__DOT__data_r);
    VL_ZERO_RESET_W(128, vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__bypass_reg__DOT__data_r);
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__twofer__DOT__hardened__DOT__fifo__DOT__read_write_same_addr_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_in__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_yumis = 0;
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__0__KET____DOT__concentrated_woc__yumi_o = 0;
    vlSelf->tile__DOT__dma_concentrate__DOT__concentrator_out__DOT____Vcellout__out_ch__BRA__1__KET____DOT__concentrated_woc__yumi_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_wic__DOT__detected_header_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__concentrated_wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__data_sel_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__scheduled_with_release = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__v_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__0__KET____DOT__concentrated_woc__DOT__brr__DOT__inputs_1__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__data_sel_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__scheduled_with_release = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__v_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__tile__DOT__dma_concentrate__DOT__concentrator_out__DOT__out_ch__BRA__1__KET____DOT__concentrated_woc__DOT__brr__DOT__inputs_1__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__0__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_cmd_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__state_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__set_counter = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__hdr_flit_counter__DOT__ctr_n = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_r = 0;
    vlSelf->__PVT__tile__DOT__lce__BRA__1__KET____DOT__lce_fill_wh_to_stream__DOT__stream_control__DOT__data_flit_counter__DOT__ctr_n = 0;
    VL_ZERO_RESET_W(130, vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__wh_link_sif_out);
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__dma_pkt_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__dma_pkt_lo = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__return_fifo_ready_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__return_fifo_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__send_clear_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__send_up_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__send_count_lo = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__send_state_n = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__send_state_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__recv_clear_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__recv_up_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__recv_count_lo = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__recv_state_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__recv_state_n = 0;
    vlSelf->tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT____Vcellinp__br__DOT__return_fifo__v_i = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__dma__BRA__0__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(130, vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__wh_link_sif_out);
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__dma_pkt_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__dma_pkt_lo = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__return_fifo_ready_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__return_fifo_yumi_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__send_clear_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__send_up_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__send_count_lo = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__send_state_n = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__send_state_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__recv_clear_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__recv_up_li = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__recv_count_lo = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__recv_state_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__recv_state_n = 0;
    vlSelf->tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT____Vcellinp__br__DOT__return_fifo__v_i = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__head_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__tail_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__empty_r = 0;
    vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__full_r = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__tile__DOT__dma__BRA__1__KET____DOT__dma2wh__DOT__dma_pkt_fifo__DOT__mem_1r1w__DOT__synth__DOT__nz__DOT__mem[__Vi0] = 0;
    }
    VL_ZERO_RESET_W(650, vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__0__KET____DOT__router__link_i);
    VL_ZERO_RESET_W(650, vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__1__KET____DOT__router__link_i);
    VL_ZERO_RESET_W(650, vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__2__KET____DOT__router__link_i);
    VL_ZERO_RESET_W(650, vlSelf->core_coh_socket__DOT____Vcellinp__routers__BRA__3__KET____DOT__router__link_i);
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__conc__i = 0;
    VL_ZERO_RESET_W(128, vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__in_ch__BRA__0__KET____DOT__twofer__data_i);
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__detected_header_lo = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__yumis_li = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__detected_header_lo = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__yumis_li = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__detected_header_lo = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__data_sel_lo = 0;
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellinp__out_ch__BRA__0__KET____DOT__conc__i = 0;
    VL_ZERO_RESET_W(128, vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__0__KET____DOT__data_mux__data_o);
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__reqs_li = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__data_sel_lo = 0;
    VL_ZERO_RESET_W(256, vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__1__KET____DOT__conc4__o);
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__reqs_li = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__release_li = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__valids_li = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__data_sel_lo = 0;
    VL_ZERO_RESET_W(256, vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT____Vcellout__out_ch__BRA__2__KET____DOT__conc4__o);
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__dor__DOT__gt = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__0__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__1__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__in_ch__BRA__2__KET____DOT__wic__DOT__ctr__DOT__ctr_n = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT____VdfgTmp_h346d7ded__0 = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__0__KET____DOT__woc__DOT__brr__DOT__inputs_3__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__1__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_with_release = 0;
    vlSelf->core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT____VdfgTmp_hc8ebdcaa__0 = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__scheduled_reg__DOT__data_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__tag_o = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_n = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__last_r = 0;
    vlSelf->__PVT__core_mem_socket__DOT__routers__BRA__0__KET____DOT__router__DOT__out_ch__BRA__2__KET____DOT__woc__DOT__brr__DOT__inputs_2__DOT__sel_one_hot_n = 0;
    vlSelf->__VdfgTmp_h4576072f__0 = 0;
    vlSelf->__VdfgTmp_h003c496b__0 = 0;
    vlSelf->__VdfgTmp_h00dded05__0 = 0;
    vlSelf->__VdfgTmp_hb841de84__0 = 0;
    vlSelf->__VdfgTmp_h687a5073__0 = 0;
    vlSelf->__VdfgTmp_hfa1d3768__0 = 0;
    vlSelf->__VdfgTmp_hfb6fa7fa__0 = 0;
    vlSelf->__VdfgTmp_h76cbdbbe__0 = 0;
    vlSelf->__VdfgTmp_h24a34461__0 = 0;
    vlSelf->__VdfgTmp_h4baa9e1a__0 = 0;
    vlSelf->__VdfgTmp_h96b67f8c__0 = 0;
    vlSelf->__VdfgTmp_hba6ba570__0 = 0;
    vlSelf->__VdfgTmp_h9c8384e1__0 = 0;
    vlSelf->__VdfgTmp_h12075f19__0 = 0;
    vlSelf->__VdfgTmp_h887c69c7__0 = 0;
    vlSelf->__VdfgTmp_h18859612__0 = 0;
    vlSelf->__VdfgTmp_h1a09d761__0 = 0;
    vlSelf->__VdfgTmp_h3fbcb2da__0 = 0;
    vlSelf->__VdfgTmp_h2a0cdb2c__0 = 0;
    vlSelf->__VdfgTmp_h5aa5a758__0 = 0;
    vlSelf->__VdfgTmp_h5788d3e1__0 = 0;
    vlSelf->__VdfgTmp_h9c1c3bbd__0 = 0;
    vlSelf->__VdfgTmp_hce22c147__0 = 0;
    vlSelf->__VdfgTmp_h77700cbe__0 = 0;
    vlSelf->__VdfgTmp_h3c00731a__0 = 0;
    vlSelf->__VdfgTmp_ha89e88d7__0 = 0;
    vlSelf->__VdfgTmp_h43d5e65d__0 = 0;
    vlSelf->__VdfgTmp_h8c20a271__0 = 0;
    vlSelf->__VdfgTmp_h9e5bbcd0__0 = 0;
    vlSelf->__VdfgTmp_h516ecca4__0 = 0;
    vlSelf->__VdfgTmp_h51f507ca__0 = 0;
    vlSelf->__VdfgTmp_h54d7d64d__0 = 0;
    vlSelf->__VdfgTmp_h6bbb87e6__0 = 0;
    vlSelf->__VdfgTmp_he2febcd2__0 = 0;
    vlSelf->__VdfgTmp_hd4f0babf__0 = 0;
    vlSelf->__VdfgTmp_h1261ea28__0 = 0;
    vlSelf->__VdfgTmp_h0872512d__0 = 0;
    vlSelf->__VdfgTmp_h1539ddc4__0 = 0;
    vlSelf->__VdfgTmp_h1ac49fe7__0 = 0;
    vlSelf->__VdfgTmp_he566d9a7__0 = 0;
    vlSelf->__VdfgTmp_h9f18a8fb__0 = 0;
    VL_ZERO_RESET_W(96, vlSelf->__VdfgTmp_h32b19759__0);
    VL_ZERO_RESET_W(384, vlSelf->__VdfgTmp_h149788ac__0);
    vlSelf->__VdfgTmp_h50e17902__0 = 0;
    vlSelf->__VdfgTmp_h2d144dc2__0 = 0;
    vlSelf->__VdfgTmp_h34b8b2ab__0 = 0;
    vlSelf->__VdfgTmp_h086a8c7e__0 = 0;
    vlSelf->__VdfgTmp_h0dbde7ed__0 = 0;
    vlSelf->__VdfgTmp_h3dea1395__0 = 0;
    vlSelf->__VdfgTmp_h26fbe7e1__0 = 0;
    vlSelf->__VdfgTmp_h9811c712__0 = 0;
    vlSelf->__VdfgTmp_h7d5c756b__0 = 0;
    vlSelf->__VdfgTmp_h794697ba__0 = 0;
    vlSelf->__VdfgTmp_h642700a5__0 = 0;
    vlSelf->__VdfgTmp_ha23ee035__0 = 0;
    vlSelf->__VdfgTmp_hf489df16__0 = 0;
    vlSelf->__VdfgTmp_hacb05d45__0 = 0;
    vlSelf->__VdfgTmp_had4abe62__0 = 0;
    vlSelf->__VdfgTmp_ha8b777c1__0 = 0;
    vlSelf->__VdfgTmp_h94a40267__0 = 0;
    vlSelf->__VdfgTmp_h90e5418e__0 = 0;
    vlSelf->__VdfgTmp_h207c7b11__0 = 0;
    vlSelf->__VdfgTmp_h3268dc3b__0 = 0;
    vlSelf->__VdfgTmp_h2a10eca3__0 = 0;
    vlSelf->__VdfgTmp_h9e6597dd__0 = 0;
    vlSelf->__VdfgTmp_hac6b7584__0 = 0;
    vlSelf->__VdfgTmp_h3d9f4cbf__0 = 0;
    vlSelf->__VdfgTmp_ha1025ae9__0 = 0;
    vlSelf->__VdfgTmp_h8e39025d__0 = 0;
    vlSelf->__VdfgTmp_he36db9a2__0 = 0;
    vlSelf->__VdfgTmp_hd1480425__0 = 0;
    vlSelf->__VdfgTmp_ha2b9ba48__0 = 0;
    vlSelf->__VdfgTmp_hbc76689f__0 = 0;
    vlSelf->__VdfgTmp_haca5a853__0 = 0;
    vlSelf->__VdfgTmp_hacc5df08__0 = 0;
    vlSelf->__VdfgTmp_h9126797d__0 = 0;
    vlSelf->__VdfgTmp_hb09cd8bf__0 = 0;
    vlSelf->__VdfgTmp_h870f76f2__0 = 0;
    vlSelf->__VdfgTmp_hb75ec05f__0 = 0;
    vlSelf->__VdfgTmp_h354fa099__0 = 0;
    vlSelf->__VdfgTmp_h372d3438__0 = 0;
    vlSelf->__VdfgTmp_h393dabfe__0 = 0;
    vlSelf->__VdfgTmp_h3d84d170__0 = 0;
    vlSelf->__VdfgTmp_h256b24a6__0 = 0;
    vlSelf->__VdfgTmp_h0f4c7e23__0 = 0;
    vlSelf->__VdfgTmp_h4a121ab9__0 = 0;
    vlSelf->__VdfgTmp_hb78f3160__0 = 0;
    vlSelf->__VdfgTmp_h623cc34c__0 = 0;
    vlSelf->__VdfgTmp_ha04c6bf8__0 = 0;
    vlSelf->__VdfgTmp_h1709325b__0 = 0;
    vlSelf->__VdfgTmp_h1782175f__0 = 0;
    vlSelf->__VdfgTmp_h4697936b__0 = 0;
    vlSelf->__VdfgTmp_hac6c2f6a__0 = 0;
    vlSelf->__VdfgTmp_h6442e4df__0 = 0;
    vlSelf->__VdfgTmp_h8341a162__0 = 0;
    vlSelf->__VdfgTmp_h710fb075__0 = 0;
    vlSelf->__VdfgTmp_hc05ad450__0 = 0;
    vlSelf->__VdfgTmp_hcb5afe62__0 = 0;
    vlSelf->__VdfgTmp_hd968c581__0 = 0;
    vlSelf->__VdfgTmp_hb04b8aa4__0 = 0;
    vlSelf->__VdfgTmp_hf4f0a807__0 = 0;
    vlSelf->__VdfgTmp_h9d12f3da__0 = 0;
    vlSelf->__VdfgTmp_h822baf81__0 = 0;
    vlSelf->__VdfgTmp_hf4ef8f45__0 = 0;
    vlSelf->__VdfgTmp_h36be5946__0 = 0;
    vlSelf->__VdfgTmp_h3721f29a__0 = 0;
    vlSelf->__VdfgTmp_hc5f83ad4__0 = 0;
    vlSelf->__VdfgTmp_h0b14a7bb__0 = 0;
    vlSelf->__VdfgTmp_h0e039a24__0 = 0;
    vlSelf->__VdfgTmp_h77657a03__0 = 0;
    vlSelf->__VdfgTmp_h7a3ac4eb__0 = 0;
    vlSelf->__VdfgTmp_h48bb345d__0 = 0;
    vlSelf->__VdfgTmp_h99d1840d__0 = 0;
    vlSelf->__VdfgTmp_hb697f037__0 = 0;
    vlSelf->__VdfgTmp_hfa5ccaff__0 = 0;
    vlSelf->__VdfgTmp_hdcea8e3c__0 = 0;
    vlSelf->__VdfgTmp_h8ddc59bd__0 = 0;
    vlSelf->__VdfgTmp_hc6c67d9e__0 = 0;
    vlSelf->__VdfgTmp_hc3abc214__0 = 0;
    vlSelf->__VdfgTmp_hb62c6968__0 = 0;
    vlSelf->__VdfgTmp_h658c8cdb__0 = 0;
    vlSelf->__VdfgTmp_ha462bda2__0 = 0;
    vlSelf->__VdfgTmp_ha2e7adf6__0 = 0;
    vlSelf->__VdfgTmp_h7aa856d4__0 = 0;
    vlSelf->__VdfgTmp_h65096c67__0 = 0;
    vlSelf->__VdfgTmp_h02d2168f__0 = 0;
    vlSelf->__VdfgTmp_h29c37e91__0 = 0;
    vlSelf->__VdfgTmp_h78e49d68__0 = 0;
    vlSelf->__VdfgTmp_h662f62d7__0 = 0;
    vlSelf->__VdfgTmp_h63b429a4__0 = 0;
    vlSelf->__VdfgTmp_h548897a6__0 = 0;
    vlSelf->__VdfgTmp_h9a536b62__0 = 0;
    vlSelf->__VdfgTmp_h94c723fb__0 = 0;
    vlSelf->__VdfgTmp_h6ffdaeb5__0 = 0;
    vlSelf->__VdfgTmp_h1ad469e1__0 = 0;
    vlSelf->__VdfgTmp_h1a5590ca__0 = 0;
    vlSelf->__VdfgTmp_h0daeebb5__0 = 0;
    vlSelf->__VdfgTmp_h95abd302__0 = 0;
    vlSelf->__VdfgTmp_h39a13ce8__0 = 0;
    vlSelf->__VdfgTmp_h67654a04__0 = 0;
    vlSelf->__VdfgTmp_h0b97170b__0 = 0;
    vlSelf->__VdfgTmp_h7b2c4021__0 = 0;
    vlSelf->__VdfgTmp_h6df19a25__0 = 0;
    vlSelf->__VdfgTmp_h5cc632aa__0 = 0;
    vlSelf->__VdfgTmp_h53b4c29d__0 = 0;
    vlSelf->__VdfgTmp_h78a32db5__0 = 0;
    vlSelf->__VdfgTmp_h17ff034e__0 = 0;
    vlSelf->__VdfgTmp_h12c9814b__0 = 0;
    vlSelf->__VdfgTmp_h7be20b3a__0 = 0;
    vlSelf->__VdfgTmp_h26b47603__0 = 0;
    vlSelf->__VdfgTmp_h2f3b6e44__0 = 0;
    vlSelf->__VdfgTmp_h2e31a902__0 = 0;
    vlSelf->__VdfgTmp_hf0c4d09a__0 = 0;
    VL_ZERO_RESET_W(384, vlSelf->__VdfgTmp_h2d6add5a__0);
    vlSelf->__VdfgTmp_h6bcf8fad__0 = 0;
    vlSelf->__VdfgTmp_hf48ed7b9__0 = 0;
    vlSelf->__VdfgTmp_h5f274b8d__0 = 0;
    vlSelf->__VdfgTmp_h9487993f__0 = 0;
    vlSelf->__VdfgTmp_hc65958a5__0 = 0;
    vlSelf->__VdfgTmp_hce79832a__0 = 0;
    vlSelf->__VdfgTmp_h192a1e68__0 = 0;
    vlSelf->__VdfgTmp_h1989588e__0 = 0;
    vlSelf->__VdfgTmp_h35c081d3__0 = 0;
    vlSelf->__VdfgTmp_h5f1df0c4__0 = 0;
    vlSelf->__VdfgTmp_h9c93717e__0 = 0;
    vlSelf->__VdfgTmp_h51686f97__0 = 0;
    vlSelf->__VdfgTmp_hc68e922d__0 = 0;
    vlSelf->__Vdly__tile__DOT__cce__DOT__t__DOT__cce__DOT__resp_pump_in__DOT__gearbox__DOT__fifo__DOT__full_r = 0;
}
