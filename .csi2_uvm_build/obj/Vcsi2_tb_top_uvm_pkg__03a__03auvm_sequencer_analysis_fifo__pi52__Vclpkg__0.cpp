// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_tlm_fifo__Tz132::init(vlProcess, vlSymsp, name, parent, 0U);
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    this->__PVT__analysis_export = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_analysis_imp__Tz132_TBz144, vlProcess, vlSymsp, "analysis_export"s, 
                                          VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52>{this});
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::__VnoInFunc_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_reg_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::__VnoInFunc_write\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__sequencer_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQRNULL"s, "The sequencer pointer is null when attempting a write"s, 0U, ""s, 0U);
    }
    VL_NULL_CHECK(this->__PVT__sequencer_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_analysis_fifo.svh", 36)->__VnoInFunc_analysis_write(vlProcess, vlSymsp, t);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_analysis_fifo__pi52::~\n"); );
}
