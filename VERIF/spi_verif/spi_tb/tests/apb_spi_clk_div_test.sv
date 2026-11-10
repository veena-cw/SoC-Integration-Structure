//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_clk_div_test
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//==================================================================================
//  Description: Verifies CLK_DIV values 0, 1, 2, 3, 7 and 31. The master
//               monitor and scoreboard check SCK half-period timing; the virtual
//               sequence checks data, register, FIFO, pin and IRQ state.
//==================================================================================

class apb_spi_clk_div_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_clk_div_test)

  function new(string name = "apb_spi_clk_div_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_clk_div_vseq seq;
    seq = apb_spi_clk_div_vseq::type_id::create("seq");
    run_vseq(seq);
    #(20 * CLK_PERIOD);
    end_of_test_checks();
  endtask

  function void end_of_test_checks();
    if (env.scoreboard.n_mst_bytes != 6)
      `uvm_error("CLK_DIV",
                 $sformatf("[END] master monitor saw %0d SPI byte(s), expected 6",
                           env.scoreboard.n_mst_bytes))
    else
      `uvm_info("CLK_DIV", "[END] PASS: master monitor saw 6 SPI bytes", UVM_LOW)

    if (env.scoreboard.n_slv_bytes != 6)
      `uvm_error("CLK_DIV",
                 $sformatf("[END] slave monitor saw %0d SPI byte(s), expected 6",
                           env.scoreboard.n_slv_bytes))
    else
      `uvm_info("CLK_DIV", "[END] PASS: slave monitor saw 6 SPI bytes", UVM_LOW)

    if (env.scoreboard.n_apb_abort != 0)
      `uvm_error("CLK_DIV",
                 $sformatf("[END] %0d APB transfer(s) were aborted by reset (none expected)",
                           env.scoreboard.n_apb_abort))
    else
      `uvm_info("CLK_DIV", "[END] PASS: no APB transfer aborted", UVM_LOW)
  endfunction

endclass
