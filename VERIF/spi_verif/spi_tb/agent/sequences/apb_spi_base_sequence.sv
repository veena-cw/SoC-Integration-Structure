//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_base_sequence
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Base APB sequence: do_write / do_read helpers that send one APB item through the APB sequencer
//=================================================================================

class apb_spi_base_sequence extends uvm_sequence #(apb_seq_item);

  `uvm_object_utils(apb_spi_base_sequence)

  bit [31:0] rdata;      // result of do_read
  bit        aborted;    // last transfer was aborted by reset
  bit        slverr;     // last transfer raised PSLVERR

  function new(string name = "apb_spi_base_sequence");
    super.new(name);
  endfunction

  task do_write(bit [31:0] addr, bit [31:0] data, bit [3:0] strb = 4'hF);
    apb_seq_item tr;
    tr = apb_seq_item::type_id::create("wr_tr");
    start_item(tr);
    tr.paddr  = addr;
    tr.pwdata = data;
    tr.pwrite = 1'b1;
    tr.pstrb  = strb;
    tr.pprot  = 3'b000;
    finish_item(tr);
    aborted = tr.aborted_by_reset;
    slverr  = tr.pslverr;
  endtask

  task do_read(bit [31:0] addr);
    apb_seq_item tr;
    tr = apb_seq_item::type_id::create("rd_tr");
    start_item(tr);
    tr.paddr  = addr;
    tr.pwdata = 32'h0;
    tr.pwrite = 1'b0;
    tr.pstrb  = 4'h0;
    tr.pprot  = 3'b000;
    finish_item(tr);
    rdata   = tr.prdata;
    aborted = tr.aborted_by_reset;
    slverr  = tr.pslverr;
  endtask

endclass
