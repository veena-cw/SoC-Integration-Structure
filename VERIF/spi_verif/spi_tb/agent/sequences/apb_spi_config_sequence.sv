//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_config_sequence
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI configuration sequence: programs CLK_DIV and CTRL (mode, bit order, chip select, CS setup/hold, inter-byte CS) through APB
//=================================================================================

class apb_spi_config_sequence extends apb_spi_base_sequence;

  `uvm_object_utils(apb_spi_config_sequence)

  bit [1:0]    mode;        // {CPOL, CPHA}
  bit          lsb;
  int unsigned div;
  bit [1:0]    cs;
  int unsigned setup;
  int unsigned hold;
  bit          inter;
  bit          start_bit;   // value written to CTRL.START
  bit [31:0]   ctrl_val;    // result: CTRL value written

  function new(string name = "apb_spi_config_sequence");
    super.new(name);
  endfunction

  function bit [31:0] build_ctrl();
    bit [31:0] c;
    c        = '0;
    c[0]     = start_bit;
    c[1]     = lsb;
    c[2]     = mode[1];
    c[3]     = mode[0];
    c[4]     = inter;
    c[9:8]   = cs;
    c[23:16] = setup[7:0];
    c[31:24] = hold[7:0];
    return c;
  endfunction

  task body();
    ctrl_val = build_ctrl();
    do_write(ADDR_CLK_DIV, div);
    do_write(ADDR_CTRL, ctrl_val);
  endtask

endclass
