// bedrock_driver.sv
// Drives bedrock_txn items onto mem_fwd (loader / IO writes) and accepts mem_rev beats
// (ready_and always asserted here; extend with backpressure sequences for BP-DV-011).

`ifndef BEDROCK_DRIVER_SV
`define BEDROCK_DRIVER_SV

class bedrock_driver extends uvm_driver #(bedrock_txn);
  `uvm_component_utils(bedrock_driver)

  virtual bedrock_if vif;
  // Fail rather than leave a test hung if a forward request never handshakes.
  int unsigned handshake_timeout_cycles = 1000;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual bedrock_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("BEDROCK_DRV", "virtual interface not set for bedrock_driver")
  endfunction

  task run_phase(uvm_phase phase);
    vif.drv_cb.mem_fwd_v <= 1'b0;

    // Keep reverse-channel readiness under one process and restore its
    // default after each reset release.
    fork
      drive_mem_rev_ready();
    join_none

    wait_for_reset_release();

    forever begin
      seq_item_port.get_next_item(req);
      drive_one(req);
      seq_item_port.item_done();
    end
  endtask

  // Wait for deassertion and sample it on a clocking-block edge before driving.
  // This also protects requests queued while reset is held active.
  task wait_for_reset_release();
    wait (vif.reset === 1'b0);
    do @(vif.drv_cb); while (vif.drv_cb.reset !== 1'b0);
  endtask

  task drive_mem_rev_ready();
    forever begin
      wait_for_reset_release();
      vif.drv_cb.mem_rev_ready_and <= 1'b1;
      // Level-sensitive wait avoids missing an assertion between statements.
      wait (vif.reset === 1'b1);
    end
  endtask

  task drive_one(bedrock_txn t);
    bit accepted;
    bit reset_seen;
    accepted = 1'b0;

    // A reset during an unaccepted transfer cancels the bus attempt, not the
    // UVM item. Keep the item outstanding and retry it after reset releases.
    while (!accepted) begin
      wait_for_reset_release();
      vif.drv_cb.mem_fwd_addr     <= t.addr;
      vif.drv_cb.mem_fwd_msg_type <= t.msg_type;
      vif.drv_cb.mem_fwd_size     <= t.size;
      vif.drv_cb.mem_fwd_data     <= t.data;
      vif.drv_cb.mem_fwd_v        <= 1'b1;
      reset_seen = 1'b0;

      // Race the clock-sampled handshake/timeout against asynchronous reset.
      // The sampled reset check inside wait_for_handshake gives reset priority
      // if reset and ready are both active on the same sampled edge.
      fork : wait_for_handshake_or_reset
        begin : wait_for_handshake
          wait_for_handshake_result(t, accepted, reset_seen);
        end
        begin : wait_for_reset
          @(posedge vif.reset);
          reset_seen = 1'b1;
        end
      join_any
      disable wait_for_handshake_or_reset;

      // If reset won before ready, withdraw valid and retry this same item
      // after reset release. A completed handshake is never replayed.
      vif.drv_cb.mem_fwd_v <= 1'b0;
      if (!accepted && reset_seen)
        `uvm_info("BEDROCK_DRV",
                  $sformatf("reset interrupted request addr=%h; retrying after reset", t.addr),
                  UVM_MEDIUM)
    end
  endtask

  task wait_for_handshake_result(bedrock_txn t,
                                 output bit accepted,
                                 output bit reset_seen);
    int unsigned cycle_count;
    bit ready_unknown_reported;

    accepted = 1'b0;
    reset_seen = 1'b0;
    cycle_count = 0;
    ready_unknown_reported = 1'b0;

    forever begin
      @(vif.drv_cb);

      // Reset cancels a forward request unless ready handshook on an earlier
      // non-reset clock edge.
      if (vif.drv_cb.reset !== 1'b0) begin
        reset_seen = 1'b1;
        break;
      end

      if ($isunknown(vif.drv_cb.mem_fwd_ready_and)) begin
        if (!ready_unknown_reported) begin
          `uvm_error("BEDROCK_DRV",
                     $sformatf("mem_fwd_ready_and is X/Z while mem_fwd_v is asserted for addr=%h",
                               t.addr))
          ready_unknown_reported = 1'b1;
        end
      end
      else begin
        ready_unknown_reported = 1'b0;
        if (vif.drv_cb.mem_fwd_ready_and === 1'b1) begin
          accepted = 1'b1;
          break;
        end
      end

      cycle_count++;
      if ((handshake_timeout_cycles != 0)
          && (cycle_count >= handshake_timeout_cycles)) begin
        `uvm_fatal("BEDROCK_DRV",
                   $sformatf("mem_fwd handshake timed out after %0d cycles at addr=%h",
                             cycle_count, t.addr))
      end
    end
  endtask

endclass

`endif
