// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_COMPARER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_init(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> &init__Vfuncrtn);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*1:0*/ __PVT__sev;
    CData/*0:0*/ __PVT__physical;
    CData/*0:0*/ __PVT__abstract;
    CData/*0:0*/ __PVT__check_type;
    IData/*31:0*/ __PVT__policy;
    IData/*31:0*/ __PVT__show_max;
    IData/*31:0*/ __PVT__verbosity;
    IData/*31:0*/ __PVT__result;
    IData/*31:0*/ __PVT__depth;
    std::string __PVT__miscompares;
    std::string __Vtask_uvm_report_info__17__id;
    std::string __Vtask_uvm_report_info__17__message;
    std::string __Vtask_uvm_report_info__17__filename;
    std::string __Vtask_uvm_report_warning__26__id;
    std::string __Vtask_uvm_report_warning__26__message;
    std::string __Vtask_uvm_report_warning__26__filename;
    std::string __Vtask_uvm_report_info__38__id;
    std::string __Vtask_uvm_report_info__38__message;
    std::string __Vtask_uvm_report_info__38__filename;
    std::string __Vtask_uvm_report_info__44__id;
    std::string __Vtask_uvm_report_info__44__message;
    std::string __Vtask_uvm_report_info__44__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map> __PVT__compare_map;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack> __PVT__scope;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_comparer"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer(*this); }
    virtual void __VnoInFunc_compare_field(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ lhs, VlWide<128>/*4095:0*/ rhs, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*0:0*/ &compare_field__Vfuncrtn);
    virtual void __VnoInFunc_compare_field_int(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ lhs, QData/*63:0*/ rhs, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*0:0*/ &compare_field_int__Vfuncrtn);
    virtual void __VnoInFunc_compare_field_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, double lhs, double rhs, CData/*0:0*/ &compare_field_real__Vfuncrtn);
    virtual void __VnoInFunc_compare_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, CData/*0:0*/ &compare_object__Vfuncrtn);
    virtual void __VnoInFunc_compare_string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string lhs, std::string rhs, CData/*0:0*/ &compare_string__Vfuncrtn);
    void __VnoInFunc_print_msg(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string msg);
    void __VnoInFunc_print_msg_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> lhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    void __VnoInFunc_print_rollup(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> lhs);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer() {}
};


#endif  // guard
