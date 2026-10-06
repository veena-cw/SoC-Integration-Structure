// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_axi4_to_apb_bridge_cdc__Syms.h"


VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_dtype____0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_sub__TOP__0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_sub__TOP__0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_axi4_to_apb_bridge_cdc", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"AXI_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+257,0,"AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+256,0,"APB_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"AXI_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+259,0,"AXI_STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"APB_STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"RATIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+260,0,"SPI_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+261,0,"I2C_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+262,0,"UART_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+263,0,"GPIO_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+264,0,"MIPI_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+265,0,"HDMI_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+266,0,"TIMER_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+267,0,"DEBUG_BASE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);

    Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_dtype____0(vlSelf, tracep, "PERIPH_BASE", 0, c+0, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"ACLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"PCLK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"ARESETn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"PRESETn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"AWID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"AWADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"AWLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"AWSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"AWBURST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"AWLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"AWCACHE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"AWPROT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"AWVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"AWREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+78,0,"WDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"WSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"WLAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"WVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"WREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"BID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"BRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"BVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"BREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"ARID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"ARADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"ARLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"ARSIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"ARBURST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"ARLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"ARCACHE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"ARPROT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"ARVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"ARREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"RID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+135,0,"RDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"RRESP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"RLAST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"RVALID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"RREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"PADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"PENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"PWRITE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"PPROT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"PSTRB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"PWDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"PRDATA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"PREADY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"PSLVERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"spi_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"i2c_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"uart_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"gpio_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"mipi_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"hdmi_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"timer_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"debug_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+196,0,"psel_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BIT(tracep,c+197,0,"any_psel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"uart_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"uart_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"uart_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"spi_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"spi_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"spi_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"i2c_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"i2c_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"i2c_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+98,0,"gpio_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+99,0,"gpio_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+100,0,"gpio_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+101,0,"mipi_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+102,0,"mipi_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+103,0,"mipi_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+104,0,"hdmi_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+105,0,"hdmi_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+106,0,"hdmi_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+107,0,"timer_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+108,0,"timer_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+109,0,"timer_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+110,0,"debug_prdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+111,0,"debug_pready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+112,0,"debug_pslverr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+8,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+9,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+60,0,"decode_error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+10,0,"error_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "test_data", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+11+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 127,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_WIDE(tracep,c+43,0,"exp_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+47,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"AXI_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+270,0,"AXI_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+269,0,"APB_DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"AXI_ID_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"CDC_FIFO_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"ACLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"ARESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+69,0,"AWID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+70,0,"AWADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"AWLEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"AWSIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"AWBURST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"AWLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+75,0,"AWCACHE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+76,0,"AWPROT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+77,0,"AWVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+129,0,"AWREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+78,0,"WDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"WSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+83,0,"WLAST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+84,0,"WVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+130,0,"WREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"BID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"BRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"BVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+85,0,"BREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"ARID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"ARADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"ARLEN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"ARSIZE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+90,0,"ARBURST",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+91,0,"ARLOCK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+92,0,"ARCACHE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+93,0,"ARPROT",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+94,0,"ARVALID",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+250,0,"ARREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"RID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+135,0,"RDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"RRESP",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"RLAST",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"RVALID",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+95,0,"RREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"PCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"PRESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"PADDR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"PENABLE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"PWRITE",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"PPROT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"PSTRB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"PWDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+187,0,"PRDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+96,0,"PREADY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+97,0,"PSLVERR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"spi_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"i2c_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"uart_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+191,0,"gpio_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+192,0,"mipi_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+193,0,"hdmi_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+194,0,"timer_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+195,0,"debug_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+272,0,"AXI_STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"APB_STRB_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+271,0,"RATIO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+273,0,"SUB_CNT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+274,0,"CMD_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+275,0,"RESP_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"AXBURST_FIXED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"AXBURST_WRAP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+276,0,"XRESP_OKAY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+277,0,"XRESP_SLVERR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"cmd_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"cmd_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"cmd_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"cmd_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+144,0,"cmd_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+239,0,"cmd_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"resp_wr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"resp_rd_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"resp_full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"resp_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+205,0,"resp_data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_QUAD(tracep,c+232,0,"resp_data_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BUS(tracep,c+149,0,"axi_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+150,0,"id_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+151,0,"cur_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+152,0,"len_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+153,0,"size_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+154,0,"burst_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+155,0,"prot_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+156,0,"beat_cnt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 7,0);
    VL_TRACE_DECL_BUS(tracep,c+157,0,"sub_cnt_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_WIDE(tracep,c+158,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+162,0,"wstrb_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 15,0);
    VL_TRACE_DECL_BIT(tracep,c+163,0,"wresp_err_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+131,0,"bid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+132,0,"bresp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+133,0,"bvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+134,0,"rid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+135,0,"rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BUS(tracep,c+139,0,"rresp_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+140,0,"rlast_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+141,0,"rvalid_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+164,0,"rdata_acc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+168,0,"rresp_err_acc_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+169,0,"beat_base_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+170,0,"sub_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+171,0,"sub_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+172,0,"sub_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_WIDE(tracep,c+234,0,"rdata_acc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 127,0);
    VL_TRACE_DECL_BIT(tracep,c+238,0,"rresp_err_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+207,0,"apb_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"p_write_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+184,0,"p_prot_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"p_addr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"p_wstrb_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"p_wdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+208,0,"p_err_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+209,0,"p_rdata_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+210,0,"psel_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"spi_psel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"i2c_psel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"uart_psel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"gpio_psel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"mipi_psel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"hdmi_psel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"timer_psel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"debug_psel_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_PUSH_PREFIX(tracep, "cmd_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"wrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"rrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+144,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_WIDE(tracep,c+239,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"g_wptr_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"g_rptr_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"b_wptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"b_rptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"g_wptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"g_rptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+280,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+281,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "fifom", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+278,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"b_wptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"b_rptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_WIDE(tracep,c+144,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_WIDE(tracep,c+239,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 71,0);
    VL_TRACE_PUSH_PREFIX(tracep, "fifo", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_WIDE_ARRAY(tracep,c+48+i*3,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 71,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+282,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rptr_h", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"rrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+201,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"g_wptr_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+113,0,"b_rptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"g_rptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+202,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+221,0,"rempty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+222,0,"b_rptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+223,0,"g_rptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sync_rptr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+220,0,"d_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"d_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+175,0,"q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sync_wptr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"d_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+219,0,"d_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+224,0,"q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "wptr_h", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"wrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+142,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+173,0,"g_rptr_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+174,0,"b_wptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+242,0,"g_wptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+143,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+176,0,"b_wptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+243,0,"g_wptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+283,0,"wrap_around",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+254,0,"wfull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "resp_fifo", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"wrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"rrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+205,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_QUAD(tracep,c+232,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"g_wptr_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"g_rptr_sync",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"b_wptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"b_rptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+227,0,"g_wptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"g_rptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+285,0,"waddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BUS(tracep,c+286,0,"raddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_PUSH_PREFIX(tracep, "fifom", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+258,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+284,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"b_wptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"b_rptr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_QUAD(tracep,c+205,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"full",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"empty",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_QUAD(tracep,c+232,0,"data_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 32,0);
    VL_TRACE_PUSH_PREFIX(tracep, "fifo", VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 3);
    for (int i = 0; i < 4; ++i) {
        VL_TRACE_DECL_QUAD_ARRAY(tracep,c+61+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 32,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_DECL_BUS(tracep,c+287,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "rptr_h", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"rclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"rrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+147,0,"r_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"g_wptr_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+178,0,"b_rptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"g_rptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+148,0,"empty",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+255,0,"rempty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+179,0,"b_rptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+245,0,"g_rptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sync_rptr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+244,0,"d_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"d_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+228,0,"q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "sync_wptr", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+246,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+248,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+227,0,"d_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+177,0,"d_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+180,0,"q1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "wptr_h", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+279,0,"PTR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"wclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"wrst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+203,0,"w_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+225,0,"g_rptr_sync",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+226,0,"b_wptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+227,0,"g_wptr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+204,0,"full",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+229,0,"b_wptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BUS(tracep,c+230,0,"g_wptr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 2,0);
    VL_TRACE_DECL_BIT(tracep,c+288,0,"wrap_around",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+231,0,"wfull",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "u_apb_slave_decoder", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+211,0,"spi_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+212,0,"i2c_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+213,0,"uart_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+214,0,"gpio_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+215,0,"mipi_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+216,0,"hdmi_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+217,0,"timer_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+218,0,"debug_psel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "i2c_bfm", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"WAIT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"PCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"PRESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+189,0,"PSEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"PENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"PWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"PADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"PWDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"PSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+253,0,"PRDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"PREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"PSLVERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+114,0,"data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+115,0,"ctrl_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+116,0,"clk_div_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+117,0,"irq_status_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+118,0,"status_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+119,0,"wait_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+200,0,"apb_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "spi_bfm", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"WAIT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"PCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"PRESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+188,0,"PSEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"PENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"PWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"PADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"PWDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"PSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+252,0,"PRDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"PREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"PSLVERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+120,0,"tx_data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+121,0,"ctrl_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+122,0,"clk_div_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+123,0,"wait_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+199,0,"apb_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_PUSH_PREFIX(tracep, "uart_bfm", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+289,0,"WAIT_CYCLES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+247,0,"PCLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+249,0,"PRESETn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+190,0,"PSEL",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+182,0,"PENABLE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+183,0,"PWRITE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+181,0,"PADDR",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+186,0,"PWDATA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+185,0,"PSTRB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+251,0,"PRDATA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"PREADY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+268,0,"PSLVERR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+124,0,"data_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+125,0,"ctrl_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+126,0,"baud_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+127,0,"irq_status_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+128,0,"wait_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+198,0,"apb_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_dtype_sub____0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_dtype____0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_dtype____0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_dtype_sub____0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_dtype_sub____0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 7);
    for (int i = 0; i < 8; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 31,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_top(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_top\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi4_to_apb_bridge_cdc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_register(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_register\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_axi4_to_apb_bridge_cdc___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_axi4_to_apb_bridge_cdc___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_axi4_to_apb_bridge_cdc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_const_0_sub_0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_const_0\n"); );
    // Body
    Vtb_axi4_to_apb_bridge_cdc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_to_apb_bridge_cdc___024root*>(voidSelf);
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_const_0_sub_0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_const_0_sub_0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+256,(0x00000020U),32);
    bufp->fullIData(oldp+257,(0x00000080U),32);
    bufp->fullIData(oldp+258,(4U),32);
    bufp->fullIData(oldp+259,(0x00000010U),32);
    bufp->fullIData(oldp+260,(0x30000000U),32);
    bufp->fullIData(oldp+261,(0x30010000U),32);
    bufp->fullIData(oldp+262,(0x30020000U),32);
    bufp->fullIData(oldp+263,(0x30030000U),32);
    bufp->fullIData(oldp+264,(0x30040000U),32);
    bufp->fullIData(oldp+265,(0x30050000U),32);
    bufp->fullIData(oldp+266,(0x30060000U),32);
    bufp->fullIData(oldp+267,(0x30070000U),32);
    bufp->fullBit(oldp+268,(0U));
    bufp->fullIData(oldp+269,(0x00000020U),32);
    bufp->fullIData(oldp+270,(0x00000080U),32);
    bufp->fullIData(oldp+271,(4U),32);
    bufp->fullIData(oldp+272,(0x00000010U),32);
    bufp->fullIData(oldp+273,(2U),32);
    bufp->fullIData(oldp+274,(0x00000048U),32);
    bufp->fullIData(oldp+275,(0x00000021U),32);
    bufp->fullCData(oldp+276,(0U),2);
    bufp->fullCData(oldp+277,(2U),2);
    bufp->fullIData(oldp+278,(0x00000048U),32);
    bufp->fullIData(oldp+279,(2U),32);
    bufp->fullCData(oldp+280,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__waddr),2);
    bufp->fullCData(oldp+281,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__raddr),2);
    bufp->fullIData(oldp+282,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__i),32);
    bufp->fullBit(oldp+283,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__wrap_around));
    bufp->fullIData(oldp+284,(0x00000021U),32);
    bufp->fullCData(oldp+285,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__waddr),2);
    bufp->fullCData(oldp+286,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__raddr),2);
    bufp->fullIData(oldp+287,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__i),32);
    bufp->fullBit(oldp+288,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__wrap_around));
    bufp->fullIData(oldp+289,(0U),32);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_0_sub_0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_0\n"); );
    // Body
    Vtb_axi4_to_apb_bridge_cdc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_to_apb_bridge_cdc___024root*>(voidSelf);
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_dtype____0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_0_sub_0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_0_sub_0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_dtype____0(vlSelf, bufp, 0, vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PERIPH_BASE);
    bufp->fullIData(oldp+8,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__d),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__a),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__error_count),32);
    bufp->fullWData(oldp+11,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[0]),128);
    bufp->fullWData(oldp+15,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[1]),128);
    bufp->fullWData(oldp+19,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[2]),128);
    bufp->fullWData(oldp+23,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[3]),128);
    bufp->fullWData(oldp+27,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[4]),128);
    bufp->fullWData(oldp+31,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[5]),128);
    bufp->fullWData(oldp+35,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[6]),128);
    bufp->fullWData(oldp+39,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__test_data[7]),128);
    bufp->fullWData(oldp+43,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__exp_data),128);
    bufp->fullIData(oldp+47,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__idx),32);
    bufp->fullWData(oldp+48,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[0]),72);
    bufp->fullWData(oldp+51,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[1]),72);
    bufp->fullWData(oldp+54,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[2]),72);
    bufp->fullWData(oldp+57,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__fifom__DOT__fifo[3]),72);
    bufp->fullIData(oldp+60,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__decode_error_count),32);
    bufp->fullQData(oldp+61,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[0]),33);
    bufp->fullQData(oldp+63,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[1]),33);
    bufp->fullQData(oldp+65,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[2]),33);
    bufp->fullQData(oldp+67,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__fifom__DOT__fifo[3]),33);
    bufp->fullCData(oldp+69,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWID),4);
    bufp->fullIData(oldp+70,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWADDR),32);
    bufp->fullCData(oldp+71,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLEN),8);
    bufp->fullCData(oldp+72,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWSIZE),3);
    bufp->fullCData(oldp+73,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWBURST),2);
    bufp->fullBit(oldp+74,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWLOCK));
    bufp->fullCData(oldp+75,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWCACHE),4);
    bufp->fullCData(oldp+76,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWPROT),3);
    bufp->fullBit(oldp+77,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID));
    bufp->fullWData(oldp+78,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WDATA),128);
    bufp->fullSData(oldp+82,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WSTRB),16);
    bufp->fullBit(oldp+83,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WLAST));
    bufp->fullBit(oldp+84,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__WVALID));
    bufp->fullBit(oldp+85,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__BREADY));
    bufp->fullCData(oldp+86,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARID),4);
    bufp->fullIData(oldp+87,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARADDR),32);
    bufp->fullCData(oldp+88,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLEN),8);
    bufp->fullCData(oldp+89,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARSIZE),3);
    bufp->fullCData(oldp+90,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARBURST),2);
    bufp->fullBit(oldp+91,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARLOCK));
    bufp->fullCData(oldp+92,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARCACHE),4);
    bufp->fullCData(oldp+93,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARPROT),3);
    bufp->fullBit(oldp+94,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARVALID));
    bufp->fullBit(oldp+95,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__RREADY));
    bufp->fullBit(oldp+96,((((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                              ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY)
                              : ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                  ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY)
                                  : ((4U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                      ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY)
                                      : ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                          ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready)
                                          : ((0x10U 
                                              == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                              ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready)
                                              : ((0x20U 
                                                  == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                  ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready)
                                                  : 
                                                 ((0x40U 
                                                   == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                   ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready)
                                                   : (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready)))))))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
    bufp->fullBit(oldp+97,((((1U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                             && ((2U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                 && ((4U != (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus)) 
                                     && ((8U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                          ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr)
                                          : ((0x10U 
                                              == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                              ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr)
                                              : ((0x20U 
                                                  == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                  ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr)
                                                  : 
                                                 ((0x40U 
                                                   == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus))
                                                   ? (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr)
                                                   : (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr)))))))) 
                            & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1))));
    bufp->fullIData(oldp+98,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_prdata),32);
    bufp->fullBit(oldp+99,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pready));
    bufp->fullBit(oldp+100,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__gpio_pslverr));
    bufp->fullIData(oldp+101,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_prdata),32);
    bufp->fullBit(oldp+102,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pready));
    bufp->fullBit(oldp+103,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__mipi_pslverr));
    bufp->fullIData(oldp+104,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_prdata),32);
    bufp->fullBit(oldp+105,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pready));
    bufp->fullBit(oldp+106,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__hdmi_pslverr));
    bufp->fullIData(oldp+107,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_prdata),32);
    bufp->fullBit(oldp+108,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pready));
    bufp->fullBit(oldp+109,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__timer_pslverr));
    bufp->fullIData(oldp+110,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_prdata),32);
    bufp->fullBit(oldp+111,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pready));
    bufp->fullBit(oldp+112,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__debug_pslverr));
    bufp->fullCData(oldp+113,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_rptr),3);
    bufp->fullIData(oldp+114,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg),32);
    bufp->fullIData(oldp+115,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg),32);
    bufp->fullIData(oldp+116,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg),32);
    bufp->fullIData(oldp+117,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg),32);
    bufp->fullIData(oldp+118,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__status_reg),32);
    bufp->fullIData(oldp+119,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__wait_count),32);
    bufp->fullIData(oldp+120,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg),32);
    bufp->fullIData(oldp+121,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg),32);
    bufp->fullIData(oldp+122,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg),32);
    bufp->fullIData(oldp+123,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__wait_count),32);
    bufp->fullIData(oldp+124,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg),32);
    bufp->fullIData(oldp+125,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg),32);
    bufp->fullIData(oldp+126,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg),32);
    bufp->fullIData(oldp+127,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg),32);
    bufp->fullIData(oldp+128,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__wait_count),32);
    bufp->fullBit(oldp+129,((0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))));
    bufp->fullBit(oldp+130,((1U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))));
    bufp->fullCData(oldp+131,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bid_r),4);
    bufp->fullCData(oldp+132,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bresp_r),2);
    bufp->fullBit(oldp+133,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__bvalid_r));
    bufp->fullCData(oldp+134,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rid_r),4);
    bufp->fullWData(oldp+135,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_r),128);
    bufp->fullCData(oldp+139,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_r),2);
    bufp->fullBit(oldp+140,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rlast_r));
    bufp->fullBit(oldp+141,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rvalid_r));
    bufp->fullBit(oldp+142,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__w_en));
    bufp->fullBit(oldp+143,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_full));
    if ((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state))) {
        __Vtemp_1[0U] = (IData)((((QData)((IData)((0x0000000fU 
                                                   & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg) 
                                                      >> 
                                                      ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                                       << 2U))))) 
                                  << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg
                                                                    [
                                                                    (0x07ffffffU 
                                                                     & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))]))));
        __Vtemp_1[1U] = ((vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                          << 4U) | (IData)(((((QData)((IData)(
                                                              (0x0000000fU 
                                                               & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg) 
                                                                  >> 
                                                                  ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                                                   << 2U))))) 
                                              << 0x00000020U) 
                                             | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg
                                                               [
                                                               (0x07ffffffU 
                                                                & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))]))) 
                                            >> 0x00000020U)));
        __Vtemp_1[2U] = (0x00000080U | (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r) 
                                         << 4U) | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                                                   >> 0x0000001cU)));
    } else {
        __Vtemp_1[0U] = 0U;
        __Vtemp_1[1U] = (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                         << 4U);
        __Vtemp_1[2U] = (((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r) 
                          << 4U) | (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr 
                                    >> 0x0000001cU));
    }
    bufp->fullWData(oldp+144,(__Vtemp_1),72);
    bufp->fullBit(oldp+147,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__r_en));
    bufp->fullBit(oldp+148,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_empty));
    bufp->fullCData(oldp+149,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state),4);
    bufp->fullCData(oldp+150,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__id_r),4);
    bufp->fullIData(oldp+151,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r),32);
    bufp->fullCData(oldp+152,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__len_r),8);
    bufp->fullCData(oldp+153,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__size_r),3);
    bufp->fullCData(oldp+154,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__burst_r),2);
    bufp->fullCData(oldp+155,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__prot_r),3);
    bufp->fullCData(oldp+156,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__beat_cnt_r),8);
    bufp->fullCData(oldp+157,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r),2);
    bufp->fullWData(oldp+158,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg),128);
    bufp->fullSData(oldp+162,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg),16);
    bufp->fullBit(oldp+163,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wresp_err_r));
    bufp->fullWData(oldp+164,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_r),128);
    bufp->fullBit(oldp+168,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_acc_r));
    bufp->fullIData(oldp+169,((0xfffffff0U & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cur_addr_r)),32);
    bufp->fullIData(oldp+170,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_addr),32);
    bufp->fullIData(oldp+171,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wdata_reg
                              [(0x07ffffffU & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r))]),32);
    bufp->fullCData(oldp+172,((0x0000000fU & ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__wstrb_reg) 
                                              >> ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__sub_cnt_r) 
                                                  << 2U)))),4);
    bufp->fullCData(oldp+173,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync),3);
    bufp->fullCData(oldp+174,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__b_wptr),3);
    bufp->fullCData(oldp+175,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_rptr__DOT__q1),3);
    bufp->fullCData(oldp+176,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__b_wptr_next),3);
    bufp->fullCData(oldp+177,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr_sync),3);
    bufp->fullCData(oldp+178,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_rptr),3);
    bufp->fullCData(oldp+179,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__b_rptr_next),3);
    bufp->fullCData(oldp+180,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_wptr__DOT__q1),3);
    bufp->fullIData(oldp+181,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r),32);
    bufp->fullBit(oldp+182,((2U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state))));
    bufp->fullBit(oldp+183,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_write_r));
    bufp->fullCData(oldp+184,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_prot_r),3);
    bufp->fullCData(oldp+185,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wstrb_r),4);
    bufp->fullIData(oldp+186,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_wdata_r),32);
    bufp->fullIData(oldp+187,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__PRDATA),32);
    bufp->fullBit(oldp+188,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel));
    bufp->fullBit(oldp+189,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel));
    bufp->fullBit(oldp+190,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel));
    bufp->fullBit(oldp+191,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel));
    bufp->fullBit(oldp+192,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel));
    bufp->fullBit(oldp+193,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel));
    bufp->fullBit(oldp+194,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel));
    bufp->fullBit(oldp+195,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel));
    bufp->fullCData(oldp+196,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__psel_bus),8);
    bufp->fullBit(oldp+197,(((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel) 
                             | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel) 
                                | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel) 
                                   | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__gpio_psel) 
                                      | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__mipi_psel) 
                                         | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__hdmi_psel) 
                                            | ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__timer_psel) 
                                               | (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__debug_psel))))))))));
    bufp->fullBit(oldp+198,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__PREADY));
    bufp->fullBit(oldp+199,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__PREADY));
    bufp->fullBit(oldp+200,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__PREADY));
    bufp->fullBit(oldp+201,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__r_en));
    bufp->fullBit(oldp+202,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_empty));
    bufp->fullBit(oldp+203,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__w_en));
    bufp->fullBit(oldp+204,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_full));
    bufp->fullQData(oldp+205,((((QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_err_r)) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_rdata_r)))),33);
    bufp->fullCData(oldp+207,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__apb_state),2);
    bufp->fullBit(oldp+208,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_err_r));
    bufp->fullIData(oldp+209,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_rdata_r),32);
    bufp->fullBit(oldp+210,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__psel_active));
    bufp->fullBit(oldp+211,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 7U))));
    bufp->fullBit(oldp+212,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 6U))));
    bufp->fullBit(oldp+213,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 5U))));
    bufp->fullBit(oldp+214,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 4U))));
    bufp->fullBit(oldp+215,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 3U))));
    bufp->fullBit(oldp+216,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 2U))));
    bufp->fullBit(oldp+217,((1U & ((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0) 
                                   >> 1U))));
    bufp->fullBit(oldp+218,((1U & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))));
    bufp->fullCData(oldp+219,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr_sync),3);
    bufp->fullCData(oldp+220,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr),3);
    bufp->fullBit(oldp+221,(((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr_sync) 
                             == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next))));
    bufp->fullCData(oldp+222,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__b_rptr_next),3);
    bufp->fullCData(oldp+223,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__rptr_h__DOT__g_rptr_next),3);
    bufp->fullCData(oldp+224,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__sync_wptr__DOT__q1),3);
    bufp->fullCData(oldp+225,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync),3);
    bufp->fullCData(oldp+226,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__b_wptr),3);
    bufp->fullCData(oldp+227,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr),3);
    bufp->fullCData(oldp+228,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__sync_rptr__DOT__q1),3);
    bufp->fullCData(oldp+229,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__b_wptr_next),3);
    bufp->fullCData(oldp+230,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next),3);
    bufp->fullBit(oldp+231,((((6U & ((~ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync) 
                                         >> 1U)) << 1U)) 
                              | (1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr_sync))) 
                             == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__wptr_h__DOT__g_wptr_next))));
    bufp->fullQData(oldp+232,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__data_out),33);
    bufp->fullWData(oldp+234,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rdata_acc_next),128);
    bufp->fullBit(oldp+238,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__rresp_err_next));
    bufp->fullWData(oldp+239,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__data_out),72);
    bufp->fullCData(oldp+242,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_wptr),3);
    bufp->fullCData(oldp+243,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next),3);
    bufp->fullCData(oldp+244,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_rptr),3);
    bufp->fullCData(oldp+245,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next),3);
    bufp->fullBit(oldp+246,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ACLK));
    bufp->fullBit(oldp+247,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PCLK));
    bufp->fullBit(oldp+248,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__ARESETn));
    bufp->fullBit(oldp+249,(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__PRESETn));
    bufp->fullBit(oldp+250,(((~ (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__AWVALID)) 
                             & (0U == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__axi_state)))));
    bufp->fullIData(oldp+251,((((0U == (0x000000ffU 
                                        & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                 ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__data_reg
                                 : ((4U == (0x000000ffU 
                                            & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                     ? 1U : ((8U == 
                                              (0x000000ffU 
                                               & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                              ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__ctrl_reg
                                              : ((0x0cU 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                                  ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__baud_reg
                                                  : 
                                                 (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__uart_bfm__DOT__irq_status_reg 
                                                  & (- (IData)(
                                                               (0x10U 
                                                                == 
                                                                (0x000000ffU 
                                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                               & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__uart_psel))))),32);
    bufp->fullIData(oldp+252,((((0U == (0x000000ffU 
                                        & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                 ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg
                                 : ((4U == (0x000000ffU 
                                            & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                     ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__tx_data_reg
                                     : ((8U == (0x000000ffU 
                                                & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                         ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__ctrl_reg
                                         : ((0x0cU 
                                             == (0x000000ffU 
                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                             ? 1U : 
                                            (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__spi_bfm__DOT__clk_div_reg 
                                             & (- (IData)(
                                                          (0x10U 
                                                           == 
                                                           (0x000000ffU 
                                                            & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                               & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__spi_psel))))),32);
    bufp->fullIData(oldp+253,((((0U == (0x000000ffU 
                                        & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                 ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__data_reg
                                 : ((4U == (0x000000ffU 
                                            & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                     ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__ctrl_reg
                                     : ((8U == (0x000000ffU 
                                                & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                         ? 1U : ((0x0cU 
                                                  == 
                                                  (0x000000ffU 
                                                   & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))
                                                  ? vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__clk_div_reg
                                                  : 
                                                 (vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__i2c_bfm__DOT__irq_status_reg 
                                                  & (- (IData)(
                                                               (0x10U 
                                                                == 
                                                                (0x000000ffU 
                                                                 & vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__p_addr_r))))))))) 
                               & (- (IData)((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__i2c_psel))))),32);
    bufp->fullBit(oldp+254,((((6U & ((~ ((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync) 
                                         >> 1U)) << 1U)) 
                              | (1U & (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__g_rptr_sync))) 
                             == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__cmd_fifo__DOT__wptr_h__DOT__g_wptr_next))));
    bufp->fullBit(oldp+255,(((IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__g_wptr_sync) 
                             == (IData)(vlSelfRef.tb_axi4_to_apb_bridge_cdc__DOT__dut__DOT__resp_fifo__DOT__rptr_h__DOT__g_rptr_next))));
}

VL_ATTR_COLD void Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_dtype____0(Vtb_axi4_to_apb_bridge_cdc___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi4_to_apb_bridge_cdc___024root__trace_full_dtype____0\n"); );
    Vtb_axi4_to_apb_bridge_cdc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->fullIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->fullIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->fullIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->fullIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->fullIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->fullIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->fullIData(oldp+7,(__VdtypeVar[7]),32);
}
