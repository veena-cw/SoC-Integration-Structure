//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_reset_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reset test: reset during an ongoing APB transfer and during an ongoing SPI transfer
//=================================================================================

class apb_spi_reset_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_reset_test)

  function new(string name = "apb_spi_reset_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_reset_apb_vseq v0;
    apb_spi_reset_xfer_vseq v1;
    v0 = apb_spi_reset_apb_vseq::type_id::create("v0");
    run_vseq(v0);
    v1 = apb_spi_reset_xfer_vseq::type_id::create("v1");
    run_vseq(v1);
  endtask

endclass
