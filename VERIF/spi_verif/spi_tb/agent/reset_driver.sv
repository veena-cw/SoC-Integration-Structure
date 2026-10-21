//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : reset_driver
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reset driver: asynchronous assertion, handshake with the APB driver (rst_ack), synchronous release
//=================================================================================

class reset_driver extends uvm_driver #(reset_seq_item);

  `uvm_component_utils(reset_driver)

  localparam int unsigned ACK_TIMEOUT_CYCLES = 32;

  virtual reset_if vif;

  function new(string name = "reset_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual reset_if)::read_by_name(get_full_name(), "reset_vif", vif))
      `uvm_fatal("NOVIF", "reset_vif not found in uvm_resource_db")
  endfunction

  task run_phase(uvm_phase phase);
    forever begin
      seq_item_port.get_next_item(req);
      drive_reset(req);
      seq_item_port.item_done();
    end
  endtask

  // Handshake:
  //   1. assert rst_n asynchronously (assert_offset ns after a clock edge)
  //   2. hold until pulse_cycles elapsed AND the APB driver set rst_ack (bus quiesced)
  //   3. release rst_n synchronously (1 ns after a clock edge)
  //   4. wait until the APB driver cleared rst_ack
  task drive_reset(reset_seq_item tr);
    int unsigned cycles;
    int unsigned limit;

    repeat (tr.delay_cycles + 1) @(posedge vif.pclk);
    #(tr.assert_offset);
    vif.rst_n = 1'b0;
    `uvm_info("RST_DRV", $sformatf("Reset asserted (pulse_cycles=%0d)", tr.pulse_cycles), UVM_MEDIUM)

    cycles = 0;
    limit  = tr.pulse_cycles + ACK_TIMEOUT_CYCLES;
    while (cycles < tr.pulse_cycles || vif.rst_ack !== 1'b1) begin
      @(posedge vif.pclk);
      cycles++;
      if (cycles >= limit) begin
        `uvm_warning("RST_DRV", "Timeout waiting for rst_ack from the APB driver; releasing reset anyway")
        break;
      end
    end

    #1;
    vif.rst_n = 1'b1;
    `uvm_info("RST_DRV", $sformatf("Reset released after %0d cycles", cycles), UVM_MEDIUM)

    cycles = 0;
    while (vif.rst_ack !== 1'b0 && cycles < ACK_TIMEOUT_CYCLES) begin
      @(posedge vif.pclk);
      cycles++;
    end
    repeat (2) @(posedge vif.pclk);
  endtask

endclass
