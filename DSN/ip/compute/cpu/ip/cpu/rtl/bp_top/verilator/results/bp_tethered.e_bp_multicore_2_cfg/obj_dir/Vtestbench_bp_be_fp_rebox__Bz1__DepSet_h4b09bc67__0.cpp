// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtestbench__Syms.h"
#include "Vtestbench__Syms.h"
#include "Vtestbench_bp_be_fp_rebox__Bz1.h"

extern const VlWide<129>/*4127:0*/ Vtestbench__ConstPool__CONST_h65f364c7_0;
extern const VlWide<129>/*4127:0*/ Vtestbench__ConstPool__CONST_hab8e39b9_0;
extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h3dcda147_0;
extern const VlWide<17>/*543:0*/ Vtestbench__ConstPool__CONST_h00a543f7_0;

VL_INLINE_OPT void Vtestbench_bp_be_fp_rebox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox__0(Vtestbench_bp_be_fp_rebox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_rebox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox__0\n"); );
    // Init
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__overflow;
    __PVT__round_mixed__DOT__round64__DOT__overflow = 0;
    QData/*53:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    QData/*55:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound = 0;
    QData/*53:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 = 0;
    QData/*55:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__commonCase;
    __PVT__round_mixed__DOT__round32__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow;
    __PVT__round_mixed__DOT__round32__DOT__overflow = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut;
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut;
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut = 0;
    IData/*24:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound = 0;
    SData/*14:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp = 0;
    IData/*24:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 = 0;
    CData/*2:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 = 0;
    CData/*0:0*/ __VdfgTmp_h29d15a15__0;
    __VdfgTmp_h29d15a15__0 = 0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__0;
    VlWide<129>/*4127:0*/ __Vtemp_hcae69339__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__1;
    VlWide<129>/*4127:0*/ __Vtemp_hdb4f55db__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__2;
    VlWide<129>/*4127:0*/ __Vtemp_he04661f7__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__3;
    VlWide<129>/*4127:0*/ __Vtemp_h0958543a__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__4;
    VlWide<129>/*4127:0*/ __Vtemp_h57e1dd44__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__5;
    VlWide<129>/*4127:0*/ __Vtemp_h5b5018c3__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__6;
    VlWide<129>/*4127:0*/ __Vtemp_hc4c7cad4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__7;
    VlWide<129>/*4127:0*/ __Vtemp_hb0336c9b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__8;
    VlWide<129>/*4127:0*/ __Vtemp_hbc373541__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__9;
    VlWide<129>/*4127:0*/ __Vtemp_he33cd104__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__10;
    VlWide<129>/*4127:0*/ __Vtemp_h19aada68__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__11;
    VlWide<129>/*4127:0*/ __Vtemp_he99522ee__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__12;
    VlWide<129>/*4127:0*/ __Vtemp_hc859df89__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__13;
    VlWide<129>/*4127:0*/ __Vtemp_h7102684f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__14;
    VlWide<129>/*4127:0*/ __Vtemp_h83cac2c9__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__15;
    VlWide<129>/*4127:0*/ __Vtemp_hf5feacd6__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__16;
    VlWide<129>/*4127:0*/ __Vtemp_hcb15077d__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__17;
    VlWide<129>/*4127:0*/ __Vtemp_h3905f477__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__18;
    VlWide<129>/*4127:0*/ __Vtemp_hc135bb42__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__19;
    VlWide<129>/*4127:0*/ __Vtemp_h2f06f61d__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__20;
    VlWide<129>/*4127:0*/ __Vtemp_h7e0a3f25__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__21;
    VlWide<129>/*4127:0*/ __Vtemp_hc53e6c6f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__22;
    VlWide<129>/*4127:0*/ __Vtemp_h70f01b57__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__23;
    VlWide<129>/*4127:0*/ __Vtemp_h6e316f39__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__24;
    VlWide<129>/*4127:0*/ __Vtemp_hd9b493ab__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__25;
    VlWide<129>/*4127:0*/ __Vtemp_hdb8b239f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__26;
    VlWide<129>/*4127:0*/ __Vtemp_hfe4c7b92__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__27;
    VlWide<129>/*4127:0*/ __Vtemp_h15e89e17__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__28;
    VlWide<129>/*4127:0*/ __Vtemp_h4c0c072d__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__29;
    VlWide<129>/*4127:0*/ __Vtemp_h0ee089ef__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__30;
    VlWide<129>/*4127:0*/ __Vtemp_hb04956dd__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__31;
    VlWide<129>/*4127:0*/ __Vtemp_h6155823b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__32;
    VlWide<129>/*4127:0*/ __Vtemp_h67e04c81__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__33;
    VlWide<129>/*4127:0*/ __Vtemp_h37372c87__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__34;
    VlWide<129>/*4127:0*/ __Vtemp_hf273f3e0__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__35;
    VlWide<129>/*4127:0*/ __Vtemp_hbf64080b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__36;
    VlWide<129>/*4127:0*/ __Vtemp_hebb90c97__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__37;
    VlWide<129>/*4127:0*/ __Vtemp_h403cee37__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__38;
    VlWide<129>/*4127:0*/ __Vtemp_h36a6e04b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__39;
    VlWide<129>/*4127:0*/ __Vtemp_h3ba5d93d__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__40;
    VlWide<129>/*4127:0*/ __Vtemp_heac4f090__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__41;
    VlWide<129>/*4127:0*/ __Vtemp_h0a7ffc53__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__42;
    VlWide<129>/*4127:0*/ __Vtemp_h1d36fb98__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__43;
    VlWide<129>/*4127:0*/ __Vtemp_hcadbe62e__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__44;
    VlWide<129>/*4127:0*/ __Vtemp_ha4f52ff3__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__45;
    VlWide<129>/*4127:0*/ __Vtemp_h9545e992__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__46;
    VlWide<129>/*4127:0*/ __Vtemp_h5b5dddeb__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__47;
    VlWide<129>/*4127:0*/ __Vtemp_h53ee43ce__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__48;
    VlWide<129>/*4127:0*/ __Vtemp_h43b4a77c__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__49;
    VlWide<129>/*4127:0*/ __Vtemp_h0153d65c__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__50;
    VlWide<129>/*4127:0*/ __Vtemp_h926c5802__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__51;
    VlWide<129>/*4127:0*/ __Vtemp_h055b281c__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__52;
    VlWide<129>/*4127:0*/ __Vtemp_h048352c6__0;
    VlWide<129>/*4127:0*/ __Vtemp_hb251b625__53;
    VlWide<129>/*4127:0*/ __Vtemp_h666375ac__0;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__0;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__1;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__2;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__3;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__4;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__5;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__6;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__7;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__8;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__9;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__10;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__11;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__12;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__13;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__14;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__15;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__16;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__17;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__18;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__19;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__20;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__21;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__22;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__23;
    VlWide<17>/*543:0*/ __Vtemp_hc80d3fb5__24;
    // Body
    vlSelf->__VdfgTmp_h183e8778__0 = (IData)((0x20U 
                                              == (0x420U 
                                                  & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])));
    __PVT__round_mixed__DOT__round32__DOT__commonCase 
        = (IData)((0U == (0x700U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])));
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
        = ((0x7fffffeU & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                           << 3U) | (6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                           >> 0x1dU)))) 
           | (0U != (0x3fffffffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])));
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp 
        = (((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
               >> 5U)) | ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                              >> 5U)) & (3U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode))));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__0, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hcae69339__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__0);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__1, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hdb4f55db__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__1);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__2, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he04661f7__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__2);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__3, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0958543a__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__3);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__4, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h57e1dd44__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__4);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__5, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5b5018c3__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__5);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__6, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc4c7cad4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__6);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__7, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb0336c9b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__7);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__8, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hbc373541__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__8);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__9, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he33cd104__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__9);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__10, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h19aada68__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__10);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__11, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he99522ee__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__11);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__12, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc859df89__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__12);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__13, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7102684f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__13);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__14, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h83cac2c9__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__14);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__15, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf5feacd6__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__15);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__16, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hcb15077d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__16);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__17, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h3905f477__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__17);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__18, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc135bb42__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__18);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__19, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2f06f61d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__19);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__20, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7e0a3f25__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__20);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__21, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc53e6c6f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__21);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__22, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h70f01b57__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__22);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__23, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6e316f39__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__23);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__24, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd9b493ab__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__24);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__25, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hdb8b239f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__25);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__26, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hfe4c7b92__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__26);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__27, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h15e89e17__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__27);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__28, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h4c0c072d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__28);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__29, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0ee089ef__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__29);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__30, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb04956dd__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__30);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__31, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6155823b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__31);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__32, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h67e04c81__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__32);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__33, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h37372c87__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__33);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__34, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf273f3e0__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__34);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__35, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hbf64080b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__35);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__36, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hebb90c97__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__36);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__37, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h403cee37__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__37);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__38, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h36a6e04b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__38);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__39, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h3ba5d93d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__39);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__40, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_heac4f090__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__40);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__41, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0a7ffc53__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__41);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__42, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1d36fb98__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__42);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__43, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hcadbe62e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__43);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__44, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha4f52ff3__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__44);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__45, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h9545e992__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__45);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__46, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5b5dddeb__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__46);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__47, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h53ee43ce__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__47);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__48, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h43b4a77c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__48);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__49, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0153d65c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__49);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__50, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h926c5802__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__50);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__51, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h055b281c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__51);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__52, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h048352c6__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__52);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hb251b625__53, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h666375ac__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hb251b625__53);
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = (((QData)((IData)((1U & (__Vtemp_hcae69339__0[0x1eU] 
                                   >> 0xdU)))) << 0x35U) 
           | (((QData)((IData)((1U & (__Vtemp_hdb4f55db__0[0x1eU] 
                                      >> 0xeU)))) << 0x34U) 
              | (((QData)((IData)((1U & (__Vtemp_he04661f7__0[0x1eU] 
                                         >> 0xfU)))) 
                  << 0x33U) | (((QData)((IData)((1U 
                                                 & (__Vtemp_h0958543a__0[0x1eU] 
                                                    >> 0x10U)))) 
                                << 0x32U) | (((QData)((IData)(
                                                              (1U 
                                                               & (__Vtemp_h57e1dd44__0[0x1eU] 
                                                                  >> 0x11U)))) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (__Vtemp_h5b5018c3__0[0x1eU] 
                                                                     >> 0x12U)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (__Vtemp_hc4c7cad4__0[0x1eU] 
                                                                        >> 0x13U)))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (__Vtemp_hb0336c9b__0[0x1eU] 
                                                                           >> 0x14U)))) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (__Vtemp_hbc373541__0[0x1eU] 
                                                                              >> 0x15U)))) 
                                                          << 0x2dU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (__Vtemp_he33cd104__0[0x1eU] 
                                                                                >> 0x16U)))) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h19aada68__0[0x1eU] 
                                                                                >> 0x17U)))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_he99522ee__0[0x1eU] 
                                                                                >> 0x18U)))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hc859df89__0[0x1eU] 
                                                                                >> 0x19U)))) 
                                                                      << 0x29U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h7102684f__0[0x1eU] 
                                                                                >> 0x1aU)))) 
                                                                         << 0x28U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h83cac2c9__0[0x1eU] 
                                                                                >> 0x1bU)))) 
                                                                            << 0x27U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hf5feacd6__0[0x1eU] 
                                                                                >> 0x1cU)))) 
                                                                               << 0x26U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hcb15077d__0[0x1eU] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h3905f477__0[0x1eU] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (__Vtemp_hc135bb42__0[0x1eU] 
                                                                                >> 0x1fU))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & __Vtemp_h2f06f61d__0[0x1fU]))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h7e0a3f25__0[0x1fU] 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hc53e6c6f__0[0x1fU] 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (__Vtemp_h70f01b57__0[0x1fU] 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_h6e316f39__0[0x1fU] 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & (__Vtemp_hd9b493ab__0[0x1fU] 
                                                                                << 0x18U)) 
                                                                                | ((0x10000000U 
                                                                                & (__Vtemp_hdb8b239f__0[0x1fU] 
                                                                                << 0x16U)) 
                                                                                | ((0x8000000U 
                                                                                & (__Vtemp_hfe4c7b92__0[0x1fU] 
                                                                                << 0x14U)) 
                                                                                | ((0x4000000U 
                                                                                & (__Vtemp_h15e89e17__0[0x1fU] 
                                                                                << 0x12U)) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_h4c0c072d__0[0x1fU] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_h0ee089ef__0[0x1fU] 
                                                                                << 0xeU)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_hb04956dd__0[0x1fU] 
                                                                                << 0xcU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_h6155823b__0[0x1fU] 
                                                                                << 0xaU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_h67e04c81__0[0x1fU] 
                                                                                << 8U)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_h37372c87__0[0x1fU] 
                                                                                << 6U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_hf273f3e0__0[0x1fU] 
                                                                                << 4U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_hbf64080b__0[0x1fU] 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & __Vtemp_hebb90c97__0[0x1fU]) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_h403cee37__0[0x1fU] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_h36a6e04b__0[0x1fU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_h3ba5d93d__0[0x1fU] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (__Vtemp_heac4f090__0[0x1fU] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (__Vtemp_h0a7ffc53__0[0x1fU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (__Vtemp_h1d36fb98__0[0x1fU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (__Vtemp_hcadbe62e__0[0x1fU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_ha4f52ff3__0[0x1fU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_h9545e992__0[0x1fU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_h5b5dddeb__0[0x1fU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_h53ee43ce__0[0x1fU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_h43b4a77c__0[0x1fU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_h0153d65c__0[0x1fU] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_h926c5802__0[0x1fU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_h055b281c__0[0x20U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & __Vtemp_h048352c6__0[0x20U]) 
                                                                                | (1U 
                                                                                & (__Vtemp_h666375ac__0[0x20U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 
        = ((6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                  >> 0x1dU)) | (0U != (0x3fffffffU 
                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_hc80d3fb5__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_hc80d3fb5__0[3U]) 
                          << 0xeU)) | ((0x800000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_hc80d3fb5__1[3U]) 
                                         << 0xcU)) 
                                       | ((0x400000U 
                                           & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                               & __Vtemp_hc80d3fb5__2[3U]) 
                                              << 0xaU)) 
                                          | ((0x200000U 
                                              & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_hc80d3fb5__3[3U]) 
                                                 << 8U)) 
                                             | ((0x100000U 
                                                 & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_hc80d3fb5__4[3U]) 
                                                    << 6U)) 
                                                | ((0x80000U 
                                                    & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_hc80d3fb5__5[3U]) 
                                                       << 4U)) 
                                                   | ((0x40000U 
                                                       & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                           & __Vtemp_hc80d3fb5__6[3U]) 
                                                          << 2U)) 
                                                      | ((0x20000U 
                                                          & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                             & __Vtemp_hc80d3fb5__7[3U])) 
                                                         | ((0x10000U 
                                                             & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_hc80d3fb5__8[3U]) 
                                                                >> 2U)) 
                                                            | ((0x8000U 
                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_hc80d3fb5__9[3U]) 
                                                                   >> 4U)) 
                                                               | ((0x4000U 
                                                                   & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_hc80d3fb5__10[3U]) 
                                                                      >> 6U)) 
                                                                  | ((0x2000U 
                                                                      & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_hc80d3fb5__11[3U]) 
                                                                         >> 8U)) 
                                                                     | ((0x1000U 
                                                                         & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_hc80d3fb5__12[3U]) 
                                                                            >> 0xaU)) 
                                                                        | ((0x800U 
                                                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__13[3U]) 
                                                                               >> 0xcU)) 
                                                                           | ((0x400U 
                                                                               & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__14[3U]) 
                                                                                >> 0xeU)) 
                                                                              | ((0x200U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__15[3U]) 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__16[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__17[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__18[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__19[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__20[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_hc80d3fb5__21[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_hc80d3fb5__22[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_hc80d3fb5__23[4U])) 
                                                                                | (1U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_hc80d3fb5__24[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __VdfgTmp_h29d15a15__0 = ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                              | (6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)));
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp 
        = ((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp));
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
        = (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (QData)((IData)((1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                    >> 0x17U)))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
        = (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                    >> 0x17U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])) 
                                                 >> 3U))) 
                                          & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                             >> 2U)))) 
           | (0U != (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                     & (1U | (6U & ((IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0) 
                                    << 1U))))));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1ULL | (0x7ffffffffffffffeULL & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                << 1U)))) 
           & (3ULL | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                      << 2U)));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                   >> 2U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & (1U 
                                                    | (6U 
                                                       & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                          << 1U))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                    << 1U)))) & (3U 
                                                 | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                    << 2U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])) 
                                                 >> 3U))) 
                                          & (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 3U)))) 
           | (0U != (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                & (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra));
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
        = (0xffffffffffffffULL & ((((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                    & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)) 
                                   | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                      & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound)))
                                   ? ((((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                                        & ((~ (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra)) 
                                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)))
                                        ? (~ (1ULL 
                                              | (0x7ffffffffffffffeULL 
                                                 & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                    << 1U))))
                                        : 0xffffffffffffffULL) 
                                      & (1ULL + (0x3fffffffffffffULL 
                                                 & (((0x3fffffffc0000000ULL 
                                                      & ((QData)((IData)(
                                                                         vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                                         << 0x1eU)) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])) 
                                                        >> 2U)) 
                                                    | (0x3fffffffffffffffULL 
                                                       & round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0)))))
                                   : ((0x3fffffffffffffULL 
                                       & (((~ (3ULL 
                                               | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                  << 2U))) 
                                           >> 2U) & 
                                          ((0x3fffffffc0000000ULL 
                                            & ((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                               << 0x1eU)) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])) 
                                              >> 2U)))) 
                                      | (((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                                          & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound))
                                          ? (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 1U)
                                          : 0ULL))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
        = ((((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
             & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)) 
            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
               & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound)))
            ? ((((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                 & ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra)) 
                    & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)))
                 ? (~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                            << 1U))))
                 : 0xffffffffU) & ((IData)(1U) + ((round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
                                                   >> 2U) 
                                                  | (0x3fffffffU 
                                                     & round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0))))
            : ((((~ (3U | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                           << 2U))) & round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0) 
                >> 2U) | (((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                           & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound))
                           ? (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                              >> 1U) : 0U)));
    if ((0x800000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & (0x3fffffffffffffULL 
                                     & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                        >> 1U)));
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & (0x1ffffffU & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                          >> 1U)));
    } else {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0);
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0);
    }
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, 
                                                            (0x1fffU 
                                                             & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                                   >> 0x18U)))))) 
                      + (IData)((3ULL & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                         >> 0x35U)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0x1fffU 
                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                                      >> 0x18U))))))) 
                      + (3U & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                               >> 0x18U))));
    vlSelf->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
               >> 8U)) & VL_LTES_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round64__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)), 0xaU)));
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
               >> 8U)) & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))));
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round32__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round64__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                  >> 9U) | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                            & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp))));
    vlSelf->__Vcellout__round_mixed__fullExceptionFlags 
        = (((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
            << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                        & (VL_GTS_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                           | ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound) 
                              & (VL_GTES_III(32, 0U, 
                                             VL_SHIFTRS_III(32,32,32, 
                                                            VL_EXTENDS_II(32,13, 
                                                                          (0x1fffU 
                                                                           & VL_EXTENDS_II(13,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                                                >> 0x18U)))))), 0xbU)) 
                                 & ((~ ((~ ((0x800000U 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                             ? (IData)(
                                                       (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                        >> 2U))
                                             : (IData)(
                                                       (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                        >> 1U)))) 
                                        & (((0x800000U 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                             ? (IData)(
                                                       (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                        >> 0x36U))
                                             : (IData)(
                                                       (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                        >> 0x35U))) 
                                           & ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
                                              & (((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                  & ((0x800000U 
                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                                      ? 
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                      >> 2U)
                                                      : 
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                      >> 1U))) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                    & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                         >> 0x17U) 
                                                        & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                           >> 2U)) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U]))))))))) 
                                    & ((0x800000U & 
                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                        ? (IData)((round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                   >> 1U))
                                        : (IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0))))))) 
                       << 1U) | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                    & (VL_GTS_III(32, 0x3ceU, 
                                                  VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                                       | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound))))));
    vlSelf->__Vcellout__round_mixed__midExceptionFlags 
        = (((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
            << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                        & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                           | ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound) 
                              & (VL_GTES_III(32, 0U, 
                                             VL_SHIFTRS_III(32,32,32, 
                                                            VL_EXTENDS_II(32,14, 
                                                                          (0x3fffU 
                                                                           & ((IData)(0x3900U) 
                                                                              + 
                                                                              VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                                                >> 0x18U))))))), 8U)) 
                                 & ((~ ((~ ((0x800000U 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                             ? (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                >> 2U)
                                             : (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                >> 1U))) 
                                        & (((0x800000U 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                             ? (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                >> 0x19U)
                                             : (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                >> 0x18U)) 
                                           & ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
                                              & (((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                  & ((0x800000U 
                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                                      ? 
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                      >> 0x1eU))) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                    & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                         >> 0x17U) 
                                                        & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                           >> 0x1fU)) 
                                                       | (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7fffffffU 
                                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])))))))))) 
                                    & ((0x800000U & 
                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                        ? (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                           >> 1U) : round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0)))))) 
                       << 1U) | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                    & (VL_GTS_III(32, 0x6bU, 
                                                  VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                                       | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound))))));
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                  >> 9U) | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                            & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp))));
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp 
        = (0x1ffU & (((~ (((1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                   >> 8U) | VL_GTS_III(32, 0x6bU, 
                                                       VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)))))
                            ? 0x1c0U : 0U) | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                                                ? 0x194U
                                                : 0U) 
                                              | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                                   ? 0x80U
                                                   : 0U) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                     ? 0x40U
                                                     : 0U))))) 
                      & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)) 
                     | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                          ? 0x6bU : 0U) | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                             ? 0x17fU
                                             : 0U) 
                                           | (((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                ? 0x180U
                                                : 0U) 
                                              | ((0x400U 
                                                  & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                  ? 0x1c0U
                                                  : 0U))))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isNaN 
        = (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_rebox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox__0(Vtestbench_bp_be_fp_rebox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_rebox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox__0\n"); );
    // Body
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0 
        = ((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
           | (4U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_rebox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox__0(Vtestbench_bp_be_fp_rebox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_rebox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox__0\n"); );
    // Init
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__overflow;
    __PVT__round_mixed__DOT__round64__DOT__overflow = 0;
    QData/*53:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    QData/*55:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound = 0;
    QData/*53:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 = 0;
    QData/*55:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__commonCase;
    __PVT__round_mixed__DOT__round32__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow;
    __PVT__round_mixed__DOT__round32__DOT__overflow = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut;
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut;
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut = 0;
    IData/*24:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound = 0;
    SData/*14:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp = 0;
    IData/*24:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 = 0;
    CData/*2:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 = 0;
    CData/*0:0*/ __VdfgTmp_h29d15a15__0;
    __VdfgTmp_h29d15a15__0 = 0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__0;
    VlWide<129>/*4127:0*/ __Vtemp_h0d97af65__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__1;
    VlWide<129>/*4127:0*/ __Vtemp_h75339a35__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__2;
    VlWide<129>/*4127:0*/ __Vtemp_h20fd198c__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__3;
    VlWide<129>/*4127:0*/ __Vtemp_h085b80c3__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__4;
    VlWide<129>/*4127:0*/ __Vtemp_h0a4642e1__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__5;
    VlWide<129>/*4127:0*/ __Vtemp_hf42c866f__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__6;
    VlWide<129>/*4127:0*/ __Vtemp_h973a2736__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__7;
    VlWide<129>/*4127:0*/ __Vtemp_h2bbb6677__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__8;
    VlWide<129>/*4127:0*/ __Vtemp_h98929b93__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__9;
    VlWide<129>/*4127:0*/ __Vtemp_h95c10a15__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__10;
    VlWide<129>/*4127:0*/ __Vtemp_h4e2af38b__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__11;
    VlWide<129>/*4127:0*/ __Vtemp_h6bd38100__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__12;
    VlWide<129>/*4127:0*/ __Vtemp_ha764c256__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__13;
    VlWide<129>/*4127:0*/ __Vtemp_haa62036d__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__14;
    VlWide<129>/*4127:0*/ __Vtemp_h5ee3edb8__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__15;
    VlWide<129>/*4127:0*/ __Vtemp_h0708c4ab__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__16;
    VlWide<129>/*4127:0*/ __Vtemp_h7752e092__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__17;
    VlWide<129>/*4127:0*/ __Vtemp_hb41eec41__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__18;
    VlWide<129>/*4127:0*/ __Vtemp_hc3242e21__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__19;
    VlWide<129>/*4127:0*/ __Vtemp_hb96917bb__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__20;
    VlWide<129>/*4127:0*/ __Vtemp_h9661db64__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__21;
    VlWide<129>/*4127:0*/ __Vtemp_h3ac42f5c__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__22;
    VlWide<129>/*4127:0*/ __Vtemp_hc64b4739__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__23;
    VlWide<129>/*4127:0*/ __Vtemp_h64f5645e__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__24;
    VlWide<129>/*4127:0*/ __Vtemp_hcb9e1bea__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__25;
    VlWide<129>/*4127:0*/ __Vtemp_hb21536f6__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__26;
    VlWide<129>/*4127:0*/ __Vtemp_hb1a6ee73__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__27;
    VlWide<129>/*4127:0*/ __Vtemp_h2683e6b4__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__28;
    VlWide<129>/*4127:0*/ __Vtemp_hc0e047d7__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__29;
    VlWide<129>/*4127:0*/ __Vtemp_h3f4dfef2__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__30;
    VlWide<129>/*4127:0*/ __Vtemp_h60d5cce8__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__31;
    VlWide<129>/*4127:0*/ __Vtemp_h24638131__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__32;
    VlWide<129>/*4127:0*/ __Vtemp_h0dee3c22__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__33;
    VlWide<129>/*4127:0*/ __Vtemp_h1028fefe__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__34;
    VlWide<129>/*4127:0*/ __Vtemp_ha38a80f4__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__35;
    VlWide<129>/*4127:0*/ __Vtemp_hd37f8f3b__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__36;
    VlWide<129>/*4127:0*/ __Vtemp_hbb64e8a2__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__37;
    VlWide<129>/*4127:0*/ __Vtemp_hfd211a1f__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__38;
    VlWide<129>/*4127:0*/ __Vtemp_hfe2eaeec__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__39;
    VlWide<129>/*4127:0*/ __Vtemp_h22c0f452__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__40;
    VlWide<129>/*4127:0*/ __Vtemp_h9cc63cfb__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__41;
    VlWide<129>/*4127:0*/ __Vtemp_h913a7916__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__42;
    VlWide<129>/*4127:0*/ __Vtemp_hd93278ca__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__43;
    VlWide<129>/*4127:0*/ __Vtemp_h195f9310__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__44;
    VlWide<129>/*4127:0*/ __Vtemp_h9e8d4af7__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__45;
    VlWide<129>/*4127:0*/ __Vtemp_h4376cd75__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__46;
    VlWide<129>/*4127:0*/ __Vtemp_h1792f019__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__47;
    VlWide<129>/*4127:0*/ __Vtemp_h5582e17c__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__48;
    VlWide<129>/*4127:0*/ __Vtemp_he2365794__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__49;
    VlWide<129>/*4127:0*/ __Vtemp_h0f140c13__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__50;
    VlWide<129>/*4127:0*/ __Vtemp_h0a80788e__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__51;
    VlWide<129>/*4127:0*/ __Vtemp_hf16b78f3__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__52;
    VlWide<129>/*4127:0*/ __Vtemp_hb59ba3f8__0;
    VlWide<129>/*4127:0*/ __Vtemp_h71138c40__53;
    VlWide<129>/*4127:0*/ __Vtemp_ha6b08b06__0;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__0;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__1;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__2;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__3;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__4;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__5;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__6;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__7;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__8;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__9;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__10;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__11;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__12;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__13;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__14;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__15;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__16;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__17;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__18;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__19;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__20;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__21;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__22;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__23;
    VlWide<17>/*543:0*/ __Vtemp_h874cb99c__24;
    // Body
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
        = ((0x7fffffeU & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                           << 3U) | (6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                           >> 0x1dU)))) 
           | (0U != (0x3fffffffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])));
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__invalid_exc) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
              >> 0xaU));
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp 
        = (((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
               >> 5U)) | ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                              >> 5U)) & (3U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode))));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__0, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0d97af65__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__0);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__1, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h75339a35__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__1);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__2, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h20fd198c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__2);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__3, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h085b80c3__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__3);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__4, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0a4642e1__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__4);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__5, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf42c866f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__5);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__6, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h973a2736__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__6);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__7, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2bbb6677__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__7);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__8, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h98929b93__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__8);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__9, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h95c10a15__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__9);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__10, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h4e2af38b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__10);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__11, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6bd38100__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__11);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__12, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha764c256__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__12);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__13, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_haa62036d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__13);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__14, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5ee3edb8__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__14);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__15, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0708c4ab__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__15);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__16, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7752e092__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__16);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__17, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb41eec41__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__17);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__18, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc3242e21__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__18);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__19, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb96917bb__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__19);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__20, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h9661db64__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__20);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__21, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h3ac42f5c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__21);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__22, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc64b4739__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__22);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__23, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h64f5645e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__23);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__24, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hcb9e1bea__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__24);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__25, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb21536f6__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__25);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__26, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb1a6ee73__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__26);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__27, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2683e6b4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__27);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__28, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc0e047d7__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__28);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__29, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h3f4dfef2__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__29);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__30, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h60d5cce8__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__30);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__31, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h24638131__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__31);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__32, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0dee3c22__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__32);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__33, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1028fefe__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__33);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__34, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha38a80f4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__34);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__35, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd37f8f3b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__35);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__36, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hbb64e8a2__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__36);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__37, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hfd211a1f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__37);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__38, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hfe2eaeec__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__38);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__39, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h22c0f452__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__39);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__40, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h9cc63cfb__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__40);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__41, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h913a7916__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__41);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__42, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd93278ca__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__42);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__43, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h195f9310__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__43);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__44, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h9e8d4af7__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__44);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__45, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h4376cd75__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__45);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__46, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1792f019__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__46);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__47, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5582e17c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__47);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__48, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he2365794__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__48);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__49, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0f140c13__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__49);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__50, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0a80788e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__50);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__51, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf16b78f3__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__51);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__52, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb59ba3f8__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__52);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h71138c40__53, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha6b08b06__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h71138c40__53);
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = (((QData)((IData)((1U & (__Vtemp_h0d97af65__0[0x1eU] 
                                   >> 0xdU)))) << 0x35U) 
           | (((QData)((IData)((1U & (__Vtemp_h75339a35__0[0x1eU] 
                                      >> 0xeU)))) << 0x34U) 
              | (((QData)((IData)((1U & (__Vtemp_h20fd198c__0[0x1eU] 
                                         >> 0xfU)))) 
                  << 0x33U) | (((QData)((IData)((1U 
                                                 & (__Vtemp_h085b80c3__0[0x1eU] 
                                                    >> 0x10U)))) 
                                << 0x32U) | (((QData)((IData)(
                                                              (1U 
                                                               & (__Vtemp_h0a4642e1__0[0x1eU] 
                                                                  >> 0x11U)))) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (__Vtemp_hf42c866f__0[0x1eU] 
                                                                     >> 0x12U)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (__Vtemp_h973a2736__0[0x1eU] 
                                                                        >> 0x13U)))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (__Vtemp_h2bbb6677__0[0x1eU] 
                                                                           >> 0x14U)))) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (__Vtemp_h98929b93__0[0x1eU] 
                                                                              >> 0x15U)))) 
                                                          << 0x2dU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (__Vtemp_h95c10a15__0[0x1eU] 
                                                                                >> 0x16U)))) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h4e2af38b__0[0x1eU] 
                                                                                >> 0x17U)))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h6bd38100__0[0x1eU] 
                                                                                >> 0x18U)))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_ha764c256__0[0x1eU] 
                                                                                >> 0x19U)))) 
                                                                      << 0x29U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_haa62036d__0[0x1eU] 
                                                                                >> 0x1aU)))) 
                                                                         << 0x28U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h5ee3edb8__0[0x1eU] 
                                                                                >> 0x1bU)))) 
                                                                            << 0x27U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h0708c4ab__0[0x1eU] 
                                                                                >> 0x1cU)))) 
                                                                               << 0x26U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h7752e092__0[0x1eU] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hb41eec41__0[0x1eU] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (__Vtemp_hc3242e21__0[0x1eU] 
                                                                                >> 0x1fU))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & __Vtemp_hb96917bb__0[0x1fU]))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h9661db64__0[0x1fU] 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h3ac42f5c__0[0x1fU] 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (__Vtemp_hc64b4739__0[0x1fU] 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_h64f5645e__0[0x1fU] 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & (__Vtemp_hcb9e1bea__0[0x1fU] 
                                                                                << 0x18U)) 
                                                                                | ((0x10000000U 
                                                                                & (__Vtemp_hb21536f6__0[0x1fU] 
                                                                                << 0x16U)) 
                                                                                | ((0x8000000U 
                                                                                & (__Vtemp_hb1a6ee73__0[0x1fU] 
                                                                                << 0x14U)) 
                                                                                | ((0x4000000U 
                                                                                & (__Vtemp_h2683e6b4__0[0x1fU] 
                                                                                << 0x12U)) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_hc0e047d7__0[0x1fU] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_h3f4dfef2__0[0x1fU] 
                                                                                << 0xeU)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_h60d5cce8__0[0x1fU] 
                                                                                << 0xcU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_h24638131__0[0x1fU] 
                                                                                << 0xaU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_h0dee3c22__0[0x1fU] 
                                                                                << 8U)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_h1028fefe__0[0x1fU] 
                                                                                << 6U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_ha38a80f4__0[0x1fU] 
                                                                                << 4U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_hd37f8f3b__0[0x1fU] 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & __Vtemp_hbb64e8a2__0[0x1fU]) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_hfd211a1f__0[0x1fU] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_hfe2eaeec__0[0x1fU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_h22c0f452__0[0x1fU] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (__Vtemp_h9cc63cfb__0[0x1fU] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (__Vtemp_h913a7916__0[0x1fU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (__Vtemp_hd93278ca__0[0x1fU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (__Vtemp_h195f9310__0[0x1fU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_h9e8d4af7__0[0x1fU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_h4376cd75__0[0x1fU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_h1792f019__0[0x1fU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_h5582e17c__0[0x1fU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_he2365794__0[0x1fU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_h0f140c13__0[0x1fU] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_h0a80788e__0[0x1fU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_hf16b78f3__0[0x20U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & __Vtemp_hb59ba3f8__0[0x20U]) 
                                                                                | (1U 
                                                                                & (__Vtemp_ha6b08b06__0[0x20U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 
        = ((6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                  >> 0x1dU)) | (0U != (0x3fffffffU 
                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h874cb99c__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h874cb99c__0[3U]) 
                          << 0xeU)) | ((0x800000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h874cb99c__1[3U]) 
                                         << 0xcU)) 
                                       | ((0x400000U 
                                           & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                               & __Vtemp_h874cb99c__2[3U]) 
                                              << 0xaU)) 
                                          | ((0x200000U 
                                              & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h874cb99c__3[3U]) 
                                                 << 8U)) 
                                             | ((0x100000U 
                                                 & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_h874cb99c__4[3U]) 
                                                    << 6U)) 
                                                | ((0x80000U 
                                                    & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_h874cb99c__5[3U]) 
                                                       << 4U)) 
                                                   | ((0x40000U 
                                                       & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                           & __Vtemp_h874cb99c__6[3U]) 
                                                          << 2U)) 
                                                      | ((0x20000U 
                                                          & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                             & __Vtemp_h874cb99c__7[3U])) 
                                                         | ((0x10000U 
                                                             & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_h874cb99c__8[3U]) 
                                                                >> 2U)) 
                                                            | ((0x8000U 
                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_h874cb99c__9[3U]) 
                                                                   >> 4U)) 
                                                               | ((0x4000U 
                                                                   & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_h874cb99c__10[3U]) 
                                                                      >> 6U)) 
                                                                  | ((0x2000U 
                                                                      & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_h874cb99c__11[3U]) 
                                                                         >> 8U)) 
                                                                     | ((0x1000U 
                                                                         & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_h874cb99c__12[3U]) 
                                                                            >> 0xaU)) 
                                                                        | ((0x800U 
                                                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__13[3U]) 
                                                                               >> 0xcU)) 
                                                                           | ((0x400U 
                                                                               & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__14[3U]) 
                                                                                >> 0xeU)) 
                                                                              | ((0x200U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__15[3U]) 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__16[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__17[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__18[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__19[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__20[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h874cb99c__21[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h874cb99c__22[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h874cb99c__23[4U])) 
                                                                                | (1U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h874cb99c__24[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h183e8778__0 = (1U & ((~ (IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
                                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                               >> 5U)));
    __PVT__round_mixed__DOT__round32__DOT__commonCase 
        = ((~ (IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
           & (0U == (0x300U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U])));
    __VdfgTmp_h29d15a15__0 = ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                              | (6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)));
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp 
        = ((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp));
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
        = (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (QData)((IData)((1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                    >> 0x17U)))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
        = (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                    >> 0x17U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])) 
                                                 >> 3U))) 
                                          & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                             >> 2U)))) 
           | (0U != (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                     & (1U | (6U & ((IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0) 
                                    << 1U))))));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1ULL | (0x7ffffffffffffffeULL & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                << 1U)))) 
           & (3ULL | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                      << 2U)));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                   >> 2U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & (1U 
                                                    | (6U 
                                                       & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                          << 1U))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                    << 1U)))) & (3U 
                                                 | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                    << 2U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])) 
                                                 >> 3U))) 
                                          & (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 3U)))) 
           | (0U != (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                & (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra));
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
        = (0xffffffffffffffULL & ((((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                    & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)) 
                                   | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                      & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound)))
                                   ? ((((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                                        & ((~ (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra)) 
                                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)))
                                        ? (~ (1ULL 
                                              | (0x7ffffffffffffffeULL 
                                                 & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                    << 1U))))
                                        : 0xffffffffffffffULL) 
                                      & (1ULL + (0x3fffffffffffffULL 
                                                 & (((0x3fffffffc0000000ULL 
                                                      & ((QData)((IData)(
                                                                         vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                                         << 0x1eU)) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])) 
                                                        >> 2U)) 
                                                    | (0x3fffffffffffffffULL 
                                                       & round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0)))))
                                   : ((0x3fffffffffffffULL 
                                       & (((~ (3ULL 
                                               | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                  << 2U))) 
                                           >> 2U) & 
                                          ((0x3fffffffc0000000ULL 
                                            & ((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                               << 0x1eU)) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])) 
                                              >> 2U)))) 
                                      | (((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                                          & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound))
                                          ? (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 1U)
                                          : 0ULL))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
        = ((((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
             & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)) 
            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
               & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound)))
            ? ((((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                 & ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra)) 
                    & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)))
                 ? (~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                            << 1U))))
                 : 0xffffffffU) & ((IData)(1U) + ((round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
                                                   >> 2U) 
                                                  | (0x3fffffffU 
                                                     & round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0))))
            : ((((~ (3U | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                           << 2U))) & round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0) 
                >> 2U) | (((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                           & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound))
                           ? (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                              >> 1U) : 0U)));
    if ((0x800000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & (0x3fffffffffffffULL 
                                     & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                        >> 1U)));
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & (0x1ffffffU & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                          >> 1U)));
    } else {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0);
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0);
    }
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, 
                                                            (0x1fffU 
                                                             & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                   >> 0x18U)))))) 
                      + (IData)((3ULL & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                         >> 0x35U)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0x1fffU 
                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                      >> 0x18U))))))) 
                      + (3U & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                               >> 0x18U))));
    vlSelf->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
               >> 8U)) & VL_LTES_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round64__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)), 0xaU)));
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
               >> 8U)) & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))));
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round32__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round64__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                  >> 9U) | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                            & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp))));
    vlSelf->__Vcellout__round_mixed__fullExceptionFlags 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__invalid_exc) 
            << 4U) | (((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                       << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                   & (VL_GTS_III(32, 0x3ceU, 
                                                 VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                                      | ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound) 
                                         & (VL_GTES_III(32, 0U, 
                                                        VL_SHIFTRS_III(32,32,32, 
                                                                       VL_EXTENDS_II(32,13, 
                                                                                (0x1fffU 
                                                                                & VL_EXTENDS_II(13,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                                >> 0x18U)))))), 0xbU)) 
                                            & ((~ (
                                                   (~ 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                      ? (IData)(
                                                                (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                                 >> 2U))
                                                      : (IData)(
                                                                (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                                 >> 1U)))) 
                                                   & (((0x800000U 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                        ? (IData)(
                                                                  (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                                   >> 0x36U))
                                                        : (IData)(
                                                                  (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                                   >> 0x35U))) 
                                                      & ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
                                                         & (((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                             & ((0x800000U 
                                                                 & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                                 ? 
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                 >> 1U))) 
                                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                               & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                    >> 0x17U) 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                      >> 2U)) 
                                                                  | (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U]))))))))) 
                                               & ((0x800000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                   ? (IData)(
                                                             (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                              >> 1U))
                                                   : (IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0))))))) 
                                  << 1U) | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                               & (VL_GTS_III(32, 0x3ceU, 
                                                             VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                                                  | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound)))))));
    vlSelf->__Vcellout__round_mixed__midExceptionFlags 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__invalid_exc) 
            << 4U) | (((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                       << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                   & (VL_GTS_III(32, 0x6bU, 
                                                 VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                                      | ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound) 
                                         & (VL_GTES_III(32, 0U, 
                                                        VL_SHIFTRS_III(32,32,32, 
                                                                       VL_EXTENDS_II(32,14, 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x3900U) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                                >> 0x18U))))))), 8U)) 
                                            & ((~ (
                                                   (~ 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                      ? 
                                                     (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                      >> 2U)
                                                      : 
                                                     (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                      >> 1U))) 
                                                   & (((0x800000U 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                        ? 
                                                       (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                        >> 0x19U)
                                                        : 
                                                       (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                        >> 0x18U)) 
                                                      & ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
                                                         & (((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                             & ((0x800000U 
                                                                 & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                                 ? 
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                 >> 0x1fU)
                                                                 : 
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                 >> 0x1eU))) 
                                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                               & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                    >> 0x17U) 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                      >> 0x1fU)) 
                                                                  | (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x7fffffffU 
                                                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])))))))))) 
                                               & ((0x800000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                   ? 
                                                  (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                   >> 1U)
                                                   : round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0)))))) 
                                  << 1U) | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                               & (VL_GTS_III(32, 0x6bU, 
                                                             VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                                                  | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound)))))));
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                  >> 9U) | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                            & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp))));
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp 
        = (0x1ffU & (((~ (((1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                   >> 8U) | VL_GTS_III(32, 0x6bU, 
                                                       VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)))))
                            ? 0x1c0U : 0U) | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                                                ? 0x194U
                                                : 0U) 
                                              | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                                   ? 0x80U
                                                   : 0U) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                     ? 0x40U
                                                     : 0U))))) 
                      & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)) 
                     | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                          ? 0x6bU : 0U) | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                             ? 0x17fU
                                             : 0U) 
                                           | (((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                ? 0x180U
                                                : 0U) 
                                              | ((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                  ? 0x1c0U
                                                  : 0U))))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isNaN 
        = (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_rebox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__rebox__0(Vtestbench_bp_be_fp_rebox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_rebox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__rebox__0\n"); );
    // Init
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__overflow;
    __PVT__round_mixed__DOT__round64__DOT__overflow = 0;
    QData/*53:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    QData/*55:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound = 0;
    QData/*53:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 = 0;
    QData/*55:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__notNaN_isSpecialInfOut;
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isSpecialInfOut = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__commonCase;
    __PVT__round_mixed__DOT__round32__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow;
    __PVT__round_mixed__DOT__round32__DOT__overflow = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut;
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut;
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut = 0;
    IData/*24:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound = 0;
    SData/*14:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp = 0;
    IData/*24:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 = 0;
    CData/*0:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0 = 0;
    CData/*2:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 = 0;
    CData/*0:0*/ __VdfgTmp_h29d15a15__0;
    __VdfgTmp_h29d15a15__0 = 0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hbb152f6e__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__1;
    VlWide<129>/*4127:0*/ __Vtemp_h5286d206__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__2;
    VlWide<129>/*4127:0*/ __Vtemp_hda3f9341__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__3;
    VlWide<129>/*4127:0*/ __Vtemp_hf1988a37__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__4;
    VlWide<129>/*4127:0*/ __Vtemp_h4f9fffbe__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__5;
    VlWide<129>/*4127:0*/ __Vtemp_h2dde8ca4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__6;
    VlWide<129>/*4127:0*/ __Vtemp_hbf599035__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__7;
    VlWide<129>/*4127:0*/ __Vtemp_h32bd205f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__8;
    VlWide<129>/*4127:0*/ __Vtemp_hd22972f2__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__9;
    VlWide<129>/*4127:0*/ __Vtemp_h5436fb3b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__10;
    VlWide<129>/*4127:0*/ __Vtemp_h74323ea4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__11;
    VlWide<129>/*4127:0*/ __Vtemp_h2af01288__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__12;
    VlWide<129>/*4127:0*/ __Vtemp_h60bd6ef7__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__13;
    VlWide<129>/*4127:0*/ __Vtemp_h2cd1f4e3__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__14;
    VlWide<129>/*4127:0*/ __Vtemp_h86bde351__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__15;
    VlWide<129>/*4127:0*/ __Vtemp_hb1dce334__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__16;
    VlWide<129>/*4127:0*/ __Vtemp_h65c90c03__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__17;
    VlWide<129>/*4127:0*/ __Vtemp_h9e73778f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__18;
    VlWide<129>/*4127:0*/ __Vtemp_h77248cb4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__19;
    VlWide<129>/*4127:0*/ __Vtemp_had14544b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__20;
    VlWide<129>/*4127:0*/ __Vtemp_ha28601fa__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__21;
    VlWide<129>/*4127:0*/ __Vtemp_h0e2c0c71__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__22;
    VlWide<129>/*4127:0*/ __Vtemp_h431f5453__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__23;
    VlWide<129>/*4127:0*/ __Vtemp_h07eee2a0__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__24;
    VlWide<129>/*4127:0*/ __Vtemp_hcc254e83__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__25;
    VlWide<129>/*4127:0*/ __Vtemp_hf2889b7f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__26;
    VlWide<129>/*4127:0*/ __Vtemp_he84d3cd0__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__27;
    VlWide<129>/*4127:0*/ __Vtemp_hb3b5ab2f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__28;
    VlWide<129>/*4127:0*/ __Vtemp_hdb434893__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__29;
    VlWide<129>/*4127:0*/ __Vtemp_hac809822__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__30;
    VlWide<129>/*4127:0*/ __Vtemp_hc52f88cc__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__31;
    VlWide<129>/*4127:0*/ __Vtemp_h4d4df8bd__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__32;
    VlWide<129>/*4127:0*/ __Vtemp_h8b3f8b8f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__33;
    VlWide<129>/*4127:0*/ __Vtemp_ha86703e4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__34;
    VlWide<129>/*4127:0*/ __Vtemp_hc4388bc5__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__35;
    VlWide<129>/*4127:0*/ __Vtemp_h182fe3a4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__36;
    VlWide<129>/*4127:0*/ __Vtemp_ha24144e0__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__37;
    VlWide<129>/*4127:0*/ __Vtemp_h6c2ba84e__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__38;
    VlWide<129>/*4127:0*/ __Vtemp_h41367fca__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__39;
    VlWide<129>/*4127:0*/ __Vtemp_h6a9a00fa__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__40;
    VlWide<129>/*4127:0*/ __Vtemp_hf8b8faf4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__41;
    VlWide<129>/*4127:0*/ __Vtemp_h8fb5dfd7__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__42;
    VlWide<129>/*4127:0*/ __Vtemp_h41e9876b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__43;
    VlWide<129>/*4127:0*/ __Vtemp_h8ac6fc4d__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__44;
    VlWide<129>/*4127:0*/ __Vtemp_h74132405__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__45;
    VlWide<129>/*4127:0*/ __Vtemp_hc51156ca__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__46;
    VlWide<129>/*4127:0*/ __Vtemp_h1e0f4a8f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__47;
    VlWide<129>/*4127:0*/ __Vtemp_ha353825d__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__48;
    VlWide<129>/*4127:0*/ __Vtemp_h2bbfae1b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__49;
    VlWide<129>/*4127:0*/ __Vtemp_h70c8f52e__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__50;
    VlWide<129>/*4127:0*/ __Vtemp_h74674017__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__51;
    VlWide<129>/*4127:0*/ __Vtemp_h88e2de02__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__52;
    VlWide<129>/*4127:0*/ __Vtemp_h6a60a552__0;
    VlWide<129>/*4127:0*/ __Vtemp_hfc98f73f__53;
    VlWide<129>/*4127:0*/ __Vtemp_h1653caac__0;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__0;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__1;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__2;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__3;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__4;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__5;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__6;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__7;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__8;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__9;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__10;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__11;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__12;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__13;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__14;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__15;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__16;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__17;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__18;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__19;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__20;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__21;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__22;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__23;
    VlWide<17>/*543:0*/ __Vtemp_h331a68a7__24;
    // Body
    round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0 
        = ((0U == (7U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r) 
                         >> 6U))) | (4U == (7U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r) 
                                                  >> 6U))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
        = ((0x7fffffeU & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                           << 3U) | (6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                                           >> 0x1dU)))) 
           | (0U != (0x3fffffffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U])));
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isSpecialInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                  >> 9U) | (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__infinite_exc)));
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut 
        = (1U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__invalid_exc) 
                 | ((~ (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__infinite_exc)) 
                    & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                       >> 0xaU))));
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp 
        = ((IData)(((0x80U == (0x1c0U & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r))) 
                    & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                       >> 5U))) | (IData)(((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                               >> 5U)) 
                                           & (0xc0U 
                                              == (0x1c0U 
                                                  & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r))))));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__0, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hbb152f6e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__0);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__1, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5286d206__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__1);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__2, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hda3f9341__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__2);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__3, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf1988a37__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__3);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__4, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h4f9fffbe__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__4);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__5, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2dde8ca4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__5);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__6, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hbf599035__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__6);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__7, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h32bd205f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__7);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__8, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd22972f2__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__8);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__9, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5436fb3b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__9);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__10, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h74323ea4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__10);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__11, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2af01288__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__11);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__12, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h60bd6ef7__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__12);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__13, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2cd1f4e3__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__13);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__14, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h86bde351__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__14);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__15, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb1dce334__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__15);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__16, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h65c90c03__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__16);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__17, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h9e73778f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__17);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__18, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h77248cb4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__18);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__19, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_had14544b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__19);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__20, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha28601fa__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__20);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__21, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0e2c0c71__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__21);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__22, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h431f5453__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__22);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__23, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h07eee2a0__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__23);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__24, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hcc254e83__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__24);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__25, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf2889b7f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__25);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__26, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he84d3cd0__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__26);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__27, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb3b5ab2f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__27);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__28, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hdb434893__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__28);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__29, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hac809822__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__29);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__30, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc52f88cc__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__30);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__31, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h4d4df8bd__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__31);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__32, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h8b3f8b8f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__32);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__33, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha86703e4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__33);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__34, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc4388bc5__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__34);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__35, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h182fe3a4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__35);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__36, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha24144e0__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__36);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__37, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6c2ba84e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__37);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__38, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h41367fca__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__38);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__39, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6a9a00fa__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__39);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__40, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf8b8faf4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__40);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__41, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h8fb5dfd7__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__41);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__42, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h41e9876b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__42);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__43, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h8ac6fc4d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__43);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__44, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h74132405__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__44);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__45, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc51156ca__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__45);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__46, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1e0f4a8f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__46);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__47, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha353825d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__47);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__48, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2bbfae1b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__48);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__49, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h70c8f52e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__49);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__50, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h74674017__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__50);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__51, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h88e2de02__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__51);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__52, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6a60a552__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__52);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hfc98f73f__53, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1653caac__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hfc98f73f__53);
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = (((QData)((IData)((1U & (__Vtemp_hbb152f6e__0[0x1eU] 
                                   >> 0xdU)))) << 0x35U) 
           | (((QData)((IData)((1U & (__Vtemp_h5286d206__0[0x1eU] 
                                      >> 0xeU)))) << 0x34U) 
              | (((QData)((IData)((1U & (__Vtemp_hda3f9341__0[0x1eU] 
                                         >> 0xfU)))) 
                  << 0x33U) | (((QData)((IData)((1U 
                                                 & (__Vtemp_hf1988a37__0[0x1eU] 
                                                    >> 0x10U)))) 
                                << 0x32U) | (((QData)((IData)(
                                                              (1U 
                                                               & (__Vtemp_h4f9fffbe__0[0x1eU] 
                                                                  >> 0x11U)))) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (__Vtemp_h2dde8ca4__0[0x1eU] 
                                                                     >> 0x12U)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (__Vtemp_hbf599035__0[0x1eU] 
                                                                        >> 0x13U)))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (__Vtemp_h32bd205f__0[0x1eU] 
                                                                           >> 0x14U)))) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (__Vtemp_hd22972f2__0[0x1eU] 
                                                                              >> 0x15U)))) 
                                                          << 0x2dU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (__Vtemp_h5436fb3b__0[0x1eU] 
                                                                                >> 0x16U)))) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h74323ea4__0[0x1eU] 
                                                                                >> 0x17U)))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h2af01288__0[0x1eU] 
                                                                                >> 0x18U)))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h60bd6ef7__0[0x1eU] 
                                                                                >> 0x19U)))) 
                                                                      << 0x29U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h2cd1f4e3__0[0x1eU] 
                                                                                >> 0x1aU)))) 
                                                                         << 0x28U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h86bde351__0[0x1eU] 
                                                                                >> 0x1bU)))) 
                                                                            << 0x27U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hb1dce334__0[0x1eU] 
                                                                                >> 0x1cU)))) 
                                                                               << 0x26U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h65c90c03__0[0x1eU] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h9e73778f__0[0x1eU] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (__Vtemp_h77248cb4__0[0x1eU] 
                                                                                >> 0x1fU))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & __Vtemp_had14544b__0[0x1fU]))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_ha28601fa__0[0x1fU] 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h0e2c0c71__0[0x1fU] 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (__Vtemp_h431f5453__0[0x1fU] 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_h07eee2a0__0[0x1fU] 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & (__Vtemp_hcc254e83__0[0x1fU] 
                                                                                << 0x18U)) 
                                                                                | ((0x10000000U 
                                                                                & (__Vtemp_hf2889b7f__0[0x1fU] 
                                                                                << 0x16U)) 
                                                                                | ((0x8000000U 
                                                                                & (__Vtemp_he84d3cd0__0[0x1fU] 
                                                                                << 0x14U)) 
                                                                                | ((0x4000000U 
                                                                                & (__Vtemp_hb3b5ab2f__0[0x1fU] 
                                                                                << 0x12U)) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_hdb434893__0[0x1fU] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_hac809822__0[0x1fU] 
                                                                                << 0xeU)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_hc52f88cc__0[0x1fU] 
                                                                                << 0xcU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_h4d4df8bd__0[0x1fU] 
                                                                                << 0xaU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_h8b3f8b8f__0[0x1fU] 
                                                                                << 8U)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_ha86703e4__0[0x1fU] 
                                                                                << 6U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_hc4388bc5__0[0x1fU] 
                                                                                << 4U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_h182fe3a4__0[0x1fU] 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & __Vtemp_ha24144e0__0[0x1fU]) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_h6c2ba84e__0[0x1fU] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_h41367fca__0[0x1fU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_h6a9a00fa__0[0x1fU] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (__Vtemp_hf8b8faf4__0[0x1fU] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (__Vtemp_h8fb5dfd7__0[0x1fU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (__Vtemp_h41e9876b__0[0x1fU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (__Vtemp_h8ac6fc4d__0[0x1fU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_h74132405__0[0x1fU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_hc51156ca__0[0x1fU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_h1e0f4a8f__0[0x1fU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_ha353825d__0[0x1fU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_h2bbfae1b__0[0x1fU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_h70c8f52e__0[0x1fU] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_h74674017__0[0x1fU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_h88e2de02__0[0x20U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & __Vtemp_h6a60a552__0[0x20U]) 
                                                                                | (1U 
                                                                                & (__Vtemp_h1653caac__0[0x20U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 
        = ((6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                  >> 0x1dU)) | (0U != (0x3fffffffU 
                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U])));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h331a68a7__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                      >> 0x18U))))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h331a68a7__0[3U]) 
                          << 0xeU)) | ((0x800000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h331a68a7__1[3U]) 
                                         << 0xcU)) 
                                       | ((0x400000U 
                                           & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                               & __Vtemp_h331a68a7__2[3U]) 
                                              << 0xaU)) 
                                          | ((0x200000U 
                                              & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h331a68a7__3[3U]) 
                                                 << 8U)) 
                                             | ((0x100000U 
                                                 & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_h331a68a7__4[3U]) 
                                                    << 6U)) 
                                                | ((0x80000U 
                                                    & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_h331a68a7__5[3U]) 
                                                       << 4U)) 
                                                   | ((0x40000U 
                                                       & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                           & __Vtemp_h331a68a7__6[3U]) 
                                                          << 2U)) 
                                                      | ((0x20000U 
                                                          & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                             & __Vtemp_h331a68a7__7[3U])) 
                                                         | ((0x10000U 
                                                             & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_h331a68a7__8[3U]) 
                                                                >> 2U)) 
                                                            | ((0x8000U 
                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_h331a68a7__9[3U]) 
                                                                   >> 4U)) 
                                                               | ((0x4000U 
                                                                   & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_h331a68a7__10[3U]) 
                                                                      >> 6U)) 
                                                                  | ((0x2000U 
                                                                      & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_h331a68a7__11[3U]) 
                                                                         >> 8U)) 
                                                                     | ((0x1000U 
                                                                         & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_h331a68a7__12[3U]) 
                                                                            >> 0xaU)) 
                                                                        | ((0x800U 
                                                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__13[3U]) 
                                                                               >> 0xcU)) 
                                                                           | ((0x400U 
                                                                               & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__14[3U]) 
                                                                                >> 0xeU)) 
                                                                              | ((0x200U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__15[3U]) 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__16[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__17[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__18[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__19[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__20[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h331a68a7__21[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h331a68a7__22[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h331a68a7__23[4U])) 
                                                                                | (1U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h331a68a7__24[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h183e8778__0 = (1U & ((~ (IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
                                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                               >> 5U)));
    __PVT__round_mixed__DOT__round32__DOT__commonCase 
        = (1U & ((~ (IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
                 & ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isSpecialInfOut)) 
                    & (~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                          >> 8U)))));
    __VdfgTmp_h29d15a15__0 = ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                              | (6U == (7U & ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r) 
                                              >> 6U))));
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp 
        = ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp));
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
        = (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (QData)((IData)((1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                    >> 0x17U)))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
        = (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                    >> 0x17U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U])) 
                                                 >> 3U))) 
                                          & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                             >> 2U)))) 
           | (0U != (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                     & (1U | (6U & ((IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0) 
                                    << 1U))))));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1ULL | (0x7ffffffffffffffeULL & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                << 1U)))) 
           & (3ULL | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                      << 2U)));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                   >> 2U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & (1U 
                                                    | (6U 
                                                       & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                          << 1U))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                    << 1U)))) & (3U 
                                                 | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                    << 2U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U])) 
                                                 >> 3U))) 
                                          & (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 3U)))) 
           | (0U != (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                & (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra));
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
        = (0xffffffffffffffULL & ((((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                    & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)) 
                                   | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                      & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound)))
                                   ? (((IData)((((0U 
                                                  == 
                                                  (0x1c0U 
                                                   & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r))) 
                                                 & (~ (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra))) 
                                                & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)))
                                        ? (~ (1ULL 
                                              | (0x7ffffffffffffffeULL 
                                                 & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                    << 1U))))
                                        : 0xffffffffffffffULL) 
                                      & (1ULL + (0x3fffffffffffffULL 
                                                 & (((0x3fffffffc0000000ULL 
                                                      & ((QData)((IData)(
                                                                         vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])) 
                                                         << 0x1eU)) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U])) 
                                                        >> 2U)) 
                                                    | (0x3fffffffffffffffULL 
                                                       & round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0)))))
                                   : ((0x3fffffffffffffULL 
                                       & (((~ (3ULL 
                                               | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                  << 2U))) 
                                           >> 2U) & 
                                          ((0x3fffffffc0000000ULL 
                                            & ((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])) 
                                               << 0x1eU)) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U])) 
                                              >> 2U)))) 
                                      | ((IData)(((0x180U 
                                                   == 
                                                   (0x1c0U 
                                                    & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r))) 
                                                  & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound)))
                                          ? (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 1U)
                                          : 0ULL))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
        = ((((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
             & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)) 
            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
               & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound)))
            ? (((IData)((((0U == (0x1c0U & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r))) 
                          & (~ (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra))) 
                         & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)))
                 ? (~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                            << 1U))))
                 : 0xffffffffU) & ((IData)(1U) + ((round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
                                                   >> 2U) 
                                                  | (0x3fffffffU 
                                                     & round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0))))
            : ((((~ (3U | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                           << 2U))) & round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0) 
                >> 2U) | ((IData)(((0x180U == (0x1c0U 
                                               & (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fwb_reg__DOT__data_r))) 
                                   & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound)))
                           ? (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                              >> 1U) : 0U)));
    if ((0x800000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])) {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & (0x3fffffffffffffULL 
                                     & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                        >> 1U)));
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & (0x1ffffffU & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                          >> 1U)));
    } else {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0);
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0);
    }
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, 
                                                            (0x1fffU 
                                                             & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                                   >> 0x18U)))))) 
                      + (IData)((3ULL & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                         >> 0x35U)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0x1fffU 
                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                                      >> 0x18U))))))) 
                      + (3U & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                               >> 0x18U))));
    vlSelf->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
               >> 8U)) & VL_LTES_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round64__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)), 0xaU)));
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
               >> 8U)) & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))));
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round32__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round64__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
              & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)));
    vlSelf->__Vcellout__round_mixed__fullExceptionFlags 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__invalid_exc) 
            << 4U) | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__infinite_exc) 
                       << 3U) | (((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                                  << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                              & (VL_GTS_III(32, 0x3ceU, 
                                                            VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound) 
                                                    & (VL_GTES_III(32, 0U, 
                                                                   VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,13, 
                                                                                (0x1fffU 
                                                                                & VL_EXTENDS_II(13,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                                                >> 0x18U)))))), 0xbU)) 
                                                       & ((~ 
                                                           ((~ 
                                                             ((0x800000U 
                                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])
                                                               ? (IData)(
                                                                         (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                                          >> 2U))
                                                               : (IData)(
                                                                         (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                                          >> 1U)))) 
                                                            & (((0x800000U 
                                                                 & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])
                                                                 ? (IData)(
                                                                           (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                                            >> 0x36U))
                                                                 : (IData)(
                                                                           (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                                            >> 0x35U))) 
                                                               & ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
                                                                  & (((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                                      & ((0x800000U 
                                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])
                                                                          ? 
                                                                         (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                                                                          >> 2U)
                                                                          : 
                                                                         (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                                                                          >> 1U))) 
                                                                     | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                                        & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                                             >> 0x17U) 
                                                                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                                                                               >> 2U)) 
                                                                           | (0U 
                                                                              != 
                                                                              (3U 
                                                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U]))))))))) 
                                                          & ((0x800000U 
                                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])
                                                              ? (IData)(
                                                                        (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                                         >> 1U))
                                                              : (IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0))))))) 
                                             << 1U) 
                                            | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                                               | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x3ceU, 
                                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound))))))));
    vlSelf->__Vcellout__round_mixed__midExceptionFlags 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__invalid_exc) 
            << 4U) | (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__infinite_exc) 
                       << 3U) | (((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                                  << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                              & (VL_GTS_III(32, 0x6bU, 
                                                            VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound) 
                                                    & (VL_GTES_III(32, 0U, 
                                                                   VL_SHIFTRS_III(32,32,32, 
                                                                                VL_EXTENDS_II(32,14, 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x3900U) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                                                >> 0x18U))))))), 8U)) 
                                                       & ((~ 
                                                           ((~ 
                                                             ((0x800000U 
                                                               & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])
                                                               ? 
                                                              (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                               >> 2U)
                                                               : 
                                                              (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                               >> 1U))) 
                                                            & (((0x800000U 
                                                                 & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])
                                                                 ? 
                                                                (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                                 >> 0x19U)
                                                                 : 
                                                                (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                                 >> 0x18U)) 
                                                               & ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
                                                                  & (((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                                      & ((0x800000U 
                                                                          & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])
                                                                          ? 
                                                                         (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                                                                          >> 0x1fU)
                                                                          : 
                                                                         (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                                                                          >> 0x1eU))) 
                                                                     | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                                        & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U] 
                                                                             >> 0x17U) 
                                                                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U] 
                                                                               >> 0x1fU)) 
                                                                           | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fffffffU 
                                                                                & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[0U])))))))))) 
                                                          & ((0x800000U 
                                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[1U])
                                                              ? 
                                                             (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                              >> 1U)
                                                              : round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0)))))) 
                                             << 1U) 
                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                                               | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                                  & (VL_GTS_III(32, 0x6bU, 
                                                                VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                                                     | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound))))))));
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isSpecialInfOut) 
           | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
              & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)));
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp 
        = (0x1ffU & (((~ (((1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__0__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT__fdivsqrt_raw_lo[2U] 
                                   >> 8U) | VL_GTS_III(32, 0x6bU, 
                                                       VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)))))
                            ? 0x1c0U : 0U) | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                                                ? 0x194U
                                                : 0U) 
                                              | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                                   ? 0x80U
                                                   : 0U) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                     ? 0x40U
                                                     : 0U))))) 
                      & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)) 
                     | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                          ? 0x6bU : 0U) | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                             ? 0x17fU
                                             : 0U) 
                                           | (((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                ? 0x180U
                                                : 0U) 
                                              | ((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                  ? 0x1c0U
                                                  : 0U))))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isNaN 
        = (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_rebox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox__0(Vtestbench_bp_be_fp_rebox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_rebox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox__0\n"); );
    // Init
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__overflow;
    __PVT__round_mixed__DOT__round64__DOT__overflow = 0;
    QData/*53:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    QData/*55:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound = 0;
    QData/*53:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 = 0;
    QData/*55:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__commonCase;
    __PVT__round_mixed__DOT__round32__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow;
    __PVT__round_mixed__DOT__round32__DOT__overflow = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut;
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut;
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut = 0;
    IData/*24:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound = 0;
    SData/*14:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp = 0;
    IData/*24:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 = 0;
    CData/*2:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 = 0;
    CData/*0:0*/ __VdfgTmp_h29d15a15__0;
    __VdfgTmp_h29d15a15__0 = 0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__0;
    VlWide<129>/*4127:0*/ __Vtemp_h0f186477__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__1;
    VlWide<129>/*4127:0*/ __Vtemp_h638a242a__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__2;
    VlWide<129>/*4127:0*/ __Vtemp_h6dd1c538__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__3;
    VlWide<129>/*4127:0*/ __Vtemp_h6f15130d__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__4;
    VlWide<129>/*4127:0*/ __Vtemp_hf28e170e__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__5;
    VlWide<129>/*4127:0*/ __Vtemp_h19f7e291__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__6;
    VlWide<129>/*4127:0*/ __Vtemp_hba92f8a5__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__7;
    VlWide<129>/*4127:0*/ __Vtemp_hd649479e__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__8;
    VlWide<129>/*4127:0*/ __Vtemp_h212f7f37__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__9;
    VlWide<129>/*4127:0*/ __Vtemp_h77afc663__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__10;
    VlWide<129>/*4127:0*/ __Vtemp_h58d2c66d__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__11;
    VlWide<129>/*4127:0*/ __Vtemp_hae7b1041__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__12;
    VlWide<129>/*4127:0*/ __Vtemp_h0cea21b3__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__13;
    VlWide<129>/*4127:0*/ __Vtemp_h421eb268__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__14;
    VlWide<129>/*4127:0*/ __Vtemp_h274ca298__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__15;
    VlWide<129>/*4127:0*/ __Vtemp_h0f7bf450__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__16;
    VlWide<129>/*4127:0*/ __Vtemp_h5aa76131__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__17;
    VlWide<129>/*4127:0*/ __Vtemp_h429dc5f0__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__18;
    VlWide<129>/*4127:0*/ __Vtemp_h29a418a9__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__19;
    VlWide<129>/*4127:0*/ __Vtemp_h02ac15cb__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__20;
    VlWide<129>/*4127:0*/ __Vtemp_h041a2c03__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__21;
    VlWide<129>/*4127:0*/ __Vtemp_h7722dca3__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__22;
    VlWide<129>/*4127:0*/ __Vtemp_h1ecf5d2d__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__23;
    VlWide<129>/*4127:0*/ __Vtemp_hb5cb1be9__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__24;
    VlWide<129>/*4127:0*/ __Vtemp_h7e64e598__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__25;
    VlWide<129>/*4127:0*/ __Vtemp_h3a16afd4__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__26;
    VlWide<129>/*4127:0*/ __Vtemp_hd6443238__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__27;
    VlWide<129>/*4127:0*/ __Vtemp_h411e3ddd__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__28;
    VlWide<129>/*4127:0*/ __Vtemp_h76c50b1a__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__29;
    VlWide<129>/*4127:0*/ __Vtemp_h7ebe49d9__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__30;
    VlWide<129>/*4127:0*/ __Vtemp_h6ad6dbac__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__31;
    VlWide<129>/*4127:0*/ __Vtemp_h1dcffe66__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__32;
    VlWide<129>/*4127:0*/ __Vtemp_h5b48aa74__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__33;
    VlWide<129>/*4127:0*/ __Vtemp_h29f6565d__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__34;
    VlWide<129>/*4127:0*/ __Vtemp_h48126d12__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__35;
    VlWide<129>/*4127:0*/ __Vtemp_hc88e0181__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__36;
    VlWide<129>/*4127:0*/ __Vtemp_h32350799__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__37;
    VlWide<129>/*4127:0*/ __Vtemp_h463fcb88__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__38;
    VlWide<129>/*4127:0*/ __Vtemp_h8c943f7c__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__39;
    VlWide<129>/*4127:0*/ __Vtemp_h5e343b9d__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__40;
    VlWide<129>/*4127:0*/ __Vtemp_h1e8d9cfc__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__41;
    VlWide<129>/*4127:0*/ __Vtemp_hb9286af9__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__42;
    VlWide<129>/*4127:0*/ __Vtemp_h5379d0f2__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__43;
    VlWide<129>/*4127:0*/ __Vtemp_h94cdfe69__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__44;
    VlWide<129>/*4127:0*/ __Vtemp_h2678de3e__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__45;
    VlWide<129>/*4127:0*/ __Vtemp_h494a6b01__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__46;
    VlWide<129>/*4127:0*/ __Vtemp_h53d66aa9__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__47;
    VlWide<129>/*4127:0*/ __Vtemp_hb74df25c__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__48;
    VlWide<129>/*4127:0*/ __Vtemp_hf472c6ae__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__49;
    VlWide<129>/*4127:0*/ __Vtemp_h1088e66d__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__50;
    VlWide<129>/*4127:0*/ __Vtemp_habbd9cfc__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__51;
    VlWide<129>/*4127:0*/ __Vtemp_h56368959__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__52;
    VlWide<129>/*4127:0*/ __Vtemp_h5d3b6a03__0;
    VlWide<129>/*4127:0*/ __Vtemp_h1b319ad7__53;
    VlWide<129>/*4127:0*/ __Vtemp_hf8c89ded__0;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__0;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__1;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__2;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__3;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__4;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__5;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__6;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__7;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__8;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__9;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__10;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__11;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__12;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__13;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__14;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__15;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__16;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__17;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__18;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__19;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__20;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__21;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__22;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__23;
    VlWide<17>/*543:0*/ __Vtemp_h53ac152f__24;
    // Body
    vlSelf->__VdfgTmp_h183e8778__0 = (IData)((0x20U 
                                              == (0x420U 
                                                  & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])));
    __PVT__round_mixed__DOT__round32__DOT__commonCase 
        = (IData)((0U == (0x700U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])));
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
        = ((0x7fffffeU & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                           << 3U) | (6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                           >> 0x1dU)))) 
           | (0U != (0x3fffffffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])));
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp 
        = (((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
               >> 5U)) | ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                              >> 5U)) & (3U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode))));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__0, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0f186477__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__0);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__1, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h638a242a__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__1);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__2, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6dd1c538__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__2);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__3, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6f15130d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__3);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__4, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf28e170e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__4);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__5, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h19f7e291__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__5);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__6, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hba92f8a5__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__6);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__7, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd649479e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__7);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__8, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h212f7f37__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__8);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__9, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h77afc663__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__9);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__10, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h58d2c66d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__10);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__11, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hae7b1041__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__11);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__12, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0cea21b3__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__12);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__13, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h421eb268__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__13);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__14, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h274ca298__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__14);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__15, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0f7bf450__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__15);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__16, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5aa76131__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__16);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__17, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h429dc5f0__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__17);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__18, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h29a418a9__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__18);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__19, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h02ac15cb__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__19);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__20, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h041a2c03__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__20);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__21, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7722dca3__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__21);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__22, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1ecf5d2d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__22);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__23, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb5cb1be9__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__23);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__24, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7e64e598__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__24);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__25, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h3a16afd4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__25);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__26, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd6443238__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__26);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__27, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h411e3ddd__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__27);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__28, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h76c50b1a__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__28);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__29, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7ebe49d9__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__29);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__30, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6ad6dbac__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__30);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__31, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1dcffe66__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__31);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__32, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5b48aa74__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__32);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__33, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h29f6565d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__33);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__34, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h48126d12__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__34);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__35, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc88e0181__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__35);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__36, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h32350799__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__36);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__37, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h463fcb88__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__37);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__38, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h8c943f7c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__38);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__39, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5e343b9d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__39);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__40, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1e8d9cfc__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__40);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__41, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb9286af9__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__41);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__42, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5379d0f2__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__42);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__43, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h94cdfe69__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__43);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__44, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2678de3e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__44);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__45, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h494a6b01__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__45);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__46, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h53d66aa9__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__46);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__47, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb74df25c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__47);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__48, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf472c6ae__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__48);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__49, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1088e66d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__49);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__50, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_habbd9cfc__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__50);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__51, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h56368959__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__51);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__52, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5d3b6a03__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__52);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_h1b319ad7__53, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf8c89ded__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_h1b319ad7__53);
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = (((QData)((IData)((1U & (__Vtemp_h0f186477__0[0x1eU] 
                                   >> 0xdU)))) << 0x35U) 
           | (((QData)((IData)((1U & (__Vtemp_h638a242a__0[0x1eU] 
                                      >> 0xeU)))) << 0x34U) 
              | (((QData)((IData)((1U & (__Vtemp_h6dd1c538__0[0x1eU] 
                                         >> 0xfU)))) 
                  << 0x33U) | (((QData)((IData)((1U 
                                                 & (__Vtemp_h6f15130d__0[0x1eU] 
                                                    >> 0x10U)))) 
                                << 0x32U) | (((QData)((IData)(
                                                              (1U 
                                                               & (__Vtemp_hf28e170e__0[0x1eU] 
                                                                  >> 0x11U)))) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (__Vtemp_h19f7e291__0[0x1eU] 
                                                                     >> 0x12U)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (__Vtemp_hba92f8a5__0[0x1eU] 
                                                                        >> 0x13U)))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (__Vtemp_hd649479e__0[0x1eU] 
                                                                           >> 0x14U)))) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (__Vtemp_h212f7f37__0[0x1eU] 
                                                                              >> 0x15U)))) 
                                                          << 0x2dU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (__Vtemp_h77afc663__0[0x1eU] 
                                                                                >> 0x16U)))) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h58d2c66d__0[0x1eU] 
                                                                                >> 0x17U)))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hae7b1041__0[0x1eU] 
                                                                                >> 0x18U)))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h0cea21b3__0[0x1eU] 
                                                                                >> 0x19U)))) 
                                                                      << 0x29U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h421eb268__0[0x1eU] 
                                                                                >> 0x1aU)))) 
                                                                         << 0x28U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h274ca298__0[0x1eU] 
                                                                                >> 0x1bU)))) 
                                                                            << 0x27U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h0f7bf450__0[0x1eU] 
                                                                                >> 0x1cU)))) 
                                                                               << 0x26U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h5aa76131__0[0x1eU] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h429dc5f0__0[0x1eU] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (__Vtemp_h29a418a9__0[0x1eU] 
                                                                                >> 0x1fU))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & __Vtemp_h02ac15cb__0[0x1fU]))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h041a2c03__0[0x1fU] 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h7722dca3__0[0x1fU] 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (__Vtemp_h1ecf5d2d__0[0x1fU] 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_hb5cb1be9__0[0x1fU] 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & (__Vtemp_h7e64e598__0[0x1fU] 
                                                                                << 0x18U)) 
                                                                                | ((0x10000000U 
                                                                                & (__Vtemp_h3a16afd4__0[0x1fU] 
                                                                                << 0x16U)) 
                                                                                | ((0x8000000U 
                                                                                & (__Vtemp_hd6443238__0[0x1fU] 
                                                                                << 0x14U)) 
                                                                                | ((0x4000000U 
                                                                                & (__Vtemp_h411e3ddd__0[0x1fU] 
                                                                                << 0x12U)) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_h76c50b1a__0[0x1fU] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_h7ebe49d9__0[0x1fU] 
                                                                                << 0xeU)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_h6ad6dbac__0[0x1fU] 
                                                                                << 0xcU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_h1dcffe66__0[0x1fU] 
                                                                                << 0xaU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_h5b48aa74__0[0x1fU] 
                                                                                << 8U)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_h29f6565d__0[0x1fU] 
                                                                                << 6U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_h48126d12__0[0x1fU] 
                                                                                << 4U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_hc88e0181__0[0x1fU] 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & __Vtemp_h32350799__0[0x1fU]) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_h463fcb88__0[0x1fU] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_h8c943f7c__0[0x1fU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_h5e343b9d__0[0x1fU] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (__Vtemp_h1e8d9cfc__0[0x1fU] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (__Vtemp_hb9286af9__0[0x1fU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (__Vtemp_h5379d0f2__0[0x1fU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (__Vtemp_h94cdfe69__0[0x1fU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_h2678de3e__0[0x1fU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_h494a6b01__0[0x1fU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_h53d66aa9__0[0x1fU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_hb74df25c__0[0x1fU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_hf472c6ae__0[0x1fU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_h1088e66d__0[0x1fU] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_habbd9cfc__0[0x1fU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_h56368959__0[0x20U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & __Vtemp_h5d3b6a03__0[0x20U]) 
                                                                                | (1U 
                                                                                & (__Vtemp_hf8c89ded__0[0x20U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 
        = ((6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                  >> 0x1dU)) | (0U != (0x3fffffffU 
                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h53ac152f__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                      >> 0x18U))))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h53ac152f__0[3U]) 
                          << 0xeU)) | ((0x800000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h53ac152f__1[3U]) 
                                         << 0xcU)) 
                                       | ((0x400000U 
                                           & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                               & __Vtemp_h53ac152f__2[3U]) 
                                              << 0xaU)) 
                                          | ((0x200000U 
                                              & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h53ac152f__3[3U]) 
                                                 << 8U)) 
                                             | ((0x100000U 
                                                 & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_h53ac152f__4[3U]) 
                                                    << 6U)) 
                                                | ((0x80000U 
                                                    & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_h53ac152f__5[3U]) 
                                                       << 4U)) 
                                                   | ((0x40000U 
                                                       & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                           & __Vtemp_h53ac152f__6[3U]) 
                                                          << 2U)) 
                                                      | ((0x20000U 
                                                          & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                             & __Vtemp_h53ac152f__7[3U])) 
                                                         | ((0x10000U 
                                                             & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_h53ac152f__8[3U]) 
                                                                >> 2U)) 
                                                            | ((0x8000U 
                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_h53ac152f__9[3U]) 
                                                                   >> 4U)) 
                                                               | ((0x4000U 
                                                                   & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_h53ac152f__10[3U]) 
                                                                      >> 6U)) 
                                                                  | ((0x2000U 
                                                                      & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_h53ac152f__11[3U]) 
                                                                         >> 8U)) 
                                                                     | ((0x1000U 
                                                                         & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_h53ac152f__12[3U]) 
                                                                            >> 0xaU)) 
                                                                        | ((0x800U 
                                                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__13[3U]) 
                                                                               >> 0xcU)) 
                                                                           | ((0x400U 
                                                                               & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__14[3U]) 
                                                                                >> 0xeU)) 
                                                                              | ((0x200U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__15[3U]) 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__16[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__17[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__18[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__19[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__20[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h53ac152f__21[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h53ac152f__22[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h53ac152f__23[4U])) 
                                                                                | (1U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h53ac152f__24[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    __VdfgTmp_h29d15a15__0 = ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                              | (6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)));
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp 
        = ((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp));
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
        = (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (QData)((IData)((1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                    >> 0x17U)))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
        = (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                    >> 0x17U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])) 
                                                 >> 3U))) 
                                          & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                             >> 2U)))) 
           | (0U != (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                     & (1U | (6U & ((IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0) 
                                    << 1U))))));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1ULL | (0x7ffffffffffffffeULL & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                << 1U)))) 
           & (3ULL | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                      << 2U)));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                   >> 2U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & (1U 
                                                    | (6U 
                                                       & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                          << 1U))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                    << 1U)))) & (3U 
                                                 | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                    << 2U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])) 
                                                 >> 3U))) 
                                          & (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 3U)))) 
           | (0U != (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                & (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra));
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
        = (0xffffffffffffffULL & ((((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                    & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)) 
                                   | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                      & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound)))
                                   ? ((((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                                        & ((~ (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra)) 
                                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)))
                                        ? (~ (1ULL 
                                              | (0x7ffffffffffffffeULL 
                                                 & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                    << 1U))))
                                        : 0xffffffffffffffULL) 
                                      & (1ULL + (0x3fffffffffffffULL 
                                                 & (((0x3fffffffc0000000ULL 
                                                      & ((QData)((IData)(
                                                                         vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                                         << 0x1eU)) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])) 
                                                        >> 2U)) 
                                                    | (0x3fffffffffffffffULL 
                                                       & round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0)))))
                                   : ((0x3fffffffffffffULL 
                                       & (((~ (3ULL 
                                               | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                  << 2U))) 
                                           >> 2U) & 
                                          ((0x3fffffffc0000000ULL 
                                            & ((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) 
                                               << 0x1eU)) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])) 
                                              >> 2U)))) 
                                      | (((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                                          & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound))
                                          ? (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 1U)
                                          : 0ULL))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
        = ((((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
             & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)) 
            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
               & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound)))
            ? ((((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                 & ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra)) 
                    & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)))
                 ? (~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                            << 1U))))
                 : 0xffffffffU) & ((IData)(1U) + ((round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
                                                   >> 2U) 
                                                  | (0x3fffffffU 
                                                     & round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0))))
            : ((((~ (3U | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                           << 2U))) & round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0) 
                >> 2U) | (((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                           & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound))
                           ? (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                              >> 1U) : 0U)));
    if ((0x800000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])) {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & (0x3fffffffffffffULL 
                                     & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                        >> 1U)));
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & (0x1ffffffU & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                          >> 1U)));
    } else {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0);
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0);
    }
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, 
                                                            (0x1fffU 
                                                             & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                                   >> 0x18U)))))) 
                      + (IData)((3ULL & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                         >> 0x35U)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0x1fffU 
                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                                      >> 0x18U))))))) 
                      + (3U & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                               >> 0x18U))));
    vlSelf->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
               >> 8U)) & VL_LTES_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round64__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)), 0xaU)));
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
               >> 8U)) & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))));
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round32__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round64__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                  >> 9U) | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                            & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp))));
    vlSelf->__Vcellout__round_mixed__fullExceptionFlags 
        = (((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
            << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                        & (VL_GTS_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                           | ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound) 
                              & (VL_GTES_III(32, 0U, 
                                             VL_SHIFTRS_III(32,32,32, 
                                                            VL_EXTENDS_II(32,13, 
                                                                          (0x1fffU 
                                                                           & VL_EXTENDS_II(13,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                                                >> 0x18U)))))), 0xbU)) 
                                 & ((~ ((~ ((0x800000U 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                             ? (IData)(
                                                       (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                        >> 2U))
                                             : (IData)(
                                                       (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                        >> 1U)))) 
                                        & (((0x800000U 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                             ? (IData)(
                                                       (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                        >> 0x36U))
                                             : (IData)(
                                                       (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                        >> 0x35U))) 
                                           & ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
                                              & (((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                  & ((0x800000U 
                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                                      ? 
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                      >> 2U)
                                                      : 
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                      >> 1U))) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                    & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                         >> 0x17U) 
                                                        & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                           >> 2U)) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U]))))))))) 
                                    & ((0x800000U & 
                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                        ? (IData)((round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                   >> 1U))
                                        : (IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0))))))) 
                       << 1U) | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                    & (VL_GTS_III(32, 0x3ceU, 
                                                  VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                                       | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound))))));
    vlSelf->__Vcellout__round_mixed__midExceptionFlags 
        = (((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
            << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                        & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                           | ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound) 
                              & (VL_GTES_III(32, 0U, 
                                             VL_SHIFTRS_III(32,32,32, 
                                                            VL_EXTENDS_II(32,14, 
                                                                          (0x3fffU 
                                                                           & ((IData)(0x3900U) 
                                                                              + 
                                                                              VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                                                >> 0x18U))))))), 8U)) 
                                 & ((~ ((~ ((0x800000U 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                             ? (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                >> 2U)
                                             : (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                >> 1U))) 
                                        & (((0x800000U 
                                             & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                             ? (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                >> 0x19U)
                                             : (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                >> 0x18U)) 
                                           & ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
                                              & (((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                  & ((0x800000U 
                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                                      ? 
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                      >> 0x1fU)
                                                      : 
                                                     (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                      >> 0x1eU))) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                    & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U] 
                                                         >> 0x17U) 
                                                        & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U] 
                                                           >> 0x1fU)) 
                                                       | (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7fffffffU 
                                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[0U])))))))))) 
                                    & ((0x800000U & 
                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[1U])
                                        ? (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                           >> 1U) : round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0)))))) 
                       << 1U) | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                    & (VL_GTS_III(32, 0x6bU, 
                                                  VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                                       | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound))))));
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                  >> 9U) | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                            & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp))));
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp 
        = (0x1ffU & (((~ (((1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U] 
                                   >> 8U) | VL_GTS_III(32, 0x6bU, 
                                                       VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)))))
                            ? 0x1c0U : 0U) | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                                                ? 0x194U
                                                : 0U) 
                                              | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                                   ? 0x80U
                                                   : 0U) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                     ? 0x40U
                                                     : 0U))))) 
                      & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)) 
                     | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                          ? 0x6bU : 0U) | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                             ? 0x17fU
                                             : 0U) 
                                           | (((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                ? 0x180U
                                                : 0U) 
                                              | ((0x400U 
                                                  & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__raw_result[2U])
                                                  ? 0x1c0U
                                                  : 0U))))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isNaN 
        = (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_rebox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox__0(Vtestbench_bp_be_fp_rebox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_rebox__Bz1___nba_sequent__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_aux__DOT__rebox__0\n"); );
    // Body
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0 
        = ((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
           | (4U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)));
}

VL_INLINE_OPT void Vtestbench_bp_be_fp_rebox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox__0(Vtestbench_bp_be_fp_rebox__Bz1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                                Vtestbench_bp_be_fp_rebox__Bz1___act_comb__TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__rebox__0\n"); );
    // Init
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__overflow;
    __PVT__round_mixed__DOT__round64__DOT__overflow = 0;
    QData/*53:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    QData/*55:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound = 0;
    QData/*53:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 = 0;
    QData/*55:0*/ round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0;
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__commonCase;
    __PVT__round_mixed__DOT__round32__DOT__commonCase = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow;
    __PVT__round_mixed__DOT__round32__DOT__overflow = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp;
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut;
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut;
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut = 0;
    IData/*24:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main = 0;
    IData/*26:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra = 0;
    CData/*0:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound = 0;
    SData/*14:0*/ __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp;
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp = 0;
    IData/*24:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 = 0;
    CData/*2:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 = 0;
    IData/*31:0*/ round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0;
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 = 0;
    CData/*0:0*/ __VdfgTmp_h29d15a15__0;
    __VdfgTmp_h29d15a15__0 = 0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__0;
    VlWide<129>/*4127:0*/ __Vtemp_ha1a52d3b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__1;
    VlWide<129>/*4127:0*/ __Vtemp_h67411a7c__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__2;
    VlWide<129>/*4127:0*/ __Vtemp_hf301e58a__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__3;
    VlWide<129>/*4127:0*/ __Vtemp_h2ea4091b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__4;
    VlWide<129>/*4127:0*/ __Vtemp_hf5a88d28__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__5;
    VlWide<129>/*4127:0*/ __Vtemp_h1d928cd1__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__6;
    VlWide<129>/*4127:0*/ __Vtemp_h625d6c4b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__7;
    VlWide<129>/*4127:0*/ __Vtemp_hf6285edc__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__8;
    VlWide<129>/*4127:0*/ __Vtemp_haa8df6bb__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__9;
    VlWide<129>/*4127:0*/ __Vtemp_h516c155a__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__10;
    VlWide<129>/*4127:0*/ __Vtemp_h319e772d__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__11;
    VlWide<129>/*4127:0*/ __Vtemp_h20481871__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__12;
    VlWide<129>/*4127:0*/ __Vtemp_hd4f89345__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__13;
    VlWide<129>/*4127:0*/ __Vtemp_h95bdf64b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__14;
    VlWide<129>/*4127:0*/ __Vtemp_he0515d1c__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__15;
    VlWide<129>/*4127:0*/ __Vtemp_hcf1b2e42__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__16;
    VlWide<129>/*4127:0*/ __Vtemp_h938db664__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__17;
    VlWide<129>/*4127:0*/ __Vtemp_hb6957952__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__18;
    VlWide<129>/*4127:0*/ __Vtemp_h18a3d791__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__19;
    VlWide<129>/*4127:0*/ __Vtemp_he7bfe63e__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__20;
    VlWide<129>/*4127:0*/ __Vtemp_h3e7c0ab0__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__21;
    VlWide<129>/*4127:0*/ __Vtemp_hf8776d61__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__22;
    VlWide<129>/*4127:0*/ __Vtemp_h4db40b53__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__23;
    VlWide<129>/*4127:0*/ __Vtemp_h42a3a20f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__24;
    VlWide<129>/*4127:0*/ __Vtemp_h89308890__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__25;
    VlWide<129>/*4127:0*/ __Vtemp_h1baa3128__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__26;
    VlWide<129>/*4127:0*/ __Vtemp_h05da1b7f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__27;
    VlWide<129>/*4127:0*/ __Vtemp_h578d2181__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__28;
    VlWide<129>/*4127:0*/ __Vtemp_h50d07c29__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__29;
    VlWide<129>/*4127:0*/ __Vtemp_hd43d439a__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__30;
    VlWide<129>/*4127:0*/ __Vtemp_h7e7f2831__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__31;
    VlWide<129>/*4127:0*/ __Vtemp_hd8c97d2c__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__32;
    VlWide<129>/*4127:0*/ __Vtemp_h1a943940__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__33;
    VlWide<129>/*4127:0*/ __Vtemp_hfccff21b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__34;
    VlWide<129>/*4127:0*/ __Vtemp_hd0fc942c__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__35;
    VlWide<129>/*4127:0*/ __Vtemp_h4f8f3760__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__36;
    VlWide<129>/*4127:0*/ __Vtemp_h545922f0__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__37;
    VlWide<129>/*4127:0*/ __Vtemp_he1dcbcc7__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__38;
    VlWide<129>/*4127:0*/ __Vtemp_h4b079508__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__39;
    VlWide<129>/*4127:0*/ __Vtemp_h5518e0bf__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__40;
    VlWide<129>/*4127:0*/ __Vtemp_h3ddf8f17__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__41;
    VlWide<129>/*4127:0*/ __Vtemp_h7dc0b7e3__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__42;
    VlWide<129>/*4127:0*/ __Vtemp_hb750d4e4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__43;
    VlWide<129>/*4127:0*/ __Vtemp_h0ac03a47__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__44;
    VlWide<129>/*4127:0*/ __Vtemp_h10b24289__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__45;
    VlWide<129>/*4127:0*/ __Vtemp_h7e842221__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__46;
    VlWide<129>/*4127:0*/ __Vtemp_h730046e4__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__47;
    VlWide<129>/*4127:0*/ __Vtemp_h478d1185__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__48;
    VlWide<129>/*4127:0*/ __Vtemp_he74fe26e__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__49;
    VlWide<129>/*4127:0*/ __Vtemp_ha03b957f__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__50;
    VlWide<129>/*4127:0*/ __Vtemp_h6ab47688__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__51;
    VlWide<129>/*4127:0*/ __Vtemp_h2d18e8c0__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__52;
    VlWide<129>/*4127:0*/ __Vtemp_hc4fe041b__0;
    VlWide<129>/*4127:0*/ __Vtemp_hf8ab3e5f__53;
    VlWide<129>/*4127:0*/ __Vtemp_h068cc932__0;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__0;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__1;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__2;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__3;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__4;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__5;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__6;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__7;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__8;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__9;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__10;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__11;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__12;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__13;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__14;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__15;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__16;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__17;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__18;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__19;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__20;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__21;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__22;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__23;
    VlWide<17>/*543:0*/ __Vtemp_h202a967f__24;
    // Body
    round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
        = ((0x7fffffeU & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                           << 3U) | (6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                           >> 0x1dU)))) 
           | (0U != (0x3fffffffU & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])));
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut 
        = ((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__invalid_exc) 
           | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
              >> 0xaU));
    __PVT__round_mixed__DOT__round32__DOT__roundMagUp 
        = (((2U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
               >> 5U)) | ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                              >> 5U)) & (3U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode))));
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__0, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha1a52d3b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__0);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__1, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h67411a7c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__1);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__2, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf301e58a__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__2);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__3, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2ea4091b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__3);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__4, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf5a88d28__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__4);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__5, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1d928cd1__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__5);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__6, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h625d6c4b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__6);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__7, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf6285edc__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__7);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__8, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_haa8df6bb__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__8);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__9, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h516c155a__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__9);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__10, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h319e772d__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__10);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__11, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h20481871__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__11);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__12, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd4f89345__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__12);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__13, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h95bdf64b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__13);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__14, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he0515d1c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__14);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__15, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hcf1b2e42__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__15);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__16, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h938db664__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__16);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__17, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb6957952__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__17);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__18, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h18a3d791__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__18);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__19, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he7bfe63e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__19);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__20, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h3e7c0ab0__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__20);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__21, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hf8776d61__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__21);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__22, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h4db40b53__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__22);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__23, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h42a3a20f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__23);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__24, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h89308890__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__24);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__25, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1baa3128__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__25);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__26, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h05da1b7f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__26);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__27, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h578d2181__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__27);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__28, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h50d07c29__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__28);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__29, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd43d439a__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__29);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__30, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7e7f2831__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__30);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__31, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd8c97d2c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__31);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__32, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h1a943940__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__32);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__33, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hfccff21b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__33);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__34, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hd0fc942c__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__34);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__35, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h4f8f3760__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__35);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__36, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h545922f0__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__36);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__37, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he1dcbcc7__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__37);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__38, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h4b079508__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__38);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__39, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h5518e0bf__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__39);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__40, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h3ddf8f17__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__40);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__41, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7dc0b7e3__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__41);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__42, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hb750d4e4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__42);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__43, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h0ac03a47__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__43);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__44, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h10b24289__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__44);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__45, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h7e842221__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__45);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__46, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h730046e4__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__46);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__47, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h478d1185__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__47);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__48, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_he74fe26e__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__48);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__49, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_ha03b957f__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__49);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__50, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h6ab47688__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__50);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__51, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h2d18e8c0__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__51);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__52, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_hc4fe041b__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__52);
    VL_SHIFTRS_WWI(4097,4097,12, __Vtemp_hf8ab3e5f__53, Vtestbench__ConstPool__CONST_h65f364c7_0, 
                   (0xfffU & (~ VL_EXTENDS_II(12,13, 
                                              (0x1fffU 
                                               & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                   << 8U) 
                                                  | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                     >> 0x18U)))))));
    VL_AND_W(129, __Vtemp_h068cc932__0, Vtestbench__ConstPool__CONST_hab8e39b9_0, __Vtemp_hf8ab3e5f__53);
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = (((QData)((IData)((1U & (__Vtemp_ha1a52d3b__0[0x1eU] 
                                   >> 0xdU)))) << 0x35U) 
           | (((QData)((IData)((1U & (__Vtemp_h67411a7c__0[0x1eU] 
                                      >> 0xeU)))) << 0x34U) 
              | (((QData)((IData)((1U & (__Vtemp_hf301e58a__0[0x1eU] 
                                         >> 0xfU)))) 
                  << 0x33U) | (((QData)((IData)((1U 
                                                 & (__Vtemp_h2ea4091b__0[0x1eU] 
                                                    >> 0x10U)))) 
                                << 0x32U) | (((QData)((IData)(
                                                              (1U 
                                                               & (__Vtemp_hf5a88d28__0[0x1eU] 
                                                                  >> 0x11U)))) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 (1U 
                                                                  & (__Vtemp_h1d928cd1__0[0x1eU] 
                                                                     >> 0x12U)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (1U 
                                                                     & (__Vtemp_h625d6c4b__0[0x1eU] 
                                                                        >> 0x13U)))) 
                                                    << 0x2fU) 
                                                   | (((QData)((IData)(
                                                                       (1U 
                                                                        & (__Vtemp_hf6285edc__0[0x1eU] 
                                                                           >> 0x14U)))) 
                                                       << 0x2eU) 
                                                      | (((QData)((IData)(
                                                                          (1U 
                                                                           & (__Vtemp_haa8df6bb__0[0x1eU] 
                                                                              >> 0x15U)))) 
                                                          << 0x2dU) 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (__Vtemp_h516c155a__0[0x1eU] 
                                                                                >> 0x16U)))) 
                                                             << 0x2cU) 
                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h319e772d__0[0x1eU] 
                                                                                >> 0x17U)))) 
                                                                << 0x2bU) 
                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h20481871__0[0x1eU] 
                                                                                >> 0x18U)))) 
                                                                   << 0x2aU) 
                                                                  | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hd4f89345__0[0x1eU] 
                                                                                >> 0x19U)))) 
                                                                      << 0x29U) 
                                                                     | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h95bdf64b__0[0x1eU] 
                                                                                >> 0x1aU)))) 
                                                                         << 0x28U) 
                                                                        | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_he0515d1c__0[0x1eU] 
                                                                                >> 0x1bU)))) 
                                                                            << 0x27U) 
                                                                           | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hcf1b2e42__0[0x1eU] 
                                                                                >> 0x1cU)))) 
                                                                               << 0x26U) 
                                                                              | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h938db664__0[0x1eU] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x25U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hb6957952__0[0x1eU] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (__Vtemp_h18a3d791__0[0x1eU] 
                                                                                >> 0x1fU))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & __Vtemp_he7bfe63e__0[0x1fU]))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h3e7c0ab0__0[0x1fU] 
                                                                                >> 1U)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hf8776d61__0[0x1fU] 
                                                                                >> 2U)))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((0x80000000U 
                                                                                & (__Vtemp_h4db40b53__0[0x1fU] 
                                                                                << 0x1cU)) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_h42a3a20f__0[0x1fU] 
                                                                                << 0x1aU)) 
                                                                                | ((0x20000000U 
                                                                                & (__Vtemp_h89308890__0[0x1fU] 
                                                                                << 0x18U)) 
                                                                                | ((0x10000000U 
                                                                                & (__Vtemp_h1baa3128__0[0x1fU] 
                                                                                << 0x16U)) 
                                                                                | ((0x8000000U 
                                                                                & (__Vtemp_h05da1b7f__0[0x1fU] 
                                                                                << 0x14U)) 
                                                                                | ((0x4000000U 
                                                                                & (__Vtemp_h578d2181__0[0x1fU] 
                                                                                << 0x12U)) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_h50d07c29__0[0x1fU] 
                                                                                << 0x10U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_hd43d439a__0[0x1fU] 
                                                                                << 0xeU)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_h7e7f2831__0[0x1fU] 
                                                                                << 0xcU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_hd8c97d2c__0[0x1fU] 
                                                                                << 0xaU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_h1a943940__0[0x1fU] 
                                                                                << 8U)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_hfccff21b__0[0x1fU] 
                                                                                << 6U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_hd0fc942c__0[0x1fU] 
                                                                                << 4U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_h4f8f3760__0[0x1fU] 
                                                                                << 2U)) 
                                                                                | ((0x20000U 
                                                                                & __Vtemp_h545922f0__0[0x1fU]) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_he1dcbcc7__0[0x1fU] 
                                                                                >> 2U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_h4b079508__0[0x1fU] 
                                                                                >> 4U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_h5518e0bf__0[0x1fU] 
                                                                                >> 6U)) 
                                                                                | ((0x2000U 
                                                                                & (__Vtemp_h3ddf8f17__0[0x1fU] 
                                                                                >> 8U)) 
                                                                                | ((0x1000U 
                                                                                & (__Vtemp_h7dc0b7e3__0[0x1fU] 
                                                                                >> 0xaU)) 
                                                                                | ((0x800U 
                                                                                & (__Vtemp_hb750d4e4__0[0x1fU] 
                                                                                >> 0xcU)) 
                                                                                | ((0x400U 
                                                                                & (__Vtemp_h0ac03a47__0[0x1fU] 
                                                                                >> 0xeU)) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_h10b24289__0[0x1fU] 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_h7e842221__0[0x1fU] 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_h730046e4__0[0x1fU] 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_h478d1185__0[0x1fU] 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_he74fe26e__0[0x1fU] 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_ha03b957f__0[0x1fU] 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_h6ab47688__0[0x1fU] 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_h2d18e8c0__0[0x20U] 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & __Vtemp_hc4fe041b__0[0x20U]) 
                                                                                | (1U 
                                                                                & (__Vtemp_h068cc932__0[0x20U] 
                                                                                >> 2U)))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0 
        = ((6U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                  >> 0x1dU)) | (0U != (0x3fffffffU 
                                       & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__0, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__1, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__2, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__3, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__4, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__5, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__6, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__7, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__8, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__9, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__10, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__11, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__12, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__13, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__14, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__15, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__16, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__17, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__18, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__19, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__20, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__21, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__22, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__23, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    VL_SHIFTRS_WWI(513,513,9, __Vtemp_h202a967f__24, Vtestbench__ConstPool__CONST_h3dcda147_0, 
                   (0x1ffU & (~ ((IData)(0x100U) + 
                                 VL_EXTENDS_II(9,13, 
                                               (0x1fffU 
                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                    << 8U) 
                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                      >> 0x18U))))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
        = ((0x1000000U & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                           & __Vtemp_h202a967f__0[3U]) 
                          << 0xeU)) | ((0x800000U & 
                                        ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                          & __Vtemp_h202a967f__1[3U]) 
                                         << 0xcU)) 
                                       | ((0x400000U 
                                           & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                               & __Vtemp_h202a967f__2[3U]) 
                                              << 0xaU)) 
                                          | ((0x200000U 
                                              & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                  & __Vtemp_h202a967f__3[3U]) 
                                                 << 8U)) 
                                             | ((0x100000U 
                                                 & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                     & __Vtemp_h202a967f__4[3U]) 
                                                    << 6U)) 
                                                | ((0x80000U 
                                                    & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                        & __Vtemp_h202a967f__5[3U]) 
                                                       << 4U)) 
                                                   | ((0x40000U 
                                                       & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                           & __Vtemp_h202a967f__6[3U]) 
                                                          << 2U)) 
                                                      | ((0x20000U 
                                                          & (Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                             & __Vtemp_h202a967f__7[3U])) 
                                                         | ((0x10000U 
                                                             & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                 & __Vtemp_h202a967f__8[3U]) 
                                                                >> 2U)) 
                                                            | ((0x8000U 
                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                    & __Vtemp_h202a967f__9[3U]) 
                                                                   >> 4U)) 
                                                               | ((0x4000U 
                                                                   & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                       & __Vtemp_h202a967f__10[3U]) 
                                                                      >> 6U)) 
                                                                  | ((0x2000U 
                                                                      & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                          & __Vtemp_h202a967f__11[3U]) 
                                                                         >> 8U)) 
                                                                     | ((0x1000U 
                                                                         & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                             & __Vtemp_h202a967f__12[3U]) 
                                                                            >> 0xaU)) 
                                                                        | ((0x800U 
                                                                            & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__13[3U]) 
                                                                               >> 0xcU)) 
                                                                           | ((0x400U 
                                                                               & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__14[3U]) 
                                                                                >> 0xeU)) 
                                                                              | ((0x200U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__15[3U]) 
                                                                                >> 0x10U)) 
                                                                                | ((0x100U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__16[3U]) 
                                                                                >> 0x12U)) 
                                                                                | ((0x80U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__17[3U]) 
                                                                                >> 0x14U)) 
                                                                                | ((0x40U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__18[3U]) 
                                                                                >> 0x16U)) 
                                                                                | ((0x20U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__19[3U]) 
                                                                                >> 0x18U)) 
                                                                                | ((0x10U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__20[3U]) 
                                                                                >> 0x1aU)) 
                                                                                | ((8U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[3U] 
                                                                                & __Vtemp_h202a967f__21[3U]) 
                                                                                >> 0x1cU)) 
                                                                                | ((4U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h202a967f__22[4U]) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h202a967f__23[4U])) 
                                                                                | (1U 
                                                                                & ((Vtestbench__ConstPool__CONST_h00a543f7_0[4U] 
                                                                                & __Vtemp_h202a967f__24[4U]) 
                                                                                >> 2U))))))))))))))))))))))))));
    vlSelf->__VdfgTmp_h183e8778__0 = (1U & ((~ (IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
                                            & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                               >> 5U)));
    __PVT__round_mixed__DOT__round32__DOT__commonCase 
        = ((~ (IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)) 
           & (0U == (0x300U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U])));
    __VdfgTmp_h29d15a15__0 = ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                              | (6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)));
    __PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp 
        = ((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp));
    round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
        = (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (QData)((IData)((1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                    >> 0x17U)))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
        = (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__genblk1__DOT__roundMask_main 
           | (1U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                    >> 0x17U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])) 
                                                 >> 3U))) 
                                          & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                             >> 2U)))) 
           | (0U != (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                     & (1U | (6U & ((IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0) 
                                    << 1U))))));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1ULL | (0x7ffffffffffffffeULL & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                << 1U)))) 
           & (3ULL | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                      << 2U)));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                   >> 2U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & (1U 
                                                    | (6U 
                                                       & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                          << 1U))))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
        = ((~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                    << 1U)))) & (3U 
                                                 | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                    << 2U)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0x1fffffffffffffULL & ((((QData)((IData)(
                                                            vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                            << 0x3dU) 
                                           | (((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                               << 0x1dU) 
                                              | ((QData)((IData)(
                                                                 vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])) 
                                                 >> 3U))) 
                                          & (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 3U)))) 
           | (0U != (7U & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit 
        = ((0U != (0xffffffU & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                & (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                                   >> 3U)))) | (0U 
                                                != 
                                                ((IData)(round_mixed__DOT__round32__DOT____VdfgTmp_hff1e570f__0) 
                                                 & __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask)));
    __PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
           | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra));
    round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
        = (0xffffffffffffffULL & ((((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                    & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)) 
                                   | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                      & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound)))
                                   ? ((((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                                        & ((~ (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRoundExtra)) 
                                           & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit)))
                                        ? (~ (1ULL 
                                              | (0x7ffffffffffffffeULL 
                                                 & (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                    << 1U))))
                                        : 0xffffffffffffffULL) 
                                      & (1ULL + (0x3fffffffffffffULL 
                                                 & (((0x3fffffffc0000000ULL 
                                                      & ((QData)((IData)(
                                                                         vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                                         << 0x1eU)) 
                                                     | ((QData)((IData)(
                                                                        vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])) 
                                                        >> 2U)) 
                                                    | (0x3fffffffffffffffULL 
                                                       & round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0)))))
                                   : ((0x3fffffffffffffULL 
                                       & (((~ (3ULL 
                                               | (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                  << 2U))) 
                                           >> 2U) & 
                                          ((0x3fffffffc0000000ULL 
                                            & ((QData)((IData)(
                                                               vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) 
                                               << 0x1eU)) 
                                           | ((QData)((IData)(
                                                              vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])) 
                                              >> 2U)))) 
                                      | (((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                                          & (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound))
                                          ? (__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosMask 
                                             >> 1U)
                                          : 0ULL))));
    round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
        = ((((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
             & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)) 
            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
               & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound)))
            ? ((((0U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                 & ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRoundExtra)) 
                    & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit)))
                 ? (~ (1U | (0x7ffffffeU & (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                            << 1U))))
                 : 0xffffffffU) & ((IData)(1U) + ((round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0 
                                                   >> 2U) 
                                                  | (0x3fffffffU 
                                                     & round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0))))
            : ((((~ (3U | (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                           << 2U))) & round_mixed__DOT__round32__DOT____VdfgTmp_h5f9c41b1__0) 
                >> 2U) | (((6U == (IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_long__DOT____Vcellinp__fdiv__roundingMode)) 
                           & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound))
                           ? (__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosMask 
                              >> 1U) : 0U)));
    if ((0x800000U & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])) {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & (0x3fffffffffffffULL 
                                     & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                        >> 1U)));
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & (0x1ffffffU & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                          >> 1U)));
    } else {
        vlSelf->__PVT__round_mixed__DOT__round64__DOT__common_fractOut 
            = (0xfffffffffffffULL & round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0);
        vlSelf->__PVT__round_mixed__DOT__round32__DOT__common_fractOut 
            = (0x7fffffU & round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0);
    }
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp 
        = (0x3fffU & (VL_EXTENDS_II(14,13, (0x1fffU 
                                            & VL_EXTENDS_II(13,13, 
                                                            (0x1fffU 
                                                             & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                 << 8U) 
                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                   >> 0x18U)))))) 
                      + (IData)((3ULL & (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                         >> 0x35U)))));
    __PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp 
        = (0x7fffU & (VL_EXTENDS_II(15,14, (0x3fffU 
                                            & ((IData)(0x3900U) 
                                               + VL_EXTENDS_II(14,13, 
                                                               (0x1fffU 
                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                    << 8U) 
                                                                   | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                      >> 0x18U))))))) 
                      + (3U & (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                               >> 0x18U))));
    vlSelf->round_mixed__DOT__round64__DOT____VdfgTmp_haed1c60f__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
               >> 8U)) & VL_LTES_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x3ceU, VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round64__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp)), 0xaU)));
    vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h5bb099d6__0 
        = ((~ (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
               >> 8U)) & VL_LTES_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))));
    __PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & (VL_GTS_III(32, 0x6bU, VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
              & (IData)(__VdfgTmp_h29d15a15__0)));
    __PVT__round_mixed__DOT__round32__DOT__overflow 
        = ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
           & VL_LTES_III(32, 3U, VL_SHIFTRS_III(32,32,32, 
                                                VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)), 7U)));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round64__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__round64__DOT__notNaN_isInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                  >> 9U) | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                            & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp))));
    vlSelf->__Vcellout__round_mixed__fullExceptionFlags 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__invalid_exc) 
            << 4U) | (((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                       << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                   & (VL_GTS_III(32, 0x3ceU, 
                                                 VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                                      | ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound) 
                                         & (VL_GTES_III(32, 0U, 
                                                        VL_SHIFTRS_III(32,32,32, 
                                                                       VL_EXTENDS_II(32,13, 
                                                                                (0x1fffU 
                                                                                & VL_EXTENDS_II(13,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                                >> 0x18U)))))), 0xbU)) 
                                            & ((~ (
                                                   (~ 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                      ? (IData)(
                                                                (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                                 >> 2U))
                                                      : (IData)(
                                                                (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                                 >> 1U)))) 
                                                   & (((0x800000U 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                        ? (IData)(
                                                                  (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                                   >> 0x36U))
                                                        : (IData)(
                                                                  (round_mixed__DOT__round64__DOT____VdfgTmp_h8932ed42__0 
                                                                   >> 0x35U))) 
                                                      & ((IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__roundPosBit) 
                                                         & (((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                             & ((0x800000U 
                                                                 & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                                 ? 
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                 >> 2U)
                                                                 : 
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                 >> 1U))) 
                                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                               & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                    >> 0x17U) 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                      >> 2U)) 
                                                                  | (0U 
                                                                     != 
                                                                     (3U 
                                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U]))))))))) 
                                               & ((0x800000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                   ? (IData)(
                                                             (round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0 
                                                              >> 1U))
                                                   : (IData)(round_mixed__DOT__round64__DOT____VdfgTmp_hfd2eab69__0))))))) 
                                  << 1U) | ((IData)(__PVT__round_mixed__DOT__round64__DOT__overflow) 
                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                               & (VL_GTS_III(32, 0x3ceU, 
                                                             VL_EXTENDS_II(32,14, (IData)(vlSelf->__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__sRoundedExp))) 
                                                  | (IData)(__PVT__round_mixed__DOT__round64__DOT__genblk2__DOT__anyRound)))))));
    vlSelf->__Vcellout__round_mixed__midExceptionFlags 
        = (((IData)(vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__invalid_exc) 
            << 4U) | (((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                       << 2U) | ((((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                   & (VL_GTS_III(32, 0x6bU, 
                                                 VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                                      | ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound) 
                                         & (VL_GTES_III(32, 0U, 
                                                        VL_SHIFTRS_III(32,32,32, 
                                                                       VL_EXTENDS_II(32,14, 
                                                                                (0x3fffU 
                                                                                & ((IData)(0x3900U) 
                                                                                + 
                                                                                VL_EXTENDS_II(14,13, 
                                                                                (0x1fffU 
                                                                                & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                                                                << 8U) 
                                                                                | (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                                >> 0x18U))))))), 8U)) 
                                            & ((~ (
                                                   (~ 
                                                    ((0x800000U 
                                                      & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                      ? 
                                                     (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                      >> 2U)
                                                      : 
                                                     (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                      >> 1U))) 
                                                   & (((0x800000U 
                                                        & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                        ? 
                                                       (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                        >> 0x19U)
                                                        : 
                                                       (round_mixed__DOT__round32__DOT____VdfgTmp_h0c92b68a__0 
                                                        >> 0x18U)) 
                                                      & ((IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__roundPosBit) 
                                                         & (((IData)(vlSelf->round_mixed__DOT__round32__DOT____VdfgTmp_h830739a3__0) 
                                                             & ((0x800000U 
                                                                 & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                                 ? 
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                 >> 0x1fU)
                                                                 : 
                                                                (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                 >> 0x1eU))) 
                                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__roundMagUp) 
                                                               & (((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U] 
                                                                    >> 0x17U) 
                                                                   & (vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U] 
                                                                      >> 0x1fU)) 
                                                                  | (IData)(
                                                                            (0U 
                                                                             != 
                                                                             (0x7fffffffU 
                                                                              & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[0U])))))))))) 
                                               & ((0x800000U 
                                                   & vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[1U])
                                                   ? 
                                                  (round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0 
                                                   >> 1U)
                                                   : round_mixed__DOT__round32__DOT____VdfgTmp_h2ec2ca19__0)))))) 
                                  << 1U) | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                                            | ((IData)(__PVT__round_mixed__DOT__round32__DOT__commonCase) 
                                               & (VL_GTS_III(32, 0x6bU, 
                                                             VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp))) 
                                                  | (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__anyRound)))))));
    __PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut 
        = (1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                  >> 9U) | ((IData)(__PVT__round_mixed__DOT__round32__DOT__overflow) 
                            & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp))));
    vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut 
        = ((~ (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow_roundMagUp)) 
           & (IData)(__PVT__round_mixed__DOT__round32__DOT__overflow));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp 
        = (0x1ffU & (((~ (((1U & ((vlSymsp->TOP__testbench__DOT__wrapper__DOT__processor__DOT__m__DOT__multicore__DOT__cc__DOT__y__BRA__0__KET____DOT__x__BRA__1__KET____DOT__tile_node.__PVT__tile__DOT__core__DOT__core_lite__DOT__core_minimal__DOT__be__DOT__calculator__DOT__pipe_fma__DOT__fma_raw_lo[2U] 
                                   >> 8U) | VL_GTS_III(32, 0x6bU, 
                                                       VL_EXTENDS_II(32,15, (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)))))
                            ? 0x1c0U : 0U) | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                                                ? 0x194U
                                                : 0U) 
                                              | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                                   ? 0x80U
                                                   : 0U) 
                                                 | ((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                     ? 0x40U
                                                     : 0U))))) 
                      & (IData)(__PVT__round_mixed__DOT__round32__DOT__genblk2__DOT__sRoundedExp)) 
                     | (((IData)(__PVT__round_mixed__DOT__round32__DOT__pegMinNonzeroMagOut)
                          ? 0x6bU : 0U) | (((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__pegMaxFiniteMagOut)
                                             ? 0x17fU
                                             : 0U) 
                                           | (((IData)(__PVT__round_mixed__DOT__round32__DOT__notNaN_isInfOut)
                                                ? 0x180U
                                                : 0U) 
                                              | ((IData)(vlSelf->__PVT__round_mixed__DOT__round32__DOT__isNaNOut)
                                                  ? 0x1c0U
                                                  : 0U))))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isNaN 
        = (IData)((0x1c0U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
    vlSelf->__PVT__round_mixed__DOT__recover__DOT__isInf 
        = (IData)((0x180U == (0x1c0U & (IData)(vlSelf->__PVT__round_mixed__DOT__recover__DOT__exp))));
}
