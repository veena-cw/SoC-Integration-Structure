// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__constraint.write_var(this->__PVT__start_offset, 0x0000000000000040ULL, 
                                      "start_offset", 0ULL);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    this->__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = this->__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',64,this->__PVT__min_offset);
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvuge start_offset %s))",1
                                                  , 'S',&(__Vtemp_1)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 0x00000220U, 
                                 "      start_offset >= min_offset;");
    VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',64,(1ULL 
                                              + (this->__PVT__max_offset 
                                                 - (QData)((IData)(this->__PVT__len)))));
    this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (bvule start_offset %s))",1
                                                  , 'S',&(__Vtemp_2)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 0x00000221U, 
                                 "      start_offset <= max_offset - len + 1;");
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    std::string __Vtemp_7;
    std::string __Vtemp_8;
    // Body
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < this->__PVT__in_use.size())) {
        VL_SFORMAT_NX(__Vtemp_1,"#x%x",1, '#',64,VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk2_1__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 550)
                      ->__PVT__Xend_offsetX);
        VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',64,(QData)((IData)(this->__PVT__len)));
        VL_SFORMAT_NX(__Vtemp_3,"(bvadd start_offset %s)",1
                      , 'S',&(__Vtemp_2));
        VL_SFORMAT_NX(__Vtemp_4,"(bvsub %s #x0000000000000001)",1
                      , 'S',&(__Vtemp_3));
        VL_SFORMAT_NX(__Vtemp_5,"#x%x",1, '#',64,VL_NULL_CHECK(this->__PVT__in_use.at(unnamedblk2_1__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 551)
                      ->__PVT__Xstart_offsetX);
        VL_SFORMAT_NX(__Vtemp_6,"(__Vbv (bvule start_offset %s))",1
                      , 'S',&(__Vtemp_1));
        VL_SFORMAT_NX(__Vtemp_7,"(__Vbv (bvuge %s %s))",2
                      , 'S',&(__Vtemp_4), 'S',&(__Vtemp_5));
        VL_SFORMAT_NX(__Vtemp_8,"(bvand %s %s)",2, 'S',&(__Vtemp_6)
                      , 'S',&(__Vtemp_7));
        this->__PVT__constraint.hard(VL_SFORMATF_N_NX("(__Vbv (not (__Vbool %s)))",1
                                                      , 'S',&(__Vtemp_8)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/reg/uvm_mem_mam.svh", 0x00000226U, 
                                     "         !(start_offset <= in_use[i].Xend_offsetX &&");
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_uvm_mem_mam_policy_valid_setup_constraint(vlSymsp);
    this->__VnoInFunc_uvm_mem_mam_policy_no_overlap_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_mem_mam_policy::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__len = 0;
    __PVT__start_offset = 0;
    __PVT__min_offset = 0;
    __PVT__max_offset = 0;
}
