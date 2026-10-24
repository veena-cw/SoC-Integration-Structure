// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg___eval_static__TOP__uvm_pkg(Vcsi2_tb_top_uvm_pkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg___eval_static__TOP__uvm_pkg\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer> __PVT__uvm_default_table_printer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer> __PVT__uvm_default_tree_printer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_line_printer> __PVT__uvm_default_line_printer;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> __Vfunc_get__8__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_pool> __Vfunc_get__9__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__10__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__11__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection> __Vfunc_get__12__Vfuncout;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> __Vfunc_get_inst__15__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    __PVT__uvm_default_table_printer = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_table_printer, vlSymsp);
    __PVT__uvm_default_tree_printer = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_tree_printer, vlSymsp);
    __PVT__uvm_default_line_printer = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_line_printer, vlSymsp);
    vlSelfRef.__PVT__uvm_default_printer = __PVT__uvm_default_table_printer;
    vlSelfRef.__PVT__uvm_default_packer = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_packer, vlSymsp);
    vlSelfRef.__PVT__uvm_default_comparer = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_comparer, vlSymsp);
    vlSelfRef.__PVT__uvm_default_recorder = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_recorder, vlProcess, vlSymsp, "uvm_recorder"s);
    vlSelfRef.__PVT__uvm_global_random_seed = VL_RANDOM_I();
    vlSelfRef.__PVT__uvm_instance_scope__Vstatic__c = 0U;
    vlSelfRef.__PVT__uvm_instance_scope__Vstatic__pos = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__msb = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__current_byte = 0U;
    vlSelfRef.__PVT__uvm_oneway_hash__Vstatic__crc1 = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__bracket_match = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__pos = 0U;
    vlSelfRef.__PVT__uvm_leaf_scope__Vstatic__bmatches = 0U;
    vlSelfRef.__PVT__uvm_get_array_index_int__Vstatic__i = 0U;
    vlSelfRef.__PVT__uvm_global_copy_map = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_copy_map, vlSymsp);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__8__Vfuncout);
    vlSelfRef.__PVT__factory = __Vfunc_get__8__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_pool__Vclpkg.__VnoInFunc_get(vlSymsp, __Vfunc_get__9__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__10__Vfuncout);
    vlSelfRef.__PVT__uvm_top = __Vfunc_get__10__Vfuncout;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__11__Vfuncout);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_test_done_objection__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__12__Vfuncout);
    vlSelfRef.__PVT__uvm_is_match__Vstatic__s = ""s;
    vlSelfRef.__PVT__uvm_wait_for_nba_region__Vstatic__nba = 0U;
    vlSelfRef.__PVT__uvm_wait_for_nba_region__Vstatic__next_nba = 0U;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, __Vfunc_get_inst__15__Vfuncout);
    vlSelfRef.__PVT__uvm_cmdline_proc = __Vfunc_get_inst__15__Vfuncout;
}

VL_ATTR_COLD void Vcsi2_tb_top_uvm_pkg___ctor_var_reset(Vcsi2_tb_top_uvm_pkg* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg___ctor_var_reset\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    VL_SCOPED_RAND_RESET_W(1024, vlSelf->__PVT__uvm_hdl_force_time__Vstatic__value, __VscopeHash, 2883201539929695405ull);
    vlSelf->__PVT__uvm_hdl_force_time__Vstatic__force_time = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 8297612781380357509ull);
}
