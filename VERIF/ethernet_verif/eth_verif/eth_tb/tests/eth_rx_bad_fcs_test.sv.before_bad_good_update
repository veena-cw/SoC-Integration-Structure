class eth_rx_bad_fcs_test extends eth_rx_only_irq_test;
    `uvm_component_utils(eth_rx_bad_fcs_test)

    virtual eth_desc_debug_if desc_vif;


    localparam longint unsigned RX_ADDR = 64'h2000;
    localparam int unsigned RX_LEN = 64;
    localparam byte unsigned GUARD_VALUE = 8'hA5;


    function new(string name = "eth_rx_bad_fcs_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this, "", "desc_debug_vif", desc_vif))
            `uvm_fatal("BAD_FCS_VIF",
                       "Unable to obtain eth_desc_debug_if")
    endfunction

    task automatic drive_rx_bad_fcs_frame();
        byte unsigned payload[$];
        logic [31:0] good_fcs;
        logic [31:0] bad_fcs;

        payload.delete();

        for (int unsigned i = 0; i < RX_LEN; i++)
            payload.push_back(8'h80 + i[7:0]);

        good_fcs = calculate_ethernet_fcs(payload);
        bad_fcs  = good_fcs ^ 32'h0000_0001;

        `uvm_info("BAD_FCS_INJECT",
            $sformatf(
                "RX payload=%0d GOOD_FCS=%08h BAD_FCS=%08h",
                RX_LEN, good_fcs, bad_fcs),
            UVM_LOW)

        @(negedge rgmii_vif.bfm_rx_clk);

        // Seven preamble bytes.
        for (int unsigned i = 0; i < 7; i++)
            drive_rgmii_byte(8'h55);

        // Start frame delimiter.
        drive_rgmii_byte(8'hD5);

        foreach (payload[i])
            drive_rgmii_byte(payload[i]);

        // Deliberately corrupted Ethernet FCS.
        drive_rgmii_byte(bad_fcs[7:0]);
        drive_rgmii_byte(bad_fcs[15:8]);
        drive_rgmii_byte(bad_fcs[23:16]);
        drive_rgmii_byte(bad_fcs[31:24]);

        @(negedge rgmii_vif.bfm_rx_clk);

        rgmii_vif.bfm_rx_ctl <= 1'b0;
        rgmii_vif.bfm_rxd    <= 4'h0;
    endtask

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_sequence;
        eth_rx_only_dma_seq cfg_seq;
        int unsigned error_count;
        int unsigned bad_fcs_pulse_count;
        bit [31:0] csr_data;

        phase.raise_objection(this);

        // Initialize and release DUT reset before AXI-Lite traffic.
        reset_sequence = eth_reset_seq::type_id::create("reset_sequence");
        reset_sequence.start(env.reset_ag.sqr);

        error_count = 0;
        bad_fcs_pulse_count = 0;

        // Allow reset and interface initialization to complete.
        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);

// Configure one RX descriptor for all 200 discarded frames.
        cfg_seq = eth_rx_only_dma_seq::type_id::create("cfg_seq");
        cfg_seq.rx_base   = RX_ADDR[31:0];
        cfg_seq.rx_length = RX_LEN;
        cfg_seq.irq_enable_mask = 32'h0000_0006;
        cfg_seq.start(env.axil_ag.sqr);

        rgmii_vif.loopback_enable = 1'b0;

        // Allow the RX descriptor to become active.
        repeat (30)
            @(posedge env.axi_ag.drv.vif.aclk);

        repeat (1) begin
        // Initialize RX destination and surrounding guard region.
        for (longint unsigned addr = RX_ADDR - 8;
             addr < RX_ADDR + RX_LEN + 16;
             addr++)
            env.axi_ag.drv.mem[addr] = GUARD_VALUE;

        clear_observation();
        bad_fcs_pulse_count = 0;

        `uvm_info("BAD_FCS_START",
                  "Injecting a frame with deliberately corrupted FCS",
                  UVM_LOW)

        // Drive the bad-FCS frame while monitoring the MAC error.
        fork
            begin : inject_bad_fcs
                drive_rx_bad_fcs_frame();

                // Continue observing after the frame.
                repeat (1200)
                    @(posedge env.axi_ag.drv.vif.aclk);
            end

            begin : monitor_bad_fcs
                // Count assertion edges, not clock cycles.
                // This avoids missing a short status pulse.
                forever begin
                    @(posedge desc_vif.rx_error_bad_fcs);
                    bad_fcs_pulse_count++;
                end
            end
        join_any
        disable fork;

        if (bad_fcs_pulse_count == 0) begin
            error_count++;
            `uvm_error("BAD_FCS_NOT_DETECTED",
                "MAC did not assert rx_error_bad_fcs")
        end
        else begin
            `uvm_info("BAD_FCS_DETECTED",
                $sformatf("Observed %0d bad-FCS pulse(s)",
                          bad_fcs_pulse_count),
                UVM_LOW)
        end

        // Allow the RX MAC/FIFO/CDC path to settle.
        repeat (100)
            @(posedge env.axi_ag.drv.vif.aclk);

        if (env.rx_axis_mon.transfer_count != 0 ||
            env.rx_axis_mon.tlast_count != 0) begin
            error_count++;
            `uvm_error("BAD_FCS_RX_AXIS",
                $sformatf(
                    "Dropped frame reached RX AXIS: bytes=%0d TLAST=%0d",
                    env.rx_axis_mon.transfer_count,
                    env.rx_axis_mon.tlast_count))
        end

        if (env.axi_ag.drv.write_burst_count != 0 ||
            env.axi_ag.drv.write_beat_count != 0 ||
            env.axi_ag.drv.write_byte_count != 0) begin
            error_count++;
            `uvm_error("BAD_FCS_AXI",
                $sformatf(
                    "Unexpected RX DMA write: bursts=%0d beats=%0d bytes=%0d",
                    env.axi_ag.drv.write_burst_count,
                    env.axi_ag.drv.write_beat_count,
                    env.axi_ag.drv.write_byte_count))
        end

        for (longint unsigned addr = RX_ADDR - 8;
             addr < RX_ADDR + RX_LEN + 16;
             addr++) begin
            if (env.axi_ag.drv.mem[addr] !== GUARD_VALUE) begin
                error_count++;
                `uvm_error("BAD_FCS_MEMORY",
                    $sformatf(
                        "RX memory modified at 0x%0h: expected=%02h actual=%02h",
                        addr,
                        GUARD_VALUE,
                        env.axi_ag.drv.mem[addr]))
            end
        end

        if (error_count == 0)
            `uvm_info("BAD_FCS_PASS",
                "Bad-FCS frame was discarded; RX AXIS, DMA writes, and memory checks passed",
                UVM_LOW)
end
        phase.drop_objection(this);
    endtask

endclass
