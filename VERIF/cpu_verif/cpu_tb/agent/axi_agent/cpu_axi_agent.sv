// AXI agent for cpu_top's AXI master bridge interface.
class cpu_axi_agent #(
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH,
  parameter int ID_WIDTH   = `CPU_AXI_ID_WIDTH
) extends uvm_agent;
  `uvm_component_param_utils(cpu_axi_agent #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH))

  typedef cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) txn_t;
  typedef cpu_axi_agent_driver #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) driver_t;
  typedef cpu_axi_agent_sequencer #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) sequencer_t;
  typedef cpu_axi_agent_monitor #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) monitor_t;
  typedef cpu_axi_memory_sequence #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) memory_seq_t;

  driver_t    driver;
  sequencer_t sequencer;
  monitor_t   monitor;
  virtual cpu_AXI_if #(ID_WIDTH, ADDR_WIDTH, DATA_WIDTH) vif;
  memory_seq_t mem_sequence;

  function new(string name = "cpu_axi_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    uvm_active_passive_enum mode;
    super.build_phase(phase);

    if (!uvm_resource_db#(
          virtual cpu_AXI_if #(ID_WIDTH, ADDR_WIDTH, DATA_WIDTH))::read_by_name(
          get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf(
        "[%s] Virtual interface not found in resource_db", get_full_name()))

    if (!uvm_resource_db#(uvm_active_passive_enum)::read_by_name(
          get_full_name(), "is_active", mode, this)) begin
      `uvm_warning("NOMODE", $sformatf(
        "[%s] No is_active resource found from test -- defaulting to UVM_PASSIVE",
        get_full_name()))
      mode = UVM_PASSIVE;
    end
    is_active = mode;

    uvm_resource_db#(
      virtual cpu_AXI_if #(ID_WIDTH, ADDR_WIDTH, DATA_WIDTH))::set(
      {get_full_name(), ".*"}, "vif", vif, this);

    monitor = monitor_t::type_id::create("monitor", this);
    monitor.vif = vif;
    sequencer = sequencer_t::type_id::create("sequencer", this);
    mem_sequence = memory_seq_t::type_id::create("mem_sequence");

    if (is_active == UVM_ACTIVE) begin
      driver = driver_t::type_id::create("driver", this);
      driver.mem = sequencer.mem;
    end
  endfunction

  task run_phase(uvm_phase phase);
    if (mem_sequence != null)
      mem_sequence.start(sequencer);
  endtask

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    monitor.ap.connect(sequencer.request_fifo.analysis_export);
    if (is_active == UVM_ACTIVE)
      driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction
endclass : cpu_axi_agent
