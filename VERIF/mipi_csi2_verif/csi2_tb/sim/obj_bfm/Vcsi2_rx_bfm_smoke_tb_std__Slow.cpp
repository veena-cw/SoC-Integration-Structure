// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"


Vcsi2_rx_bfm_smoke_tb_std::Vcsi2_rx_bfm_smoke_tb_std() = default;
Vcsi2_rx_bfm_smoke_tb_std::~Vcsi2_rx_bfm_smoke_tb_std() = default;

void Vcsi2_rx_bfm_smoke_tb_std::ctor(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vcsi2_rx_bfm_smoke_tb_std::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsi2_rx_bfm_smoke_tb_std::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
