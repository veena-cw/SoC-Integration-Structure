class eth_tx_slverr_csr_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_tx_slverr_csr_seq)

    bit failed;
    bit [31:0] status_before;
    bit [31:0] status_after;

    function new(string name = "eth_tx_slverr_csr_seq");
        super.new(name);
    endfunction

    task automatic access_reg(
        input bit write_access,
        input bit [31:0] address,
        inout bit [31:0] data_value
    );
        eth_axil_item item;

        item = eth_axil_item::type_id::create("csr_item");
        start_item(item);
        item.write = write_access;
        item.addr  = address;
        item.data  = data_value;
        item.strb  = 4'hF;
        finish_item(item);

        if (item.resp !== 2'b00) begin
            failed = 1'b1;
            `uvm_error("TX_SLVERR_AXIL",
                $sformatf("CSR access failed addr=%08h resp=%02b",
                          address, item.resp))
        end

        if (!write_access)
            data_value = item.data;
    endtask

    task body();
        bit [31:0] value;

        failed = 1'b0;

        // Error must be latched in INT_STATUS[2].
        value = 0;
        access_reg(1'b0, 32'h0000_000C, value);
        status_before = value;

        if (status_before[2] !== 1'b1) begin
            failed = 1'b1;
            `uvm_error("TX_SLVERR_STATUS",
                $sformatf("Expected INT_STATUS[2]=1, got %08h",
                          status_before))
        end
        else
            `uvm_info("TX_SLVERR_CHECK",
                "PASS: DMA error status asserted", UVM_LOW)

        // Clear only DMA error bit.
        value = 32'h0000_0004;
        access_reg(1'b1, 32'h0000_000C, value);

        value = 0;
        access_reg(1'b0, 32'h0000_000C, value);
        status_after = value;

        if (status_after[2] !== 1'b0) begin
            failed = 1'b1;
            `uvm_error("TX_SLVERR_W1C",
                $sformatf("Error status did not clear: %08h",
                          status_after))
        end
        else
            `uvm_info("TX_SLVERR_CHECK",
                "PASS: DMA error status cleared by W1C", UVM_LOW)
    endtask
endclass


class eth_tx_axi_slverr_test extends eth_base_test;
    `uvm_component_utils(eth_tx_axi_slverr_test)

    virtual eth_irq_if irq_vif;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_irq_if)::get(
                this, "", "vif", irq_vif))
            `uvm_fatal("TX_SLVERR_VIF",
                       "IRQ virtual interface unavailable")
    endfunction

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_seq;
        eth_tx_dma_seq tx_seq;
        eth_tx_slverr_csr_seq csr_seq;

        int unsigned timeout_cycles;
        bit failed;
        bit error_irq_seen;

        phase.raise_objection(this);
        failed = 0;
        error_irq_seen = 0;

        `uvm_info("TX_SLVERR",
            "Starting TX AXI SLVERR injection testcase", UVM_LOW)

        reset_seq = eth_reset_seq::type_id::create("reset_seq");
        reset_seq.start(env.reset_ag.sqr);

        // Prepare TX source memory.
        for (int unsigned i = 0; i < 64; i++)
            env.axi_ag.drv.mem[64'h1000 + i] = i[7:0];

        // Inject SLVERR on the first read beat.
        // Beat zero is selected to guarantee an injection
        // even if the DMA splits the transfer into bursts.
        env.axi_ag.drv.inject_read_error = 1'b1;
        env.axi_ag.drv.injected_rresp = 2'b10;
        env.axi_ag.drv.inject_read_beat = 0;

        tx_seq = eth_tx_dma_seq::type_id::create("tx_seq");
        tx_seq.start(env.axil_ag.sqr);

        // Observe both injection and interrupt, with timeout.
        timeout_cycles = 0;
        while (timeout_cycles < 2000) begin
            @(negedge irq_vif.clk);
            timeout_cycles++;

            if (irq_vif.irq_dma_err === 1'b1)
                error_irq_seen = 1'b1;

            if (env.axi_ag.drv.injected_read_error_count > 0 &&
                error_irq_seen)
                break;
        end

        if (env.axi_ag.drv.injected_read_error_count == 0) begin
            failed = 1;
            `uvm_error("TX_SLVERR_INJECT",
                "No SLVERR read-response handshake observed")
        end
        else
            `uvm_info("TX_SLVERR_CHECK",
                $sformatf("PASS: %0d SLVERR read handshakes",
                    env.axi_ag.drv.injected_read_error_count),
                UVM_LOW)

        if (!error_irq_seen) begin
            failed = 1;
            `uvm_error("TX_SLVERR_IRQ",
                "DMA error interrupt did not assert")
        end
        else
            `uvm_info("TX_SLVERR_CHECK",
                "PASS: DMA error interrupt asserted", UVM_LOW)

        if (irq_vif.irq_rx_compl !== 1'b0) begin
            failed = 1;
            `uvm_error("TX_SLVERR_ISOLATION",
                "RX completion IRQ asserted during TX-only error test")
        end

        if (!failed) begin
            csr_seq = eth_tx_slverr_csr_seq::type_id::create("csr_seq");
            csr_seq.start(env.axil_ag.sqr);

            if (csr_seq.failed)
                failed = 1;

            repeat (5) @(negedge irq_vif.clk);

            if (irq_vif.irq_dma_err !== 1'b0) begin
                failed = 1;
                `uvm_error("TX_SLVERR_CLEAR",
                    "DMA error IRQ remained asserted after W1C")
            end
        end

        env.axi_ag.drv.inject_read_error = 1'b0;

        if (failed)
            `uvm_error("TX_SLVERR_FAIL",
                "TX AXI SLVERR TEST FAILED")
        else
            `uvm_info("TX_SLVERR_PASS",
                "TX AXI SLVERR TEST PASSED", UVM_LOW)

        phase.drop_objection(this);
    endtask
endclass
