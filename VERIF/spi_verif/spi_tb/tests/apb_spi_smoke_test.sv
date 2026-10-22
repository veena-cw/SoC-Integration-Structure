//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_smoke_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Smoke test: runs apb_spi_smoke_vseq (scenarios SM-01 .. SM-13, listed in env/apb_spi_virtual_sequence.sv) and cross-checks the monitors at the end
//=================================================================================

class apb_spi_smoke_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_smoke_test)

  function new(string name = "apb_spi_smoke_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_scenario();
    apb_spi_smoke_vseq seq;
    seq = apb_spi_smoke_vseq::type_id::create("seq");
    run_vseq(seq);
    wait_for_monitors();
    end_of_test_checks();
  endtask

  // let the last monitor items reach the scoreboard
  task wait_for_monitors();
    #(20 * CLK_PERIOD);
  endtask

  // testbench-side cross checks: what the monitors saw must match what the test did
  function void end_of_test_checks();
    // SM-08 (1 byte) + SM-11 (2 bytes) + SM-13 (1 byte)
    if (env.scoreboard.n_mst_bytes != 4)
      `uvm_error("SMOKE", $sformatf("[END] master monitor saw %0d SPI byte(s), expected 4", env.scoreboard.n_mst_bytes))
    else
      `uvm_info("SMOKE", "[END] PASS: master monitor saw 4 SPI bytes", UVM_LOW)

    // all transfers use CS0, which is the only chip select the internal slave sees
    if (env.scoreboard.n_slv_bytes != env.scoreboard.n_mst_bytes)
      `uvm_error("SMOKE", $sformatf("[END] slave monitor saw %0d byte(s), master monitor saw %0d (CS0 not asserted, or slave not receiving)",
                 env.scoreboard.n_slv_bytes, env.scoreboard.n_mst_bytes))
    else
      `uvm_info("SMOKE", "[END] PASS: slave monitor saw every byte the master sent", UVM_LOW)

    if (env.scoreboard.n_apb_abort != 0)
      `uvm_error("SMOKE", $sformatf("[END] %0d APB transfer(s) were aborted by reset (none expected)", env.scoreboard.n_apb_abort))
    else
      `uvm_info("SMOKE", "[END] PASS: no APB transfer aborted", UVM_LOW)
  endfunction

endclass
