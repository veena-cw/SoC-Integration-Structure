`timescale 1ns/1ps

module csi2_tb_top;
  import uvm_pkg::*;
  import csi2_pkg::*;
  import csi2_uvm_pkg::*;

  logic bfm_clk = 1'b0;
  logic aclk    = 1'b0;
  integer bfm_half_period = 5;
  integer axi_half_period = 5;

  initial begin
    void'($value$plusargs("BFM_HALF_PERIOD=%d", bfm_half_period));
    forever #(bfm_half_period) bfm_clk = ~bfm_clk;
  end

  initial begin
    void'($value$plusargs("AXI_HALF_PERIOD=%d", axi_half_period));
    forever #(axi_half_period) aclk = ~aclk;
  end

  csi2_reset_if rst_vif(.clk(bfm_clk));

  c_phy_bfm_if #(
    .ENABLE_TIMEOUT          (100),
    .BFM_CLK_PERIOD_NS       (10),
    .T3_PREPARE_NS           (38),
    .T3_PREBEGIN_UI          (7),
    .PROGRAMMABLE_PREAMBLE_EN(1'b0),
    .T3_PROGSEQ_UI           (14),
    .T3_PREEND_UI            (7),
    .T3_POST_UI              (7)
  ) phy_bfm(.bfm_clk(bfm_clk));

  csi2_axi_write_if #(
    .DATA_WIDTH(`wdata),
    .STRB_WIDTH(`wstrb)
  ) axi_vif(.aclk(aclk));

  csi2_axi4_lite_if axi_lite_vif(.aclk(aclk));

  csi2_rx_status_if status_vif(
  .bfm_clk(bfm_clk),
  .aclk   (aclk),
  .llp_clk(phy_bfm.cphy_rxwordclkhs)
  );

  logic rd_rst_n;

  logic [31:0] lane_configuration;
  logic [31:0] mode_selection;


  int phy_word_count;
  int pixel_count;
  int axi_wr_count;
  int axi_w_count;


  assign phy_bfm.rst_n = rst_vif.rst_n;
  assign axi_vif.areset_n = rst_vif.rst_n;
  assign axi_lite_vif.areset_n = rst_vif.rst_n;
  assign rd_rst_n = rst_vif.rst_n;

  // Keep all DUT hierarchy references in the integration top.  Reusable UVM
  // components consume only this virtual status interface.
  assign status_vif.rst_n             = rst_vif.rst_n;
  assign status_vif.dtype             = dut.dtype_sts_reg;
  assign status_vif.lane_err          = dut.lane_err;
  assign status_vif.llp_err_vld       = dut.llp_err_vld;
  assign status_vif.llp_err           = dut.llp_err;
  assign status_vif.short_pkt_vld     = dut.llp_rx_inst.shrt_pkt_vld;
  assign status_vif.llp_dec_ctr       = dut.llp_rx_inst.llp_dec_ctr;
  assign status_vif.rx_lm_byte_vld_r  = dut.llp_rx_inst.rx_lm_byte_vld_r;
  assign status_vif.decoded_vc        = dut.llp_rx_inst.vc_rx;
  assign status_vif.decoded_vcx       = dut.llp_rx_inst.vcx_rx;
  assign status_vif.short_data_lsb    = dut.llp_rx_inst.data_field_lsb_rx;
  assign status_vif.short_data_msb    = dut.llp_rx_inst.data_field_msb_rx;
  assign status_vif.frame_start_vld   = dut.llp_rx_inst.ssp_frame_strt_vld;
  assign status_vif.frame_end_vld     = dut.llp_rx_inst.ssp_frame_end_vld;
  assign status_vif.line_start_vld    = dut.llp_rx_inst.ssp_line_strt_vld;
  assign status_vif.line_end_vld      = dut.llp_rx_inst.ssp_line_end_vld;
  assign status_vif.generic_short_vld = dut.llp_rx_inst.gsp_dtype_vld;
  assign status_vif.rx_pixel_dvalid   = dut.rx_pixel_dvalid;
  assign status_vif.axi_wr_en         = dut.axim_inst.axi_wr_en;
  assign status_vif.axi_full          = dut.axim_inst.axi_full;
  assign status_vif.data_length_vld   = dut.axim_inst.data_length_vld;
  assign status_vif.axi_fifo_empty    = dut.axim_inst.axi_empty;
  assign status_vif.axi_fifo_rd_vld   = dut.axim_inst.axi_rd_vld;
  assign status_vif.long_pkt_vld      = dut.llp_rx_inst.long_pkt_vld;

always @(posedge phy_bfm.cphy_rxwordclkhs) begin
  if (!phy_bfm.rst_n) begin
    phy_word_count <= 0;
    pixel_count    <= 0;
    axi_wr_count   <= 0;
  end
  else begin
    if (phy_bfm.rxactivehs && (|phy_bfm.rxvalidhs))
      phy_word_count++;

    if (dut.rx_pixel_dvalid)
      pixel_count++;

    if (dut.axim_inst.axi_wr_en)
      axi_wr_count++;
  end
end

always @(posedge axi_vif.aclk) begin
  if (!axi_vif.areset_n)
    axi_w_count <= 0;
  else if (axi_vif.wvalid && axi_vif.wready)
    axi_w_count++;
end

  csi2_rx_top #(
    .RX_PIXEL_DATA_W (`rx_pixel_data),
    .AXI_DATA_W      (`wdata),
    .AXI_STRB_W      (`wstrb)
  ) dut (
    .rxwordclkhs         (phy_bfm.rxwordclkhs),
    .cphy_rxwordclkhs    (phy_bfm.cphy_rxwordclkhs),
    .rxclkesc            (phy_bfm.rxclkesc),
    .rst_n               (phy_bfm.rst_n),
    .rxactivehs          (phy_bfm.rxactivehs),
    .rxcalibrationprehs  (phy_bfm.rxcalibrationprehs),
    .rxerrcalhs          (phy_bfm.rxerrcalhs),
    .rxlpdtesc           (phy_bfm.rxlpdtesc),
    .rxulpsesc           (phy_bfm.rxulpsesc),
    .rxvalidesc          (phy_bfm.rxvalidesc),
    .direction           (phy_bfm.direction),
    .stopstate           (phy_bfm.stopstate),
    .ulpsactivenot       (phy_bfm.ulpsactivenot),
    .errsoths            (phy_bfm.errsoths),
    .errsotsynchs        (phy_bfm.errsotsynchs),
    .erresc              (phy_bfm.erresc),
    .errsyncesc          (phy_bfm.errsyncesc),
    .errcontrol          (phy_bfm.errcontrol),
    .errcontentionlp0    (phy_bfm.errcontentionlp0),
    .errcontentionlp1    (phy_bfm.errcontentionlp1),
    .rx_lane_sts_reg7    (phy_bfm.rx_lane_sts_reg7),
    .rx_lane_sts_reg4    (phy_bfm.rx_lane_sts_reg4),
    .rxcalibrationformat (phy_bfm.rxcalibrationformat),
    .rxdatahs            (phy_bfm.rxdatahs),
    .rxinvalidcodehs     (phy_bfm.rxinvalidcodehs),
    .rxvalidhs           (phy_bfm.rxvalidhs),
    .rxsynchs            (phy_bfm.rxsynchs),
    .rxsynctypehs0       (phy_bfm.rxsynctypehs0),
    .rxsynctypehs1       (phy_bfm.rxsynctypehs1),
    .rxsynctypehs2       (phy_bfm.rxsynctypehs2),
    .rxsynctypehs3       (phy_bfm.rxsynctypehs3),
    .rxalpvalidhs        (phy_bfm.rxalpvalidhs),
    .rxalpcode0          (phy_bfm.rxalpcode0),
    .rxalpcode1          (phy_bfm.rxalpcode1),
    .rxalpcode2          (phy_bfm.rxalpcode2),
    .rxalpcode3          (phy_bfm.rxalpcode3),
    .rxalpnibble0        (phy_bfm.rxalpnibble0),
    .rxalpnibble1        (phy_bfm.rxalpnibble1),
    .rxalpnibble2        (phy_bfm.rxalpnibble2),
    .rxalpnibble3        (phy_bfm.rxalpnibble3),
    .rxtriggeresc        (phy_bfm.rxtriggeresc),
    .rxdataesc           (phy_bfm.rxdataesc),
    .turnrequest         (phy_bfm.turnrequest),
    .turndisable         (phy_bfm.turndisable),
    .forcerxmode         (phy_bfm.forcerxmode),
    .enable              (phy_bfm.enable),
    .rxalp_lpselect      (phy_bfm.rxalp_lpselect),
    .rxdatawidthhs       (phy_bfm.rxdatawidthhs),
    .alpwakestate        (phy_bfm.alpwakestate),
    .lane_configuration  (lane_configuration),
    .mode_selection      (mode_selection),
    .aclk                (aclk),
    .areset_n            (axi_vif.areset_n),
    .rd_rst_n            (rd_rst_n),
    .s_axi_awaddr        (axi_lite_vif.awaddr),
    .s_axi_awvalid       (axi_lite_vif.awvalid),
    .s_axi_awready       (axi_lite_vif.awready),
    .s_axi_wdata         (axi_lite_vif.wdata),
    .s_axi_wstrb         (axi_lite_vif.wstrb),
    .s_axi_wvalid        (axi_lite_vif.wvalid),
    .s_axi_wready        (axi_lite_vif.wready),
    .s_axi_bresp         (axi_lite_vif.bresp),
    .s_axi_bvalid        (axi_lite_vif.bvalid),
    .s_axi_bready        (axi_lite_vif.bready),
    .s_axi_araddr        (axi_lite_vif.araddr),
    .s_axi_arvalid       (axi_lite_vif.arvalid),
    .s_axi_arready       (axi_lite_vif.arready),
    .s_axi_rdata         (axi_lite_vif.rdata),
    .s_axi_rresp         (axi_lite_vif.rresp),
    .s_axi_rvalid        (axi_lite_vif.rvalid),
    .s_axi_rready        (axi_lite_vif.rready),
    .wvalid              (axi_vif.wvalid),
    .wlast               (axi_vif.wlast),
    .wdata               (axi_vif.wdata),
    .wstrb               (axi_vif.wstrb),
    .wready              (axi_vif.wready),
    .awready             (axi_vif.awready),
    .awvalid             (axi_vif.awvalid),
    .awid                (axi_vif.awid),
    .awlen               (axi_vif.awlen),
    .awsize              (axi_vif.awsize),
    .awburst             (axi_vif.awburst),
    .awaddr              (axi_vif.awaddr),
    .awcache             (axi_vif.awcache),
    .awprot              (axi_vif.awprot),
    .awqos               (axi_vif.awqos),
    .awregion            (axi_vif.awregion),
    .bresp               (axi_vif.bresp),
    .bvalid              (axi_vif.bvalid),
    .bready              (axi_vif.bready)
  );

  initial begin
    uvm_config_db#(virtual c_phy_bfm_if)::set(null, "*", "phy_vif", phy_bfm);
    uvm_config_db#(virtual csi2_axi_write_if)::set(null, "*", "axi_vif", axi_vif);
    uvm_config_db#(virtual csi2_axi4_lite_if)::set(
        null, "*", "axi_lite_vif", axi_lite_vif);
    uvm_config_db#(virtual csi2_reset_if)::set(null, "*", "rst_vif", rst_vif);
    uvm_config_db#(virtual csi2_rx_status_if)::set(
        null, "*", "status_vif", status_vif);
    run_test();
  end

  initial begin : waveform_dump
    string wave_file;
    if ($test$plusargs("WAVES")) begin
      $display("WAVE_INFO: waveform dumping enabled");
      if (!$value$plusargs("WAVE_FILE=%s", wave_file))
        wave_file = "/tmp/opencode/csi2_uvm/csi2_wave.fst";
      $dumpfile(wave_file);
      $dumpvars(0, csi2_tb_top);
    end
  end

 int unsigned dbg_w_count;

always @(posedge aclk) begin
  if (!axi_vif.areset_n) begin
    dbg_w_count = 0;
  end
  else if (axi_vif.wvalid && axi_vif.wready)
  begin
    dbg_w_count++;

    $display("[%0t] AXI_W #%0d data=%016h strb=%0h last=%b",$time,dbg_w_count,axi_vif.wdata,axi_vif.wstrb,axi_vif.wlast);
  end
end

 final
 begin
    $display(
      "COUNTS: PHY_WORDS=%0d PIXEL_DVALID=%0d AXI_WR_EN=%0d AXI_W=%0d",
      phy_word_count,
      pixel_count,
      axi_wr_count,
      axi_w_count
    );
  end

endmodule : csi2_tb_top
