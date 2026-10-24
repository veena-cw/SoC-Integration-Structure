// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB_OPTIONS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__ready;
    CData/*0:0*/ __PVT__tracing;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_is_tracing(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_tracing__Vfuncrtn);
    void __VnoInFunc_turn_off_tracing(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_turn_on_tracing(Vcsi2_tb_top__Syms* __restrict vlSymsp);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db_options"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options(*this); }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {}
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db_options() {}
};


#endif  // guard
