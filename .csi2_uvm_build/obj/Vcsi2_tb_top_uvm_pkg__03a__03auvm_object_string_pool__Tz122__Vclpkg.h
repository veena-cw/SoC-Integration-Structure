// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ122__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_OBJECT_STRING_POOL__TZ122__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz122;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122> __PVT__m_global_pool;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_global(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> &get_global__Vfuncrtn);
    void __VnoInFunc_get_global_pool(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122> &get_global_pool__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz122__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz122 {
  public:

    // DESIGN SPECIFIC STATE
    std::string __Vtask_uvm_report_warning__3__id;
    std::string __Vtask_uvm_report_warning__3__message;
    std::string __Vtask_uvm_report_warning__3__filename;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object_string_pool__Tz122"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual void __VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> &get__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz122();
};


#endif  // guard
