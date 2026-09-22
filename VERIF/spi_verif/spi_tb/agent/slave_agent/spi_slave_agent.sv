class spi_slave_agent extends uvm_agent;

    `uvm_component_utils(spi_slave_agent)

    spi_slave_sequencer sequencer;
    spi_slave_driver    driver;
    spi_slave_monitor   monitor;

    function new(string name = "spi_slave_agent",
                 uvm_component parent = null);
      super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
      super.build_phase(phase);

      sequencer = spi_slave_sequencer::type_id::create("sequencer", this);
      driver    = spi_slave_driver   ::type_id::create("driver",    this);
      monitor   = spi_slave_monitor  ::type_id::create("monitor",   this);
    endfunction

    function void connect_phase(uvm_phase phase);
      super.connect_phase(phase);
      driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction

  endclass
