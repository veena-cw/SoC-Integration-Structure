// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_TIME__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_TLM_TIME__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    double __PVT__m_resolution;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_set_time_resolution(Vcsi2_tb_top__Syms* __restrict vlSymsp, double res);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    QData/*63:0*/ __PVT__m_time;
    double __PVT__m_res;
    std::string __PVT__m_name;
    std::string __Vfunc_uvm_report_enabled__1__id;
    std::string __Vfunc_uvm_report_enabled__5__id;
    std::string __Vtask_uvm_report_fatal__8__id;
    std::string __Vtask_uvm_report_fatal__8__message;
    std::string __Vtask_uvm_report_fatal__8__filename;
    std::string __Vfunc_uvm_report_enabled__12__id;
    std::string __Vfunc_uvm_report_enabled__16__id;
    std::string __Vtask_uvm_report_fatal__19__id;
    std::string __Vtask_uvm_report_fatal__19__message;
    std::string __Vtask_uvm_report_fatal__19__filename;
    std::string __Vfunc_uvm_report_enabled__23__id;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_tlm_time"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time(*this); }
    void __VnoInFunc_decr(Vcsi2_tb_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs);
    void __VnoInFunc_get_abstime(Vcsi2_tb_top__Syms* __restrict vlSymsp, double secs, double &get_abstime__Vfuncrtn);
    void __VnoInFunc_get_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_name__Vfuncrtn);
    void __VnoInFunc_get_realtime(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ scaled, double secs, double &get_realtime__Vfuncrtn);
    void __VnoInFunc_incr(Vcsi2_tb_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs);
    void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_abstime(Vcsi2_tb_top__Syms* __restrict vlSymsp, double t, double secs);
    void __VnoInFunc_to_m_res(Vcsi2_tb_top__Syms* __restrict vlSymsp, double t, QData/*63:0*/ scaled, double secs, double &to_m_res__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, double res);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_time() {}
};


#endif  // guard
