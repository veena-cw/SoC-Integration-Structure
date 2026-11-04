
// IRQ002_PATCH: AXI-Lite CSR access sequence
class eth_irq002_access_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_irq002_access_seq)

    bit wr;
    bit [31:0] addr, data;
    bit [1:0] resp;

    function new(string name="eth_irq002_access_seq");
        super.new(name);
    endfunction

    task body();
        eth_axil_item tr;
        tr = eth_axil_item::type_id::create("irq002_csr_item");

        start_item(tr);
        tr.write = wr;
        tr.addr = addr;
        tr.data = data;
        tr.strb = 4'hF;
        finish_item(tr);

        resp = tr.resp;
        if (!wr)
            data = tr.data;
    endtask
endclass

class eth_rx_basic_test extends eth_base_test;
    `uvm_component_utils(eth_rx_basic_test)

    function new(string name = "eth_rx_basic_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction


    // IRQ002_PATCH: RX interrupt verification
    virtual eth_irq_if irq_vif;

    task automatic irq002_reg_access(
        input bit wr,
        input bit [31:0] addr,
        inout bit [31:0] data,
        output bit failed
    );
        eth_irq002_access_seq seq;
        failed = 0;
        seq = eth_irq002_access_seq::type_id::create("irq002_csr_seq");
        seq.wr = wr;
        seq.addr = addr;
        seq.data = data;
        seq.start(env.axil_ag.sqr);

        if (seq.resp !== 2'b00) begin
            failed = 1;
            `uvm_error("IRQ002_AXIL",
                $sformatf("CSR access failed addr=%08h resp=%02b",
                          addr, seq.resp))
        end

        if (!wr)
            data = seq.data;
    endtask

    task automatic irq002_check();
        bit [31:0] value;
        bit failed, access_failed;
        int unsigned cycles;

        failed = 0;
        cycles = 0;

        while (irq_vif.irq_rx_compl !== 1'b1 &&
               cycles < 2000) begin
            @(negedge irq_vif.clk);
            cycles++;
        end

        if (irq_vif.irq_rx_compl !== 1'b1) begin
            failed = 1;
            `uvm_error("IRQ002_TIMEOUT",
                "RX IRQ did not assert within 2000 clock cycles")
        end
        else begin
            `uvm_info("IRQ002_PASS",
                "RX completion IRQ asserted", UVM_LOW)
        end

        value = 0;
        irq002_reg_access(0, 32'h0000_0008,
                          value, access_failed);

        if (access_failed || value[2:0] !== 3'b111) begin
            failed = 1;
            `uvm_error("IRQ002_ENABLE",
                $sformatf("INT_ENABLE expected 111 got %03b",
                          value[2:0]))
        end

        value = 0;
        irq002_reg_access(0, 32'h0000_000C,
                          value, access_failed);

        if (access_failed || value[1] !== 1'b1) begin
            failed = 1;
            `uvm_error("IRQ002_STATUS",
                $sformatf("RX status bit not set: %03b",
                          value[2:0]))
        end
        else begin
            `uvm_info("IRQ002_PASS",
                $sformatf("RX status set: %03b", value[2:0]),
                UVM_LOW)
        end

        // TX status may be set during TX-to-RX loopback.
        if (value[2] !== 1'b0 ||
            irq_vif.irq_dma_err !== 1'b0) begin
            failed = 1;
            `uvm_error("IRQ002_ERROR_IRQ",
                "Unexpected DMA error interrupt")
        end

        // Clear RX interrupt using write-one-to-clear.
        value = 32'h0000_0002;
        irq002_reg_access(1, 32'h0000_000C,
                          value, access_failed);

        if (access_failed)
            failed = 1;

        repeat (5) @(negedge irq_vif.clk);

        value = 0;
        irq002_reg_access(0, 32'h0000_000C,
                          value, access_failed);

        if (access_failed ||
            value[1] !== 1'b0 ||
            irq_vif.irq_rx_compl !== 1'b0) begin
            failed = 1;
            `uvm_error("IRQ002_W1C",
                $sformatf("RX clear failed status=%03b irq=%b",
                          value[2:0], irq_vif.irq_rx_compl))
        end
        else begin
            `uvm_info("IRQ002_PASS",
                "RX W1C cleared status and IRQ", UVM_LOW)
        end

        if (!failed)
            `uvm_info("IRQ002_PASS",
                "IRQ-002 RX INTERRUPT TEST PASSED", UVM_LOW)
        else
            `uvm_error("IRQ002_FAIL",
                "IRQ-002 verification failed")
    endtask

    task run_phase(uvm_phase phase);

        eth_reset_seq           reset_sequence;
        eth_rx_loopback_dma_seq rx_dma_sequence;

        int unsigned timeout_cycles;
        int unsigned byte_index;
        int unsigned rx_axis_error_count;
        int unsigned memory_error_count;

        if (!uvm_config_db#(virtual eth_irq_if)::get(
                this, "", "vif", irq_vif))
            `uvm_fatal("IRQ002_NOVIF",
                       "Interrupt interface unavailable")

        phase.raise_objection(this);

        `uvm_info("ETH_RX_BASIC",
            "Starting complete RGMII loopback and RX DMA verification",
            UVM_LOW)

        reset_sequence =
            eth_reset_seq::type_id::create("reset_sequence");

        reset_sequence.start(env.reset_ag.sqr);

        // Create the known Ethernet payload used for the TX-to-RX loopback.
        for (byte_index = 0; byte_index < 64; byte_index++)
            env.axi_ag.drv.mem[64'h0000_0000_0000_1000 + byte_index] =
                byte_index[7:0];

        // Clear the RX destination area before the DMA writes into it.
        for (byte_index = 0; byte_index < 64; byte_index++)
            env.axi_ag.drv.mem[64'h0000_0000_0000_2000 + byte_index] =
                8'hA5;

        rx_dma_sequence =
            eth_rx_loopback_dma_seq::type_id::create("rx_dma_sequence");

        begin
            bit [31:0] irq_en;
            bit irq_en_failed;

            irq_en = 32'h0000_0007;
            irq002_reg_access(
                1, 32'h0000_0008, irq_en, irq_en_failed);

            if (irq_en_failed)
                `uvm_fatal("IRQ002_ENABLE_WRITE",
                           "Failed to enable interrupts")
        end

        rx_dma_sequence.start(env.axil_ag.sqr);

        // Wait until the RX DMA has written the expected 64 payload bytes.
        timeout_cycles = 0;

        while ((env.axi_ag.drv.write_byte_count < 64) &&
               (timeout_cycles < 10000)) begin
            @(posedge env.axi_ag.drv.vif.aclk);
            timeout_cycles++;
        end

        if (env.axi_ag.drv.write_byte_count < 64) begin
            `uvm_error("RX_DMA_TIMEOUT",
                $sformatf(
                    "RX DMA did not write 64 bytes; observed %0d bytes",
                    env.axi_ag.drv.write_byte_count))
        end
        else begin

            // Check the packet produced by the MAC RX AXI-Stream interface.
            rx_axis_error_count = 0;

            if (env.rx_axis_mon.observed_bytes.size() != 64) begin
                `uvm_error("RX_AXIS_COUNT",
                    $sformatf(
                        "Expected 64 RX AXIS bytes, observed %0d",
                        env.rx_axis_mon.observed_bytes.size()))
            end
            else begin
                for (byte_index = 0; byte_index < 64; byte_index++) begin
                    if (env.rx_axis_mon.observed_bytes[byte_index] !==
                        byte_index[7:0]) begin

                        rx_axis_error_count++;

                        `uvm_error("RX_AXIS_DATA",
                            $sformatf(
                                "Byte %0d expected=%02h observed=%02h",
                                byte_index,
                                byte_index[7:0],
                                env.rx_axis_mon.observed_bytes[byte_index]))
                    end
                end
            end

            if ((env.rx_axis_mon.tlast_count != 1) ||
                (env.rx_axis_mon.tlast_index != 63)) begin
                `uvm_error("RX_AXIS_TLAST",
                    $sformatf(
                        "Expected one TLAST at index 63; count=%0d index=%0d",
                        env.rx_axis_mon.tlast_count,
                        env.rx_axis_mon.tlast_index))
            end

            if (env.rx_axis_mon.tuser_seen)
                `uvm_error("RX_AXIS_TUSER",
                    "RX TUSER asserted for the looped-back good frame")

            if ((env.rx_axis_mon.observed_bytes.size() == 64) &&
                (rx_axis_error_count == 0) &&
                (env.rx_axis_mon.tlast_count == 1) &&
                (env.rx_axis_mon.tlast_index == 63) &&
                !env.rx_axis_mon.tuser_seen)
                `uvm_info("RX_AXIS_CHECK",
                    "PASS complete 64-byte MAC RX AXI-Stream frame verified",
                    UVM_LOW)

            // Check where the RX DMA wrote the frame.
            if (!env.axi_ag.drv.first_write_seen)
                `uvm_error("RX_DMA_ADDR",
                    "No AXI write-address transaction was observed")
            else if (env.axi_ag.drv.first_write_addr !==
                     64'h0000_0000_0000_2000)
                `uvm_error("RX_DMA_ADDR",
                    $sformatf(
                        "Expected first RX DMA write address 0x2000, observed %016h",
                        env.axi_ag.drv.first_write_addr))
            else
                `uvm_info("RX_DMA_ADDR",
                    "PASS first RX DMA write address is 0x2000",
                    UVM_LOW)

            memory_error_count = 0;

            for (byte_index = 0; byte_index < 64; byte_index++) begin
                if (!env.axi_ag.drv.mem.exists(
                        64'h0000_0000_0000_2000 + byte_index)) begin

                    memory_error_count++;

                    `uvm_error("RX_DMA_MEMORY",
                        $sformatf(
                            "Destination byte %0d was not written",
                            byte_index))
                end
                else if (env.axi_ag.drv.mem[
                             64'h0000_0000_0000_2000 + byte_index]
                         !== byte_index[7:0]) begin

                    memory_error_count++;

                    `uvm_error("RX_DMA_MEMORY",
                        $sformatf(
                            "ADDR=%016h expected=%02h observed=%02h",
                            64'h0000_0000_0000_2000 + byte_index,
                            byte_index[7:0],
                            env.axi_ag.drv.mem[
                                64'h0000_0000_0000_2000 + byte_index]))
                end
            end

            if (memory_error_count == 0)
                `uvm_info("RX_DMA_MEMORY",
                    "PASS destination memory 0x2000-0x203F contains payload 00-3F",
                    UVM_LOW)

            if (env.axi_ag.drv.write_error_seen)
                `uvm_error("RX_DMA_PROTOCOL",
                    "AXI memory model detected an RX DMA write protocol error")
            else
                `uvm_info("RX_DMA_PROTOCOL",
                    "PASS no AXI write protocol error detected",
                    UVM_LOW)

            `uvm_info("RX_DMA_CHECK",
                $sformatf(
                    "SUMMARY bursts=%0d beats=%0d bytes=%0d first_addr=%016h memory_errors=%0d rx_axis_errors=%0d",
                    env.axi_ag.drv.write_burst_count,
                    env.axi_ag.drv.write_beat_count,
                    env.axi_ag.drv.write_byte_count,
                    env.axi_ag.drv.first_write_addr,
                    memory_error_count,
                    rx_axis_error_count),
                UVM_LOW)
        end

        irq002_check();
        phase.drop_objection(this);

    endtask
endclass
