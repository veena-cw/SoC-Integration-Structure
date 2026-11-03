class csi2_axi_agent extends uvm_agent;
  `uvm_component_utils(csi2_axi_agent)

  csi2_axi_slave_sequencer sequencer;
  csi2_axi_slave_driver    driver;
  csi2_axi_write_monitor   monitor;

  function new(string name = "csi2_axi_agent", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    sequencer = csi2_axi_slave_sequencer::type_id::create("sequencer", this);
    driver    = csi2_axi_slave_driver::type_id::create("driver", this);
    monitor   = csi2_axi_write_monitor::type_id::create("monitor", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction
endclass : csi2_axi_agent
