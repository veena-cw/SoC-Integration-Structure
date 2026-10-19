// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___ctor_var_reset(Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if* vlSelf);

Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if::Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if() = default;
Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if::~Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if() = default;

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if::ctor(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if___ctor_var_reset(this);
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsi2_rx_bfm_smoke_tb_c_phy_bfm_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
