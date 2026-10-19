// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_rx_bfm_smoke_tb.h for the primary calling header

#include "Vcsi2_rx_bfm_smoke_tb__pch.h"

void Vcsi2_rx_bfm_smoke_tb___024root___ctor_var_reset(Vcsi2_rx_bfm_smoke_tb___024root* vlSelf);

Vcsi2_rx_bfm_smoke_tb___024root::Vcsi2_rx_bfm_smoke_tb___024root(Vcsi2_rx_bfm_smoke_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcsi2_rx_bfm_smoke_tb___024root___ctor_var_reset(this);
}

void Vcsi2_rx_bfm_smoke_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcsi2_rx_bfm_smoke_tb___024root::~Vcsi2_rx_bfm_smoke_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
