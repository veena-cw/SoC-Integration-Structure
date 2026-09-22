// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_io_tile_node__Bz1.h"

// Parameter definitions for Vtestbench_bp_io_tile_node__Bz1
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__id_map__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__id_map__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__id_map__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__gearbox__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__fwd_pump_in__DOT__pump_control__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__gearbox__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__rev_pump_out__DOT__pump_control__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__addr_map__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__addr_map__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_link__DOT__addr_map__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__io_cce__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__io_cce__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__io_cce__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__req_router_cord__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__req_router_cord__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__req_router_cord__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_req_wh_to_stream__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__cmd_router_cord__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__cmd_router_cord__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__cmd_router_cord__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__lce_cmd_wh_to_stream__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__mem_fwd_wormhole_to_stream__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__coh_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__mem_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_tile__DOT__mem_rev_wormhole_to_stream__DOT__dma_noc_cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_coh_socket__DOT__cord_markers_pos_p;
constexpr VlUnpacked<IData/*31:0*/, 3> Vtestbench_bp_io_tile_node__Bz1::__PVT__io_socket__DOT__cord_markers_pos_p;


void Vtestbench_bp_io_tile_node__Bz1___ctor_var_reset(Vtestbench_bp_io_tile_node__Bz1* vlSelf);

Vtestbench_bp_io_tile_node__Bz1::Vtestbench_bp_io_tile_node__Bz1(Vtestbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtestbench_bp_io_tile_node__Bz1___ctor_var_reset(this);
}

void Vtestbench_bp_io_tile_node__Bz1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtestbench_bp_io_tile_node__Bz1::~Vtestbench_bp_io_tile_node__Bz1() {
}
