class eth_rx_preamble_error_test extends eth_rx_only_irq_test;

    `uvm_component_utils(eth_rx_preamble_error_test)

    virtual eth_desc_debug_if desc_vif;

    localparam longint unsigned RX_ADDR = 64'h2000;
    localparam int unsigned RX_LEN = 64;
    localparam byte unsigned GUARD_VALUE = 8'hA5;

    function new(
        string name = "eth_rx_preamble_error_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this, "", "desc_debug_vif", desc_vif))
            `uvm_fatal("PREAMBLE_VIF",
                "Unable to obtain eth_desc_debug_if")
    endfunction

    function automatic byte unsigned expected_byte(
        input int unsigned index
    );
        return 8'h80 + index[7:0];
    endfunction

    task automatic drive_rx_bad_preamble_frame();

        byte unsigned payload[$];
        logic [31:0] fcs;

        payload.delete();

        for (int unsigned i = 0; i < RX_LEN; i++)
            payload.push_back(expected_byte(i));

        fcs = calculate_ethernet_fcs(payload);

        `uvm_info("PREAMBLE_INJECT",
            $sformatf(
                "Injecting malformed preamble, payload=%0d FCS=%08h",
                RX_LEN, fcs),
            UVM_LOW)

        @(negedge rgmii_vif.bfm_rx_clk);

        // Seven preamble bytes; corrupt byte index 2.
        for (int unsigned i = 0; i < 7; i++) begin
            if (i == 2)
                drive_rgmii_byte(8'h54);
            else
                drive_rgmii_byte(8'h55);
        end

        // Keep SFD valid so the MAC enters the RX datapath.
        drive_rgmii_byte(8'hD5);

        // Valid payload.
        foreach (payload[i])
            drive_rgmii_byte(payload[i]);

        // Valid Ethernet FCS, least significant byte first.
        drive_rgmii_byte(fcs[7:0]);
        drive_rgmii_byte(fcs[15:8]);
        drive_rgmii_byte(fcs[23:16]);
        drive_rgmii_byte(fcs[31:24]);

        @(negedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rx_ctl <= 1'b0;
        rgmii_vif.bfm_rxd    <= 4'h0;

    endtask

    task run_phase(uvm_phase phase);

        eth_reset_seq reset_sequence;
        eth_rx_only_dma_seq cfg_seq;

        int unsigned error_count;
        int unsigned preamble_pulse_count;
        int unsigned bad_fcs_pulse_count;
        int unsigned bad_frame_pulse_count;

        byte unsigned expected_data;

        phase.raise_objection(this);

        error_count = 0;
        preamble_pulse_count = 0;
        bad_fcs_pulse_count = 0;
        bad_frame_pulse_count = 0;

        reset_sequence =
            eth_reset_seq::type_id::create("reset_sequence");
        reset_sequence.start(env.reset_ag.sqr);

        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);

        // Initialize RX memory and surrounding guard bytes.
        for (longint unsigned addr = RX_ADDR - 8;
             addr < RX_ADDR + RX_LEN + 16;
             addr++)
            env.axi_ag.drv.mem[addr] = GUARD_VALUE;

        clear_observation();

        // Configure RX DMA.
        cfg_seq = eth_rx_only_dma_seq::type_id::create("cfg_seq");
        cfg_seq.rx_base = RX_ADDR[31:0];
        cfg_seq.rx_length = RX_LEN;
        cfg_seq.start(env.axil_ag.sqr);

        // Use external RGMII BFM, not internal TX loopback.
        rgmii_vif.loopback_enable = 1'b0;

        repeat (30)
            @(posedge env.axi_ag.drv.vif.aclk);

        // Register the expected RX payload before frame injection.
        // A malformed preamble with valid SFD/FCS is accepted by this RTL.
        begin
            byte unsigned expected_payload[$];

            for (int unsigned i = 0; i < RX_LEN; i++)
                expected_payload.push_back(expected_byte(i));

            env.scb.set_expected_rx(expected_payload);
        end

        `uvm_info("PREAMBLE_START",
            "Starting malformed-preamble RX test",
            UVM_LOW)

        fork
            begin : inject_frame
                drive_rx_bad_preamble_frame();

                repeat (1200)
                    @(posedge env.axi_ag.drv.vif.aclk);
            end

            begin : monitor_preamble
                forever begin
                    @(posedge desc_vif.rx_error_preamble);
                    preamble_pulse_count++;
                end
            end

            begin : monitor_bad_fcs
                forever begin
                    @(posedge desc_vif.rx_error_bad_fcs);
                    bad_fcs_pulse_count++;
                end
            end

            begin : monitor_bad_frame
                forever begin
                    @(posedge desc_vif.rx_error_bad_frame);
                    bad_frame_pulse_count++;
                end
            end
        join_any

        disable fork;

        repeat (100)
            @(posedge env.axi_ag.drv.vif.aclk);

        // Check MAC error classification.
        if (preamble_pulse_count != 1) begin
            error_count++;
            `uvm_error("PREAMBLE_STATUS",
                $sformatf(
                    "Expected 1 preamble-error pulse, observed %0d",
                    preamble_pulse_count))
        end

        if (bad_fcs_pulse_count != 0 ||
            bad_frame_pulse_count != 0) begin
            error_count++;
            `uvm_error("PREAMBLE_UNEXPECTED_ERROR",
                $sformatf(
                    "Unexpected bad-FCS=%0d bad-frame=%0d pulses",
                    bad_fcs_pulse_count,
                    bad_frame_pulse_count))
        end

        // This RTL can accept a frame despite a malformed
        // preamble when the SFD, payload and FCS are valid.
        if (env.rx_axis_mon.transfer_count != RX_LEN ||
            env.rx_axis_mon.tlast_count != 1 ||
            env.rx_axis_mon.tuser_seen) begin

            error_count++;

            `uvm_error("PREAMBLE_RX_AXIS",
                $sformatf(
                    "RX AXIS mismatch: bytes=%0d TLAST=%0d TUSER=%0b",
                    env.rx_axis_mon.transfer_count,
                    env.rx_axis_mon.tlast_count,
                    env.rx_axis_mon.tuser_seen))
        end

        // Check every observed RX payload byte.
        if (env.rx_axis_mon.observed_bytes.size() != RX_LEN) begin
            error_count++;
            `uvm_error("PREAMBLE_AXIS_SIZE",
                $sformatf(
                    "Expected %0d RX bytes, observed %0d",
                    RX_LEN,
                    env.rx_axis_mon.observed_bytes.size()))
        end
        else begin
            for (int unsigned i = 0; i < RX_LEN; i++) begin
                expected_data = expected_byte(i);

                if (env.rx_axis_mon.observed_bytes[i] !==
                    expected_data) begin
                    error_count++;

                    `uvm_error("PREAMBLE_AXIS_DATA",
                        $sformatf(
                            "Byte %0d: expected=%02h actual=%02h",
                            i, expected_data,
                            env.rx_axis_mon.observed_bytes[i]))
                end
            end
        end

        // Verify that RX DMA wrote the expected payload.
        for (int unsigned i = 0; i < RX_LEN; i++) begin
            expected_data = expected_byte(i);

            if (env.axi_ag.drv.mem[RX_ADDR+i] !==
                expected_data) begin
                error_count++;

                `uvm_error("PREAMBLE_DMA_DATA",
                    $sformatf(
                        "Memory 0x%0h: expected=%02h actual=%02h",
                        RX_ADDR+i,
                        expected_data,
                        env.axi_ag.drv.mem[RX_ADDR+i]))
            end
        end

        // Verify guard regions remain unchanged.
        for (longint unsigned addr = RX_ADDR - 8;
             addr < RX_ADDR;
             addr++) begin

            if (env.axi_ag.drv.mem[addr] !== GUARD_VALUE) begin
                error_count++;
                `uvm_error("PREAMBLE_GUARD",
                    $sformatf(
                        "Lower guard corrupted at 0x%0h",
                        addr))
            end
        end

        for (longint unsigned addr = RX_ADDR + RX_LEN;
             addr < RX_ADDR + RX_LEN + 16;
             addr++) begin

            if (env.axi_ag.drv.mem[addr] !== GUARD_VALUE) begin
                error_count++;
                `uvm_error("PREAMBLE_GUARD",
                    $sformatf(
                        "Upper guard corrupted at 0x%0h",
                        addr))
            end
        end

        if (env.axi_ag.drv.write_burst_count == 0 ||
            env.axi_ag.drv.write_byte_count != RX_LEN ||
            env.axi_ag.drv.write_error_seen) begin

            error_count++;

            `uvm_error("PREAMBLE_DMA_WRITE",
                $sformatf(
                    "DMA writes: bursts=%0d bytes=%0d error=%0b",
                    env.axi_ag.drv.write_burst_count,
                    env.axi_ag.drv.write_byte_count,
                    env.axi_ag.drv.write_error_seen))
        end

        if (error_count == 0) begin
            `uvm_info("PREAMBLE_PASS",
                "Preamble error detected; RX payload, DMA memory and guards verified",
                UVM_LOW)
        end
        else begin
            `uvm_error("PREAMBLE_FAIL",
                $sformatf(
                    "Malformed-preamble test failed with %0d check errors",
                    error_count))
        end

        phase.drop_objection(this);

    endtask

endclass
