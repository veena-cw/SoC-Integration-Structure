// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ27__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_CONFIG_DB__TZ27__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03aprocess;
class Vcsi2_tb_top_uvm_pkg__03a__03am_uvm_waiter;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz34;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz7;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz27;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz27;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db__Tz27__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz34>> __PVT__m_rsc;
    VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz7>> __PVT__m_waiters;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db__Tz27__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db__Tz27__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db__Tz27__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_exists(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, CData/*0:0*/ spell_chk, CData/*0:0*/ &exists__Vfuncrtn);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &value, CData/*0:0*/ &get__Vfuncrtn);
    void __VnoInFunc_set(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> value);
    VlCoroutine __VnoInFunc_wait_modified(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> cntxt, std::string inst_name, std::string field_name);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz27__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db__Tz27 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_db__Tz27 {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_config_db__Tz27"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db__Tz27(*this); }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db__Tz27() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_config_db__Tz27();
};


#endif  // guard
