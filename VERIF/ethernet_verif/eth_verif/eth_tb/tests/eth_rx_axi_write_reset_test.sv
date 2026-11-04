class eth_rx_axi_write_reset_test extends eth_base_test;
    `uvm_component_utils(eth_rx_axi_write_reset_test)

    virtual eth_rgmii_if rgmii_vif;

    function new(string name = "eth_rx_axi_write_reset_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_rgmii_if)::get(
                this, "", "vif", rgmii_vif))
            `uvm_fatal("RX_AXI_RESET_VIF",
                       "Unable to obtain eth_rgmii_if")
    endfunction


    function automatic logic [31:0] calculate_ethernet_fcs(
        input byte unsigned frame_bytes[$]);

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
        input byte unsigned data_byte);

        @(negedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= data_byte[3:0];
        rgmii_vif.bfm_rx_ctl <= 1'b1;

        @(posedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= data_byte[7:4];
        rgmii_vif.bfm_rx_ctl <= 1'b1;
    endtask


    task automatic drive_rx_frame(
        input byte unsigned payload_base);

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

        `uvm_info("RX_AXI_RESET_RGMII",
            $sformatf(
                "Injected RGMII RX frame payload=%02h..%02h FCS=%08h",
                payload_base,
                payload_base + 8'd63,
                fcs),
            UVM_LOW)
    endtask


    task automatic clear_observation();

        env.axi_ag.drv.write_burst_count = 0;
        env.axi_ag.drv.write_beat_count  = 0;
        env.axi_ag.drv.write_byte_count  = 0;
        env.axi_ag.drv.first_write_addr  = '0;
        env.axi_ag.drv.first_write_seen  = 1'b0;
        env.axi_ag.drv.write_error_seen  = 1'b0;

        env.rx_axis_mon.observed_bytes.delete();
        env.rx_axis_mon.transfer_count = 0;
        env.rx_axis_mon.tlast_count    = 0;
        env.rx_axis_mon.tlast_index    = 0;
        env.rx_axis_mon.tuser_seen     = 1'b0;
    endtask


    task run_phase(uvm_phase phase);

        eth_reset_seq reset_sequence;
        eth_full_duplex_frame_seq dma_sequence;

        int unsigned timeout_cycles;
        int unsigned memory_errors;
        int unsigned phase1_beats;
        int unsigned phase1_bytes;

        phase.raise_objection(this);

        `uvm_info("RX_AXI_RESET",
            "Starting RX DMA AXI-write reset bug-hunting test",
            UVM_LOW)

        //--------------------------------------------------------------
        // Initial setup
        //--------------------------------------------------------------
        rgmii_vif.loopback_enable = 1'b0;
        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;

        reset_sequence =
            eth_reset_seq::type_id::create(
                "initial_reset_sequence");

        reset_sequence.start(env.reset_ag.sqr);

        clear_observation();

        //--------------------------------------------------------------
        // PHASE 1
        //
        // Use full-duplex programming sequence only to program both
        // descriptors. TX source memory is valid, but this testcase
        // specifically triggers reset from the RX DMA W-channel.
        //--------------------------------------------------------------
        for (int unsigned byte_index = 0;
             byte_index < 64;
             byte_index++) begin

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_1000 + byte_index]
                = byte_index[7:0];

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_2000 + byte_index]
                = 8'hA5;
        end

        dma_sequence =
            eth_full_duplex_frame_seq::type_id::create(
                "phase1_dma_sequence");

        dma_sequence.tx_address   = 32'h0000_1000;
        dma_sequence.rx_address   = 32'h0000_2000;
        dma_sequence.frame_length = 32'd64;

        `uvm_info("RX_AXI_RESET",
            "PHASE1: RX destination=0x2000 payload=80..BF",
            UVM_LOW)

        fork : phase1_threads

            begin : phase1_program
                dma_sequence.start(env.axil_ag.sqr);
            end

            begin : phase1_rgmii
                // Allow descriptor programming to begin before injection.
                repeat (40)
                    @(posedge env.axi_ag.drv.vif.aclk);

                drive_rx_frame(8'h80);
            end

            begin : phase1_reset_controller

                timeout_cycles = 0;

                //------------------------------------------------------
                // Wait for an actual RX DMA write burst.
                //------------------------------------------------------
                while ((!env.axi_ag.drv.first_write_seen) &&
                       (timeout_cycles < 10000)) begin

                    @(posedge env.axi_ag.drv.vif.aclk);
                    timeout_cycles++;
                end

                if (!env.axi_ag.drv.first_write_seen) begin

                    `uvm_error("RX_AXI_RESET",
                        "PHASE1: RX DMA never generated AW transaction")

                end
                else begin

                    `uvm_info("RX_AXI_RESET",
                        $sformatf(
                            "PHASE1: RX DMA AW observed address=%016h",
                            env.axi_ag.drv.first_write_addr),
                        UVM_LOW)

                    if (env.axi_ag.drv.first_write_addr !==
                        64'h0000_0000_0000_2000)
                        `uvm_error("RX_AXI_RESET",
                            $sformatf(
                                "PHASE1: expected AWADDR=0x2000 got=%016h",
                                env.axi_ag.drv.first_write_addr))

                    //--------------------------------------------------
                    // Deliberately interrupt the write burst.
                    //
                    // Use >=3 rather than equality because the test and
                    // driver observe the same clocked event region.
                    //--------------------------------------------------
                    timeout_cycles = 0;

                    while ((env.axi_ag.drv.write_beat_count < 3) &&
                           (timeout_cycles < 10000)) begin

                        @(posedge env.axi_ag.drv.vif.aclk);
                        timeout_cycles++;
                    end

                    if (env.axi_ag.drv.write_beat_count < 3) begin

                        `uvm_error("RX_AXI_RESET",
                            "PHASE1: did not reach active AXI write-data transfer")

                    end
                    else begin

                        phase1_beats =
                            env.axi_ag.drv.write_beat_count;

                        phase1_bytes =
                            env.axi_ag.drv.write_byte_count;

                        `uvm_info("RX_AXI_RESET_INJECT",
                            $sformatf(
                                "PHASE1: asserting reset during RX DMA AXI write burst beats=%0d bytes=%0d time=%0t",
                                phase1_beats,
                                phase1_bytes,
                                $time),
                            UVM_LOW)

                        reset_sequence =
                            eth_reset_seq::type_id::create(
                                "mid_write_reset_sequence");

                        reset_sequence.start(env.reset_ag.sqr);

                        `uvm_info("RX_AXI_RESET_INJECT",
                            $sformatf(
                                "PHASE1: reset completed at %0t",
                                $time),
                            UVM_LOW)
                    end
                end
            end

        join_any

        //--------------------------------------------------------------
        // Do not allow a short programming thread to terminate the test.
        // Wait until reset has actually happened and completed.
        //--------------------------------------------------------------
        wait (env.reset_ag.drv.vif.rst_n === 1'b0);
        wait (env.reset_ag.drv.vif.rst_n === 1'b1);

        disable phase1_threads;

        rgmii_vif.bfm_rx_ctl = 1'b0;
        rgmii_vif.bfm_rxd    = 4'h0;

        `uvm_info("RX_AXI_RESET",
            $sformatf(
                "PHASE1 RESULT: interrupted write burst bursts=%0d beats=%0d bytes=%0d",
                env.axi_ag.drv.write_burst_count,
                env.axi_ag.drv.write_beat_count,
                env.axi_ag.drv.write_byte_count),
            UVM_LOW)

        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);

        //--------------------------------------------------------------
        // PHASE 2 - fresh recovery operation
        //--------------------------------------------------------------
        clear_observation();

        for (int unsigned byte_index = 0;
             byte_index < 64;
             byte_index++) begin

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_3000 + byte_index]
                = (8'h40 + byte_index[7:0]);

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_4000 + byte_index]
                = 8'hA5;
        end

        dma_sequence =
            eth_full_duplex_frame_seq::type_id::create(
                "phase2_dma_sequence");

        dma_sequence.tx_address   = 32'h0000_3000;
        dma_sequence.rx_address   = 32'h0000_4000;
        dma_sequence.frame_length = 32'd64;

        `uvm_info("RX_AXI_RESET",
            "PHASE2: fresh RX destination=0x4000 payload=20..5F",
            UVM_LOW)

        fork

            begin
                dma_sequence.start(env.axil_ag.sqr);
            end

            begin
                repeat (40)
                    @(posedge env.axi_ag.drv.vif.aclk);

                drive_rx_frame(8'h20);
            end

        join

        //--------------------------------------------------------------
        // Wait for complete recovery write.
        //--------------------------------------------------------------
        timeout_cycles = 0;

        while ((env.axi_ag.drv.write_byte_count < 64) &&
               (timeout_cycles < 10000)) begin

            @(posedge env.axi_ag.drv.vif.aclk);
            timeout_cycles++;
        end

        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);

        //--------------------------------------------------------------
        // Recovery checks
        //--------------------------------------------------------------
        if (env.axi_ag.drv.write_byte_count != 64)
            `uvm_error("RX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Expected 64 recovery write bytes, observed %0d",
                    env.axi_ag.drv.write_byte_count))

        if (env.axi_ag.drv.write_beat_count != 8)
            `uvm_error("RX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Expected 8 recovery write beats, observed %0d",
                    env.axi_ag.drv.write_beat_count))

        if (env.axi_ag.drv.write_burst_count != 1)
            `uvm_error("RX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Expected 1 recovery write burst, observed %0d",
                    env.axi_ag.drv.write_burst_count))

        if (!env.axi_ag.drv.first_write_seen)
            `uvm_error("RX_AXI_RESET_RECOVERY",
                "No recovery AXI write address observed")
        else if (env.axi_ag.drv.first_write_addr !==
                 64'h0000_0000_0000_4000)
            `uvm_error("RX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery must start at fresh address 0x4000; observed %016h",
                    env.axi_ag.drv.first_write_addr))
        else
            `uvm_info("RX_AXI_RESET_RECOVERY",
                "PASS recovery AXI write starts at fresh address 0x4000",
                UVM_LOW)

        //--------------------------------------------------------------
        // Check complete post-reset RX AXI-Stream packet.
        //--------------------------------------------------------------
        if (env.rx_axis_mon.observed_bytes.size() != 64) begin

            `uvm_error("RX_AXI_RESET_AXIS",
                $sformatf(
                    "Expected 64 recovery RX AXIS bytes, observed %0d",
                    env.rx_axis_mon.observed_bytes.size()))

        end
        else begin

            for (int unsigned byte_index = 0;
                 byte_index < 64;
                 byte_index++) begin

                if (env.rx_axis_mon.observed_bytes[byte_index] !==
                    (8'h20 + byte_index[7:0]))

                    `uvm_error("RX_AXI_RESET_AXIS",
                        $sformatf(
                            "BYTE=%0d EXP=%02h GOT=%02h",
                            byte_index,
                            8'h20 + byte_index[7:0],
                            env.rx_axis_mon.observed_bytes[
                                byte_index]))
            end
        end

        if ((env.rx_axis_mon.tlast_count != 1) ||
            (env.rx_axis_mon.tlast_index != 63) ||
            env.rx_axis_mon.tuser_seen)

            `uvm_error("RX_AXI_RESET_AXIS",
                $sformatf(
                    "TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    env.rx_axis_mon.tlast_count,
                    env.rx_axis_mon.tlast_index,
                    env.rx_axis_mon.tuser_seen))

        //--------------------------------------------------------------
        // Check destination memory.
        //--------------------------------------------------------------
        memory_errors = 0;

        for (int unsigned byte_index = 0;
             byte_index < 64;
             byte_index++) begin

            if (!env.axi_ag.drv.mem.exists(
                    64'h0000_0000_0000_4000 + byte_index)) begin

                memory_errors++;

                `uvm_error("RX_AXI_RESET_MEMORY",
                    $sformatf(
                        "Recovery destination byte %0d does not exist",
                        byte_index))

            end
            else if (env.axi_ag.drv.mem[
                         64'h0000_0000_0000_4000 + byte_index]
                     !== (8'h20 + byte_index[7:0])) begin

                memory_errors++;

                `uvm_error("RX_AXI_RESET_MEMORY",
                    $sformatf(
                        "ADDR=%016h EXP=%02h GOT=%02h",
                        64'h0000_0000_0000_4000 + byte_index,
                        8'h20 + byte_index[7:0],
                        env.axi_ag.drv.mem[
                            64'h0000_0000_0000_4000 +
                            byte_index]))
            end
        end

        if (memory_errors == 0)
            `uvm_info("RX_AXI_RESET_MEMORY",
                "PASS recovery memory 0x4000-0x403F contains payload 20-5F",
                UVM_LOW)

        if (env.axi_ag.drv.write_error_seen)
            `uvm_error("RX_AXI_RESET_PROTOCOL",
                "AXI memory model detected write protocol error")

        if ((env.axi_ag.mon.aw_stability_errors != 0) ||
            (env.axi_ag.mon.w_stability_errors != 0))
            `uvm_error("RX_AXI_RESET_STABILITY",
                $sformatf(
                    "AW_ERRORS=%0d W_ERRORS=%0d",
                    env.axi_ag.mon.aw_stability_errors,
                    env.axi_ag.mon.w_stability_errors))

        `uvm_info("RX_AXI_RESET_RESULT",
            $sformatf(
                "Recovery summary bursts=%0d beats=%0d bytes=%0d first_addr=%016h axis_bytes=%0d memory_errors=%0d",
                env.axi_ag.drv.write_burst_count,
                env.axi_ag.drv.write_beat_count,
                env.axi_ag.drv.write_byte_count,
                env.axi_ag.drv.first_write_addr,
                env.rx_axis_mon.observed_bytes.size(),
                memory_errors),
            UVM_NONE)

        `uvm_info("RX_AXI_RESET_RESULT",
            "RX DMA active-write reset/recovery checks completed; inspect UVM error count for final status",
            UVM_NONE)

        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;
        rgmii_vif.loopback_enable = 1'b1;

        phase.drop_objection(this);

    endtask

endclass
