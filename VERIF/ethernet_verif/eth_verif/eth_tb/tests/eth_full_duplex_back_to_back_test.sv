class eth_full_duplex_back_to_back_test extends eth_base_test;
    `uvm_component_utils(eth_full_duplex_back_to_back_test)

    virtual eth_rgmii_if rgmii_vif;

    function new(
        string name = "eth_full_duplex_back_to_back_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction


    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_rgmii_if)::get(
                this, "", "vif", rgmii_vif))
            `uvm_fatal("FD_B2B_VIF",
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

                feedback = crc[0] ^
                           frame_bytes[byte_index][bit_index];

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
        input  byte unsigned payload_start,
        input  int unsigned frame_number,
        output time rx_start_time,
        output time rx_end_time
    );

        byte unsigned payload[$];
        logic [31:0] fcs;

        payload.delete();

        for (int unsigned byte_index = 0;
             byte_index < 64;
             byte_index++)
            payload.push_back(
                payload_start + byte_index[7:0]);

        fcs = calculate_ethernet_fcs(payload);

        @(negedge rgmii_vif.bfm_rx_clk);

        rgmii_vif.bfm_rxd    <= 4'h5;
        rgmii_vif.bfm_rx_ctl <= 1'b1;

        rx_start_time = $time;

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

        rx_end_time = $time;

        `uvm_info("FD_B2B_RX",
            $sformatf(
                "FRAME=%0d RX payload start=%02h FCS=%08h RX=[%0t,%0t]",
                frame_number,
                payload_start,
                fcs,
                rx_start_time,
                rx_end_time),
            UVM_LOW)

    endtask


    task automatic watch_tx_frame(
        input  int unsigned frame_number,
        output time tx_start_time,
        output time tx_end_time
    );

        int unsigned timeout_cycles;

        tx_start_time  = 0;
        tx_end_time    = 0;
        timeout_cycles = 0;

        while ((rgmii_vif.tx_ctl !== 1'b1) &&
               (timeout_cycles < 5000)) begin

            @(posedge rgmii_vif.bfm_rx_clk);
            timeout_cycles++;

        end

        if (rgmii_vif.tx_ctl !== 1'b1) begin
            `uvm_error("FD_B2B_TX_TIMEOUT",
                $sformatf(
                    "FRAME=%0d timed out waiting for TX start",
                    frame_number))
            return;
        end

        tx_start_time = $time;

        `uvm_info("FD_B2B_TX",
            $sformatf(
                "FRAME=%0d TX started at %0t",
                frame_number,
                tx_start_time),
            UVM_LOW)

        timeout_cycles = 0;

        while ((rgmii_vif.tx_ctl !== 1'b0) &&
               (timeout_cycles < 5000)) begin

            @(posedge rgmii_vif.bfm_rx_clk);
            timeout_cycles++;

        end

        if (rgmii_vif.tx_ctl !== 1'b0) begin
            `uvm_error("FD_B2B_TX_TIMEOUT",
                $sformatf(
                    "FRAME=%0d timed out waiting for TX end",
                    frame_number))
            return;
        end

        tx_end_time = $time;

        `uvm_info("FD_B2B_TX",
            $sformatf(
                "FRAME=%0d TX ended at %0t",
                frame_number,
                tx_end_time),
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


    task automatic wait_for_pair_completion(
        input int unsigned frame_number
    );

        int unsigned timeout_cycles;

        timeout_cycles = 0;

        while (((env.axi_ag.drv.read_byte_count < 64) ||
                (env.axi_ag.drv.write_byte_count < 64) ||
                env.rgmii_ag.mon.tx_frame_active) &&
               (timeout_cycles < 10000)) begin

            @(posedge env.axi_ag.drv.vif.aclk);
            timeout_cycles++;

        end

        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);

        if (timeout_cycles >= 10000)
            `uvm_error("FD_B2B_TIMEOUT",
                $sformatf(
                    "FRAME=%0d timed out waiting for completion",
                    frame_number))

    endtask


    task automatic check_frame_pair(
        input int unsigned frame_number,
        input longint unsigned tx_address,
        input longint unsigned rx_address,
        input byte unsigned tx_payload_start,
        input byte unsigned rx_payload_start,
        input time tx_start_time,
        input time tx_end_time,
        input time rx_start_time,
        input time rx_end_time,
        output int unsigned frame_errors
    );

        time overlap_start;
        time overlap_end;

        frame_errors = 0;

        if (env.axi_ag.drv.read_byte_count != 64) begin
            frame_errors++;
            `uvm_error("FD_B2B_TX_DMA",
                $sformatf(
                    "FRAME=%0d expected 64 TX bytes, observed %0d",
                    frame_number,
                    env.axi_ag.drv.read_byte_count))
        end

        if (!env.axi_ag.drv.first_read_seen ||
            env.axi_ag.drv.first_read_addr !== tx_address) begin

            frame_errors++;

            `uvm_error("FD_B2B_TX_ADDR",
                $sformatf(
                    "FRAME=%0d EXP=%016h GOT=%016h",
                    frame_number,
                    tx_address,
                    env.axi_ag.drv.first_read_addr))
        end

        if (env.axi_ag.drv.write_byte_count != 64) begin
            frame_errors++;

            `uvm_error("FD_B2B_RX_DMA",
                $sformatf(
                    "FRAME=%0d expected 64 RX bytes, observed %0d",
                    frame_number,
                    env.axi_ag.drv.write_byte_count))
        end

        if (!env.axi_ag.drv.first_write_seen ||
            env.axi_ag.drv.first_write_addr !== rx_address) begin

            frame_errors++;

            `uvm_error("FD_B2B_RX_ADDR",
                $sformatf(
                    "FRAME=%0d EXP=%016h GOT=%016h",
                    frame_number,
                    rx_address,
                    env.axi_ag.drv.first_write_addr))
        end


        if (env.tx_axis_mon.observed_bytes.size() != 64) begin
            frame_errors++;

            `uvm_error("FD_B2B_TX_AXIS",
                $sformatf(
                    "FRAME=%0d expected 64 bytes, observed %0d",
                    frame_number,
                    env.tx_axis_mon.observed_bytes.size()))
        end
        else begin

            for (int unsigned byte_index = 0;
                 byte_index < 64;
                 byte_index++) begin

                if (env.tx_axis_mon.observed_bytes[byte_index] !==
                    (tx_payload_start + byte_index[7:0])) begin

                    frame_errors++;

                    `uvm_error("FD_B2B_TX_AXIS",
                        $sformatf(
                            "FRAME=%0d BYTE=%0d EXP=%02h GOT=%02h",
                            frame_number,
                            byte_index,
                            tx_payload_start + byte_index[7:0],
                            env.tx_axis_mon.observed_bytes[
                                byte_index]))
                end
            end
        end


        if ((env.tx_axis_mon.tlast_count != 1) ||
            (env.tx_axis_mon.tlast_index != 63) ||
            env.tx_axis_mon.tuser_seen) begin

            frame_errors++;

            `uvm_error("FD_B2B_TX_STATUS",
                $sformatf(
                    "FRAME=%0d TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    frame_number,
                    env.tx_axis_mon.tlast_count,
                    env.tx_axis_mon.tlast_index,
                    env.tx_axis_mon.tuser_seen))
        end


        if (env.rx_axis_mon.observed_bytes.size() != 64) begin
            frame_errors++;

            `uvm_error("FD_B2B_RX_AXIS",
                $sformatf(
                    "FRAME=%0d expected 64 bytes, observed %0d",
                    frame_number,
                    env.rx_axis_mon.observed_bytes.size()))
        end
        else begin

            for (int unsigned byte_index = 0;
                 byte_index < 64;
                 byte_index++) begin

                if (env.rx_axis_mon.observed_bytes[byte_index] !==
                    (rx_payload_start + byte_index[7:0])) begin

                    frame_errors++;

                    `uvm_error("FD_B2B_RX_AXIS",
                        $sformatf(
                            "FRAME=%0d BYTE=%0d EXP=%02h GOT=%02h",
                            frame_number,
                            byte_index,
                            rx_payload_start + byte_index[7:0],
                            env.rx_axis_mon.observed_bytes[
                                byte_index]))
                end
            end
        end


        if ((env.rx_axis_mon.tlast_count != 1) ||
            (env.rx_axis_mon.tlast_index != 63) ||
            env.rx_axis_mon.tuser_seen) begin

            frame_errors++;

            `uvm_error("FD_B2B_RX_STATUS",
                $sformatf(
                    "FRAME=%0d TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    frame_number,
                    env.rx_axis_mon.tlast_count,
                    env.rx_axis_mon.tlast_index,
                    env.rx_axis_mon.tuser_seen))
        end


        for (int unsigned byte_index = 0;
             byte_index < 64;
             byte_index++) begin

            longint unsigned address;

            address = rx_address + byte_index;

            if (!env.axi_ag.drv.mem.exists(address)) begin

                frame_errors++;

                `uvm_error("FD_B2B_RX_MEMORY",
                    $sformatf(
                        "FRAME=%0d ADDR=%016h missing",
                        frame_number,
                        address))
            end
            else if (env.axi_ag.drv.mem[address] !==
                     (rx_payload_start +
                      byte_index[7:0])) begin

                frame_errors++;

                `uvm_error("FD_B2B_RX_MEMORY",
                    $sformatf(
                        "FRAME=%0d ADDR=%016h EXP=%02h GOT=%02h",
                        frame_number,
                        address,
                        rx_payload_start +
                        byte_index[7:0],
                        env.axi_ag.drv.mem[address]))
            end
        end


        if ((env.rgmii_ag.mon.tx_frame_count != 1) ||
            (env.rgmii_ag.mon.tx_bytes.size() != 76) ||
            env.rgmii_ag.mon.tx_error_seen) begin

            frame_errors++;

            `uvm_error("FD_B2B_RGMII_TX",
                $sformatf(
                    "FRAME=%0d FRAME_COUNT=%0d BYTES=%0d ERROR=%0b",
                    frame_number,
                    env.rgmii_ag.mon.tx_frame_count,
                    env.rgmii_ag.mon.tx_bytes.size(),
                    env.rgmii_ag.mon.tx_error_seen))
        end


        if (env.axi_ag.drv.read_error_seen ||
            env.axi_ag.drv.write_error_seen) begin

            frame_errors++;

            `uvm_error("FD_B2B_AXI",
                $sformatf(
                    "FRAME=%0d READ_ERROR=%0b WRITE_ERROR=%0b",
                    frame_number,
                    env.axi_ag.drv.read_error_seen,
                    env.axi_ag.drv.write_error_seen))
        end


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

            frame_errors++;

            `uvm_error("FD_B2B_OVERLAP",
                $sformatf(
                    "FRAME=%0d no RGMII overlap TX=[%0t,%0t] RX=[%0t,%0t]",
                    frame_number,
                    tx_start_time,
                    tx_end_time,
                    rx_start_time,
                    rx_end_time))
        end
        else begin

            `uvm_info("FD_B2B_OVERLAP",
                $sformatf(
                    "FRAME=%0d PASS TX=[%0t,%0t] RX=[%0t,%0t] OVERLAP=%0t",
                    frame_number,
                    tx_start_time,
                    tx_end_time,
                    rx_start_time,
                    rx_end_time,
                    overlap_end-overlap_start),
                UVM_LOW)
        end


        if (frame_errors == 0)
            `uvm_info("FD_B2B_FRAME",
                $sformatf(
                    "FRAME=%0d PASS TX_ADDR=%016h RX_ADDR=%016h",
                    frame_number,
                    tx_address,
                    rx_address),
                UVM_NONE)
        else
            `uvm_error("FD_B2B_FRAME",
                $sformatf(
                    "FRAME=%0d FAIL errors=%0d",
                    frame_number,
                    frame_errors))

    endtask


    task automatic run_frame_pair(
        input int unsigned frame_number,
        input longint unsigned tx_address,
        input longint unsigned rx_address,
        input byte unsigned tx_payload_start,
        input byte unsigned rx_payload_start,
        output int unsigned frame_errors
    );

        eth_full_duplex_frame_seq frame_sequence;

        time tx_start_time;
        time tx_end_time;
        time rx_start_time;
        time rx_end_time;

        `uvm_info("FD_B2B_PAIR",
            $sformatf(
                "Starting FRAME=%0d TX_ADDR=%016h RX_ADDR=%016h TX_DATA=%02h..%02h RX_DATA=%02h..%02h",
                frame_number,
                tx_address,
                rx_address,
                tx_payload_start,
                tx_payload_start + 8'd63,
                rx_payload_start,
                rx_payload_start + 8'd63),
            UVM_NONE)


        clear_observation();


        for (int unsigned byte_index = 0;
             byte_index < 64;
             byte_index++) begin

            env.axi_ag.drv.mem[
                tx_address + byte_index] =
                    tx_payload_start +
                    byte_index[7:0];

            env.axi_ag.drv.mem[
                rx_address + byte_index] =
                    8'hA5;

        end


        frame_sequence =
            eth_full_duplex_frame_seq::type_id::create(
                $sformatf(
                    "frame_sequence_%0d",
                    frame_number));

        frame_sequence.tx_address =
            tx_address[31:0];

        frame_sequence.rx_address =
            rx_address[31:0];

        frame_sequence.frame_length =
            32'd64;


        fork

            watch_tx_frame(
                frame_number,
                tx_start_time,
                tx_end_time);


            frame_sequence.start(
                env.axil_ag.sqr);


            begin : rx_injection

                int unsigned timeout_cycles;

                timeout_cycles = 0;

                while ((rgmii_vif.tx_ctl !== 1'b1) &&
                       (timeout_cycles < 5000)) begin

                    @(posedge rgmii_vif.bfm_rx_clk);
                    timeout_cycles++;

                end

                if (rgmii_vif.tx_ctl !== 1'b1) begin

                    `uvm_error("FD_B2B_RX_START",
                        $sformatf(
                            "FRAME=%0d TX never became active",
                            frame_number))

                    rx_start_time = 0;
                    rx_end_time   = 0;

                end
                else begin

                    repeat (4)
                        @(posedge rgmii_vif.bfm_rx_clk);

                    drive_rx_frame(
                        rx_payload_start,
                        frame_number,
                        rx_start_time,
                        rx_end_time);

                end

            end

        join


        wait_for_pair_completion(frame_number);


        check_frame_pair(
            frame_number,
            tx_address,
            rx_address,
            tx_payload_start,
            rx_payload_start,
            tx_start_time,
            tx_end_time,
            rx_start_time,
            rx_end_time,
            frame_errors);

    endtask


    task run_phase(uvm_phase phase);

        eth_reset_seq reset_sequence;

        int unsigned frame_errors;
        int unsigned total_errors;

        phase.raise_objection(this);

        `uvm_info("FD_B2B",
            "Starting 4-frame Ethernet full-duplex back-to-back testcase",
            UVM_NONE)


        rgmii_vif.loopback_enable = 1'b0;
        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;


        reset_sequence =
            eth_reset_seq::type_id::create(
                "reset_sequence");

        reset_sequence.start(
            env.reset_ag.sqr);


        total_errors = 0;


        run_frame_pair(
            0,
            64'h0000_0000_0000_1000,
            64'h0000_0000_0000_5000,
            8'h00,
            8'h80,
            frame_errors);

        total_errors += frame_errors;


        run_frame_pair(
            1,
            64'h0000_0000_0000_2000,
            64'h0000_0000_0000_6000,
            8'h40,
            8'hC0,
            frame_errors);

        total_errors += frame_errors;


        run_frame_pair(
            2,
            64'h0000_0000_0000_3000,
            64'h0000_0000_0000_7000,
            8'h10,
            8'hA0,
            frame_errors);

        total_errors += frame_errors;


        run_frame_pair(
            3,
            64'h0000_0000_0000_4000,
            64'h0000_0000_0000_8000,
            8'h50,
            8'h20,
            frame_errors);

        total_errors += frame_errors;


        if (total_errors == 0)
            `uvm_info("FD_B2B_RESULT",
                "PASS: all 4 independent full-duplex frame pairs completed correctly through RGMII",
                UVM_NONE)
        else
            `uvm_error("FD_B2B_RESULT",
                $sformatf(
                    "FAIL: total functional errors=%0d",
                    total_errors))


        rgmii_vif.loopback_enable = 1'b1;
        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;


        phase.drop_objection(this);

    endtask

endclass
