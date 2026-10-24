// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_FACTORY_OVERRIDE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__selected;
    std::string __PVT__full_inst_path;
    std::string __PVT__orig_type_name;
    std::string __PVT__ovrd_type_name;
    std::string __Vtask_uvm_report_fatal__0__id;
    std::string __Vtask_uvm_report_fatal__0__message;
    std::string __Vtask_uvm_report_fatal__0__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> __PVT__orig_type;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> __PVT__ovrd_type;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_factory_override"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override(*this); }
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string full_inst_path, std::string orig_type_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> orig_type, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> ovrd_type);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory_override() {}
};


#endif  // guard
