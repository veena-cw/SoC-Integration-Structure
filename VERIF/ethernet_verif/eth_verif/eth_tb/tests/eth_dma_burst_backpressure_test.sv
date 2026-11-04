// Coverage-directed full-duplex DMA AXI backpressure testcase.
// Uses existing DMA/RGMII integrity checking infrastructure.
// No designer RTL changes.

class eth_dma_burst_backpressure_test
    extends eth_tx_rx_dma_recovery_integrity_test;

    `uvm_component_utils(eth_dma_burst_backpressure_test)

    int unsigned ar_stalls;
    int unsigned r_stalls;
    int unsigned aw_stalls;
    int unsigned w_stalls;
    int unsigned b_stalls;

    function new(
        string name = "eth_dma_burst_backpressure_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    // Override in coverage-directed derived tests.
    virtual function void configure_backpressure();
        env.axi_ag.drv.arready_delay_cycles = 5;
        env.axi_ag.drv.rvalid_delay_cycles  = 4;
        env.axi_ag.drv.awready_delay_cycles = 6;
        env.axi_ag.drv.wready_delay_cycles  = 5;
        env.axi_ag.drv.bvalid_delay_cycles  = 7;
    endfunction

    task automatic monitor_axi_stalls();
        forever begin
            @(posedge env.axi_ag.drv.vif.aclk);

            if (env.axi_ag.drv.vif.aresetn === 1'b1) begin
                if (env.axi_ag.drv.vif.arvalid === 1'b1 &&
                    env.axi_ag.drv.vif.arready === 1'b0)
                    ar_stalls++;

                if (env.axi_ag.drv.vif.rvalid === 1'b1 &&
                    env.axi_ag.drv.vif.rready === 1'b0)
                    r_stalls++;

                if (env.axi_ag.drv.vif.awvalid === 1'b1 &&
                    env.axi_ag.drv.vif.awready === 1'b0)
                    aw_stalls++;

                if (env.axi_ag.drv.vif.wvalid === 1'b1 &&
                    env.axi_ag.drv.vif.wready === 1'b0)
                    w_stalls++;

                if (env.axi_ag.drv.vif.bvalid === 1'b1 &&
                    env.axi_ag.drv.vif.bready === 1'b0)
                    b_stalls++;
            end
        end
    endtask

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_seq;
        bit [31:0] enable_irq;

        phase.raise_objection(this);

        failed = 0;
        rd_count = 0;
        wr_count = 0;

        rd_errors.delete();
        wr_errors.delete();

        ar_stalls = 0;
        r_stalls  = 0;
        aw_stalls = 0;
        w_stalls  = 0;
        b_stalls  = 0;

        rgmii_vif.loopback_enable = 1'b0;
        rgmii_vif.bfm_rx_ctl = 1'b0;
        rgmii_vif.bfm_rxd = 4'h0;

        reset_seq = eth_reset_seq::type_id::create(
            "backpressure_reset");

        reset_seq.start(env.reset_ag.sqr);

        // Enable AXI memory-slave backpressure.
        env.axi_ag.drv.backpressure_enable = 1'b1;

        configure_backpressure();

        env.axi_ag.drv.inject_read_error  = 1'b0;
        env.axi_ag.drv.inject_write_error = 1'b0;

        `uvm_info("DMA_BP_START",
            "Starting full-duplex AXI backpressure testcase",
            UVM_NONE)

        // Collect descriptor completion statuses.
        // Reuse the same descriptor signals as the recovery test.
        fork : bp_background
            begin : descriptor_monitor
                forever begin
                    @(posedge desc_vif.clk);

                    if (desc_vif.rd_sts_valid === 1'b1) begin
                        rd_errors.push_back(desc_vif.rd_sts_error);
                        rd_count++;
                    end

                    if (desc_vif.wr_sts_valid === 1'b1) begin
                        wr_errors.push_back(desc_vif.wr_sts_error);
                        wr_count++;
                    end
                end
            end

            begin : stall_monitor
                monitor_axi_stalls();
            end
        join_none

        enable_irq = 32'h7;
        csr_access(1, 32'h8, enable_irq);

        // Existing integrity checker verifies:
        // - TX AXIS data
        // - TX RGMII payload
        // - RX AXIS data
        // - RX AXI memory data
        // - DMA descriptor error codes
        // - RGMII full-duplex overlap
        // - DMA error IRQ status
        run_integrity_pair(
            "AXI_BACKPRESSURE",
            1'b0,
            1'b0,
            4'h0,
            4'h0
        );

        // Stop observation after the transaction has completed.
        disable bp_background;

        if (rd_count != 1 || wr_count != 1)
            integrity_error("DMA_BP_DESC",
                $sformatf(
                    "Expected one TX/RX completion; RD=%0d WR=%0d",
                    rd_count, wr_count));

        if (ar_stalls == 0)
            integrity_error("DMA_BP_AR",
                "No AXI read-address backpressure observed");

        if (aw_stalls == 0)
            integrity_error("DMA_BP_AW",
                "No AXI write-address backpressure observed");

        if (w_stalls == 0)
            integrity_error("DMA_BP_W",
                "No AXI write-data backpressure observed");

        `uvm_info("DMA_BP_COVERAGE",
            $sformatf(
                "Observed stall cycles: AR=%0d R=%0d AW=%0d W=%0d B=%0d",
                ar_stalls,
                r_stalls,
                aw_stalls,
                w_stalls,
                b_stalls),
            UVM_NONE)

        // Restore driver defaults.
        env.axi_ag.drv.backpressure_enable = 1'b0;
        env.axi_ag.drv.arready_delay_cycles = 0;
        env.axi_ag.drv.rvalid_delay_cycles  = 0;
        env.axi_ag.drv.awready_delay_cycles = 0;
        env.axi_ag.drv.wready_delay_cycles  = 0;
        env.axi_ag.drv.bvalid_delay_cycles  = 0;

        rgmii_vif.bfm_rx_ctl = 1'b0;
        rgmii_vif.bfm_rxd = 4'h0;
        rgmii_vif.loopback_enable = 1'b1;

        if (failed)
            `uvm_error("DMA_BP_FAIL",
                "Full-duplex DMA backpressure testcase FAILED")
        else
            `uvm_info("DMA_BP_PASS",
                "Full-duplex DMA backpressure testcase PASSED",
                UVM_NONE)

        phase.drop_objection(this);
    endtask

endclass
