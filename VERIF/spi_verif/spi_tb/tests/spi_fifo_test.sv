//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : spi_fifo_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: FIFO test: runs apb_spi_fifo_vseq (FF-01 .. FF-09: SPI_TX_FIFO_BASIC, SPI_TX_FIFO_FULL, SPI_TX_FIFO_OVERFLOW_WRITE, SPI_RX_FIFO_BASIC, SPI_RX_FIFO_FULL, SPI_RX_FIFO_OVERFLOW, SPI_RX_READ_WHEN_EMPTY, SPI_START_EMPTY_TX_FIFO)
//=================================================================================

class spi_fifo_test extends apb_spi_base_test;

  `uvm_component_utils(spi_fifo_test)

  function new(string name = "spi_fifo_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_fifo_vseq seq;
    seq = apb_spi_fifo_vseq::type_id::create("seq");
    run_vseq(seq);
    #(20 * CLK_PERIOD);
    end_of_test_checks();
  endtask

  // FF-04: 4 bytes, FF-05: 15 + 1, FF-06: 2  ->  22 SPI bytes must have been seen by the master monitor
  function void end_of_test_checks();
    if (env.scoreboard.n_mst_bytes != 22)
      `uvm_error("FIFO", $sformatf("[END] master monitor saw %0d SPI byte(s), expected 22", env.scoreboard.n_mst_bytes))
    else
      `uvm_info("FIFO", "[END] PASS: master monitor saw 22 SPI bytes", UVM_LOW)
    if (env.scoreboard.n_apb_abort != 0)
      `uvm_error("FIFO", $sformatf("[END] %0d APB transfer(s) were aborted by reset (none expected)", env.scoreboard.n_apb_abort))
    else
      `uvm_info("FIFO", "[END] PASS: no APB transfer aborted", UVM_LOW)
  endfunction

endclass
