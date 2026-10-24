// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP___024UNIT_H_
#define VERILATED_VCSI2_TB_TOP___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top___024unit final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name15;
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name25;
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name37;
    static VlAssocArray<IData/*31:0*/, std::string> __Venumtab_enum_name65;
    static VlUnpacked<CData/*1:0*/, 4> __Venumtab_enum_next21;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name21;
    static VlUnpacked<std::string, 8> __Venumtab_enum_name35;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name61;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name63;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name83;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name81;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name75;
    static VlUnpacked<std::string, 4> __Venumtab_enum_name73;
    static VlUnpacked<std::string, 8> __Venumtab_enum_name79;
    static VlUnpacked<IData/*31:0*/, 4> __Venumvaltab_0;
    static VlUnpacked<IData/*31:0*/, 8> __Venumvaltab_1;
    static VlUnpacked<IData/*31:0*/, 5> __Venumvaltab_2;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top___024unit();
    ~Vcsi2_tb_top___024unit();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
