class eth_axil_agent extends uvm_agent;
    `uvm_component_utils(eth_axil_agent)

    eth_axil_sequencer sqr;
    eth_axil_driver    drv;   // Converts CSR transactions into AXI-Lite bus activity.
    eth_axil_monitor   mon;   // Provides a passive observation point for CSR accesses.

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        sqr = eth_axil_sequencer::type_id::create("sqr", this);
        drv = eth_axil_driver::type_id::create("drv", this);
        mon = eth_axil_monitor::type_id::create("mon", this);
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        drv.seq_item_port.connect(sqr.seq_item_export); // Sends CSR read/write requests to the AXI-Lite driver.
    endfunction
endclass
