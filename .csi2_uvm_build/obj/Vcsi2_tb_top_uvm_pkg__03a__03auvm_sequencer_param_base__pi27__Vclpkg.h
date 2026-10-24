// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI27__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_SEQUENCER_PARAM_BASE__PI27__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_export__Tz42;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz42_TBz92;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi32;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz42;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_num_last_reqs;
    IData/*31:0*/ __PVT__num_last_items;
    IData/*31:0*/ __PVT__m_num_last_rsps;
    IData/*31:0*/ __PVT__m_num_reqs_sent;
    IData/*31:0*/ __PVT__m_num_rsps_received;
    VlQueue<VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item>> __PVT__m_last_req_buffer;
    VlQueue<VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item>> __PVT__m_last_rsp_buffer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi32> __PVT__sqr_rsp_analysis_fifo;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_export__Tz42> __PVT__rsp_export;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz42> __PVT__m_req_fifo;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_sequencer_param_base__pi27"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_analysis_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t);
    virtual void __VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_connect_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    void __VnoInFunc_get_current_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> &get_current_item__Vfuncrtn);
    void __VnoInFunc_get_num_last_reqs(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_reqs__Vfuncrtn);
    void __VnoInFunc_get_num_last_rsps(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_last_rsps__Vfuncrtn);
    void __VnoInFunc_get_num_reqs_sent(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_reqs_sent__Vfuncrtn);
    void __VnoInFunc_get_num_rsps_received(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_num_rsps_received__Vfuncrtn);
    void __VnoInFunc_last_req(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> &last_req__Vfuncrtn);
    void __VnoInFunc_last_rsp(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ n, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> &last_rsp__Vfuncrtn);
    void __VnoInFunc_m_last_req_push_front(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> item);
    void __VnoInFunc_m_last_rsp_push_front(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> item);
    void __VnoInFunc_put_response(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_reset_sequence_item> t);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_send_request(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize);
    void __VnoInFunc_set_num_last_reqs(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ max);
    void __VnoInFunc_set_num_last_rsps(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ max);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_param_base__pi27();
};


#endif  // guard
