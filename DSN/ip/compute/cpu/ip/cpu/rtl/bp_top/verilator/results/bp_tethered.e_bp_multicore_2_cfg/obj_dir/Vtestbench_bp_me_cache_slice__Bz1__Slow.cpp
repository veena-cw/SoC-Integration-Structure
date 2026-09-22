// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_cache_slice__Bz1.h"

// Parameter definitions for Vtestbench_bp_me_cache_slice__Bz1
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__stream_pump__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__stream_pump__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__stream_pump__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__bank_select__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__bank_select__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__cache_controller__DOT__bank_select__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__bank__BRA__0__KET____DOT__dma_addr_hash_decode__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__bank__BRA__0__KET____DOT__dma_addr_hash_decode__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_cache_slice__Bz1::__PVT__bank__BRA__0__KET____DOT__dma_addr_hash_decode__DOT__dma_noc_cord_markers_pos_p;


void Vtestbench_bp_me_cache_slice__Bz1___ctor_var_reset(Vtestbench_bp_me_cache_slice__Bz1* vlSelf);

Vtestbench_bp_me_cache_slice__Bz1::Vtestbench_bp_me_cache_slice__Bz1(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bp_me_cache_slice__Bz1___ctor_var_reset(this);
}

void Vtestbench_bp_me_cache_slice__Bz1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bp_me_cache_slice__Bz1::~Vtestbench_bp_me_cache_slice__Bz1() {
}
