
class eth_rx_only_csr_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_rx_only_csr_seq)

    bit wr;
    bit [31:0] addr, data;
    bit [1:0] resp;

    function new(string name = "eth_rx_only_csr_seq");
        super.new(name);
    endfunction

    task body();
        eth_axil_item tr;
        tr = eth_axil_item::type_id::create("rx_only_csr_item");
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

class eth_rx_only_dma_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_rx_only_dma_seq)

    bit [31:0] rx_base;
    int unsigned rx_length;

    function new(string name = "eth_rx_only_dma_seq");
        super.new(name);
        rx_base   = 32'h0000_2000;
        rx_length = 64;
    endfunction

    task automatic axil_write(
        bit [31:0] register_address,
        bit [31:0] write_data
    );
        eth_axil_item tr;

        tr = eth_axil_item::type_id::create(
            $sformatf("rx_var_wr_%08h", register_address));

        start_item(tr);

        tr.write = 1'b1;
        tr.addr  = register_address;
        tr.data  = write_data;
        tr.strb  = 4'hF;

        finish_item(tr);

        if (tr.resp != 2'b00)
            `uvm_error("TC014_CFG",
                $sformatf(
                    "AXI-Lite write failed ADDR=%08h DATA=%08h RESP=%0h",
                    register_address, write_data, tr.resp))
    endtask


    task body();

        // RX destination address
        axil_write(32'h0000_001C, rx_base);
        axil_write(32'h0000_0020, 32'h0000_0000);

        // RX descriptor length
        axil_write(32'h0000_0024, rx_length);

        // Enable RX completion interrupt only.
        axil_write(32'h0000_0008, 32'h0000_0002);

        // Start RX DMA only.
        axil_write(32'h0000_0000, 32'h0000_0002);

    endtask
endclass


class eth_rx_only_irq_test extends eth_base_test;
    `uvm_component_utils(eth_rx_only_irq_test)

    virtual eth_rgmii_if rgmii_vif;
    virtual eth_irq_if irq_vif;

    int unsigned frame_len;
    longint unsigned rx_base;

    function new(
        string name = "eth_rx_only_irq_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction


    function void build_phase(uvm_phase phase);

        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_irq_if)::get(
                this, "", "vif", irq_vif))
            `uvm_fatal("RXONLY_VIF", "Unable to obtain eth_irq_if")


        if (!uvm_config_db#(virtual eth_rgmii_if)::get(
                this, "", "vif", rgmii_vif))
            `uvm_fatal("TC014_VIF",
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
                    crc[0] ^
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

        // 1 Gb/s RGMII:
        // low nibble on rising edge,
        // high nibble on falling edge.

        @(negedge rgmii_vif.bfm_rx_clk);

        rgmii_vif.bfm_rxd    <= data_byte[3:0];
        rgmii_vif.bfm_rx_ctl <= 1'b1;

        @(posedge rgmii_vif.bfm_rx_clk);

        rgmii_vif.bfm_rxd    <= data_byte[7:4];
        rgmii_vif.bfm_rx_ctl <= 1'b1;

    endtask


    task automatic drive_rx_frame(
        input int unsigned payload_length
    );

        byte unsigned payload[$];
        logic [31:0] fcs;

        payload.delete();

        for (int unsigned i = 0;
             i < payload_length;
             i++)
            payload.push_back(i[7:0]);

        fcs = calculate_ethernet_fcs(payload);

        `uvm_info("TC014_RGMII",
            $sformatf(
                "Injecting RX frame payload=%0d FCS=%08h",
                payload_length,
                fcs),
            UVM_LOW)

        // Clean idle -> RX_DV transition
        @(negedge rgmii_vif.bfm_rx_clk);

        // Preamble
        for (int unsigned i = 0; i < 7; i++)
            drive_rgmii_byte(8'h55);

        // SFD
        drive_rgmii_byte(8'hD5);

        // Payload
        foreach (payload[i])
            drive_rgmii_byte(payload[i]);

        // Ethernet FCS, least significant byte first
        drive_rgmii_byte(fcs[7:0]);
        drive_rgmii_byte(fcs[15:8]);
        drive_rgmii_byte(fcs[23:16]);
        drive_rgmii_byte(fcs[31:24]);

        // End frame
        @(negedge rgmii_vif.bfm_rx_clk);

        rgmii_vif.bfm_rx_ctl <= 1'b0;
        rgmii_vif.bfm_rxd    <= 4'h0;

        `uvm_info("TC014_RGMII",
            $sformatf(
                "Completed RX frame payload=%0d",
                payload_length),
            UVM_LOW)

    endtask


    task automatic clear_observation();

        env.axi_ag.drv.write_burst_count = 0;
        env.axi_ag.drv.write_beat_count  = 0;
        env.axi_ag.drv.write_byte_count  = 0;

        env.axi_ag.drv.first_write_addr = '0;
        env.axi_ag.drv.first_write_seen = 1'b0;

        env.axi_ag.drv.write_error_seen = 1'b0;

        env.rx_axis_mon.observed_bytes.delete();

        env.rx_axis_mon.transfer_count = 0;
        env.rx_axis_mon.tlast_count    = 0;
        env.rx_axis_mon.tlast_index    = 0;
        env.rx_axis_mon.tuser_seen     = 1'b0;

    endtask



    task automatic rx_only_csr(
        input bit wr,
        input bit [31:0] addr,
        inout bit [31:0] data
    );
        eth_rx_only_csr_seq seq;
        seq = eth_rx_only_csr_seq::type_id::create("rx_only_csr");
        seq.wr   = wr;
        seq.addr = addr;
        seq.data = data;
        seq.start(env.axil_ag.sqr);

        if (seq.resp !== 2'b00)
            `uvm_error("RXONLY_AXIL",
                $sformatf("CSR access failed addr=%08h resp=%02b",
                          addr, seq.resp))

        if (!wr)
            data = seq.data;
    endtask

    task automatic check_rx_only_irq();
        bit [31:0] value;
        int unsigned cycles;
        bit failed;

        failed = 0;
        cycles = 0;

        // The RX completion status is sticky until W1C.
        while (irq_vif.irq_rx_compl !== 1'b1 &&
               cycles < 2000) begin
            @(negedge irq_vif.clk);
            cycles++;
        end

        if (irq_vif.irq_rx_compl !== 1'b1) begin
            failed = 1;
            `uvm_error("RXONLY_TIMEOUT", "RX IRQ did not assert")
        end
        else
            `uvm_info("RXONLY_PASS", "RX completion IRQ asserted", UVM_LOW)

        value = 0;
        rx_only_csr(0, 32'h0000_0008, value);

        if (value[2:0] !== 3'b010) begin
            failed = 1;
            `uvm_error("RXONLY_ENABLE",
                $sformatf("Expected INT_ENABLE=010 got=%03b",
                          value[2:0]))
        end

        value = 0;
        rx_only_csr(0, 32'h0000_000C, value);

        if (value[2:0] !== 3'b010) begin
            failed = 1;
            `uvm_error("RXONLY_STATUS",
                $sformatf("Expected INT_STATUS=010 got=%03b",
                          value[2:0]))
        end

        if (irq_vif.irq_tx_compl !== 1'b0 ||
            irq_vif.irq_dma_err !== 1'b0) begin
            failed = 1;
            `uvm_error("RXONLY_TX",
                "Unexpected TX completion IRQ or DMA error IRQ")
        end

        // Clear RX completion interrupt using W1C.
        value = 32'h0000_0002;
        rx_only_csr(1, 32'h0000_000C, value);

        repeat (5) @(negedge irq_vif.clk);

        value = 0;
        rx_only_csr(0, 32'h0000_000C, value);

        if (value[2:0] !== 3'b000 ||
            irq_vif.irq_rx_compl !== 1'b0 ||
            irq_vif.irq_tx_compl !== 1'b0) begin
            failed = 1;
            `uvm_error("RXONLY_W1C",
                $sformatf("W1C failed status=%03b rx_irq=%b tx_irq=%b",
                    value[2:0],
                    irq_vif.irq_rx_compl,
                    irq_vif.irq_tx_compl))
        end
        else
            `uvm_info("RXONLY_PASS",
                "RX interrupt cleared, TX interrupt LOW", UVM_LOW)

        if (!failed)
            `uvm_info("RXONLY_PASS",
                "RX-ONLY INTERRUPT TEST PASSED", UVM_LOW)
        else
            `uvm_error("RXONLY_FAIL",
                "RX-only interrupt verification failed")
    endtask

    task run_phase(uvm_phase phase);

        eth_reset_seq reset_sequence;
        eth_rx_only_dma_seq rx_sequence;

        int unsigned timeout_cycles;
        int unsigned expected_beats;

        int unsigned axis_errors;
        int unsigned memory_errors;
        int unsigned guard_errors;

        phase.raise_objection(this);

        rx_base = 64'h0000_0000_0000_2000;

        if (!$value$plusargs("FRAME_LEN=%d", frame_len))
            frame_len = 64;

        if (frame_len == 0)
            `uvm_fatal("TC014_LEN",
                "FRAME_LEN must be greater than zero")

        expected_beats = (frame_len + 7) / 8;

        `uvm_info("TC014_START",
            $sformatf(
                "ETH_TC_014 RX variable length test FRAME_LEN=%0d EXPECTED_AXI_BEATS=%0d",
                frame_len,
                expected_beats),
            UVM_LOW)


        // --------------------------------------------------
        // Reset
        // --------------------------------------------------

        reset_sequence =
            eth_reset_seq::type_id::create("reset_sequence");

        reset_sequence.start(env.reset_ag.sqr);


        // --------------------------------------------------
        // Disable physical loopback.
        // This testcase independently drives RGMII RX.
        // --------------------------------------------------

        rgmii_vif.loopback_enable = 1'b0;

        rgmii_vif.bfm_rx_ctl = 1'b0;
        rgmii_vif.bfm_rxd    = 4'h0;


        clear_observation();


        // --------------------------------------------------
        // Initialize destination memory plus guard bytes.
        //
        // A5 = unwritten marker.
        //
        // Extra bytes after FRAME_LEN detect an RX DMA
        // over-write caused by incorrect final WSTRB.
        // --------------------------------------------------

        for (int unsigned i = 0;
             i < frame_len + 16;
             i++)
            env.axi_ag.drv.mem[rx_base + i] = 8'hA5;


        // --------------------------------------------------
        // Program RX DMA
        // --------------------------------------------------

        rx_sequence =
            eth_rx_only_dma_seq::type_id::create(
                "rx_sequence");

        rx_sequence.rx_base   = rx_base[31:0];
        rx_sequence.rx_length = frame_len;

        rx_sequence.start(env.axil_ag.sqr);


        // --------------------------------------------------
        // Inject independent Ethernet frame
        // --------------------------------------------------

        drive_rx_frame(frame_len);


        // --------------------------------------------------
        // Wait for exactly the useful RX DMA bytes.
        //
        // write_byte_count counts only WSTRB-enabled lanes
        // in the AXI memory model.
        // --------------------------------------------------

        timeout_cycles = 0;

        while ((env.axi_ag.drv.write_byte_count < frame_len) &&
               (timeout_cycles < 20000)) begin

            @(posedge env.axi_ag.drv.vif.aclk);

            timeout_cycles++;

        end


        if (env.axi_ag.drv.write_byte_count < frame_len)
            `uvm_error("TC014_TIMEOUT",
                $sformatf(
                    "RX DMA timeout expected=%0d useful bytes observed=%0d",
                    frame_len,
                    env.axi_ag.drv.write_byte_count))


        // Allow final B response / monitor accounting to settle.
        repeat (20)
            @(posedge env.axi_ag.drv.vif.aclk);


        // ==================================================
        // CHECK 1 : RX AXI-STREAM BYTE COUNT
        // ==================================================

        axis_errors = 0;

        if (env.rx_axis_mon.observed_bytes.size() != frame_len) begin

            axis_errors++;

            `uvm_error("TC014_AXIS_COUNT",
                $sformatf(
                    "Expected %0d RX AXIS bytes observed=%0d",
                    frame_len,
                    env.rx_axis_mon.observed_bytes.size()))

        end
        else begin

            `uvm_info("TC014_AXIS_COUNT",
                $sformatf(
                    "PASS RX AXIS byte count = %0d",
                    frame_len),
                UVM_LOW)

        end


        // ==================================================
        // CHECK 2 : RX AXI-STREAM PAYLOAD
        // ==================================================

        if (env.rx_axis_mon.observed_bytes.size() == frame_len) begin

            for (int unsigned i = 0;
                 i < frame_len;
                 i++) begin

                if (env.rx_axis_mon.observed_bytes[i] !==
                    i[7:0]) begin

                    axis_errors++;

                    `uvm_error("TC014_AXIS_DATA",
                        $sformatf(
                            "INDEX=%0d EXPECTED=%02h OBSERVED=%02h",
                            i,
                            i[7:0],
                            env.rx_axis_mon.observed_bytes[i]))

                end
            end

        end


        // ==================================================
        // CHECK 3 : TLAST
        // ==================================================

        if ((env.rx_axis_mon.tlast_count != 1) ||
            (env.rx_axis_mon.tlast_index !=
             (frame_len - 1))) begin

            axis_errors++;

            `uvm_error("TC014_TLAST",
                $sformatf(
                    "Expected one TLAST at index %0d count=%0d observed_index=%0d",
                    frame_len - 1,
                    env.rx_axis_mon.tlast_count,
                    env.rx_axis_mon.tlast_index))

        end
        else begin

            `uvm_info("TC014_TLAST",
                $sformatf(
                    "PASS TLAST index = %0d",
                    frame_len - 1),
                UVM_LOW)

        end


        // ==================================================
        // CHECK 4 : TUSER
        // ==================================================

        if (env.rx_axis_mon.tuser_seen) begin

            axis_errors++;

            `uvm_error("TC014_TUSER",
                "RX TUSER asserted for good Ethernet frame")

        end
        else begin

            `uvm_info("TC014_TUSER",
                "PASS no RX TUSER error",
                UVM_LOW)

        end


        // ==================================================
        // CHECK 5 : RX DMA START ADDRESS
        // ==================================================

        if (!env.axi_ag.drv.first_write_seen) begin

            `uvm_error("TC014_AXI_ADDR",
                "No RX DMA AXI write address observed")

        end
        else if (env.axi_ag.drv.first_write_addr !==
                 rx_base) begin

            `uvm_error("TC014_AXI_ADDR",
                $sformatf(
                    "Expected first write address=%016h observed=%016h",
                    rx_base,
                    env.axi_ag.drv.first_write_addr))

        end
        else begin

            `uvm_info("TC014_AXI_ADDR",
                $sformatf(
                    "PASS first RX DMA address = %016h",
                    rx_base),
                UVM_LOW)

        end


        // ==================================================
        // CHECK 6 : AXI WRITE BEATS
        // ==================================================

        if (env.axi_ag.drv.write_beat_count !=
            expected_beats) begin

            `uvm_error("TC014_AXI_BEATS",
                $sformatf(
                    "Expected %0d AXI write beats observed=%0d",
                    expected_beats,
                    env.axi_ag.drv.write_beat_count))

        end
        else begin

            `uvm_info("TC014_AXI_BEATS",
                $sformatf(
                    "PASS AXI write beats = %0d",
                    expected_beats),
                UVM_LOW)

        end


        // ==================================================
        // CHECK 7 : USEFUL AXI WRITE BYTES
        //
        // This is the key RX-side boundary check.
        // The memory driver counts only WSTRB asserted lanes.
        // ==================================================

        if (env.axi_ag.drv.write_byte_count != frame_len) begin

            `uvm_error("TC014_AXI_BYTES",
                $sformatf(
                    "Expected %0d useful AXI write bytes observed=%0d",
                    frame_len,
                    env.axi_ag.drv.write_byte_count))

        end
        else begin

            `uvm_info("TC014_AXI_BYTES",
                $sformatf(
                    "PASS useful AXI write bytes = %0d",
                    frame_len),
                UVM_LOW)

        end


        // ==================================================
        // CHECK 8 : DESTINATION MEMORY
        // ==================================================

        memory_errors = 0;

        for (int unsigned i = 0;
             i < frame_len;
             i++) begin

            if (!env.axi_ag.drv.mem.exists(rx_base + i)) begin

                memory_errors++;

                `uvm_error("TC014_MEMORY",
                    $sformatf(
                        "Destination address %016h missing",
                        rx_base + i))

            end
            else if (env.axi_ag.drv.mem[rx_base + i] !==
                     i[7:0]) begin

                memory_errors++;

                `uvm_error("TC014_MEMORY",
                    $sformatf(
                        "ADDR=%016h EXPECTED=%02h OBSERVED=%02h",
                        rx_base + i,
                        i[7:0],
                        env.axi_ag.drv.mem[rx_base + i]))

            end
        end


        if (memory_errors == 0)
            `uvm_info("TC014_MEMORY",
                $sformatf(
                    "PASS destination memory contains all %0d payload bytes",
                    frame_len),
                UVM_LOW)


        // ==================================================
        // CHECK 9 : POST-FRAME GUARD
        //
        // This catches incorrect WSTRB on a partial final beat.
        //
        // Example:
        //
        // FRAME_LEN=65
        //
        // final AXI beat should write only one useful byte.
        // Addresses 0x2041 onward must remain A5.
        // ==================================================

        guard_errors = 0;

        for (int unsigned i = 0;
             i < 8;
             i++) begin

            if (env.axi_ag.drv.mem[rx_base + frame_len + i]
                !== 8'hA5) begin

                guard_errors++;

                `uvm_error("TC014_GUARD",
                    $sformatf(
                        "RX DMA overwrote guard address=%016h data=%02h",
                        rx_base + frame_len + i,
                        env.axi_ag.drv.mem[
                            rx_base + frame_len + i]))

            end
        end


        if (guard_errors == 0)
            `uvm_info("TC014_GUARD",
                "PASS bytes after RX descriptor length were not overwritten",
                UVM_LOW)


        // ==================================================
        // CHECK 10 : AXI WRITE PROTOCOL
        // ==================================================

        if (env.axi_ag.drv.write_error_seen)

            `uvm_error("TC014_AXI_PROTOCOL",
                "AXI memory model detected RX DMA write error")

        else

            `uvm_info("TC014_AXI_PROTOCOL",
                "PASS no RX DMA AXI write protocol error",
                UVM_LOW)


        // ==================================================
        // SUMMARY
        // ==================================================

        `uvm_info("TC014_SUMMARY",
            $sformatf(
                "FRAME_LEN=%0d AXI_BURSTS=%0d AXI_BEATS=%0d AXI_USEFUL_BYTES=%0d RX_AXIS_BYTES=%0d MEMORY_ERRORS=%0d GUARD_ERRORS=%0d AXIS_ERRORS=%0d",
                frame_len,
                env.axi_ag.drv.write_burst_count,
                env.axi_ag.drv.write_beat_count,
                env.axi_ag.drv.write_byte_count,
                env.rx_axis_mon.observed_bytes.size(),
                memory_errors,
                guard_errors,
                axis_errors),
            UVM_LOW)


        if ((axis_errors == 0) &&
            (memory_errors == 0) &&
            (guard_errors == 0) &&
            (env.axi_ag.drv.write_byte_count == frame_len) &&
            (env.axi_ag.drv.write_beat_count == expected_beats) &&
            env.axi_ag.drv.first_write_seen &&
            (env.axi_ag.drv.first_write_addr == rx_base) &&
            !env.axi_ag.drv.write_error_seen) begin

            `uvm_info("TC014_RESULT",
                $sformatf(
                    "PASS ETH_TC_014 COMPLETE RX END-TO-END FRAME_LEN=%0d",
                    frame_len),
                UVM_LOW)

        end
        else begin

            `uvm_error("TC014_RESULT",
                $sformatf(
                    "FAIL ETH_TC_014 FRAME_LEN=%0d",
                    frame_len))

        end


        check_rx_only_irq();

        phase.drop_objection(this);

    endtask

endclass



