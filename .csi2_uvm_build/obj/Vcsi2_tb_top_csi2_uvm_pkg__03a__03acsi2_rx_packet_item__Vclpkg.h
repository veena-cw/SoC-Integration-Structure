// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_CSI2_UVM_PKG__03A__03ACSI2_RX_PACKET_ITEM__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_CSI2_UVM_PKG__03A__03ACSI2_RX_PACKET_ITEM__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi6;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item__Vclpkg();
    ~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi6> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item {
  public:

    // DESIGN SPECIFIC STATE
    CData/*4:0*/ __PVT__reserved;
    CData/*2:0*/ __PVT__vcx;
    CData/*1:0*/ __PVT__vc;
    CData/*5:0*/ __PVT__datatype;
    CData/*2:0*/ __PVT__sync_type;
    CData/*0:0*/ __PVT__send_eot;
    CData/*0:0*/ __PVT__bfm_completed;
    SData/*15:0*/ __PVT__rtl_word_count;
    IData/*31:0*/ __PVT__bfm_status;
    VlQueue<CData/*7:0*/> __PVT__payload;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "csi2_uvm_pkg::csi2_rx_packet_item"; }
    VlClass* clone() const { return new Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_copy_from(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> rhs);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item();
};


#endif  // guard
