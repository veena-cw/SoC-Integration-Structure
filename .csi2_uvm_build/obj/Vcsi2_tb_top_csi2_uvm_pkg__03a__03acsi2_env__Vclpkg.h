// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_CSI2_UVM_PKG__03A__03ACSI2_ENV__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_CSI2_UVM_PKG__03A__03ACSI2_ENV__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor;
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env_config;
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_agent;
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_driver;
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_agent;
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor;
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz38_TBz84;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz64_TBz85;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz38;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_port__Tz64;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi23;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_env;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz38;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_analysis_fifo__Tz64;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env__Vclpkg();
    ~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component_registry__pi23> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_env__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_env {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env_config> __PVT__cfg;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_agent> __PVT__ppi_agent;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_monitor> __PVT__axi_monitor;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_internal_monitor> __PVT__internal_monitor;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_agent> __PVT__reset_agent;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_scoreboard> __PVT__scoreboard;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "csi2_uvm_pkg::csi2_env"; }
    VlClass* clone() const { return new Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env();
};


#endif  // guard
