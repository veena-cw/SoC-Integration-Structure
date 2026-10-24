// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AM_UVM_WAITER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AM_UVM_WAITER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__inst_name;
    std::string __PVT__field_name;
    VlAssignableEvent __PVT__trigger;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::m_uvm_waiter"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter(*this); }
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string inst_name, std::string field_name);
    ~Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter() {}
};


#endif  // guard
