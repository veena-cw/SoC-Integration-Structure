// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_POOL__TZ5_TBZ99__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_POOL__TZ5_TBZ99__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99> &get_global_pool__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__2__id;
    std::string __Vtask_uvm_report_warning__2__message;
    std::string __Vtask_uvm_report_warning__2__filename;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier>> __PVT__pool;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_pool__Tz5_TBz99"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_add(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier> item);
    virtual void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_exists(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, IData/*31:0*/ &exists__Vfuncrtn);
    virtual void __VnoInFunc_first(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &first__Vfuncrtn);
    virtual void __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_last(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &last__Vfuncrtn);
    virtual void __VnoInFunc_next(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &next__Vfuncrtn);
    virtual void __VnoInFunc_num(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    virtual void __VnoInFunc_prev(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &prev__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99();
};


#endif  // guard
