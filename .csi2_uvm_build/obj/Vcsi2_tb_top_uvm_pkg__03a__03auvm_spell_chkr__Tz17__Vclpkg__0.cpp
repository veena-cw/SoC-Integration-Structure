// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg::__VnoInFunc_check(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlAssocArray<std::string, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz8>> strtab, std::string s, CData/*0:0*/ &check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg::__VnoInFunc_check\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    std::string unnamedblk1__DOT__key;
    std::string unnamedblk1__DOT__key__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__key__Vmore;
    unnamedblk1__DOT__key__Vmore = 0;
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ distance;
    IData/*31:0*/ min;
    VlQueue<std::string> min_key;
    {
        check__Vfuncrtn = 0U;
        distance = 0U;
        min = 0U;
        min_key.clear();
        min_key.atDefault().clear();
        if (strtab.exists(s)) {
            check__Vfuncrtn = 1U;
            goto __Vlabel0;
        }
        min = 0xffffffffU;
        unnamedblk1__DOT__key__Vmore = (0U != strtab.first(unnamedblk1__DOT__key__Vnext));
        while (unnamedblk1__DOT__key__Vmore) {
            unnamedblk1__DOT__key = unnamedblk1__DOT__key__Vnext;
            unnamedblk1__DOT__key__Vmore = (0U != strtab.next(unnamedblk1__DOT__key__Vnext));
            {
                this->__VnoInFunc_levenshtein_distance(vlSymsp, unnamedblk1__DOT__key, s, distance);
                if (VL_GTS_III(32, 0U, distance)) {
                    goto __Vlabel1;
                }
                if ((distance < min)) {
                    min = distance;
                    min_key.clear();
                    min_key.push_back(unnamedblk1__DOT__key);
                    goto __Vlabel1;
                }
                if ((distance == min)) {
                    min_key.push_back(unnamedblk1__DOT__key);
                }
                __Vlabel1: ;
            }
        }
        VL_WRITEF_NX("%s not located\n",1, 'S',&(s));
        if (VL_UNLIKELY(((0xffffffffU == min)))) {
            VL_WRITEF_NX("  no alternatives to suggest\n",0);
            check__Vfuncrtn = 0U;
            goto __Vlabel0;
        }
        unnamedblk2__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk2__DOT__i, min_key.size())) {
            __Vtemp_1 = min_key.at(unnamedblk2__DOT__i);
            VL_WRITEF_NX("  did you mean %s?\n",1, 'S',&(__Vtemp_1));
            unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
        }
        check__Vfuncrtn = 0U;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg::__VnoInFunc_levenshtein_distance(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s, std::string t, IData/*31:0*/ &levenshtein_distance__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg::__VnoInFunc_levenshtein_distance\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0__minimum;
    IData/*31:0*/ k;
    IData/*31:0*/ i;
    IData/*31:0*/ j;
    IData/*31:0*/ n;
    IData/*31:0*/ m;
    IData/*31:0*/ cost;
    IData/*31:0*/ distance;
    VlQueue<IData/*31:0*/> d;
    {
        levenshtein_distance__Vfuncrtn = 0U;
        k = 0U;
        i = 0U;
        j = 0U;
        n = 0U;
        m = 0U;
        cost = 0U;
        distance = 0U;
        d.clear();
        d.atDefault() = 0;
        n = ((IData)(1U) + VL_LEN_IN(s));
        m = ((IData)(1U) + VL_LEN_IN(t));
        if (((1U == n) | (1U == m))) {
            levenshtein_distance__Vfuncrtn = 0xffffffffU;
            goto __Vlabel0;
        }
        d.renew(VL_MULS_III(32, m, n));
        k = 0U;
        while (VL_LTS_III(32, k, n)) {
            d.atWrite(k) = k;
            k = ((IData)(1U) + k);
        }
        k = 0U;
        while (VL_LTS_III(32, k, m)) {
            d.atWrite((k * n)) = k;
            k = ((IData)(1U) + k);
        }
        i = 1U;
        while (VL_LTS_III(32, i, n)) {
            j = 1U;
            while (VL_LTS_III(32, j, m)) {
                cost = (VL_GETC_N(s,(i - (IData)(1U))) 
                        != VL_GETC_N(t,(j - (IData)(1U))));
                this->__VnoInFunc_minimum(vlSymsp, 
                                          ((IData)(1U) 
                                           + d.at((
                                                   ((j 
                                                     - (IData)(1U)) 
                                                    * n) 
                                                   + i))), 
                                          ((IData)(1U) 
                                           + d.at((
                                                   ((j 
                                                     * n) 
                                                    + i) 
                                                   - (IData)(1U)))), 
                                          (d.at((((
                                                   (j 
                                                    - (IData)(1U)) 
                                                   * n) 
                                                  + i) 
                                                 - (IData)(1U))) 
                                           + cost), __VlefCall_0__minimum);
                d.atWrite(((j * n) + i)) = __VlefCall_0__minimum;
                j = ((IData)(1U) + j);
            }
            i = ((IData)(1U) + i);
        }
        distance = d.at(((n * m) - (IData)(1U)));
        levenshtein_distance__Vfuncrtn = distance;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg::__VnoInFunc_minimum(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ a, IData/*31:0*/ b, IData/*31:0*/ c, IData/*31:0*/ &minimum__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_spell_chkr__Tz17__Vclpkg::__VnoInFunc_minimum\n"); );
    // Body
    IData/*31:0*/ min;
    min = a;
    if (VL_LTS_III(32, b, min)) {
        min = b;
    }
    if (VL_LTS_III(32, c, min)) {
        min = c;
    }
    minimum__Vfuncrtn = min;
}
