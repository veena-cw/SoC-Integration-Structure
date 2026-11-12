//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_mode_test
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//==================================================================================
//  Description: Checks SPI modes 0..3 in MSB/LSB order, dynamic mode changes and
//               post-reset recovery. Pin-level protocol/data checks are performed
//               by the existing SPI monitors and scoreboard.
//==================================================================================

class apb_spi_mode_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_mode_test)

  function new(string name = "apb_spi_mode_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_mode_vseq seq;
    seq = apb_spi_mode_vseq::type_id::create("seq");
    run_vseq(seq);
    #(20 * CLK_PERIOD);
    end_of_test_checks();
  endtask

  // MD-01..08 = 8 bytes, MD-09A..D = 4 bytes, MD-10 = 1 byte.
  function void end_of_test_checks();
    if (env.scoreboard.n_mst_bytes != 16)
      `uvm_error("MODE", $sformatf("[END] master monitor saw %0d SPI byte(s), expected 13",
                                   env.scoreboard.n_mst_bytes))
    else
      `uvm_info("MODE", "[END] PASS: master monitor saw 13 SPI bytes", UVM_LOW)

    if (env.scoreboard.n_slv_bytes != 16)
      `uvm_error("MODE", $sformatf("[END] slave monitor saw %0d SPI byte(s), expected 13",
                                   env.scoreboard.n_slv_bytes))
    else
      `uvm_info("MODE", "[END] PASS: slave monitor saw 13 SPI bytes", UVM_LOW)

    if (env.scoreboard.n_apb_abort != 0)
      `uvm_error("MODE", $sformatf("[END] %0d APB transfer(s) were aborted by reset (none expected)",
                                   env.scoreboard.n_apb_abort))
    else
      `uvm_info("MODE", "[END] PASS: no APB transfer aborted", UVM_LOW)
  endfunction

endclass
