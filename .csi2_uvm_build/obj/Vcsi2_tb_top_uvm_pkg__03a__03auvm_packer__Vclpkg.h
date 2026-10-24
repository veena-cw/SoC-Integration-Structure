// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_PACKER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_object;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_root;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack;
class Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer__Vclpkg final {
  public:

    // DESIGN SPECIFIC STATE
    VlQueue<CData/*0:0*/> __PVT__bitstream;
    VlQueue<CData/*0:0*/> __PVT__fabitstream;

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__physical;
    CData/*0:0*/ __PVT__abstract;
    CData/*0:0*/ __PVT__use_metadata;
    CData/*0:0*/ __PVT__big_endian;
    CData/*0:0*/ __PVT__reverse_order;
    CData/*7:0*/ __PVT__byte_size;
    CData/*0:0*/ __PVT__nopack;
    IData/*31:0*/ __PVT__count;
    IData/*31:0*/ __PVT__word_size;
    IData/*31:0*/ __PVT__policy;
    VlWide<1024>/*32767:0*/ __PVT__m_bits;
    IData/*31:0*/ __PVT__m_packed_size;
    std::string __Vtask_uvm_report_warning__7__id;
    std::string __Vtask_uvm_report_warning__7__message;
    std::string __Vtask_uvm_report_warning__7__filename;
    std::string __Vtask_uvm_report_warning__19__id;
    std::string __Vtask_uvm_report_warning__19__message;
    std::string __Vtask_uvm_report_warning__19__filename;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack> __PVT__scope;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_packer"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer(*this); }
    void __VnoInFunc_enough_bits(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ needed, std::string id, CData/*0:0*/ &enough_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_bit(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, CData/*0:0*/ &get_bit__Vfuncrtn);
    virtual void __VnoInFunc_get_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bits);
    virtual void __VnoInFunc_get_byte(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, CData/*7:0*/ &get_byte__Vfuncrtn);
    virtual void __VnoInFunc_get_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytes);
    virtual void __VnoInFunc_get_int(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ &get_int__Vfuncrtn);
    virtual void __VnoInFunc_get_ints(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &ints);
    virtual void __VnoInFunc_get_packed_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlWide<1024>/*32767:0*/ &get_packed_bits__Vfuncrtn);
    virtual void __VnoInFunc_get_packed_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_packed_size__Vfuncrtn);
    void __VnoInFunc_index_error(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, std::string id, IData/*31:0*/ sz);
    virtual void __VnoInFunc_is_null(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_null__Vfuncrtn);
    virtual void __VnoInFunc_pack_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlWide<128>/*4095:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_field_int(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value, IData/*31:0*/ size);
    virtual void __VnoInFunc_pack_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_pack_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, double value);
    virtual void __VnoInFunc_pack_string(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string value);
    virtual void __VnoInFunc_pack_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ value);
    virtual void __VnoInFunc_put_bits(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*0:0*/> &bitstream);
    virtual void __VnoInFunc_put_bytes(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<CData/*7:0*/> &bytestream);
    virtual void __VnoInFunc_put_ints(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> &intstream);
    void __VnoInFunc_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_set_packed_size(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    virtual void __VnoInFunc_unpack_field(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ size, VlWide<128>/*4095:0*/ &unpack_field__Vfuncrtn);
    virtual void __VnoInFunc_unpack_field_int(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ size, QData/*63:0*/ &unpack_field_int__Vfuncrtn);
    virtual void __VnoInFunc_unpack_object(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> value);
    virtual void __VnoInFunc_unpack_object_ext(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &value);
    virtual void __VnoInFunc_unpack_real(Vcsi2_tb_top__Syms* __restrict vlSymsp, double &unpack_real__Vfuncrtn);
    virtual void __VnoInFunc_unpack_string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ num_chars, std::string &unpack_string__Vfuncrtn);
    virtual void __VnoInFunc_unpack_time(Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ &unpack_time__Vfuncrtn);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer() {}
};


#endif  // guard
