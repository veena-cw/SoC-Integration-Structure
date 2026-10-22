//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_seq_item
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: APB transaction item (one APB transfer)
//=================================================================================

`include "uvm_macros.svh"
import uvm_pkg::*;
class apb_seq_item extends uvm_sequence_item;

  rand bit [31:0] paddr;
  rand bit [31:0] pwdata;
  rand bit        pwrite;
  rand bit [3:0]  pstrb;
  rand bit [2:0]  pprot;
  bit [31:0]      prdata;
  bit             pslverr;
  bit             aborted_by_reset;   // transfer was killed by reset (set by driver and by monitor)
  bit             abort_in_access;    // monitor: reset hit while PENABLE was high (ACCESS phase)
  time            t_sample;           // monitor time stamp

  constraint c_pstrb_full { soft pstrb == 4'hF; }
  constraint c_pprot_zero { soft pprot == 3'b000; }

  `uvm_object_utils(apb_seq_item)

  function new(string name = "apb_seq_item");
    super.new(name);
  endfunction

  function string convert2string();
    return $sformatf("%s addr=0x%08h wdata=0x%08h rdata=0x%08h slverr=%0b aborted=%0b",
                     pwrite ? "WR" : "RD", paddr, pwdata, prdata, pslverr, aborted_by_reset);
  endfunction

endclass
