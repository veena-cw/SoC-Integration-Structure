class eth_rx_good_bad_good_recovery_test extends eth_rx_only_irq_test;

    `uvm_component_utils(eth_rx_good_bad_good_recovery_test)

    virtual eth_desc_debug_if desc_vif;

    localparam int unsigned FRAME_LEN = 64;
    localparam longint unsigned RX_ADDR_1 = 64'h2000;
    localparam longint unsigned RX_ADDR_2 = 64'h3000;
    localparam byte unsigned GUARD_VALUE = 8'hA5;

    int unsigned bad_fcs_count;
    int unsigned bad_frame_count;
    int unsigned rx_desc_count;
    int unsigned rx_desc_error_count;
    int unsigned error_count;

    function new(
        string name = "eth_rx_good_bad_good_recovery_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);

        uvm_config_db#(bit)::set(
            this, "env.scb", "enable_rx_scoreboard", 1'b1
        );

        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this, "", "desc_debug_vif", desc_vif))
            `uvm_fatal("GBG_VIF", "Descriptor debug interface missing")
    endfunction

    function automatic byte unsigned payload_byte(
        input int unsigned frame_id,
        input int unsigned index
    );

        case (frame_id)
            1: return 8'h40 + index[7:0];
            2: return 8'h20 + index[7:0];
            3: return 8'h80 + index[7:0];
            default: return 8'h00;
        endcase

    endfunction

    task automatic drive_frame(
        input int unsigned frame_id,
        input bit corrupt_fcs
    );

        byte unsigned payload[$];
        logic [31:0] fcs;

        payload.delete();

        for (int unsigned i = 0; i < FRAME_LEN; i++)
            payload.push_back(payload_byte(frame_id, i));

        fcs = calculate_ethernet_fcs(payload);

        if (corrupt_fcs)
            fcs ^= 32'h0000_0001;

        `uvm_info("GBG_INJECT",
            $sformatf(
                "FRAME=%0d BAD_FCS=%0b LEN=%0d FCS=%08h",
                frame_id, corrupt_fcs, FRAME_LEN, fcs),
            UVM_LOW)

        @(negedge rgmii_vif.bfm_rx_clk);

        repeat (7)
            drive_rgmii_byte(8'h55);

        drive_rgmii_byte(8'hD5);

        foreach (payload[i])
            drive_rgmii_byte(payload[i]);

        drive_rgmii_byte(fcs[7:0]);
        drive_rgmii_byte(fcs[15:8]);
        drive_rgmii_byte(fcs[23:16]);
        drive_rgmii_byte(fcs[31:24]);

        @(negedge rgmii_vif.bfm_rx_clk);

        rgmii_vif.bfm_rx_ctl <= 1'b0;
        rgmii_vif.bfm_rxd <= 4'h0;

    endtask

    task automatic arm_rx(
        input longint unsigned addr
    );

        eth_rx_only_dma_seq cfg;

        cfg = eth_rx_only_dma_seq::type_id::create("gbg_cfg");

        cfg.rx_base = addr[31:0];
        cfg.rx_length = FRAME_LEN;

        cfg.start(env.axil_ag.sqr);

        `uvm_info("GBG_DMA_ARM",
            $sformatf("Armed RX DMA at address=%h", addr),
            UVM_LOW)

    endtask

    task automatic check_memory(
        input longint unsigned addr,
        input int unsigned frame_id
    );

        byte unsigned expected;

        for (int unsigned i = 0; i < FRAME_LEN; i++) begin

            expected = payload_byte(frame_id, i);

            if (!env.axi_ag.drv.mem.exists(addr+i) ||
                env.axi_ag.drv.mem[addr+i] !== expected) begin

                error_count++;

                `uvm_error("GBG_DMA_DATA",
                    $sformatf(
                        "FRAME=%0d ADDR=%h EXPECTED=%02h ACTUAL=%02h",
                        frame_id, addr+i, expected,
                        env.axi_ag.drv.mem[addr+i]))
            end
        end

        for (longint unsigned a = addr-8; a < addr; a++) begin
            if (!env.axi_ag.drv.mem.exists(a) ||
                env.axi_ag.drv.mem[a] !== GUARD_VALUE) begin
                error_count++;
                `uvm_error("GBG_GUARD",
                    $sformatf("Lower guard corrupted at %h", a))
            end
        end

        for (longint unsigned a = addr+FRAME_LEN;
             a < addr+FRAME_LEN+16; a++) begin

            if (!env.axi_ag.drv.mem.exists(a) ||
                env.axi_ag.drv.mem[a] !== GUARD_VALUE) begin
                error_count++;
                `uvm_error("GBG_GUARD",
                    $sformatf("Upper guard corrupted at %h", a))
            end
        end

    endtask

    task automatic wait_for_rx_completion(
        input int unsigned expected_count
    );

        int unsigned cycles;

        cycles = 0;

        while (rx_desc_count < expected_count &&
               cycles < 200000) begin
            @(negedge desc_vif.clk);
            cycles++;
        end

        if (rx_desc_count != expected_count) begin
            error_count++;
            `uvm_error("GBG_DESC_TIMEOUT",
                $sformatf(
                    "Expected descriptor count=%0d actual=%0d",
                    expected_count, rx_desc_count))
        end

    endtask

    task run_phase(uvm_phase phase);

        eth_reset_seq reset_sequence;

        byte unsigned expected_first[$];
        byte unsigned expected_third[$];

        int unsigned bytes_after_first;
        int unsigned frames_after_first;
        int unsigned dma_bytes_after_first;

        phase.raise_objection(this);

        error_count = 0;
        bad_fcs_count = 0;
        bad_frame_count = 0;
        rx_desc_count = 0;
        rx_desc_error_count = 0;

        reset_sequence =
            eth_reset_seq::type_id::create("gbg_reset");

        reset_sequence.start(env.reset_ag.sqr);

        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);

        // Initialize both destinations and their guards.
        for (longint unsigned a = RX_ADDR_1-8;
             a < RX_ADDR_1+FRAME_LEN+16; a++)
            env.axi_ag.drv.mem[a] = GUARD_VALUE;

        for (longint unsigned a = RX_ADDR_2-8;
             a < RX_ADDR_2+FRAME_LEN+16; a++)
            env.axi_ag.drv.mem[a] = GUARD_VALUE;

        clear_observation();

        for (int unsigned i = 0; i < FRAME_LEN; i++) begin
            expected_first.push_back(payload_byte(1, i));
            expected_third.push_back(payload_byte(3, i));
        end

        env.scb.set_expected_rx(expected_first);
        env.scb.add_expected_rx(expected_third);

        rgmii_vif.loopback_enable = 1'b0;

        fork
            begin : monitor_events

                forever begin
                    @(posedge desc_vif.clk);

                    if (desc_vif.wr_sts_valid === 1'b1) begin
                        rx_desc_count++;

                        if (desc_vif.wr_sts_error != 4'h0)
                            rx_desc_error_count++;

                        `uvm_info("GBG_DESC",
                            $sformatf(
                                "Completion=%0d error=%0h",
                                rx_desc_count,
                                desc_vif.wr_sts_error),
                            UVM_LOW)
                    end
                end

            end

            begin : monitor_bad_fcs

                forever begin
                    @(posedge desc_vif.rx_error_bad_fcs);
                    bad_fcs_count++;
                end

            end

            begin : monitor_bad_frame

                forever begin
                    @(posedge desc_vif.rx_error_bad_frame);
                    bad_frame_count++;
                end

            end

            begin : stimulus

                // Good frame #1.
                arm_rx(RX_ADDR_1);

                repeat (30)
                    @(posedge env.axi_ag.drv.vif.aclk);

                drive_frame(1, 1'b0);

                wait_for_rx_completion(1);

                check_memory(RX_ADDR_1, 1);

                bytes_after_first =
                    env.rx_axis_mon.transfer_count;

                frames_after_first =
                    env.rx_axis_mon.tlast_count;

                dma_bytes_after_first =
                    env.axi_ag.drv.write_byte_count;

                if (bytes_after_first != FRAME_LEN ||
                    frames_after_first != 1 ||
                    dma_bytes_after_first != FRAME_LEN) begin

                    error_count++;

                    `uvm_error("GBG_FIRST_FRAME",
                        $sformatf(
                            "First frame bytes=%0d TLAST=%0d DMA=%0d",
                            bytes_after_first,
                            frames_after_first,
                            dma_bytes_after_first))
                end

                // Rearm RX DMA for the next valid frame.
                repeat (100)
                    @(posedge env.axi_ag.drv.vif.aclk);

                arm_rx(RX_ADDR_2);

                repeat (30)
                    @(posedge env.axi_ag.drv.vif.aclk);

                // Bad frame #2.
                drive_frame(2, 1'b1);

                repeat (12)
                    @(posedge rgmii_vif.bfm_rx_clk);

                // Good frame #3.
                drive_frame(3, 1'b0);

                wait_for_rx_completion(2);

                repeat (1200)
                    @(posedge env.axi_ag.drv.vif.aclk);

            end

        join_any

        disable fork;

        // Final RX AXI-Stream checks.
        if (env.rx_axis_mon.transfer_count != 2*FRAME_LEN ||
            env.rx_axis_mon.tlast_count != 2 ||
            env.rx_axis_mon.tuser_seen) begin

            error_count++;

            `uvm_error("GBG_RX_AXIS",
                $sformatf(
                    "RX bytes=%0d TLAST=%0d TUSER=%0b",
                    env.rx_axis_mon.transfer_count,
                    env.rx_axis_mon.tlast_count,
                    env.rx_axis_mon.tuser_seen))
        end

        // Check accepted RX payload order.
        if (env.rx_axis_mon.observed_bytes.size() != 2*FRAME_LEN) begin
            error_count++;
            `uvm_error("GBG_AXIS_SIZE",
                "Expected exactly 128 accepted RX bytes")
        end
        else begin

            for (int unsigned i = 0; i < FRAME_LEN; i++) begin

                if (env.rx_axis_mon.observed_bytes[i] !==
                    payload_byte(1, i)) begin
                    error_count++;
                    `uvm_error("GBG_AXIS_DATA",
                        $sformatf("Good #1 mismatch byte=%0d", i))
                end

                if (env.rx_axis_mon.observed_bytes[FRAME_LEN+i] !==
                    payload_byte(3, i)) begin
                    error_count++;
                    `uvm_error("GBG_AXIS_DATA",
                        $sformatf("Good #3 mismatch byte=%0d", i))
                end
            end
        end

        check_memory(RX_ADDR_1, 1);
        check_memory(RX_ADDR_2, 3);

        if (bad_fcs_count != 1 || bad_frame_count != 1) begin
            error_count++;
            `uvm_error("GBG_BAD_FRAME",
                $sformatf(
                    "Bad-FCS=%0d Bad-frame=%0d",
                    bad_fcs_count, bad_frame_count))
        end

        if (rx_desc_count != 2 || rx_desc_error_count != 0) begin
            error_count++;
            `uvm_error("GBG_DESC_CHECK",
                $sformatf(
                    "Completions=%0d errors=%0d",
                    rx_desc_count, rx_desc_error_count))
        end

        if (env.axi_ag.drv.write_byte_count != 2*FRAME_LEN ||
            env.axi_ag.drv.write_error_seen) begin
            error_count++;
            `uvm_error("GBG_DMA_CHECK",
                $sformatf(
                    "DMA bytes=%0d error=%0b",
                    env.axi_ag.drv.write_byte_count,
                    env.axi_ag.drv.write_error_seen))
        end

        if (env.scb.rx_frames_checked != 2 ||
            !env.scb.rx_all_expected_checked()) begin

            error_count++;

            `uvm_error("GBG_SCOREBOARD",
                $sformatf(
                    "Checked=%0d expected=%0d errors=%0d",
                    env.scb.rx_frames_checked,
                    env.scb.rx_frames_expected,
                    env.scb.errors))
        end

        `uvm_info("GBG_STATUS",
            $sformatf(
                "FCS=%0d BAD_FRAME=%0d RX_BYTES=%0d TLAST=%0d DMA_BYTES=%0d DESC=%0d SCB=%0d/%0d",
                bad_fcs_count,
                bad_frame_count,
                env.rx_axis_mon.transfer_count,
                env.rx_axis_mon.tlast_count,
                env.axi_ag.drv.write_byte_count,
                rx_desc_count,
                env.scb.rx_frames_checked,
                env.scb.rx_frames_expected),
            UVM_LOW)

        if (error_count == 0)
            `uvm_info("GBG_PASS",
                "Good-Bad-Good recovery passed", UVM_LOW)
        else
            `uvm_error("GBG_FAIL",
                $sformatf("Good-Bad-Good failures=%0d", error_count))

        phase.drop_objection(this);

    endtask

endclass
