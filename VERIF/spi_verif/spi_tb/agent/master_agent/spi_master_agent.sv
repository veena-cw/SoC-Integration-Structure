class spi_master_agent extends uvm_agent;

    `uvm_component_utils(spi_master_agent)

    spi_master_sequencer sequencer;
    spi_master_driver    driver;
    spi_master_monitor   monitor;

    function new(string name = "spi_master_agent",
                 uvm_component parent = null);
      super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
      super.build_phase(phase);

      sequencer = spi_master_sequencer::type_id::create("sequencer", this);
      driver    = spi_master_driver   ::type_id::create("driver",    this);
      monitor   = spi_master_monitor  ::type_id::create("monitor",   this);
    endfunction

    function void connect_phase(uvm_phase phase);
      super.connect_phase(phase);
      driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction

  endclass
