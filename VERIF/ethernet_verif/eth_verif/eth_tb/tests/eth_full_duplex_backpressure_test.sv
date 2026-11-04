class eth_full_duplex_backpressure_test extends eth_full_duplex_test;

    `uvm_component_utils(eth_full_duplex_backpressure_test)

    function new(string name = "eth_full_duplex_backpressure_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction


    task run_phase(uvm_phase phase);

        `uvm_info("BACKPRESSURE_CFG",
            "Enabling deterministic AXI memory backpressure",
            UVM_NONE)

        env.axi_ag.drv.backpressure_enable  = 1'b1;

        env.axi_ag.drv.arready_delay_cycles = 5;
        env.axi_ag.drv.rvalid_delay_cycles  = 3;

        env.axi_ag.drv.awready_delay_cycles = 7;
        env.axi_ag.drv.wready_delay_cycles  = 4;
        env.axi_ag.drv.bvalid_delay_cycles  = 5;

        `uvm_info("BACKPRESSURE_CFG",
            $sformatf(
                "ARREADY=%0d RVALID=%0d AWREADY=%0d WREADY=%0d BVALID=%0d cycles",
                env.axi_ag.drv.arready_delay_cycles,
                env.axi_ag.drv.rvalid_delay_cycles,
                env.axi_ag.drv.awready_delay_cycles,
                env.axi_ag.drv.wready_delay_cycles,
                env.axi_ag.drv.bvalid_delay_cycles),
            UVM_NONE)

        super.run_phase(phase);

    endtask

endclass
