//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_fifo_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: FIFO test for all four FIFOs (master TX/RX, slave TX/RX): runs apb_spi_fifo_vseq, scenarios FF-01 .. FF-11
//=================================================================================

class apb_spi_fifo_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_fifo_test)

  function new(string name = "apb_spi_fifo_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_fifo_vseq seq;
    seq = apb_spi_fifo_vseq::type_id::create("seq");
    run_vseq(seq);
    #(20 * CLK_PERIOD);
    end_of_test_checks();
  endtask

  // frames: FF-04 4, FF-05 16, FF-06 2, FF-10 2 (chip select 1), FF-11 2  ->  26 seen by the master monitor,
  // 24 seen by the slave monitor (the slave only sees chip select 0)
  function void end_of_test_checks();
    if (env.scoreboard.n_mst_bytes != 26)
      `uvm_error("FIFO", $sformatf("[END] master monitor saw %0d SPI byte(s), expected 26", env.scoreboard.n_mst_bytes))
    else
      `uvm_info("FIFO", "[END] PASS: master monitor saw 26 SPI bytes", UVM_LOW)
    if (env.scoreboard.n_slv_bytes != 24)
      `uvm_error("FIFO", $sformatf("[END] slave monitor saw %0d SPI byte(s), expected 24 (chip select 0 frames only)", env.scoreboard.n_slv_bytes))
    else
      `uvm_info("FIFO", "[END] PASS: slave monitor saw 24 SPI bytes", UVM_LOW)
    if (env.scoreboard.n_apb_abort != 0)
      `uvm_error("FIFO", $sformatf("[END] %0d APB transfer(s) were aborted by reset (none expected)", env.scoreboard.n_apb_abort))
    else
      `uvm_info("FIFO", "[END] PASS: no APB transfer aborted", UVM_LOW)
  endfunction

endclass
