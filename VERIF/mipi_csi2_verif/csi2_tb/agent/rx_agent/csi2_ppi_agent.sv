class csi2_ppi_agent extends uvm_agent;
  `uvm_component_utils(csi2_ppi_agent)

  csi2_ppi_sequencer sequencer;
  csi2_ppi_driver    driver;
  csi2_ppi_monitor   monitor;

  function new(string name = "csi2_ppi_agent", uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    sequencer = csi2_ppi_sequencer::type_id::create("sequencer", this);
    driver    = csi2_ppi_driver::type_id::create("driver", this);
    monitor   = csi2_ppi_monitor::type_id::create("monitor", this);
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    driver.seq_item_port.connect(sequencer.seq_item_export);
  endfunction
endclass : csi2_ppi_agent
