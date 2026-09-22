// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench___024root.h"

// Parameter definitions for Vtestbench___024root
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__ic__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__mc__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cac__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cac__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cac__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__sac__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__sac__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__sac__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_fwd_wormhole_to_stream__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__mem_rev_wormhole_to_stream__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__loader__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__loader__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__loader__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__host__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__host__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__host__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__host__DOT__register__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__host__DOT__register__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__host__DOT__register__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__if_verif__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__if_verif__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench___024root::testbench__DOT__if_verif__DOT__dma_noc_cord_markers_pos_p;


void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf);

Vtestbench___024root::Vtestbench___024root(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench___024root___ctor_var_reset(this);
}

void Vtestbench___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench___024root::~Vtestbench___024root() {
}
