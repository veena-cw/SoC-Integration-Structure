class eth_rx_decerr_csr_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_rx_decerr_csr_seq)

    bit failed;
    bit [31:0] status_before;
    bit [31:0] status_after;

    function new(string name = "eth_rx_decerr_csr_seq");
        super.new(name);
    endfunction

    task automatic access_reg(
        input bit write_access,
        input bit [31:0] address,
        inout bit [31:0] data_value
    );
        eth_axil_item item;

        item = eth_axil_item::type_id::create("rx_decerr_csr_item");

        start_item(item);
        item.write = write_access;
        item.addr  = address;
        item.data  = data_value;
        item.strb  = 4'hF;
        finish_item(item);

        if (item.resp !== 2'b00) begin
            failed = 1'b1;
            `uvm_error("RX_DECERR_AXIL",
                $sformatf(
                    "CSR access failed addr=%08h resp=%02b",
                    address, item.resp))
        end

        if (!write_access)
            data_value = item.data;
    endtask

    task body();
        bit [31:0] value;

        failed = 1'b0;

        // Confirm DMA error status.
        value = 0;
        access_reg(1'b0, 32'h0000_000C, value);
        status_before = value;

        if (status_before[2] !== 1'b1) begin
            failed = 1'b1;
            `uvm_error("RX_DECERR_STATUS",
                $sformatf(
                    "Expected INT_STATUS[2]=1, got %08h",
                    status_before))
        end
        else
            `uvm_info("RX_DECERR_CHECK",
                "PASS: DMA error status asserted", UVM_LOW)

        // Clear only the DMA error bit.
        value = 32'h0000_0004;
        access_reg(1'b1, 32'h0000_000C, value);

        value = 0;
        access_reg(1'b0, 32'h0000_000C, value);
        status_after = value;

        if (status_after[2] !== 1'b0) begin
            failed = 1'b1;
            `uvm_error("RX_DECERR_W1C",
                $sformatf(
                    "DMA error status did not clear: %08h",
                    status_after))
        end
        else
            `uvm_info("RX_DECERR_CHECK",
                "PASS: DMA error status cleared by W1C",
                UVM_LOW)
    endtask
endclass


class eth_rx_axi_decerr_test extends eth_base_test;
    `uvm_component_utils(eth_rx_axi_decerr_test)

    virtual eth_irq_if irq_vif;

    function new(string name = "eth_rx_axi_decerr_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_irq_if)::get(
                this, "", "vif", irq_vif))
            `uvm_fatal("RX_DECERR_VIF",
                       "IRQ interface unavailable")
    endfunction

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_seq;
        eth_rx_loopback_dma_seq rx_seq;
        eth_rx_decerr_csr_seq csr_seq;

        int unsigned timeout_cycles;
        bit failed;
        bit error_irq_seen;

        phase.raise_objection(this);

        failed = 0;
        error_irq_seen = 0;

        `uvm_info("RX_DECERR",
            "Starting RX AXI DECERR injection testcase",
            UVM_LOW)

        reset_seq = eth_reset_seq::type_id::create("reset_seq");
        reset_seq.start(env.reset_ag.sqr);

        // Prepare the TX payload used by RGMII loopback.
        for (int unsigned i = 0; i < 64; i++)
            env.axi_ag.drv.mem[64'h1000 + i] = i[7:0];

        // Initialize RX destination memory.
        for (int unsigned i = 0; i < 64; i++)
            env.axi_ag.drv.mem[64'h2000 + i] = 8'hA5;

        // Inject DECERR on RX DMA write responses.
        env.axi_ag.drv.inject_write_error = 1'b1;
        env.axi_ag.drv.injected_bresp = 2'b11;

        rx_seq = eth_rx_loopback_dma_seq::type_id::create("rx_seq");

        // Enable TX, RX and DMA error interrupts before DMA starts.
        // The shared RX loopback sequence does not program INT_ENABLE.
        begin
            eth_irq002_access_seq irq_enable_seq;

            irq_enable_seq =
                eth_irq002_access_seq::type_id::create(
                    "irq_enable_seq");

            irq_enable_seq.wr   = 1'b1;
            irq_enable_seq.addr = 32'h0000_0008;
            irq_enable_seq.data = 32'h0000_0007;

            irq_enable_seq.start(env.axil_ag.sqr);

            if (irq_enable_seq.resp !== 2'b00)
                `uvm_fatal("RX_DECERR_ENABLE",
                    "Failed to enable DMA error interrupt")
        end

        rx_seq.start(env.axil_ag.sqr);

        // Wait for the injected B response and DMA error IRQ.
        timeout_cycles = 0;

        while (timeout_cycles < 10000) begin
            @(negedge irq_vif.clk);
            timeout_cycles++;

            if (irq_vif.irq_dma_err === 1'b1)
                error_irq_seen = 1'b1;

            if ((env.axi_ag.drv.injected_write_error_count > 0) &&
                error_irq_seen)
                break;
        end

        if (env.axi_ag.drv.injected_write_error_count == 0) begin
            failed = 1'b1;
            `uvm_error("RX_DECERR_INJECT",
                "No DECERR AXI write-response handshake observed")
        end
        else
            `uvm_info("RX_DECERR_CHECK",
                $sformatf(
                    "PASS: %0d DECERR write-response handshakes",
                    env.axi_ag.drv.injected_write_error_count),
                UVM_LOW)

        if (!env.axi_ag.drv.first_write_seen ||
            env.axi_ag.drv.first_write_addr !== 64'h2000) begin
            failed = 1'b1;
            `uvm_error("RX_DECERR_ADDR",
                $sformatf(
                    "Expected RX DMA write at 0x2000, got %016h",
                    env.axi_ag.drv.first_write_addr))
        end
        else
            `uvm_info("RX_DECERR_CHECK",
                "PASS: RX DMA write address is 0x2000",
                UVM_LOW)

        if (!error_irq_seen) begin
            failed = 1'b1;
            `uvm_error("RX_DECERR_IRQ",
                "DMA error interrupt did not assert")
        end
        else
            `uvm_info("RX_DECERR_CHECK",
                "PASS: DMA error interrupt asserted",
                UVM_LOW)

        // TX completion can legitimately occur during loopback.
        // Do not treat TX/RX completion IRQs as DMA write errors.

        if (!failed) begin
            csr_seq =
                eth_rx_decerr_csr_seq::type_id::create("csr_seq");

            csr_seq.start(env.axil_ag.sqr);

            if (csr_seq.failed)
                failed = 1'b1;

            repeat (5) @(negedge irq_vif.clk);

            if (irq_vif.irq_dma_err !== 1'b0) begin
                failed = 1'b1;
                `uvm_error("RX_DECERR_CLEAR",
                    "DMA error IRQ remained asserted after W1C")
            end
            else
                `uvm_info("RX_DECERR_CHECK",
                    "PASS: DMA error IRQ deasserted after W1C",
                    UVM_LOW)
        end

        env.axi_ag.drv.inject_write_error = 1'b0;

        if (failed)
            `uvm_error("RX_DECERR_FAIL",
                "RX AXI DECERR TEST FAILED")
        else
            `uvm_info("RX_DECERR_PASS",
                "RX AXI DECERR TEST PASSED", UVM_LOW)

        phase.drop_objection(this);
    endtask
endclass
