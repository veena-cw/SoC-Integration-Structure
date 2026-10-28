//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : tb_top
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Testbench top file: (1) apb_spi_tb_pkg = shared constants/types + one include list of every agent, sequence, ral, env and test file, (2) tb_top = clock, interfaces, apb_spi_top DUT, assertions, uvm_resource_db setup and run_test()
//=================================================================================

`timescale 1ns/1ps

package apb_spi_tb_pkg;

  import uvm_pkg::*;
  `include "uvm_macros.svh"

  // ------------------------------------------------------------------
  // Shared constants (single source of truth for tb_top and the checkers)
  // ------------------------------------------------------------------
  localparam time          CLK_PERIOD      = 10ns;        // PCLK period
  localparam int unsigned  DATA_WIDTH      = 8;           // apb_spi_top instantiates spi_top with DATA_WIDTH=8
  localparam int unsigned  FIFO_DEPTH      = 16;          // ... FIFO_DEPTH=16
  //localparam bit [7:0]     SLAVE_TX_CONST  = 8'h0C;       // apb_spi_top ties s_tx_wdata_i to 8'h0c
  localparam bit [31:0]    ID_VALUE        = 32'h5910_017E;
  localparam bit [31:0]    VERSION_VALUE   = 32'h0001_0000;

  // register offsets (apb_spi_top decodes PADDR[15:0])
  localparam bit [15:0]    ADDR_CTRL       = 16'h0000;
  localparam bit [15:0]    ADDR_STATUS     = 16'h0004;
  localparam bit [15:0]    ADDR_IRQ_STAT   = 16'h0008;
  localparam bit [15:0]    ADDR_IRQ_MASK   = 16'h000C;
  localparam bit [15:0]    ADDR_CLK_DIV    = 16'h0010;
  localparam bit [15:0]    ADDR_TX_DATA    = 16'h0014;
  localparam bit [15:0]    ADDR_RX_DATA    = 16'h0018;
  localparam bit [15:0]    ADDR_FIFO_LVL   = 16'h001C;
  localparam bit [15:0]    ADDR_ID         = 16'h0020;
  localparam bit [15:0]    ADDR_VERSION    = 16'h0024;
  localparam bit [15:0]    ADDR_SCRATCH0   = 16'h0028;
  localparam bit [15:0]    ADDR_SCRATCH1   = 16'h002C;
  localparam bit [15:0]    ADDR_SCRATCH2   = 16'h0030;
  localparam bit [15:0]    ADDR_SCRATCH3   = 16'h0034;
  localparam bit [15:0]    ADDR_SCRATCH4   = 16'h0038;
  localparam bit [15:0]    ADDR_SCRATCH5   = 16'h003C;

  // agent_config coverage control (the only controls besides active/passive)
  typedef enum bit { COV_DISABLE = 1'b0, COV_ENABLE = 1'b1 } cov_mode_e;

  // slave monitor item kinds
  //typedef enum bit { SLV_BYTE = 1'b0, SLV_RX_PROBE = 1'b1 } spi_slave_item_kind_e;

  // analysis implementations with several inputs per component (declared once for scoreboard + coverage)
  /*`uvm_analysis_imp_decl(_apb)
  `uvm_analysis_imp_decl(_mst)
  `uvm_analysis_imp_decl(_mst_start)
  `uvm_analysis_imp_decl(_slv)
  `uvm_analysis_imp_decl(_rst)
*/
  // agent/ : APB active agent
  `include "apb_seq_item.sv"
  `include "apb_agent_config.sv"
  `include "apb_sequencer.sv"
  `include "apb_driver.sv"
  `include "apb_monitor.sv"
  `include "apb_agent.sv"

  // agent/ : reset active agent
  `include "reset_seq_item.sv"
  `include "reset_agent_config.sv"
  `include "reset_sequencer.sv"
  `include "reset_driver.sv"
  `include "reset_monitor.sv"
  `include "reset_agent.sv"

  // agent/ : SPI master passive agent
  `include "spi_master_seq_item.sv"
  `include "spi_master_agent_config.sv"
  `include "spi_master_monitor.sv"
  `include "spi_master_agent.sv"

  // agent/ : SPI slave passive agent
  `include "spi_slave_seq_item.sv"
  `include "spi_slave_agent_config.sv"
  `include "spi_slave_monitor.sv"
  `include "spi_slave_agent.sv"

  // agent/sequences/
  `include "apb_spi_base_sequence.sv"
  `include "apb_spi_apb_write_sequence.sv"
  `include "apb_spi_apb_read_sequence.sv"
  `include "apb_spi_config_sequence.sv"
  `include "reset_sequence.sv"

  // ral/
  `include "apb_spi_ral_pkg.sv"
  `include "apb_spi_ral_block.sv"
  `include "apb_spi_apb_adapter.sv"
  `include "apb_spi_apb_predictor.sv"
  `include "apb_spi_ral_sequence.sv"

  // env/
  `include "apb_spi_virtual_sequencer.sv"
  `include "apb_spi_scoreboard.sv"
  `include "apb_spi_coverage.sv"
  `include "apb_spi_env.sv"
  `include "apb_spi_virtual_sequence.sv"

  // tests/
  `include "apb_spi_base_test.sv"
  `include "apb_spi_smoke_test.sv"
  `include "spi_fifo_test.sv"
  //`include "apb_spi_reg_access_test.sv"
  //`include "apb_spi_ral_test.sv"
  //`include "apb_spi_mode_test.sv"
  //`include "apb_spi_clk_div_test.sv"
  //`include "apb_spi_cs_test.sv"
  //`include "apb_spi_burst_test.sv"
  //`include "apb_spi_fifo_test.sv"
  //`include "apb_spi_irq_test.sv"
  //`include "apb_spi_reset_test.sv"
  //`include "apb_spi_stress_test.sv"

endpackage

module tb_top;

  import uvm_pkg::*;
  `include "uvm_macros.svh"
  import apb_spi_tb_pkg::*;

  // ---------------- clock ----------------
  logic pclk;
  initial begin
    pclk = 1'b0;
    forever #(CLK_PERIOD/2) pclk = ~pclk;
  end

  // ---------------- interfaces ----------------
  reset_if       reset_if_i  (.pclk(pclk));
  apb_if         apb_if_i    (.pclk(pclk), .presetn(reset_if_i.rst_n));
  spi_master_if  master_if_i (.pclk(pclk), .presetn(reset_if_i.rst_n));
  spi_slave_if   slave_if_i  (.pclk(pclk), .presetn(reset_if_i.rst_n));

  // ---------------- DUT ----------------
  logic        sck_o, mosi_o, miso_o, spi_irq;
  logic [3:0]  cs_n_o;

  apb_spi_top dut (
    .PCLK    (pclk),
    .PRESETn (reset_if_i.rst_n),
    .PSEL    (apb_if_i.psel),
    .PENABLE (apb_if_i.penable),
    .PWRITE  (apb_if_i.pwrite),
    .PADDR   (apb_if_i.paddr),
    .PWDATA  (apb_if_i.pwdata),
    .PSTRB   (apb_if_i.pstrb),
   // .PPROT   (apb_if_i.pprot),
    .PRDATA  (apb_if_i.prdata),
    .PREADY  (apb_if_i.pready),
    .PSLVERR (apb_if_i.pslverr),
    .sck_o   (sck_o),
    .mosi_o  (mosi_o),
    .miso_o  (miso_o),
    .cs_n_o  (cs_n_o),
    .spi_irq (spi_irq)
  );

  // ---------------- SPI pins -> master / slave observation interfaces ----------------
  assign master_if_i.sck        = sck_o;
  assign master_if_i.mosi       = mosi_o;
  assign master_if_i.miso       = miso_o;
  assign master_if_i.cs_n       = cs_n_o;
  // read-only configuration probes (hierarchical reads of the unmodified RTL)
  assign master_if_i.cpol       = dut.ctrl_reg[2];
  assign master_if_i.cpha       = dut.ctrl_reg[3];
  assign master_if_i.lsb_first  = dut.ctrl_reg[1];
  assign master_if_i.inter_byte = dut.ctrl_reg[4];
  assign master_if_i.cs_sel_cfg = dut.ctrl_reg[6:5];
  assign master_if_i.clk_div    = dut.clk_div_reg[15:0];
  assign master_if_i.cs_setup   = dut.ctrl_reg[15:8];
  assign master_if_i.cs_hold    = dut.ctrl_reg[23:16];

  // the internal slave only sees chip select 0
  assign slave_if_i.sck         = sck_o;
  assign slave_if_i.mosi        = mosi_o;
  assign slave_if_i.miso        = miso_o;
  assign slave_if_i.cs_n        = cs_n_o[0];
  assign slave_if_i.cpol        = dut.ctrl_reg[2];
  assign slave_if_i.cpha        = dut.ctrl_reg[3];
  assign slave_if_i.lsb_first   = dut.ctrl_reg[1];
  assign slave_if_i.xfer_done   = dut.xfer_done_o;
  assign slave_if_i.rx_data     = dut.s_rx_data;

  // ---------------- assertions ----------------
  /*apb_spi_assertions u_assertions (
    .pclk      (pclk),
    .presetn   (reset_if_i.rst_n),
    .psel      (apb_if_i.psel),
    .penable   (apb_if_i.penable),
    .pwrite    (apb_if_i.pwrite),
    .paddr     (apb_if_i.paddr),
    .pwdata    (apb_if_i.pwdata),
    .prdata    (apb_if_i.prdata),
    .pready    (apb_if_i.pready),
    .pslverr   (apb_if_i.pslverr),
    .sck_o     (sck_o),
    .mosi_o    (mosi_o),
    .miso_o    (miso_o),
    .cs_n_o    (cs_n_o),
    .spi_irq   (spi_irq),
    .irq_mask  (dut.irq_mask_reg[3:0]),
    .tx_empty  (dut.m_tx_empty),
    .rx_full   (dut.m_rx_full),
    .xfer_done (dut.m_done)
  );*/

  // ---------------- waveform dump (+DUMP_VCD) ----------------
  initial begin
    if ($test$plusargs("DUMP_VCD")) begin
      $dumpfile("dump.vcd");
      $dumpvars(0, tb_top);
    end
  end

  // ---------------- UVM configuration + test execution ----------------
  initial begin
    uvm_resource_db#(virtual reset_if)::set("*",      "reset_vif",  reset_if_i,  null);
    uvm_resource_db#(virtual apb_if)::set("*",        "apb_vif",    apb_if_i,    null);
    uvm_resource_db#(virtual spi_master_if)::set("*", "master_vif", master_if_i, null);
    uvm_resource_db#(virtual spi_slave_if)::set("*",  "slave_vif",  slave_if_i,  null);
    run_test();
  end
  
  initial begin
  if ($test$plusargs("DUMP_VCD")) begin
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_top);
  end
end

endmodule
