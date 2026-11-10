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
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//==================================================================================
//  Description: Checks CS0..CS3 selection, setup/hold timing, continuous/per-byte
//               chip-select behavior and START with an empty TX FIFO.
//==================================================================================

class apb_spi_cs_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_cs_test)

  function new(string name = "apb_spi_cs_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_cs_vseq seq;
    seq = apb_spi_cs_vseq::type_id::create("seq");
    run_vseq(seq);
    #(20 * CLK_PERIOD);
    end_of_test_checks();
  endtask

  // CS-01..04=4 bytes, CS-05..07=3 bytes, CS-08=4 bytes, CS-09=4 bytes.
  // CS0 reaches the internal slave; CS1..CS3 are master-only transfers.
  function void end_of_test_checks();
    if (env.scoreboard.n_mst_bytes != 15)
      `uvm_error("CHIP_SELECT",
                 $sformatf("[END] master monitor saw %0d SPI byte(s), expected 15",
                           env.scoreboard.n_mst_bytes))
    else
      `uvm_info("CHIP_SELECT", "[END] PASS: master monitor saw 15 SPI bytes", UVM_LOW)

    if (env.scoreboard.n_slv_bytes != 12)
      `uvm_error("CHIP_SELECT",
                 $sformatf("[END] slave monitor saw %0d SPI byte(s), expected 12 (CS0 only)",
                           env.scoreboard.n_slv_bytes))
    else
      `uvm_info("CHIP_SELECT", "[END] PASS: slave monitor saw 12 SPI bytes", UVM_LOW)

    if (env.scoreboard.n_apb_abort != 0)
      `uvm_error("CHIP_SELECT",
                 $sformatf("[END] %0d APB transfer(s) were aborted by reset (none expected)",
                           env.scoreboard.n_apb_abort))
    else
      `uvm_info("CHIP_SELECT", "[END] PASS: no APB transfer aborted", UVM_LOW)
  endfunction

endclass
