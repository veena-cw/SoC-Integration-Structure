// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_REG_MAP__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_event;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi48;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    std::string __PVT__type_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __PVT__m_backdoor;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_backdoor(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &backdoor__Vfuncrtn);
    void __VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi48> &get_type__Vfuncrtn);
};

#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_object__Vclpkg.h"

class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map : public Vcsi2_tb_top_uvm_pkg__03a__03auvm_object {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__m_byte_addressing;
    CData/*0:0*/ __PVT__m_auto_predict;
    CData/*0:0*/ __PVT__m_check_on_read;
    IData/*31:0*/ __PVT__m_n_bytes;
    IData/*31:0*/ __PVT__m_endian;
    IData/*31:0*/ __PVT__m_system_n_bytes;
    QData/*63:0*/ __PVT__m_base_addr;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>, QData/*63:0*/> __PVT__m_parent_maps;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>, QData/*63:0*/> __PVT__m_submaps;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>, std::string> __PVT__m_submap_rights;
    std::string __Vfunc_uvm_report_enabled__7__id;
    std::string __Vfunc_uvm_report_enabled__15__id;
    std::string __Vfunc_uvm_report_enabled__23__id;
    std::string __Vfunc_uvm_report_enabled__44__id;
    std::string __Vtask_uvm_report_warning__50__id;
    std::string __Vtask_uvm_report_warning__50__message;
    std::string __Vtask_uvm_report_warning__50__filename;
    std::string __Vfunc_uvm_report_enabled__53__id;
    std::string __Vtask_uvm_report_warning__59__id;
    std::string __Vtask_uvm_report_warning__59__message;
    std::string __Vtask_uvm_report_warning__59__filename;
    std::string __Vfunc_uvm_report_enabled__62__id;
    std::string __Vfunc_uvm_report_enabled__70__id;
    std::string __Vfunc_uvm_report_enabled__78__id;
    std::string __Vfunc_uvm_report_enabled__93__id;
    std::string __Vtask_uvm_report_warning__99__id;
    std::string __Vtask_uvm_report_warning__99__message;
    std::string __Vtask_uvm_report_warning__99__filename;
    std::string __Vfunc_uvm_report_enabled__102__id;
    std::string __Vtask_uvm_report_warning__108__id;
    std::string __Vtask_uvm_report_warning__108__message;
    std::string __Vtask_uvm_report_warning__108__filename;
    std::string __Vfunc_uvm_report_enabled__111__id;
    std::string __Vfunc_uvm_report_enabled__117__id;
    std::string __Vfunc_uvm_report_enabled__125__id;
    std::string __Vfunc_uvm_report_enabled__132__id;
    std::string __Vfunc_uvm_report_enabled__141__id;
    std::string __Vtask_uvm_report_warning__147__id;
    std::string __Vtask_uvm_report_warning__147__message;
    std::string __Vtask_uvm_report_warning__147__filename;
    std::string __Vfunc_uvm_report_enabled__154__id;
    std::string __Vfunc_uvm_report_enabled__159__id;
    std::string __Vfunc_uvm_report_enabled__166__id;
    std::string __Vfunc_uvm_report_enabled__170__id;
    std::string __Vtask_uvm_report_info__175__id;
    std::string __Vtask_uvm_report_info__175__message;
    std::string __Vtask_uvm_report_info__175__filename;
    std::string __Vfunc_uvm_report_enabled__195__id;
    std::string __Vfunc_uvm_report_enabled__201__id;
    std::string __Vfunc_uvm_report_enabled__207__id;
    std::string __Vtask_uvm_report_warning__211__id;
    std::string __Vtask_uvm_report_warning__211__message;
    std::string __Vtask_uvm_report_warning__211__filename;
    std::string __Vfunc_uvm_report_enabled__224__id;
    std::string __Vfunc_uvm_report_enabled__230__id;
    std::string __Vfunc_uvm_report_enabled__235__id;
    std::string __Vtask_uvm_report_fatal__238__id;
    std::string __Vtask_uvm_report_fatal__238__message;
    std::string __Vtask_uvm_report_fatal__238__filename;
    std::string __Vfunc_uvm_report_enabled__242__id;
    std::string __Vtask_uvm_report_fatal__245__id;
    std::string __Vtask_uvm_report_fatal__245__message;
    std::string __Vtask_uvm_report_fatal__245__filename;
    std::string __Vfunc_uvm_report_enabled__249__id;
    std::string __Vfunc_uvm_report_enabled__259__id;
    std::string __Vfunc_uvm_report_enabled__266__id;
    std::string __Vfunc_uvm_report_enabled__270__id;
    std::string __Vfunc_uvm_report_enabled__277__id;
    std::string __Vfunc_uvm_report_enabled__283__id;
    std::string __Vfunc_uvm_report_enabled__298__id;
    std::string __Vtask_uvm_report_warning__304__id;
    std::string __Vtask_uvm_report_warning__304__message;
    std::string __Vtask_uvm_report_warning__304__filename;
    std::string __Vfunc_uvm_report_enabled__307__id;
    std::string __Vtask_uvm_report_warning__313__id;
    std::string __Vtask_uvm_report_warning__313__message;
    std::string __Vtask_uvm_report_warning__313__filename;
    std::string __Vfunc_uvm_report_enabled__322__id;
    std::string __Vtask_uvm_report_warning__328__id;
    std::string __Vtask_uvm_report_warning__328__message;
    std::string __Vtask_uvm_report_warning__328__filename;
    std::string __Vfunc_uvm_report_enabled__331__id;
    std::string __Vtask_uvm_report_warning__337__id;
    std::string __Vtask_uvm_report_warning__337__message;
    std::string __Vtask_uvm_report_warning__337__filename;
    std::string __Vfunc_uvm_report_enabled__340__id;
    std::string __Vtask_uvm_report_fatal__344__id;
    std::string __Vtask_uvm_report_fatal__344__message;
    std::string __Vtask_uvm_report_fatal__344__filename;
    std::string __Vfunc_uvm_report_enabled__349__id;
    std::string __Vtask_uvm_report_fatal__353__id;
    std::string __Vtask_uvm_report_fatal__353__message;
    std::string __Vtask_uvm_report_fatal__353__filename;
    std::string __Vfunc_uvm_report_enabled__358__id;
    std::string __Vtask_uvm_report_fatal__362__id;
    std::string __Vtask_uvm_report_fatal__362__message;
    std::string __Vtask_uvm_report_fatal__362__filename;
    std::string __Vfunc_uvm_report_enabled__398__id;
    std::string __Vtask_uvm_report_info__403__id;
    std::string __Vtask_uvm_report_info__403__message;
    std::string __Vtask_uvm_report_info__403__filename;
    std::string __Vfunc_uvm_report_enabled__409__id;
    std::string __Vtask_uvm_report_fatal__413__id;
    std::string __Vtask_uvm_report_fatal__413__message;
    std::string __Vtask_uvm_report_fatal__413__filename;
    std::string __Vfunc_uvm_report_enabled__426__id;
    std::string __Vtask_uvm_report_info__431__id;
    std::string __Vtask_uvm_report_info__431__message;
    std::string __Vtask_uvm_report_info__431__filename;
    std::string __Vfunc_uvm_report_enabled__438__id;
    std::string __Vtask_uvm_report_info__443__id;
    std::string __Vtask_uvm_report_info__443__message;
    std::string __Vtask_uvm_report_info__443__filename;
    std::string __Vfunc_uvm_report_enabled__449__id;
    std::string __Vtask_uvm_report_fatal__453__id;
    std::string __Vtask_uvm_report_fatal__453__message;
    std::string __Vtask_uvm_report_fatal__453__filename;
    std::string __Vfunc_uvm_report_enabled__465__id;
    std::string __Vtask_uvm_report_info__470__id;
    std::string __Vtask_uvm_report_info__470__message;
    std::string __Vtask_uvm_report_info__470__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> __PVT__m_sequence_wrapper;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> __PVT__m_adapter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> __PVT__m_sequencer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> __PVT__m_parent;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> __PVT__m_parent_map;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_regs_info;
    VlAssocArray<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info>> __PVT__m_mems_info;
    VlAssocArray<QData/*63:0*/, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset;
    VlAssocArray<QData/*63:0*/, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> __PVT__m_regs_by_offset_wo;
    VlAssocArray<VlWide<5>/*159:0*/, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> __PVT__m_mems_by_offset;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_reg_map"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map(*this); }
    void __VnoInFunc_Xget_bus_infoX(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &map_info, IData/*31:0*/ &size, IData/*31:0*/ &lsb, IData/*31:0*/ &addr_skip);
    void __VnoInFunc_Xinit_address_mapX(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_Xverify_map_configX(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn);
    virtual void __VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F);
    virtual void __VnoInFunc_add_mem(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    virtual void __VnoInFunc_add_parent_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> parent_map, QData/*63:0*/ offset);
    virtual void __VnoInFunc_add_reg(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, std::string rights, CData/*0:0*/ unmapped, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_frontdoor> frontdoor);
    virtual void __VnoInFunc_add_submap(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> child_map, QData/*63:0*/ offset);
    virtual void __VnoInFunc_clone(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &clone__Vfuncrtn);
    void __VnoInFunc_configure(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> parent, QData/*63:0*/ base_addr, IData/*31:0*/ n_bytes, IData/*31:0*/ endian, CData/*0:0*/ byte_addressing);
    virtual void __VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn);
    void __VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn);
    virtual VlCoroutine __VnoInFunc_do_bus_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual VlCoroutine __VnoInFunc_do_bus_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs);
    virtual void __VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer);
    virtual VlCoroutine __VnoInFunc_do_read(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual VlCoroutine __VnoInFunc_do_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> rw);
    virtual void __VnoInFunc_get_adapter(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> &get_adapter__Vfuncrtn);
    virtual void __VnoInFunc_get_addr_unit_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_addr_unit_bytes__Vfuncrtn);
    void __VnoInFunc_get_auto_predict(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_auto_predict__Vfuncrtn);
    virtual void __VnoInFunc_get_base_addr(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, QData/*63:0*/ &get_base_addr__Vfuncrtn);
    void __VnoInFunc_get_check_on_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &get_check_on_read__Vfuncrtn);
    virtual void __VnoInFunc_get_endian(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_endian__Vfuncrtn);
    virtual void __VnoInFunc_get_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_full_name(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_name__Vfuncrtn);
    virtual void __VnoInFunc_get_mem_by_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> &get_mem_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_mem_map_info(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, CData/*0:0*/ error, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &get_mem_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_memories(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem>> &mems, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_n_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, IData/*31:0*/ &get_n_bytes__Vfuncrtn);
    virtual void __VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn);
    virtual void __VnoInFunc_get_parent(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_block> &get_parent__Vfuncrtn);
    virtual void __VnoInFunc_get_parent_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_parent_map__Vfuncrtn);
    virtual void __VnoInFunc_get_physical_addresses(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ base_addr, QData/*63:0*/ mem_offset, IData/*31:0*/ n_bytes, VlQueue<QData/*63:0*/> &addr, IData/*31:0*/ &get_physical_addresses__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_by_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset, CData/*0:0*/ read, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> &get_reg_by_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_reg_map_info(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, CData/*0:0*/ error, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map_info> &get_reg_map_info__Vfuncrtn);
    virtual void __VnoInFunc_get_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_root_map(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> &get_root_map__Vfuncrtn);
    virtual void __VnoInFunc_get_sequencer(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ hier, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> &get_sequencer__Vfuncrtn);
    virtual void __VnoInFunc_get_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_size__Vfuncrtn);
    virtual void __VnoInFunc_get_submap_offset(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ &get_submap_offset__Vfuncrtn);
    virtual void __VnoInFunc_get_submaps(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map>> &maps, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn);
    virtual void __VnoInFunc_get_virtual_fields(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg_field>> &fields, IData/*31:0*/ hier);
    virtual void __VnoInFunc_get_virtual_registers(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_vreg>> &regs, IData/*31:0*/ hier);
    virtual void __VnoInFunc_m_set_mem_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem> mem, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_m_set_reg_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg> rg, QData/*63:0*/ offset, CData/*0:0*/ unmapped);
    virtual void __VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
    virtual void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string kind);
    void __VnoInFunc_set_auto_predict(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_set_base_addr(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ offset);
    void __VnoInFunc_set_check_on_read(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ on);
    virtual void __VnoInFunc_set_sequencer(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base> sequencer, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_adapter> adapter);
    virtual void __VnoInFunc_set_submap_offset(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map> submap, QData/*63:0*/ offset);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map() = default;
    void init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name);
    virtual ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_map();
};


#endif  // guard
