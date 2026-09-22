// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_int_unbox__Bz1.h"
#include "Vtestbench_bp_core_tile_node__Bz1.h"

void Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ cosim_handle, IData/*31:0*/ hartid, QData/*63:0*/ pc, IData/*31:0*/ insn, QData/*63:0*/ wdata, QData/*63:0*/ status, IData/*31:0*/ &cosim_step__Vfuncrtn);
void Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ cosim_handle, IData/*31:0*/ hartid, QData/*63:0*/ cause, IData/*31:0*/ &cosim_trap__Vfuncrtn);

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__8(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__8\n"); );
    // Init
    IData/*31:0*/ __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step__2__Vfuncout;
    __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap__3__Vfuncout;
    __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap__3__Vfuncout = 0;
    VlWide<3>/*95:0*/ __Vtemp_h0eb64d5b__0;
    VlWide<3>/*95:0*/ __Vtemp_h61e32d40__0;
    VlWide<3>/*95:0*/ __Vtemp_h0eb64d5b__1;
    VlWide<3>/*95:0*/ __Vtemp_ha5b442ed__0;
    VlWide<3>/*95:0*/ __Vtemp_h0eb64d5b__2;
    VlWide<3>/*95:0*/ __Vtemp_h77ed5025__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                     & (0U != (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                               >> 1U))))) {
        VL_WRITEF("[BSG-FAIL] co-simulation failure: exit code: %11d\n",
                  32,(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                      >> 1U));
        Verilated::runFlushCallbacks();
        VL_FINISH_MT("/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 195, "");
    } else if (VL_UNLIKELY((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                                  & (~ (IData)((0U 
                                                != 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                                                 >> 1U)))))))) {
        VL_WRITEF("[BSG-FINISH] co-simulation finish: exit code: %11d\n",
                  32,(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                      >> 1U));
        Verilated::runFlushCallbacks();
    }
    if ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__state_r))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                         & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U] 
                             >> 0x13U) | (IData)((0U 
                                                  != 
                                                  (0x30000U 
                                                   & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0U]))))))) {
            VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"%x %x %x (0x%x) ",
                       1,(1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li)),
                       2,(3U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xaU] 
                                >> 4U)),64,VL_EXTENDS_QQ(64,39, 
                                                         (0x7fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U])) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[5U])) 
                                                                >> 7U)))),
                       32,((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[2U] 
                            << 7U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[1U] 
                                      >> 0x19U)));
            if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
            if (VL_UNLIKELY((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                              & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U] 
                                 >> 0x13U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)))) {
                __Vtemp_h0eb64d5b__0[1U] = (IData)(
                                                   ((((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(1U) 
                                                                               + 
                                                                               ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                                >> 0x14U) 
                                                                                - (IData)(0x402U)))) 
                                                                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                                | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                                 ? 0x7ffU
                                                                                 : 0U))))) 
                                                         << 0x34U) 
                                                        | (0xfffffffffffffULL 
                                                           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                               ? 
                                                              ((0x3fffffffffffffULL 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                                   >> 1U)) 
                                                               >> 
                                                               (0x3fU 
                                                                & ((IData)(1U) 
                                                                   - 
                                                                   ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                     << 0xcU) 
                                                                    | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                       >> 0x14U)))))
                                                               : 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                                ? 0ULL
                                                                : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig))))) 
                                                    >> 0x20U));
                __Vtemp_h61e32d40__0[0U] = ((2U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                             ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U] 
                                                 << 0x1fU) 
                                                | ((0x7f800000U 
                                                    & ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp) 
                                                           - (IData)(0x82U)))) 
                                                        | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf) 
                                                            | (IData)(
                                                                      (0x1c0U 
                                                                       == 
                                                                       (0x1c0U 
                                                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp)))))
                                                            ? 0xffU
                                                            : 0U)) 
                                                       << 0x17U)) 
                                                   | (0x7fffffU 
                                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                          ? 
                                                         ((vlSelf->__VdfgTmp_h51686f97__0 
                                                           >> 1U) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp))))
                                                          : 
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf)
                                                           ? 0U
                                                           : vlSelf->__VdfgTmp_h51686f97__0)))))
                                             : (IData)(
                                                       (((QData)((IData)(
                                                                         (1U 
                                                                          & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                         << 0x3fU) 
                                                        | (((QData)((IData)(
                                                                            (0x7ffU 
                                                                             & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                                >> 0x14U) 
                                                                                - (IData)(0x402U)))) 
                                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                                | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                                 ? 0x7ffU
                                                                                 : 0U))))) 
                                                            << 0x34U) 
                                                           | (0xfffffffffffffULL 
                                                              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                  ? 
                                                                 ((0x3fffffffffffffULL 
                                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                                      >> 1U)) 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(1U) 
                                                                      - 
                                                                      ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                          >> 0x14U)))))
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                                   ? 0ULL
                                                                   : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig)))))));
                VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"x%x %x",
                           5,(0x1fU & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[9U] 
                                        << 3U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[8U] 
                                                  >> 0x1dU))),
                           64,(((QData)((IData)(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                  ? 
                                                 ((0U 
                                                   >= 
                                                   (3U 
                                                    & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                              >> 0x20U))
                                                   : (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                              >> 0x20U)))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                                   ? 0xffffffffU
                                                   : 
                                                  __Vtemp_h0eb64d5b__0[1U])))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                              ? 
                                                             ((0U 
                                                               >= 
                                                               (3U 
                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                               ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw)
                                                               : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw))
                                                              : 
                                                             __Vtemp_h61e32d40__0[0U])))));
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
            }
            if (VL_UNLIKELY((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                              & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U] 
                                 >> 0x13U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_frd_pending)))) {
                __Vtemp_h0eb64d5b__1[1U] = (IData)(
                                                   ((((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(1U) 
                                                                               + 
                                                                               ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                                >> 0x14U) 
                                                                                - (IData)(0x402U)))) 
                                                                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                                | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                                 ? 0x7ffU
                                                                                 : 0U))))) 
                                                         << 0x34U) 
                                                        | (0xfffffffffffffULL 
                                                           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                               ? 
                                                              ((0x3fffffffffffffULL 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                                   >> 1U)) 
                                                               >> 
                                                               (0x3fU 
                                                                & ((IData)(1U) 
                                                                   - 
                                                                   ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                     << 0xcU) 
                                                                    | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                       >> 0x14U)))))
                                                               : 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                                ? 0ULL
                                                                : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig))))) 
                                                    >> 0x20U));
                __Vtemp_ha5b442ed__0[0U] = ((2U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                             ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U] 
                                                 << 0x1fU) 
                                                | ((0x7f800000U 
                                                    & ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp) 
                                                           - (IData)(0x82U)))) 
                                                        | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf) 
                                                            | (IData)(
                                                                      (0x1c0U 
                                                                       == 
                                                                       (0x1c0U 
                                                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp)))))
                                                            ? 0xffU
                                                            : 0U)) 
                                                       << 0x17U)) 
                                                   | (0x7fffffU 
                                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                          ? 
                                                         ((vlSelf->__VdfgTmp_h51686f97__0 
                                                           >> 1U) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp))))
                                                          : 
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf)
                                                           ? 0U
                                                           : vlSelf->__VdfgTmp_h51686f97__0)))))
                                             : (IData)(
                                                       (((QData)((IData)(
                                                                         (1U 
                                                                          & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                         << 0x3fU) 
                                                        | (((QData)((IData)(
                                                                            (0x7ffU 
                                                                             & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                                >> 0x14U) 
                                                                                - (IData)(0x402U)))) 
                                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                                | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                                 ? 0x7ffU
                                                                                 : 0U))))) 
                                                            << 0x34U) 
                                                           | (0xfffffffffffffULL 
                                                              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                  ? 
                                                                 ((0x3fffffffffffffULL 
                                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                                      >> 1U)) 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(1U) 
                                                                      - 
                                                                      ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                          >> 0x14U)))))
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                                   ? 0ULL
                                                                   : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig)))))));
                VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"f%x %x",
                           5,(0x1fU & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[9U] 
                                        << 3U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[8U] 
                                                  >> 0x1dU))),
                           64,(((QData)((IData)(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                  ? 
                                                 ((0U 
                                                   >= 
                                                   (3U 
                                                    & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                              >> 0x20U))
                                                   : (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                              >> 0x20U)))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                                   ? 0xffffffffU
                                                   : 
                                                  __Vtemp_h0eb64d5b__1[1U])))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                              ? 
                                                             ((0U 
                                                               >= 
                                                               (3U 
                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                               ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw)
                                                               : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw))
                                                              : 
                                                             __Vtemp_ha5b442ed__0[0U])))));
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
            }
            if (VL_UNLIKELY(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                             & (IData)((0U != (0x30000U 
                                               & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0U])))))) {
                VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"exception (%x) -> 0x%x",
                           64,(((QData)((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xeU])) 
                                << 0x2dU) | (((QData)((IData)(
                                                              vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xdU])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xcU])) 
                                                >> 0x13U))),
                           39,(0x7fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[4U])))));
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
            }
            VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"\n");
            if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
        }
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__tb_reset) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_r = 0U;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_p1_r 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_p1_n;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_r 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_n;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (7U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_gray_n) 
                     >> 8U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_gray_n));
    }
    if (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
         & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U] 
            >> 0x13U))) {
        __Vtemp_h0eb64d5b__2[1U] = (IData)(((((QData)((IData)(
                                                              (1U 
                                                               & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                       ? 0U
                                                                       : 
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                         >> 0x14U) 
                                                                        - (IData)(0x402U)))) 
                                                                     | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                         | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                         ? 0x7ffU
                                                                         : 0U))))) 
                                                 << 0x34U) 
                                                | (0xfffffffffffffULL 
                                                   & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                       ? 
                                                      ((0x3fffffffffffffULL 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                           >> 1U)) 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(1U) 
                                                           - 
                                                           ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                             << 0xcU) 
                                                            | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                               >> 0x14U)))))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                        ? 0ULL
                                                        : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig))))) 
                                            >> 0x20U));
        __Vtemp_h77ed5025__0[0U] = ((2U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                     ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U] 
                                         << 0x1fU) 
                                        | ((0x7f800000U 
                                            & ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                  ? 0U
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp) 
                                                   - (IData)(0x82U)))) 
                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf) 
                                                    | (IData)(
                                                              (0x1c0U 
                                                               == 
                                                               (0x1c0U 
                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp)))))
                                                    ? 0xffU
                                                    : 0U)) 
                                               << 0x17U)) 
                                           | (0x7fffffU 
                                              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                  ? 
                                                 ((vlSelf->__VdfgTmp_h51686f97__0 
                                                   >> 1U) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp))))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf)
                                                   ? 0U
                                                   : vlSelf->__VdfgTmp_h51686f97__0)))))
                                     : (IData)((((QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                 << 0x3fU) 
                                                | (((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(1U) 
                                                                          + 
                                                                          ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                            >> 0x14U) 
                                                                           - (IData)(0x402U)))) 
                                                                        | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                            | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                            ? 0x7ffU
                                                                            : 0U))))) 
                                                    << 0x34U) 
                                                   | (0xfffffffffffffULL 
                                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                          ? 
                                                         ((0x3fffffffffffffULL 
                                                           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                              >> 1U)) 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              - 
                                                              ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                << 0xcU) 
                                                               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                  >> 0x14U)))))
                                                          : 
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                           ? 0ULL
                                                           : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig)))))));
        Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(
                                                                                (&(vlSymsp->__Vscope_testbench__wrapper__processor__m__multicore__cc__y__BRA__0__KET____x__BRA__0__KET____tile_node__tile__core__core_lite__core_minimal__be__cosim)), 
                                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 0xbaU, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle, 
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li)), 
                                                                                VL_EXTENDS_QQ(64,39, 
                                                                                (0x7fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U])) 
                                                                                << 0x19U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[5U])) 
                                                                                >> 7U)))), 
                                                                                ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[2U] 
                                                                                << 7U) 
                                                                                | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[1U] 
                                                                                >> 0x19U)), 
                                                                                (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                                                 ? 
                                                                                ((0U 
                                                                                >= 
                                                                                (3U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                                                >> 0x20U)))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                                                                 ? 0xffffffffU
                                                                                 : 
                                                                                __Vtemp_h0eb64d5b__2[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                                                 ? 
                                                                                ((0U 
                                                                                >= 
                                                                                (3U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                                                 ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw)
                                                                                 : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw))
                                                                                 : 
                                                                                __Vtemp_h77ed5025__0[0U])))), 
                                                                                (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xcU])) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xbU])) 
                                                                                << 0xdU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xaU])) 
                                                                                >> 0x13U))), __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step__2__Vfuncout);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
            = __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step__2__Vfuncout;
    } else if (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                & (IData)((0U != (0x30000U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0U]))))) {
        Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(
                                                                                (&(vlSymsp->__Vscope_testbench__wrapper__processor__m__multicore__cc__y__BRA__0__KET____x__BRA__0__KET____tile_node__tile__core__core_lite__core_minimal__be__cosim)), 
                                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 0xbcU, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle, 
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li)), 
                                                                                (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xeU])) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xdU])) 
                                                                                << 0xdU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xcU])) 
                                                                                >> 0x13U))), __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap__3__Vfuncout);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
            = __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap__3__Vfuncout;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__state_r 
        = ((IData)(vlSymsp->TOP.testbench__DOT__tb_reset)
            ? 0U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__state_n));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__r_ptr_gray_r 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
            << 8U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__r_valid_o_tmp 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__r_ptr_gray_r) 
           != (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
                << 8U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r)));
}

VL_INLINE_OPT void Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__8(Vtestbench_bp_core_tile_node__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestbench_bp_core_tile_node__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__8\n"); );
    // Init
    IData/*31:0*/ __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step__6__Vfuncout;
    __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap__7__Vfuncout;
    __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap__7__Vfuncout = 0;
    VlWide<3>/*95:0*/ __Vtemp_h0eb64d5b__0;
    VlWide<3>/*95:0*/ __Vtemp_h61e32d40__0;
    VlWide<3>/*95:0*/ __Vtemp_h0eb64d5b__1;
    VlWide<3>/*95:0*/ __Vtemp_ha5b442ed__0;
    VlWide<3>/*95:0*/ __Vtemp_h0eb64d5b__2;
    VlWide<3>/*95:0*/ __Vtemp_h77ed5025__0;
    // Body
    if (VL_UNLIKELY((vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                     & (0U != (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                               >> 1U))))) {
        VL_WRITEF("[BSG-FAIL] co-simulation failure: exit code: %11d\n",
                  32,(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                      >> 1U));
        Verilated::runFlushCallbacks();
        VL_FINISH_MT("/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 195, "");
    } else if (VL_UNLIKELY((1U & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                                  & (~ (IData)((0U 
                                                != 
                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                                                 >> 1U)))))))) {
        VL_WRITEF("[BSG-FINISH] co-simulation finish: exit code: %11d\n",
                  32,(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
                      >> 1U));
        Verilated::runFlushCallbacks();
    }
    if ((1U == (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__state_r))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                         & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U] 
                             >> 0x13U) | (IData)((0U 
                                                  != 
                                                  (0x30000U 
                                                   & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0U]))))))) {
            VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"%x %x %x (0x%x) ",
                       1,(1U & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li)),
                       2,(3U & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xaU] 
                                >> 4U)),64,VL_EXTENDS_QQ(64,39, 
                                                         (0x7fffffffffULL 
                                                          & (((QData)((IData)(
                                                                              vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U])) 
                                                              << 0x19U) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[5U])) 
                                                                >> 7U)))),
                       32,((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[2U] 
                            << 7U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[1U] 
                                      >> 0x19U)));
            if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
            if (VL_UNLIKELY((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                              & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U] 
                                 >> 0x13U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)))) {
                __Vtemp_h0eb64d5b__0[1U] = (IData)(
                                                   ((((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(1U) 
                                                                               + 
                                                                               ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                                >> 0x14U) 
                                                                                - (IData)(0x402U)))) 
                                                                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                                | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                                 ? 0x7ffU
                                                                                 : 0U))))) 
                                                         << 0x34U) 
                                                        | (0xfffffffffffffULL 
                                                           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                               ? 
                                                              ((0x3fffffffffffffULL 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                                   >> 1U)) 
                                                               >> 
                                                               (0x3fU 
                                                                & ((IData)(1U) 
                                                                   - 
                                                                   ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                     << 0xcU) 
                                                                    | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                       >> 0x14U)))))
                                                               : 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                                ? 0ULL
                                                                : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig))))) 
                                                    >> 0x20U));
                __Vtemp_h61e32d40__0[0U] = ((2U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                             ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U] 
                                                 << 0x1fU) 
                                                | ((0x7f800000U 
                                                    & ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp) 
                                                           - (IData)(0x82U)))) 
                                                        | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf) 
                                                            | (IData)(
                                                                      (0x1c0U 
                                                                       == 
                                                                       (0x1c0U 
                                                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp)))))
                                                            ? 0xffU
                                                            : 0U)) 
                                                       << 0x17U)) 
                                                   | (0x7fffffU 
                                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                          ? 
                                                         ((vlSelf->__VdfgTmp_h51686f97__0 
                                                           >> 1U) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp))))
                                                          : 
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf)
                                                           ? 0U
                                                           : vlSelf->__VdfgTmp_h51686f97__0)))))
                                             : (IData)(
                                                       (((QData)((IData)(
                                                                         (1U 
                                                                          & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                         << 0x3fU) 
                                                        | (((QData)((IData)(
                                                                            (0x7ffU 
                                                                             & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                                >> 0x14U) 
                                                                                - (IData)(0x402U)))) 
                                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                                | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                                 ? 0x7ffU
                                                                                 : 0U))))) 
                                                            << 0x34U) 
                                                           | (0xfffffffffffffULL 
                                                              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                  ? 
                                                                 ((0x3fffffffffffffULL 
                                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                                      >> 1U)) 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(1U) 
                                                                      - 
                                                                      ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                          >> 0x14U)))))
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                                   ? 0ULL
                                                                   : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig)))))));
                VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"x%x %x",
                           5,(0x1fU & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[9U] 
                                        << 3U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[8U] 
                                                  >> 0x1dU))),
                           64,(((QData)((IData)(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                  ? 
                                                 ((0U 
                                                   >= 
                                                   (3U 
                                                    & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                              >> 0x20U))
                                                   : (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                              >> 0x20U)))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                                   ? 0xffffffffU
                                                   : 
                                                  __Vtemp_h0eb64d5b__0[1U])))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                              ? 
                                                             ((0U 
                                                               >= 
                                                               (3U 
                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                               ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw)
                                                               : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw))
                                                              : 
                                                             __Vtemp_h61e32d40__0[0U])))));
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
            }
            if (VL_UNLIKELY((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                              & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U] 
                                 >> 0x13U)) & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_frd_pending)))) {
                __Vtemp_h0eb64d5b__1[1U] = (IData)(
                                                   ((((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                      << 0x3fU) 
                                                     | (((QData)((IData)(
                                                                         (0x7ffU 
                                                                          & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(1U) 
                                                                               + 
                                                                               ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                                >> 0x14U) 
                                                                                - (IData)(0x402U)))) 
                                                                             | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                                | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                                 ? 0x7ffU
                                                                                 : 0U))))) 
                                                         << 0x34U) 
                                                        | (0xfffffffffffffULL 
                                                           & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                               ? 
                                                              ((0x3fffffffffffffULL 
                                                                & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                                   >> 1U)) 
                                                               >> 
                                                               (0x3fU 
                                                                & ((IData)(1U) 
                                                                   - 
                                                                   ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                     << 0xcU) 
                                                                    | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                       >> 0x14U)))))
                                                               : 
                                                              ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                                ? 0ULL
                                                                : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig))))) 
                                                    >> 0x20U));
                __Vtemp_ha5b442ed__0[0U] = ((2U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                             ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U] 
                                                 << 0x1fU) 
                                                | ((0x7f800000U 
                                                    & ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                          ? 0U
                                                          : 
                                                         ((IData)(1U) 
                                                          + 
                                                          ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp) 
                                                           - (IData)(0x82U)))) 
                                                        | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf) 
                                                            | (IData)(
                                                                      (0x1c0U 
                                                                       == 
                                                                       (0x1c0U 
                                                                        & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp)))))
                                                            ? 0xffU
                                                            : 0U)) 
                                                       << 0x17U)) 
                                                   | (0x7fffffU 
                                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                          ? 
                                                         ((vlSelf->__VdfgTmp_h51686f97__0 
                                                           >> 1U) 
                                                          >> 
                                                          (0x1fU 
                                                           & ((IData)(1U) 
                                                              - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp))))
                                                          : 
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf)
                                                           ? 0U
                                                           : vlSelf->__VdfgTmp_h51686f97__0)))))
                                             : (IData)(
                                                       (((QData)((IData)(
                                                                         (1U 
                                                                          & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                         << 0x3fU) 
                                                        | (((QData)((IData)(
                                                                            (0x7ffU 
                                                                             & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((IData)(1U) 
                                                                                + 
                                                                                ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                                >> 0x14U) 
                                                                                - (IData)(0x402U)))) 
                                                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                                | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                                 ? 0x7ffU
                                                                                 : 0U))))) 
                                                            << 0x34U) 
                                                           | (0xfffffffffffffULL 
                                                              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                  ? 
                                                                 ((0x3fffffffffffffULL 
                                                                   & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                                      >> 1U)) 
                                                                  >> 
                                                                  (0x3fU 
                                                                   & ((IData)(1U) 
                                                                      - 
                                                                      ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                        << 0xcU) 
                                                                       | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                          >> 0x14U)))))
                                                                  : 
                                                                 ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                                   ? 0ULL
                                                                   : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig)))))));
                VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"f%x %x",
                           5,(0x1fU & ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[9U] 
                                        << 3U) | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[8U] 
                                                  >> 0x1dU))),
                           64,(((QData)((IData)(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                  ? 
                                                 ((0U 
                                                   >= 
                                                   (3U 
                                                    & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                   ? (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                              >> 0x20U))
                                                   : (IData)(
                                                             (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                              >> 0x20U)))
                                                  : 
                                                 ((2U 
                                                   & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                                   ? 0xffffffffU
                                                   : 
                                                  __Vtemp_h0eb64d5b__1[1U])))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                              ? 
                                                             ((0U 
                                                               >= 
                                                               (3U 
                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                               ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw)
                                                               : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw))
                                                              : 
                                                             __Vtemp_ha5b442ed__0[0U])))));
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
            }
            if (VL_UNLIKELY(((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                             & (IData)((0U != (0x30000U 
                                               & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0U])))))) {
                VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"exception (%x) -> 0x%x",
                           64,(((QData)((IData)(vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xeU])) 
                                << 0x2dU) | (((QData)((IData)(
                                                              vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xdU])) 
                                              << 0xdU) 
                                             | ((QData)((IData)(
                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xcU])) 
                                                >> 0x13U))),
                           39,(0x7fffffffffULL & (((QData)((IData)(
                                                                   vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[5U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[4U])))));
                if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
            }
            VL_FWRITEF(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file,"\n");
            if (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file) { VL_FFLUSH_I(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__file); }
        }
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r;
    if (vlSymsp->TOP.testbench__DOT__tb_reset) {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_p1_r = 1U;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_r = 0U;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r = 0U;
    } else {
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_p1_r 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_p1_n;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_r 
            = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_n;
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (7U & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_gray_n) 
                     >> 8U));
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r 
            = (0xffU & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__w_ptr_gray_n));
    }
    if (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
         & (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U] 
            >> 0x13U))) {
        __Vtemp_h0eb64d5b__2[1U] = (IData)(((((QData)((IData)(
                                                              (1U 
                                                               & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                       ? 0U
                                                                       : 
                                                                      ((IData)(1U) 
                                                                       + 
                                                                       ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                         >> 0x14U) 
                                                                        - (IData)(0x402U)))) 
                                                                     | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                         | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                         ? 0x7ffU
                                                                         : 0U))))) 
                                                 << 0x34U) 
                                                | (0xfffffffffffffULL 
                                                   & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                       ? 
                                                      ((0x3fffffffffffffULL 
                                                        & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                           >> 1U)) 
                                                       >> 
                                                       (0x3fU 
                                                        & ((IData)(1U) 
                                                           - 
                                                           ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                             << 0xcU) 
                                                            | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                               >> 0x14U)))))
                                                       : 
                                                      ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                        ? 0ULL
                                                        : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig))))) 
                                            >> 0x20U));
        __Vtemp_h77ed5025__0[0U] = ((2U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                     ? ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U] 
                                         << 0x1fU) 
                                        | ((0x7f800000U 
                                            & ((((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                  ? 0U
                                                  : 
                                                 ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp) 
                                                   - (IData)(0x82U)))) 
                                                | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf) 
                                                    | (IData)(
                                                              (0x1c0U 
                                                               == 
                                                               (0x1c0U 
                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp)))))
                                                    ? 0xffU
                                                    : 0U)) 
                                               << 0x17U)) 
                                           | (0x7fffffU 
                                              & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isSubnormal)
                                                  ? 
                                                 ((vlSelf->__VdfgTmp_h51686f97__0 
                                                   >> 1U) 
                                                  >> 
                                                  (0x1fU 
                                                   & ((IData)(1U) 
                                                      - (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__recFNToRawFN__DOT__exp))))
                                                  : 
                                                 ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_sp_rec__DOT__isInf)
                                                   ? 0U
                                                   : vlSelf->__VdfgTmp_h51686f97__0)))))
                                     : (IData)((((QData)((IData)(
                                                                 (1U 
                                                                  & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U]))) 
                                                 << 0x3fU) 
                                                | (((QData)((IData)(
                                                                    (0x7ffU 
                                                                     & (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(1U) 
                                                                          + 
                                                                          ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                            >> 0x14U) 
                                                                           - (IData)(0x402U)))) 
                                                                        | (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf) 
                                                                            | (IData)(
                                                                                (0xe0000000U 
                                                                                == 
                                                                                (0xe0000000U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U]))))
                                                                            ? 0x7ffU
                                                                            : 0U))))) 
                                                    << 0x34U) 
                                                   | (0xfffffffffffffULL 
                                                      & ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isSubnormal)
                                                          ? 
                                                         ((0x3fffffffffffffULL 
                                                           & (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig 
                                                              >> 1U)) 
                                                          >> 
                                                          (0x3fU 
                                                           & ((IData)(1U) 
                                                              - 
                                                              ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                << 0xcU) 
                                                               | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[1U] 
                                                                  >> 0x14U)))))
                                                          : 
                                                         ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__isInf)
                                                           ? 0ULL
                                                           : vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__fp_unbox__DOT__out_dp_rec__DOT__sig)))))));
        Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(
                                                                                (&(vlSymsp->__Vscope_testbench__wrapper__processor__m__multicore__cc__y__BRA__0__KET____x__BRA__1__KET____tile_node__tile__core__core_lite__core_minimal__be__cosim)), 
                                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 0xbaU, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle, 
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li)), 
                                                                                VL_EXTENDS_QQ(64,39, 
                                                                                (0x7fffffffffULL 
                                                                                & (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[6U])) 
                                                                                << 0x19U) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[5U])) 
                                                                                >> 7U)))), 
                                                                                ((vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[2U] 
                                                                                << 7U) 
                                                                                | (vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[1U] 
                                                                                >> 0x19U)), 
                                                                                (((QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                                                 ? 
                                                                                ((0U 
                                                                                >= 
                                                                                (3U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                                                 ? (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                                                >> 0x20U))
                                                                                 : (IData)(
                                                                                (vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw 
                                                                                >> 0x20U)))
                                                                                 : 
                                                                                ((2U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__fp_unbox__reg_i[2U])
                                                                                 ? 0xffffffffU
                                                                                 : 
                                                                                __Vtemp_h0eb64d5b__2[1U])))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_ird_pending)
                                                                                 ? 
                                                                                ((0U 
                                                                                >= 
                                                                                (3U 
                                                                                & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellinp__int_unbox__reg_i[2U]))
                                                                                 ? (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw)
                                                                                 : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__int_unbox->__PVT__raw))
                                                                                 : 
                                                                                __Vtemp_h77ed5025__0[0U])))), 
                                                                                (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xcU])) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xbU])) 
                                                                                << 0xdU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xaU])) 
                                                                                >> 0x13U))), __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step__6__Vfuncout);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
            = __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_step__6__Vfuncout;
    } else if (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_deq) 
                & (IData)((0U != (0x30000U & vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0U]))))) {
        Vtestbench_bp_core_tile_node__Bz1____Vdpiimwrap_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap_TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node(
                                                                                (&(vlSymsp->__Vscope_testbench__wrapper__processor__m__multicore__cc__y__BRA__0__KET____x__BRA__1__KET____tile_node__tile__core__core_lite__core_minimal__be__cosim)), 
                                                                                "/home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv", 0xbcU, vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_handle, 
                                                                                (1U 
                                                                                & (IData)(vlSelf->__PVT__tile__DOT__core__DOT__cfgs__DOT__cce_id_li)), 
                                                                                (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xeU])) 
                                                                                << 0x2dU) 
                                                                                | (((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xdU])) 
                                                                                << 0xdU) 
                                                                                | ((QData)((IData)(
                                                                                vlSelf->tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT____Vcellout__commit_fifo__r_data_o[0xcU])) 
                                                                                >> 0x13U))), __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap__7__Vfuncout);
        vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__ret_code 
            = __Vfunc_tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__cosim_trap__7__Vfuncout;
    }
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__state_r 
        = ((IData)(vlSymsp->TOP.testbench__DOT__tb_reset)
            ? 0U : (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__state_n));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_1_r 
        = vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r;
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__r_ptr_gray_r 
        = (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_LNCH_r) 
            << 8U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_rd__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_LNCH_r));
    vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__r_valid_o_tmp 
        = ((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__r_ptr_gray_r) 
           != (((IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__z__DOT__blss__DOT__bsg_SYNC_2_r) 
                << 8U) | (IData)(vlSelf->__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__cosim__DOT__commit_fifo__DOT__bapg_wr__DOT__ptr_sync__DOT__sync__DOT__p__DOT__maxb__BRA__0__KET____DOT__blss__DOT__bsg_SYNC_2_r)));
}
