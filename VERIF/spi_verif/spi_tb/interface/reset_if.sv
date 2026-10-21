//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : reset_if
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reset interface: rst_n drives PRESETn of the DUT; rst_ack is the reset handshake from the APB driver
//=================================================================================

`timescale 1ns/1ps
interface reset_if (input logic pclk);

  logic rst_n   = 1'b0;   // active-low reset to the DUT (powers up asserted)
  logic rst_ack = 1'b0;   // handshake: set by the APB driver once the APB bus is quiesced

endinterface
