// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE__TZ3__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE__TZ3__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vfunc_uvm_report_enabled__4__id;
    std::string __Vtask_uvm_report_warning__7__id;
    std::string __Vtask_uvm_report_warning__7__message;
    std::string __Vtask_uvm_report_warning__7__filename;
    std::string __Vfunc_uvm_report_enabled__12__id;
    std::string __Vtask_uvm_report_warning__15__id;
    std::string __Vtask_uvm_report_warning__15__message;
    std::string __Vtask_uvm_report_warning__15__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3> __PVT__my_type;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_by_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, std::string name, CData/*0:0*/ rpterr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3> &get_by_name__Vfuncrtn);
    void __VnoInFunc_get_by_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string scope, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> type_handle, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3> &get_by_type__Vfuncrtn);
    void __VnoInFunc_get_highest_precedence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8> &q, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3> &get_highest_precedence__Vfuncrtn);
    void __VnoInFunc_get_type(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base {
  public:

    // DESIGN SPECIFIC STATE
    Vcsi2_tb_top_csi2_reset_if* __PVT__val;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource__Tz3"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    void __VnoInFunc_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor, Vcsi2_tb_top_csi2_reset_if* &read__Vfuncrtn);
    void __VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*1:0*/ __SYM__override);
    void __VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ pri);
    void __VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, Vcsi2_tb_top_csi2_reset_if* t, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string scope);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz3();
};


#endif  // guard
