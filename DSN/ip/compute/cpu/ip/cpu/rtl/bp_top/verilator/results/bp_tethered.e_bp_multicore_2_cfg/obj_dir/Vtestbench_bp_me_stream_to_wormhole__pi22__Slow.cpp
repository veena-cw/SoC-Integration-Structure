// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_me_stream_to_wormhole__pi22.h"

// Parameter definitions for Vtestbench_bp_me_stream_to_wormhole__pi22
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_stream_to_wormhole__pi22::__PVT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_stream_to_wormhole__pi22::__PVT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_stream_to_wormhole__pi22::__PVT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_stream_to_wormhole__pi22::__PVT__encode__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_stream_to_wormhole__pi22::__PVT__encode__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_me_stream_to_wormhole__pi22::__PVT__encode__DOT__dma_noc_cord_markers_pos_p;


void Vtestbench_bp_me_stream_to_wormhole__pi22___ctor_var_reset(Vtestbench_bp_me_stream_to_wormhole__pi22* vlSelf);

Vtestbench_bp_me_stream_to_wormhole__pi22::Vtestbench_bp_me_stream_to_wormhole__pi22(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bp_me_stream_to_wormhole__pi22___ctor_var_reset(this);
}

void Vtestbench_bp_me_stream_to_wormhole__pi22::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bp_me_stream_to_wormhole__pi22::~Vtestbench_bp_me_stream_to_wormhole__pi22() {
}
