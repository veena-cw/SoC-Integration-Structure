`timescale 1ns/1ps
module eth_tb_top;
    import uvm_pkg::*;                                                            //Imports symbols required by the verification environment.
    import eth_uvm_pkg::*;                                                        //Imports symbols required by the verification environment.

    logic logic_clk = 1'b0;
    logic gtx_clk   = 1'b0;
    logic gtx_clk90 = 1'b0;

    always #5 logic_clk = ~logic_clk;                                             //100 MHz DMA/logic/AXI-Lite clock
    always #4 gtx_clk   = ~gtx_clk;                                               //125 MHz RGMII GTX clock
    assign tx_axis_if.aresetn = reset_if.rst_n;                                  //Provides reset state to the passive TX AXIS monitor.
    assign tx_axis_if.tdata   = dut.axis_tx_mac_if.tdata;                        //Observes the byte entering the Ethernet MAC.
    assign tx_axis_if.tvalid  = dut.axis_tx_mac_if.tvalid;                       //Observes when the DMA/adapter presents a valid byte.
    assign tx_axis_if.tready  = dut.axis_tx_mac_if.tready;                       //Observes when the MAC accepts the presented byte.
    assign tx_axis_if.tlast   = dut.axis_tx_mac_if.tlast;                        //Observes the final byte indication for the TX frame.
    assign tx_axis_if.tuser   = dut.axis_tx_mac_if.tuser;                        //Observes the TX user/error indication.
    assign rx_axis_if.aresetn = reset_if.rst_n;
    assign rx_axis_if.tdata   = dut.axis_rx_mac_if.tdata;
    assign rx_axis_if.tvalid  = dut.axis_rx_mac_if.tvalid;
    assign rx_axis_if.tready  = dut.axis_rx_mac_if.tready;
    assign rx_axis_if.tlast   = dut.axis_rx_mac_if.tlast;
    assign rx_axis_if.tuser   = dut.axis_rx_mac_if.tuser;

    initial begin                                                                 //Starts this one-time testbench initialization process.
        #2;
        forever #4 gtx_clk90 = ~gtx_clk90;                                        //125 MHz, 90-degree shifted
    end

    eth_axil_if axil_if(logic_clk);                                               //Instantiates this verification interface.
    eth_axi_if  #(.ADDR_W(64), .DATA_W(64), .ID_W(4)) axi_if(logic_clk);          //Instantiates this verification interface.
    eth_reset_if reset_if(logic_clk);                                             //Instantiates this verification interface.
    eth_irq_if irq_if(logic_clk);                                                 //Instantiates this verification interface.
    eth_rgmii_if rgmii_if();
    eth_axis_tx_if tx_axis_if(logic_clk);                                      //Creates a passive view of the internal MAC-input AXI-Stream.
    eth_axis_rx_if rx_axis_if(logic_clk);  // Passive view of the MAC RX AXI-Stream output.

    wire logic logic_rst = ~reset_if.rst_n;
    wire logic gtx_rst   = ~reset_if.rst_n;

    assign axil_if.dut_reset_done = ~dut.axil_rst_cdc;
    assign axil_if.aresetn = reset_if.rst_n;                                      //Continuously connects this testbench signal.
    assign axi_if.aresetn  = reset_if.rst_n;                                      //Continuously connects this testbench signal.

// Select physical TX-to-RX loopback for the existing RX test or an independent RX BFM for full-duplex tests.
    assign rgmii_if.bfm_rx_clk = gtx_clk;
    assign rgmii_if.rx_clk = rgmii_if.loopback_enable ? rgmii_if.tx_clk : rgmii_if.bfm_rx_clk;
    assign rgmii_if.rxd    = rgmii_if.loopback_enable ? rgmii_if.txd    : rgmii_if.bfm_rxd;
    assign rgmii_if.rx_ctl = rgmii_if.loopback_enable ? rgmii_if.tx_ctl : rgmii_if.bfm_rx_ctl;

    eth_desc_debug_if desc_debug_if(logic_clk);

    initial begin
        desc_debug_if.force_rd_not_ready = 1'b0;
        desc_debug_if.force_wr_not_ready = 1'b0;
    end

    always @(desc_debug_if.force_rd_not_ready) begin
        if (desc_debug_if.force_rd_not_ready)
            force dut.taxi_axi_dma_inst.axi_dma_rd_inst.rd_desc_req_ready_reg = 1'b0;
        else
            release dut.taxi_axi_dma_inst.axi_dma_rd_inst.rd_desc_req_ready_reg;
    end

    always @(desc_debug_if.force_wr_not_ready) begin
        if (desc_debug_if.force_wr_not_ready)
            force dut.taxi_axi_dma_inst.axi_dma_wr_inst.wr_desc_req_ready_reg = 1'b0;
        else
            release dut.taxi_axi_dma_inst.axi_dma_wr_inst.wr_desc_req_ready_reg;
    end

    assign desc_debug_if.cfg_valid = dut.dma_cfg_valid_o;
    assign desc_debug_if.cfg_ready = dut.dma_cfg_ready_i;

    assign desc_debug_if.rd_valid = dut.rd_desc_req_if.req_valid;
    assign desc_debug_if.rd_ready = dut.rd_desc_req_if.req_ready;

    assign desc_debug_if.wr_valid = dut.wr_desc_req_if.req_valid;
    assign desc_debug_if.wr_ready = dut.wr_desc_req_if.req_ready;


    // TC017 passive descriptor completion observation
    assign desc_debug_if.rd_sts_valid = dut.rd_desc_sts_if.sts_valid;
    assign desc_debug_if.rd_sts_error = dut.rd_desc_sts_if.sts_error;
    assign desc_debug_if.wr_sts_valid = dut.wr_desc_sts_if.sts_valid;
    assign desc_debug_if.wr_sts_error = dut.wr_desc_sts_if.sts_error;


    // Passive RX FIFO core handshakes.
    // No RTL signals are driven or forced by these assignments.
    assign desc_debug_if.rx_fifo_s_valid =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.axis_pre_fifo.tvalid;

    assign desc_debug_if.rx_fifo_s_ready =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.axis_pre_fifo.tready;

    assign desc_debug_if.rx_fifo_s_last =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.axis_pre_fifo.tlast;

    assign desc_debug_if.rx_fifo_m_valid =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.axis_post_fifo.tvalid;

    assign desc_debug_if.rx_fifo_m_ready =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.axis_post_fifo.tready;

    assign desc_debug_if.rx_fifo_m_last =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.axis_post_fifo.tlast;

    assign desc_debug_if.rx_fifo_m_clk =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.m_clk;

    // RX FIFO source-domain diagnostic signals.
    assign desc_debug_if.rx_fifo_src_clk =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.s_clk;

    assign desc_debug_if.rx_fifo_drop_active =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst
           .rx_fifo.fifo_inst.drop_frame_reg;

    assign desc_debug_if.rx_fifo_in_frame =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst
           .rx_fifo.fifo_inst.s_frame_reg;


    // Source-domain FIFO occupancy and full conditions.
    assign desc_debug_if.rx_fifo_depth =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst
           .rx_fifo.s_status_depth;

    assign desc_debug_if.rx_fifo_depth_commit =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst
           .rx_fifo.s_status_depth_commit;

    assign desc_debug_if.rx_fifo_full =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst
           .rx_fifo.fifo_inst.full;

    assign desc_debug_if.rx_fifo_full_wr =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst
           .rx_fifo.fifo_inst.full_wr;


    // Passive observation of the FIFO RAM word addressed by wr_ptr_reg.
    assign desc_debug_if.rx_fifo_ram_word =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.fifo_inst.mem[
            dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.fifo_inst.wr_ptr_reg
                % $size(dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.fifo_inst.mem)
        ];

    assign desc_debug_if.rx_fifo_ram_full =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.fifo_inst.full;


    // Passive reconstruction of the FRAME_FIFO RAM-write branch.
    // This does not drive or modify the RTL.
    assign desc_debug_if.rx_fifo_ram_write_handshake =
        desc_debug_if.rx_fifo_s_valid &&
        desc_debug_if.rx_fifo_s_ready;

    assign desc_debug_if.rx_fifo_ram_write_decision =
        desc_debug_if.rx_fifo_ram_write_handshake &&
        !(
            desc_debug_if.rx_fifo_full ||
            desc_debug_if.rx_fifo_full_wr ||
            desc_debug_if.rx_fifo_drop_active
        );

    // Observe actual MAC RX FIFO events.
    assign desc_debug_if.rx_fifo_overflow =
        dut.rx_fifo_overflow;

    assign desc_debug_if.rx_fifo_bad_frame =
        dut.rx_fifo_bad_frame;

    assign desc_debug_if.rx_fifo_good_frame =
        dut.rx_fifo_good_frame;


    // Passive MAC CRC error observation.
    assign desc_debug_if.rx_pkt_fragment =
    dut.taxi_eth_mac_1g_rgmii_fifo_inst
       .eth_mac_1g_rgmii_inst
       .eth_mac_1g_inst
       .axis_gmii_rx_inst
       .stat_rx_pkt_fragment;

    assign desc_debug_if.rx_error_bad_frame = dut.rx_error_bad_frame;
    assign desc_debug_if.rx_error_oversize = dut.taxi_eth_mac_1g_rgmii_fifo_inst.eth_mac_1g_rgmii_inst.eth_mac_1g_inst.axis_gmii_rx_inst.stat_rx_err_oversize;
    assign desc_debug_if.rx_error_bad_fcs = dut.rx_error_bad_fcs;

    assign desc_debug_if.rx_error_preamble =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst
           .eth_mac_1g_rgmii_inst
           .eth_mac_1g_inst
           .axis_gmii_rx_inst
           .stat_rx_err_preamble;


    eth_dma_mac_top #(                                                            //Instantiates the RTL-team Ethernet DMA/MAC design top as the DUT.
        .AXIL_ADDR_WIDTH(32),                                                     //Connects this DUT port to the corresponding testbench signal.
        .AXIL_DATA_WIDTH(32),                                                     //Connects this DUT port to the corresponding testbench signal.
        .AXI_ADDR_WIDTH(64),                                                      //Connects this DUT port to the corresponding testbench signal.
        .AXI_DATA_WIDTH(64),                                                      //Connects this DUT port to the corresponding testbench signal.
        .AXI_ID_WIDTH(4),
        .MAC_SIM(1'b1),
        .MAC_VENDOR("GENERIC")
    ) dut (
        .clk              (logic_clk),                                            //Connects this DUT port to the corresponding testbench signal.
        .rst_n            (reset_if.rst_n),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_clk       (logic_clk),                                            //Connects this DUT port to the corresponding testbench signal.
        .s_axil_rst_n     (reset_if.rst_n),                                       //Connects this DUT port to the corresponding testbench signal.
        .gtx_clk          (gtx_clk),                                              //Connects this DUT port to the corresponding testbench signal.
        .gtx_clk90        (gtx_clk90),                                            //Connects this DUT port to the corresponding testbench signal.
        .gtx_rst          (gtx_rst),                                              //Connects this DUT port to the corresponding testbench signal.
        .logic_clk        (logic_clk),                                            //Connects this DUT port to the corresponding testbench signal.
        .logic_rst        (logic_rst),                                            //Connects this DUT port to the corresponding testbench signal.

        .s_axil_awaddr    (axil_if.awaddr),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_awprot    (axil_if.awprot),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_awvalid   (axil_if.awvalid),                                      //Connects this DUT port to the corresponding testbench signal.
        .s_axil_awready   (axil_if.awready),                                      //Connects this DUT port to the corresponding testbench signal.
        .s_axil_wdata     (axil_if.wdata),                                        //Connects this DUT port to the corresponding testbench signal.
        .s_axil_wstrb     (axil_if.wstrb),                                        //Connects this DUT port to the corresponding testbench signal.
        .s_axil_wvalid    (axil_if.wvalid),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_wready    (axil_if.wready),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_bresp     (axil_if.bresp),                                        //Connects this DUT port to the corresponding testbench signal.
        .s_axil_bvalid    (axil_if.bvalid),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_bready    (axil_if.bready),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_araddr    (axil_if.araddr),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_arprot    (axil_if.arprot),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_arvalid   (axil_if.arvalid),                                      //Connects this DUT port to the corresponding testbench signal.
        .s_axil_arready   (axil_if.arready),                                      //Connects this DUT port to the corresponding testbench signal.
        .s_axil_rdata     (axil_if.rdata),                                        //Connects this DUT port to the corresponding testbench signal.
        .s_axil_rresp     (axil_if.rresp),                                        //Connects this DUT port to the corresponding testbench signal.
        .s_axil_rvalid    (axil_if.rvalid),                                       //Connects this DUT port to the corresponding testbench signal.
        .s_axil_rready    (axil_if.rready),                                       //Connects this DUT port to the corresponding testbench signal.

        .m_axi_lpddr_awid    (axi_if.awid),                                       //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awaddr  (axi_if.awaddr),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awlen   (axi_if.awlen),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awsize  (axi_if.awsize),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awburst (axi_if.awburst),                                    //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awlock  (axi_if.awlock),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awcache (axi_if.awcache),                                    //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awprot  (axi_if.awprot),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awvalid (axi_if.awvalid),                                    //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_awready (axi_if.awready),                                    //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_wdata   (axi_if.wdata),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_wstrb   (axi_if.wstrb),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_wlast   (axi_if.wlast),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_wvalid  (axi_if.wvalid),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_wready  (axi_if.wready),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_bid     (axi_if.bid),                                        //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_bresp   (axi_if.bresp),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_bvalid  (axi_if.bvalid),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_bready  (axi_if.bready),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arid    (axi_if.arid),                                       //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_araddr  (axi_if.araddr),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arlen   (axi_if.arlen),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arsize  (axi_if.arsize),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arburst (axi_if.arburst),                                    //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arlock  (axi_if.arlock),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arcache (axi_if.arcache),                                    //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arprot  (axi_if.arprot),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arvalid (axi_if.arvalid),                                    //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_arready (axi_if.arready),                                    //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_rid     (axi_if.rid),                                        //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_rdata   (axi_if.rdata),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_rresp   (axi_if.rresp),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_rlast   (axi_if.rlast),                                      //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_rvalid  (axi_if.rvalid),                                     //Connects this DUT port to the corresponding testbench signal.
        .m_axi_lpddr_rready  (axi_if.rready),                                     //Connects this DUT port to the corresponding testbench signal.

        .rgmii_rx_clk      (rgmii_if.rx_clk),                                     //Connects this DUT port to the corresponding testbench signal.
        .rgmii_rxd         (rgmii_if.rxd),                                        //Connects this DUT port to the corresponding testbench signal.
        .rgmii_rx_ctl      (rgmii_if.rx_ctl),                                     //Connects this DUT port to the corresponding testbench signal.
        .rgmii_tx_clk      (rgmii_if.tx_clk),                                     //Connects this DUT port to the corresponding testbench signal.
        .rgmii_txd         (rgmii_if.txd),                                        //Connects this DUT port to the corresponding testbench signal.
        .rgmii_tx_ctl      (rgmii_if.tx_ctl),                                     //Connects this DUT port to the corresponding testbench signal.
        .irq_tx_cmpl       (irq_if.irq_tx_compl),                                 //Connects this DUT port to the corresponding testbench signal.
        .irq_rx_cmpl       (irq_if.irq_rx_compl),                                 //Connects this DUT port to the corresponding testbench signal.
        .irq_DMA_err       (irq_if.irq_dma_err)                                   //Connects this DUT port to the corresponding testbench signal.
    );

    initial begin                                                                 //Starts this one-time testbench initialization process.
        uvm_config_db#(virtual eth_axil_if)::set(null, "*", "vif", axil_if);      //Publishes this interface through the UVM configuration database.
        uvm_config_db#(virtual eth_axi_if)::set(null, "*", "vif", axi_if);        //Publishes this interface through the UVM configuration database.
        uvm_config_db#(virtual eth_reset_if)::set(null, "*", "vif", reset_if);    //Publishes this interface through the UVM configuration database.
        uvm_config_db#(virtual eth_irq_if)::set(null, "*", "vif", irq_if);        //Publishes this interface through the UVM configuration database.
        uvm_config_db#(virtual eth_rgmii_if)::set(null, "*", "vif", rgmii_if);    //Publishes this interface through the UVM configuration database.
        uvm_config_db#(virtual eth_axis_tx_if)::set(null, "uvm_test_top.env.tx_axis_mon", "vif", tx_axis_if); //Publishes the passive MAC-input TX AXIS interface to its monitor.
        uvm_config_db#(virtual eth_axis_rx_if)::set(null, "uvm_test_top.env.rx_axis_mon", "vif", rx_axis_if);
        uvm_config_db#(virtual eth_desc_debug_if)::set(null, "*", "desc_debug_vif", desc_debug_if);
        run_test();
    end
    
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, eth_tb_top);
    end
    

// IRQ attribution diagnostic: read-only DUT observation.
logic irq_bug_reported = 1'b0;
logic irq_x_reported = 1'b0;

always @(negedge dut.clk) begin
    if (dut.rst_n) begin

        if (!irq_x_reported &&
            $isunknown(dut.dma_regbank_inst.int_status_q)) begin
            irq_x_reported = 1'b1;
            $display("IRQ_UNKNOWN_STATUS time=%0t status=%03b",
                $time, dut.dma_regbank_inst.int_status_q);
        end

        if (!irq_bug_reported &&
            dut.dma_regbank_inst.int_status_q[1] === 1'b0 &&
            dut.dma_regbank_inst.int_enable_q[1] === 1'b1 &&
            irq_if.irq_rx_compl === 1'b1) begin

            irq_bug_reported = 1'b1;

            $error(
                "IRQ_ATTRIBUTION_BUG: RX status=0 but RX IRQ=1; status=%03b cpu_en=%03b dma_en=%03b",
                dut.dma_regbank_inst.int_status_q,
                dut.dma_regbank_inst.int_enable_q,
                dut.dma_regbank_inst.int_enable_dma_q
            );
        end
    end
end


// Diagnostic: identify unknown DMA/MAC error source.
logic err_x_reported = 1'b0;

always @(negedge dut.clk) begin
    if (dut.rst_n &&
        !err_x_reported &&
        $isunknown(dut.err_evt_i)) begin

        err_x_reported = 1'b1;

        $display("========== ERROR X SOURCE ==========");
        $display("TIME                 = %0t", $time);
        $display("err_evt_i            = %b", dut.err_evt_i);

        $display("tx_error_underflow   = %b", dut.tx_error_underflow);
        $display("tx_fifo_overflow     = %b", dut.tx_fifo_overflow);
        $display("tx_fifo_bad_frame    = %b", dut.tx_fifo_bad_frame);

        $display("rx_error_bad_frame   = %b", dut.rx_error_bad_frame);
        $display("rx_error_bad_fcs     = %b", dut.rx_error_bad_fcs);
        $display("rx_fifo_overflow     = %b", dut.rx_fifo_overflow);
        $display("rx_fifo_bad_frame    = %b", dut.rx_fifo_bad_frame);

        $display("rd_sts_valid         = %b", dut.rd_desc_sts_if.sts_valid);
        $display("rd_sts_error         = %b", dut.rd_desc_sts_if.sts_error);

        $display("wr_sts_valid         = %b", dut.wr_desc_sts_if.sts_valid);
        $display("wr_sts_error         = %b", dut.wr_desc_sts_if.sts_error);

        $display("====================================");
    end
end


    // Feature-aware simulation watchdog
    initial begin
        int unsigned timeout_us;
        string test_name;

        if (!$value$plusargs("UVM_TESTNAME=%s", test_name))
            test_name = "";

        if (!$value$plusargs("TB_TIMEOUT_US=%d", timeout_us)) begin
            timeout_us = 1000;

            if (test_name == "eth_rx_bad_fcs_test")
                timeout_us = 4000;
            else if (test_name == "eth_rx_fifo_concurrent_drain_test")
                timeout_us = 2000;
            else if (test_name == "eth_rx_fifo_random_backpressure_test")
                timeout_us = 5000;
        end

        $display("[TB_WATCHDOG] TEST=%s TIMEOUT=%0d us",
                 test_name, timeout_us);

        #(timeout_us * 1us);

        $fatal(1, "TB_TIMEOUT: Test=%s exceeded %0d us",
               test_name, timeout_us);
    end



    // AXI-Lite handshake diagnostic monitor.
    // Testbench only: no designer RTL modification.
    int unsigned axil_debug_cycles = 0;

    always @(negedge logic_clk) begin
        if (axil_debug_cycles < 100) begin
            $display(
                "[AXIL_MON] t=%0t reset_n=%b dut_axil_reset=%b AWV=%b AWR=%b WV=%b WR=%b BV=%b BR=%b AW_HOLD=%b W_HOLD=%b",
                $time,
                reset_if.rst_n,
                dut.axil_rst_cdc,
                axil_if.awvalid,
                axil_if.awready,
                axil_if.wvalid,
                axil_if.wready,
                axil_if.bvalid,
                axil_if.bready,
                dut.dma_regbank_inst.aw_hold_q,
                dut.dma_regbank_inst.w_hold_q
            );
            axil_debug_cycles++;
        end
    end


// IRQ-001 observation monitor — testbench only
always @(negedge logic_clk) begin
    if (reset_if.rst_n && !dut.axil_rst_cdc) begin
        if (dut.dma_regbank_inst.tx_compl_evt_i ||
            dut.dma_regbank_inst.rx_compl_evt_i ||
            dut.dma_regbank_inst.err_evt_i ||
            (dut.irq_pending != 3'b000)) begin

            $display(
                "[IRQ001_MON] t=%0t TX_EVT=%b RX_EVT=%b ERR_EVT=%b STATUS=%03b ENABLE=%03b PENDING=%03b TX_IRQ=%b RX_IRQ=%b ERR_IRQ=%b",
                $time,
                dut.dma_regbank_inst.tx_compl_evt_i,
                dut.dma_regbank_inst.rx_compl_evt_i,
                dut.dma_regbank_inst.err_evt_i,
                dut.dma_regbank_inst.int_status_q,
                dut.dma_regbank_inst.int_enable_q,
                dut.irq_pending,
                irq_if.irq_tx_compl,
                irq_if.irq_rx_compl,
                irq_if.irq_dma_err
            );
        end
    end
end


//============================================================
// IRQ-001 STARTUP OBSERVATION — TESTBENCH ONLY
//============================================================
logic irq001_snapshot_done = 1'b0;

always @(negedge logic_clk) begin
    if (!irq001_snapshot_done &&
        reset_if.rst_n === 1'b1 &&
        dut.axil_rst_cdc === 1'b0) begin

        irq001_snapshot_done = 1'b1;

        $display(
            "[IRQ001_START] t=%0t STATUS=%03b ENABLE=%03b PENDING=%03b TX_IRQ=%b RX_IRQ=%b",
            $time,
            dut.dma_regbank_inst.int_status_q,
            dut.dma_regbank_inst.int_enable_q,
            dut.irq_pending,
            irq_if.irq_tx_compl,
            irq_if.irq_rx_compl
        );
    end
end


    assign desc_debug_if.rx_fifo_wr_ptr =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.fifo_inst.wr_ptr_reg;

    assign desc_debug_if.rx_fifo_wr_ptr_commit =
        dut.taxi_eth_mac_1g_rgmii_fifo_inst.rx_fifo.fifo_inst.wr_ptr_commit_reg;


    // AXI B-CHANNEL TEMPORARY TIMING TRACE
    // Passive diagnostic only; does not drive AXI signals.
    int unsigned axi_btrace_remaining = 0;

    always @(posedge logic_clk) begin
        if (axi_if.aresetn !== 1'b1) begin
            axi_btrace_remaining = 0;
        end
        else begin
            if (axi_if.wvalid && axi_if.wready && axi_if.wlast) begin
                axi_btrace_remaining = 8;
                $display(
                    "[AXI_BTRACE] t=%0t FINAL_W WV=%b WR=%b WL=%b BV=%b BR=%b",
                    $time,
                    axi_if.wvalid,
                    axi_if.wready,
                    axi_if.wlast,
                    axi_if.bvalid,
                    axi_if.bready
                );
            end
            else if (axi_btrace_remaining > 0) begin
                $display(
                    "[AXI_BTRACE] t=%0t BV=%b BR=%b STALL=%b HANDSHAKE=%b",
                    $time,
                    axi_if.bvalid,
                    axi_if.bready,
                    axi_if.bvalid && !axi_if.bready,
                    axi_if.bvalid && axi_if.bready
                );
                axi_btrace_remaining--;
            end
        end
    end

endmodule
