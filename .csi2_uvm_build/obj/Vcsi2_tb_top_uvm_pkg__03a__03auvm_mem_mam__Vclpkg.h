// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_MEM_MAM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__for_each_idx;
    IData/*31:0*/ __PVT__lineno;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__8__id;
    std::string __Vfunc_uvm_report_enabled__12__id;
    std::string __Vfunc_uvm_report_enabled__16__id;
    std::string __Vfunc_uvm_report_enabled__20__id;
    std::string __Vtask_uvm_report_info__23__id;
    std::string __Vtask_uvm_report_info__23__message;
    std::string __Vtask_uvm_report_info__23__filename;
    std::string __Vfunc_uvm_report_enabled__28__id;
    std::string __Vfunc_uvm_report_enabled__37__id;
    std::string __Vfunc_uvm_report_enabled__42__id;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy> __PVT__default_alloc;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> __PVT__memory;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> __PVT__cfg;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region>> __PVT__in_use;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_mam"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam(*this); }
    void __VnoInFunc_convert2string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_for_each(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ reset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &for_each__Vfuncrtn);
    void __VnoInFunc_get_memory(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_reconfigure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> &reconfigure__Vfuncrtn);
    void __VnoInFunc_release_all_regions(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_release_region(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> region);
    void __VnoInFunc_request_region(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ n_bytes, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy> alloc, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &request_region__Vfuncrtn);
    void __VnoInFunc_reserve_region(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, IData/*31:0*/ n_bytes, std::string fname, IData/*31:0*/ lineno, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region> &reserve_region__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_cfg> cfg, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam() {}
};


#endif  // guard
