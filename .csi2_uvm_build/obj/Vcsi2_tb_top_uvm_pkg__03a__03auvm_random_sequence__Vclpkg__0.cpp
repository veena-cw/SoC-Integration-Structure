// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi54> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi54__Vclpkg.__VnoInFunc_get(vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_count(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_count__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_count\n"); );
    // Body
    {
        get_count__Vfuncrtn = 0U;
        if ((0xffffffffU == this->__PVT__l_count)) {
            get_count__Vfuncrtn = VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 69)
                ->__PVT__count;
            goto __Vlabel0;
        }
        get_count__Vfuncrtn = this->__PVT__l_count;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__l_count = 0xffffffffU;
    IData/*31:0*/ unnamedblk2_1__DOT__i;
    unnamedblk2_1__DOT__i = 0;
    IData/*31:0*/ unnamedblk2_2__DOT__i;
    unnamedblk2_2__DOT__i = 0;
    /*super.new*/;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.resize(1U);
    unnamedblk2_1__DOT__i = 0U;
    while ((unnamedblk2_1__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.atWrite(unnamedblk2_1__DOT__i) = 1U;
        unnamedblk2_1__DOT__i = ((IData)(1U) + unnamedblk2_1__DOT__i);
    }
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.resize(3U);
    unnamedblk2_2__DOT__i = 0U;
    while ((unnamedblk2_2__DOT__i < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(unnamedblk2_2__DOT__i) = 1U;
        unnamedblk2_2__DOT__i = ((IData)(1U) + unnamedblk2_2__DOT__i);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_body(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_body\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_seq_kind__3__Vfuncout;
    __Vtask_get_seq_kind__3__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_1____Vrandwith_h4dcde6d2__0;
    IData/*31:0*/ __VlefCall_0____Vrandwith_h4dcde6d2__1;
    VlQueue<CData/*0:0*/> unnamedblk2_3__DOT____Vmode_he47e0d96__0;
    unnamedblk2_3__DOT____Vmode_he47e0d96__0.atDefault() = 0;
    IData/*31:0*/ unnamedblk2_3__DOT__unnamedblk2_4__DOT__i;
    unnamedblk2_3__DOT__unnamedblk2_4__DOT__i = 0;
    IData/*31:0*/ unnamedblk1_1__DOT____Vrepeat0;
    unnamedblk1_1__DOT____Vrepeat0 = 0;
    VlQueue<CData/*0:0*/> unnamedblk1_1__DOT__unnamedblk2_5__DOT____Vmode_he47e0d96__1;
    unnamedblk1_1__DOT__unnamedblk2_5__DOT____Vmode_he47e0d96__1.atDefault() = 0;
    IData/*31:0*/ unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i;
    unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i = 0;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.atWrite(0U) = 0U;
    if ((0xffffffffU == VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 86)
         ->__PVT__count)) {
        unnamedblk2_3__DOT____Vmode_he47e0d96__0 = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode;
        unnamedblk2_3__DOT__unnamedblk2_4__DOT__i = 0U;
        while ((unnamedblk2_3__DOT__unnamedblk2_4__DOT__i 
                < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
            Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(unnamedblk2_3__DOT__unnamedblk2_4__DOT__i) = 0U;
            unnamedblk2_3__DOT__unnamedblk2_4__DOT__i 
                = ((IData)(1U) + unnamedblk2_3__DOT__unnamedblk2_4__DOT__i);
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(1U) = 1U;
        this->__VnoInFunc___Vrandwith_h4dcde6d2__1(vlSymsp, 
                                                   VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence>{this}, __VlefCall_0____Vrandwith_h4dcde6d2__1);
        if ((1U & (~ (0U != __VlefCall_0____Vrandwith_h4dcde6d2__1)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RANDSEQ"s, "Randomization for l_count failed in random sequence body"s, 0U, ""s, 0U);
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode 
            = unnamedblk2_3__DOT____Vmode_he47e0d96__0;
        VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 90)->__PVT__count 
            = this->__PVT__l_count;
    } else {
        this->__PVT__l_count = VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 93)
            ->__PVT__count;
    }
    this->__PVT__max_kind = VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 94)
        ->__PVT__sequences.size();
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 95)->__VnoInFunc_get_seq_kind(vlProcess, vlSymsp, "uvm_exhaustive_sequence"s, __Vtask_get_seq_kind__3__Vfuncout);
    this->__PVT__l_exhaustive_seq_kind = __Vtask_get_seq_kind__3__Vfuncout;
    unnamedblk1_1__DOT____Vrepeat0 = this->__PVT__l_count;
    while (VL_LTS_III(32, 0U, unnamedblk1_1__DOT____Vrepeat0)) {
        unnamedblk1_1__DOT__unnamedblk2_5__DOT____Vmode_he47e0d96__1 
            = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode;
        unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i = 0U;
        while ((unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i 
                < Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.size())) {
            Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i) = 0U;
            unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i 
                = ((IData)(1U) + unnamedblk1_1__DOT__unnamedblk2_5__DOT__unnamedblk2_6__DOT__i);
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.atWrite(2U) = 1U;
        this->__VnoInFunc___Vrandwith_h4dcde6d2__0(vlSymsp, 
                                                   VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence>{this}, __VlefCall_1____Vrandwith_h4dcde6d2__0);
        if ((1U & (~ (0U != __VlefCall_1____Vrandwith_h4dcde6d2__0)))) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RANDSEQ"s, "Randomization for l_kind failed in random sequence body"s, 0U, ""s, 0U);
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode 
            = unnamedblk1_1__DOT__unnamedblk2_5__DOT____Vmode_he47e0d96__1;
        co_await this->__VnoInFunc_do_sequence_kind(vlProcess, vlSymsp, this->__PVT__l_kind);
        unnamedblk1_1__DOT____Vrepeat0 = (unnamedblk1_1__DOT____Vrepeat0 
                                          - (IData)(1U));
    }
    VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 102)->__PVT__m_random_count 
        = ((IData)(1U) + VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 102)
           ->__PVT__m_random_count);
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vconstraintmode.atWrite(0U) = 1U;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence> seq;
    {
        if ((VlNull{} == rhs)) {
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, seq);
        if ((! __VlefExpr_0)) {
            goto __Vlabel0;
        }
        this->__PVT__l_count = VL_NULL_CHECK(seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 112)
            ->__PVT__l_count;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_compare(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer> comparer, CData/*0:0*/ &do_compare__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_compare\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__compare_field_int;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence> seq;
    {
        do_compare__Vfuncrtn = 0U;
        do_compare__Vfuncrtn = 1U;
        if ((VlNull{} == rhs)) {
            do_compare__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, seq);
        if ((! __VlefExpr_0)) {
            do_compare__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(comparer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 120)->__VnoInFunc_compare_field_int(vlProcess, vlSymsp, "l_count"s, (QData)((IData)(this->__PVT__l_count)), (QData)((IData)(VL_NULL_CHECK(seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 120)
                                                                                ->__PVT__l_count)), 0x00000020U, 0U, __VlefCall_1__compare_field_int);
        do_compare__Vfuncrtn = ((IData)(do_compare__Vfuncrtn) 
                                & (IData)(__VlefCall_1__compare_field_int));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_print\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtemp_1[0U] = this->__PVT__l_count;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 125)->__VnoInFunc_print_int(vlSymsp, "l_count"s, __Vtemp_1, 0x00000020U, 0U, 0x2eU, ""s);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_record(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder> recorder) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_do_record\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp1;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtemp_1[0U] = this->__PVT__l_count;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vtemp_1[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_NULL_CHECK(recorder, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 129)->__VnoInFunc_record_field(vlSymsp, "l_count"s, __Vtemp_1, 0x00000020U, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence> i;
    i = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence, vlProcess, vlSymsp, name);
    create__Vfuncrtn = i;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_random_sequence"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi54> __Vfunc_get__11__Vfuncout;
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi54__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__11__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__11__Vfuncout;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vsetup_constraints\n"); );
    // Body
    this->__VnoInFunc_pick_sequence_setup_constraint(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    if (Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.at(1U)) {
        this->__PVT__l_count = VL_RANDOM_RNG_I(__Vm_rng);
    }
    if (Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.at(2U)) {
        this->__PVT__l_kind = VL_RANDOM_RNG_I(__Vm_rng);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vrandwith_h4dcde6d2__0(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h4dcde6d2__0__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vrandwith_h4dcde6d2__0\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    std::string __Vtemp_6;
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    VlRandomizer randomizer;
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomizer = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint;
    if (Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.at(2U)) {
        __Vtemp_1 = "l_kind"s;
        __Vtemp_3 = "l_kind"s;
    } else {
        __Vtemp_1 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__l_kind) ;
        __Vtemp_3 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__l_kind) ;
    }
    VL_SFORMAT_NX(__Vtemp_2,"#x%x",1, '#',32,this->__PVT__l_exhaustive_seq_kind);
    VL_SFORMAT_NX(__Vtemp_4,"#x%x",1, '#',32,this->__PVT__max_kind);
    VL_SFORMAT_NX(__Vtemp_5,"(__Vbv (bvugt %s %s))",2
                  , 'S',&(__Vtemp_1), 'S',&(__Vtemp_2));
    VL_SFORMAT_NX(__Vtemp_6,"(__Vbv (bvult %s %s))",2
                  , 'S',&(__Vtemp_3), 'S',&(__Vtemp_4));
    randomizer.hard(VL_SFORMATF_N_NX("(bvand %s %s)",2
                                     , 'S',&(__Vtemp_5)
                                     , 'S',&(__Vtemp_6)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 0x00000061U, 
                    "    if (!randomize(l_kind) with { l_kind > l_exhaustive_seq_kind && ");
    randomizer.write_var(this->__PVT__l_kind, 0x0000000000000020ULL, 
                         "l_kind", 0ULL, 2ULL);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    __Vrandwith_h4dcde6d2__0__Vfuncrtn = (__VlefCall_0____VBasicRand 
                                          & randomizer.next(__Vm_rng));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vrandwith_h4dcde6d2__1(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence> __Vthis, IData/*31:0*/ &__Vrandwith_h4dcde6d2__1__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::__VnoInFunc___Vrandwith_h4dcde6d2__1\n"); );
    // Locals
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    VlRandomizer randomizer;
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomizer = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint;
    if (Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT____Vrandmode.at(1U)) {
        __Vtemp_1 = "l_count"s;
        __Vtemp_2 = "l_count"s;
    } else {
        __Vtemp_1 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__l_count) ;
        __Vtemp_2 = VL_SFORMATF_N_NX("#x%x",1, '#',32,this->__PVT__l_count) ;
    }
    VL_SFORMAT_NX(__Vtemp_3,"#x%x",1, '#',32,VL_NULL_CHECK(VL_NULL_CHECK(__Vthis, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 88)
                                                           ->__PVT__m_sequencer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 88)
                  ->__PVT__max_random_count);
    VL_SFORMAT_NX(__Vtemp_4,"(__Vbv (bvugt %s #x00000000))",1
                  , 'S',&(__Vtemp_1));
    VL_SFORMAT_NX(__Vtemp_5,"(__Vbv (bvult %s %s))",2
                  , 'S',&(__Vtemp_2), 'S',&(__Vtemp_3));
    randomizer.hard(VL_SFORMATF_N_NX("(bvand %s %s)",2
                                     , 'S',&(__Vtemp_4)
                                     , 'S',&(__Vtemp_5)) , "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequence_builtin.svh", 0x00000057U, 
                    "    if (!randomize(l_count) with { l_count > 0 &&");
    randomizer.write_var(this->__PVT__l_count, 0x0000000000000020ULL, 
                         "l_count", 0ULL, 1ULL);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    __Vrandwith_h4dcde6d2__1__Vfuncrtn = (__VlefCall_0____VBasicRand 
                                          & randomizer.next(__Vm_rng));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__l_exhaustive_seq_kind = 0;
    __PVT__max_kind = 0;
    __PVT__l_kind = 0;
    __PVT__m_success = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_random_sequence::~\n"); );
}
