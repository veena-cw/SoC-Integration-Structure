class eth_dma_unaligned_boundary_test extends eth_full_duplex_test;
    `uvm_component_utils(eth_dma_unaligned_boundary_test)

    virtual eth_desc_debug_if desc_vif;

    int unsigned rd_done;
    int unsigned wr_done;
    bit [3:0] rd_error;
    bit [3:0] wr_error;
    bit failed;

    localparam longint unsigned TX_ADDR = 64'h1001;
    localparam longint unsigned RX_ADDR = 64'h2003;
    localparam int unsigned FRAME_LEN = 64;

    function new(
        string name = "eth_dma_unaligned_boundary_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this, "", "desc_debug_vif", desc_vif))
            `uvm_fatal("UNALIGNED_VIF",
                       "Missing descriptor debug interface")
    endfunction

    task automatic check_payload();
        longint unsigned addr;
        byte unsigned expected;

        if (!env.axi_ag.drv.first_read_seen ||
            env.axi_ag.drv.first_read_addr !== TX_ADDR) begin
            failed = 1;
            `uvm_error("UNALIGNED_AR",
                $sformatf("Expected ARADDR=%h observed=%h",
                    TX_ADDR, env.axi_ag.drv.first_read_addr))
        end

        if (!env.axi_ag.drv.first_write_seen ||
            env.axi_ag.drv.first_write_addr !== RX_ADDR) begin
            failed = 1;
            `uvm_error("UNALIGNED_AW",
                $sformatf("Expected AWADDR=%h observed=%h",
                    RX_ADDR, env.axi_ag.drv.first_write_addr))
        end

        if (env.tx_axis_mon.observed_bytes.size() != FRAME_LEN) begin
            failed = 1;
            `uvm_error("UNALIGNED_TX_AXIS",
                $sformatf("Expected %0d bytes observed %0d",
                    FRAME_LEN, env.tx_axis_mon.observed_bytes.size()))
        end
        else begin
            for (int unsigned i = 0; i < FRAME_LEN; i++) begin
                expected = i[7:0];

                if (env.tx_axis_mon.observed_bytes[i] !== expected) begin
                    failed = 1;
                    `uvm_error("UNALIGNED_TX_AXIS",
                        $sformatf("BYTE=%0d EXP=%02h GOT=%02h",
                            i, expected,
                            env.tx_axis_mon.observed_bytes[i]))
                end
            end
        end

        if (env.rx_axis_mon.observed_bytes.size() != FRAME_LEN) begin
            failed = 1;
            `uvm_error("UNALIGNED_RX_AXIS",
                $sformatf("Expected %0d bytes observed %0d",
                    FRAME_LEN, env.rx_axis_mon.observed_bytes.size()))
        end
        else begin
            for (int unsigned i = 0; i < FRAME_LEN; i++) begin
                expected = 8'h80 + i[7:0];

                if (env.rx_axis_mon.observed_bytes[i] !== expected) begin
                    failed = 1;
                    `uvm_error("UNALIGNED_RX_AXIS",
                        $sformatf("BYTE=%0d EXP=%02h GOT=%02h",
                            i, expected,
                            env.rx_axis_mon.observed_bytes[i]))
                end
            end
        end

        for (int unsigned i = 0; i < FRAME_LEN; i++) begin
            addr = RX_ADDR + i;
            expected = 8'h80 + i[7:0];

            if (!env.axi_ag.drv.mem.exists(addr)) begin
                failed = 1;
                `uvm_error("UNALIGNED_RX_MEM",
                    $sformatf("Missing address=%h", addr))
            end
            else if (env.axi_ag.drv.mem[addr] !== expected) begin
                failed = 1;
                `uvm_error("UNALIGNED_RX_MEM",
                    $sformatf("ADDR=%h EXP=%02h GOT=%02h",
                        addr, expected, env.axi_ag.drv.mem[addr]))
            end
        end

        for (int unsigned i = 0; i < 8; i++) begin
            addr = RX_ADDR - 8 + i;

            if (!env.axi_ag.drv.mem.exists(addr) ||
                env.axi_ag.drv.mem[addr] !== 8'hA5) begin
                failed = 1;
                `uvm_error("UNALIGNED_GUARD",
                    $sformatf("Guard before RX changed at %h", addr))
            end

            addr = RX_ADDR + FRAME_LEN + i;

            if (!env.axi_ag.drv.mem.exists(addr) ||
                env.axi_ag.drv.mem[addr] !== 8'hA5) begin
                failed = 1;
                `uvm_error("UNALIGNED_GUARD",
                    $sformatf("Guard after RX changed at %h", addr))
            end
        end

        if (env.tx_axis_mon.tlast_count != 1 ||
            env.tx_axis_mon.tlast_index != 63 ||
            env.tx_axis_mon.tuser_seen ||
            env.rx_axis_mon.tlast_count != 1 ||
            env.rx_axis_mon.tlast_index != 63 ||
            env.rx_axis_mon.tuser_seen) begin
            failed = 1;
            `uvm_error("UNALIGNED_AXIS_STATUS",
                "Unexpected TLAST or TUSER")
        end

        if (env.rgmii_ag.mon.tx_frame_count != 1 ||
            env.rgmii_ag.mon.tx_bytes.size() != 76 ||
            env.rgmii_ag.mon.tx_error_seen) begin
            failed = 1;
            `uvm_error("UNALIGNED_RGMII",
                $sformatf("Frames=%0d bytes=%0d error=%0b",
                    env.rgmii_ag.mon.tx_frame_count,
                    env.rgmii_ag.mon.tx_bytes.size(),
                    env.rgmii_ag.mon.tx_error_seen))
        end

        if (env.axi_ag.drv.read_error_seen ||
            env.axi_ag.drv.write_error_seen) begin
            failed = 1;
            `uvm_error("UNALIGNED_AXI",
                "Unexpected AXI read/write error")
        end
    endtask

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_seq;
        eth_full_duplex_frame_seq config_seq;
        time rx_start_time;
        time rx_end_time;
        int unsigned timeout_cycles;

        phase.raise_objection(this);

        failed = 0;
        rd_done = 0;
        wr_done = 0;
        rd_error = '0;
        wr_error = '0;

        rgmii_vif.loopback_enable = 1'b0;
        rgmii_vif.bfm_rx_ctl = 1'b0;
        rgmii_vif.bfm_rxd = 4'h0;

        reset_seq = eth_reset_seq::type_id::create(
            "unaligned_reset");
        reset_seq.start(env.reset_ag.sqr);

        clear_observation();

        for (int unsigned i = 0; i < FRAME_LEN; i++)
            env.axi_ag.drv.mem[TX_ADDR+i] = i[7:0];

        for (int unsigned i = 0; i < FRAME_LEN+16; i++)
            env.axi_ag.drv.mem[RX_ADDR-8+i] = 8'hA5;

        env.axi_ag.drv.inject_read_error = 0;
        env.axi_ag.drv.inject_write_error = 0;

        `uvm_info("UNALIGNED_START",
            "Starting unaligned TX=0x1001 RX=0x2003 LEN=64",
            UVM_LOW)

        fork
            begin : descriptor_monitor
                forever begin
                    @(posedge desc_vif.clk);

                    if (desc_vif.rd_sts_valid === 1'b1) begin
                        rd_done++;
                        rd_error = desc_vif.rd_sts_error;
                    end

                    if (desc_vif.wr_sts_valid === 1'b1) begin
                        wr_done++;
                        wr_error = desc_vif.wr_sts_error;
                    end
                end
            end
        join_none

        config_seq = eth_full_duplex_frame_seq::type_id::create(
            "unaligned_config");
        config_seq.tx_address = TX_ADDR[31:0];
        config_seq.rx_address = RX_ADDR[31:0];
        config_seq.frame_length = FRAME_LEN;
        config_seq.start(env.axil_ag.sqr);

        drive_rx_frame(rx_start_time, rx_end_time);

        timeout_cycles = 0;

        while ((rd_done < 1 || wr_done < 1) &&
               timeout_cycles < 10000) begin
            @(negedge desc_vif.clk);
            timeout_cycles++;
        end

        if (rd_done != 1 || wr_done != 1) begin
            failed = 1;
            `uvm_error("UNALIGNED_TIMEOUT",
                $sformatf("RD=%0d WR=%0d", rd_done, wr_done))
        end

        repeat (30) @(negedge desc_vif.clk);

        if (rd_error !== 4'h0 || wr_error !== 4'h0) begin
            failed = 1;
            `uvm_error("UNALIGNED_DESC",
                $sformatf("RD_ERROR=%h WR_ERROR=%h",
                    rd_error, wr_error))
        end

        check_payload();

        if (!failed)
            `uvm_info("UNALIGNED_PASS",
                "Unaligned DMA payload and guard checks PASSED",
                UVM_NONE)
        else
            `uvm_error("UNALIGNED_FAIL",
                "Unaligned DMA testcase FAILED")

        phase.drop_objection(this);
    endtask
endclass
