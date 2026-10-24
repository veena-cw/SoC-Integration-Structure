// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TABLE_PRINTER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TABLE_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__emit__Vstatic__dash;
    std::string __PVT__emit__Vstatic__space;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_max_name;
    IData/*31:0*/ __PVT__m_max_type;
    IData/*31:0*/ __PVT__m_max_size;
    IData/*31:0*/ __PVT__m_max_value;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_table_printer"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer(*this); }
    void __VnoInFunc_calculate_max_widths(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer();
};


#endif  // guard
