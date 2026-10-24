// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_HDL_PATH_CONCAT__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg.h"


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<Vcsi2_tb_top_uvm_hdl_path_slice__struct__0> __PVT__slices;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_hdl_path_concat"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat(*this); }
    void __VnoInFunc_add_path(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string path, IData/*31:0*/ offset, IData/*31:0*/ size);
    void __VnoInFunc_add_slice(Vcsi2_tb_top__Syms* __restrict vlSymsp, Vcsi2_tb_top_uvm_hdl_path_slice__struct__0 slice);
    void __VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<Vcsi2_tb_top_uvm_hdl_path_slice__struct__0> t);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat() {}
};


#endif  // guard
