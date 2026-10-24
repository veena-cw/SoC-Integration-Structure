// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_DOMAIN__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_build_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_check_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_configure_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_connect_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_end_of_elaboration_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_extract_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_final_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_main_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_post_configure_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_post_main_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_post_reset_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_post_shutdown_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pre_configure_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pre_main_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pre_reset_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pre_shutdown_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reset_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_run_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_shutdown_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_start_of_simulation_phase;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> __PVT__m_common_domain;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> __PVT__m_uvm_domain;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain>> __PVT__m_domains;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> __PVT__m_uvm_schedule;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_add_uvm_phases(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> schedule);
    void __VnoInFunc_get_common_domain(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> &get_common_domain__Vfuncrtn);
    void __VnoInFunc_get_domains(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain>> &domains);
    void __VnoInFunc_get_uvm_domain(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> &get_uvm_domain__Vfuncrtn);
    void __VnoInFunc_get_uvm_schedule(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> &get_uvm_schedule__Vfuncrtn);
    void __VnoInFunc_jump_all(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__1__id;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_domain"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_jump(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain();
};


#endif  // guard
