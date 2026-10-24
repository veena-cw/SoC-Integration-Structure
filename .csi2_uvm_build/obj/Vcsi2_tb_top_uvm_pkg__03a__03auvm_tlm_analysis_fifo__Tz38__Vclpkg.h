// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_ANALYSIS_FIFO__TZ38__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_ANALYSIS_FIFO__TZ38__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz84;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz38;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz38__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz38 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz84> __PVT__analysis_export;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_analysis_fifo__Tz38"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> t);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38();
};


#endif  // guard
