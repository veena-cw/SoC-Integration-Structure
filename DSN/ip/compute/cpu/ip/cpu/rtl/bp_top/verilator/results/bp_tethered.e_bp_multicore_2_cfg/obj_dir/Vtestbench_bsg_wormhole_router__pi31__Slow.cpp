// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bsg_wormhole_router__pi31.h"

// Parameter definitions for Vtestbench_bsg_wormhole_router__pi31
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bsg_wormhole_router__pi31::__PVT__cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bsg_wormhole_router__pi31::__PVT__in_ch__BRA__0__KET____DOT__dor__DOT__cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bsg_wormhole_router__pi31::__PVT__in_ch__BRA__1__KET____DOT__dor__DOT__cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bsg_wormhole_router__pi31::__PVT__in_ch__BRA__2__KET____DOT__dor__DOT__cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bsg_wormhole_router__pi31::__PVT__in_ch__BRA__3__KET____DOT__dor__DOT__cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bsg_wormhole_router__pi31::__PVT__in_ch__BRA__4__KET____DOT__dor__DOT__cord_markers_pos_p;


void Vtestbench_bsg_wormhole_router__pi31___ctor_var_reset(Vtestbench_bsg_wormhole_router__pi31* vlSelf);

Vtestbench_bsg_wormhole_router__pi31::Vtestbench_bsg_wormhole_router__pi31(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bsg_wormhole_router__pi31___ctor_var_reset(this);
}

void Vtestbench_bsg_wormhole_router__pi31::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bsg_wormhole_router__pi31::~Vtestbench_bsg_wormhole_router__pi31() {
}
