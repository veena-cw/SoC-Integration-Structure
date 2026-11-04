class eth_rx_dma_error_recovery_test extends eth_base_test;

    `uvm_component_utils(eth_rx_dma_error_recovery_test)

    virtual eth_irq_if        irq_vif;
    virtual eth_desc_debug_if desc_vif;

    int unsigned wr_req_count;
    int unsigned wr_sts_count;
    bit [3:0] wr_sts_errors[$];

    bit failed;

    function new(
        string name = "eth_rx_dma_error_recovery_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_irq_if)::get(
                this, "", "vif", irq_vif))
            `uvm_fatal("RX_RECOVERY_VIF",
                       "IRQ interface unavailable")

        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this, "", "desc_debug_vif", desc_vif))
            `uvm_fatal("RX_RECOVERY_VIF",
                       "Descriptor interface unavailable")
    endfunction

    task automatic csr_write(
        input bit [31:0] addr,
        input bit [31:0] data
    );
        eth_irq002_access_seq seq;

        seq = eth_irq002_access_seq::type_id::create("csr_write_seq");
        seq.wr   = 1'b1;
        seq.addr = addr;
        seq.data = data;
        seq.start(env.axil_ag.sqr);

        if (seq.resp !== 2'b00) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_CSR",
                $sformatf("CSR write failed addr=%08h resp=%02b",
                          addr, seq.resp))
        end
    endtask

    task automatic csr_read(
        input bit [31:0] addr,
        output bit [31:0] data
    );
        eth_irq002_access_seq seq;

        seq = eth_irq002_access_seq::type_id::create("csr_read_seq");
        seq.wr   = 1'b0;
        seq.addr = addr;
        seq.data = 32'h0;
        seq.start(env.axil_ag.sqr);

        data = seq.data;

        if (seq.resp !== 2'b00) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_CSR",
                $sformatf("CSR read failed addr=%08h resp=%02b",
                          addr, seq.resp))
        end
    endtask

    task automatic wait_for_write_status(
        input int unsigned target,
        input int unsigned max_cycles
    );
        int unsigned cycles;

        cycles = 0;

        while (wr_sts_count < target && cycles < max_cycles) begin
            @(negedge desc_vif.clk);
            cycles++;
        end

        if (wr_sts_count < target) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_TIMEOUT",
                $sformatf(
                    "Expected %0d RX descriptor completions, got %0d",
                    target, wr_sts_count))
        end
    endtask

    task automatic wait_for_error_irq(
        input int unsigned max_cycles
    );
        int unsigned cycles;

        cycles = 0;

        while (cycles < max_cycles) begin
            @(negedge irq_vif.clk);
            cycles++;

            if (irq_vif.irq_dma_err === 1'b1)
                break;
        end

        if (irq_vif.irq_dma_err !== 1'b1) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_IRQ",
                "Timeout waiting for RX DMA error IRQ")
        end
        else begin
            `uvm_info("RX_RECOVERY_IRQ",
                "PASS: DMA error IRQ asserted", UVM_LOW)
        end
    endtask

    task run_phase(uvm_phase phase);

        eth_reset_seq           reset_seq;
        eth_rx_loopback_dma_seq rx_seq;

        bit [31:0] status;
        int unsigned initial_error_count;

        phase.raise_objection(this);

        failed = 0;
        wr_req_count = 0;
        wr_sts_count = 0;
        wr_sts_errors.delete();

        `uvm_info("RX_RECOVERY",
            "Starting RX DMA SLVERR recovery testcase", UVM_LOW)

        reset_seq = eth_reset_seq::type_id::create("reset_seq");
        reset_seq.start(env.reset_ag.sqr);

        // Monitor RX write descriptor requests and completions.
        fork
            begin : rx_descriptor_monitor
                forever begin
                    @(posedge desc_vif.clk);

                    if (desc_vif.wr_valid === 1'b1 &&
                        desc_vif.wr_ready === 1'b1)
                        wr_req_count++;

                    if (desc_vif.wr_sts_valid === 1'b1) begin
                        wr_sts_errors.push_back(desc_vif.wr_sts_error);
                        wr_sts_count++;

                        `uvm_info("RX_RECOVERY_DESC",
                            $sformatf(
                                "Completion=%0d error=%0h",
                                wr_sts_count,
                                desc_vif.wr_sts_error),
                            UVM_LOW)
                    end
                end
            end
        join_none

        // Prepare TX source and RX destination memory.
        for (int unsigned i = 0; i < 64; i++) begin
            env.axi_ag.drv.mem[64'h1000 + i] = i[7:0];
            env.axi_ag.drv.mem[64'h2000 + i] = 8'hA5;
        end

        // Enable TX, RX, and DMA error interrupts.
        csr_write(32'h0000_0008, 32'h0000_0007);

        // -------------------------------------------------
        // Transaction 1: Inject AXI write SLVERR.
        // -------------------------------------------------
        env.axi_ag.drv.inject_write_error = 1'b1;
        env.axi_ag.drv.injected_bresp = 2'b10;

        initial_error_count =
            env.axi_ag.drv.injected_write_error_count;

        rx_seq = eth_rx_loopback_dma_seq::type_id::create(
            "rx_error_seq");
        rx_seq.start(env.axil_ag.sqr);

        wait_for_write_status(1, 10000);

        if (wr_sts_count >= 1 &&
            wr_sts_errors[0] === 4'h0) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_FIRST",
                "Expected RX descriptor error, got success")
        end

        if (env.axi_ag.drv.injected_write_error_count <=
            initial_error_count) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_INJECT",
                "No injected AXI SLVERR write response observed")
        end

        if (!env.axi_ag.drv.first_write_seen ||
            env.axi_ag.drv.first_write_addr !== 64'h2000) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_ADDR",
                "RX DMA did not write to expected address 0x2000")
        end

        wait_for_error_irq(10000);

        csr_read(32'h0000_000C, status);

        if (status[2] !== 1'b1) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_STATUS",
                $sformatf(
                    "Expected DMA error status, got %08h", status))
        end

        // Clear sticky DMA error status.
        csr_write(32'h0000_000C, 32'h0000_0004);

        csr_read(32'h0000_000C, status);

        if (status[2] !== 1'b0) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_CLEAR",
                "DMA error status did not clear")
        end

        repeat (5) @(negedge irq_vif.clk);

        if (irq_vif.irq_dma_err !== 1'b0) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_CLEAR",
                "DMA error IRQ remained asserted after W1C")
        end

        // -------------------------------------------------
        // Transaction 2: Retry without resetting DUT.
        // -------------------------------------------------
        env.axi_ag.drv.inject_write_error = 1'b0;

        rx_seq = eth_rx_loopback_dma_seq::type_id::create(
            "rx_recovery_seq");
        rx_seq.start(env.axil_ag.sqr);

        wait_for_write_status(2, 10000);

        if (wr_sts_count >= 2 &&
            wr_sts_errors[1] !== 4'h0) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_SECOND",
                $sformatf(
                    "Expected successful RX descriptor, got error=%0h",
                    wr_sts_errors[1]))
        end

        if (wr_req_count < 2) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_REQUEST",
                $sformatf(
                    "Expected 2 RX descriptor requests, got %0d",
                    wr_req_count))
        end

        csr_read(32'h0000_000C, status);

        if (status[2] !== 1'b0) begin
            failed = 1'b1;
            `uvm_error("RX_RECOVERY_REERROR",
                "DMA error status asserted after successful retry")
        end

        if (failed)
            `uvm_error("RX_RECOVERY_FAIL",
                "RX DMA ERROR RECOVERY TEST FAILED")
        else
            `uvm_info("RX_RECOVERY_PASS",
                "RX DMA ERROR RECOVERY TEST PASSED", UVM_LOW)

        phase.drop_objection(this);
    endtask

endclass
