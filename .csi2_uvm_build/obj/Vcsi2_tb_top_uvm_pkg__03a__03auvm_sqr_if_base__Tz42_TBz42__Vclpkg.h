// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ42_TBZ42__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SQR_IF_BASE__TZ42_TBZ42__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz42_TBz42__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz42_TBz42__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz42_TBz42__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz42_TBz42__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz42_TBz42 : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sqr_if_base__Tz42_TBz42"; }
    virtual VlCoroutine __VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_get_next_item(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> &t);
    virtual void __VnoInFunc_has_do_available(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn);
    virtual void __VnoInFunc_item_done(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> t);
    virtual VlCoroutine __VnoInFunc_peek(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> &t);
    virtual void __VnoInFunc_put(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> t);
    virtual void __VnoInFunc_put_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> t);
    virtual VlCoroutine __VnoInFunc_try_next_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> &t);
    virtual VlCoroutine __VnoInFunc_wait_for_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz42_TBz42() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {}
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sqr_if_base__Tz42_TBz42();
};


#endif  // guard
