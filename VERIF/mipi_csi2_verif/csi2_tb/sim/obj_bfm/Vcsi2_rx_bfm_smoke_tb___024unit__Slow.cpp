// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

void Vcsi2_rx_bfm_smoke_tb___024unit___ctor_var_reset(Vcsi2_rx_bfm_smoke_tb___024unit* vlSelf);

Vcsi2_rx_bfm_smoke_tb___024unit::Vcsi2_rx_bfm_smoke_tb___024unit() = default;
Vcsi2_rx_bfm_smoke_tb___024unit::~Vcsi2_rx_bfm_smoke_tb___024unit() = default;

void Vcsi2_rx_bfm_smoke_tb___024unit::ctor(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcsi2_rx_bfm_smoke_tb___024unit___ctor_var_reset(this);
}

void Vcsi2_rx_bfm_smoke_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsi2_rx_bfm_smoke_tb___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
