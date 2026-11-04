// Full-duplex DMA error isolation and recovery.
class eth_tx_rx_dma_error_recovery_test extends eth_full_duplex_test;
    `uvm_component_utils(eth_tx_rx_dma_error_recovery_test)

    virtual eth_irq_if irq_vif;
    virtual eth_desc_debug_if desc_vif;

    int unsigned rd_count, wr_count;
    bit [3:0] rd_errors[$], wr_errors[$];
    bit failed;

    function new(string name="eth_tx_rx_dma_error_recovery_test",
                 uvm_component parent=null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual eth_irq_if)::get(this,"","vif",irq_vif))
            `uvm_fatal("FD_RECOVERY_VIF","Missing IRQ virtual interface")
        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this,"","desc_debug_vif",desc_vif))
            `uvm_fatal("FD_RECOVERY_VIF","Missing descriptor virtual interface")
    endfunction

    task automatic csr_access(input bit wr, input bit [31:0] addr,
                              inout bit [31:0] data);
        eth_irq002_access_seq seq;
        seq=eth_irq002_access_seq::type_id::create("fd_recovery_csr");
        seq.wr=wr;
        seq.addr=addr;
        seq.data=data;
        seq.start(env.axil_ag.sqr);
        data=seq.data;
        if (seq.resp !== 2'b00) begin
            failed=1;
            `uvm_error("FD_RECOVERY_CSR",
                $sformatf("CSR %s addr=%08h resp=%02b",
                          wr ? "write" : "read",addr,seq.resp))
        end
    endtask

    task automatic wait_status(input int unsigned target_rd, target_wr);
        int unsigned cycles;
        cycles=0;
        while ((rd_count<target_rd || wr_count<target_wr) && cycles<10000) begin
            @(negedge desc_vif.clk);
            cycles++;
        end
        if (rd_count<target_rd || wr_count<target_wr) begin
            failed=1;
            `uvm_error("FD_RECOVERY_TIMEOUT",
                $sformatf("Expected RD=%0d WR=%0d; observed RD=%0d WR=%0d",
                          target_rd,target_wr,rd_count,wr_count))
        end
    endtask

    task automatic check_irq_and_clear();
        bit [31:0] status, clear_data;
        int unsigned cycles;
        for (cycles=0; cycles<10000; cycles++) begin
            @(negedge irq_vif.clk);
            if (irq_vif.irq_dma_err === 1'b1)
                break;
        end
        if (irq_vif.irq_dma_err !== 1'b1) begin
            failed=1;
            `uvm_error("FD_RECOVERY_IRQ","DMA error IRQ did not assert")
        end
        status=0;
        csr_access(0,32'h0000_000C,status);
        if (status[2] !== 1'b1) begin
            failed=1;
            `uvm_error("FD_RECOVERY_IRQ","DMA error status bit not set")
        end
        clear_data=32'h4;
        csr_access(1,32'h0000_000C,clear_data);
        status=0;
        csr_access(0,32'h0000_000C,status);
        repeat (5) @(negedge irq_vif.clk);
        if (status[2] !== 1'b0 || irq_vif.irq_dma_err !== 1'b0) begin
            failed=1;
            `uvm_error("FD_RECOVERY_CLEAR","DMA error status/IRQ failed to clear")
        end
    endtask

    task automatic check_no_error_irq();
        bit [31:0] status;
        status=0;
        csr_access(0,32'h0000_000C,status);
        if (status[2] !== 1'b0 || irq_vif.irq_dma_err !== 1'b0) begin
            failed=1;
            `uvm_error("FD_RECOVERY_REERROR","Unexpected DMA error after recovery")
        end
    endtask

    // TX read errors can prevent RGMII TX activity.
    // Therefore RX stimulus does not wait for TX_CTL.
    task automatic run_pair(input string label,
                            input bit inject_rd, inject_wr,
                            input bit [3:0] expected_rd_error,
                            input bit expected_wr_nonzero);
        eth_parallel_dma_config_seq config_seq;
        eth_parallel_dma_start_seq start_seq;
        time rx_start_time, rx_end_time;
        int unsigned rd_before, wr_before;
        int unsigned read_inject_before, write_inject_before;

        rd_before=rd_count;
        wr_before=wr_count;
        read_inject_before=env.axi_ag.drv.injected_read_error_count;
        write_inject_before=env.axi_ag.drv.injected_write_error_count;

        rgmii_vif.bfm_rx_ctl=1'b0;
        rgmii_vif.bfm_rxd=4'h0;
        clear_observation();

        for (int unsigned i=0;i<64;i++) begin
            env.axi_ag.drv.mem[64'h1000+i]=i[7:0];
            env.axi_ag.drv.mem[64'h2000+i]=8'hA5;
        end

        env.axi_ag.drv.inject_read_error=inject_rd;
        env.axi_ag.drv.injected_rresp=2'b10;
        env.axi_ag.drv.inject_read_beat=0;
        env.axi_ag.drv.inject_write_error=inject_wr;
        env.axi_ag.drv.injected_bresp=2'b10;

        `uvm_info("FD_RECOVERY_ROUND",
            $sformatf("Starting %s: inject_rd=%0b inject_wr=%0b",
                      label,inject_rd,inject_wr),UVM_LOW)

        config_seq=eth_parallel_dma_config_seq::type_id::create(
            "fd_recovery_config");
        config_seq.start(env.axil_ag.sqr);

        start_seq=eth_parallel_dma_start_seq::type_id::create(
            "fd_recovery_start");
        start_seq.start(env.axil_ag.sqr);

        drive_rx_frame(rx_start_time,rx_end_time);

        wait_status(rd_before+1,wr_before+1);

        if (rd_count>=rd_before+1 &&
            rd_errors[rd_before] !== expected_rd_error) begin
            failed=1;
            `uvm_error("FD_RECOVERY_RD",
                $sformatf("%s: TX status expected %0h got %0h",
                          label,expected_rd_error,rd_errors[rd_before]))
        end

        if (wr_count>=wr_before+1) begin
            if (expected_wr_nonzero && wr_errors[wr_before] === 4'h0) begin
                failed=1;
                `uvm_error("FD_RECOVERY_WR",
                    $sformatf("%s: expected RX error, got success",label))
            end
            if (!expected_wr_nonzero && wr_errors[wr_before] !== 4'h0) begin
                failed=1;
                `uvm_error("FD_RECOVERY_WR",
                    $sformatf("%s: expected RX success, got %0h",
                              label,wr_errors[wr_before]))
            end
        end

        if (inject_rd &&
            env.axi_ag.drv.injected_read_error_count<=read_inject_before) begin
            failed=1;
            `uvm_error("FD_RECOVERY_INJECT","No AXI read SLVERR injected")
        end

        if (inject_wr &&
            env.axi_ag.drv.injected_write_error_count<=write_inject_before) begin
            failed=1;
            `uvm_error("FD_RECOVERY_INJECT","No AXI write SLVERR injected")
        end

        if (inject_rd || inject_wr)
            check_irq_and_clear();
        else
            check_no_error_irq();

        repeat (20) @(negedge desc_vif.clk);

        `uvm_info("FD_RECOVERY_ROUND",
            $sformatf("Completed %s: RD=%0d WR=%0d",
                      label,rd_count,wr_count),UVM_LOW)
    endtask

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_seq;
        bit [31:0] enable_irq;

        phase.raise_objection(this);

        failed=0;
        rd_count=0;
        wr_count=0;
        rd_errors.delete();
        wr_errors.delete();

        rgmii_vif.loopback_enable=1'b0;
        rgmii_vif.bfm_rx_ctl=1'b0;
        rgmii_vif.bfm_rxd=4'h0;

        reset_seq=eth_reset_seq::type_id::create("fd_recovery_reset");
        reset_seq.start(env.reset_ag.sqr);

        fork
            begin : fd_descriptor_monitor
                forever begin
                    @(posedge desc_vif.clk);

                    if (desc_vif.rd_sts_valid === 1'b1) begin
                        rd_errors.push_back(desc_vif.rd_sts_error);
                        rd_count++;
                        `uvm_info("FD_RECOVERY_DESC",
                            $sformatf("TX completion=%0d error=%0h",
                                      rd_count,desc_vif.rd_sts_error),UVM_LOW)
                    end

                    if (desc_vif.wr_sts_valid === 1'b1) begin
                        wr_errors.push_back(desc_vif.wr_sts_error);
                        wr_count++;
                        `uvm_info("FD_RECOVERY_DESC",
                            $sformatf("RX completion=%0d error=%0h",
                                      wr_count,desc_vif.wr_sts_error),UVM_LOW)
                    end
                end
            end
        join_none

        enable_irq=32'h7;
        csr_access(1,32'h0000_0008,enable_irq);

        run_pair("TX_ERROR_RX_OK",1,0,4'h4,0);
        run_pair("TX_RECOVERY_RX_OK",0,0,4'h0,0);
        run_pair("RX_ERROR_TX_OK",0,1,4'h0,1);
        run_pair("RX_RECOVERY_TX_OK",0,0,4'h0,0);

        env.axi_ag.drv.inject_read_error=0;
        env.axi_ag.drv.inject_write_error=0;
        rgmii_vif.bfm_rx_ctl=0;
        rgmii_vif.bfm_rxd=0;
        rgmii_vif.loopback_enable=1;

        if (failed)
            `uvm_error("FD_RECOVERY_FAIL",
                       "Full-duplex DMA error recovery FAILED")
        else
            `uvm_info("FD_RECOVERY_PASS",
                      "Full-duplex DMA error recovery PASSED",UVM_NONE)

        phase.drop_objection(this);
    endtask
endclass
