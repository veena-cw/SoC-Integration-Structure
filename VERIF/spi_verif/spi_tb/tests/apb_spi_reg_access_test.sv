//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_reg_access_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Register access test: reset values, walking 1/0, RO write-ignore, invalid/aliased addresses (directed) and RAL register access sequence
//=================================================================================

class apb_spi_reg_access_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_reg_access_test)

  function new(string name = "apb_spi_reg_access_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_reg_vseq v0;
    apb_spi_ral_vseq av;
    apb_spi_reg_access_seq rseq;
    v0 = apb_spi_reg_vseq::type_id::create("v0");
    run_vseq(v0);
    rseq = apb_spi_reg_access_seq::type_id::create("rseq");
    av = apb_spi_ral_vseq::type_id::create("av");
    av.ral_seq = rseq;
    run_vseq(av);
  endtask

endclass
