//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_pkg
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: DUT (tpu_host_top) port widths, CSR map and command-entry constants.
//               Values follow dsn/rtl/tpu_host_top.sv, tpu_register_bank.sv and
//               tpu_command_scheduler.sv.
//=================================================================================
`ifndef TPU_HOST_PKG_SV
`define TPU_HOST_PKG_SV
package tpu_host_pkg;

  // ---- DUT parameters (tpu_host_top defaults) ----
  parameter int AXIL_ADDR_W    = 8;
  parameter int AXI_ID_W       = 1;
  parameter int UB_DEPTH       = 128;   // 16-bit words
  parameter int QUEUE_DEPTH    = 16;
  parameter int MAX_BURST      = 16;    // beats

  // ---- clocks (TPU_Host_Interface.pdf, Table 1.1): three asynchronous domains ----
  parameter real CLK_TPU_PERIOD_NS  = 1.25;    // clk_tpu  800 MHz: TPU core, register bank, scheduler, DMA
  parameter real CLK_AXIL_PERIOD_NS = 10.0;    // clk_axil 100 MHz: AXI4-Lite slave, irq
  parameter real CLK_AXI_PERIOD_NS  = 2.5;     // clk_axi  400 MHz: AXI4 master

  // ---- port widths ----
  parameter int M_AXIL_AWADDR_W = AXIL_ADDR_W;
  parameter int M_AXIL_ARADDR_W = AXIL_ADDR_W;
  parameter int M_AXIL_WDATA_W  = 32;
  parameter int M_AXIL_WSTRB_W  = 4;
  parameter int S_AXI_ID_W      = AXI_ID_W;
  parameter int S_AXI_ADDR_W    = 32;
  parameter int S_AXI_DATA_W    = 128;
  parameter int S_AXI_STRB_W    = 16;

  // ---- CSR byte offsets (tpu_register_bank.sv) ----
  parameter bit [7:0] CSR_CONTROL    = 8'h00;
  parameter bit [7:0] CSR_STATUS     = 8'h04;
  parameter bit [7:0] CSR_INT_ENABLE = 8'h08;
  parameter bit [7:0] CSR_ERROR_CODE = 8'h0C;
  parameter bit [7:0] CSR_SRC_ADDR   = 8'h10;
  parameter bit [7:0] CSR_DST_ADDR   = 8'h14;
  parameter bit [7:0] CSR_XFER_LEN   = 8'h18;
  parameter bit [7:0] CSR_UB_ADDR    = 8'h1C;
  parameter bit [7:0] CSR_LR         = 8'h20;
  parameter bit [7:0] CSR_INSTR0     = 8'h24;
  parameter bit [7:0] CSR_INSTR1     = 8'h28;
  parameter bit [7:0] CSR_INSTR2     = 8'h2C;
  parameter bit [7:0] CSR_INSTR3     = 8'h30;
  parameter bit [7:0] CSR_INSTR4     = 8'h34;
  parameter bit [7:0] CSR_TIMEOUT    = 8'h38;
  parameter bit [7:0] CSR_VERSION    = 8'h3C;

  parameter bit [31:0] VERSION_VALUE   = 32'h5450_0001;
  parameter bit [31:0] TIMEOUT_RESET   = 32'h0001_0000;
  parameter bit [31:0] STATUS_RESET    = 32'h0000_0008;   // queue empty

  // CONTROL bits
  parameter int CTRL_START = 0, CTRL_SOFT_RESET = 1, CTRL_CLEAR = 2, CTRL_DMA_LOAD = 3, CTRL_DMA_STORE = 4;
  // STATUS bits
  parameter int ST_BUSY = 0, ST_DONE = 1, ST_ERROR = 2, ST_Q_EMPTY = 3, ST_Q_FULL = 4, ST_DMA_BUSY = 5;
  // ERROR_CODE bits
  parameter bit [7:0] ERR_QOVF       = 8'h01;
  parameter bit [7:0] ERR_START_BUSY = 8'h02;
  parameter bit [7:0] ERR_UB_OVF     = 8'h04;
  parameter bit [7:0] ERR_TIMEOUT    = 8'h08;
  parameter bit [7:0] ERR_BAD_REG    = 8'h10;
  parameter bit [7:0] ERR_AXI        = 8'h20;
  parameter bit [7:0] ERR_ALIGN      = 8'h40;

  // command entry op / wait mode (tpu_command_scheduler.sv)
  typedef enum bit [1:0] {OP_EXEC = 2'd0, OP_DMA_LOAD = 2'd1, OP_DMA_STORE = 2'd2, OP_NOP = 2'd3} cmd_op_e;
  typedef enum bit [1:0] {WM_NONE = 2'd0, WM_VPU1 = 2'd1, WM_CYCLES = 2'd2, WM_VPU_ANY = 2'd3} cmd_wait_e;
  // UB pointer select
  parameter bit [8:0] PTR_INPUT = 9'd0, PTR_WEIGHT = 9'd1, PTR_BIAS = 9'd2, PTR_Y = 9'd3, PTR_H = 9'd4,
                      PTR_GRAD_BIAS = 9'd5, PTR_GRAD_WEIGHT = 9'd6;

  // AXI responses
  parameter bit [1:0] RESP_OKAY = 2'b00, RESP_EXOKAY = 2'b01, RESP_SLVERR = 2'b10, RESP_DECERR = 2'b11;

endpackage : tpu_host_pkg
`endif
