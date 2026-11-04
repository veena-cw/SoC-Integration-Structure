class eth_dma_bp_medium_test
    extends eth_dma_burst_backpressure_test;

    `uvm_component_utils(eth_dma_bp_medium_test)

    function new(
        string name = "eth_dma_bp_medium_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    virtual function void configure_backpressure();
        env.axi_ag.drv.arready_delay_cycles = 3;
        env.axi_ag.drv.rvalid_delay_cycles  = 4;
        env.axi_ag.drv.awready_delay_cycles = 3;
        env.axi_ag.drv.wready_delay_cycles  = 3;
        env.axi_ag.drv.bvalid_delay_cycles  = 7;
    endfunction

endclass
