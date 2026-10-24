// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcsi2_tb_top.h for the primary calling header

#ifndef VERILATED_VCSI2_TB_TOP_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VCSI2_TB_TOP_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
#include "verilated_random.h"
class Vcsi2_tb_top_std__03a__03aprocess;


class Vcsi2_tb_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcsi2_tb_top_std__03a__03aprocess__Vclpkg final {
  public:

    // INTERNAL VARIABLES
    Vcsi2_tb_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcsi2_tb_top_std__03a__03aprocess__Vclpkg();
    ~Vcsi2_tb_top_std__03a__03aprocess__Vclpkg();
    void ctor(Vcsi2_tb_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcsi2_tb_top_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_killQueue(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<VlClassRef<Vcsi2_tb_top_std__03a__03aprocess>> &processQueue);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vcsi2_tb_top__Syms;

class Vcsi2_tb_top_std__03a__03aprocess : public virtual VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef m_process;

    // INTERNAL METHODS
    virtual const char* typeName() const { return "std::process"; }
    VlClass* clone() const { return new Vcsi2_tb_top_std__03a__03aprocess(*this); }
    VlCoroutine __VnoInFunc_await(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_srandom(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ seed);
    void __VnoInFunc_status(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp);
  public:
    Vcsi2_tb_top_std__03a__03aprocess() = default;
    void init(Vcsi2_tb_top__Syms* __restrict vlSymsp);
    ~Vcsi2_tb_top_std__03a__03aprocess() {}
};



//*** Below code from `systemc in Verilog file
// From `systemc at /opt/verilator-5.052/share/verilator/include/verilated_std.sv:212:21

template<> template<>
inline bool VlClassRef<Vcsi2_tb_top_std__03a__03aprocess>::operator==(const VlClassRef<Vcsi2_tb_top_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return true;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process == rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<Vcsi2_tb_top_std__03a__03aprocess>::operator!=(const VlClassRef<Vcsi2_tb_top_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return true;
    return m_objp->m_process != rhs.m_objp->m_process;
};
template<> template<>
inline bool VlClassRef<Vcsi2_tb_top_std__03a__03aprocess>::operator<(const VlClassRef<Vcsi2_tb_top_std__03a__03aprocess>& rhs) const {
    if (!m_objp && !rhs.m_objp) return false;
    if (!m_objp || !rhs.m_objp) return false;
    return m_objp->m_process < rhs.m_objp->m_process;
};
//*** Above code from `systemc in Verilog file


#endif  // guard
