// UVM reset agent for the active-high reset_i used by the CPU testbench.
`ifndef CPU_RESET_AGENT_SV
`define CPU_RESET_AGENT_SV

class cpu_reset_txn extends uvm_sequence_item;
  `uvm_object_utils(cpu_reset_txn)

  time delay;
  time pulse_width;
  bit  reset_asserted;
  time event_time;

  function new(string name = "cpu_reset_txn");
    super.new(name);
    delay = 0;
    pulse_width = 0;
    reset_asserted = 1'b0;
    event_time = 0;
  endfunction

  function string convert2string();
    return $sformatf("delay=%0t pulse_width=%0t reset_asserted=%0b event_time=%0t",
                     delay, pulse_width, reset_asserted, event_time);
  endfunction
endclass

class cpu_reset_sequencer extends uvm_sequencer #(cpu_reset_txn);
  `uvm_component_utils(cpu_reset_sequencer)

  function new(string name = "cpu_reset_sequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass

class cpu_reset_seq extends uvm_sequence #(cpu_reset_txn);
  `uvm_object_utils(cpu_reset_seq)

  time delay;
  time pulse_width;

  function new(string name = "cpu_reset_seq");
    super.new(name);
    delay = 0;
    pulse_width = 100ns;
  endfunction

  task body();
    cpu_reset_txn tr;
    tr = cpu_reset_txn::type_id::create("tr");
    tr.delay = delay;
    tr.pulse_width = pulse_width;
    start_item(tr);
    finish_item(tr);
  endtask
endclass

class cpu_reset_driver extends uvm_driver #(cpu_reset_txn);
  `uvm_component_utils(cpu_reset_driver)

  virtual cpu_reset_if vif;
  localparam time DEFAULT_RESET_DURATION = 100ns;

  function new(string name = "cpu_reset_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual cpu_reset_if)::read_by_name(
          get_full_name(), "vif", vif, this))
      `uvm_fatal("CPU_RESET_DRV", "cpu_reset_if virtual interface was not set")
  endfunction

  task run_phase(uvm_phase phase);
    cpu_reset_txn tr;
    // The interface starts asserted; keep it asserted until a sequence item
    // requests the reset pulse.
    vif.reset = 1'b1;
    forever begin
      seq_item_port.get_next_item(tr);
      if (tr.delay > 0)
        #(tr.delay);
      drive_reset(tr);
      seq_item_port.item_done();
    end
  endtask

  task drive_reset(cpu_reset_txn tr);
    time width;
    width = (tr.pulse_width > 0) ? tr.pulse_width : DEFAULT_RESET_DURATION;

    vif.reset = 1'b1;
    `uvm_info("CPU_RESET_DRV",
              $sformatf("asserting active-high CPU reset for %0t at %0t", width, $time),
              UVM_LOW)
    #(width);
    vif.reset = 1'b0;
    `uvm_info("CPU_RESET_DRV",
              $sformatf("deasserted CPU reset at %0t", $time), UVM_LOW)
  endtask
endclass

class cpu_reset_monitor extends uvm_monitor;
  `uvm_component_utils(cpu_reset_monitor)

  virtual cpu_reset_if vif;
  uvm_analysis_port #(cpu_reset_txn) ap;

  function new(string name = "cpu_reset_monitor", uvm_component parent = null);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual cpu_reset_if)::read_by_name(
          get_full_name(), "vif", vif, this))
      `uvm_fatal("CPU_RESET_MON", "cpu_reset_if virtual interface was not set")
  endfunction

  task run_phase(uvm_phase phase);
    bit last_reset;
    if (vif.reset !== 1'b0 && vif.reset !== 1'b1)
      `uvm_fatal("CPU_RESET_MON", "CPU reset is unknown at monitor startup")

    last_reset = vif.reset;
    publish_reset_state(last_reset);
    forever begin
      @(vif.reset);
      if (vif.reset !== 1'b0 && vif.reset !== 1'b1)
        `uvm_error("CPU_RESET_MON", "CPU reset transitioned to X/Z")
      else if (vif.reset != last_reset)
        publish_reset_state(vif.reset);
      last_reset = (vif.reset === 1'b1);
    end
  endtask

  task publish_reset_state(bit asserted);
    cpu_reset_txn tr;
    tr = cpu_reset_txn::type_id::create("reset_observation");
    tr.reset_asserted = asserted;
    tr.event_time = $time;
    ap.write(tr);
    `uvm_info("CPU_RESET_MON",
              $sformatf("CPU reset %s at %0t",
                        asserted ? "ASSERTED" : "DEASSERTED", $time),
              UVM_MEDIUM)
  endtask
endclass

class cpu_reset_agent extends uvm_agent;
  `uvm_component_utils(cpu_reset_agent)

  cpu_reset_sequencer reset_sqr;
  cpu_reset_driver    reset_drv;
  cpu_reset_monitor   reset_mon;

  function new(string name = "cpu_reset_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    reset_mon = cpu_reset_monitor::type_id::create("reset_mon", this);
    if (get_is_active() == UVM_ACTIVE) begin
      reset_sqr = cpu_reset_sequencer::type_id::create("reset_sqr", this);
      reset_drv = cpu_reset_driver::type_id::create("reset_drv", this);
    end
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    if (get_is_active() == UVM_ACTIVE)
      reset_drv.seq_item_port.connect(reset_sqr.seq_item_export);
  endfunction
endclass

`endif
