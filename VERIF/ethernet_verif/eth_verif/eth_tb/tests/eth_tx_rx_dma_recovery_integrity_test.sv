// Full-duplex DMA error recovery with data-integrity and RGMII overlap checks.
// Reuses the existing recovery test's CSR, IRQ and descriptor infrastructure.
// No designer RTL changes are required.

class eth_tx_rx_dma_recovery_integrity_test
    extends eth_tx_rx_dma_error_recovery_test;

    `uvm_component_utils(eth_tx_rx_dma_recovery_integrity_test)

    function new(
        string name = "eth_tx_rx_dma_recovery_integrity_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    // Record a failure in addition to generating a UVM error.
    function void integrity_error(string id, string message);
        failed = 1'b1;
        `uvm_error(id, message)
    endfunction

    // Check the TX datapath only when TX DMA completed successfully.
    task automatic check_tx_integrity(input string label);
        int unsigned n;
        byte unsigned expected;
        byte unsigned actual;

        n = env.tx_axis_mon.observed_bytes.size();

        if (n != 64) begin
            integrity_error("DMA_INT_TX_AXIS",
                $sformatf("%s: TX AXIS expected 64 bytes, got %0d",
                          label, n));
        end
        else begin
            for (int unsigned i = 0; i < 64; i++) begin
                expected = i[7:0];
                actual = env.tx_axis_mon.observed_bytes[i];

                if (actual !== expected)
                    integrity_error("DMA_INT_TX_AXIS",
                        $sformatf(
                            "%s: TX AXIS byte[%0d] expected=%02h actual=%02h",
                            label, i, expected, actual));
            end
        end

        if (env.tx_axis_mon.tlast_count != 1 ||
            env.tx_axis_mon.tlast_index != 63 ||
            env.tx_axis_mon.tuser_seen) begin
            integrity_error("DMA_INT_TX_META",
                $sformatf(
                    "%s: TX TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    label,
                    env.tx_axis_mon.tlast_count,
                    env.tx_axis_mon.tlast_index,
                    env.tx_axis_mon.tuser_seen));
        end

        if (env.rgmii_ag.mon.tx_frame_count != 1 ||
            env.rgmii_ag.mon.tx_bytes.size() != 76 ||
            env.rgmii_ag.mon.tx_error_seen) begin
            integrity_error("DMA_INT_RGMII",
                $sformatf(
                    "%s: TX frames=%0d RGMII bytes=%0d error=%0b",
                    label,
                    env.rgmii_ag.mon.tx_frame_count,
                    env.rgmii_ag.mon.tx_bytes.size(),
                    env.rgmii_ag.mon.tx_error_seen));
        end
        else begin
            // 8 preamble/SFD bytes + 64 payload bytes + 4 FCS bytes.
            for (int unsigned i = 0; i < 64; i++) begin
                expected = i[7:0];
                actual = env.rgmii_ag.mon.tx_bytes[i + 8];

                if (actual !== expected)
                    integrity_error("DMA_INT_RGMII_DATA",
                        $sformatf(
                            "%s: RGMII payload[%0d] expected=%02h actual=%02h",
                            label, i, expected, actual));
            end
        end

        if (env.axi_ag.drv.read_byte_count != 64 ||
            !env.axi_ag.drv.first_read_seen ||
            env.axi_ag.drv.first_read_addr != 64'h1000) begin
            integrity_error("DMA_INT_TX_AXI",
                $sformatf(
                    "%s: TX AXI bytes=%0d first_addr=%016h seen=%0b",
                    label,
                    env.axi_ag.drv.read_byte_count,
                    env.axi_ag.drv.first_read_addr,
                    env.axi_ag.drv.first_read_seen));
        end

        `uvm_info("DMA_INT_TX",
            $sformatf("%s: TX integrity checks completed", label),
            UVM_LOW)
    endtask

    // Check the RX datapath only when RX DMA completed successfully.
    task automatic check_rx_integrity(input string label);
        int unsigned n;
        byte unsigned expected;
        byte unsigned actual;
        longint unsigned address;

        n = env.rx_axis_mon.observed_bytes.size();

        if (n != 64) begin
            integrity_error("DMA_INT_RX_AXIS",
                $sformatf("%s: RX AXIS expected 64 bytes, got %0d",
                          label, n));
        end
        else begin
            for (int unsigned i = 0; i < 64; i++) begin
                expected = 8'h80 + i[7:0];
                actual = env.rx_axis_mon.observed_bytes[i];

                if (actual !== expected)
                    integrity_error("DMA_INT_RX_AXIS",
                        $sformatf(
                            "%s: RX AXIS byte[%0d] expected=%02h actual=%02h",
                            label, i, expected, actual));
            end
        end

        if (env.rx_axis_mon.tlast_count != 1 ||
            env.rx_axis_mon.tlast_index != 63 ||
            env.rx_axis_mon.tuser_seen) begin
            integrity_error("DMA_INT_RX_META",
                $sformatf(
                    "%s: RX TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                    label,
                    env.rx_axis_mon.tlast_count,
                    env.rx_axis_mon.tlast_index,
                    env.rx_axis_mon.tuser_seen));
        end

        for (int unsigned i = 0; i < 64; i++) begin
            address = 64'h2000 + i;
            expected = 8'h80 + i[7:0];

            if (!env.axi_ag.drv.mem.exists(address)) begin
                integrity_error("DMA_INT_RX_MEM",
                    $sformatf("%s: missing RX memory address=%016h",
                              label, address));
            end
            else begin
                actual = env.axi_ag.drv.mem[address];

                if (actual !== expected)
                    integrity_error("DMA_INT_RX_MEM",
                        $sformatf(
                            "%s: RX memory[%016h] expected=%02h actual=%02h",
                            label, address, expected, actual));
            end
        end

        if (env.axi_ag.drv.write_byte_count != 64 ||
            !env.axi_ag.drv.first_write_seen ||
            env.axi_ag.drv.first_write_addr != 64'h2000) begin
            integrity_error("DMA_INT_RX_AXI",
                $sformatf(
                    "%s: RX AXI bytes=%0d first_addr=%016h seen=%0b",
                    label,
                    env.axi_ag.drv.write_byte_count,
                    env.axi_ag.drv.first_write_addr,
                    env.axi_ag.drv.first_write_seen));
        end

        `uvm_info("DMA_INT_RX",
            $sformatf("%s: RX integrity checks completed", label),
            UVM_LOW)
    endtask

    task automatic check_overlap(
        input string label,
        input time tx_start_time,
        input time tx_end_time,
        input time rx_start_time,
        input time rx_end_time
    );
        time overlap_start;
        time overlap_end;

        overlap_start = (tx_start_time > rx_start_time)
                      ? tx_start_time : rx_start_time;

        overlap_end = (tx_end_time < rx_end_time)
                    ? tx_end_time : rx_end_time;

        if (tx_start_time == 0 ||
            tx_end_time == 0 ||
            rx_start_time == 0 ||
            rx_end_time == 0 ||
            overlap_end <= overlap_start) begin

            integrity_error("DMA_INT_OVERLAP",
                $sformatf(
                    "%s: no RGMII overlap TX=[%0t,%0t] RX=[%0t,%0t]",
                    label,
                    tx_start_time, tx_end_time,
                    rx_start_time, rx_end_time));
        end
        else begin
            `uvm_info("DMA_INT_OVERLAP",
                $sformatf(
                    "%s: PASS overlap=%0t TX=[%0t,%0t] RX=[%0t,%0t]",
                    label,
                    overlap_end - overlap_start,
                    tx_start_time, tx_end_time,
                    rx_start_time, rx_end_time),
                UVM_NONE)
        end
    endtask

    // One full-duplex transaction pair.
    // RX is independently injected even if TX DMA encounters SLVERR.
    task automatic run_integrity_pair(
        input string label,
        input bit inject_rd,
        input bit inject_wr,
        input bit [3:0] expected_rd_error,
        input bit [3:0] expected_wr_error
    );
        eth_parallel_dma_config_seq config_seq;
        eth_parallel_dma_start_seq start_seq;

        int unsigned rd_before;
        int unsigned wr_before;
        int unsigned read_inject_before;
        int unsigned write_inject_before;
        int unsigned cycles;

        time tx_start_time;
        time tx_end_time;
        time rx_start_time;
        time rx_end_time;

        bit tx_success;
        bit rx_success;

        rd_before = rd_count;
        wr_before = wr_count;

        read_inject_before =
            env.axi_ag.drv.injected_read_error_count;
        write_inject_before =
            env.axi_ag.drv.injected_write_error_count;

        tx_start_time = 0;
        tx_end_time = 0;
        rx_start_time = 0;
        rx_end_time = 0;

        rgmii_vif.bfm_rx_ctl = 1'b0;
        rgmii_vif.bfm_rxd = 4'h0;

        clear_observation();

        for (int unsigned i = 0; i < 64; i++) begin
            env.axi_ag.drv.mem[64'h1000 + i] = i[7:0];
            env.axi_ag.drv.mem[64'h2000 + i] = 8'hA5;
        end

        env.axi_ag.drv.inject_read_error = inject_rd;
        env.axi_ag.drv.injected_rresp = 2'b10;
        env.axi_ag.drv.inject_read_beat = 0;

        env.axi_ag.drv.inject_write_error = inject_wr;
        env.axi_ag.drv.injected_bresp = 2'b10;

        `uvm_info("DMA_INT_ROUND",
            $sformatf(
                "START %s: read_error=%0b write_error=%0b",
                label, inject_rd, inject_wr),
            UVM_NONE)

        config_seq = eth_parallel_dma_config_seq::type_id::create(
            "dma_integrity_config");
        config_seq.start(env.axil_ag.sqr);

        start_seq = eth_parallel_dma_start_seq::type_id::create(
            "dma_integrity_start");

        fork
            begin : start_dma_thread
                start_seq.start(env.axil_ag.sqr);
            end

            begin : tx_observation_thread
                if (!inject_rd)
                    watch_tx_frame(tx_start_time, tx_end_time);
            end

            begin : rx_injection_thread
                if (!inject_rd) begin
                    // Synchronize the independent RX injection to TX activity.
                    cycles = 0;

                    while (rgmii_vif.tx_ctl !== 1'b1 &&
                           cycles < 5000) begin
                        @(posedge rgmii_vif.bfm_rx_clk);
                        cycles++;
                    end

                    if (rgmii_vif.tx_ctl !== 1'b1)
                        integrity_error("DMA_INT_TX_START",
                            $sformatf(
                                "%s: TX did not start before RX injection",
                                label));
                    else begin
                        repeat (4)
                            @(posedge rgmii_vif.bfm_rx_clk);

                        drive_rx_frame(rx_start_time, rx_end_time);
                    end
                end
                else begin
                    // A read SLVERR may prevent any TX RGMII frame.
                    // RX must still operate independently.
                    repeat (8)
                        @(posedge rgmii_vif.bfm_rx_clk);

                    drive_rx_frame(rx_start_time, rx_end_time);
                end
            end
        join

        wait_status(rd_before + 1, wr_before + 1);

        // Allow AXIS/RGMII monitors to complete their final updates.
        repeat (20)
            @(negedge desc_vif.clk);

        tx_success = 1'b0;
        rx_success = 1'b0;

        if (rd_count > rd_before) begin
            if (rd_errors[rd_before] !== expected_rd_error)
                integrity_error("DMA_INT_RD_STATUS",
                    $sformatf(
                        "%s: TX error expected=%0h actual=%0h",
                        label,
                        expected_rd_error,
                        rd_errors[rd_before]));
            else
                tx_success = (expected_rd_error == 0);
        end

        if (wr_count > wr_before) begin
            if (wr_errors[wr_before] !== expected_wr_error)
                integrity_error("DMA_INT_WR_STATUS",
                    $sformatf(
                        "%s: RX error expected=%0h actual=%0h",
                        label,
                        expected_wr_error,
                        wr_errors[wr_before]));
            else
                rx_success = (expected_wr_error == 0);
        end

        if (inject_rd &&
            env.axi_ag.drv.injected_read_error_count <=
                read_inject_before)
            integrity_error("DMA_INT_INJECTION",
                $sformatf("%s: read SLVERR was not injected", label));

        if (inject_wr &&
            env.axi_ag.drv.injected_write_error_count <=
                write_inject_before)
            integrity_error("DMA_INT_INJECTION",
                $sformatf("%s: write SLVERR was not injected", label));

        if (!inject_rd &&
            env.axi_ag.drv.injected_read_error_count !=
                read_inject_before)
            integrity_error("DMA_INT_INJECTION",
                $sformatf("%s: unexpected read error injection", label));

        if (!inject_wr &&
            env.axi_ag.drv.injected_write_error_count !=
                write_inject_before)
            integrity_error("DMA_INT_INJECTION",
                $sformatf("%s: unexpected write error injection", label));

        if (tx_success)
            check_tx_integrity(label);

        if (rx_success)
            check_rx_integrity(label);

        if (tx_success)
            check_overlap(label,
                          tx_start_time, tx_end_time,
                          rx_start_time, rx_end_time);

        if (inject_rd || inject_wr)
            check_irq_and_clear();
        else
            check_no_error_irq();

        `uvm_info("DMA_INT_ROUND",
            $sformatf(
                "END %s: RD=%0d WR=%0d TX_OK=%0b RX_OK=%0b",
                label, rd_count, wr_count,
                tx_success, rx_success),
            UVM_NONE)
    endtask

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_seq;
        bit [31:0] enable_irq;

        phase.raise_objection(this);

        failed = 0;
        rd_count = 0;
        wr_count = 0;
        rd_errors.delete();
        wr_errors.delete();

        rgmii_vif.loopback_enable = 1'b0;
        rgmii_vif.bfm_rx_ctl = 1'b0;
        rgmii_vif.bfm_rxd = 4'h0;

        reset_seq = eth_reset_seq::type_id::create(
            "dma_integrity_reset");
        reset_seq.start(env.reset_ag.sqr);

        fork
            begin : integrity_descriptor_monitor
                forever begin
                    @(posedge desc_vif.clk);

                    if (desc_vif.rd_sts_valid === 1'b1) begin
                        rd_errors.push_back(desc_vif.rd_sts_error);
                        rd_count++;

                        `uvm_info("DMA_INT_DESC",
                            $sformatf(
                                "TX completion=%0d error=%0h",
                                rd_count, desc_vif.rd_sts_error),
                            UVM_LOW)
                    end

                    if (desc_vif.wr_sts_valid === 1'b1) begin
                        wr_errors.push_back(desc_vif.wr_sts_error);
                        wr_count++;

                        `uvm_info("DMA_INT_DESC",
                            $sformatf(
                                "RX completion=%0d error=%0h",
                                wr_count, desc_vif.wr_sts_error),
                            UVM_LOW)
                    end
                end
            end
        join_none

        enable_irq = 32'h7;
        csr_access(1, 32'h8, enable_irq);

        run_integrity_pair(
            "TX_ERROR_RX_OK", 1, 0, 4'h4, 4'h0);

        run_integrity_pair(
            "TX_RECOVERY_RX_OK", 0, 0, 4'h0, 4'h0);

        run_integrity_pair(
            "RX_ERROR_TX_OK", 0, 1, 4'h0, 4'h6);

        run_integrity_pair(
            "RX_RECOVERY_TX_OK", 0, 0, 4'h0, 4'h0);

        env.axi_ag.drv.inject_read_error = 0;
        env.axi_ag.drv.inject_write_error = 0;

        rgmii_vif.bfm_rx_ctl = 0;
        rgmii_vif.bfm_rxd = 0;
        rgmii_vif.loopback_enable = 1;

        if (rd_count != 4 || wr_count != 4)
            integrity_error("DMA_INT_COMPLETIONS",
                $sformatf(
                    "Expected 4 TX and 4 RX completions; got TX=%0d RX=%0d",
                    rd_count, wr_count));

        if (failed)
            `uvm_error("DMA_INTEGRITY_FAIL",
                "Full-duplex DMA recovery/data-integrity testcase FAILED")
        else
            `uvm_info("DMA_INTEGRITY_PASS",
                "Full-duplex DMA recovery/data-integrity testcase PASSED",
                UVM_NONE)

        phase.drop_objection(this);
    endtask

endclass
