// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_MEM_REGION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__len;
    IData/*31:0*/ __PVT__n_bytes;
    IData/*31:0*/ __PVT__lineno;
    QData/*63:0*/ __PVT__Xstart_offsetX;
    QData/*63:0*/ __PVT__Xend_offsetX;
    std::string __PVT__fname;
    std::string __Vfunc_uvm_report_enabled__3__id;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vfunc_uvm_report_enabled__14__id;
    std::string __Vfunc_uvm_report_enabled__18__id;
    std::string __Vfunc_uvm_report_enabled__25__id;
    std::string __Vfunc_uvm_report_enabled__29__id;
    std::string __Vfunc_uvm_report_enabled__36__id;
    std::string __Vfunc_uvm_report_enabled__40__id;
    std::string __Vfunc_uvm_report_enabled__47__id;
    std::string __Vfunc_uvm_report_enabled__51__id;
    std::string __Vfunc_uvm_report_enabled__58__id;
    std::string __Vfunc_uvm_report_enabled__62__id;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam> __PVT__parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> __PVT__XvregX;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_mem_region"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region(*this); }
    VlCoroutine __VnoInFunc_burst_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    VlCoroutine __VnoInFunc_burst_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, VlQueue<QData/*63:0*/> value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_convert2string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_get_end_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_end_offset__Vfuncrtn);
    void __VnoInFunc_get_len(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_len__Vfuncrtn);
    void __VnoInFunc_get_memory(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_memory__Vfuncrtn);
    void __VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    void __VnoInFunc_get_start_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &get_start_offset__Vfuncrtn);
    void __VnoInFunc_get_virtual_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg> &get_virtual_registers__Vfuncrtn);
    void __VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_poke(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    VlCoroutine __VnoInFunc_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ &value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
    void __VnoInFunc_release_region(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    VlCoroutine __VnoInFunc_write(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status, QData/*63:0*/ offset, QData/*63:0*/ value, IData/*31:0*/ path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> map, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, IData/*31:0*/ prior, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> extension, std::string fname, IData/*31:0*/ lineno);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ start_offset, QData/*63:0*/ end_offset, IData/*31:0*/ len, IData/*31:0*/ n_bytes, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam> parent);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_region() {}
};


#endif  // guard
