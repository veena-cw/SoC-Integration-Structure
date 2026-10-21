//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_driver
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Reset-aware APB driver (SETUP/ACCESS handshake, aborts on reset, acknowledges reset through reset_if.rst_ack)
//=================================================================================

class apb_driver extends uvm_driver #(apb_seq_item);

  `uvm_component_utils(apb_driver)

  virtual apb_if   vif;
  virtual reset_if rvif;
  apb_agent_config cfg;
  int unsigned     aborted_cnt;

  function new(string name = "apb_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual apb_if)::read_by_name(get_full_name(), "apb_vif", vif))
      `uvm_fatal("NOVIF", "apb_vif not found in uvm_resource_db")
    if (!uvm_resource_db#(virtual reset_if)::read_by_name(get_full_name(), "reset_vif", rvif))
      `uvm_fatal("NOVIF", "reset_vif not found in uvm_resource_db")
  endfunction

  task run_phase(uvm_phase phase);
    drive_idle();
    fork
      reset_service();
    join_none
    forever begin
      seq_item_port.get_next_item(req);
      drive_item(req);
      seq_item_port.item_done();
    end
  endtask

  // Master outputs to their idle/default values (applied at the next clock edge)
  task drive_idle();
    vif.drv_cb.psel    <= 1'b0;
    vif.drv_cb.penable <= 1'b0;
    vif.drv_cb.pwrite  <= 1'b0;
    vif.drv_cb.paddr   <= '0;
    vif.drv_cb.pwdata  <= '0;
    vif.drv_cb.pstrb   <= '0;
    vif.drv_cb.pprot   <= '0;
  endtask

  // Reset handshake, runs for the whole simulation:
  //   reset asserted -> bus driven idle -> rst_ack=1 -> reset released -> rst_ack=0
  task reset_service();
    forever begin
      wait (vif.presetn === 1'b0);
      drive_idle();
      repeat (2) @(vif.drv_cb);
      rvif.rst_ack = 1'b1;
      wait (vif.presetn === 1'b1);
      rvif.rst_ack = 1'b0;
    end
  endtask

  task drive_item(apb_seq_item tr);
    bit completed;
    tr.aborted_by_reset = 1'b0;
    if (vif.presetn !== 1'b1) begin     // reset already active: do not start the transfer
      abort_item(tr);
      return;
    end
    completed = 1'b0;
    fork
      begin
        fork
          begin
            apb_transfer(tr);
            completed = 1'b1;
          end
          begin
            @(negedge vif.presetn);
          end
        join_any
        disable fork;
      end
    join
    if (!completed) abort_item(tr);
  endtask

  task apb_transfer(apb_seq_item tr);
    // SETUP phase
    @(vif.drv_cb);
    vif.drv_cb.psel    <= 1'b1;
    vif.drv_cb.penable <= 1'b0;
    vif.drv_cb.pwrite  <= tr.pwrite;
    vif.drv_cb.paddr   <= tr.paddr;
    vif.drv_cb.pwdata  <= (tr.pwrite) ? tr.pwdata : 32'h0;
    vif.drv_cb.pstrb   <= tr.pstrb;
    vif.drv_cb.pprot   <= tr.pprot;
    // ACCESS phase
    @(vif.drv_cb);
    vif.drv_cb.penable <= 1'b1;
    // wait for PREADY (sampled just before each clock edge)
    @(vif.drv_cb);
    while (vif.drv_cb.pready !== 1'b1) @(vif.drv_cb);
    tr.prdata  = vif.drv_cb.prdata;
    tr.pslverr = vif.drv_cb.pslverr;
    // back to idle
    vif.drv_cb.psel    <= 1'b0;
    vif.drv_cb.penable <= 1'b0;
  endtask

  // Reset killed (or prevented) the transfer: bus idle, wait for reset release, report it in the item
  task abort_item(apb_seq_item tr);
    tr.aborted_by_reset = 1'b1;
    aborted_cnt++;
    `uvm_info("APB_DRV", $sformatf("Transfer aborted by reset (addr=0x%08h, %s)", tr.paddr, tr.pwrite ? "WR" : "RD"), UVM_MEDIUM)
    drive_idle();
    wait (vif.presetn === 1'b1);
    @(vif.drv_cb);
  endtask

endclass
