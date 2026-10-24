// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_CSI2_UVM_PKG__03A__03ACSI2_PPI_SEQUENCE__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_CSI2_UVM_PKG__03A__03ACSI2_PPI_SEQUENCE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence;
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi15;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence__Tz38_TBz38;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence__Vclpkg();
    ~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi15> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence__Tz38_TBz38__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence__Tz38_TBz38 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "csi2_uvm_pkg::csi2_ppi_sequence"; }
    VlClass* clone() const { return new Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence(*this); }
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    VlCoroutine __VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_ppi_sequence();
};


#endif  // guard
