// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

// Parameter definitions for Vcsi2_tb_top_c_phy_bfm_if
constexpr CData/*0:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__PROGRAMMABLE_PREAMBLE_EN;
constexpr CData/*2:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__DEFAULT_SYNC_TYPE;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__ENABLE_TIMEOUT;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__BFM_CLK_PERIOD_NS;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__T3_PREPARE_NS;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__UI_PER_WORD;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__T3_PREBEGIN_UI;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__T3_PROGSEQ_UI;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__T3_PREEND_UI;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__T3_POST_UI;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__T3_ACTIVE_PROGSEQ_UI;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__T3_PREAMBLE_UI;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__PREAMBLE_WORD_CYCLES;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__POST_WORD_CYCLES;
constexpr IData/*31:0*/ Vcsi2_tb_top_c_phy_bfm_if::__PVT__PREPARE_WORD_CYCLES;


void Vcsi2_tb_top_c_phy_bfm_if___ctor_var_reset(Vcsi2_tb_top_c_phy_bfm_if* vlSelf);

Vcsi2_tb_top_c_phy_bfm_if::Vcsi2_tb_top_c_phy_bfm_if() = default;
Vcsi2_tb_top_c_phy_bfm_if::~Vcsi2_tb_top_c_phy_bfm_if() = default;

void Vcsi2_tb_top_c_phy_bfm_if::ctor(Vcsi2_tb_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcsi2_tb_top_c_phy_bfm_if___ctor_var_reset(this);
}

void Vcsi2_tb_top_c_phy_bfm_if::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcsi2_tb_top_c_phy_bfm_if::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
