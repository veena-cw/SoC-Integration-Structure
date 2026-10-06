// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi4_to_apb_bridge_cdc.h for the primary calling header

#include "Vtb_axi4_to_apb_bridge_cdc__pch.h"

void Vtb_axi4_to_apb_bridge_cdc___024root___ctor_var_reset(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf);

Vtb_axi4_to_apb_bridge_cdc___024root::Vtb_axi4_to_apb_bridge_cdc___024root(Vtb_axi4_to_apb_bridge_cdc__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_axi4_to_apb_bridge_cdc___024root___ctor_var_reset(this);
}

void Vtb_axi4_to_apb_bridge_cdc___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_axi4_to_apb_bridge_cdc___024root::~Vtb_axi4_to_apb_bridge_cdc___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
