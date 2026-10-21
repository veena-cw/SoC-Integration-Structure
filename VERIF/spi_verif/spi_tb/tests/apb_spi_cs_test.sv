//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_cs_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: SPI chip-select test: CS0..CS3 selection and CS setup/hold timing sweep
//=================================================================================

class apb_spi_cs_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_cs_test)

  function new(string name = "apb_spi_cs_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_cs_select_vseq v0;
    apb_spi_cs_timing_vseq v1;
    v0 = apb_spi_cs_select_vseq::type_id::create("v0");
    run_vseq(v0);
    v1 = apb_spi_cs_timing_vseq::type_id::create("v1");
    run_vseq(v1);
  endtask

endclass
