
class eth_parallel_irq_csr_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_parallel_irq_csr_seq)

    bit wr;
    bit [31:0] addr, data;
    bit [1:0] resp;

    function new(string name = "eth_parallel_irq_csr_seq");
        super.new(name);
    endfunction

    task body();
        eth_axil_item tr;
        tr = eth_axil_item::type_id::create("parallel_irq_csr_item");

        start_item(tr);
        tr.write = wr;
        tr.addr  = addr;
        tr.data  = data;
        tr.strb  = 4'hF;
        finish_item(tr);

        resp = tr.resp;

        if (!wr)
            data = tr.data;
    endtask
endclass

class eth_tx_rx_parallel_irq_test extends eth_base_test;
    `uvm_component_utils(eth_tx_rx_parallel_irq_test)

    virtual eth_rgmii_if rgmii_vif;
    virtual eth_irq_if irq_vif;

    function new(string name = "eth_tx_rx_parallel_irq_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_irq_if)::get(
                this, "", "vif", irq_vif))
            `uvm_fatal("IRQ003_VIF", "Unable to obtain eth_irq_if")

        if (!uvm_config_db#(virtual eth_rgmii_if)::get(this, "", "vif", rgmii_vif))
            `uvm_fatal("PARALLEL_RGMII_VIF", "Unable to obtain eth_rgmii_if")
    endfunction

    function automatic logic [31:0] calculate_ethernet_fcs(
        input byte unsigned frame_bytes[$]);
        logic [31:0] crc;
        logic feedback;

        crc = 32'hFFFF_FFFF;
        foreach (frame_bytes[byte_index]) begin
            for (int unsigned bit_index = 0; bit_index < 8; bit_index++) begin
                feedback = crc[0] ^ frame_bytes[byte_index][bit_index];
                crc = crc >> 1;
                if (feedback)
                    crc = crc ^ 32'hEDB8_8320;
            end
        end
        return ~crc;
    endfunction

    task automatic drive_rgmii_byte(input byte unsigned data_byte);
        // At 1 Gb/s the low nibble is sampled on the rising edge and the high
        // nibble on the falling edge.  RX_ER is zero, so RX_CTL stays asserted.
        @(negedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= data_byte[3:0];
        rgmii_vif.bfm_rx_ctl <= 1'b1;

        @(posedge rgmii_vif.bfm_rx_clk);
        rgmii_vif.bfm_rxd    <= data_byte[7:4];
        rgmii_vif.bfm_rx_ctl <= 1'b1;
    endtask

    task automatic drive_independent_rx_frame(output time rx_start_time,
                                              output time rx_end_time);
        byte unsigned payload[$];
        logic [31:0] fcs;

        payload.delete();
        for (int unsigned byte_index = 0; byte_index < 64; byte_index++)
            payload.push_back(8'h80 + byte_index[7:0]);

        fcs = calculate_ethernet_fcs(payload);

        // Start after an idle edge so the MAC sees a clean RX_DV transition.
        @(negedge rgmii_vif.bfm_rx_clk);
        rx_start_time = $time;

        for (int unsigned preamble_index = 0; preamble_index < 7; preamble_index++)
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

        `uvm_info("PARALLEL_RX_BFM",
            $sformatf("Injected independent RX payload 80-BF with FCS=%08h", fcs),
            UVM_LOW)
    endtask

    task automatic watch_tx_frame(output time tx_start_time,
                                  output time tx_end_time);
        int unsigned timeout_cycles;

        tx_start_time = 0;
        tx_end_time   = 0;

        // Bound the observer so a missing TX frame becomes a test failure instead of a hung simulation.
        timeout_cycles = 0;
        while ((rgmii_vif.tx_ctl !== 1'b1) && (timeout_cycles < 2000)) begin
            @(posedge rgmii_vif.bfm_rx_clk);
            timeout_cycles++;
        end

        if (rgmii_vif.tx_ctl !== 1'b1) begin
            `uvm_error("PARALLEL_TX_TIMEOUT", "Timed out waiting for RGMII TX frame start")
            return;
        end

        tx_start_time = $time;
        timeout_cycles = 0;

        while ((rgmii_vif.tx_ctl !== 1'b0) && (timeout_cycles < 2000)) begin
            @(posedge rgmii_vif.bfm_rx_clk);
            timeout_cycles++;
        end

        if (rgmii_vif.tx_ctl !== 1'b0) begin
            `uvm_error("PARALLEL_TX_TIMEOUT", "Timed out waiting for RGMII TX frame end")
            return;
        end

        tx_end_time = $time;
    endtask

    task automatic clear_scenario_observation();
        env.axi_ag.drv.read_burst_count  = 0;
        env.axi_ag.drv.read_beat_count   = 0;
        env.axi_ag.drv.read_byte_count   = 0;
        env.axi_ag.drv.first_read_addr   = '0;
        env.axi_ag.drv.first_read_seen   = 1'b0;
        env.axi_ag.drv.read_error_seen   = 1'b0;

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

    task automatic prepare_scenario(input string scenario_name);
        eth_reset_seq reset_sequence;
        eth_parallel_dma_config_seq config_sequence;

        rgmii_vif.loopback_enable = 1'b0;
        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;

        reset_sequence = eth_reset_seq::type_id::create(
            $sformatf("reset_%s", scenario_name));
        reset_sequence.start(env.reset_ag.sqr);

        clear_scenario_observation();

        // Enable both completion interrupts, not DMA error IRQ.
        begin
            bit [31:0] irq_enable;
            irq_enable = 32'h0000_0003;
            irq003_access(1, 32'h0000_0008, irq_enable);
        end


        for (int unsigned byte_index = 0; byte_index < 64; byte_index++) begin
            env.axi_ag.drv.mem[64'h0000_0000_0000_1000 + byte_index] =
                byte_index[7:0];
            env.axi_ag.drv.mem[64'h0000_0000_0000_2000 + byte_index] =
                8'hA5;
        end

        config_sequence = eth_parallel_dma_config_seq::type_id::create(
            $sformatf("config_%s", scenario_name));
        config_sequence.start(env.axil_ag.sqr);
    endtask

    task automatic check_scenario(input string scenario_name,
                                  input time tx_start_time,
                                  input time tx_end_time,
                                  input time rx_start_time,
                                  input time rx_end_time);
        int unsigned error_count;
        time overlap_start;
        time overlap_end;

        error_count = 0;

        if (env.axi_ag.drv.read_byte_count != 64) begin
            error_count++;
            `uvm_error("PARALLEL_TX_DMA",
                $sformatf("%s expected 64 TX DMA read bytes, observed %0d",
                          scenario_name, env.axi_ag.drv.read_byte_count))
        end

        if (env.axi_ag.drv.write_byte_count != 64) begin
            error_count++;
            `uvm_error("PARALLEL_RX_DMA",
                $sformatf("%s expected 64 RX DMA write bytes, observed %0d",
                          scenario_name, env.axi_ag.drv.write_byte_count))
        end

        if (!env.axi_ag.drv.first_read_seen ||
            env.axi_ag.drv.first_read_addr !== 64'h0000_0000_0000_1000) begin
            error_count++;
            `uvm_error("PARALLEL_TX_ADDR",
                $sformatf("%s TX first read address invalid: %016h",
                          scenario_name, env.axi_ag.drv.first_read_addr))
        end

        if (!env.axi_ag.drv.first_write_seen ||
            env.axi_ag.drv.first_write_addr !== 64'h0000_0000_0000_2000) begin
            error_count++;
            `uvm_error("PARALLEL_RX_ADDR",
                $sformatf("%s RX first write address invalid: %016h",
                          scenario_name, env.axi_ag.drv.first_write_addr))
        end

        if (env.tx_axis_mon.observed_bytes.size() != 64) begin
            error_count++;
            `uvm_error("PARALLEL_TX_AXIS",
                $sformatf("%s expected 64 TX AXIS bytes, observed %0d",
                          scenario_name, env.tx_axis_mon.observed_bytes.size()))
        end
        else begin
            for (int unsigned byte_index = 0; byte_index < 64; byte_index++) begin
                if (env.tx_axis_mon.observed_bytes[byte_index] !== byte_index[7:0]) begin
                    error_count++;
                    `uvm_error("PARALLEL_TX_AXIS",
                        $sformatf("%s byte=%0d expected=%02h observed=%02h",
                                  scenario_name, byte_index, byte_index[7:0],
                                  env.tx_axis_mon.observed_bytes[byte_index]))
                end
            end
        end

        if (env.rx_axis_mon.observed_bytes.size() != 64) begin
            error_count++;
            `uvm_error("PARALLEL_RX_AXIS",
                $sformatf("%s expected 64 RX AXIS bytes, observed %0d",
                          scenario_name, env.rx_axis_mon.observed_bytes.size()))
        end
        else begin
            for (int unsigned byte_index = 0; byte_index < 64; byte_index++) begin
                if (env.rx_axis_mon.observed_bytes[byte_index] !==
                    (8'h80 + byte_index[7:0])) begin
                    error_count++;
                    `uvm_error("PARALLEL_RX_AXIS",
                        $sformatf("%s byte=%0d expected=%02h observed=%02h",
                                  scenario_name, byte_index,
                                  8'h80 + byte_index[7:0],
                                  env.rx_axis_mon.observed_bytes[byte_index]))
                end
            end
        end

        for (int unsigned byte_index = 0; byte_index < 64; byte_index++) begin
            if (!env.axi_ag.drv.mem.exists(64'h0000_0000_0000_2000 + byte_index) ||
                env.axi_ag.drv.mem[64'h0000_0000_0000_2000 + byte_index] !==
                (8'h80 + byte_index[7:0])) begin
                error_count++;
                `uvm_error("PARALLEL_RX_MEMORY",
                    $sformatf("%s ADDR=%016h expected=%02h observed=%02h",
                              scenario_name,
                              64'h0000_0000_0000_2000 + byte_index,
                              8'h80 + byte_index[7:0],
                              env.axi_ag.drv.mem[64'h0000_0000_0000_2000 + byte_index]))
            end
        end

        if (env.rgmii_ag.mon.tx_frame_count != 1 ||
            env.rgmii_ag.mon.tx_bytes.size() != 76 ||
            env.rgmii_ag.mon.tx_error_seen) begin
            error_count++;
            `uvm_error("PARALLEL_RGMII_TX",
                $sformatf("%s frames=%0d bytes=%0d tx_error=%0b",
                          scenario_name,
                          env.rgmii_ag.mon.tx_frame_count,
                          env.rgmii_ag.mon.tx_bytes.size(),
                          env.rgmii_ag.mon.tx_error_seen))
        end

        if (env.axi_ag.drv.read_error_seen || env.axi_ag.drv.write_error_seen) begin
            error_count++;
            `uvm_error("PARALLEL_AXI_PROTOCOL",
                $sformatf("%s AXI read_error=%0b write_error=%0b",
                          scenario_name,
                          env.axi_ag.drv.read_error_seen,
                          env.axi_ag.drv.write_error_seen))
        end

        if (tx_start_time > rx_start_time)
            overlap_start = tx_start_time;
        else
            overlap_start = rx_start_time;

        if (tx_end_time < rx_end_time)
            overlap_end = tx_end_time;
        else
            overlap_end = rx_end_time;

        // In addition to overlap, verify the intended start ordering for the directed scenarios.
        if ((scenario_name == "TX_FIRST") &&
            (tx_start_time != 0) && (rx_start_time != 0) &&
            !(tx_start_time < rx_start_time)) begin
            error_count++;
            `uvm_error("PARALLEL_ORDER",
                $sformatf("%s expected TX to start before RX: TX=%0t RX=%0t",
                          scenario_name, tx_start_time, rx_start_time))
        end

        if ((scenario_name == "RX_FIRST") &&
            (tx_start_time != 0) && (rx_start_time != 0) &&
            !(rx_start_time < tx_start_time)) begin
            error_count++;
            `uvm_error("PARALLEL_ORDER",
                $sformatf("%s expected RX to start before TX: RX=%0t TX=%0t",
                          scenario_name, rx_start_time, tx_start_time))
        end

        if ((tx_start_time == 0) || (tx_end_time == 0) ||
            (rx_start_time == 0) || (rx_end_time == 0) ||
            (overlap_end <= overlap_start)) begin
            error_count++;
            `uvm_error("PARALLEL_OVERLAP",
                $sformatf("%s no TX/RX overlap TX=[%0t,%0t] RX=[%0t,%0t]",
                          scenario_name, tx_start_time, tx_end_time,
                          rx_start_time, rx_end_time))
        end
        else begin
            `uvm_info("PARALLEL_OVERLAP",
                $sformatf("PASS %s TX=[%0t,%0t] RX=[%0t,%0t] overlap=%0t",
                          scenario_name, tx_start_time, tx_end_time,
                          rx_start_time, rx_end_time,
                          overlap_end-overlap_start),
                UVM_LOW)
        end

        if ((env.tx_axis_mon.tlast_count != 1) ||
            (env.tx_axis_mon.tlast_index != 63) ||
            env.tx_axis_mon.tuser_seen) begin
            error_count++;
            `uvm_error("PARALLEL_TX_STATUS",
                $sformatf("%s TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                          scenario_name, env.tx_axis_mon.tlast_count,
                          env.tx_axis_mon.tlast_index,
                          env.tx_axis_mon.tuser_seen))
        end

        if ((env.rx_axis_mon.tlast_count != 1) ||
            (env.rx_axis_mon.tlast_index != 63) ||
            env.rx_axis_mon.tuser_seen) begin
            error_count++;
            `uvm_error("PARALLEL_RX_STATUS",
                $sformatf("%s TLAST_COUNT=%0d TLAST_INDEX=%0d TUSER=%0b",
                          scenario_name, env.rx_axis_mon.tlast_count,
                          env.rx_axis_mon.tlast_index,
                          env.rx_axis_mon.tuser_seen))
        end

        if (error_count == 0)
            `uvm_info("PARALLEL_SCENARIO",
                $sformatf("PASS %s", scenario_name), UVM_LOW)
        else
            `uvm_error("PARALLEL_SCENARIO",
                $sformatf("FAIL %s errors=%0d", scenario_name, error_count))
    endtask

    task automatic wait_for_dma_completion(input string scenario_name);
        int unsigned timeout_cycles;
        timeout_cycles = 0;
        while (((env.axi_ag.drv.read_byte_count < 64) ||
                (env.axi_ag.drv.write_byte_count < 64) ||
                (env.rgmii_ag.mon.tx_frame_active)) &&
               (timeout_cycles < 10000)) begin
            @(posedge env.axi_ag.drv.vif.aclk);
            timeout_cycles++;
        end

        repeat (20) @(posedge env.axi_ag.drv.vif.aclk);

        if (timeout_cycles >= 10000)
            `uvm_error("PARALLEL_TIMEOUT",
                $sformatf("%s timed out waiting for TX/RX completion", scenario_name))
    endtask

    task automatic run_tx_first_scenario();
        eth_parallel_dma_start_seq start_sequence;
        time tx_start_time, tx_end_time, rx_start_time, rx_end_time;

        prepare_scenario("TX_FIRST");
        start_sequence = eth_parallel_dma_start_seq::type_id::create("start_tx_first");

        fork
            watch_tx_frame(tx_start_time, tx_end_time);
            start_sequence.start(env.axil_ag.sqr);
            begin
                wait (rgmii_vif.tx_ctl === 1'b1);
                repeat (8) @(posedge rgmii_vif.bfm_rx_clk);
                drive_independent_rx_frame(rx_start_time, rx_end_time);
            end
        join

        wait_for_dma_completion("TX_FIRST");
        irq003_check("TX_FIRST");
        check_scenario("TX_FIRST", tx_start_time, tx_end_time,
                       rx_start_time, rx_end_time);
    endtask

    task automatic run_rx_first_scenario();
        eth_parallel_dma_start_seq start_sequence;
        time tx_start_time, tx_end_time, rx_start_time, rx_end_time;

        prepare_scenario("RX_FIRST");
        start_sequence = eth_parallel_dma_start_seq::type_id::create("start_rx_first");

        fork
            watch_tx_frame(tx_start_time, tx_end_time);

            // Launch TX DMA setup immediately. Its CSR/DMA/MAC path
            // takes longer than the duration of one RX frame.
            start_sequence.start(env.axil_ag.sqr);

            begin
                // Delay independent RX injection until just before
                // TX reaches the physical RGMII interface.
                // 50 RX clock cycles ~= 400 ns at 125 MHz.
                repeat (50) @(posedge rgmii_vif.bfm_rx_clk);
                drive_independent_rx_frame(rx_start_time, rx_end_time);
            end
        join

        wait_for_dma_completion("RX_FIRST");
        irq003_check("RX_FIRST");
        check_scenario("RX_FIRST", tx_start_time, tx_end_time,
                       rx_start_time, rx_end_time);
    endtask

    task automatic run_simultaneous_scenario();
        eth_parallel_dma_start_seq start_sequence;
        time tx_start_time, tx_end_time, rx_start_time, rx_end_time;

        prepare_scenario("SIMULTANEOUS");
        start_sequence = eth_parallel_dma_start_seq::type_id::create("start_simultaneous");

        // Launch the TX enable request and independent RX frame concurrently.  Physical
        // RGMII start times can differ because TX must propagate through CSR/DMA/MAC logic.
        fork
            watch_tx_frame(tx_start_time, tx_end_time);
            start_sequence.start(env.axil_ag.sqr);
            begin
                // Align physical RX activity with TX MAC activity.
                wait (rgmii_vif.tx_ctl === 1'b1);
                drive_independent_rx_frame(rx_start_time, rx_end_time);
            end
        join

        wait_for_dma_completion("SIMULTANEOUS");
        irq003_check("SIMULTANEOUS");
        check_scenario("SIMULTANEOUS", tx_start_time, tx_end_time,
                       rx_start_time, rx_end_time);
    endtask


    task automatic irq003_access(
        input bit wr,
        input bit [31:0] addr,
        inout bit [31:0] data
    );
        eth_parallel_irq_csr_seq seq;

        seq = eth_parallel_irq_csr_seq::type_id::create(
            "irq003_csr_seq");

        seq.wr   = wr;
        seq.addr = addr;
        seq.data = data;

        seq.start(env.axil_ag.sqr);

        if (seq.resp !== 2'b00)
            `uvm_error("IRQ003_AXIL",
                $sformatf("CSR access failed addr=%08h resp=%02b",
                          addr, seq.resp))

        if (!wr)
            data = seq.data;
    endtask

    task automatic irq003_check(input string scenario_name);
        bit [31:0] value;
        bit failed;
        int unsigned cycles;

        failed = 0;
        cycles = 0;

        // Allow both completion events to reach the IRQ controller.
        while ((irq_vif.irq_tx_compl !== 1'b1 ||
                irq_vif.irq_rx_compl !== 1'b1) &&
               cycles < 2000) begin
            @(negedge irq_vif.clk);
            cycles++;
        end

        if (irq_vif.irq_tx_compl !== 1'b1 ||
            irq_vif.irq_rx_compl !== 1'b1) begin
            failed = 1;
            `uvm_error("IRQ003_TIMEOUT",
                $sformatf("%s TX_IRQ=%b RX_IRQ=%b",
                    scenario_name,
                    irq_vif.irq_tx_compl,
                    irq_vif.irq_rx_compl))
        end

        value = 0;
        irq003_access(0, 32'h0000_0008, value);

        if (value[2:0] !== 3'b011) begin
            failed = 1;
            `uvm_error("IRQ003_ENABLE",
                $sformatf("%s expected 011 got %03b",
                          scenario_name, value[2:0]))
        end

        value = 0;
        irq003_access(0, 32'h0000_000C, value);

        if (value[2:0] !== 3'b011 ||
            irq_vif.irq_dma_err !== 1'b0) begin
            failed = 1;
            `uvm_error("IRQ003_STATUS",
                $sformatf("%s expected 011 got %03b DMA_ERR=%b",
                    scenario_name, value[2:0],
                    irq_vif.irq_dma_err))
        end
        else
            `uvm_info("IRQ003_PASS",
                $sformatf("%s both TX/RX IRQs asserted", scenario_name),
                UVM_LOW)

        // W1C TX only. RX must remain asserted.
        value = 32'h0000_0001;
        irq003_access(1, 32'h0000_000C, value);

        repeat (5) @(negedge irq_vif.clk);

        value = 0;
        irq003_access(0, 32'h0000_000C, value);

        if (value[2:0] !== 3'b010 ||
            irq_vif.irq_tx_compl !== 1'b0 ||
            irq_vif.irq_rx_compl !== 1'b1) begin
            failed = 1;
            `uvm_error("IRQ003_TX_W1C",
                $sformatf("%s status=%03b TX_IRQ=%b RX_IRQ=%b",
                    scenario_name, value[2:0],
                    irq_vif.irq_tx_compl,
                    irq_vif.irq_rx_compl))
        end
        else
            `uvm_info("IRQ003_PASS",
                $sformatf("%s TX W1C cleared; RX remains HIGH",
                          scenario_name), UVM_LOW)

        // W1C RX. Both completion IRQs must now be LOW.
        value = 32'h0000_0002;
        irq003_access(1, 32'h0000_000C, value);

        repeat (5) @(negedge irq_vif.clk);

        value = 0;
        irq003_access(0, 32'h0000_000C, value);

        if (value[2:0] !== 3'b000 ||
            irq_vif.irq_tx_compl !== 1'b0 ||
            irq_vif.irq_rx_compl !== 1'b0 ||
            irq_vif.irq_dma_err !== 1'b0) begin
            failed = 1;
            `uvm_error("IRQ003_RX_W1C",
                $sformatf("%s status=%03b TX_IRQ=%b RX_IRQ=%b",
                    scenario_name, value[2:0],
                    irq_vif.irq_tx_compl,
                    irq_vif.irq_rx_compl))
        end
        else
            `uvm_info("IRQ003_PASS",
                $sformatf("%s RX W1C cleared; both IRQs LOW",
                          scenario_name), UVM_LOW)

        if (!failed)
            `uvm_info("IRQ003_PASS",
                $sformatf("IRQ-003 %s PASSED", scenario_name),
                UVM_LOW)
        else
            `uvm_error("IRQ003_FAIL",
                $sformatf("IRQ-003 %s FAILED", scenario_name))
    endtask

    task run_phase(uvm_phase phase);
        phase.raise_objection(this);

        `uvm_info("ETH_TX_RX_PARALLEL",
            "Starting independent full-duplex TX/RX scenarios", UVM_LOW)

        run_tx_first_scenario();
        run_rx_first_scenario();
        run_simultaneous_scenario();

        rgmii_vif.bfm_rx_ctl      = 1'b0;
        rgmii_vif.bfm_rxd         = 4'h0;
        rgmii_vif.loopback_enable = 1'b1;

        `uvm_info("ETH_TX_RX_PARALLEL",
            "Completed TX-first, RX-first, and simultaneous full-duplex scenarios",
            UVM_LOW)

        phase.drop_objection(this);
    endtask
endclass
