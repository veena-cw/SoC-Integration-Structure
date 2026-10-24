// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ64_TBZ97__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_GET_PEEK_IMP__TZ64_TBZ97__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz64;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz64_TBz97__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz64_TBz97__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz64_TBz97__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz64_TBz97__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz64_TBz97 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_port_base__Tz83 {
  public:

    // DESIGN SPECIFIC STATE
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz64> __PVT__m_imp;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_get_peek_imp__Tz64_TBz97"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz64_TBz97(*this); }
    void __VnoInFunc_can_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_get__Vfuncrtn);
    void __VnoInFunc_can_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &can_peek__Vfuncrtn);
    VlCoroutine __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> &t);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> &t);
    void __VnoInFunc_try_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> &t, CData/*0:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_axi_write_item> &t, CData/*0:0*/ &try_peek__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz64_TBz97() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo_base__Tz64> imp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_get_peek_imp__Tz64_TBz97();
};


#endif  // guard
