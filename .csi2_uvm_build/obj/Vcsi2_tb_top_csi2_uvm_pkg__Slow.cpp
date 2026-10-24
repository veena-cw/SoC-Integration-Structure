// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"


Vcsi2_tb_top_csi2_uvm_pkg::Vcsi2_tb_top_csi2_uvm_pkg() = default;
Vcsi2_tb_top_csi2_uvm_pkg::~Vcsi2_tb_top_csi2_uvm_pkg() = default;

void Vcsi2_tb_top_csi2_uvm_pkg::ctor(Vcsi2_tb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void Vcsi2_tb_top_csi2_uvm_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsi2_tb_top_csi2_uvm_pkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
