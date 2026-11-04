class eth_rx_framing_error_test extends eth_rx_only_irq_test;
    `uvm_component_utils(eth_rx_framing_error_test)

    virtual eth_desc_debug_if desc_vif;


    localparam longint unsigned RX_ADDR = 64'h2000;
    localparam int unsigned RX_LEN = 64;
    localparam byte unsigned GUARD_VALUE = 8'hA5;


    function new(string name = "eth_rx_framing_error_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this, "", "desc_debug_vif", desc_vif))
            `uvm_fatal("FRAMING_VIF",
                       "Unable to obtain eth_desc_debug_if")
    endfunction

    task automatic drive_rgmii_error_byte(
        input byte unsigned data_byte
    );
        // RX_CTL rising=1, falling=0:
        // GMII_RX_DV=1, GMII_RX_ER=1.
        @(negedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= data_byte[3:0];
        rgmii_vif.bfm_rx_ctl <= 1'b1;

        @(posedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= data_byte[7:4];
        rgmii_vif.bfm_rx_ctl <= 1'b0;
    endtask

    task automatic drive_rx_framing_error_frame();
        byte unsigned payload[$];
        logic [31:0] good_fcs;

        for (int unsigned i = 0; i < RX_LEN; i++)
            payload.push_back(8'h80 + i[7:0]);

        good_fcs = calculate_ethernet_fcs(payload);

        `uvm_info("FRAMING_INJECT",
            $sformatf(
                "RX payload=%0d GOOD_FCS=%08h; injecting RX_ER at payload byte 20",
                RX_LEN, good_fcs),
            UVM_LOW)

        @(negedge rgmii_vif.bfm_rx_clk);

        for (int unsigned i = 0; i < 7; i++)
            drive_rgmii_byte(8'h55);

        drive_rgmii_byte(8'hD5);

        foreach (payload[i]) begin
            if (i == 20)
                drive_rgmii_error_byte(payload[i]);
            else
                drive_rgmii_byte(payload[i]);
        end

        drive_rgmii_byte(good_fcs[7:0]);
        drive_rgmii_byte(good_fcs[15:8]);
        drive_rgmii_byte(good_fcs[23:16]);
        drive_rgmii_byte(good_fcs[31:24]);

        @(negedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rx_ctl <= 1'b0;
        rgmii_vif.bfm_rxd    <= 4'h0;
    endtask

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_sequence;
        eth_rx_only_dma_seq cfg_seq;
        int unsigned error_count;
        int unsigned bad_frame_pulse_count;
        bit [31:0] csr_data;

        phase.raise_objection(this);

        // Initialize and release DUT reset before AXI-Lite traffic.
        reset_sequence = eth_reset_seq::type_id::create("reset_sequence");
        reset_sequence.start(env.reset_ag.sqr);

        error_count = 0;
        bad_frame_pulse_count = 0;

        // Allow reset and interface initialization to complete.
        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);

        // Initialize RX destination and surrounding guard region.
        for (longint unsigned addr = RX_ADDR - 8;
             addr < RX_ADDR + RX_LEN + 16;
             addr++)
            env.axi_ag.drv.mem[addr] = GUARD_VALUE;

        clear_observation();

        cfg_seq = eth_rx_only_dma_seq::type_id::create("cfg_seq");
        cfg_seq.rx_base   = RX_ADDR[31:0];
        cfg_seq.rx_length = RX_LEN;
        cfg_seq.start(env.axil_ag.sqr);

        // Select external RGMII BFM instead of TX-to-RX loopback.
        // Otherwise the injected framing-error frame cannot reach the MAC.
        rgmii_vif.loopback_enable = 1'b0;

        // Give the RX descriptor time to become active.
        repeat (30)
            @(posedge env.axi_ag.drv.vif.aclk);

        `uvm_info("FRAMING_START",
                  "Injecting an RGMII payload framing error",
                  UVM_LOW)

        // Drive the framing-error frame while monitoring the MAC error.
        fork
            begin : inject_bad_fcs
                drive_rx_framing_error_frame();

                // Continue observing after the frame.
                repeat (1200)
                    @(posedge env.axi_ag.drv.vif.aclk);
            end

            begin : monitor_bad_fcs
                // Count assertion edges, not clock cycles.
                // This avoids missing a short status pulse.
                forever begin
                    @(posedge desc_vif.rx_error_bad_frame);
                    bad_frame_pulse_count++;
                end
            end
        join_any
        disable fork;

        if (bad_frame_pulse_count == 0) begin
            error_count++;
            `uvm_error("FRAMING_NOT_DETECTED",
                "MAC did not assert rx_error_bad_frame")
        end
        else begin
            `uvm_info("FRAMING_DETECTED",
                $sformatf("Observed %0d bad-frame pulse(s)",
                          bad_frame_pulse_count),
                UVM_LOW)
        end

        // Allow the RX MAC/FIFO/CDC path to settle.
        repeat (100)
            @(posedge env.axi_ag.drv.vif.aclk);

        if (env.rx_axis_mon.transfer_count != 0 ||
            env.rx_axis_mon.tlast_count != 0) begin
            error_count++;
            `uvm_error("FRAMING_RX_AXIS",
                $sformatf(
                    "Dropped frame reached RX AXIS: bytes=%0d TLAST=%0d",
                    env.rx_axis_mon.transfer_count,
                    env.rx_axis_mon.tlast_count))
        end

        if (env.axi_ag.drv.write_burst_count != 0 ||
            env.axi_ag.drv.write_beat_count != 0 ||
            env.axi_ag.drv.write_byte_count != 0) begin
            error_count++;
            `uvm_error("FRAMING_AXI",
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
                `uvm_error("FRAMING_MEMORY",
                    $sformatf(
                        "RX memory modified at 0x%0h: expected=%02h actual=%02h",
                        addr,
                        GUARD_VALUE,
                        env.axi_ag.drv.mem[addr]))
            end
        end

        if (error_count == 0)
            `uvm_info("FRAMING_PASS",
                "Framing-error frame was discarded; RX AXIS, DMA writes, and memory checks passed",
                UVM_LOW)

        phase.drop_objection(this);
    endtask

endclass
