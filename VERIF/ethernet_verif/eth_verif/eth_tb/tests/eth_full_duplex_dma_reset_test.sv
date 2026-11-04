class eth_full_duplex_dma_reset_test extends eth_base_test;

    `uvm_component_utils(eth_full_duplex_dma_reset_test)

    virtual eth_rgmii_if rgmii_vif;

    function new(
        string name = "eth_full_duplex_dma_reset_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction


    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_rgmii_if)::get(
                this, "", "vif", rgmii_vif))
            `uvm_fatal("FD_DMA_RESET_VIF",
                       "Unable to obtain eth_rgmii_if")
    endfunction


    function automatic logic [31:0] calculate_ethernet_fcs(
        input byte unsigned frame_bytes[$]
    );

        logic [31:0] crc;
        logic feedback;

        crc = 32'hFFFF_FFFF;

        foreach (frame_bytes[byte_index]) begin
            for (int unsigned bit_index = 0;
                 bit_index < 8;
                 bit_index++) begin

                feedback =
                    crc[0] ^ frame_bytes[byte_index][bit_index];

                crc = crc >> 1;

                if (feedback)
                    crc = crc ^ 32'hEDB8_8320;
            end
        end

        return ~crc;

    endfunction


    task automatic drive_rgmii_byte(
        input byte unsigned data_byte
    );

        @(negedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= data_byte[3:0];
        rgmii_vif.bfm_rx_ctl <= 1'b1;

        @(posedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= data_byte[7:4];
        rgmii_vif.bfm_rx_ctl <= 1'b1;

    endtask


    task automatic drive_rx_frame(
        input byte unsigned payload_base
    );

        byte unsigned payload[$];
        logic [31:0] fcs;

        payload.delete();

        for (int unsigned byte_index = 0;
             byte_index < 64;
             byte_index++)
            payload.push_back(
                payload_base + byte_index[7:0]);

        fcs = calculate_ethernet_fcs(payload);

        @(negedge rgmii_vif.bfm_rx_clk);

        rgmii_vif.bfm_rxd    <= 4'h5;
        rgmii_vif.bfm_rx_ctl <= 1'b1;

        @(posedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= 4'h5;
        rgmii_vif.bfm_rx_ctl <= 1'b1;

        for (int unsigned preamble_index = 1;
             preamble_index < 7;
             preamble_index++)
            drive_rgmii_byte(8'h55);

        drive_rgmii_byte(8'hD5);

        foreach (payload[byte_index])
            drive_rgmii_byte(payload[byte_index]);

        drive_rgmii_byte(fcs[7:0]);
        drive_rgmii_byte(fcs[15:8]);
        drive_rgmii_byte(fcs[23:16]);
        drive_rgmii_byte(fcs[31:24]);

        @(negedge rgmii_vif.bfm_rx_clk);

        rgmii_vif.bfm_rx_ctl <= 1'b0;
        rgmii_vif.bfm_rxd    <= 4'h0;

        `uvm_info("FD_DMA_RESET_RGMII",
            $sformatf(
                "Injected RX frame payload=%02h..%02h FCS=%08h",
                payload_base,
                payload_base + 8'd63,
                fcs),
            UVM_LOW)

    endtask


    task automatic clear_observation();

        env.axi_ag.drv.read_burst_count = 0;
        env.axi_ag.drv.read_beat_count  = 0;
        env.axi_ag.drv.read_byte_count  = 0;
        env.axi_ag.drv.first_read_addr  = '0;
        env.axi_ag.drv.first_read_seen  = 1'b0;
        env.axi_ag.drv.read_error_seen  = 1'b0;

        env.axi_ag.drv.write_burst_count = 0;
        env.axi_ag.drv.write_beat_count  = 0;
        env.axi_ag.drv.write_byte_count  = 0;
        env.axi_ag.drv.first_write_addr  = '0;
        env.axi_ag.drv.first_write_seen  = 1'b0;
        env.axi_ag.drv.write_error_seen  = 1'b0;

        env.tx_axis_mon.observed_bytes.delete();
        env.tx_axis_mon.transfer_count = 0;
        env.tx_axis_mon.tlast_count    = 0;
        env.tx_axis_mon.tlast_index    = 0;
        env.tx_axis_mon.tuser_seen     = 1'b0;

        env.rx_axis_mon.observed_bytes.delete();
        env.rx_axis_mon.transfer_count = 0;
        env.rx_axis_mon.tlast_count    = 0;
        env.rx_axis_mon.tlast_index    = 0;
        env.rx_axis_mon.tuser_seen     = 1'b0;

        env.rgmii_ag.mon.tx_bytes.delete();
        env.rgmii_ag.mon.tx_byte_count   = 0;
        env.rgmii_ag.mon.tx_frame_count  = 0;
        env.rgmii_ag.mon.tx_frame_active = 1'b0;
        env.rgmii_ag.mon.tx_error_seen   = 1'b0;

    endtask


    task run_phase(uvm_phase phase);

        eth_reset_seq reset_seq;
        eth_full_duplex_frame_seq dma_seq;

        int unsigned timeout_cycles;
        int unsigned recovery_errors;
        int unsigned phase1_read_beats;
        int unsigned phase1_write_beats;

        bit reset_injected;

        phase.raise_objection(this);

        `uvm_info("FD_DMA_RESET",
            "Starting simultaneous TX-read/RX-write reset bug-hunting test",
            UVM_LOW)

        //--------------------------------------------------------------
        // Initial reset
        //--------------------------------------------------------------
        reset_seq =
            eth_reset_seq::type_id::create("initial_reset");

        reset_seq.start(env.reset_ag.sqr);

        repeat (10)
            @(posedge env.axi_ag.drv.vif.aclk);


        //--------------------------------------------------------------
        // External RX stimulus, not TX->RX loopback.
        //--------------------------------------------------------------
        rgmii_vif.loopback_enable = 1'b0;
        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;


        //--------------------------------------------------------------
        // PHASE 1 memory
        //
        // TX: 0x1000 -> 00..3F
        // RX: 0x2000 <- 80..BF
        //--------------------------------------------------------------
        for (int unsigned i = 0; i < 64; i++) begin

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_1000 + i]
                = i[7:0];

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_2000 + i]
                = 8'hA5;

        end


        //--------------------------------------------------------------
        // Critical TC012 setup:
        //
        // Slow TX R-channel enough that its read burst remains
        // outstanding until RX DMA starts its AXI write.
        //
        // Keep RX write side unstalled.
        //--------------------------------------------------------------
        env.axi_ag.drv.backpressure_enable  = 1'b1;

        env.axi_ag.drv.arready_delay_cycles = 0;
        env.axi_ag.drv.rvalid_delay_cycles  = 12;

        env.axi_ag.drv.awready_delay_cycles = 0;
        env.axi_ag.drv.wready_delay_cycles  = 0;
        env.axi_ag.drv.bvalid_delay_cycles  = 0;


        clear_observation();

        dma_seq =
            eth_full_duplex_frame_seq::type_id::create(
                "phase1_dma_seq");

        dma_seq.tx_address   = 32'h0000_1000;
        dma_seq.rx_address   = 32'h0000_2000;
        dma_seq.frame_length = 32'd64;

        reset_injected = 1'b0;

        `uvm_info("FD_DMA_RESET",
            "PHASE1: TX=0x1000 RX=0x2000; TX read throttled",
            UVM_LOW)


        fork : phase1_threads

            //----------------------------------------------------------
            // Program both descriptors and commit DMA_CTRL=3.
            //----------------------------------------------------------
            begin : phase1_program
                dma_seq.start(env.axil_ag.sqr);
            end


            //----------------------------------------------------------
            // Independent incoming Ethernet frame.
            //----------------------------------------------------------
            begin : phase1_rx_frame

                repeat (40)
                    @(posedge env.axi_ag.drv.vif.aclk);

                drive_rx_frame(8'h80);

            end


            //----------------------------------------------------------
            // Wait until BOTH DMA directions have accepted data beats.
            //----------------------------------------------------------
            begin : phase1_reset_controller

                timeout_cycles = 0;

                while (((env.axi_ag.drv.read_beat_count  < 1) ||
                        (env.axi_ag.drv.write_beat_count < 1)) &&
                       (timeout_cycles < 15000)) begin

                    @(posedge env.axi_ag.drv.vif.aclk);
                    timeout_cycles++;

                end


                if ((env.axi_ag.drv.read_beat_count < 1) ||
                    (env.axi_ag.drv.write_beat_count < 1)) begin

                    `uvm_error("FD_DMA_RESET",
                        $sformatf(
                            "PHASE1: failed to reach simultaneous partial DMA state READ_BEATS=%0d WRITE_BEATS=%0d",
                            env.axi_ag.drv.read_beat_count,
                            env.axi_ag.drv.write_beat_count))

                end
                else if ((env.axi_ag.drv.read_beat_count >= 8) ||
                         (env.axi_ag.drv.write_beat_count >= 8)) begin

                    `uvm_error("FD_DMA_RESET",
                        $sformatf(
                            "PHASE1: one burst completed before reset trigger READ_BEATS=%0d WRITE_BEATS=%0d",
                            env.axi_ag.drv.read_beat_count,
                            env.axi_ag.drv.write_beat_count))

                end
                else begin

                    phase1_read_beats =
                        env.axi_ag.drv.read_beat_count;

                    phase1_write_beats =
                        env.axi_ag.drv.write_beat_count;

                    `uvm_info("FD_DMA_RESET_INJECT",
                        $sformatf(
                            "PHASE1 simultaneous partial DMA state reached READ_BEATS=%0d READ_BYTES=%0d WRITE_BEATS=%0d WRITE_BYTES=%0d time=%0t",
                            env.axi_ag.drv.read_beat_count,
                            env.axi_ag.drv.read_byte_count,
                            env.axi_ag.drv.write_beat_count,
                            env.axi_ag.drv.write_byte_count,
                            $time),
                        UVM_LOW)

                    reset_seq =
                        eth_reset_seq::type_id::create(
                            "simultaneous_dma_reset");

                    reset_injected = 1'b1;

                    `uvm_info("FD_DMA_RESET_INJECT",
                        "Asserting reset with TX read and RX write both incomplete",
                        UVM_LOW)

                    reset_seq.start(env.reset_ag.sqr);

                    `uvm_info("FD_DMA_RESET_INJECT",
                        $sformatf(
                            "PHASE1 reset completed at %0t",
                            $time),
                        UVM_LOW)

                end

            end

        join_none


        //--------------------------------------------------------------
        // Wait specifically for reset controller outcome.
        //--------------------------------------------------------------
        timeout_cycles = 0;

        while ((!reset_injected) &&
               (timeout_cycles < 16000)) begin

            @(posedge env.axi_ag.drv.vif.aclk);
            timeout_cycles++;

        end


        if (!reset_injected) begin

            `uvm_error("FD_DMA_RESET",
                "PHASE1: reset was not injected")

            disable phase1_threads;

        end
        else begin

            wait (env.reset_ag.drv.vif.rst_n === 1'b0);
            wait (env.reset_ag.drv.vif.rst_n === 1'b1);

            disable phase1_threads;

        end


        rgmii_vif.bfm_rx_ctl = 1'b0;
        rgmii_vif.bfm_rxd    = 4'h0;


        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);


        `uvm_info("FD_DMA_RESET",
            $sformatf(
                "PHASE1 RESULT READ_BEATS=%0d WRITE_BEATS=%0d",
                phase1_read_beats,
                phase1_write_beats),
            UVM_LOW)


        //--------------------------------------------------------------
        // Phase 1 is only valid if BOTH bursts were partial.
        //--------------------------------------------------------------
        if ((phase1_read_beats == 0) ||
            (phase1_read_beats >= 8))
            `uvm_error("FD_DMA_RESET",
                $sformatf(
                    "TX read was not interrupted mid-burst: beats=%0d",
                    phase1_read_beats))

        if ((phase1_write_beats == 0) ||
            (phase1_write_beats >= 8))
            `uvm_error("FD_DMA_RESET",
                $sformatf(
                    "RX write was not interrupted mid-burst: beats=%0d",
                    phase1_write_beats))


        //--------------------------------------------------------------
        // PHASE 2
        //
        // Completely fresh addresses and payloads.
        //--------------------------------------------------------------
        clear_observation();

        //--------------------------------------------------------------
        // Recovery should not depend on artificial backpressure.
        //--------------------------------------------------------------
        env.axi_ag.drv.backpressure_enable  = 1'b0;

        env.axi_ag.drv.arready_delay_cycles = 0;
        env.axi_ag.drv.rvalid_delay_cycles  = 0;
        env.axi_ag.drv.awready_delay_cycles = 0;
        env.axi_ag.drv.wready_delay_cycles  = 0;
        env.axi_ag.drv.bvalid_delay_cycles  = 0;


        for (int unsigned i = 0; i < 64; i++) begin

            //----------------------------------------------------------
            // Fresh TX payload = 40..7F
            //----------------------------------------------------------
            env.axi_ag.drv.mem[
                64'h0000_0000_0000_5000 + i]
                = 8'h40 + i[7:0];

            //----------------------------------------------------------
            // Fresh RX destination sentinel.
            //----------------------------------------------------------
            env.axi_ag.drv.mem[
                64'h0000_0000_0000_6000 + i]
                = 8'hA5;

        end


        dma_seq =
            eth_full_duplex_frame_seq::type_id::create(
                "phase2_dma_seq");

        dma_seq.tx_address   = 32'h0000_5000;
        dma_seq.rx_address   = 32'h0000_6000;
        dma_seq.frame_length = 32'd64;

        `uvm_info("FD_DMA_RESET",
            "PHASE2: fresh TX=0x5000 RX=0x6000 RX-payload=20..5F",
            UVM_LOW)


        fork

            begin
                dma_seq.start(env.axil_ag.sqr);
            end

            begin

                repeat (40)
                    @(posedge env.axi_ag.drv.vif.aclk);

                drive_rx_frame(8'h20);

            end

        join


        //--------------------------------------------------------------
        // Wait for BOTH fresh DMA operations.
        //--------------------------------------------------------------
        timeout_cycles = 0;

        while (((env.axi_ag.drv.read_byte_count  < 64) ||
                (env.axi_ag.drv.write_byte_count < 64)) &&
               (timeout_cycles < 10000)) begin

            @(posedge env.axi_ag.drv.vif.aclk);
            timeout_cycles++;

        end


        repeat (30)
            @(posedge env.axi_ag.drv.vif.aclk);


        recovery_errors = 0;


        //--------------------------------------------------------------
        // Fresh TX descriptor/address
        //--------------------------------------------------------------
        if (!env.axi_ag.drv.first_read_seen) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RECOVERY",
                "No recovery TX AXI read observed")

        end
        else if (env.axi_ag.drv.first_read_addr !==
                 64'h0000_0000_0000_5000) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RECOVERY",
                $sformatf(
                    "Recovery TX must start at 0x5000; got %016h",
                    env.axi_ag.drv.first_read_addr))

        end


        //--------------------------------------------------------------
        // Fresh RX descriptor/address
        //--------------------------------------------------------------
        if (!env.axi_ag.drv.first_write_seen) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RECOVERY",
                "No recovery RX AXI write observed")

        end
        else if (env.axi_ag.drv.first_write_addr !==
                 64'h0000_0000_0000_6000) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RECOVERY",
                $sformatf(
                    "Recovery RX must start at 0x6000; got %016h",
                    env.axi_ag.drv.first_write_addr))

        end


        //--------------------------------------------------------------
        // Exact DMA transaction counts.
        //--------------------------------------------------------------
        if ((env.axi_ag.drv.read_burst_count != 1) ||
            (env.axi_ag.drv.read_beat_count  != 8) ||
            (env.axi_ag.drv.read_byte_count  != 64)) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RECOVERY",
                $sformatf(
                    "TX recovery counts bursts=%0d beats=%0d bytes=%0d",
                    env.axi_ag.drv.read_burst_count,
                    env.axi_ag.drv.read_beat_count,
                    env.axi_ag.drv.read_byte_count))

        end


        if ((env.axi_ag.drv.write_burst_count != 1) ||
            (env.axi_ag.drv.write_beat_count  != 8) ||
            (env.axi_ag.drv.write_byte_count  != 64)) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RECOVERY",
                $sformatf(
                    "RX recovery counts bursts=%0d beats=%0d bytes=%0d",
                    env.axi_ag.drv.write_burst_count,
                    env.axi_ag.drv.write_beat_count,
                    env.axi_ag.drv.write_byte_count))

        end


        //--------------------------------------------------------------
        // TX AXIS payload = 40..7F
        //--------------------------------------------------------------
        if (env.tx_axis_mon.observed_bytes.size() != 64) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_TX_AXIS",
                $sformatf(
                    "Expected 64 TX AXIS bytes, got %0d",
                    env.tx_axis_mon.observed_bytes.size()))

        end
        else begin

            for (int unsigned i = 0; i < 64; i++) begin

                if (env.tx_axis_mon.observed_bytes[i] !==
                    (8'h40 + i[7:0])) begin

                    recovery_errors++;

                    `uvm_error("FD_DMA_RESET_TX_AXIS",
                        $sformatf(
                            "BYTE=%0d EXP=%02h GOT=%02h",
                            i,
                            8'h40 + i[7:0],
                            env.tx_axis_mon.observed_bytes[i]))

                end

            end

        end


        if ((env.tx_axis_mon.tlast_count != 1) ||
            (env.tx_axis_mon.tlast_index != 63) ||
            env.tx_axis_mon.tuser_seen) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_TX_AXIS",
                $sformatf(
                    "TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    env.tx_axis_mon.tlast_count,
                    env.tx_axis_mon.tlast_index,
                    env.tx_axis_mon.tuser_seen))

        end


        //--------------------------------------------------------------
        // RX AXIS payload = 20..5F
        //--------------------------------------------------------------
        if (env.rx_axis_mon.observed_bytes.size() != 64) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RX_AXIS",
                $sformatf(
                    "Expected 64 RX AXIS bytes, got %0d",
                    env.rx_axis_mon.observed_bytes.size()))

        end
        else begin

            for (int unsigned i = 0; i < 64; i++) begin

                if (env.rx_axis_mon.observed_bytes[i] !==
                    (8'h20 + i[7:0])) begin

                    recovery_errors++;

                    `uvm_error("FD_DMA_RESET_RX_AXIS",
                        $sformatf(
                            "BYTE=%0d EXP=%02h GOT=%02h",
                            i,
                            8'h20 + i[7:0],
                            env.rx_axis_mon.observed_bytes[i]))

                end

            end

        end


        if ((env.rx_axis_mon.tlast_count != 1) ||
            (env.rx_axis_mon.tlast_index != 63) ||
            env.rx_axis_mon.tuser_seen) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RX_AXIS",
                $sformatf(
                    "TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    env.rx_axis_mon.tlast_count,
                    env.rx_axis_mon.tlast_index,
                    env.rx_axis_mon.tuser_seen))

        end


        //--------------------------------------------------------------
        // Fresh RX destination memory must contain 20..5F.
        //--------------------------------------------------------------
        for (int unsigned i = 0; i < 64; i++) begin

            longint unsigned address;

            address =
                64'h0000_0000_0000_6000 + i;

            if (!env.axi_ag.drv.mem.exists(address)) begin

                recovery_errors++;

                `uvm_error("FD_DMA_RESET_MEMORY",
                    $sformatf(
                        "Recovery address %016h does not exist",
                        address))

            end
            else if (env.axi_ag.drv.mem[address] !==
                     (8'h20 + i[7:0])) begin

                recovery_errors++;

                `uvm_error("FD_DMA_RESET_MEMORY",
                    $sformatf(
                        "ADDR=%016h EXP=%02h GOT=%02h",
                        address,
                        8'h20 + i[7:0],
                        env.axi_ag.drv.mem[address]))

            end

        end


        //--------------------------------------------------------------
        // RGMII TX must produce one complete Ethernet frame.
        //--------------------------------------------------------------
        if ((env.rgmii_ag.mon.tx_frame_count != 1) ||
            (env.rgmii_ag.mon.tx_bytes.size() != 76) ||
            env.rgmii_ag.mon.tx_error_seen) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_RGMII",
                $sformatf(
                    "Recovery RGMII TX frames=%0d bytes=%0d error=%0b",
                    env.rgmii_ag.mon.tx_frame_count,
                    env.rgmii_ag.mon.tx_bytes.size(),
                    env.rgmii_ag.mon.tx_error_seen))

        end


        //--------------------------------------------------------------
        // AXI protocol/model checks.
        //--------------------------------------------------------------
        if (env.axi_ag.drv.read_error_seen ||
            env.axi_ag.drv.write_error_seen) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_AXI",
                $sformatf(
                    "READ_ERROR=%0b WRITE_ERROR=%0b",
                    env.axi_ag.drv.read_error_seen,
                    env.axi_ag.drv.write_error_seen))

        end


        if ((env.axi_ag.mon.ar_stability_errors != 0) ||
            (env.axi_ag.mon.aw_stability_errors != 0) ||
            (env.axi_ag.mon.w_stability_errors  != 0)) begin

            recovery_errors++;

            `uvm_error("FD_DMA_RESET_STABILITY",
                $sformatf(
                    "AR_ERRORS=%0d AW_ERRORS=%0d W_ERRORS=%0d",
                    env.axi_ag.mon.ar_stability_errors,
                    env.axi_ag.mon.aw_stability_errors,
                    env.axi_ag.mon.w_stability_errors))

        end


        `uvm_info("FD_DMA_RESET_RESULT",
            $sformatf(
                "Recovery TX bursts=%0d beats=%0d bytes=%0d addr=%016h | RX bursts=%0d beats=%0d bytes=%0d addr=%016h | TX_AXIS=%0d RX_AXIS=%0d RGMII_TX_FRAMES=%0d errors=%0d",
                env.axi_ag.drv.read_burst_count,
                env.axi_ag.drv.read_beat_count,
                env.axi_ag.drv.read_byte_count,
                env.axi_ag.drv.first_read_addr,
                env.axi_ag.drv.write_burst_count,
                env.axi_ag.drv.write_beat_count,
                env.axi_ag.drv.write_byte_count,
                env.axi_ag.drv.first_write_addr,
                env.tx_axis_mon.observed_bytes.size(),
                env.rx_axis_mon.observed_bytes.size(),
                env.rgmii_ag.mon.tx_frame_count,
                recovery_errors),
            UVM_NONE)


        if (recovery_errors == 0)
            `uvm_info("FD_DMA_RESET_RESULT",
                "PASS: simultaneous active TX-read/RX-write reset recovered cleanly",
                UVM_NONE)
        else
            `uvm_error("FD_DMA_RESET_RESULT",
                $sformatf(
                    "FAIL: recovery produced %0d errors",
                    recovery_errors))


        //--------------------------------------------------------------
        // Restore BFM defaults.
        //--------------------------------------------------------------
        env.axi_ag.drv.backpressure_enable = 1'b0;

        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;
        rgmii_vif.loopback_enable = 1'b1;

        phase.drop_objection(this);

    endtask

endclass
