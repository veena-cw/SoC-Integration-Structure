//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_irq_test
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//==================================================================================
//  Description: Checks IRQ status, mask, W1C, external spi_irq, RX-full and overflow.
//==================================================================================

class apb_spi_irq_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_irq_test)

  function new(string name = "apb_spi_irq_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_irq_vseq seq;
    seq = apb_spi_irq_vseq::type_id::create("seq");
    run_vseq(seq);
    #(20 * CLK_PERIOD);
    end_of_test_checks();
  endtask

  // IRQ-03=1, IRQ-04=1, IRQ-05=16, IRQ-06=1: all use chip select 0.
  function void end_of_test_checks();
    if (env.scoreboard.n_mst_bytes != 19)
      `uvm_error("IRQ", $sformatf("[END] master monitor saw %0d SPI byte(s), expected 19",
                                  env.scoreboard.n_mst_bytes))
    else
      `uvm_info("IRQ", "[END] PASS: master monitor saw 19 SPI bytes", UVM_LOW)

    if (env.scoreboard.n_slv_bytes != 19)
      `uvm_error("IRQ", $sformatf("[END] slave monitor saw %0d SPI byte(s), expected 19",
                                  env.scoreboard.n_slv_bytes))
    else
      `uvm_info("IRQ", "[END] PASS: slave monitor saw 19 SPI bytes", UVM_LOW)

    if (env.scoreboard.n_apb_abort != 0)
      `uvm_error("IRQ", $sformatf("[END] %0d APB transfer(s) were aborted by reset (none expected)",
                                  env.scoreboard.n_apb_abort))
    else
      `uvm_info("IRQ", "[END] PASS: no APB transfer aborted", UVM_LOW)
  endfunction

endclass
