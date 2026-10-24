// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_STRING_RSRC__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_STRING_RSRC__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz5;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vtask_uvm_report_fatal__4__id;
    std::string __Vtask_uvm_report_fatal__4__message;
    std::string __Vtask_uvm_report_fatal__4__filename;
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vtask_uvm_report_fatal__11__id;
    std::string __Vtask_uvm_report_fatal__11__message;
    std::string __Vtask_uvm_report_fatal__11__filename;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc> &get_by_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz5__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz5 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_string_rsrc"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string s);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_string_rsrc();
};


#endif  // guard
