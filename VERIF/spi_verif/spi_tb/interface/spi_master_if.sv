//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_master_if
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI master-side observation interface (master_cb clocking block) on the apb_spi_top SPI pins
//=================================================================================

`timescale 1ns/1ps
interface spi_master_if (input logic pclk, input logic presetn);

  // SPI pins (driven by tb_top from the DUT outputs)
  logic        sck;
  logic        mosi;
  logic        miso;
  logic [3:0]  cs_n;
  // Read-only sideband: programmed configuration, probed from the DUT CTRL/CLK_DIV registers
  logic        cpol;
  logic        cpha;
  logic        lsb_first;
  logic        inter_byte;
  logic [1:0]  cs_sel_cfg;
  logic [15:0] clk_div;
  logic [7:0]  cs_setup;
  logic [7:0]  cs_hold;

  clocking master_cb @(posedge pclk);
    default input #1step;
    input presetn, sck, mosi, miso, cs_n;
    input cpol, cpha, lsb_first, inter_byte, cs_sel_cfg, clk_div, cs_setup, cs_hold;
  endclocking

endinterface
