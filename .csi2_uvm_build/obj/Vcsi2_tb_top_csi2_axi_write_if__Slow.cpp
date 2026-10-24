// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_axi_write_if___ctor_var_reset(Vcsi2_tb_top_csi2_axi_write_if* vlSelf);

Vcsi2_tb_top_csi2_axi_write_if::Vcsi2_tb_top_csi2_axi_write_if() = default;
Vcsi2_tb_top_csi2_axi_write_if::~Vcsi2_tb_top_csi2_axi_write_if() = default;

void Vcsi2_tb_top_csi2_axi_write_if::ctor(Vcsi2_tb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcsi2_tb_top_csi2_axi_write_if___ctor_var_reset(this);
}

void Vcsi2_tb_top_csi2_axi_write_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsi2_tb_top_csi2_axi_write_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
