// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ23_TBZ136__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_ANALYSIS_IMP__TZ23_TBZ136__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz135;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz23_TBz136__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz23_TBz136__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz23_TBz136__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz23_TBz136__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz135__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz23_TBz136 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz135 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_analysis_imp__Tz23_TBz136"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz23_TBz136(*this); }
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz23_TBz136() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo_> imp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz23_TBz136();
};


#endif  // guard
