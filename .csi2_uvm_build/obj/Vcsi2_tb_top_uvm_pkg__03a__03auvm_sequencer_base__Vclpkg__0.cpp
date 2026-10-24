// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, name, parent);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__m_arbitration = 0U;
    this->__PVT__count = 0xffffffffU;
    this->__PVT__max_random_count = 0x0000000aU;
    this->__PVT__max_random_depth = 4U;
    this->__PVT__default_sequence = "uvm_random_sequence"s;
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    /*super.new*/;
    __Vincrement1 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequencer_id);
    this->__PVT__m_sequencer_id = __Vincrement1;
    this->__PVT__m_lock_arb_size = 0xffffffffU;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_build\n"); );
    // Locals
    VlWide<128>/*4095:0*/ __Vfunc_get_config_int__6__value;
    VL_ZERO_W(4096, __Vfunc_get_config_int__6__value);
    VlWide<128>/*4095:0*/ __Vfunc_get_config_int__9__value;
    VL_ZERO_W(4096, __Vfunc_get_config_int__9__value);
    VlWide<128>/*4095:0*/ __Vfunc_get_config_int__12__value;
    VL_ZERO_W(4096, __Vfunc_get_config_int__12__value);
    VlWide<128>/*4095:0*/ __Vfunc_get_config_int__15__value;
    VL_ZERO_W(4096, __Vfunc_get_config_int__15__value);
    IData/*31:0*/ __Vilp1;
    IData/*31:0*/ __Vilp2;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_8__get_config_int;
    IData/*31:0*/ __VlefCall_7__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_6__get_config_int;
    IData/*31:0*/ __VlefCall_5__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_4__get_config_int;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_2__get_config_int;
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_0__get_config_string;
    IData/*31:0*/ dummy;
    dummy = 0U;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build(vlProcess, vlSymsp);
    this->__Vfunc_get_config_string__3__value = this->__PVT__default_sequence;
    this->__VnoInFunc_get_config_string(vlProcess, vlSymsp, "default_sequence"s, this->__Vfunc_get_config_string__3__value, __VlefCall_0__get_config_string);
    this->__PVT__default_sequence = this->__Vfunc_get_config_string__3__value;
    if (__VlefCall_0__get_config_string) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "default_sequence config parameter is deprecated and not part of the UVM standard. See documentation for uvm_sequencer_base::start_phase_sequence()."s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000001deU);
        }
        this->__PVT__m_default_seq_set = 1U;
    }
    VL_EXTENDS_WI(4096,32, __Vfunc_get_config_int__6__value, this->__PVT__count);
    this->__VnoInFunc_get_config_int(vlProcess, vlSymsp, "count"s, __Vfunc_get_config_int__6__value, __VlefCall_2__get_config_int);
    this->__PVT__count = __Vfunc_get_config_int__6__value[0U];
    if (__VlefCall_2__get_config_int) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "count config parameter is deprecated and not part of the UVM standard"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000001e3U);
        }
    }
    __Vfunc_get_config_int__9__value[0U] = this->__PVT__max_random_count;
    __Vilp1 = 1U;
    while ((__Vilp1 <= 0x0000007fU)) {
        __Vfunc_get_config_int__9__value[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    this->__VnoInFunc_get_config_int(vlProcess, vlSymsp, "max_random_count"s, __Vfunc_get_config_int__9__value, __VlefCall_4__get_config_int);
    this->__PVT__max_random_count = __Vfunc_get_config_int__9__value[0U];
    if (__VlefCall_4__get_config_int) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_5__uvm_report_enabled);
        if ((0U != __VlefCall_5__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "count config parameter is deprecated and not part of the UVM standard"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000001e7U);
        }
    }
    __Vfunc_get_config_int__12__value[0U] = this->__PVT__max_random_depth;
    __Vilp2 = 1U;
    while ((__Vilp2 <= 0x0000007fU)) {
        __Vfunc_get_config_int__12__value[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    this->__VnoInFunc_get_config_int(vlProcess, vlSymsp, "max_random_depth"s, __Vfunc_get_config_int__12__value, __VlefCall_6__get_config_int);
    this->__PVT__max_random_depth = __Vfunc_get_config_int__12__value[0U];
    if (__VlefCall_6__get_config_int) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_7__uvm_report_enabled);
        if ((0U != __VlefCall_7__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "max_random_depth config parameter is deprecated and not part of the UVM standard. Use 'uvm_sequence_library' class for sequence library functionality"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000001ecU);
        }
    }
    VL_EXTENDS_WI(4096,32, __Vfunc_get_config_int__15__value, dummy);
    this->__VnoInFunc_get_config_int(vlProcess, vlSymsp, "pound_zero_count"s, __Vfunc_get_config_int__15__value, __VlefCall_8__get_config_int);
    dummy = __Vfunc_get_config_int__15__value[0U];
    if (__VlefCall_8__get_config_int) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_9__uvm_report_enabled);
        if ((0U != __VlefCall_9__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, "pound_zero_count was set but ignored. Sequencer/driver synchronization now uses 'uvm_wait_for_nba_region'"s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000001f1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_sequence_id;
    std::string __VlefCall_0__get_full_name;
    IData/*31:0*/ unnamedblk188__DOT__i;
    unnamedblk188__DOT__i = 0;
    IData/*31:0*/ unnamedblk188__DOT__i__Vloopsize;
    unnamedblk188__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk189__DOT__i;
    unnamedblk189__DOT__i = 0;
    IData/*31:0*/ unnamedblk189__DOT__i__Vloopsize;
    unnamedblk189__DOT__i__Vloopsize = 0;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_do_print(vlProcess, vlSymsp, printer);
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 507)->__VnoInFunc_print_array_header(vlSymsp, "arbitration_queue"s, this->__PVT__arb_sequence_q.size(), "array"s, 0x2eU);
    unnamedblk188__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk188__DOT__i, this->__PVT__arb_sequence_q.size())) {
        unnamedblk188__DOT__i__Vloopsize = this->__PVT__arb_sequence_q.size();
        __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name61
            [(3U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk188__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 510)
              ->__PVT__request)];
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 509)->__VnoInFunc_print_string(vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk188__DOT__i) , VL_SFORMATF_N_NX("%s@seqid%0d",2
                                                                                , 'S',&(__Vtemp_1)
                                                                                , '~',32,VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk188__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 510)
                                                                                ->__PVT__sequence_id) , 0x5bU);
        if ((unnamedblk188__DOT__i__Vloopsize <= this->__PVT__arb_sequence_q.size())) {
            unnamedblk188__DOT__i = ((IData)(1U) + unnamedblk188__DOT__i);
        }
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 511)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__arb_sequence_q.size());
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 513)->__VnoInFunc_print_array_header(vlSymsp, "lock_queue"s, this->__PVT__lock_list.size(), "array"s, 0x2eU);
    unnamedblk189__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk189__DOT__i, this->__PVT__lock_list.size())) {
        unnamedblk189__DOT__i__Vloopsize = this->__PVT__lock_list.size();
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk189__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 516)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk189__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 516)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 515)->__VnoInFunc_print_string(vlSymsp, VL_SFORMATF_N_NX("[%0d]",1
                                                                                , '~',32,unnamedblk189__DOT__i) , VL_SFORMATF_N_NX("%s@seqid%0d",2
                                                                                , 'S',&(__VlefCall_0__get_full_name)
                                                                                , '~',32,__VlefCall_1__get_sequence_id) , 0x5bU);
        if ((unnamedblk189__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
            unnamedblk189__DOT__i = ((IData)(1U) + unnamedblk189__DOT__i);
        }
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 517)->__VnoInFunc_print_array_footer(vlSymsp, this->__PVT__lock_list.size());
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_update_lists\n"); );
    // Body
    this->__PVT__m_lock_arb_size = ((IData)(1U) + this->__PVT__m_lock_arb_size);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_sequence_id;
    IData/*31:0*/ unnamedblk190__DOT__i;
    unnamedblk190__DOT__i = 0;
    IData/*31:0*/ unnamedblk191__DOT__i;
    unnamedblk191__DOT__i = 0;
    IData/*31:0*/ unnamedblk191__DOT__i__Vloopsize;
    unnamedblk191__DOT__i__Vloopsize = 0;
    std::string s;
    convert2string__Vfuncrtn = ""s;
    s = "  -- arb i/id/type: "s;
    unnamedblk190__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk190__DOT__i, this->__PVT__arb_sequence_q.size())) {
        __Vtemp_1 = Vcsi2_tb_top___024unit::__Venumtab_enum_name61
            [(3U & VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk190__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 537)
              ->__PVT__request)];
        VL_SFORMAT_NX(s,"%s %0d/%0d/%s ",4, 'S',&(s)
                      , '~',32,unnamedblk190__DOT__i
                      , '~',32,VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk190__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 537)
                      ->__PVT__sequence_id, 'S',&(__Vtemp_1));
        unnamedblk190__DOT__i = ((IData)(1U) + unnamedblk190__DOT__i);
    }
    VL_SFORMAT_NX(s,"%s\n -- lock_list i/id: ",1, 'S',&(s));
    unnamedblk191__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk191__DOT__i, this->__PVT__lock_list.size())) {
        unnamedblk191__DOT__i__Vloopsize = this->__PVT__lock_list.size();
        VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk191__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 541)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
        VL_SFORMAT_NX(s,"%s %0d/%0d",3, 'S',&(s), '~',32,unnamedblk191__DOT__i
                      , '~',32,__VlefCall_0__get_sequence_id);
        if ((unnamedblk191__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
            unnamedblk191__DOT__i = ((IData)(1U) + unnamedblk191__DOT__i);
        }
    }
    convert2string__Vfuncrtn = s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_number_driver_connections(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &m_find_number_driver_connections__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_number_driver_connections\n"); );
    // Body
    m_find_number_driver_connections__Vfuncrtn = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ &m_register_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_register_sequence\n"); );
    // Body
    IData/*31:0*/ __VlefCall_1__get_sequence_id;
    IData/*31:0*/ __VlefCall_0__m_get_sqr_sequence_id;
    IData/*31:0*/ __Vincrement2;
    __Vincrement2 = 0;
    {
        m_register_sequence__Vfuncrtn = 0U;
        VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 561)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __VlefCall_0__m_get_sqr_sequence_id);
        if (VL_LTS_III(32, 0U, __VlefCall_0__m_get_sqr_sequence_id)) {
            VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 562)->__VnoInFunc_get_sequence_id(vlSymsp, m_register_sequence__Vfuncrtn);
            goto __Vlabel0;
        }
        __Vincrement2 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_sequence_id);
        VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 564)->__VnoInFunc_m_set_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, __Vincrement2);
        VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 565)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_1__get_sequence_id);
        this->__PVT__reg_sequences.atWrite(__VlefCall_1__get_sequence_id) 
            = sequence_ptr;
        VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 566)->__VnoInFunc_get_sequence_id(vlSymsp, m_register_sequence__Vfuncrtn);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &m_find_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_find_sequence\n"); );
    // Body
    CData/*0:0*/ __VlefExpr_0;
    IData/*31:0*/ i;
    {
        i = 0U;
        if ((0xffffffffU == sequence_id)) {
            __VlefExpr_0 = (0U != this->__PVT__reg_sequences.first(i));
            if (__VlefExpr_0) {
                m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
                    .at(i);
                goto __Vlabel0;
            }
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        if ((! this->__PVT__reg_sequences.exists(sequence_id))) {
            m_find_sequence__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        m_find_sequence__Vfuncrtn = this->__PVT__reg_sequences
            .at(sequence_id);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ sequence_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unregister_sequence\n"); );
    // Body
    {
        if ((! this->__PVT__reg_sequences.exists(sequence_id))) {
            goto __Vlabel0;
        }
        this->__PVT__reg_sequences.erase(sequence_id);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<IData/*31:0*/> avail_sequences, IData/*31:0*/ &user_priority_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_user_priority_arbitration\n"); );
    // Body
    user_priority_arbitration__Vfuncrtn = avail_sequences.at(0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grant_queued_locks\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_7__is_blocked;
    CData/*0:0*/ __VlefCall_6__is_blocked;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    IData/*31:0*/ i;
    IData/*31:0*/ temp;
    temp = 0U;
    i = 0U;
    while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
        {
            temp = 0U;
            if (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
                if ((1U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 626)
                     ->__PVT__request)) {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 627)
                                  ->__PVT__process_id, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 627)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
                    __VlefLogOr_2 = (4U == __VlefCall_0__status);
                    if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 628)
                                      ->__PVT__process_id, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 628)->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                        __VlefLogOr_2 = (0U == __VlefCall_1__status);
                    }
                    if (__VlefLogOr_2) {
                        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SEQLCKZMB"s, __VlefCall_3__uvm_report_enabled);
                        if ((0U != __VlefCall_3__uvm_report_enabled)) {
                            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 629)
                                          ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 629)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQLCKZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a lock on sequencer '%s' for sequence '%s' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",2
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , 'S',&(__VlefCall_5__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x00000275U);
                        }
                        this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 630)
                                                                      ->__PVT__sequence_ptr);
                        goto __Vlabel0;
                    }
                    this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 634)
                                                 ->__PVT__sequence_ptr, __VlefCall_6__is_blocked);
                    temp = (1U & (~ (IData)(__VlefCall_6__is_blocked)));
                }
            }
            while ((0U != temp)) {
                this->__PVT__lock_list.push_back(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 642)
                                                 ->__PVT__sequence_ptr);
                this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 643)
                                                              ->__PVT__request_id);
                this->__PVT__arb_sequence_q.erase(i);
                {
                    // Inlined CFunc: __VnoInFunc_m_update_lists
                    this->__PVT__m_lock_arb_size = 
                        ((IData)(1U) + this->__PVT__m_lock_arb_size);
                }
                temp = 0U;
                if (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
                    if ((1U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 649)
                         ->__PVT__request)) {
                        this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 650)
                                                     ->__PVT__sequence_ptr, __VlefCall_7__is_blocked);
                        temp = (1U & (~ (IData)(__VlefCall_7__is_blocked)));
                    }
                }
            }
            i = ((IData)(1U) + i);
            __Vlabel0: ;
        }
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_select_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ selected_sequence;
    selected_sequence = 0U;
    do {
        co_await this->__VnoInFunc_wait_for_sequences(vlProcess, vlSymsp);
        this->__VnoInFunc_m_choose_next_request(vlProcess, vlSymsp, selected_sequence);
        if ((0xffffffffU == selected_sequence)) {
            co_await this->__VnoInFunc_m_wait_for_available_sequence(vlProcess, vlSymsp);
        }
    } while ((0xffffffffU == selected_sequence));
    if (VL_LTES_III(32, 0U, selected_sequence)) {
        this->__VnoInFunc_m_set_arbitration_completed(vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(selected_sequence), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 677)
                                                      ->__PVT__request_id);
        this->__PVT__arb_sequence_q.erase(selected_sequence);
        {
            // Inlined CFunc: __VnoInFunc_m_update_lists
            this->__PVT__m_lock_arb_size = ((IData)(1U) 
                                            + this->__PVT__m_lock_arb_size);
        }
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &m_choose_next_request__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_choose_next_request\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_user_priority_arbitration__67__Vfuncout;
    __Vfunc_user_priority_arbitration__67__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_14__convert2string;
    IData/*31:0*/ __VlefCall_13__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_12__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_11__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_10__m_get_seq_item_priority;
    IData/*31:0*/ __VlefCall_9__m_get_seq_item_priority;
    CData/*0:0*/ __VlefCall_8__is_blocked;
    CData/*0:0*/ __VlefCall_7__is_relevant;
    CData/*0:0*/ __VlefCall_6__is_blocked;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    CData/*0:0*/ __VlefLogOr_2;
    IData/*31:0*/ __VlefCall_1__status;
    IData/*31:0*/ __VlefCall_0__status;
    IData/*31:0*/ i;
    IData/*31:0*/ temp;
    IData/*31:0*/ sum_priority_val;
    VlQueue<IData/*31:0*/> avail_sequences;
    VlQueue<IData/*31:0*/> highest_sequences;
    IData/*31:0*/ highest_pri;
    {
        m_choose_next_request__Vfuncrtn = 0U;
        i = 0U;
        temp = 0U;
        sum_priority_val = 0U;
        avail_sequences.clear();
        avail_sequences.atDefault() = 0;
        highest_sequences.clear();
        highest_sequences.atDefault() = 0;
        highest_pri = 0U;
        this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
        i = 0U;
        while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
            {
                VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 707)
                              ->__PVT__process_id, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 707)->__VnoInFunc_status(vlSymsp, __VlefCall_0__status);
                __VlefLogOr_2 = (4U == __VlefCall_0__status);
                if ((1U & (~ (IData)(__VlefLogOr_2)))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 708)
                                  ->__PVT__process_id, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 708)->__VnoInFunc_status(vlSymsp, __VlefCall_1__status);
                    __VlefLogOr_2 = (0U == __VlefCall_1__status);
                }
                if (__VlefLogOr_2) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SEQREQZMB"s, __VlefCall_3__uvm_report_enabled);
                    if ((0U != __VlefCall_3__uvm_report_enabled)) {
                        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 709)
                                      ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 709)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQREQZMB"s, VL_SFORMATF_N_NX("The task responsible for requesting a wait_for_grant on sequencer '%s' for sequence '%s' has been killed, to avoid a deadlock the sequence will be removed from the arbitration queues",2
                                                                                , 'S',&(__VlefCall_4__get_full_name)
                                                                                , 'S',&(__VlefCall_5__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000002c5U);
                    }
                    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 710)
                                                                  ->__PVT__sequence_ptr);
                    goto __Vlabel1;
                }
                if (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size())) {
                    if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 715)
                         ->__PVT__request)) {
                        this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 716)
                                                     ->__PVT__sequence_ptr, __VlefCall_6__is_blocked);
                        if ((1U & (~ (IData)(__VlefCall_6__is_blocked)))) {
                            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 717)
                                          ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 717)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_7__is_relevant);
                            if (__VlefCall_7__is_relevant) {
                                if ((0U == this->__PVT__m_arbitration)) {
                                    m_choose_next_request__Vfuncrtn 
                                        = i;
                                    goto __Vlabel0;
                                } else {
                                    avail_sequences.push_back(i);
                                }
                            }
                        }
                    }
                }
                i = ((IData)(1U) + i);
                __Vlabel1: ;
            }
        }
        if ((0U == this->__PVT__m_arbitration)) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        if (VL_GTS_III(32, 1U, avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        if ((1U == avail_sequences.size())) {
            m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 0U, this->__PVT__lock_list.size())) {
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 743)
                                             ->__PVT__sequence_ptr, __VlefCall_8__is_blocked);
                if (__VlefCall_8__is_blocked) {
                    avail_sequences.erase(i);
                    i = (i - (IData)(1U));
                }
                i = ((IData)(1U) + i);
            }
            if (VL_GTS_III(32, 1U, avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = 0xffffffffU;
                goto __Vlabel0;
            }
            if ((1U == avail_sequences.size())) {
                m_choose_next_request__Vfuncrtn = avail_sequences.at(0U);
                goto __Vlabel0;
            }
        }
        if ((1U == this->__PVT__m_arbitration)) {
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_9__m_get_seq_item_priority);
                sum_priority_val = (sum_priority_val 
                                    + __VlefCall_9__m_get_seq_item_priority);
                i = ((IData)(1U) + i);
            }
            temp = VL_URANDOM_RANGE_I((sum_priority_val 
                                       - (IData)(1U)), 0U);
            sum_priority_val = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_10__m_get_seq_item_priority);
                if (VL_GTS_III(32, (__VlefCall_10__m_get_seq_item_priority 
                                    + sum_priority_val), temp)) {
                    m_choose_next_request__Vfuncrtn 
                        = avail_sequences.at(i);
                    goto __Vlabel0;
                }
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_11__m_get_seq_item_priority);
                sum_priority_val = (sum_priority_val 
                                    + __VlefCall_11__m_get_seq_item_priority);
                i = ((IData)(1U) + i);
            }
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "UVM Internal error in weighted arbitration code"s, 0U, ""s, 0U);
        }
        if ((2U == this->__PVT__m_arbitration)) {
            i = VL_URANDOM_RANGE_I((avail_sequences.size() 
                                    - (IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = avail_sequences.at(i);
            goto __Vlabel0;
        }
        if (((3U == this->__PVT__m_arbitration) | (4U 
                                                   == this->__PVT__m_arbitration))) {
            highest_pri = 0U;
            i = 0U;
            while (VL_LTS_III(32, i, avail_sequences.size())) {
                this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_12__m_get_seq_item_priority);
                if (VL_GTS_III(32, __VlefCall_12__m_get_seq_item_priority, highest_pri)) {
                    highest_sequences.clear();
                    highest_sequences.push_back(avail_sequences.at(i));
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), highest_pri);
                } else {
                    this->__VnoInFunc_m_get_seq_item_priority(vlProcess, vlSymsp, this->__PVT__arb_sequence_q.at(avail_sequences.at(i)), __VlefCall_13__m_get_seq_item_priority);
                    if ((__VlefCall_13__m_get_seq_item_priority 
                         == highest_pri)) {
                        highest_sequences.push_back(avail_sequences.at(i));
                    }
                }
                i = ((IData)(1U) + i);
            }
            if ((3U == this->__PVT__m_arbitration)) {
                m_choose_next_request__Vfuncrtn = highest_sequences.at(0U);
                goto __Vlabel0;
            }
            i = VL_URANDOM_RANGE_I((highest_sequences.size() 
                                    - (IData)(1U)), 0U);
            m_choose_next_request__Vfuncrtn = highest_sequences.at(i);
            goto __Vlabel0;
        }
        if ((5U == this->__PVT__m_arbitration)) {
            this->__VnoInFunc_user_priority_arbitration(vlSymsp, avail_sequences, __Vfunc_user_priority_arbitration__67__Vfuncout);
            i = __Vfunc_user_priority_arbitration__67__Vfuncout;
            highest_sequences = avail_sequences.find(
                                                     [&](
                                                         IData/*31:0*/ item__DOT__index, 
                                                         IData/*31:0*/ item) -> 
                                                     CData/*31:0*/ {
                    return ((item == i));
                }
            );
            if ((0U == highest_sequences.size())) {
                this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_14__convert2string);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, VL_SFORMATF_N_NX("Error in User arbitration, sequence %0d not available\n%s",2
                                                                                , '~',32,i
                                                                                , 'S',&(__VlefCall_14__convert2string)) , 0U, ""s, 0U);
            }
            m_choose_next_request__Vfuncrtn = i;
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "Sequencer"s, "Internal error: Failed to choose sequence"s, 0U, ""s, 0U);
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_arb_not_equal\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h8da0282b__0;
    __Vtrigprevexpr_h8da0282b__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    if ((this->__PVT__m_arb_size == this->__PVT__m_lock_arb_size)) {
        CData/*0:0*/ __VdynTrigger_hb7df51fd__0;
        __VdynTrigger_hb7df51fd__0 = 0;
        __VdynTrigger_hb7df51fd__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_hb7df51fd__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                         829);
            __Vtrigprevexpr_h8da0282b__0 = (this->__PVT__m_arb_size 
                                            != this->__PVT__m_lock_arb_size);
            __VdynTrigger_hb7df51fd__0 = __Vtrigprevexpr_h8da0282b__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hb7df51fd__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (uvm_pkg::uvm_sequencer_base.m_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                     829);
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VlefCall_1__is_relevant;
    CData/*0:0*/ __VlefCall_0__is_blocked;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32> __VDynScope_m_wait_for_available_sequence_0;
    VlQueue<IData/*31:0*/> is_relevant_entries;
    __VDynScope_m_wait_for_available_sequence_0 = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32, vlSymsp);
    {
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 837)->__PVT__i = 0U;
        is_relevant_entries.clear();
        is_relevant_entries.atDefault() = 0;
        this->__PVT__m_arb_size = this->__PVT__m_lock_arb_size;
        VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 844)->__PVT__i = 0U;
        while (VL_LTS_III(32, VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 844)
                          ->__PVT__i, this->__PVT__arb_sequence_q.size())) {
            if ((0U == VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 845)
                                                                    ->__PVT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 845)
                 ->__PVT__request)) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 846)
                                                                                ->__PVT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 846)
                                             ->__PVT__sequence_ptr, __VlefCall_0__is_blocked);
                if ((1U & (~ (IData)(__VlefCall_0__is_blocked)))) {
                    VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 847)
                                                                               ->__PVT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 847)
                                  ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 847)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_1__is_relevant);
                    if ((1U & (~ (IData)(__VlefCall_1__is_relevant)))) {
                        is_relevant_entries.push_back(VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 848)
                                                      ->__PVT__i);
                    }
                }
            }
            VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 844)->__PVT__i 
                = ((IData)(1U) + VL_NULL_CHECK(__VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 844)
                   ->__PVT__i);
        }
        if ((0U == is_relevant_entries.size())) {
            co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
            goto __Vlabel0;
        }
        {
            VlForkSync __Vfork_1__sync;
            __Vfork_1__sync.init(1U, vlProcess);
            this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_1__sync, is_relevant_entries, __VDynScope_m_wait_for_available_sequence_0);
            co_await __Vfork_1__sync.join(vlProcess, 
                                          "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                          860);
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_1__sync, VlQueue<IData/*31:0*/> &is_relevant_entries, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32> &__VDynScope_m_wait_for_available_sequence_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_1__sync.onKill(vlProcess);
    {
        VlForkSync __Vfork_2__sync;
        __Vfork_2__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_2__sync, is_relevant_entries, __VDynScope_m_wait_for_available_sequence_0);
        co_await __Vfork_2__sync.join(vlProcess, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                      862);
    }
    vlProcess->disableFork();
    __Vfork_1__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                         861);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_2__sync, VlQueue<IData/*31:0*/> is_relevant_entries, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32> __VDynScope_m_wait_for_available_sequence_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_2__sync.onKill(vlProcess);
    this->__Vtask___VforkTask_2__75__is_relevant_entries 
        = is_relevant_entries;
    this->__Vtask___VforkTask_2__75____VDynScope_m_wait_for_available_sequence_0 
        = __VDynScope_m_wait_for_available_sequence_0;
    {
        VlForkSync __Vfork_3__sync;
        __Vfork_3__sync.init(1U, vlProcess);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vfork_3__sync);
        co_await __Vfork_3__sync.join(vlProcess, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                      864);
    }
    __Vfork_2__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                         863);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__1\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_3__sync.onKill(vlProcess);
    co_await this->__VnoInFunc_m_wait_arb_not_equal(vlProcess, vlSymsp);
    __Vfork_3__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                         884);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_32> __Vtask___VforkTask_1__76____VDynScope_m_wait_for_available_sequence_0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vfork_3__sync.onKill(vlProcess);
    CData/*0:0*/ __Vtrigprevexpr_h9763e72e__0;
    __Vtrigprevexpr_h9763e72e__0 = 0;
    this->__Vtask___VforkTask_1__76__is_relevant_entries 
        = this->__Vtask___VforkTask_2__75__is_relevant_entries;
    __Vtask___VforkTask_1__76____VDynScope_m_wait_for_available_sequence_0 
        = this->__Vtask___VforkTask_2__75____VDynScope_m_wait_for_available_sequence_0;
    this->__PVT__m_is_relevant_completed = 0U;
    VL_NULL_CHECK(__Vtask___VforkTask_1__76____VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 869)->__PVT__i = 0U;
    while (VL_LTS_III(32, VL_NULL_CHECK(__Vtask___VforkTask_1__76____VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 869)
                      ->__PVT__i, this->__Vtask___VforkTask_1__76__is_relevant_entries.size())) {
        this->__Vtask___VforkTask_1__76___Vwrapped_unnamedblk192_6__DOT____VDynScope_unnamedblk192_6 
            = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_38, vlSymsp);
        VL_NULL_CHECK(this->__Vtask___VforkTask_1__76___Vwrapped_unnamedblk192_6__DOT____VDynScope_unnamedblk192_6, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 871)->__PVT__k 
            = VL_NULL_CHECK(__Vtask___VforkTask_1__76____VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 871)
            ->__PVT__i;
        this->__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
        VL_NULL_CHECK(__Vtask___VforkTask_1__76____VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 869)->__PVT__i 
            = ((IData)(1U) + VL_NULL_CHECK(__Vtask___VforkTask_1__76____VDynScope_m_wait_for_available_sequence_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 869)
               ->__PVT__i);
    }
    if (VL_GTES_III(32, 0U, this->__PVT__m_is_relevant_completed)) {
        CData/*0:0*/ __VdynTrigger_had8b1506__0;
        __VdynTrigger_had8b1506__0 = 0;
        __VdynTrigger_had8b1506__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_had8b1506__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                         880);
            __Vtrigprevexpr_h9763e72e__0 = VL_LTS_III(32, 0U, this->__PVT__m_is_relevant_completed);
            __VdynTrigger_had8b1506__0 = __Vtrigprevexpr_h9763e72e__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_had8b1506__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] (32'sh0 < uvm_pkg::uvm_sequencer_base.m_is_relevant_completed))", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                     880);
    }
    __Vfork_3__sync.done("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                         865);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_available_sequence____Vfork_1__0____Vfork_2__0____Vfork_3__0____Vfork_4__0\n"); );
    // Locals
    VlQueue<IData/*31:0*/> __Vtask___VforkTask_0__78__is_relevant_entries;
    __Vtask___VforkTask_0__78__is_relevant_entries.atDefault() = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_38> __Vtask___VforkTask_0__78____VDynScope_unnamedblk192_6;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__78____VDynScope_unnamedblk192_6 
        = this->__Vtask___VforkTask_1__76___Vwrapped_unnamedblk192_6__DOT____VDynScope_unnamedblk192_6;
    __Vtask___VforkTask_0__78__is_relevant_entries 
        = this->__Vtask___VforkTask_1__76__is_relevant_entries;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                            870);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(__Vtask___VforkTask_0__78__is_relevant_entries.at(VL_NULL_CHECK(__Vtask___VforkTask_0__78____VDynScope_unnamedblk192_6, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 874)
                                                                                ->__PVT__k)), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 874)
                           ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 874)->__VnoInFunc_wait_for_relevant(vlProcess, vlSymsp);
    this->__PVT__m_is_relevant_completed = 1U;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request> seq_q_entry, IData/*31:0*/ &m_get_seq_item_priority__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_get_seq_item_priority\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_3__get_priority;
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__get_priority;
    std::string __VlefCall_0__get_full_name;
    {
        m_get_seq_item_priority__Vfuncrtn = 0U;
        if ((0xffffffffU != VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 901)
             ->__PVT__item_priority)) {
            if (VL_GTES_III(32, 0U, VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 902)
                            ->__PVT__item_priority)) {
                VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 905)
                              ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 905)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQITEMPRI"s, VL_SFORMATF_N_NX("Sequence item from %s has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_0__get_full_name)
                                                                                , '~',32,VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 906)
                                                                                ->__PVT__item_priority) , 0U, ""s, 0U);
            }
            m_get_seq_item_priority__Vfuncrtn = VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 908)
                ->__PVT__item_priority;
            goto __Vlabel0;
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 911)
                      ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 911)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_1__get_priority);
        if (VL_GTS_III(32, 0U, __VlefCall_1__get_priority)) {
            VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 914)
                          ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 914)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
            VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 915)
                          ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 915)->__VnoInFunc_get_priority(vlSymsp, __VlefCall_3__get_priority);
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "SEQDEFPRI"s, VL_SFORMATF_N_NX("Sequence %s has illegal priority: %0d",2
                                                                                , 'S',&(__VlefCall_2__get_full_name)
                                                                                , '~',32,__VlefCall_3__get_priority) , 0U, ""s, 0U);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(seq_q_entry, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 917)
                      ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 917)->__VnoInFunc_get_priority(vlSymsp, m_get_seq_item_priority__Vfuncrtn);
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_wait_for_arbitration_completed\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_hfc54f3b9__0;
    __Vtrigprevexpr_hfc54f3b9__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ lock_arb_size;
    {
        lock_arb_size = 0U;
        while (true) {
            lock_arb_size = this->__PVT__m_lock_arb_size;
            if (this->__PVT__arb_completed.exists(request_id)) {
                this->__PVT__arb_completed.erase(request_id);
                goto __Vlabel0;
            }
            if ((lock_arb_size == this->__PVT__m_lock_arb_size)) {
                CData/*0:0*/ __VdynTrigger_h0a9a188f__0;
                __VdynTrigger_h0a9a188f__0 = 0;
                __VdynTrigger_h0a9a188f__0 = 0U;
                while ((1U & (~ (IData)(__VdynTrigger_h0a9a188f__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                                 936);
                    __Vtrigprevexpr_hfc54f3b9__0 = 
                        (lock_arb_size != this->__PVT__m_lock_arb_size);
                    __VdynTrigger_h0a9a188f__0 = __Vtrigprevexpr_hfc54f3b9__0;
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0a9a188f__0);
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequencer_base.lock_arb_size != uvm_pkg::uvm_sequencer_base.m_lock_arb_size))", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                             936);
            }
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ request_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_set_arbitration_completed\n"); );
    // Body
    this->__PVT__arb_completed.atWrite(request_id) = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> child, CData/*0:0*/ &is_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> child_parent;
    {
        is_child__Vfuncrtn = 0U;
        if ((VlNull{} == child)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null child"s, 0U, ""s, 0U);
        }
        if ((VlNull{} == parent)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "is_child passed null parent"s, 0U, ""s, 0U);
        }
        VL_NULL_CHECK(child, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 964)->__VnoInFunc_get_parent_sequence(vlSymsp, child_parent);
        while ((VlNull{} != child_parent)) {
            VL_NULL_CHECK(child_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 966)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 966)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            if ((__VlefCall_0__get_inst_id == __VlefCall_1__get_inst_id)) {
                is_child__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            VL_NULL_CHECK(child_parent, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 969)->__VnoInFunc_get_parent_sequence(vlSymsp, child_parent);
        }
        is_child__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_execute_item(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_execute_item\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> seq;
    seq = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base, vlProcess, vlSymsp, "uvm_sequence"s);
    VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 982)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this});
    VL_NULL_CHECK(item, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 983)->__VnoInFunc_set_parent_sequence(vlSymsp, seq);
    VL_NULL_CHECK(seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 984)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this});
    co_await VL_NULL_CHECK(seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 985)->__VnoInFunc_start_item(vlProcess, vlSymsp, item, 0xffffffffU, VlNull{});
    co_await VL_NULL_CHECK(seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 986)->__VnoInFunc_finish_item(vlProcess, vlSymsp, item, 0xffffffffU);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ item_priority, CData/*0:0*/ lock_request) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_grant\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __VlefCall_1__self;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __VlefCall_0__self;
    IData/*31:0*/ __Vincrement4;
    __Vincrement4 = 0;
    IData/*31:0*/ __Vincrement3;
    __Vincrement3 = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request> req_s;
    IData/*31:0*/ my_seq_id;
    my_seq_id = 0U;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "wait_for_grant passed null sequence_ptr"s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
    if (lock_request) {
        req_s = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
        VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1009)->__PVT__grant = 0U;
        VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1010)->__PVT__sequence_id 
            = my_seq_id;
        VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1011)->__PVT__request = 1U;
        VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1012)->__PVT__sequence_ptr 
            = sequence_ptr;
        __Vincrement3 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
            = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
        VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1013)->__PVT__request_id 
            = __Vincrement3;
        vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_0__self);
        VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1014)->__PVT__process_id 
            = __VlefCall_0__self;
        this->__PVT__arb_sequence_q.push_back(req_s);
    }
    req_s = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1020)->__PVT__grant = 0U;
    VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1021)->__PVT__request = 0U;
    VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1022)->__PVT__sequence_id 
        = my_seq_id;
    VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1023)->__PVT__item_priority 
        = item_priority;
    VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1024)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement4 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1025)->__PVT__request_id 
        = __Vincrement4;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_1__self);
    VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1026)->__PVT__process_id 
        = __VlefCall_1__self;
    this->__PVT__arb_sequence_q.push_back(req_s);
    {
        // Inlined CFunc: __VnoInFunc_m_update_lists
        this->__PVT__m_lock_arb_size = ((IData)(1U) 
                                        + this->__PVT__m_lock_arb_size);
    }
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1032)
                                                                ->__PVT__request_id);
    VL_NULL_CHECK(VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1037)
                  ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1037)->__PVT__m_wait_for_grant_semaphore 
        = ((IData)(1U) + VL_NULL_CHECK(VL_NULL_CHECK(req_s, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1037)
                                       ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1037)
           ->__PVT__m_wait_for_grant_semaphore);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, IData/*31:0*/ transaction_id) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_item_done\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr_h439a3732__0;
    __Vtrigprevexpr_h439a3732__0 = 0;
    CData/*0:0*/ __Vtrigprevexpr_h58319deb__0;
    __Vtrigprevexpr_h58319deb__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ sequence_id;
    sequence_id = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1049)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, sequence_id);
    this->__PVT__m_wait_for_item_sequence_id = 0xffffffffU;
    this->__PVT__m_wait_for_item_transaction_id = 0xffffffffU;
    if ((0xffffffffU == transaction_id)) {
        if ((this->__PVT__m_wait_for_item_sequence_id 
             != sequence_id)) {
            CData/*0:0*/ __VdynTrigger_h6e3dbf3d__0;
            __VdynTrigger_h6e3dbf3d__0 = 0;
            __VdynTrigger_h6e3dbf3d__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h6e3dbf3d__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                             1054);
                __Vtrigprevexpr_h58319deb__0 = (this->__PVT__m_wait_for_item_sequence_id 
                                                == sequence_id);
                __VdynTrigger_h6e3dbf3d__0 = __Vtrigprevexpr_h58319deb__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h6e3dbf3d__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] (uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                         1054);
        }
    } else if ((1U & (~ ((this->__PVT__m_wait_for_item_sequence_id 
                          == sequence_id) & (this->__PVT__m_wait_for_item_transaction_id 
                                             == transaction_id))))) {
        CData/*0:0*/ __VdynTrigger_h41e564fa__0;
        __VdynTrigger_h41e564fa__0 = 0;
        __VdynTrigger_h41e564fa__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h41e564fa__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                         1056);
            __Vtrigprevexpr_h439a3732__0 = ((this->__PVT__m_wait_for_item_sequence_id 
                                             == sequence_id) 
                                            & (this->__PVT__m_wait_for_item_transaction_id 
                                               == transaction_id));
            __VdynTrigger_h41e564fa__0 = __Vtrigprevexpr_h439a3732__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h41e564fa__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@([true] ((uvm_pkg::uvm_sequencer_base.m_wait_for_item_sequence_id == uvm_pkg::uvm_sequencer_base.sequence_id) & (uvm_pkg::uvm_sequencer_base.m_wait_for_item_transaction_id == uvm_pkg::uvm_sequencer_base.transaction_id)))", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                                     1056);
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &is_blocked__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_blocked\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogAnd_3;
    CData/*0:0*/ __VlefCall_2__is_child;
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ unnamedblk193__DOT__i;
    unnamedblk193__DOT__i = 0;
    IData/*31:0*/ unnamedblk193__DOT__i__Vloopsize;
    unnamedblk193__DOT__i__Vloopsize = 0;
    {
        is_blocked__Vfuncrtn = 0U;
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "is_blocked passed null sequence_ptr"s, 0U, ""s, 0U);
        }
        unnamedblk193__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk193__DOT__i, this->__PVT__lock_list.size())) {
            unnamedblk193__DOT__i__Vloopsize = this->__PVT__lock_list.size();
            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk193__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1071)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1072)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            __VlefLogAnd_3 = (__VlefCall_0__get_inst_id 
                              != __VlefCall_1__get_inst_id);
            if (__VlefLogAnd_3) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, this->__PVT__lock_list.at(unnamedblk193__DOT__i), sequence_ptr, __VlefCall_2__is_child);
                __VlefLogAnd_3 = (1U & (~ (IData)(__VlefCall_2__is_child)));
            }
            if (__VlefLogAnd_3) {
                is_blocked__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk193__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
                unnamedblk193__DOT__i = ((IData)(1U) 
                                         + unnamedblk193__DOT__i);
            }
        }
        is_blocked__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_lock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ &has_lock__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_lock\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ unnamedblk194__DOT__i;
    unnamedblk194__DOT__i = 0;
    IData/*31:0*/ unnamedblk194__DOT__i__Vloopsize;
    unnamedblk194__DOT__i__Vloopsize = 0;
    IData/*31:0*/ my_seq_id;
    {
        has_lock__Vfuncrtn = 0U;
        my_seq_id = 0U;
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "has_lock passed null sequence_ptr"s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
        unnamedblk194__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk194__DOT__i, this->__PVT__lock_list.size())) {
            unnamedblk194__DOT__i__Vloopsize = this->__PVT__lock_list.size();
            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk194__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1092)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1092)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            if ((__VlefCall_0__get_inst_id == __VlefCall_1__get_inst_id)) {
                has_lock__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk194__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
                unnamedblk194__DOT__i = ((IData)(1U) 
                                         + unnamedblk194__DOT__i);
            }
        }
        has_lock__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_lock_req(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, CData/*0:0*/ lock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_lock_req\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __VlefCall_1__self;
    IData/*31:0*/ __VlefCall_0__get_sequence_id;
    IData/*31:0*/ __Vincrement5;
    __Vincrement5 = 0;
    IData/*31:0*/ my_seq_id;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request> new_req;
    my_seq_id = 0U;
    if ((VlNull{} == sequence_ptr)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequence_controller"s, "lock_req passed null sequence_ptr"s, 0U, ""s, 0U);
    }
    this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
    new_req = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_request, vlSymsp);
    VL_NULL_CHECK(new_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1115)->__PVT__grant = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1116)->__VnoInFunc_get_sequence_id(vlSymsp, __VlefCall_0__get_sequence_id);
    VL_NULL_CHECK(new_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1116)->__PVT__sequence_id 
        = __VlefCall_0__get_sequence_id;
    VL_NULL_CHECK(new_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1117)->__PVT__request = 1U;
    VL_NULL_CHECK(new_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1118)->__PVT__sequence_ptr 
        = sequence_ptr;
    __Vincrement5 = vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg__03a__03auvm_sequencer_base__Vclpkg.__PVT__g_request_id);
    VL_NULL_CHECK(new_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1119)->__PVT__request_id 
        = __Vincrement5;
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __VlefCall_1__self);
    VL_NULL_CHECK(new_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1120)->__PVT__process_id 
        = __VlefCall_1__self;
    if (lock) {
        this->__PVT__arb_sequence_q.push_back(new_req);
    } else {
        this->__PVT__arb_sequence_q.push_front(new_req);
        {
            // Inlined CFunc: __VnoInFunc_m_update_lists
            this->__PVT__m_lock_arb_size = ((IData)(1U) 
                                            + this->__PVT__m_lock_arb_size);
        }
    }
    this->__VnoInFunc_grant_queued_locks(vlProcess, vlSymsp);
    co_await this->__VnoInFunc_m_wait_for_arbitration_completed(vlProcess, vlSymsp, VL_NULL_CHECK(new_req, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1136)
                                                                ->__PVT__request_id);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unlock_req(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_unlock_req\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__get_full_name;
    IData/*31:0*/ __VlefCall_1__get_inst_id;
    IData/*31:0*/ __VlefCall_0__get_inst_id;
    IData/*31:0*/ unnamedblk195__DOT__i;
    unnamedblk195__DOT__i = 0;
    IData/*31:0*/ unnamedblk195__DOT__i__Vloopsize;
    unnamedblk195__DOT__i__Vloopsize = 0;
    IData/*31:0*/ my_seq_id;
    {
        my_seq_id = 0U;
        if ((VlNull{} == sequence_ptr)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "uvm_sequencer"s, "m_unlock_req passed null sequence_ptr"s, 0U, ""s, 0U);
        }
        this->__VnoInFunc_m_register_sequence(vlSymsp, sequence_ptr, my_seq_id);
        unnamedblk195__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk195__DOT__i, this->__PVT__lock_list.size())) {
            unnamedblk195__DOT__i__Vloopsize = this->__PVT__lock_list.size();
            VL_NULL_CHECK(this->__PVT__lock_list.at(unnamedblk195__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1155)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_0__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1155)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_1__get_inst_id);
            if ((__VlefCall_0__get_inst_id == __VlefCall_1__get_inst_id)) {
                this->__PVT__lock_list.erase(unnamedblk195__DOT__i);
                {
                    // Inlined CFunc: __VnoInFunc_m_update_lists
                    this->__PVT__m_lock_arb_size = 
                        ((IData)(1U) + this->__PVT__m_lock_arb_size);
                }
                goto __Vlabel0;
            }
            if ((unnamedblk195__DOT__i__Vloopsize <= this->__PVT__lock_list.size())) {
                unnamedblk195__DOT__i = ((IData)(1U) 
                                         + unnamedblk195__DOT__i);
            }
        }
        VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1162)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_2__get_full_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SQRUNL"s, 
                                             VL_CVT_PACK_STR_NN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN("Sequence '"s, __VlefCall_2__get_full_name), "' called ungrab / unlock, but didn't have lock"s)), 0U, ""s, 0U);
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_lock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_lock\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_lock_req(vlSymsp, sequence_ptr, 1U);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grab(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_grab\n"); );
    // Body
    VL_KEEP_THIS;
    co_await this->__VnoInFunc_m_lock_req(vlSymsp, sequence_ptr, 0U);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_unlock(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_unlock\n"); );
    // Body
    this->__VnoInFunc_m_unlock_req(vlSymsp, sequence_ptr);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_ungrab(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_ungrab\n"); );
    // Body
    this->__VnoInFunc_m_unlock_req(vlSymsp, sequence_ptr);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence_from_queues\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_12__m_get_sqr_sequence_id;
    std::string __VlefCall_11__get_full_name;
    std::string __VlefCall_10__get_full_name;
    IData/*31:0*/ __VlefCall_9__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_8__get_sequence_state;
    CData/*0:0*/ __VlefCall_7__is_child;
    IData/*31:0*/ __VlefCall_6__get_inst_id;
    IData/*31:0*/ __VlefCall_5__get_inst_id;
    std::string __VlefCall_4__get_full_name;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_1__get_sequence_state;
    CData/*0:0*/ __VlefCall_0__is_child;
    IData/*31:0*/ i;
    IData/*31:0*/ seq_id;
    i = 0U;
    seq_id = 0U;
    VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1207)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 0U, seq_id);
    i = 0U;
    do {
        if (VL_GTS_III(32, this->__PVT__arb_sequence_q.size(), i)) {
            __VlefCall_0__is_child = (VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1214)
                                      ->__PVT__sequence_id 
                                      == seq_id);
            if ((1U & (~ (IData)(__VlefCall_0__is_child)))) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1215)
                                           ->__PVT__sequence_ptr, __VlefCall_0__is_child);
            }
            if (__VlefCall_0__is_child) {
                VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1216)->__VnoInFunc_get_sequence_state(vlSymsp, __VlefCall_1__get_sequence_state);
                if ((0x00000100U == __VlefCall_1__get_sequence_state)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SEQFINERR"s, __VlefCall_2__uvm_report_enabled);
                    if ((0U != __VlefCall_2__uvm_report_enabled)) {
                        VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1217)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
                        VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1217)
                                      ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1217)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%s' should not finish before all items from itself and items from descendent sequences are processed.  The item request from the sequence '%s' is being removed.",2
                                                                                , 'S',&(__VlefCall_3__get_full_name)
                                                                                , 'S',&(__VlefCall_4__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000004c1U);
                    }
                }
                this->__PVT__arb_sequence_q.erase(i);
                {
                    // Inlined CFunc: __VnoInFunc_m_update_lists
                    this->__PVT__m_lock_arb_size = 
                        ((IData)(1U) + this->__PVT__m_lock_arb_size);
                }
            } else {
                i = ((IData)(1U) + i);
            }
        }
    } while (VL_LTS_III(32, i, this->__PVT__arb_sequence_q.size()));
    i = 0U;
    do {
        if (VL_GTS_III(32, this->__PVT__lock_list.size(), i)) {
            VL_NULL_CHECK(this->__PVT__lock_list.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1233)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_5__get_inst_id);
            VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1233)->__VnoInFunc_get_inst_id(vlSymsp, __VlefCall_6__get_inst_id);
            __VlefCall_7__is_child = (__VlefCall_5__get_inst_id 
                                      == __VlefCall_6__get_inst_id);
            if ((1U & (~ (IData)(__VlefCall_7__is_child)))) {
                this->__VnoInFunc_is_child(vlProcess, vlSymsp, sequence_ptr, this->__PVT__lock_list.at(i), __VlefCall_7__is_child);
            }
            if (__VlefCall_7__is_child) {
                VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1235)->__VnoInFunc_get_sequence_state(vlSymsp, __VlefCall_8__get_sequence_state);
                if ((0x00000100U == __VlefCall_8__get_sequence_state)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 2U, "SEQFINERR"s, __VlefCall_9__uvm_report_enabled);
                    if ((0U != __VlefCall_9__uvm_report_enabled)) {
                        VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1236)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_10__get_full_name);
                        VL_NULL_CHECK(this->__PVT__lock_list.at(i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1236)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_11__get_full_name);
                        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQFINERR"s, VL_SFORMATF_N_NX("Parent sequence '%s' should not finish before locks from itself and descedent sequences are removed.  The lock held by the child sequence '%s' is being removed.",2
                                                                                , 'S',&(__VlefCall_10__get_full_name)
                                                                                , 'S',&(__VlefCall_11__get_full_name)) , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000004d4U);
                    }
                }
                this->__PVT__lock_list.erase(i);
                {
                    // Inlined CFunc: __VnoInFunc_m_update_lists
                    this->__PVT__m_lock_arb_size = 
                        ((IData)(1U) + this->__PVT__m_lock_arb_size);
                }
            } else {
                i = ((IData)(1U) + i);
            }
        }
    } while (VL_LTS_III(32, i, this->__PVT__lock_list.size()));
    VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1248)->__VnoInFunc_m_get_sqr_sequence_id(vlSymsp, this->__PVT__m_sequencer_id, 1U, __VlefCall_12__m_get_sqr_sequence_id);
    this->__VnoInFunc_m_unregister_sequence(vlSymsp, __VlefCall_12__m_get_sqr_sequence_id);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_stop_sequences\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> seq_ptr;
    this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, seq_ptr);
    while ((VlNull{} != seq_ptr)) {
        this->__VnoInFunc_kill_sequence(vlSymsp, seq_ptr);
        this->__VnoInFunc_m_find_sequence(vlSymsp, 0xffffffffU, seq_ptr);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_sequence_exiting\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_kill_sequence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    this->__VnoInFunc_remove_sequence_from_queues(vlProcess, vlSymsp, sequence_ptr);
    VL_NULL_CHECK(sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1280)->__VnoInFunc_m_kill(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_grabbed(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_grabbed__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_is_grabbed\n"); );
    // Body
    is_grabbed__Vfuncrtn = (0U != this->__PVT__lock_list.size());
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_current_grabber(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &current_grabber__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_current_grabber\n"); );
    // Body
    {
        if ((0U == this->__PVT__lock_list.size())) {
            current_grabber__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        current_grabber__Vfuncrtn = this->__PVT__lock_list.at(
                                                              (this->__PVT__lock_list.size() 
                                                               - (IData)(1U)));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_do_available__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_has_do_available\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_1__is_blocked;
    CData/*0:0*/ __VlefCall_0__is_relevant;
    IData/*31:0*/ unnamedblk196__DOT__i;
    unnamedblk196__DOT__i = 0;
    IData/*31:0*/ unnamedblk196__DOT__i__Vloopsize;
    unnamedblk196__DOT__i__Vloopsize = 0;
    {
        has_do_available__Vfuncrtn = 0U;
        unnamedblk196__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk196__DOT__i, this->__PVT__arb_sequence_q.size())) {
            unnamedblk196__DOT__i__Vloopsize = this->__PVT__arb_sequence_q.size();
            VL_NULL_CHECK(VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk196__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1309)
                          ->__PVT__sequence_ptr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1309)->__VnoInFunc_is_relevant(vlSymsp, __VlefCall_0__is_relevant);
            if (__VlefCall_0__is_relevant) {
                this->__VnoInFunc_is_blocked(vlProcess, vlSymsp, VL_NULL_CHECK(this->__PVT__arb_sequence_q.at(unnamedblk196__DOT__i), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1310)
                                             ->__PVT__sequence_ptr, __VlefCall_1__is_blocked);
                __VlefCall_0__is_relevant = (1U & (~ (IData)(__VlefCall_1__is_blocked)));
            }
            if (__VlefCall_0__is_relevant) {
                has_do_available__Vfuncrtn = 1U;
                goto __Vlabel0;
            }
            if ((unnamedblk196__DOT__i__Vloopsize <= this->__PVT__arb_sequence_q.size())) {
                unnamedblk196__DOT__i = ((IData)(1U) 
                                         + unnamedblk196__DOT__i);
            }
        }
        has_do_available__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_arbitration(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ val) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_arbitration\n"); );
    // Body
    this->__PVT__m_arbitration = val;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &get_arbitration__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_arbitration\n"); );
    // Body
    get_arbitration__Vfuncrtn = this->__PVT__m_arbitration;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_analysis_write\n"); );
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences\n"); );
    // Locals
    IData/*31:0*/ __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba 
        = ((IData)(1U) + vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba);
    this->__VnoInFunc_wait_for_sequences____Vfork_5__0(std::make_shared<VlProcess>(vlProcess), vlSymsp);
    CData/*0:0*/ __VdynTrigger_h0a8a05aa__4;
    __VdynTrigger_h0a8a05aa__4 = 0;
    __VdynTrigger_h0a8a05aa__4 = 0U;
    __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    while ((1U & (~ (IData)(__VdynTrigger_h0a8a05aa__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                     373);
        __VdynTrigger_h0a8a05aa__4 = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
                                      != __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0);
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0a8a05aa__4);
        __Vtrigprevexpr___TOP__uvm_pkg____PVT__uvm_wait_for_nba_region__Vstatic__nba__0 
            = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba;
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@( uvm_pkg.uvm_wait_for_nba_region__Vstatic__nba)", 
                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                 373);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                            372);
    vlSymsp->TOP.__VnbaEventTrigger = 1U;
    IData/*31:0*/ __Vintraval_h62971b97__4;
    __Vintraval_h62971b97__4 = 0;
    __Vintraval_h62971b97__4 = vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba;
    this->__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __Vintraval_h62971b97__4);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ __Vintraval_h62971b97__4) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_wait_for_sequences____Vfork_5__0____Vfork_6__0\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    CData/*0:0*/ __VdynTrigger_h4e6e5c7f__4;
    __VdynTrigger_h4e6e5c7f__4 = 0;
    __VdynTrigger_h4e6e5c7f__4 = 0U;
    vlSymsp->TOP.__VnbaEvent.clearFired();
    while ((1U & (~ (IData)(__VdynTrigger_h4e6e5c7f__4)))) {
        co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                     372);
        __VdynTrigger_h4e6e5c7f__4 = vlSymsp->TOP.__VnbaEvent.isFired();
        vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h4e6e5c7f__4);
        co_await vlSymsp->TOP.__VdynSched.postUpdate(
                                                     vlProcess, 
                                                     "@([event] __VnbaEvent)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                     372);
        vlSymsp->TOP.__VnbaEvent.clearFired();
    }
    co_await vlSymsp->TOP.__VdynSched.resumption(vlProcess, 
                                                 "@([event] __VnbaEvent)", 
                                                 "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 
                                                 372);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_wait_for_nba_region__Vstatic__nba 
        = __Vintraval_h62971b97__4;
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> sequence_ptr, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item> t, CData/*0:0*/ rerandomize) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_send_request\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> __Vfunc_get__167__value;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> __Vfunc_get__169__value;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_20__get_name;
    std::string __VlefCall_19__get_type_name;
    IData/*31:0*/ __VlefCall_18__uvm_report_enabled;
    CData/*0:0*/ __VlefLogAnd_17;
    IData/*31:0*/ __VlefCond_16;
    IData/*31:0*/ __VlefCall_15__randomize;
    std::string __VlefCall_14__get_name;
    std::string __VlefCall_13__get_type_name;
    IData/*31:0*/ __VlefCall_12__uvm_report_enabled;
    std::string __VlefCall_11__get_name;
    IData/*31:0*/ __VlefCall_10__uvm_report_enabled;
    std::string __VlefCall_9__get_name;
    IData/*31:0*/ __VlefCall_8__uvm_report_enabled;
    IData/*31:0*/ __VlefExpr_7;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_6__create_object_by_type;
    std::string __VlefCall_5__get_type_name;
    std::string __VlefCall_4__get_full_name;
    CData/*0:0*/ __VlefCall_3__get;
    std::string __VlefCall_2__get_name;
    CData/*0:0*/ __VlefCall_1__get;
    std::string __VlefCall_0__get_name;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39> __VDynScope_start_phase_sequence_7;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> wrapper;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> f;
    __VDynScope_start_phase_sequence_7 = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39, vlSymsp);
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, f);
        VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1371)->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
        __Vfunc_get__167__value = VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1371)
            ->__PVT__seq;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz27__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(__VlefCall_0__get_name, "_phase"s)), "default_sequence"s, __Vfunc_get__167__value, __VlefCall_1__get);
        VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1371)->__PVT__seq 
            = __Vfunc_get__167__value;
        if (((1U & (~ (IData)(__VlefCall_1__get))) 
             || (VlNull{} == VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1371)
                 ->__PVT__seq))) {
            VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1374)->__VnoInFunc_get_name(vlSymsp, __VlefCall_2__get_name);
            __Vfunc_get__169__value = wrapper;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz28__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(__VlefCall_2__get_name, "_phase"s)), "default_sequence"s, __Vfunc_get__169__value, __VlefCall_3__get);
            wrapper = __Vfunc_get__169__value;
            if (((IData)(__VlefCall_3__get) && (VlNull{} 
                                                != wrapper))) {
                this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
                VL_NULL_CHECK(wrapper, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1377)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_5__get_type_name);
                VL_NULL_CHECK(f, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1376)->__VnoInFunc_create_object_by_type(vlProcess, vlSymsp, wrapper, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_4__get_full_name), 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__get_type_name), __VlefCall_6__create_object_by_type);
                __VlefExpr_7 = VL_CAST_DYNAMIC(__VlefCall_6__create_object_by_type, VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1376)
                                               ->__PVT__seq);
                if ((! __VlefExpr_7)) {
                    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "PHASESEQ"s, __VlefCall_8__uvm_report_enabled);
                    if ((0U != __VlefCall_8__uvm_report_enabled)) {
                        VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1379)->__VnoInFunc_get_name(vlSymsp, __VlefCall_9__get_name);
                        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                             VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Default sequence for phase '"s, __VlefCall_9__get_name), "' %s is not a sequence type"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x00000563U);
                    }
                    goto __Vlabel0;
                }
            } else {
                this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_10__uvm_report_enabled);
                if ((0U != __VlefCall_10__uvm_report_enabled)) {
                    VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1385)->__VnoInFunc_get_name(vlSymsp, __VlefCall_11__get_name);
                    this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                                      VL_CVT_PACK_STR_NN(
                                                                         VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("No default phase sequence for phase '"s, __VlefCall_11__get_name), "'"s)), 0x00000190U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x00000569U);
                }
                goto __Vlabel0;
            }
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x00000190U, 0U, "PHASESEQ"s, __VlefCall_12__uvm_report_enabled);
        if ((0U != __VlefCall_12__uvm_report_enabled)) {
            VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1391)
                          ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1391)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_13__get_type_name);
            VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1391)->__VnoInFunc_get_name(vlSymsp, __VlefCall_14__get_name);
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "PHASESEQ"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Starting default sequence '"s, __VlefCall_13__get_type_name), "' for phase '"s), __VlefCall_14__get_name), "'"s)), 0x00000190U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x0000056fU);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1393)
                      ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1393)->__PVT__print_sequence_info = 1U;
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1394)
                      ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1394)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this});
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1395)
                      ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1395)->__VnoInFunc_reseed(vlProcess, vlSymsp);
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1396)
                      ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1396)->__PVT__starting_phase 
            = phase;
        __VlefLogAnd_17 = (1U & (~ VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1398)
                                                 ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1398)
                                 ->__PVT__do_not_randomize));
        if (__VlefLogAnd_17) {
            if ((VlNull{} != VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1398)
                 ->__PVT__seq)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1398)
                              ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1398)->__VnoInFunc_randomize(vlSymsp, __VlefCall_15__randomize);
                __VlefCond_16 = __VlefCall_15__randomize;
            } else {
                __VlefCond_16 = 0U;
            }
            __VlefLogAnd_17 = (1U & (~ (0U != __VlefCond_16)));
        }
        if (__VlefLogAnd_17) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "STRDEFSEQ"s, __VlefCall_18__uvm_report_enabled);
            if ((0U != __VlefCall_18__uvm_report_enabled)) {
                VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1400)
                              ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1400)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_19__get_type_name);
                VL_NULL_CHECK(phase, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1400)->__VnoInFunc_get_name(vlSymsp, __VlefCall_20__get_name);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "STRDEFSEQ"s, 
                                                     VL_CVT_PACK_STR_NN(
                                                                        VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Randomization failed for default sequence '"s, __VlefCall_19__get_type_name), "' for phase '"s), __VlefCall_20__get_name), "'"s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x00000578U);
            }
            goto __Vlabel0;
        }
        this->__VnoInFunc_start_phase_sequence____Vfork_7__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_start_phase_sequence_7);
        __Vlabel0: ;
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_7__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39> __VDynScope_start_phase_sequence_7) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_phase_sequence____Vfork_7__0\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_39> __Vtask___VforkTask_3__190____VDynScope_start_phase_sequence_7;
    IData/*31:0*/ __Vtask___VforkTask_3__190____VlefCall_2__uvm_create_random_seed;
    __Vtask___VforkTask_3__190____VlefCall_2__uvm_create_random_seed = 0;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __Vtask___VforkTask_3__190__proc;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __Vfunc_self__191__Vfuncout;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__194__Vfuncout;
    __Vfunc_uvm_create_random_seed__194__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_create_random_seed__194____VlefCall_2__uvm_oneway_hash;
    __Vfunc_uvm_create_random_seed__194____VlefCall_2__uvm_oneway_hash = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map> __Vfunc_uvm_create_random_seed__194____VlefCall_0__new;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__197__Vfuncout;
    __Vfunc_uvm_oneway_hash__197__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__197__seed;
    __Vfunc_uvm_oneway_hash__197__seed = 0;
    IData/*31:0*/ __Vfunc_uvm_oneway_hash__197__unnamedblk1__DOT___byte;
    __Vfunc_uvm_oneway_hash__197__unnamedblk1__DOT___byte = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_3__190____VDynScope_start_phase_sequence_7 
        = __VDynScope_start_phase_sequence_7;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 
                                            1404);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__191__Vfuncout);
    __Vtask___VforkTask_3__190__proc = __Vfunc_self__191__Vfuncout;
    VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__190____VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1407)
                  ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1407)->__VnoInFunc_get_type_name(vlSymsp, this->__Vtask_get_type_name__192__Vfuncout);
    this->__Vtask___VforkTask_3__190____VlefCall_0__get_type_name 
        = this->__Vtask_get_type_name__192__Vfuncout;
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, this->__Vfunc_get_full_name__193__Vfuncout);
    this->__Vtask___VforkTask_3__190____VlefCall_1__get_full_name 
        = this->__Vfunc_get_full_name__193__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__194__inst_id 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_3__190____VlefCall_1__get_full_name);
    this->__Vfunc_uvm_create_random_seed__194__type_id 
        = VL_CVT_PACK_STR_NN(this->__Vtask___VforkTask_3__190____VlefCall_0__get_type_name);
    if ((""s == this->__Vfunc_uvm_create_random_seed__194__inst_id)) {
        this->__Vfunc_uvm_create_random_seed__194__inst_id = "__global__"s;
    }
    if ((! vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.exists(this->__Vfunc_uvm_create_random_seed__194__inst_id))) {
        __Vfunc_uvm_create_random_seed__194____VlefCall_0__new 
            = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_seed_map, vlSymsp);
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup.atWrite(this->__Vfunc_uvm_create_random_seed__194__inst_id) 
            = __Vfunc_uvm_create_random_seed__194____VlefCall_0__new;
    }
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map 
        = vlSymsp->TOP__uvm_pkg.__PVT__uvm_random_seed_table_lookup
        .at(this->__Vfunc_uvm_create_random_seed__194__inst_id);
    vlSymsp->TOP__uvm_pkg.__VnoInFunc_uvm_instance_scope_TOP__uvm_pkg(vlProcess, vlSymsp, this->__Vfunc_uvm_instance_scope__196__Vfuncout);
    this->__Vfunc_uvm_create_random_seed__194____VlefCall_1__uvm_instance_scope 
        = this->__Vfunc_uvm_instance_scope__196__Vfuncout;
    this->__Vfunc_uvm_create_random_seed__194__type_id 
        = VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__194____VlefCall_1__uvm_instance_scope, this->__Vfunc_uvm_create_random_seed__194__type_id);
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 434)
         ->__PVT__seed_table.exists(this->__Vfunc_uvm_create_random_seed__194__type_id))) {
        __Vfunc_uvm_oneway_hash__197__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        this->__Vfunc_uvm_oneway_hash__197__string_in 
            = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(VL_CONCATN_NNN(this->__Vfunc_uvm_create_random_seed__194__type_id, "::"s), this->__Vfunc_uvm_create_random_seed__194__inst_id));
        if ((1U & (~ (0U != __Vfunc_uvm_oneway_hash__197__seed)))) {
            __Vfunc_uvm_oneway_hash__197__seed = vlSymsp->TOP__uvm_pkg.__PVT__uvm_global_random_seed;
        }
        __Vfunc_uvm_oneway_hash__197__Vfuncout = __Vfunc_uvm_oneway_hash__197__seed;
        vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0xffffffffU;
        __Vfunc_uvm_oneway_hash__197__unnamedblk1__DOT___byte = 0U;
        __Vfunc_uvm_oneway_hash__197__unnamedblk1__DOT___byte = 0U;
        {
            while (VL_LTS_III(32, __Vfunc_uvm_oneway_hash__197__unnamedblk1__DOT___byte, 
                              VL_LEN_IN(this->__Vfunc_uvm_oneway_hash__197__string_in))) {
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte 
                    = VL_GETC_N(this->__Vfunc_uvm_oneway_hash__197__string_in,__Vfunc_uvm_oneway_hash__197__unnamedblk1__DOT___byte);
                if ((0U == (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte))) {
                    goto __Vlabel0;
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ (IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 1U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 2U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 3U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 4U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 5U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if ((1U & ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                           ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                              >> 6U)))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       >> 0x1fU);
                vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                    = (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                       << 1U);
                if (((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__msb) 
                     ^ ((IData)(vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__current_byte) 
                        >> 7U))) {
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (0x04c11db6U ^ vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                    vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                        = (1U | vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1);
                }
                __Vfunc_uvm_oneway_hash__197__unnamedblk1__DOT___byte 
                    = ((IData)(1U) + __Vfunc_uvm_oneway_hash__197__unnamedblk1__DOT___byte);
            }
            __Vlabel0: ;
        }
        __Vfunc_uvm_oneway_hash__197__Vfuncout = (__Vfunc_uvm_oneway_hash__197__Vfuncout 
                                                  + 
                                                  (~ 
                                                   ((((0x0000ff00U 
                                                       & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          << 8U)) 
                                                      | (0x000000ffU 
                                                         & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                            >> 8U))) 
                                                     << 0x00000010U) 
                                                    | ((0x0000ff00U 
                                                        & (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                           >> 8U)) 
                                                       | (vlSymsp->TOP__uvm_pkg.__PVT__uvm_oneway_hash__Vstatic__crc1 
                                                          >> 0x18U)))));
        __Vfunc_uvm_create_random_seed__194____VlefCall_2__uvm_oneway_hash 
            = __Vfunc_uvm_oneway_hash__197__Vfuncout;
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 435)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__194__type_id) 
            = __Vfunc_uvm_create_random_seed__194____VlefCall_2__uvm_oneway_hash;
    }
    if ((! VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 437)
         ->__PVT__count.exists(this->__Vfunc_uvm_create_random_seed__194__type_id))) {
        VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 438)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__194__type_id) = 0U;
    }
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)->__PVT__seed_table.atWrite(this->__Vfunc_uvm_create_random_seed__194__type_id) 
        = (VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)
           ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__194__type_id) 
           + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 444)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__194__type_id));
    VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 445)->__PVT__count.atWrite(this->__Vfunc_uvm_create_random_seed__194__type_id) 
        = ((IData)(1U) + VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 445)
           ->__PVT__count.at(this->__Vfunc_uvm_create_random_seed__194__type_id));
    __Vfunc_uvm_create_random_seed__194__Vfuncout = VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_create_random_seed__Vstatic__seed_map, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 447)
        ->__PVT__seed_table.at(this->__Vfunc_uvm_create_random_seed__194__type_id);
    __Vtask___VforkTask_3__190____VlefCall_2__uvm_create_random_seed 
        = __Vfunc_uvm_create_random_seed__194__Vfuncout;
    VL_NULL_CHECK(__Vtask___VforkTask_3__190__proc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1407)->__VnoInFunc_srandom(vlSymsp, __Vtask___VforkTask_3__190____VlefCall_2__uvm_create_random_seed);
    co_await VL_NULL_CHECK(VL_NULL_CHECK(__Vtask___VforkTask_3__190____VDynScope_start_phase_sequence_7, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1408)
                           ->__PVT__seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1408)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, VlNull{}, 0xffffffffU, 1U);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_add_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_add_sequence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, 
                                             VL_CVT_PACK_STR_NN(
                                                                VL_CONCATN_NNN(
                                                                               VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Registering sequence '"s, type_name), "' with sequencer '"s), __VlefCall_1__get_full_name), "' is deprecated. "s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x0000059cU);
    }
    if ((! this->__PVT__sequence_ids.exists(type_name))) {
        this->__PVT__sequence_ids.atWrite(type_name) 
            = this->__PVT__sequences.size();
        this->__PVT__sequences.push_back(type_name);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_remove_sequence\n"); );
    // Body
    IData/*31:0*/ unnamedblk198__DOT__i;
    this->__PVT__sequence_ids.erase(type_name);
    unnamedblk198__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk198__DOT__i, this->__PVT__sequences.size())) {
        if ((this->__PVT__sequences.at(unnamedblk198__DOT__i) 
             == type_name)) {
            this->__PVT__sequences.erase(unnamedblk198__DOT__i);
        }
        unnamedblk198__DOT__i = ((IData)(1U) + unnamedblk198__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_sequences_queue(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &sequencer_sequence_lib) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_set_sequences_queue\n"); );
    // Body
    IData/*31:0*/ unnamedblk199__DOT__j;
    unnamedblk199__DOT__j = 0U;
    while (VL_LTS_III(32, unnamedblk199__DOT__j, sequencer_sequence_lib.size())) {
        this->__PVT__sequence_ids.atWrite(sequencer_sequence_lib.at(unnamedblk199__DOT__j)) 
            = this->__PVT__sequences.size();
        this->__PVT__sequences.push_back(sequencer_sequence_lib.at(unnamedblk199__DOT__j));
        unnamedblk199__DOT__j = ((IData)(1U) + unnamedblk199__DOT__j);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_default_sequence(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_start_default_sequence\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCond_9;
    IData/*31:0*/ __VlefCall_8__randomize;
    IData/*31:0*/ __VlefExpr_7;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_6__create_object_by_name;
    std::string __VlefCall_5__get_full_name;
    std::string __VlefCall_4__get_full_name;
    IData/*31:0*/ __VlefCall_3__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_2__uvm_report_enabled;
    CData/*0:0*/ __VlefCall_1__exists;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    {
        if ((((""s == this->__PVT__default_sequence) 
              | (0U == this->__PVT__count)) | ((0U 
                                                == this->__PVT__sequences.size()) 
                                               & ("uvm_random_sequence"s 
                                                  == this->__PVT__default_sequence)))) {
            goto __Vlabel0;
        }
        if (((~ (IData)(this->__PVT__m_default_seq_set)) 
             & (VlNull{} != Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__PVT__m_domain))) {
            this->__PVT__default_sequence = ""s;
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0x0000012cU, 0U, "NODEFSEQ"s, __VlefCall_0__uvm_report_enabled);
            if ((0U != __VlefCall_0__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NODEFSEQ"s, "The \"default_sequence\" has not been set. Since this sequencer has a runtime phase schedule, the uvm_random_sequence is not being started for the run phase."s, 0x0000012cU, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000005d5U);
            }
            goto __Vlabel0;
        }
        __VlefCall_1__exists = this->__PVT__m_default_seq_set;
        if (__VlefCall_1__exists) {
            vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz27__Vclpkg.__VnoInFunc_exists(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, "run_phase"s, "default_sequence"s, 0U, __VlefCall_1__exists);
            if ((1U & (~ (IData)(__VlefCall_1__exists)))) {
                vlSymsp->TOP__uvm_pkg__03a__03auvm_config_db__Tz28__Vclpkg.__VnoInFunc_exists(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, "run_phase"s, "default_sequence"s, 0U, __VlefCall_1__exists);
            }
        }
        if (__VlefCall_1__exists) {
            this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "MULDEFSEQ"s, __VlefCall_2__uvm_report_enabled);
            if ((0U != __VlefCall_2__uvm_report_enabled)) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULDEFSEQ"s, "A default phase sequence has been set via the \"<phase_name>.default_sequence\" configuration option.The deprecated \"default_sequence\" configuration option is ignored."s, 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000005e0U);
            }
            goto __Vlabel0;
        }
        if ((((2U == this->__PVT__sequences.size()) 
              & ("uvm_random_sequence"s == this->__PVT__sequences.at(0U))) 
             & ("uvm_exhaustive_sequence"s == this->__PVT__sequences.at(1U)))) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "NOUSERSEQ"s, "No user sequence available. Not starting the (deprecated) default sequence."s, 0x0000012cU, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_3__uvm_report_enabled);
        if ((0U != __VlefCall_3__uvm_report_enabled)) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_4__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Starting (deprecated) default sequence '"s, this->__PVT__default_sequence), "' on sequencer '"s), __VlefCall_4__get_full_name), "'. See documentation for uvm_sequencer_base::start_phase_sequence() for information on "s), "starting default sequences in UVM."s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x000005f0U);
        }
        if ((0U != this->__PVT__sequences.size())) {
            this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_5__get_full_name);
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1524)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, this->__PVT__default_sequence, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_5__get_full_name), this->__PVT__default_sequence, __VlefCall_6__create_object_by_name);
            __VlefExpr_7 = VL_CAST_DYNAMIC(__VlefCall_6__create_object_by_name, m_seq);
            if ((! __VlefExpr_7)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN("Default sequence set to invalid value : "s, this->__PVT__default_sequence)), 0U, ""s, 0U);
            }
            if ((VlNull{} == m_seq)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "STRDEFSEQ"s, "Null m_sequencer reference"s, 0U, ""s, 0U);
            }
            VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1534)->__PVT__starting_phase 
                = vlSymsp->TOP__uvm_pkg.__PVT__run_ph;
            VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1535)->__PVT__print_sequence_info = 1U;
            VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1536)->__VnoInFunc_set_parent_sequence(vlSymsp, VlNull{});
            VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1537)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this});
            VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1538)->__VnoInFunc_reseed(vlProcess, vlSymsp);
            if ((VlNull{} != m_seq)) {
                VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1539)->__VnoInFunc_randomize(vlSymsp, __VlefCall_8__randomize);
                __VlefCond_9 = __VlefCall_8__randomize;
            } else {
                __VlefCond_9 = 0U;
            }
            if ((1U & (~ (0U != __VlefCond_9)))) {
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "STRDEFSEQ"s, "Failed to randomize sequence"s, 0x000000c8U, ""s, 0U);
            }
            co_await VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1542)->__VnoInFunc_start(vlProcess, vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this}, VlNull{}, 0xffffffffU, 1U);
        }
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_seq_kind(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string type_name, IData/*31:0*/ &get_seq_kind__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_seq_kind\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__uvm_report_enabled;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    {
        get_seq_kind__Vfuncrtn = 0U;
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m is deprecated",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequencer_base.get_seq_kind") , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x00000613U);
        }
        if (this->__PVT__sequence_ids.exists(type_name)) {
            get_seq_kind__Vfuncrtn = this->__PVT__sequence_ids
                .at(type_name);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "SEQNF"s, __VlefCall_1__uvm_report_enabled);
        if ((0U != __VlefCall_1__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "SEQNF"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Sequence type_name '"s, type_name), "' not registered with this sequencer."s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x00000619U);
        }
        get_seq_kind__Vfuncrtn = 0xffffffffU;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_sequence(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ req_kind, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> &get_sequence__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_get_sequence\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_3;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> __VlefCall_2__create_object_by_name;
    std::string __VlefCall_1__get_full_name;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> factory;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_base> m_seq;
    std::string m_seq_type;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, factory);
    m_seq_type = ""s;
    this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 1U, "UVM_DEPRECATED"s, __VlefCall_0__uvm_report_enabled);
    if ((0U != __VlefCall_0__uvm_report_enabled)) {
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "UVM_DEPRECATED"s, VL_SFORMATF_N_NX("%m is deprecated",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_sequencer_base.get_sequence") , 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh"s, 0x0000062aU);
    }
    if ((VL_GTS_III(32, 0U, req_kind) | VL_GTES_III(32, req_kind, this->__PVT__sequences.size()))) {
        this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "SEQRNG"s, VL_SFORMATF_N_NX("Kind arg '%0d' out of range. Need 0-%0d",2
                                                                                , '~',32,req_kind
                                                                                , '~',32,
                                                                                (this->__PVT__sequences.size() 
                                                                                - (IData)(1U))) , 0x00000064U, ""s, 0U);
    }
    m_seq_type = this->__PVT__sequences.at(req_kind);
    this->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_1__get_full_name);
    VL_NULL_CHECK(factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1587)->__VnoInFunc_create_object_by_name(vlProcess, vlSymsp, m_seq_type, 
                                                                                VL_CVT_PACK_STR_NN(__VlefCall_1__get_full_name), m_seq_type, __VlefCall_2__create_object_by_name);
    __VlefExpr_3 = VL_CAST_DYNAMIC(__VlefCall_2__create_object_by_name, m_seq);
    if ((! __VlefExpr_3)) {
        this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "FCTSEQ"s, VL_SFORMATF_N_NX("Factory can not produce a sequence of type %0s.",1
                                                                                , 'S',&(m_seq_type)) , 0U, ""s, 0U);
    }
    VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1596)->__PVT__print_sequence_info = 1U;
    VL_NULL_CHECK(m_seq, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/seq/uvm_sequencer_base.svh", 1597)->__VnoInFunc_set_sequencer(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base>{this});
    get_sequence__Vfuncrtn = m_seq;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_num_sequences(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num_sequences__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_num_sequences\n"); );
    // Body
    num_sequences__Vfuncrtn = this->__PVT__sequences.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_add_builtin_seqs(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ add_simple) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_m_add_builtin_seqs\n"); );
    // Body
    if ((! this->__PVT__sequence_ids.exists("uvm_random_sequence"s))) {
        this->__VnoInFunc_add_sequence(vlSymsp, "uvm_random_sequence"s);
    }
    if ((! this->__PVT__sequence_ids.exists("uvm_exhaustive_sequence"s))) {
        this->__VnoInFunc_add_sequence(vlSymsp, "uvm_exhaustive_sequence"s);
    }
    if (add_simple) {
        if ((! this->__PVT__sequence_ids.exists("uvm_simple_sequence"s))) {
            this->__VnoInFunc_add_sequence(vlSymsp, "uvm_simple_sequence"s);
        }
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    co_await Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_run_phase(vlProcess, vlSymsp, phase);
    co_await this->__VnoInFunc_start_default_sequence(vlProcess, vlSymsp);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
    this->__PVT__seq_kind = VL_RANDOM_RNG_I(__Vm_rng);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__arb_completed.atDefault() = 0;
    __PVT__m_sequencer_id = 0;
    __PVT__m_lock_arb_size = 0;
    __PVT__m_arb_size = 0;
    __PVT__m_wait_for_item_sequence_id = 0;
    __PVT__m_wait_for_item_transaction_id = 0;
    __PVT__m_is_relevant_completed = 0;
    __PVT__m_random_count = 0;
    __PVT__m_exhaustive_count = 0;
    __PVT__m_simple_count = 0;
    __PVT__m_default_seq_set = 0;
    __PVT__sequence_ids.atDefault() = 0;
    __PVT__seq_kind = 0;
    __Vtask___VforkTask_2__75__is_relevant_entries.atDefault() = 0;
    __Vtask___VforkTask_1__76__is_relevant_entries.atDefault() = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequencer_base::~\n"); );
}
