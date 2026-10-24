// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"
VlAssocArray<IData/*31:0*/, std::string> Vcsi2_tb_top___024unit::__Venumtab_enum_name15;
VlAssocArray<IData/*31:0*/, std::string> Vcsi2_tb_top___024unit::__Venumtab_enum_name25;
VlAssocArray<IData/*31:0*/, std::string> Vcsi2_tb_top___024unit::__Venumtab_enum_name37;
VlAssocArray<IData/*31:0*/, std::string> Vcsi2_tb_top___024unit::__Venumtab_enum_name65;
VlUnpacked<CData/*1:0*/, 4> Vcsi2_tb_top___024unit::__Venumtab_enum_next21;
VlUnpacked<std::string, 4> Vcsi2_tb_top___024unit::__Venumtab_enum_name21;
VlUnpacked<std::string, 8> Vcsi2_tb_top___024unit::__Venumtab_enum_name35;
VlUnpacked<std::string, 4> Vcsi2_tb_top___024unit::__Venumtab_enum_name61;
VlUnpacked<std::string, 4> Vcsi2_tb_top___024unit::__Venumtab_enum_name63;
VlUnpacked<std::string, 4> Vcsi2_tb_top___024unit::__Venumtab_enum_name83;
VlUnpacked<std::string, 4> Vcsi2_tb_top___024unit::__Venumtab_enum_name81;
VlUnpacked<std::string, 4> Vcsi2_tb_top___024unit::__Venumtab_enum_name75;
VlUnpacked<std::string, 4> Vcsi2_tb_top___024unit::__Venumtab_enum_name73;
VlUnpacked<std::string, 8> Vcsi2_tb_top___024unit::__Venumtab_enum_name79;
VlUnpacked<IData/*31:0*/, 4> Vcsi2_tb_top___024unit::__Venumvaltab_0;
VlUnpacked<IData/*31:0*/, 8> Vcsi2_tb_top___024unit::__Venumvaltab_1;
VlUnpacked<IData/*31:0*/, 5> Vcsi2_tb_top___024unit::__Venumvaltab_2;

void Vcsi2_tb_top___024unit___ctor_var_reset(Vcsi2_tb_top___024unit* vlSelf);

Vcsi2_tb_top___024unit::Vcsi2_tb_top___024unit() = default;
Vcsi2_tb_top___024unit::~Vcsi2_tb_top___024unit() = default;

void Vcsi2_tb_top___024unit::ctor(Vcsi2_tb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcsi2_tb_top___024unit___ctor_var_reset(this);
}

void Vcsi2_tb_top___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsi2_tb_top___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
