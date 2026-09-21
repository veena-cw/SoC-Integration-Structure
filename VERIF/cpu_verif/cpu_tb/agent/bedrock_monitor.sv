// bedrock_monitor.sv
// Passively watches both mem_fwd and mem_rev channels and publishes every accepted
// beat (valid && ready_and) as a bedrock_txn on its analysis port. The scoreboard
// and any coverage collector subscribe here.

`ifndef BEDROCK_MONITOR_SV
`define BEDROCK_MONITOR_SV

class bedrock_monitor extends uvm_monitor;
  `uvm_component_utils(bedrock_monitor)

  virtual bedrock_if vif;
  uvm_analysis_port #(bedrock_txn) ap;

  function new(string name, uvm_component parent);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual bedrock_if)::read_by_name(get_full_name(), "vif", vif, this))
      `uvm_fatal("BEDROCK_MON", "virtual interface not set for bedrock_monitor")
  endfunction

  task run_phase(uvm_phase phase);
    fork
      watch_fwd();
      watch_rev();
    join
  endtask

  task watch_fwd();
    bedrock_txn t;
    forever begin
      @(vif.mon_cb);
      if (vif.mon_cb.mem_fwd_v && vif.mon_cb.mem_fwd_ready_and) begin
        t = bedrock_txn::type_id::create("t");
        t.dir      = BEDROCK_FWD;
        t.msg_type = bedrock_msg_type_e'(vif.mon_cb.mem_fwd_msg_type);
        t.addr     = vif.mon_cb.mem_fwd_addr;
        t.size     = vif.mon_cb.mem_fwd_size;
        t.data     = vif.mon_cb.mem_fwd_data;
        ap.write(t);
      end
    end
  endtask

  task watch_rev();
    bedrock_txn t;
    forever begin
      @(vif.mon_cb);
      if (vif.mon_cb.mem_rev_v && vif.mon_cb.mem_rev_ready_and) begin
        t = bedrock_txn::type_id::create("t");
        t.dir      = BEDROCK_REV;
        t.msg_type = bedrock_msg_type_e'(vif.mon_cb.mem_rev_msg_type);
        t.addr     = vif.mon_cb.mem_rev_addr;
        t.size     = vif.mon_cb.mem_rev_size;
        t.data     = vif.mon_cb.mem_rev_data;
        ap.write(t);
      end
    end
  endtask

endclass

`endif
