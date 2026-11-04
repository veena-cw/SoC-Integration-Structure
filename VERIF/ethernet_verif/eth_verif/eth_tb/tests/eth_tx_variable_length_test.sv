class eth_tx_variable_length_seq extends eth_tx_dma_seq;

    `uvm_object_utils(eth_tx_variable_length_seq)

    bit [31:0] tx_base;
    bit [31:0] tx_length;

    function new(string name = "eth_tx_variable_length_seq");
        super.new(name);

        tx_base   = 32'h0000_1000;
        tx_length = 32'd64;
    endfunction


    task body();

        `uvm_info("TC013_CFG",
                  $sformatf(
                    "Programming TX_BASE=0x%08h TX_LENGTH=%0d",
                    tx_base,
                    tx_length),
                  UVM_LOW)

        // TX source address low.
        axil_write(32'h0000_0010, tx_base);

        // TX source address high.
        axil_write(32'h0000_0014, 32'h0000_0000);

        // TX descriptor length.
        axil_write(32'h0000_0018, tx_length);

        // Commit TX DMA configuration.
        axil_write(32'h0000_0000, 32'h0000_0001);

    endtask

endclass



class eth_tx_variable_length_test extends eth_base_test;

    `uvm_component_utils(eth_tx_variable_length_test)

    int unsigned frame_len;


    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction


    // ------------------------------------------------------------
    // Ethernet CRC32
    //
    // Reflected Ethernet CRC:
    // polynomial = 0xEDB88320
    // initial    = 0xFFFFFFFF
    // final XOR  = 0xFFFFFFFF
    //
    // This function updates CRC with one payload byte.
    // ------------------------------------------------------------

    function automatic bit [31:0] crc32_byte(
        input bit [31:0] crc_in,
        input byte unsigned data_in
    );

        bit [31:0] crc;
        byte unsigned data_byte;

        crc       = crc_in;
        data_byte = data_in;

        for (int bit_index = 0;
             bit_index < 8;
             bit_index++) begin

            if ((crc[0] ^ data_byte[bit_index]) == 1'b1)
                crc = (crc >> 1) ^ 32'hEDB88320;
            else
                crc = crc >> 1;

        end

        return crc;

    endfunction



    task run_phase(uvm_phase phase);

        eth_reset_seq               reset_seq;
        eth_tx_variable_length_seq  tx_seq;

        int unsigned timeout_cycles;

        int unsigned byte_errors;
        int unsigned rgmii_errors;

        int unsigned expected_axi_beats;
        int unsigned expected_axi_bytes;

        int unsigned expected_rgmii_bytes;
        int unsigned expected_padded_len;

        int unsigned frame_count_before;

        bit [31:0] expected_crc;

        byte unsigned expected_fcs0;
        byte unsigned expected_fcs1;
        byte unsigned expected_fcs2;
        byte unsigned expected_fcs3;


        phase.raise_objection(this);


        // ============================================================
        // FRAME LENGTH
        // ============================================================

        frame_len = 64;

        if (!$value$plusargs("FRAME_LEN=%d", frame_len)) begin

            `uvm_info("TC013",
                      "No +FRAME_LEN supplied; using default FRAME_LEN=64",
                      UVM_LOW)

        end


        `uvm_info("TC013",
                  $sformatf(
                    "START ETH_TC_013 TX VARIABLE FRAME LENGTH = %0d bytes",
                    frame_len),
                  UVM_LOW)


        if (frame_len == 0) begin

            `uvm_fatal("TC013",
                       "FRAME_LEN must be greater than zero")

        end



        // ============================================================
        // RESET
        // ============================================================

        reset_seq = eth_reset_seq::type_id::create("reset_seq");

        reset_seq.start(env.reset_ag.sqr);



        // ============================================================
        // PRELOAD TX SOURCE MEMORY
        //
        // Pattern:
        //
        // byte 0 = 00
        // byte 1 = 01
        // ...
        // byte FF = FF
        // next byte wraps to 00
        // ============================================================

        for (int unsigned i = 0;
             i < frame_len;
             i++) begin

            env.axi_ag.drv.mem[
                64'h0000_0000_0000_1000 + i
            ] = byte'(i);

        end


        `uvm_info("TC013",
                  $sformatf(
                    "Preloaded %0d TX payload bytes at address 0x1000",
                    frame_len),
                  UVM_LOW)



        // ============================================================
        // SAVE CURRENT RGMII FRAME COUNT
        //
        // This prevents us from accidentally using an old frame.
        // ============================================================

        frame_count_before =
            env.rgmii_ag.mon.tx_frame_count;



        // ============================================================
        // PROGRAM TX DMA
        // ============================================================

        tx_seq =
            eth_tx_variable_length_seq::type_id::create(
                "tx_seq");

        tx_seq.tx_base   = 32'h0000_1000;
        tx_seq.tx_length = frame_len;

        tx_seq.start(env.axil_ag.sqr);



        // ============================================================
        // WAIT FOR TX AXIS PAYLOAD
        // ============================================================

        timeout_cycles = 0;

        while ((env.tx_axis_mon.transfer_count < frame_len) &&
               (timeout_cycles < 200000)) begin

            @(posedge env.tx_axis_mon.vif.aclk);

            timeout_cycles++;

        end


        if (env.tx_axis_mon.transfer_count < frame_len) begin

            `uvm_error("TC013_AXIS_TIMEOUT",
                       $sformatf(
                         "Timeout waiting for TX AXIS payload EXP=%0d GOT=%0d",
                         frame_len,
                         env.tx_axis_mon.transfer_count))

        end



        // Allow several cycles to expose accidental extra AXIS data.
        repeat (20)
            @(posedge env.tx_axis_mon.vif.aclk);



        // ============================================================
        // CHECK 1
        // EXACT TX AXIS BYTE COUNT
        // ============================================================

        if (env.tx_axis_mon.transfer_count != frame_len) begin

            `uvm_error("TC013_AXIS_COUNT",
                       $sformatf(
                         "TX AXIS byte count mismatch EXP=%0d GOT=%0d",
                         frame_len,
                         env.tx_axis_mon.transfer_count))

        end
        else begin

            `uvm_info("TC013_AXIS_COUNT",
                      $sformatf(
                        "PASS TX AXIS byte count = %0d",
                        frame_len),
                      UVM_LOW)

        end



        // ============================================================
        // CHECK 2
        // TX AXIS PAYLOAD
        // ============================================================

        byte_errors = 0;


        if (env.tx_axis_mon.observed_bytes.size()
            != frame_len) begin

            byte_errors++;

            `uvm_error("TC013_AXIS_DATA",
                       $sformatf(
                         "TX AXIS stored byte count mismatch EXP=%0d GOT=%0d",
                         frame_len,
                         env.tx_axis_mon.observed_bytes.size()))

        end


        if (env.tx_axis_mon.observed_bytes.size()
            >= frame_len) begin

            for (int unsigned i = 0;
                 i < frame_len;
                 i++) begin

                if (env.tx_axis_mon.observed_bytes[i]
                    !== byte'(i)) begin

                    byte_errors++;

                    `uvm_error("TC013_AXIS_DATA",
                               $sformatf(
                                 "Payload mismatch INDEX=%0d EXP=%02h GOT=%02h",
                                 i,
                                 byte'(i),
                                 env.tx_axis_mon.observed_bytes[i]))

                end

            end

        end


        if (byte_errors == 0) begin

            `uvm_info("TC013_AXIS_DATA",
                      $sformatf(
                        "PASS all %0d TX AXIS payload bytes match memory",
                        frame_len),
                      UVM_LOW)

        end



        // ============================================================
        // CHECK 3
        // TLAST
        // ============================================================

        if (env.tx_axis_mon.tlast_count != 1) begin

            `uvm_error("TC013_TLAST",
                       $sformatf(
                         "TLAST count mismatch EXP=1 GOT=%0d",
                         env.tx_axis_mon.tlast_count))

        end
        else if (env.tx_axis_mon.tlast_index
                 != (frame_len - 1)) begin

            `uvm_error("TC013_TLAST",
                       $sformatf(
                         "TLAST index mismatch EXP=%0d GOT=%0d",
                         frame_len - 1,
                         env.tx_axis_mon.tlast_index))

        end
        else begin

            `uvm_info("TC013_TLAST",
                      $sformatf(
                        "PASS TLAST exactly once at byte index %0d",
                        frame_len - 1),
                      UVM_LOW)

        end



        // ============================================================
        // CHECK 4
        // TUSER
        // ============================================================

        if (env.tx_axis_mon.tuser_seen) begin

            `uvm_error("TC013_TUSER",
                       "Unexpected TUSER assertion")

        end
        else begin

            `uvm_info("TC013_TUSER",
                      "PASS TUSER remained deasserted",
                      UVM_LOW)

        end



        // ============================================================
        // CHECK 5
        // AXI DMA READ
        //
        // AXI data width is currently 64 bits = 8 bytes.
        //
        // Therefore:
        //
        // 63 bytes -> 8 beats -> 64 bus bytes
        // 64 bytes -> 8 beats -> 64 bus bytes
        // 65 bytes -> 9 beats -> 72 bus bytes
        //
        // Large transfers can be split into multiple AXI bursts.
        // ============================================================

        expected_axi_beats =
            (frame_len + 7) / 8;

        expected_axi_bytes =
            expected_axi_beats * 8;


        if (!env.axi_ag.drv.first_read_seen) begin

            `uvm_error("TC013_AXI",
                       "TX DMA generated no AXI read request")

        end
        else begin

            if (env.axi_ag.drv.first_read_addr !=
                64'h0000_0000_0000_1000) begin

                `uvm_error("TC013_AXI",
                           $sformatf(
                             "First AXI read address mismatch EXP=0x1000 GOT=%016h",
                             env.axi_ag.drv.first_read_addr))

            end
            else begin

                `uvm_info("TC013_AXI",
                          "PASS first AXI read address = 0x1000",
                          UVM_LOW)

            end

        end



        if (env.axi_ag.drv.read_beat_count !=
            expected_axi_beats) begin

            `uvm_error("TC013_AXI_BEATS",
                       $sformatf(
                         "AXI read beat count mismatch EXP=%0d GOT=%0d",
                         expected_axi_beats,
                         env.axi_ag.drv.read_beat_count))

        end
        else begin

            `uvm_info("TC013_AXI_BEATS",
                      $sformatf(
                        "PASS AXI read beats = %0d",
                        expected_axi_beats),
                      UVM_LOW)

        end



        if (env.axi_ag.drv.read_byte_count !=
            expected_axi_bytes) begin

            `uvm_error("TC013_AXI_BYTES",
                       $sformatf(
                         "AXI bus byte count mismatch EXP=%0d GOT=%0d",
                         expected_axi_bytes,
                         env.axi_ag.drv.read_byte_count))

        end
        else begin

            `uvm_info("TC013_AXI_BYTES",
                      $sformatf(
                        "PASS AXI bus bytes = %0d",
                        expected_axi_bytes),
                      UVM_LOW)

        end



        `uvm_info("TC013_AXI",
                  $sformatf(
                    "AXI SUMMARY requested_len=%0d expected_beats=%0d observed_bursts=%0d observed_beats=%0d bus_bytes=%0d",
                    frame_len,
                    expected_axi_beats,
                    env.axi_ag.drv.read_burst_count,
                    env.axi_ag.drv.read_beat_count,
                    env.axi_ag.drv.read_byte_count),
                  UVM_LOW)



        // ============================================================
        // WAIT FOR COMPLETE RGMII FRAME
        //
        // IMPORTANT:
        //
        // tx_frame_count alone indicates that a frame was detected.
        // We must also wait until tx_frame_active goes LOW.
        //
        // Otherwise the test can terminate while the MAC is still
        // transmitting the RGMII frame.
        // ============================================================

        timeout_cycles = 0;


        // Wait for a NEW frame.
        while ((env.rgmii_ag.mon.tx_frame_count
                <= frame_count_before) &&
               (timeout_cycles < 200000)) begin

            @(posedge env.tx_axis_mon.vif.aclk);

            timeout_cycles++;

        end


        if (env.rgmii_ag.mon.tx_frame_count
            <= frame_count_before) begin

            `uvm_error("TC013_RGMII_TIMEOUT",
                       "No new RGMII TX frame was detected")

        end
        else begin

            `uvm_info("TC013_RGMII",
                      "RGMII TX frame started",
                      UVM_LOW)

        end



        // Wait until the complete RGMII frame ends.
        timeout_cycles = 0;

        while (env.rgmii_ag.mon.tx_frame_active &&
               (timeout_cycles < 200000)) begin

            @(posedge env.tx_axis_mon.vif.aclk);

            timeout_cycles++;

        end


        if (env.rgmii_ag.mon.tx_frame_active) begin

            `uvm_error("TC013_RGMII_TIMEOUT",
                       "Timeout waiting for RGMII TX frame end")

        end
        else begin

            `uvm_info("TC013_RGMII",
                      "RGMII TX frame completed",
                      UVM_LOW)

        end



        // Give monitor one additional cycle to commit final byte.
        repeat (2)
            @(posedge env.tx_axis_mon.vif.aclk);



        // ============================================================
        // RGMII FRAME FORMAT
        //
        // Current MAC configuration uses TX padding enabled.
        //
        // Captured RGMII frame:
        //
        // [0..6]              7 x 55 preamble
        // [7]                 D5 SFD
        // [8 .. 8+N-1]        N original payload bytes
        // [8+N .. 8+P-1]      Zero padding, when N < 60
        // [8+P .. 8+P+3]      4 FCS bytes
        //
        // P = max(N, 60)
        // expected RGMII bytes = P + 12
        // ============================================================

        // TX MAC padding enabled: minimum 60 bytes before FCS.
        expected_padded_len =
            (frame_len < 60) ? 60 : frame_len;

        expected_rgmii_bytes =
            expected_padded_len + 12;

        rgmii_errors = 0;



        // ============================================================
        // CHECK 6
        // COMPLETE RGMII BYTE COUNT
        // ============================================================

        if (env.rgmii_ag.mon.tx_bytes.size()
            != expected_rgmii_bytes) begin

            rgmii_errors++;

            `uvm_error("TC013_RGMII_COUNT",
                       $sformatf(
                         "Complete RGMII byte count mismatch EXP=%0d GOT=%0d",
                         expected_rgmii_bytes,
                         env.rgmii_ag.mon.tx_bytes.size()))

        end
        else begin

            `uvm_info("TC013_RGMII_COUNT",
                      $sformatf(
                        "PASS complete RGMII byte count = %0d",
                        expected_rgmii_bytes),
                      UVM_LOW)

        end



        // ============================================================
        // CHECK 7
        // PREAMBLE
        // ============================================================

        if (env.rgmii_ag.mon.tx_bytes.size() >= 7) begin

            for (int unsigned i = 0;
                 i < 7;
                 i++) begin

                if (env.rgmii_ag.mon.tx_bytes[i]
                    !== 8'h55) begin

                    rgmii_errors++;

                    `uvm_error("TC013_RGMII_PREAMBLE",
                               $sformatf(
                                 "Preamble mismatch INDEX=%0d EXP=55 GOT=%02h",
                                 i,
                                 env.rgmii_ag.mon.tx_bytes[i]))

                end

            end

        end
        else begin

            rgmii_errors++;

            `uvm_error("TC013_RGMII_PREAMBLE",
                       "Insufficient RGMII bytes for preamble check")

        end



        // ============================================================
        // CHECK 8
        // SFD
        // ============================================================

        if (env.rgmii_ag.mon.tx_bytes.size() > 7) begin

            if (env.rgmii_ag.mon.tx_bytes[7]
                !== 8'hD5) begin

                rgmii_errors++;

                `uvm_error("TC013_RGMII_SFD",
                           $sformatf(
                             "SFD mismatch EXP=D5 GOT=%02h",
                             env.rgmii_ag.mon.tx_bytes[7]))

            end
            else begin

                `uvm_info("TC013_RGMII_SFD",
                          "PASS SFD = D5",
                          UVM_LOW)

            end

        end
        else begin

            rgmii_errors++;

            `uvm_error("TC013_RGMII_SFD",
                       "No RGMII byte available for SFD check")

        end



        // ============================================================
        // CHECK 9
        // COMPLETE RGMII PAYLOAD
        // ============================================================

        if (env.rgmii_ag.mon.tx_bytes.size()
            >= (8 + frame_len)) begin

            for (int unsigned i = 0;
                 i < frame_len;
                 i++) begin

                if (env.rgmii_ag.mon.tx_bytes[8+i]
                    !== byte'(i)) begin

                    rgmii_errors++;

                    `uvm_error("TC013_RGMII_DATA",
                               $sformatf(
                                 "RGMII payload mismatch INDEX=%0d EXP=%02h GOT=%02h",
                                 i,
                                 byte'(i),
                                 env.rgmii_ag.mon.tx_bytes[8+i]))

                end

            end

        end
        else begin

            rgmii_errors++;

            `uvm_error("TC013_RGMII_DATA",
                       $sformatf(
                         "Insufficient RGMII bytes for payload EXP_AT_LEAST=%0d GOT=%0d",
                         8 + frame_len,
                         env.rgmii_ag.mon.tx_bytes.size()))

        end



        // ============================================================
        // CHECK MAC ZERO PADDING
        // ============================================================

        if (env.rgmii_ag.mon.tx_bytes.size()
            >= 8 + expected_padded_len) begin

            for (int unsigned i = frame_len;
                 i < expected_padded_len; i++) begin

                if (env.rgmii_ag.mon.tx_bytes[8+i]
                    !== 8'h00) begin

                    rgmii_errors++;

                    `uvm_error("TC013_RGMII_PAD",
                        $sformatf(
                            "Padding mismatch INDEX=%0d EXP=00 GOT=%02h",
                            i,
                            env.rgmii_ag.mon.tx_bytes[8+i]))
                end
            end

        end
        else begin

            rgmii_errors++;

            `uvm_error("TC013_RGMII_PAD",
                "Insufficient RGMII bytes to verify padding")

        end

        // ============================================================
        // CALCULATE EXPECTED ETHERNET FCS
        //
        // CRC covers original payload and any zero padding.
        // Preamble and SFD are not included.
        // ============================================================

        expected_crc = 32'hFFFF_FFFF;

        for (int unsigned i = 0;
             i < frame_len;
             i++) begin

            expected_crc =
                crc32_byte(expected_crc,
                           byte'(i));

        end

        // Include zero padding in the Ethernet FCS.
        for (int unsigned i = frame_len;
             i < expected_padded_len; i++) begin

            expected_crc =
                crc32_byte(expected_crc, 8'h00);

        end

        expected_crc = ~expected_crc;


        // Ethernet transmits reflected CRC low byte first.
        expected_fcs0 = expected_crc[7:0];
        expected_fcs1 = expected_crc[15:8];
        expected_fcs2 = expected_crc[23:16];
        expected_fcs3 = expected_crc[31:24];



        // ============================================================
        // CHECK 10
        // FCS
        // ============================================================

        if (env.rgmii_ag.mon.tx_bytes.size()
            >= expected_rgmii_bytes) begin

            if (env.rgmii_ag.mon.tx_bytes[8+expected_padded_len+0]
                !== expected_fcs0) begin

                rgmii_errors++;

                `uvm_error("TC013_RGMII_FCS",
                           $sformatf(
                             "FCS byte0 mismatch EXP=%02h GOT=%02h",
                             expected_fcs0,
                             env.rgmii_ag.mon.tx_bytes[
                                 8+expected_padded_len+0]))

            end


            if (env.rgmii_ag.mon.tx_bytes[8+expected_padded_len+1]
                !== expected_fcs1) begin

                rgmii_errors++;

                `uvm_error("TC013_RGMII_FCS",
                           $sformatf(
                             "FCS byte1 mismatch EXP=%02h GOT=%02h",
                             expected_fcs1,
                             env.rgmii_ag.mon.tx_bytes[
                                 8+expected_padded_len+1]))

            end


            if (env.rgmii_ag.mon.tx_bytes[8+expected_padded_len+2]
                !== expected_fcs2) begin

                rgmii_errors++;

                `uvm_error("TC013_RGMII_FCS",
                           $sformatf(
                             "FCS byte2 mismatch EXP=%02h GOT=%02h",
                             expected_fcs2,
                             env.rgmii_ag.mon.tx_bytes[
                                 8+expected_padded_len+2]))

            end


            if (env.rgmii_ag.mon.tx_bytes[8+expected_padded_len+3]
                !== expected_fcs3) begin

                rgmii_errors++;

                `uvm_error("TC013_RGMII_FCS",
                           $sformatf(
                             "FCS byte3 mismatch EXP=%02h GOT=%02h",
                             expected_fcs3,
                             env.rgmii_ag.mon.tx_bytes[
                                 8+expected_padded_len+3]))

            end


            if (rgmii_errors == 0) begin

                `uvm_info("TC013_RGMII_FCS",
                          $sformatf(
                            "PASS Ethernet FCS = %02h %02h %02h %02h",
                            expected_fcs0,
                            expected_fcs1,
                            expected_fcs2,
                            expected_fcs3),
                          UVM_LOW)

            end

        end
        else begin

            rgmii_errors++;

            `uvm_error("TC013_RGMII_FCS",
                       "Incomplete RGMII frame prevents FCS check")

        end



        // ============================================================
        // CHECK 11
        // RGMII TX ERROR
        // ============================================================

        if (env.rgmii_ag.mon.tx_error_seen) begin

            rgmii_errors++;

            `uvm_error("TC013_RGMII_ERROR",
                       "RGMII TX error indication observed")

        end
        else begin

            `uvm_info("TC013_RGMII_ERROR",
                      "PASS no RGMII TX error indication",
                      UVM_LOW)

        end



        // ============================================================
        // COMPLETE SUMMARY
        // ============================================================

        `uvm_info("TC013_SUMMARY",
                  $sformatf(
                    "FRAME_LEN=%0d AXI_BURSTS=%0d AXI_BEATS=%0d AXI_BUS_BYTES=%0d TX_AXIS_BYTES=%0d RGMII_BYTES=%0d EXPECTED_RGMII_BYTES=%0d AXIS_ERRORS=%0d RGMII_ERRORS=%0d",
                    frame_len,
                    env.axi_ag.drv.read_burst_count,
                    env.axi_ag.drv.read_beat_count,
                    env.axi_ag.drv.read_byte_count,
                    env.tx_axis_mon.transfer_count,
                    env.rgmii_ag.mon.tx_bytes.size(),
                    expected_rgmii_bytes,
                    byte_errors,
                    rgmii_errors),
                  UVM_LOW)



        // ============================================================
        // FINAL RESULT
        //
        // PASS is intentionally strict.
        //
        // We do not accept a partial RGMII frame.
        // ============================================================

        if ((env.tx_axis_mon.transfer_count == frame_len) &&

            (env.tx_axis_mon.observed_bytes.size()
                == frame_len) &&

            (byte_errors == 0) &&

            (env.tx_axis_mon.tlast_count == 1) &&

            (env.tx_axis_mon.tlast_index
                == frame_len - 1) &&

            (!env.tx_axis_mon.tuser_seen) &&

            env.axi_ag.drv.first_read_seen &&

            (env.axi_ag.drv.first_read_addr ==
                64'h0000_0000_0000_1000) &&

            (env.axi_ag.drv.read_beat_count ==
                expected_axi_beats) &&

            (env.axi_ag.drv.read_byte_count ==
                expected_axi_bytes) &&

            (env.rgmii_ag.mon.tx_frame_count >
                frame_count_before) &&

            (!env.rgmii_ag.mon.tx_frame_active) &&

            (env.rgmii_ag.mon.tx_bytes.size()
                == expected_rgmii_bytes) &&

            (!env.rgmii_ag.mon.tx_error_seen) &&

            (rgmii_errors == 0)) begin


            `uvm_info("TC013_RESULT",
                      $sformatf(
                        "PASS ETH_TC_013 COMPLETE END-TO-END FRAME_LEN=%0d",
                        frame_len),
                      UVM_LOW)

        end
        else begin

            `uvm_error("TC013_RESULT",
                       $sformatf(
                         "FAIL ETH_TC_013 COMPLETE END-TO-END FRAME_LEN=%0d",
                         frame_len))

        end



        phase.drop_objection(this);

    endtask

endclass
