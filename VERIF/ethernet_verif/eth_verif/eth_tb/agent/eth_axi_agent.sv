class eth_axi_agent extends uvm_agent;
    `uvm_component_utils(eth_axi_agent)

    eth_axi_sequencer sqr;
    eth_axi_driver    drv;   // Models external memory responses for DMA AXI accesses.
    eth_axi_monitor   mon;   // Observes DMA read/write traffic at the memory boundary.

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        sqr = eth_axi_sequencer::type_id::create("sqr", this);
        drv = eth_axi_driver::type_id::create("drv", this);
        mon = eth_axi_monitor::type_id::create("mon", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(sqr.seq_item_export); // Routes memory-model requests to the AXI slave driver.
    endfunction
endclass
