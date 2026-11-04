class eth_parallel_multi_frame_config_seq extends uvm_sequence #(eth_axil_item);

    `uvm_object_utils(eth_parallel_multi_frame_config_seq)

    bit [31:0] tx_base;
    bit [31:0] rx_base;
    int unsigned tx_len;
    int unsigned rx_len;

    function new(string name = "eth_parallel_multi_frame_config_seq");
        super.new(name);
        tx_base   = 32'h0000_1000;
        rx_base   = 32'h0000_5000;
        tx_len = 64;
        rx_len = 1500;
    endfunction

    task automatic axil_write(
        bit [31:0] addr,
        bit [31:0] data
    );
        eth_axil_item tr;

        tr = eth_axil_item::type_id::create(
            $sformatf("tc016_wr_%08h", addr));

        start_item(tr);

        tr.write = 1'b1;
        tr.addr  = addr;
        tr.data  = data;
        tr.strb  = 4'hF;

        finish_item(tr);

        if (tr.resp != 2'b00)
            `uvm_error("TC017_CFG",
                $sformatf(
                    "AXI-Lite write failed ADDR=%08h DATA=%08h RESP=%0h",
                    addr, data, tr.resp))
    endtask

    task body();

        // TX descriptor
        axil_write(32'h0000_0010, tx_base);
        axil_write(32'h0000_0014, 32'h0000_0000);
        axil_write(32'h0000_0018, tx_len);

        // RX descriptor
        axil_write(32'h0000_001C, rx_base);
        axil_write(32'h0000_0020, 32'h0000_0000);
        axil_write(32'h0000_0024, rx_len);

        // Commit both TX and RX together
        axil_write(32'h0000_0000, 32'h0000_0003);

    endtask

endclass


class eth_parallel_multi_frame_test extends eth_base_test;

    `uvm_component_utils(eth_parallel_multi_frame_test)

    // ETH_TC_017 functional coverage
    int unsigned cov_frame_pair;
    int unsigned cov_length_relation;
    bit cov_overlap;

    covergroup tc017_cg;
        option.per_instance = 1;

        cp_frame_pair: coverpoint cov_frame_pair {
            bins tx64_rx1500 = {0};
            bins tx1500_rx64 = {1};
            bins tx127_rx129 = {2};
        }

        cp_length_relation: coverpoint cov_length_relation {
            bins tx_shorter = {0};
            bins tx_longer  = {1};
        }

        cp_overlap: coverpoint cov_overlap {
            bins physical_overlap = {1};
            ignore_bins no_overlap = {0};
        }
    endgroup


    virtual eth_rgmii_if rgmii_vif;

    virtual eth_desc_debug_if desc_vif;

    int unsigned tx_desc_count;
    int unsigned rx_desc_count;
    int unsigned tx_desc_error_count;
    int unsigned rx_desc_error_count;

    // Count descriptor completion pulses across the test.
    // Do not reset these counters between frame pairs.
    task automatic monitor_descriptor_completion();

        forever begin
            @(posedge desc_vif.clk);

            if (desc_vif.rd_sts_valid === 1'b1) begin
                tx_desc_count++;

                if (desc_vif.rd_sts_error != 4'h0)
                    tx_desc_error_count++;
            end

            if (desc_vif.wr_sts_valid === 1'b1) begin
                rx_desc_count++;

                if (desc_vif.wr_sts_error != 4'h0)
                    rx_desc_error_count++;
            end
        end

    endtask



    int unsigned tx_len;
    int unsigned rx_len;

    longint unsigned tx_base;
    longint unsigned rx_base;


    function new(
        string name = "eth_parallel_multi_frame_test",
        uvm_component parent = null
    );
        super.new(name, parent);
        tc017_cg = new();
    endfunction


    function void build_phase(uvm_phase phase);

        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_rgmii_if)::get(
                this, "", "vif", rgmii_vif))
            `uvm_fatal("TC017_VIF",
                "Unable to obtain eth_rgmii_if")

        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this, "", "desc_debug_vif", desc_vif))
            `uvm_fatal("TC017_DESC_VIF",
                "Unable to obtain descriptor debug interface")

    endfunction


    function automatic logic [31:0] calculate_ethernet_fcs(
        input byte unsigned frame_bytes[$]
    );

        logic [31:0] crc;
        logic feedback;

        crc = 32'hFFFF_FFFF;

        foreach (frame_bytes[i]) begin

            for (int unsigned bit_index = 0;
                 bit_index < 8;
                 bit_index++) begin

                feedback =
                    crc[0] ^
                    frame_bytes[i][bit_index];

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
        input int unsigned payload_length,
        output time rx_start_time,
        output time rx_end_time
    );

        byte unsigned payload[$];
        logic [31:0] fcs;

        payload.delete();

        // RX pattern intentionally differs from TX.
        for (int unsigned i = 0;
             i < payload_length;
             i++)
            payload.push_back(byte'(8'h80 + i));

        fcs = calculate_ethernet_fcs(payload);

        @(negedge rgmii_vif.bfm_rx_clk);

        rx_start_time = $time;

        for (int unsigned i = 0; i < 7; i++)
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
        rgmii_vif.bfm_rxd    <= 4'h0;

        rx_end_time = $time;

        `uvm_info("TC017_RX_RGMII",
            $sformatf(
                "Injected RX frame LEN=%0d FCS=%08h RX=[%0t,%0t]",
                payload_length,
                fcs,
                rx_start_time,
                rx_end_time),
            UVM_LOW)

    endtask


    task automatic watch_tx_frame(
        output time tx_start_time,
        output time tx_end_time
    );

        int unsigned timeout_cycles;

        tx_start_time = 0;
        tx_end_time   = 0;

        timeout_cycles = 0;

        while ((rgmii_vif.tx_ctl !== 1'b1) &&
               (timeout_cycles < 200000)) begin

            @(posedge rgmii_vif.bfm_rx_clk);
            timeout_cycles++;

        end

        if (rgmii_vif.tx_ctl !== 1'b1) begin

            `uvm_error("TC017_TX_TIMEOUT",
                "Timed out waiting for RGMII TX start")

            return;

        end

        tx_start_time = $time;

        timeout_cycles = 0;

        while ((rgmii_vif.tx_ctl !== 1'b0) &&
               (timeout_cycles < 200000)) begin

            @(posedge rgmii_vif.bfm_rx_clk);
            timeout_cycles++;

        end

        if (rgmii_vif.tx_ctl !== 1'b0) begin

            `uvm_error("TC017_TX_TIMEOUT",
                "Timed out waiting for RGMII TX end")

            return;

        end

        tx_end_time = $time;

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

        eth_reset_seq reset_sequence;
        eth_parallel_multi_frame_config_seq config_sequence;

        int unsigned timeout_cycles;

        int unsigned expected_tx_beats;
        int unsigned expected_tx_bus_bytes;
        int unsigned expected_rx_beats;

        int unsigned tx_errors;
        int unsigned rx_errors;
        int unsigned memory_errors;
        int unsigned guard_errors;
        int unsigned rgmii_errors;

        int unsigned expected_rgmii_bytes;

        logic [31:0] expected_tx_fcs;
        byte unsigned tx_payload[$];

        time tx_start_time;
        time tx_end_time;
        time rx_start_time;
        time rx_end_time;

        time overlap_start;
        time overlap_end;

        int unsigned frame_index;
        int unsigned frame_failures;
        int unsigned tx_lengths[3];
        int unsigned rx_lengths[3];

        frame_failures = 0;

        tx_lengths[0] = 64;
        tx_lengths[1] = 1500;
        tx_lengths[2] = 127;

        rx_lengths[0] = 1500;
        rx_lengths[1] = 64;
        rx_lengths[2] = 129;

        phase.raise_objection(this);


        // Reset.
        reset_sequence =
            eth_reset_seq::type_id::create("reset_sequence");

        reset_sequence.start(env.reset_ag.sqr);

        tx_desc_count       = 0;
        rx_desc_count       = 0;
        tx_desc_error_count = 0;
        rx_desc_error_count = 0;

        fork
            monitor_descriptor_completion();
        join_none




        for (frame_index = 0; frame_index < 3; frame_index++) begin

            tx_len = tx_lengths[frame_index];
            rx_len = rx_lengths[frame_index];

            tx_base = 64'h1000 + (frame_index * 64'h1000);
            rx_base = 64'h5000 + (frame_index * 64'h1000);

            expected_tx_beats     = (tx_len + 7) / 8;
            expected_tx_bus_bytes = expected_tx_beats * 8;
            expected_rx_beats     = (rx_len + 7) / 8;
            expected_rgmii_bytes  = tx_len + 12;

            `uvm_info("TC017_FRAME_START",
                $sformatf(
                    "FRAME=%0d TX_LEN=%0d RX_LEN=%0d TX_BASE=%h RX_BASE=%h",
                    frame_index + 1,
                    tx_len,
                    rx_len,
                    tx_base,
                    rx_base),
                UVM_LOW)

        // External RX stimulus; no physical loopback.
        rgmii_vif.loopback_enable = 1'b0;
        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;


        clear_observation();


        // TX payload = 00,01,02...
        for (int unsigned i = 0;
             i < tx_len;
             i++)
            env.axi_ag.drv.mem[tx_base + i] = byte'(i);


        // RX destination and guard area.
        for (int unsigned i = 0;
             i < rx_len + 16;
             i++)
            env.axi_ag.drv.mem[rx_base + i] = 8'hA5;


        // Program both descriptors and commit TX+RX.
        config_sequence =
            eth_parallel_multi_frame_config_seq::type_id::create(
                "config_sequence");

        config_sequence.tx_base   = tx_base[31:0];
        config_sequence.rx_base   = rx_base[31:0];
        config_sequence.tx_len = tx_len;
        config_sequence.rx_len = rx_len;

        config_sequence.start(env.axil_ag.sqr);


        /*
         * Start independent RX stimulus while observing TX.
         *
         * The RX stimulus waits for TX activity and then begins a few
         * RGMII clocks later. This guarantees real physical overlap.
         */
        fork

            watch_tx_frame(
                tx_start_time,
                tx_end_time);

            begin

                timeout_cycles = 0;

                while ((rgmii_vif.tx_ctl !== 1'b1) &&
                       (timeout_cycles < 200000)) begin

                    @(posedge rgmii_vif.bfm_rx_clk);
                    timeout_cycles++;

                end

                if (rgmii_vif.tx_ctl !== 1'b1) begin

                    `uvm_error("TC017_RX_START",
                        "Cannot start RX because RGMII TX did not become active")

                    rx_start_time = 0;
                    rx_end_time   = 0;

                end
                else begin

                    repeat (4)
                        @(posedge rgmii_vif.bfm_rx_clk);

                    drive_rx_frame(
                        rx_len,
                        rx_start_time,
                        rx_end_time);

                end

            end

        join


        // Wait for both DMA directions.
        timeout_cycles = 0;

        while (((env.tx_axis_mon.transfer_count < tx_len) ||
                (env.rx_axis_mon.transfer_count < rx_len) ||
                (env.axi_ag.drv.write_byte_count < rx_len) ||
                env.rgmii_ag.mon.tx_frame_active) &&
               (timeout_cycles < 200000)) begin

            @(posedge env.axi_ag.drv.vif.aclk);
            timeout_cycles++;

        end

        if (timeout_cycles >= 200000)
            `uvm_error("TC017_TIMEOUT",
                $sformatf(
                    "Timeout TX_AXIS=%0d RX_AXIS=%0d RX_DMA_BYTES=%0d",
                    env.tx_axis_mon.transfer_count,
                    env.rx_axis_mon.transfer_count,
                    env.axi_ag.drv.write_byte_count))


        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);


        tx_errors     = 0;
        rx_errors     = 0;
        memory_errors = 0;
        guard_errors  = 0;
        rgmii_errors  = 0;


        // =====================================================
        // TX AXIS
        // =====================================================

        if (env.tx_axis_mon.observed_bytes.size() != tx_len) begin

            tx_errors++;

            `uvm_error("TC017_TX_AXIS_COUNT",
                $sformatf(
                    "EXP=%0d GOT=%0d",
                    tx_len,
                    env.tx_axis_mon.observed_bytes.size()))

        end
        else begin

            for (int unsigned i = 0;
                 i < tx_len;
                 i++) begin

                if (env.tx_axis_mon.observed_bytes[i] !==
                    byte'(i)) begin

                    tx_errors++;

                    `uvm_error("TC017_TX_AXIS_DATA",
                        $sformatf(
                            "INDEX=%0d EXP=%02h GOT=%02h",
                            i,
                            byte'(i),
                            env.tx_axis_mon.observed_bytes[i]))

                end

            end

        end


        if ((env.tx_axis_mon.tlast_count != 1) ||
            (env.tx_axis_mon.tlast_index != tx_len-1) ||
            env.tx_axis_mon.tuser_seen) begin

            tx_errors++;

            `uvm_error("TC017_TX_STATUS",
                $sformatf(
                    "TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    env.tx_axis_mon.tlast_count,
                    env.tx_axis_mon.tlast_index,
                    env.tx_axis_mon.tuser_seen))

        end


        // =====================================================
        // TX DMA
        // =====================================================

        if (!env.axi_ag.drv.first_read_seen ||
            env.axi_ag.drv.first_read_addr != tx_base) begin

            tx_errors++;

            `uvm_error("TC017_TX_AXI_ADDR",
                $sformatf(
                    "EXP=%016h GOT=%016h SEEN=%0b",
                    tx_base,
                    env.axi_ag.drv.first_read_addr,
                    env.axi_ag.drv.first_read_seen))

        end


        if (env.axi_ag.drv.read_beat_count != expected_tx_beats) begin

            tx_errors++;

            `uvm_error("TC017_TX_AXI_BEATS",
                $sformatf(
                    "EXP=%0d GOT=%0d",
                    expected_tx_beats,
                    env.axi_ag.drv.read_beat_count))

        end


        if (env.axi_ag.drv.read_byte_count !=
            expected_tx_bus_bytes) begin

            tx_errors++;

            `uvm_error("TC017_TX_AXI_BYTES",
                $sformatf(
                    "EXP=%0d GOT=%0d",
                    expected_tx_bus_bytes,
                    env.axi_ag.drv.read_byte_count))

        end


        // =====================================================
        // RX AXIS
        // =====================================================

        if (env.rx_axis_mon.observed_bytes.size() != rx_len) begin

            rx_errors++;

            `uvm_error("TC017_RX_AXIS_COUNT",
                $sformatf(
                    "EXP=%0d GOT=%0d",
                    rx_len,
                    env.rx_axis_mon.observed_bytes.size()))

        end
        else begin

            for (int unsigned i = 0;
                 i < rx_len;
                 i++) begin

                if (env.rx_axis_mon.observed_bytes[i] !==
                    byte'(8'h80 + i)) begin

                    rx_errors++;

                    `uvm_error("TC017_RX_AXIS_DATA",
                        $sformatf(
                            "INDEX=%0d EXP=%02h GOT=%02h",
                            i,
                            byte'(8'h80 + i),
                            env.rx_axis_mon.observed_bytes[i]))

                end

            end

        end


        if ((env.rx_axis_mon.tlast_count != 1) ||
            (env.rx_axis_mon.tlast_index != rx_len-1) ||
            env.rx_axis_mon.tuser_seen) begin

            rx_errors++;

            `uvm_error("TC017_RX_STATUS",
                $sformatf(
                    "TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    env.rx_axis_mon.tlast_count,
                    env.rx_axis_mon.tlast_index,
                    env.rx_axis_mon.tuser_seen))

        end


        // =====================================================
        // RX DMA
        // =====================================================

        if (!env.axi_ag.drv.first_write_seen ||
            env.axi_ag.drv.first_write_addr != rx_base) begin

            rx_errors++;

            `uvm_error("TC017_RX_AXI_ADDR",
                $sformatf(
                    "EXP=%016h GOT=%016h SEEN=%0b",
                    rx_base,
                    env.axi_ag.drv.first_write_addr,
                    env.axi_ag.drv.first_write_seen))

        end


        if (env.axi_ag.drv.write_beat_count != expected_rx_beats) begin

            rx_errors++;

            `uvm_error("TC017_RX_AXI_BEATS",
                $sformatf(
                    "EXP=%0d GOT=%0d",
                    expected_rx_beats,
                    env.axi_ag.drv.write_beat_count))

        end


        if (env.axi_ag.drv.write_byte_count != rx_len) begin

            rx_errors++;

            `uvm_error("TC017_RX_AXI_BYTES",
                $sformatf(
                    "EXP=%0d GOT=%0d",
                    rx_len,
                    env.axi_ag.drv.write_byte_count))

        end


        // =====================================================
        // RX MEMORY
        // =====================================================

        for (int unsigned i = 0;
             i < rx_len;
             i++) begin

            if (!env.axi_ag.drv.mem.exists(rx_base+i)) begin

                memory_errors++;

                `uvm_error("TC017_RX_MEMORY",
                    $sformatf(
                        "Missing address=%016h",
                        rx_base+i))

            end
            else if (env.axi_ag.drv.mem[rx_base+i] !==
                     byte'(8'h80 + i)) begin

                memory_errors++;

                `uvm_error("TC017_RX_MEMORY",
                    $sformatf(
                        "ADDR=%016h EXP=%02h GOT=%02h",
                        rx_base+i,
                        byte'(8'h80 + i),
                        env.axi_ag.drv.mem[rx_base+i]))

            end

        end


        // Guard bytes after RX descriptor.
        for (int unsigned i = 0; i < 8; i++) begin

            if (env.axi_ag.drv.mem[rx_base + rx_len + i]
                !== 8'hA5) begin

                guard_errors++;

                `uvm_error("TC017_RX_GUARD",
                    $sformatf(
                        "Overwrite ADDR=%016h DATA=%02h",
                        rx_base + rx_len + i,
                        env.axi_ag.drv.mem[
                            rx_base + rx_len + i]))

            end

        end


        // =====================================================
        // COMPLETE RGMII TX FRAME
        // =====================================================

        if (env.rgmii_ag.mon.tx_frame_count != 1) begin

            rgmii_errors++;

            `uvm_error("TC017_RGMII_FRAME_COUNT",
                $sformatf(
                    "Expected 1 frame got %0d",
                    env.rgmii_ag.mon.tx_frame_count))

        end


        if (env.rgmii_ag.mon.tx_bytes.size() !=
            expected_rgmii_bytes) begin

            rgmii_errors++;

            `uvm_error("TC017_RGMII_COUNT",
                $sformatf(
                    "EXP=%0d GOT=%0d",
                    expected_rgmii_bytes,
                    env.rgmii_ag.mon.tx_bytes.size()))

        end


        if (env.rgmii_ag.mon.tx_error_seen) begin

            rgmii_errors++;

            `uvm_error("TC017_RGMII_ERROR",
                "RGMII TX monitor observed TX error")

        end


        // Preamble and SFD.
        if (env.rgmii_ag.mon.tx_bytes.size() >= 8) begin

            for (int unsigned i = 0; i < 7; i++) begin

                if (env.rgmii_ag.mon.tx_bytes[i] !== 8'h55) begin

                    rgmii_errors++;

                    `uvm_error("TC017_RGMII_PREAMBLE",
                        $sformatf(
                            "INDEX=%0d EXP=55 GOT=%02h",
                            i,
                            env.rgmii_ag.mon.tx_bytes[i]))

                end

            end

            if (env.rgmii_ag.mon.tx_bytes[7] !== 8'hD5) begin

                rgmii_errors++;

                `uvm_error("TC017_RGMII_SFD",
                    $sformatf(
                        "EXP=D5 GOT=%02h",
                        env.rgmii_ag.mon.tx_bytes[7]))

            end

        end
        else begin

            rgmii_errors++;

            `uvm_error("TC017_RGMII_HEADER",
                "Insufficient RGMII bytes")

        end


        // TX RGMII payload.
        if (env.rgmii_ag.mon.tx_bytes.size() >=
            (8 + tx_len)) begin

            for (int unsigned i = 0;
                 i < tx_len;
                 i++) begin

                if (env.rgmii_ag.mon.tx_bytes[8+i] !==
                    byte'(i)) begin

                    rgmii_errors++;

                    `uvm_error("TC017_RGMII_PAYLOAD",
                        $sformatf(
                            "INDEX=%0d EXP=%02h GOT=%02h",
                            i,
                            byte'(i),
                            env.rgmii_ag.mon.tx_bytes[8+i]))

                end

            end

        end


        // TX RGMII FCS.
        tx_payload.delete();

        for (int unsigned i = 0;
             i < tx_len;
             i++)
            tx_payload.push_back(byte'(i));

        expected_tx_fcs =
            calculate_ethernet_fcs(tx_payload);


        if (env.rgmii_ag.mon.tx_bytes.size() >=
            expected_rgmii_bytes) begin

            if (env.rgmii_ag.mon.tx_bytes[8+tx_len] !==
                expected_tx_fcs[7:0])
                rgmii_errors++;

            if (env.rgmii_ag.mon.tx_bytes[9+tx_len] !==
                expected_tx_fcs[15:8])
                rgmii_errors++;

            if (env.rgmii_ag.mon.tx_bytes[10+tx_len] !==
                expected_tx_fcs[23:16])
                rgmii_errors++;

            if (env.rgmii_ag.mon.tx_bytes[11+tx_len] !==
                expected_tx_fcs[31:24])
                rgmii_errors++;

        end


        // =====================================================
        // CONCURRENCY
        // =====================================================

        overlap_start =
            (tx_start_time > rx_start_time) ?
             tx_start_time : rx_start_time;

        overlap_end =
            (tx_end_time < rx_end_time) ?
             tx_end_time : rx_end_time;


        if ((tx_start_time == 0) ||
            (tx_end_time == 0) ||
            (rx_start_time == 0) ||
            (rx_end_time == 0) ||
            (overlap_end <= overlap_start)) begin

            `uvm_error("TC017_OVERLAP",
                $sformatf(
                    "No RGMII overlap TX=[%0t,%0t] RX=[%0t,%0t]",
                    tx_start_time,
                    tx_end_time,
                    rx_start_time,
                    rx_end_time))

            tx_errors++;

        end
        else begin

            `uvm_info("TC017_OVERLAP",
                $sformatf(
                    "PASS TX=[%0t,%0t] RX=[%0t,%0t] OVERLAP=%0t",
                    tx_start_time,
                    tx_end_time,
                    rx_start_time,
                    rx_end_time,
                    overlap_end-overlap_start),
                UVM_LOW)

        end


        // AXI protocol checks.
        if (env.axi_ag.drv.read_error_seen) begin

            tx_errors++;

            `uvm_error("TC017_TX_AXI_PROTOCOL",
                "AXI memory model detected TX read error")

        end


        if (env.axi_ag.drv.write_error_seen) begin

            rx_errors++;

            `uvm_error("TC017_RX_AXI_PROTOCOL",
                "AXI memory model detected RX write error")

        end


        `uvm_info("TC017_SUMMARY",
            $sformatf(
                "TX_LEN=%0d RX_LEN=%0d TX_BURSTS=%0d TX_BEATS=%0d TX_BUS_BYTES=%0d TX_AXIS=%0d RX_BURSTS=%0d RX_BEATS=%0d RX_USEFUL_BYTES=%0d RX_AXIS=%0d MEM_ERR=%0d GUARD_ERR=%0d RGMII_ERR=%0d",
                tx_len,
                rx_len,
                env.axi_ag.drv.read_burst_count,
                env.axi_ag.drv.read_beat_count,
                env.axi_ag.drv.read_byte_count,
                env.tx_axis_mon.observed_bytes.size(),
                env.axi_ag.drv.write_burst_count,
                env.axi_ag.drv.write_beat_count,
                env.axi_ag.drv.write_byte_count,
                env.rx_axis_mon.observed_bytes.size(),
                memory_errors,
                guard_errors,
                rgmii_errors),
            UVM_LOW)


        if ((tx_errors == 0) &&
            (rx_errors == 0) &&
            (memory_errors == 0) &&
            (guard_errors == 0) &&
            (rgmii_errors == 0)) begin

            cov_frame_pair = frame_index;
            cov_length_relation = (tx_len < rx_len) ? 0 : 1;
            cov_overlap =
                (tx_start_time != 0) &&
                (rx_start_time != 0) &&
                (overlap_end > overlap_start);

            tc017_cg.sample();

            `uvm_info("TC017_COV",
                $sformatf(
                    "Sampled frame_pair=%0d TX_LEN=%0d RX_LEN=%0d overlap=%0b",
                    cov_frame_pair, tx_len, rx_len, cov_overlap),
                UVM_LOW)

            `uvm_info("TC017_RESULT",
                $sformatf(
                    "PASS ETH_TC_017 TX_LEN=%0d RX_LEN=%0d",
                    tx_len, rx_len),
                UVM_LOW)

        end
        else begin

            `uvm_error("TC017_RESULT",
                $sformatf(
                    "FAIL TX_LEN=%0d RX_LEN=%0d TX_ERR=%0d RX_ERR=%0d MEM_ERR=%0d GUARD_ERR=%0d RGMII_ERR=%0d",
                    tx_len,
                    rx_len,
                    tx_errors,
                    rx_errors,
                    memory_errors,
                    guard_errors,
                    rgmii_errors))

        end


        if ((tx_errors != 0) ||
            (rx_errors != 0) ||
            (memory_errors != 0) ||
            (guard_errors != 0) ||
            (rgmii_errors != 0))
            frame_failures++;


        // Ensure both DMA descriptors have completed before
        // programming the next frame pair.
        timeout_cycles = 0;

        while (((tx_desc_count < frame_index + 1) ||
                (rx_desc_count < frame_index + 1)) &&
               (timeout_cycles < 200000)) begin

            @(negedge desc_vif.clk);
            timeout_cycles++;

        end

        if ((tx_desc_count != frame_index + 1) ||
            (rx_desc_count != frame_index + 1) ||
            (tx_desc_error_count != 0) ||
            (rx_desc_error_count != 0)) begin

            frame_failures++;

            `uvm_error("TC017_DESC_COMPLETION",
                $sformatf(
                    "FRAME=%0d TX_DONE=%0d RX_DONE=%0d TX_ERR=%0d RX_ERR=%0d",
                    frame_index + 1,
                    tx_desc_count,
                    rx_desc_count,
                    tx_desc_error_count,
                    rx_desc_error_count))

        end
        else begin

            `uvm_info("TC017_DESC_COMPLETION",
                $sformatf(
                    "PASS FRAME=%0d TX_DONE=%0d RX_DONE=%0d",
                    frame_index + 1,
                    tx_desc_count,
                    rx_desc_count),
                UVM_LOW)

        end

        // Wait before rearming the next descriptor pair.
        repeat (100)
            @(posedge env.axi_ag.drv.vif.aclk);

        end // frame_index loop


        // Final memory preservation check after all three frames.
        for (int unsigned f = 0; f < 3; f++) begin

            longint unsigned check_base;
            int unsigned check_len;
            int unsigned preservation_errors;

            check_base = 64'h5000 + (f * 64'h1000);
            check_len  = rx_lengths[f];
            preservation_errors = 0;

            for (int unsigned i = 0; i < check_len; i++) begin

                if (!env.axi_ag.drv.mem.exists(check_base + i) ||
                    env.axi_ag.drv.mem[check_base + i] !==
                        byte'(8'h80 + i)) begin

                    preservation_errors++;

                end

            end

            for (int unsigned i = 0; i < 16; i++) begin

                if (!env.axi_ag.drv.mem.exists(check_base + check_len + i) ||
                    env.axi_ag.drv.mem[check_base + check_len + i]
                        !== 8'hA5) begin

                    preservation_errors++;

                end

            end

            if (preservation_errors != 0) begin

                frame_failures++;

                `uvm_error("TC017_MEMORY_PRESERVATION",
                    $sformatf(
                        "FAIL FRAME=%0d ERRORS=%0d",
                        f + 1,
                        preservation_errors))

            end
            else begin

                `uvm_info("TC017_MEMORY_PRESERVATION",
                    $sformatf(
                        "PASS FRAME=%0d RX_BASE=%h RX_LEN=%0d GUARD=16",
                        f + 1,
                        check_base,
                        check_len),
                    UVM_LOW)

            end

        end

        `uvm_info("TC017_COVERAGE",
            $sformatf(
                "ETH_TC_017 functional coverage = %0.2f%%",
                tc017_cg.get_inst_coverage()),
            UVM_LOW)

        if (frame_failures == 0)
            `uvm_info("TC017_FINAL",
                "PASS ETH_TC_017 ALL THREE FRAME PAIRS",
                UVM_LOW)
        else
            `uvm_error("TC017_FINAL",
                $sformatf(
                    "FAIL ETH_TC_017 FRAME_FAILURES=%0d",
                    frame_failures))

        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;
        rgmii_vif.loopback_enable = 1'b1;


        phase.drop_objection(this);

    endtask

endclass
