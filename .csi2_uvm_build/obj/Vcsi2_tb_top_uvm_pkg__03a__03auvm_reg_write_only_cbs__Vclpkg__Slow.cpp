// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg___ctor_var_reset(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg* vlSelf);

Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg() = default;
Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg() = default;

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::ctor(Vcsi2_tb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg___ctor_var_reset(this);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_write_only_cbs__Vclpkg::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
