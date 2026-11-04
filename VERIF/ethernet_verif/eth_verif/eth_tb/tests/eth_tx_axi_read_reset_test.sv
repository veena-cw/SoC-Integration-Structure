class eth_tx_axi_read_reset_seq extends uvm_sequence #(eth_axil_item);

    `uvm_object_utils(eth_tx_axi_read_reset_seq)

    bit [31:0] tx_address = 32'h0000_1000;
    bit [31:0] tx_length  = 32'd64;

    function new(string name = "eth_tx_axi_read_reset_seq");
        super.new(name);
    endfunction

    task automatic axil_write(
        bit [31:0] register_address,
        bit [31:0] write_data
    );
        eth_axil_item tr;

        tr = eth_axil_item::type_id::create(
            $sformatf("axi_read_reset_wr_%08h", register_address));

        start_item(tr);

        tr.write = 1'b1;
        tr.addr  = register_address;
        tr.data  = write_data;
        tr.strb  = 4'hF;

        finish_item(tr);

        if (tr.resp != 2'b00)
            `uvm_error("TX_AXI_RESET_CFG",
                $sformatf(
                    "AXI-Lite write failed ADDR=%08h DATA=%08h RESP=%0h",
                    register_address, write_data, tr.resp))
    endtask


    task body();

        axil_write(32'h0000_0010, tx_address);
        axil_write(32'h0000_0014, 32'h0000_0000);
        axil_write(32'h0000_0018, tx_length);

        // Commit TX DMA configuration.
        axil_write(32'h0000_0000, 32'h0000_0001);

    endtask

endclass


class eth_tx_axi_read_reset_test extends eth_base_test;

    `uvm_component_utils(eth_tx_axi_read_reset_test)

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction


    task automatic clear_tx_observation();

        env.axi_ag.drv.read_burst_count = 0;
        env.axi_ag.drv.read_beat_count  = 0;
        env.axi_ag.drv.read_byte_count  = 0;
        env.axi_ag.drv.first_read_seen  = 1'b0;
        env.axi_ag.drv.first_read_addr  = '0;
        env.axi_ag.drv.read_error_seen  = 1'b0;

        env.tx_axis_mon.transfer_count = 0;
        env.tx_axis_mon.observed_bytes.delete();
        env.tx_axis_mon.tlast_count = 0;
        env.tx_axis_mon.tlast_index = 0;
        env.tx_axis_mon.tuser_seen = 1'b0;

        env.rgmii_ag.mon.tx_frame_count = 0;
        env.rgmii_ag.mon.tx_byte_count  = 0;
        env.rgmii_ag.mon.tx_bytes.delete();
        env.rgmii_ag.mon.tx_error_seen = 1'b0;

    endtask


    task run_phase(uvm_phase phase);

        eth_reset_seq             reset_seq;
        eth_tx_axi_read_reset_seq interrupted_seq;
        eth_tx_axi_read_reset_seq recovery_seq;

        int unsigned timeout_cycles;
        int unsigned recovery_errors;

        bit reset_injected;

        phase.raise_objection(this);

        `uvm_info("TX_AXI_RESET",
            "Starting TX DMA AXI-read reset bug-hunting test",
            UVM_LOW)


        //--------------------------------------------------------------
        // Initial reset
        //--------------------------------------------------------------
        reset_seq =
            eth_reset_seq::type_id::create("initial_reset_seq");

        reset_seq.start(env.reset_ag.sqr);

        clear_tx_observation();


        //--------------------------------------------------------------
        // Prepare two DIFFERENT source areas.
        //
        // Interrupted transaction:
        //     0x1000 -> 00..3F
        //
        // Recovery transaction:
        //     0x3000 -> 80..BF
        //--------------------------------------------------------------
        for (int unsigned i = 0; i < 64; i++) begin

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_1000 + i] = i[7:0];

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_3000 + i] =
                    8'h80 + i[7:0];

        end


        //--------------------------------------------------------------
        // PHASE 1
        // Start TX DMA from 0x1000.
        //--------------------------------------------------------------
        interrupted_seq =
            eth_tx_axi_read_reset_seq::type_id::create(
                "interrupted_seq");

        interrupted_seq.tx_address = 32'h0000_1000;
        interrupted_seq.tx_length  = 32'd64;

        reset_injected = 1'b0;

        `uvm_info("TX_AXI_RESET",
            "PHASE1: starting TX DMA from 0x1000",
            UVM_LOW)


        fork : interrupted_phase

            begin : start_interrupted_dma

                interrupted_seq.start(env.axil_ag.sqr);

            end


            begin : inject_reset_on_third_read_beat

                timeout_cycles = 0;

                //------------------------------------------------------
                // Wait until THREE AXI R-channel transfers have
                // actually completed.
                //------------------------------------------------------
                while ((env.axi_ag.drv.read_beat_count < 3) &&
                       (timeout_cycles < 2000)) begin

                    @(posedge env.axi_ag.drv.vif.aclk);
                    timeout_cycles++;

                end


                if (env.axi_ag.drv.read_beat_count < 3) begin

                    `uvm_error("TX_AXI_RESET",
                        $sformatf(
                            "PHASE1: timeout waiting for third AXI read beat; beats=%0d",
                            env.axi_ag.drv.read_beat_count))

                end
                else begin

                    `uvm_info("TX_AXI_RESET_INJECT",
                        $sformatf(
                            "PHASE1: third AXI read beat accepted; beats=%0d bytes=%0d time=%0t",
                            env.axi_ag.drv.read_beat_count,
                            env.axi_ag.drv.read_byte_count,
                            $time),
                        UVM_LOW)

                    //--------------------------------------------------
                    // This must be a partial burst:
                    // 3 beats x 8 bytes = 24 bytes.
                    //--------------------------------------------------
                    if (env.axi_ag.drv.read_beat_count >= 8)
                        `uvm_error("TX_AXI_RESET",
                            "PHASE1: AXI read burst completed before reset injection")

                    reset_seq =
                        eth_reset_seq::type_id::create(
                            "mid_axi_read_reset_seq");

                    reset_injected = 1'b1;

                    `uvm_info("TX_AXI_RESET_INJECT",
                        $sformatf(
                            "PHASE1: asserting reset during TX DMA AXI read burst at %0t",
                            $time),
                        UVM_LOW)

                    reset_seq.start(env.reset_ag.sqr);

                    `uvm_info("TX_AXI_RESET_INJECT",
                        $sformatf(
                            "PHASE1: reset completed at %0t",
                            $time),
                        UVM_LOW)

                end

            end

        join


        if (!reset_injected)
            `uvm_error("TX_AXI_RESET",
                "PHASE1: reset was not injected")


        //--------------------------------------------------------------
        // Allow all reset domains to settle.
        //--------------------------------------------------------------
        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);


        `uvm_info("TX_AXI_RESET",
            $sformatf(
                "PHASE1 RESULT: interrupted burst counters bursts=%0d beats=%0d bytes=%0d",
                env.axi_ag.drv.read_burst_count,
                env.axi_ag.drv.read_beat_count,
                env.axi_ag.drv.read_byte_count),
            UVM_LOW)


        //--------------------------------------------------------------
        // PHASE 2
        //
        // Forget Phase-1 observations, but memory remains populated.
        //--------------------------------------------------------------
        clear_tx_observation();

        `uvm_info("TX_AXI_RESET",
            "PHASE2: starting fresh recovery TX DMA from 0x3000",
            UVM_LOW)


        recovery_seq =
            eth_tx_axi_read_reset_seq::type_id::create(
                "recovery_seq");

        recovery_seq.tx_address = 32'h0000_3000;
        recovery_seq.tx_length  = 32'd64;

        recovery_seq.start(env.axil_ag.sqr);


        //--------------------------------------------------------------
        // Wait for fresh AXI read completion.
        //--------------------------------------------------------------
        timeout_cycles = 0;

        while ((env.axi_ag.drv.read_byte_count < 64) &&
               (timeout_cycles < 3000)) begin

            @(posedge env.axi_ag.drv.vif.aclk);
            timeout_cycles++;

        end


        recovery_errors = 0;


        //--------------------------------------------------------------
        // Check fresh descriptor/address.
        //--------------------------------------------------------------
        if (!env.axi_ag.drv.first_read_seen) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                "No recovery AXI read request observed")

        end
        else if (env.axi_ag.drv.first_read_addr !=
                 64'h0000_0000_0000_3000) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Stale/wrong recovery read address EXP=0000000000003000 GOT=%016h",
                    env.axi_ag.drv.first_read_addr))

        end
        else begin

            `uvm_info("TX_AXI_RESET_RECOVERY",
                "PASS recovery AXI read starts at fresh address 0x3000",
                UVM_LOW)

        end


        //--------------------------------------------------------------
        // A clean recovery frame must contain exactly one 8-beat,
        // 64-byte AXI read.
        //--------------------------------------------------------------
        if (env.axi_ag.drv.read_burst_count != 1) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery read burst count EXP=1 GOT=%0d",
                    env.axi_ag.drv.read_burst_count))

        end


        if (env.axi_ag.drv.read_beat_count != 8) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery read beat count EXP=8 GOT=%0d",
                    env.axi_ag.drv.read_beat_count))

        end


        if (env.axi_ag.drv.read_byte_count != 64) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery read byte count EXP=64 GOT=%0d",
                    env.axi_ag.drv.read_byte_count))

        end


        if (env.axi_ag.drv.read_error_seen) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                "AXI memory model detected read protocol error during recovery")

        end


        //--------------------------------------------------------------
        // Wait for recovered DMA -> MAC AXIS transfer.
        //--------------------------------------------------------------
        timeout_cycles = 0;

        while ((env.tx_axis_mon.transfer_count < 64) &&
               (timeout_cycles < 3000)) begin

            @(posedge env.tx_axis_mon.vif.aclk);
            timeout_cycles++;

        end


        if (env.tx_axis_mon.transfer_count != 64) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery TX AXIS count EXP=64 GOT=%0d",
                    env.tx_axis_mon.transfer_count))

        end


        if (env.tx_axis_mon.observed_bytes.size() != 64) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery TX AXIS stored bytes EXP=64 GOT=%0d",
                    env.tx_axis_mon.observed_bytes.size()))

        end
        else begin

            for (int unsigned i = 0; i < 64; i++) begin

                if (env.tx_axis_mon.observed_bytes[i] !==
                    (8'h80 + i[7:0])) begin

                    recovery_errors++;

                    `uvm_error("TX_AXI_RESET_RECOVERY_DATA",
                        $sformatf(
                            "AXIS byte mismatch INDEX=%0d EXP=%02h GOT=%02h",
                            i,
                            (8'h80 + i[7:0]),
                            env.tx_axis_mon.observed_bytes[i]))

                end

            end

        end


        if (env.tx_axis_mon.tlast_count != 1) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery TLAST count EXP=1 GOT=%0d",
                    env.tx_axis_mon.tlast_count))

        end
        else if (env.tx_axis_mon.tlast_index != 63) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery TLAST index EXP=63 GOT=%0d",
                    env.tx_axis_mon.tlast_index))

        end


        //--------------------------------------------------------------
        // Wait for recovered physical RGMII frame.
        //--------------------------------------------------------------
        timeout_cycles = 0;

        while (((env.rgmii_ag.mon.tx_frame_count < 1) ||
                env.rgmii_ag.mon.tx_frame_active) &&
               (timeout_cycles < 4000)) begin

            @(posedge env.tx_axis_mon.vif.aclk);
            timeout_cycles++;

        end


        if (env.rgmii_ag.mon.tx_frame_count != 1) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery RGMII frame count EXP=1 GOT=%0d",
                    env.rgmii_ag.mon.tx_frame_count))

        end


        if (env.rgmii_ag.mon.tx_byte_count != 76) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Recovery RGMII byte count EXP=76 GOT=%0d",
                    env.rgmii_ag.mon.tx_byte_count))

        end


        //--------------------------------------------------------------
        // Verify recovered RGMII payload.
        //
        // Bytes:
        //   [0:6]  = preamble
        //   [7]    = SFD
        //   [8:71] = payload
        //--------------------------------------------------------------
        if (env.rgmii_ag.mon.tx_bytes.size() < 72) begin

            recovery_errors++;

            `uvm_error("TX_AXI_RESET_RECOVERY",
                $sformatf(
                    "Insufficient RGMII bytes for recovery payload GOT=%0d",
                    env.rgmii_ag.mon.tx_bytes.size()))

        end
        else begin

            for (int unsigned i = 0; i < 64; i++) begin

                if (env.rgmii_ag.mon.tx_bytes[8+i] !==
                    (8'h80 + i[7:0])) begin

                    recovery_errors++;

                    `uvm_error("TX_AXI_RESET_RGMII_DATA",
                        $sformatf(
                            "RGMII payload mismatch INDEX=%0d EXP=%02h GOT=%02h",
                            i,
                            (8'h80 + i[7:0]),
                            env.rgmii_ag.mon.tx_bytes[8+i]))

                end

            end

        end


        //--------------------------------------------------------------
        // Final result
        //--------------------------------------------------------------
        `uvm_info("TX_AXI_RESET",
            $sformatf(
                "RECOVERY SUMMARY bursts=%0d beats=%0d bytes=%0d first_addr=%016h axis_bytes=%0d rgmii_frames=%0d rgmii_bytes=%0d errors=%0d",
                env.axi_ag.drv.read_burst_count,
                env.axi_ag.drv.read_beat_count,
                env.axi_ag.drv.read_byte_count,
                env.axi_ag.drv.first_read_addr,
                env.tx_axis_mon.transfer_count,
                env.rgmii_ag.mon.tx_frame_count,
                env.rgmii_ag.mon.tx_byte_count,
                recovery_errors),
            UVM_LOW)


        if (recovery_errors == 0)
            `uvm_info("TX_AXI_RESET_RESULT",
                "PASS: TX DMA recovered cleanly after reset during active AXI read burst",
                UVM_LOW)
        else
            `uvm_error("TX_AXI_RESET_RESULT",
                $sformatf(
                    "FAIL: recovery after AXI-read reset produced %0d errors",
                    recovery_errors))


        phase.drop_objection(this);

    endtask

endclass
