// bedrock_driver.sv
// Drives bedrock_txn items onto mem_fwd (loader / IO writes) and accepts mem_rev beats
// (ready_and always asserted here; extend with backpressure sequences for BP-DV-011).

`ifndef BEDROCK_DRIVER_SV
`define BEDROCK_DRIVER_SV

class bedrock_driver extends uvm_driver #(bedrock_txn);
  `uvm_component_utils(bedrock_driver)

  virtual bedrock_if vif;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual bedrock_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("BEDROCK_DRV", "virtual interface not set for bedrock_driver")
  endfunction

  task run_phase(uvm_phase phase);
    vif.drv_cb.mem_fwd_v          <= 1'b0;
    vif.drv_cb.mem_rev_ready_and  <= 1'b1; // always ready to accept responses in this basic driver

    wait (vif.reset === 1'b0);
    // Let reset deassertion settle before launching the first transaction.
    // Without this cycle, the first NBF beat can be lost in the clocking-block
    // NBA scheduling race at reset release.
    @(vif.drv_cb);

    forever begin
      seq_item_port.get_next_item(req);
      drive_one(req);
      seq_item_port.item_done();
    end
  endtask

  task drive_one(bedrock_txn t);
    @(vif.drv_cb);
    vif.drv_cb.mem_fwd_addr     <= t.addr;
    vif.drv_cb.mem_fwd_msg_type <= t.msg_type;
    vif.drv_cb.mem_fwd_size     <= t.size;
    vif.drv_cb.mem_fwd_data     <= t.data;
    vif.drv_cb.mem_fwd_v        <= 1'b1;

    // hold valid until the DUT asserts ready_and (valid->ready-and handshake)
    do @(vif.drv_cb); while (!vif.drv_cb.mem_fwd_ready_and);

    vif.drv_cb.mem_fwd_v <= 1'b0;
  endtask

endclass

`endif
