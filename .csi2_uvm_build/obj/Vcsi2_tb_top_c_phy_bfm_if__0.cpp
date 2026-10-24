// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

VlCoroutine Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_start_hs_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &started) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_start_hs_TOP__csi2_tb_top__DOT__phy_bfm\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__2;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__2 = 0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__1;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__1 = 0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__0;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__0 = 0;
    CData/*0:0*/ __Vtask_wait_for_rx_enable__0__enable_seen;
    __Vtask_wait_for_rx_enable__0__enable_seen = 0;
    IData/*31:0*/ __Vtask_wait_for_rx_enable__0__timeout_cycles;
    __Vtask_wait_for_rx_enable__0__timeout_cycles = 0;
    IData/*31:0*/ __Vtask_wait_for_rx_enable__0__unnamedblk1__DOT__cycle;
    __Vtask_wait_for_rx_enable__0__unnamedblk1__DOT__cycle = 0;
    CData/*0:0*/ __Vtask_drive_prepare_and_settle__1__prepared;
    __Vtask_drive_prepare_and_settle__1__prepared = 0;
    IData/*31:0*/ __Vtask_drive_prepare_and_settle__1__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_drive_prepare_and_settle__1__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__2__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__2__Vfuncout = 0;
    CData/*0:0*/ __Vtask_drive_normal_preamble__4__preamble_done;
    __Vtask_drive_normal_preamble__4__preamble_done = 0;
    IData/*31:0*/ __Vtask_drive_normal_preamble__4__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_drive_normal_preamble__4__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__5__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__5__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ enable_seen;
    CData/*0:0*/ prepared;
    CData/*0:0*/ preamble_done;
    {
        started = 0U;
        enable_seen = 0U;
        prepared = 0U;
        preamble_done = 0U;
        started = 0U;
        this->__PVT__last_status = 0U;
        if (VL_UNLIKELY(((1U & (~ (IData)(this->rst_n)))))) {
            this->__PVT__last_status = 1U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:316: Assertion failed in %m: C-PHY BFM: HS start requested during reset\n",3, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.start_hs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("c_phy_bfm_if.sv", 316, "");
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((0U != (IData)(this->__PVT__bfm_state))))) {
            this->__PVT__last_status = 4U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:323: Assertion failed in %m: C-PHY BFM: HS start requested while state=%0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.start_hs", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(this->__PVT__bfm_state));
            VL_STOP_MT("c_phy_bfm_if.sv", 323, "");
            goto __Vlabel0;
        }
        __Vtask_wait_for_rx_enable__0__timeout_cycles = 0x00000064U;
        {
            __Vtask_wait_for_rx_enable__0__enable_seen = 0U;
            __Vtask_wait_for_rx_enable__0__enable_seen = 0U;
            this->__PVT__bfm_state = 1U;
            __Vtask_wait_for_rx_enable__0__unnamedblk1__DOT__cycle = 0U;
            __Vtask_wait_for_rx_enable__0__unnamedblk1__DOT__cycle = 0U;
            while ((__Vtask_wait_for_rx_enable__0__unnamedblk1__DOT__cycle 
                    < __Vtask_wait_for_rx_enable__0__timeout_cycles)) {
                if ((1U & (~ (IData)(this->rst_n)))) {
                    this->__PVT__last_status = 1U;
                    goto __Vlabel1;
                }
                if (this->enable) {
                    __Vtask_wait_for_rx_enable__0__enable_seen = 1U;
                    goto __Vlabel1;
                }
                CData/*0:0*/ __VdynTrigger_h29b8aeea__0;
                __VdynTrigger_h29b8aeea__0 = 0;
                __VdynTrigger_h29b8aeea__0 = 0U;
                __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__0 
                    = this->bfm_clk;
                while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__0)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                                 "c_phy_bfm_if.sv", 
                                                                 233);
                    __VdynTrigger_h29b8aeea__0 = ((~ (IData)(this->bfm_clk)) 
                                                  & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__0));
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__0);
                    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__0 
                        = this->bfm_clk;
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                             "c_phy_bfm_if.sv", 
                                                             233);
                __Vtask_wait_for_rx_enable__0__unnamedblk1__DOT__cycle 
                    = ((IData)(1U) + __Vtask_wait_for_rx_enable__0__unnamedblk1__DOT__cycle);
            }
            this->__PVT__last_status = 2U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:237: Assertion failed in %m: C-PHY BFM: RX enable timeout after %0d cycles\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.wait_for_rx_enable", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',32,__Vtask_wait_for_rx_enable__0__timeout_cycles);
            VL_STOP_MT("c_phy_bfm_if.sv", 237, "");
            __Vlabel1: ;
        }
        enable_seen = __Vtask_wait_for_rx_enable__0__enable_seen;
        if ((1U & (~ (IData)(enable_seen)))) {
            goto __Vlabel0;
        }
        __Vtask_drive_prepare_and_settle__1__unnamedblk1_1__DOT____Vrepeat0 = 0U;
        {
            __Vtask_drive_prepare_and_settle__1__prepared = 0U;
            __Vtask_drive_prepare_and_settle__1__prepared = 0U;
            if (VL_UNLIKELY(((1U != (IData)(this->__PVT__bfm_state))))) {
                this->__PVT__last_status = 5U;
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:245: Assertion failed in %m: C-PHY BFM: prepare called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_prepare_and_settle", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(IData)(this->__PVT__bfm_state));
                VL_STOP_MT("c_phy_bfm_if.sv", 245, "");
                goto __Vlabel2;
            }
            this->__PVT__bfm_state = 2U;
            this->direction = 1U;
            this->stopstate = 0U;
            this->rxactivehs = 0U;
            __Vfunc_normal_ulpsactivenot_value__2__Vfuncout = 0;
            __Vfunc_normal_ulpsactivenot_value__2__Vfuncout 
                = (1U & (~ (IData)(this->__PVT__rtl_ulps_polarity_workaround)));
            this->ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__2__Vfuncout;
            this->rx_lane_sts_reg7 = 0U;
            this->rx_lane_sts_reg4 = 0U;
            this->rxvalidhs = 0U;
            this->rxsynchs = 0U;
            this->rxinvalidcodehs = 0U;
            this->rxdatahs = 0ULL;
            this->rxsynctypehs0 = 0U;
            this->rxsynctypehs1 = 0U;
            this->rxsynctypehs2 = 0U;
            this->rxsynctypehs3 = 0U;
            this->__PVT__bfm_state = 3U;
            __Vtask_drive_prepare_and_settle__1__unnamedblk1_1__DOT____Vrepeat0 = 4U;
            while (VL_LTS_III(32, 0U, __Vtask_drive_prepare_and_settle__1__unnamedblk1_1__DOT____Vrepeat0)) {
                CData/*0:0*/ __VdynTrigger_h29b8aeea__1;
                __VdynTrigger_h29b8aeea__1 = 0;
                __VdynTrigger_h29b8aeea__1 = 0U;
                __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__1 
                    = this->bfm_clk;
                while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__1)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                                 "c_phy_bfm_if.sv", 
                                                                 261);
                    __VdynTrigger_h29b8aeea__1 = ((~ (IData)(this->bfm_clk)) 
                                                  & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__1));
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__1);
                    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__1 
                        = this->bfm_clk;
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                             "c_phy_bfm_if.sv", 
                                                             261);
                if ((1U & (~ (IData)(this->rst_n)))) {
                    this->__PVT__last_status = 1U;
                    goto __Vlabel2;
                }
                __Vtask_drive_prepare_and_settle__1__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_drive_prepare_and_settle__1__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            this->__PVT__bfm_state = 4U;
            __Vtask_drive_prepare_and_settle__1__prepared = 1U;
            __Vlabel2: ;
        }
        prepared = __Vtask_drive_prepare_and_settle__1__prepared;
        if ((1U & (~ (IData)(prepared)))) {
            goto __Vlabel0;
        }
        __Vtask_drive_normal_preamble__4__unnamedblk1_2__DOT____Vrepeat1 = 0U;
        {
            __Vtask_drive_normal_preamble__4__preamble_done = 0U;
            __Vtask_drive_normal_preamble__4__preamble_done = 0U;
            if (VL_UNLIKELY(((4U != (IData)(this->__PVT__bfm_state))))) {
                this->__PVT__last_status = 5U;
                VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:279: Assertion failed in %m: C-PHY BFM: preamble called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_normal_preamble", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',4,(IData)(this->__PVT__bfm_state));
                VL_STOP_MT("c_phy_bfm_if.sv", 279, "");
                goto __Vlabel3;
            }
            this->__PVT__bfm_state = 5U;
            this->direction = 1U;
            this->stopstate = 0U;
            this->rxactivehs = 0U;
            __Vfunc_normal_ulpsactivenot_value__5__Vfuncout = 0;
            __Vfunc_normal_ulpsactivenot_value__5__Vfuncout 
                = (1U & (~ (IData)(this->__PVT__rtl_ulps_polarity_workaround)));
            this->ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__5__Vfuncout;
            this->rx_lane_sts_reg7 = 0U;
            this->rx_lane_sts_reg4 = 0U;
            this->rxvalidhs = 0U;
            this->rxsynchs = 0U;
            this->rxinvalidcodehs = 0U;
            this->rxdatahs = 0ULL;
            this->rxsynctypehs0 = 0U;
            this->rxsynctypehs1 = 0U;
            this->rxsynctypehs2 = 0U;
            this->rxsynctypehs3 = 0U;
            __Vtask_drive_normal_preamble__4__unnamedblk1_2__DOT____Vrepeat1 = 2U;
            while (VL_LTS_III(32, 0U, __Vtask_drive_normal_preamble__4__unnamedblk1_2__DOT____Vrepeat1)) {
                CData/*0:0*/ __VdynTrigger_h29b8aeea__2;
                __VdynTrigger_h29b8aeea__2 = 0;
                __VdynTrigger_h29b8aeea__2 = 0U;
                __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__2 
                    = this->bfm_clk;
                while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__2)))) {
                    co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                                 vlProcess, 
                                                                 "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                                 "c_phy_bfm_if.sv", 
                                                                 294);
                    __VdynTrigger_h29b8aeea__2 = ((~ (IData)(this->bfm_clk)) 
                                                  & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__2));
                    vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__2);
                    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__2 
                        = this->bfm_clk;
                }
                co_await vlSymsp->TOP.__VdynSched.resumption(
                                                             vlProcess, 
                                                             "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                             "c_phy_bfm_if.sv", 
                                                             294);
                if ((1U & (~ (IData)(this->rst_n)))) {
                    this->__PVT__last_status = 1U;
                    goto __Vlabel3;
                }
                __Vtask_drive_normal_preamble__4__unnamedblk1_2__DOT____Vrepeat1 
                    = (__Vtask_drive_normal_preamble__4__unnamedblk1_2__DOT____Vrepeat1 
                       - (IData)(1U));
            }
            __Vtask_drive_normal_preamble__4__preamble_done = 1U;
            __Vlabel3: ;
        }
        preamble_done = __Vtask_drive_normal_preamble__4__preamble_done;
        if ((1U & (~ (IData)(preamble_done)))) {
            goto __Vlabel0;
        }
        started = 1U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_drive_rtl_inter_header_sync_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*2:0*/ sync_type, CData/*3:0*/ segment_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_drive_rtl_inter_header_sync_TOP__csi2_tb_top__DOT__phy_bfm\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__3;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__3 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__7__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__7__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (VL_UNLIKELY(((1U & (~ (IData)(this->rst_n)))))) {
            this->__PVT__last_status = 1U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:350: Assertion failed in %m: C-PHY BFM: inter-header Sync requested during reset\n",3, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_rtl_inter_header_sync", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("c_phy_bfm_if.sv", 350, "");
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((7U != (IData)(this->__PVT__bfm_state))))) {
            this->__PVT__last_status = 5U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:356: Assertion failed in %m: C-PHY BFM: inter-header Sync requested from state=%0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_rtl_inter_header_sync", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(this->__PVT__bfm_state));
            VL_STOP_MT("c_phy_bfm_if.sv", 356, "");
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((0U == (IData)(segment_mask))))) {
            this->__PVT__last_status = 6U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:365: Assertion failed in %m: C-PHY BFM: inter-header Sync has empty segment mask\n",3, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_rtl_inter_header_sync", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("c_phy_bfm_if.sv", 365, "");
            goto __Vlabel0;
        }
        CData/*0:0*/ __VdynTrigger_h29b8aeea__3;
        __VdynTrigger_h29b8aeea__3 = 0;
        __VdynTrigger_h29b8aeea__3 = 0U;
        __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__3 
            = this->bfm_clk;
        while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__3)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                         "c_phy_bfm_if.sv", 
                                                         370);
            __VdynTrigger_h29b8aeea__3 = ((~ (IData)(this->bfm_clk)) 
                                          & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__3));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__3);
            __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__3 
                = this->bfm_clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                     "c_phy_bfm_if.sv", 
                                                     370);
        if ((1U & (~ (IData)(this->rst_n)))) {
            this->__PVT__last_status = 1U;
            goto __Vlabel0;
        }
        this->__PVT__bfm_state = 6U;
        this->direction = 1U;
        this->stopstate = 0U;
        this->rxactivehs = 1U;
        __Vfunc_normal_ulpsactivenot_value__7__Vfuncout = 0;
        __Vfunc_normal_ulpsactivenot_value__7__Vfuncout 
            = (1U & (~ (IData)(this->__PVT__rtl_ulps_polarity_workaround)));
        this->ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__7__Vfuncout;
        this->rx_lane_sts_reg7 = 0U;
        this->rx_lane_sts_reg4 = 0U;
        this->rxdatahs = 0ULL;
        this->rxvalidhs = 0U;
        this->rxsynchs = segment_mask;
        this->rxinvalidcodehs = 0U;
        this->rxsynctypehs0 = sync_type;
        this->rxsynctypehs1 = sync_type;
        this->rxsynctypehs2 = sync_type;
        this->rxsynctypehs3 = sync_type;
        this->__PVT__last_status = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_drive_sync_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*2:0*/ sync_type, CData/*0:0*/ initial_sync, CData/*3:0*/ segment_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_drive_sync_TOP__csi2_tb_top__DOT__phy_bfm\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__4;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__4 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__8__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__8__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (VL_UNLIKELY(((0U == (IData)(segment_mask))))) {
            this->__PVT__last_status = 6U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:409: Assertion failed in %m: C-PHY BFM: zero Sync segment mask\n",3, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_sync", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("c_phy_bfm_if.sv", 409, "");
            goto __Vlabel0;
        }
        if (VL_UNLIKELY((((IData)(initial_sync) & (5U 
                                                   != (IData)(this->__PVT__bfm_state)))))) {
            this->__PVT__last_status = 5U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:416: Assertion failed in %m: C-PHY BFM: initial Sync called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_sync", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(this->__PVT__bfm_state));
            VL_STOP_MT("c_phy_bfm_if.sv", 416, "");
            goto __Vlabel0;
        }
        if (VL_UNLIKELY((((~ (IData)(initial_sync)) 
                          & (7U != (IData)(this->__PVT__bfm_state)))))) {
            this->__PVT__last_status = 5U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:423: Assertion failed in %m: C-PHY BFM: additional Sync called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_sync", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(this->__PVT__bfm_state));
            VL_STOP_MT("c_phy_bfm_if.sv", 423, "");
            goto __Vlabel0;
        }
        if ((1U & (~ (IData)(initial_sync)))) {
            CData/*0:0*/ __VdynTrigger_h29b8aeea__4;
            __VdynTrigger_h29b8aeea__4 = 0;
            __VdynTrigger_h29b8aeea__4 = 0U;
            __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__4 
                = this->bfm_clk;
            while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__4)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                             "c_phy_bfm_if.sv", 
                                                             429);
                __VdynTrigger_h29b8aeea__4 = ((~ (IData)(this->bfm_clk)) 
                                              & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__4));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__4);
                __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__4 
                    = this->bfm_clk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                         "c_phy_bfm_if.sv", 
                                                         429);
        }
        if ((1U & (~ (IData)(this->rst_n)))) {
            this->__PVT__last_status = 1U;
            goto __Vlabel0;
        }
        this->__PVT__bfm_state = 6U;
        this->direction = 1U;
        __Vfunc_normal_ulpsactivenot_value__8__Vfuncout = 0;
        __Vfunc_normal_ulpsactivenot_value__8__Vfuncout 
            = (1U & (~ (IData)(this->__PVT__rtl_ulps_polarity_workaround)));
        this->ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__8__Vfuncout;
        this->rx_lane_sts_reg4 = 0U;
        this->rxinvalidcodehs = 0U;
        this->rxdatahs = 0ULL;
        if (this->__PVT__rtl_sync_workaround) {
            this->rxactivehs = 0U;
            this->stopstate = 0U;
            this->rx_lane_sts_reg7 = 0U;
            this->rxvalidhs = 0U;
            this->rxsynchs = 0U;
            this->rxsynctypehs0 = 0U;
            this->rxsynctypehs1 = 0U;
            this->rxsynctypehs2 = 0U;
            this->rxsynctypehs3 = 0U;
            this->__PVT__pending_sot_on_first_word 
                = initial_sync;
        } else {
            this->rxactivehs = 1U;
            this->rx_lane_sts_reg7 = initial_sync;
            this->rxvalidhs = segment_mask;
            this->rxsynchs = segment_mask;
            this->rxsynctypehs0 = sync_type;
            this->rxsynctypehs1 = sync_type;
            this->rxsynctypehs2 = sync_type;
            this->rxsynctypehs3 = sync_type;
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_drive_hs_word_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ data_word, CData/*0:0*/ last_word, CData/*3:0*/ segment_mask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_drive_hs_word_TOP__csi2_tb_top__DOT__phy_bfm\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__5;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__5 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__9__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__9__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (VL_UNLIKELY(((0U == (IData)(segment_mask))))) {
            this->__PVT__last_status = 6U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:480: Assertion failed in %m: C-PHY BFM: zero data segment mask\n",3, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_hs_word", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("c_phy_bfm_if.sv", 480, "");
            goto __Vlabel0;
        }
        if (VL_UNLIKELY(((1U & (~ ((6U == (IData)(this->__PVT__bfm_state)) 
                                   | (7U == (IData)(this->__PVT__bfm_state)))))))) {
            this->__PVT__last_status = 5U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:487: Assertion failed in %m: C-PHY BFM: HS data called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_hs_word", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(this->__PVT__bfm_state));
            VL_STOP_MT("c_phy_bfm_if.sv", 487, "");
            goto __Vlabel0;
        }
        CData/*0:0*/ __VdynTrigger_h29b8aeea__5;
        __VdynTrigger_h29b8aeea__5 = 0;
        __VdynTrigger_h29b8aeea__5 = 0U;
        __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__5 
            = this->bfm_clk;
        while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__5)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                         "c_phy_bfm_if.sv", 
                                                         492);
            __VdynTrigger_h29b8aeea__5 = ((~ (IData)(this->bfm_clk)) 
                                          & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__5));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__5);
            __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__5 
                = this->bfm_clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                     "c_phy_bfm_if.sv", 
                                                     492);
        if ((1U & (~ (IData)(this->rst_n)))) {
            this->__PVT__last_status = 1U;
            goto __Vlabel0;
        }
        this->__PVT__bfm_state = 7U;
        this->direction = 1U;
        this->stopstate = 0U;
        __Vfunc_normal_ulpsactivenot_value__9__Vfuncout = 0;
        __Vfunc_normal_ulpsactivenot_value__9__Vfuncout 
            = (1U & (~ (IData)(this->__PVT__rtl_ulps_polarity_workaround)));
        this->ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__9__Vfuncout;
        this->rxactivehs = 1U;
        this->rx_lane_sts_reg7 = this->__PVT__pending_sot_on_first_word;
        this->rx_lane_sts_reg4 = ((IData)(last_word) 
                                  & (IData)(this->__PVT__rtl_eot_workaround));
        this->__PVT__pending_sot_on_first_word = 0U;
        this->rxsynchs = 0U;
        this->rxvalidhs = segment_mask;
        this->rxdatahs = data_word;
        this->rxinvalidcodehs = 0U;
        this->rxsynctypehs0 = 0U;
        this->rxsynctypehs1 = 0U;
        this->rxsynctypehs2 = 0U;
        this->rxsynctypehs3 = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_drive_post_and_eot_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_drive_post_and_eot_TOP__csi2_tb_top__DOT__phy_bfm\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__8;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__8 = 0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__7;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__7 = 0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__6;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__6 = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__10__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__10__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__12__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__12__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk1_3__DOT____Vrepeat2;
    unnamedblk1_3__DOT____Vrepeat2 = 0;
    {
        if (VL_UNLIKELY(((7U != (IData)(this->__PVT__bfm_state))))) {
            this->__PVT__last_status = 5U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:522: Assertion failed in %m: C-PHY BFM: Post/EoT called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.drive_post_and_eot", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(this->__PVT__bfm_state));
            VL_STOP_MT("c_phy_bfm_if.sv", 522, "");
            goto __Vlabel0;
        }
        CData/*0:0*/ __VdynTrigger_h29b8aeea__6;
        __VdynTrigger_h29b8aeea__6 = 0;
        __VdynTrigger_h29b8aeea__6 = 0U;
        __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__6 
            = this->bfm_clk;
        while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__6)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                         "c_phy_bfm_if.sv", 
                                                         527);
            __VdynTrigger_h29b8aeea__6 = ((~ (IData)(this->bfm_clk)) 
                                          & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__6));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__6);
            __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__6 
                = this->bfm_clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                     "c_phy_bfm_if.sv", 
                                                     527);
        if ((1U & (~ (IData)(this->rst_n)))) {
            this->__PVT__last_status = 1U;
            goto __Vlabel0;
        }
        this->__PVT__bfm_state = 8U;
        this->direction = 1U;
        this->stopstate = 0U;
        __Vfunc_normal_ulpsactivenot_value__10__Vfuncout = 0;
        __Vfunc_normal_ulpsactivenot_value__10__Vfuncout 
            = (1U & (~ (IData)(this->__PVT__rtl_ulps_polarity_workaround)));
        this->ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__10__Vfuncout;
        this->rxactivehs = 0U;
        this->rx_lane_sts_reg7 = 0U;
        this->rx_lane_sts_reg4 = 0U;
        this->rxvalidhs = 0U;
        this->rxsynchs = 0U;
        this->rxdatahs = 0ULL;
        this->rxinvalidcodehs = 0U;
        this->rxsynctypehs0 = 0U;
        this->rxsynctypehs1 = 0U;
        this->rxsynctypehs2 = 0U;
        this->rxsynctypehs3 = 0U;
        unnamedblk1_3__DOT____Vrepeat2 = 1U;
        while (VL_LTS_III(32, 0U, unnamedblk1_3__DOT____Vrepeat2)) {
            CData/*0:0*/ __VdynTrigger_h29b8aeea__7;
            __VdynTrigger_h29b8aeea__7 = 0;
            __VdynTrigger_h29b8aeea__7 = 0U;
            __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__7 
                = this->bfm_clk;
            while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__7)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                             "c_phy_bfm_if.sv", 
                                                             554);
                __VdynTrigger_h29b8aeea__7 = ((~ (IData)(this->bfm_clk)) 
                                              & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__7));
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__7);
                __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__7 
                    = this->bfm_clk;
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                         "c_phy_bfm_if.sv", 
                                                         554);
            if ((1U & (~ (IData)(this->rst_n)))) {
                this->__PVT__last_status = 1U;
                goto __Vlabel0;
            }
            unnamedblk1_3__DOT____Vrepeat2 = (unnamedblk1_3__DOT____Vrepeat2 
                                              - (IData)(1U));
        }
        this->__PVT__bfm_state = 9U;
        this->rxactivehs = 0U;
        this->rx_lane_sts_reg4 = (1U & (~ (IData)(this->__PVT__rtl_eot_workaround)));
        CData/*0:0*/ __VdynTrigger_h29b8aeea__8;
        __VdynTrigger_h29b8aeea__8 = 0;
        __VdynTrigger_h29b8aeea__8 = 0U;
        __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__8 
            = this->bfm_clk;
        while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__8)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                         "c_phy_bfm_if.sv", 
                                                         566);
            __VdynTrigger_h29b8aeea__8 = ((~ (IData)(this->bfm_clk)) 
                                          & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__8));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__8);
            __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__8 
                = this->bfm_clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                     "c_phy_bfm_if.sv", 
                                                     566);
        if ((1U & (~ (IData)(this->rst_n)))) {
            this->__PVT__last_status = 1U;
            goto __Vlabel0;
        }
        this->__PVT__bfm_state = 0U;
        this->__PVT__pending_sot_on_first_word = 0U;
        this->direction = 1U;
        this->stopstate = 1U;
        this->rxactivehs = 0U;
        __Vfunc_normal_ulpsactivenot_value__12__Vfuncout = 0;
        __Vfunc_normal_ulpsactivenot_value__12__Vfuncout 
            = (1U & (~ (IData)(this->__PVT__rtl_ulps_polarity_workaround)));
        this->ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__12__Vfuncout;
        this->rx_lane_sts_reg7 = 0U;
        this->rx_lane_sts_reg4 = 0U;
        this->rxvalidhs = 0U;
        this->rxsynchs = 0U;
        this->rxinvalidcodehs = 0U;
        this->rxdatahs = 0ULL;
        this->rxsynctypehs0 = 0U;
        this->rxsynctypehs1 = 0U;
        this->rxsynctypehs2 = 0U;
        this->rxsynctypehs3 = 0U;
        this->rxcalibrationprehs = 0U;
        this->rxcalibrationformat = 0U;
        this->rxerrcalhs = 0U;
        this->rxalpvalidhs = 0U;
        this->rxalpcode0 = 0U;
        this->rxalpcode1 = 0U;
        this->rxalpcode2 = 0U;
        this->rxalpcode3 = 0U;
        this->rxalpnibble0 = 0U;
        this->rxalpnibble1 = 0U;
        this->rxalpnibble2 = 0U;
        this->rxalpnibble3 = 0U;
        this->rxlpdtesc = 0U;
        this->rxulpsesc = 0U;
        this->rxvalidesc = 0U;
        this->rxtriggeresc = 0U;
        this->rxdataesc = 0U;
        this->errsoths = 0U;
        this->errsotsynchs = 0U;
        this->erresc = 0U;
        this->errsyncesc = 0U;
        this->errcontrol = 0U;
        this->errcontentionlp0 = 0U;
        this->errcontentionlp1 = 0U;
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_finish_without_eot_TOP__csi2_tb_top__DOT__phy_bfm(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_finish_without_eot_TOP__csi2_tb_top__DOT__phy_bfm\n"); );
    // Locals
    CData/*0:0*/ __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__9;
    __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__9 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if (VL_UNLIKELY(((7U != (IData)(this->__PVT__bfm_state))))) {
            this->__PVT__last_status = 5U;
            VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:578: Assertion failed in %m: C-PHY BFM: missing-EoT stimulus called from state %0d\n",4, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm.finish_without_eot", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',4,(IData)(this->__PVT__bfm_state));
            VL_STOP_MT("c_phy_bfm_if.sv", 578, "");
            goto __Vlabel0;
        }
        CData/*0:0*/ __VdynTrigger_h29b8aeea__9;
        __VdynTrigger_h29b8aeea__9 = 0;
        __VdynTrigger_h29b8aeea__9 = 0U;
        __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__9 
            = this->bfm_clk;
        while ((1U & (~ (IData)(__VdynTrigger_h29b8aeea__9)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         vlProcess, 
                                                         "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                         "c_phy_bfm_if.sv", 
                                                         584);
            __VdynTrigger_h29b8aeea__9 = ((~ (IData)(this->bfm_clk)) 
                                          & (IData)(__Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__9));
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h29b8aeea__9);
            __Vtrigprevexpr___TOP__csi2_tb_top__DOT__phy_bfm__bfm_clk__9 
                = this->bfm_clk;
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     vlProcess, 
                                                     "@(negedge csi2_tb_top.phy_bfm.bfm_clk)", 
                                                     "c_phy_bfm_if.sv", 
                                                     584);
        this->rx_lane_sts_reg7 = 0U;
        this->rx_lane_sts_reg4 = 0U;
        this->rxvalidhs = 0U;
        this->rxsynchs = 0U;
        this->rxdatahs = 0ULL;
        this->rxactivehs = 1U;
        this->stopstate = 0U;
        this->__PVT__bfm_state = 7U;
        __Vlabel0: ;
    }
    co_return;
}

void Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if::__VnoInFunc_force_idle_TOP__csi2_tb_top__DOT__phy_bfm\n"); );
    // Locals
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__16__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__16__Vfuncout = 0;
    // Body
    this->__PVT__bfm_state = 0U;
    this->__PVT__pending_sot_on_first_word = 0U;
    this->direction = 1U;
    this->stopstate = 1U;
    this->rxactivehs = 0U;
    __Vfunc_normal_ulpsactivenot_value__16__Vfuncout 
        = (1U & (~ (IData)(this->__PVT__rtl_ulps_polarity_workaround)));
    this->ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__16__Vfuncout;
    this->rx_lane_sts_reg7 = 0U;
    this->rx_lane_sts_reg4 = 0U;
    this->rxvalidhs = 0U;
    this->rxsynchs = 0U;
    this->rxinvalidcodehs = 0U;
    this->rxdatahs = 0ULL;
    this->rxsynctypehs0 = 0U;
    this->rxsynctypehs1 = 0U;
    this->rxsynctypehs2 = 0U;
    this->rxsynctypehs3 = 0U;
    this->rxcalibrationprehs = 0U;
    this->rxcalibrationformat = 0U;
    this->rxerrcalhs = 0U;
    this->rxalpvalidhs = 0U;
    this->rxalpcode0 = 0U;
    this->rxalpcode1 = 0U;
    this->rxalpcode2 = 0U;
    this->rxalpcode3 = 0U;
    this->rxalpnibble0 = 0U;
    this->rxalpnibble1 = 0U;
    this->rxalpnibble2 = 0U;
    this->rxalpnibble3 = 0U;
    this->rxlpdtesc = 0U;
    this->rxulpsesc = 0U;
    this->rxvalidesc = 0U;
    this->rxtriggeresc = 0U;
    this->rxdataesc = 0U;
    this->errsoths = 0U;
    this->errsotsynchs = 0U;
    this->erresc = 0U;
    this->errsyncesc = 0U;
    this->errcontrol = 0U;
    this->errcontentionlp0 = 0U;
    this->errcontentionlp1 = 0U;
}

void Vcsi2_tb_top_c_phy_bfm_if___eval_initial__TOP__csi2_tb_top__DOT__phy_bfm(Vcsi2_tb_top_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if___eval_initial__TOP__csi2_tb_top__DOT__phy_bfm\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.lane_configuration = 2U;
    vlSelfRef.mode_selection = 0U;
    vlSelfRef.__PVT__active_segment_mask = 0x0fU;
    vlSelfRef.__PVT__rtl_sync_workaround = 1U;
    vlSelfRef.__PVT__rtl_ulps_polarity_workaround = 1U;
    vlSelfRef.__PVT__rtl_eot_workaround = 1U;
    vlSelfRef.__PVT__last_status = 0U;
    vlSelfRef.__PVT__bfm_state = 0U;
    vlSelfRef.__PVT__pending_sot_on_first_word = 0U;
    vlSelfRef.direction = 1U;
    vlSelfRef.stopstate = 1U;
    vlSelfRef.rxactivehs = 0U;
    vlSelfRef.ulpsactivenot = 0U;
    vlSelfRef.rx_lane_sts_reg7 = 0U;
    vlSelfRef.rx_lane_sts_reg4 = 0U;
    vlSelfRef.rxvalidhs = 0U;
    vlSelfRef.rxsynchs = 0U;
    vlSelfRef.rxinvalidcodehs = 0U;
    vlSelfRef.rxdatahs = 0ULL;
    vlSelfRef.rxsynctypehs0 = 0U;
    vlSelfRef.rxsynctypehs1 = 0U;
    vlSelfRef.rxsynctypehs2 = 0U;
    vlSelfRef.rxsynctypehs3 = 0U;
    vlSelfRef.rxcalibrationprehs = 0U;
    vlSelfRef.rxcalibrationformat = 0U;
    vlSelfRef.rxerrcalhs = 0U;
    vlSelfRef.rxalpvalidhs = 0U;
    vlSelfRef.rxalpcode0 = 0U;
    vlSelfRef.rxalpcode1 = 0U;
    vlSelfRef.rxalpcode2 = 0U;
    vlSelfRef.rxalpcode3 = 0U;
    vlSelfRef.rxalpnibble0 = 0U;
    vlSelfRef.rxalpnibble1 = 0U;
    vlSelfRef.rxalpnibble2 = 0U;
    vlSelfRef.rxalpnibble3 = 0U;
    vlSelfRef.rxlpdtesc = 0U;
    vlSelfRef.rxulpsesc = 0U;
    vlSelfRef.rxvalidesc = 0U;
    vlSelfRef.rxtriggeresc = 0U;
    vlSelfRef.rxdataesc = 0U;
    vlSelfRef.errsoths = 0U;
    vlSelfRef.errsotsynchs = 0U;
    vlSelfRef.erresc = 0U;
    vlSelfRef.errsyncesc = 0U;
    vlSelfRef.errcontrol = 0U;
    vlSelfRef.errcontentionlp0 = 0U;
    vlSelfRef.errcontentionlp1 = 0U;
}

void Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__0(Vcsi2_tb_top_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__0\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_ON, 2, 1)) {
        if (vlSymsp->_vm_contextp__->assertCtlGet(VerilatedAssertCtlQuery::ASSERT_CTL_FAIL_ON, 2, 1)) {
            if ((((IData)(vlSelfRef.rst_n) & (~ (IData)(vlSelfRef.__PVT__rtl_sync_workaround))) 
                 & (0U != (IData)(vlSelfRef.rxsynchs)))) {
                if (VL_UNLIKELY(((((IData)(vlSelfRef.rxvalidhs) 
                                   & (IData)(vlSelfRef.rxsynchs)) 
                                  != (IData)(vlSelfRef.rxsynchs))))) {
                    VL_WRITEF_NX("[%0t] %%Error: c_phy_bfm_if.sv:723: Assertion failed in %m: C-PHY BFM: Sync asserted without matching Valid segments\n",3, 'M',vlSymsp->name(),"csi2_tb_top.phy_bfm", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1000));
                    VL_STOP_MT("c_phy_bfm_if.sv", 723, "");
                }
            }
        }
    }
}

void Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__1(Vcsi2_tb_top_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__1\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_normal_ulpsactivenot_value__24__Vfuncout;
    __Vfunc_normal_ulpsactivenot_value__24__Vfuncout = 0;
    // Body
    vlSelfRef.rxerrcalhs = 0U;
    vlSelfRef.rxcalibrationprehs = 0U;
    vlSelfRef.rxdatahs = 0ULL;
    vlSelfRef.rxalpnibble0 = 0U;
    vlSelfRef.rxinvalidcodehs = 0U;
    vlSelfRef.rxalpnibble2 = 0U;
    vlSelfRef.rxsynctypehs0 = 0U;
    vlSelfRef.__PVT__bfm_state = 0U;
    vlSelfRef.rxsynctypehs1 = 0U;
    vlSelfRef.__PVT__pending_sot_on_first_word = 0U;
    vlSelfRef.rxsynctypehs2 = 0U;
    vlSelfRef.direction = 1U;
    vlSelfRef.rxalpcode0 = 0U;
    vlSelfRef.rx_lane_sts_reg7 = 0U;
    vlSelfRef.rxsynctypehs3 = 0U;
    vlSelfRef.rxalpcode1 = 0U;
    vlSelfRef.rx_lane_sts_reg4 = 0U;
    vlSelfRef.rxalpcode2 = 0U;
    vlSelfRef.rxalpcode3 = 0U;
    vlSelfRef.rxcalibrationformat = 0U;
    vlSelfRef.rxdataesc = 0U;
    vlSelfRef.rxalpnibble1 = 0U;
    vlSelfRef.rxalpnibble3 = 0U;
    vlSelfRef.rxlpdtesc = 0U;
    vlSelfRef.rxulpsesc = 0U;
    vlSelfRef.rxvalidesc = 0U;
    vlSelfRef.rxtriggeresc = 0U;
    vlSelfRef.rxalpvalidhs = 0U;
    vlSelfRef.stopstate = 1U;
    vlSelfRef.rxsynchs = 0U;
    __Vfunc_normal_ulpsactivenot_value__24__Vfuncout 
        = (1U & (~ (IData)(vlSelfRef.__PVT__rtl_ulps_polarity_workaround)));
    vlSelfRef.ulpsactivenot = __Vfunc_normal_ulpsactivenot_value__24__Vfuncout;
    vlSelfRef.rxvalidhs = 0U;
    vlSelfRef.errcontentionlp1 = 0U;
    vlSelfRef.erresc = 0U;
    vlSelfRef.errsyncesc = 0U;
    vlSelfRef.rxactivehs = 0U;
    vlSelfRef.errcontrol = 0U;
    vlSelfRef.errcontentionlp0 = 0U;
    vlSelfRef.errsoths = 0U;
    vlSelfRef.errsotsynchs = 0U;
}

void Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__2(Vcsi2_tb_top_c_phy_bfm_if* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                              Vcsi2_tb_top_c_phy_bfm_if___act_sequent__TOP__csi2_tb_top__DOT__phy_bfm__2\n"); );
    Vcsi2_tb_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.rxwordclkhs = vlSelfRef.bfm_clk;
    vlSelfRef.cphy_rxwordclkhs = vlSelfRef.bfm_clk;
    vlSelfRef.rxclkesc = vlSelfRef.bfm_clk;
}
