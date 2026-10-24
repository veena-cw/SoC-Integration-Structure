// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_PRINTER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__m_array_stack;
    VlQueue<Vcsi2_tb_top_uvm_printer_row_info__struct__0> __PVT__m_rows;
    std::string __PVT__m_string;
    std::string __Vfunc_uvm_report_enabled__3__id;
    std::string __Vtask_sprint__34__Vfuncout;
    std::string __Vfunc_uvm_leaf_scope__39__full_name;
    std::string __Vfunc_uvm_vector_to_string__47__radix_str;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs> __PVT__knobs;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack> __PVT__m_scope;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_printer"; }
    virtual void __VnoInFunc_adjust_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, CData/*7:0*/ scope_separator, std::string &adjust_name__Vfuncrtn);
    virtual void __VnoInFunc_emit(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &emit__Vfuncrtn);
    virtual void __VnoInFunc_format_footer(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &format_footer__Vfuncrtn);
    virtual void __VnoInFunc_format_header(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &format_header__Vfuncrtn);
    virtual void __VnoInFunc_format_row(Vcsi2_tb_top__Syms* __restrict vlSymsp, Vcsi2_tb_top_uvm_printer_row_info__struct__0 row, std::string &format_row__Vfuncrtn);
    void __VnoInFunc_index_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string name, std::string &index_string__Vfuncrtn);
    void __VnoInFunc_istop(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &istop__Vfuncrtn);
    virtual void __VnoInFunc_print_array_footer(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ size);
    virtual void __VnoInFunc_print_array_header(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, IData/*31:0*/ size, std::string arraytype, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_array_range(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ min, IData/*31:0*/ max);
    virtual void __VnoInFunc_print_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_generic(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string type_name, IData/*31:0*/ size, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_int(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size, IData/*31:0*/ radix, CData/*7:0*/ scope_separator, std::string type_name);
    virtual void __VnoInFunc_print_object(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_object_header(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, double value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string value, CData/*7:0*/ scope_separator);
    virtual void __VnoInFunc_print_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, QData/*63:0*/ value, CData/*7:0*/ scope_separator);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer();
};


#endif  // guard
