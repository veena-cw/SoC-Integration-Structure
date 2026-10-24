// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_UVM_PKG__03A__03AUVM_RESOURCE_TYPES__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
#include "Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg.h"


class Vcsi2_tb_top__Syms;
struct Vcsi2_tb_top_access_t__struct__0 {
    QData/*63:0*/ __PVT__read_time;
    QData/*63:0*/ __PVT__write_time;
    IData/*31:0*/ __PVT__read_count;
    IData/*31:0*/ __PVT__write_count;

    bool operator==(const Vcsi2_tb_top_access_t__struct__0& rhs) const {
        return __PVT__read_time == rhs.__PVT__read_time
            && __PVT__write_time == rhs.__PVT__write_time
            && __PVT__read_count == rhs.__PVT__read_count
            && __PVT__write_count == rhs.__PVT__write_count;
    }
    bool operator!=(const Vcsi2_tb_top_access_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vcsi2_tb_top_access_t__struct__0& rhs) const {
        if (__PVT__read_time < rhs.__PVT__read_time) return true;
        if (rhs.__PVT__read_time < __PVT__read_time) return false;
        if (__PVT__write_time < rhs.__PVT__write_time) return true;
        if (rhs.__PVT__write_time < __PVT__write_time) return false;
        if (__PVT__read_count < rhs.__PVT__read_count) return true;
        if (rhs.__PVT__read_count < __PVT__read_count) return false;
        if (__PVT__write_count < rhs.__PVT__write_count) return true;
        if (rhs.__PVT__write_count < __PVT__write_count) return false;
        return false;
    }
};
template <>
struct VlIsCustomStruct<Vcsi2_tb_top_access_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types : public virtual VlClass {
  public:

    // INTERNAL METHODS
    virtual const char* typeName() const { return "uvm_pkg::uvm_resource_types"; }
    VlClass* clone() const { return new Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types(*this); }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {}
    ~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_types() {}
};


#endif  // guard
