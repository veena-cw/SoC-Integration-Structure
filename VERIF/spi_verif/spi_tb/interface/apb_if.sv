//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_if
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: APB interface (drv_cb / mon_cb clocking blocks) between the APB agent and apb_spi_top
//=================================================================================

`timescale 1ns/1ps
interface apb_if (input logic pclk, input logic presetn);

  // Master-driven signals (initialised idle so the DUT never sees X on the bus)
  logic        psel    = 1'b0;
  logic        penable = 1'b0;
  logic        pwrite  = 1'b0;
  logic [31:0] paddr   = '0;
  logic [31:0] pwdata  = '0;
  logic [3:0]  pstrb   = '0;
  logic [2:0]  pprot   = '0;
  // DUT-driven signals
  logic [31:0] prdata;
  logic        pready;
  logic        pslverr;

  clocking drv_cb @(posedge pclk);
    default input #1step output #1;
    output psel, penable, pwrite, paddr, pwdata, pstrb, pprot;
    input  prdata, pready, pslverr;
  endclocking

  clocking mon_cb @(posedge pclk);
    default input #1step;
    input presetn, psel, penable, pwrite, paddr, pwdata, pstrb, pprot, prdata, pready, pslverr;
  endclocking

endinterface
