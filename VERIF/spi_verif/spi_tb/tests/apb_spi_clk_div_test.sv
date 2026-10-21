//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_clk_div_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI clock divider test: SCK half period over a CLK_DIV sweep
//=================================================================================

class apb_spi_clk_div_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_clk_div_test)

  function new(string name = "apb_spi_clk_div_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_clk_div_vseq v0;
    v0 = apb_spi_clk_div_vseq::type_id::create("v0");
    run_vseq(v0);
  endtask

endclass
