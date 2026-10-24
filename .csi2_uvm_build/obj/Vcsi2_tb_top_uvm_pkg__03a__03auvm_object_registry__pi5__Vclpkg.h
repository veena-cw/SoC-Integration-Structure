// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_OBJECT_REGISTRY__PI5__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_OBJECT_REGISTRY__PI5__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env_config;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_component;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    std::string __Vtask_uvm_report_fatal__10__id;
    std::string __Vtask_uvm_report_fatal__10__message;
    std::string __Vtask_uvm_report_fatal__10__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5> __PVT__me;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, std::string contxt, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_env_config> &create__Vfuncrtn);
    void __VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5> &get__Vfuncrtn);
    void __VnoInFunc_set_inst_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, std::string inst_path, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent);
    void __VnoInFunc_set_type_override(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> override_type, CData/*0:0*/ replace);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5 : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_object_registry__pi5"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5(*this); }
    virtual void __VnoInFunc_create_object(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi5();
};


#endif  // guard
