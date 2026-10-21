//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_burst_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI multi-word test: 1..16 bytes per START, CS_INTER_BYTE on/off
//=================================================================================

class apb_spi_burst_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_burst_test)

  function new(string name = "apb_spi_burst_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_burst_vseq v0;
    v0 = apb_spi_burst_vseq::type_id::create("v0");
    run_vseq(v0);
  endtask

endclass
