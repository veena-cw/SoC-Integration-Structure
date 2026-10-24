// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CMDLINE_PROCESSOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> __PVT__m_inst;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_inst(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<std::string> __PVT__m_argv;
    VlQueue<std::string> __PVT__m_plus_argv;
    VlQueue<std::string> __PVT__m_uvm_argv;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_cmdline_processor"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_arg_matches(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn);
    void __VnoInFunc_get_arg_value(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn);
    void __VnoInFunc_get_arg_values(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn);
    void __VnoInFunc_get_args(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_plusargs(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_get_tool_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn);
    void __VnoInFunc_get_tool_version(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn);
    void __VnoInFunc_get_uvm_args(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &args);
    void __VnoInFunc_m_convert_verb(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor();
};


#endif  // guard
