`timescale 1ns/1ps
`include "ifdef.sv"

module csi2_rx_bfm_smoke_tb;

  logic bfm_clk = 1'b0;
  logic aclk    = 1'b0;
  logic pclk    = 1'b0;

  always #5  bfm_clk = ~bfm_clk;
  always #5  aclk    = ~aclk;
  always #10 pclk    = ~pclk;

  c_phy_bfm_if #(
    .ENABLE_TIMEOUT(100),
    .BFM_CLK_PERIOD_NS(10),
    .T3_PREPARE_NS(38),
    .T3_PREBEGIN_UI(7),
    .PROGRAMMABLE_PREAMBLE_EN(1'b0),
    .T3_PROGSEQ_UI(14),
    .T3_PREEND_UI(7),
    .T3_POST_UI(7)
  ) phy_bfm (
    .bfm_clk(bfm_clk)
  );

  logic areset_n = 1'b0;
  logic rd_rst_n = 1'b0;
  logic prst_n   = 1'b0;

  logic wvalid;
  logic wlast;
  logic [`wdata-1:0] wdata;
  logic [`wstrb-1:0] wstrb;
  logic wready = 1'b1;

  logic awready = 1'b1;
  logic awvalid;
  logic [31:0] awid;
  logic [7:0]  awlen;
  logic [2:0]  awsize;
  logic [1:0]  awburst;
  logic [31:0] awaddr;
  logic [3:0]  awcache;
  logic [2:0]  awprot;
  logic [3:0]  awqos;
  logic [3:0]  awregion;

  logic [1:0] bresp = 2'b00;
  logic       bvalid = 1'b0;
  logic       bready;

  logic        pwrite  = 1'b0;
  logic        psel    = 1'b0;
  logic        penable = 1'b0;
  logic [2:0]  pprot   = 3'b000;
  logic [3:0]  pstrb   = 4'hf;
  logic [31:0] paddr   = 32'b0;
  logic [31:0] pwdata  = 32'b0;
  logic        pready;
  logic        pslverr;
  logic [31:0] prdata;

  csi2_rx_top dut (
    .rxwordclkhs          (phy_bfm.rxwordclkhs),
    .cphy_rxwordclkhs     (phy_bfm.cphy_rxwordclkhs),
    .rxclkesc             (phy_bfm.rxclkesc),
    .rst_n                (phy_bfm.rst_n),
    .rxactivehs           (phy_bfm.rxactivehs),
    .rxcalibrationprehs   (phy_bfm.rxcalibrationprehs),
    .rxerrcalhs           (phy_bfm.rxerrcalhs),
    .rxlpdtesc            (phy_bfm.rxlpdtesc),
    .rxulpsesc            (phy_bfm.rxulpsesc),
    .rxvalidesc           (phy_bfm.rxvalidesc),
    .direction            (phy_bfm.direction),
    .stopstate            (phy_bfm.stopstate),
    .ulpsactivenot        (phy_bfm.ulpsactivenot),
    .errsoths             (phy_bfm.errsoths),
    .errsotsynchs         (phy_bfm.errsotsynchs),
    .erresc               (phy_bfm.erresc),
    .errsyncesc           (phy_bfm.errsyncesc),
    .errcontrol           (phy_bfm.errcontrol),
    .errcontentionlp0     (phy_bfm.errcontentionlp0),
    .errcontentionlp1     (phy_bfm.errcontentionlp1),
    .rx_lane_sts_reg7     (phy_bfm.rx_lane_sts_reg7),
    .rx_lane_sts_reg4     (phy_bfm.rx_lane_sts_reg4),
    .rxcalibrationformat  (phy_bfm.rxcalibrationformat),
    .rxdatahs             (phy_bfm.rxdatahs),
    .rxinvalidcodehs      (phy_bfm.rxinvalidcodehs),
    .rxvalidhs            (phy_bfm.rxvalidhs),
    .rxsynchs             (phy_bfm.rxsynchs),
    .rxsynctypehs0        (phy_bfm.rxsynctypehs0),
    .rxsynctypehs1        (phy_bfm.rxsynctypehs1),
    .rxsynctypehs2        (phy_bfm.rxsynctypehs2),
    .rxsynctypehs3        (phy_bfm.rxsynctypehs3),
    .rxalpvalidhs         (phy_bfm.rxalpvalidhs),
    .rxalpcode0           (phy_bfm.rxalpcode0),
    .rxalpcode1           (phy_bfm.rxalpcode1),
    .rxalpcode2           (phy_bfm.rxalpcode2),
    .rxalpcode3           (phy_bfm.rxalpcode3),
    .rxalpnibble0         (phy_bfm.rxalpnibble0),
    .rxalpnibble1         (phy_bfm.rxalpnibble1),
    .rxalpnibble2         (phy_bfm.rxalpnibble2),
    .rxalpnibble3         (phy_bfm.rxalpnibble3),
    .rxtriggeresc         (phy_bfm.rxtriggeresc),
    .rxdataesc            (phy_bfm.rxdataesc),
    .turnrequest          (phy_bfm.turnrequest),
    .turndisable          (phy_bfm.turndisable),
    .forcerxmode          (phy_bfm.forcerxmode),
    .enable               (phy_bfm.enable),
    .rxalp_lpselect       (phy_bfm.rxalp_lpselect),
    .rxdatawidthhs        (phy_bfm.rxdatawidthhs),
    .alpwakestate         (phy_bfm.alpwakestate),
    .lane_configuration   (phy_bfm.lane_configuration),
    .mode_selection       (phy_bfm.mode_selection),
    .aclk                 (aclk),
    .areset_n             (areset_n),
    .rd_rst_n             (rd_rst_n),
    .wvalid               (wvalid),
    .wlast                (wlast),
    .wdata                (wdata),
    .wstrb                (wstrb),
    .wready               (wready),
    .awready              (awready),
    .awvalid              (awvalid),
    .awid                 (awid),
    .awlen                (awlen),
    .awsize               (awsize),
    .awburst              (awburst),
    .awaddr               (awaddr),
    .awcache              (awcache),
    .awprot               (awprot),
    .awqos                (awqos),
    .awregion             (awregion),
    .bresp                (bresp),
    .bvalid               (bvalid),
    .bready               (bready),
    .pclk                 (pclk),
    .prst_n               (prst_n),
    .pwrite               (pwrite),
    .psel                 (psel),
    .penable              (penable),
    .pprot                (pprot),
    .pstrb                (pstrb),
    .paddr                (paddr),
    .pwdata               (pwdata),
    .pready               (pready),
    .pslverr              (pslverr),
    .prdata               (prdata)
  );

  always @(posedge aclk or negedge areset_n) begin
    if (!areset_n)
      bvalid <= 1'b0;
    else if (wvalid && wready && wlast)
      bvalid <= 1'b1;
    else if (bvalid && bready)
      bvalid <= 1'b0;
  end
 task mon();
 repeat(50)
 begin
 @(posedge bfm_clk)
 $display("RX state=%02h",
         dut.lane_merging_rx_inst.csi2rx_cur_state);
end
endtask
  int unsigned axi_write_beats = 0;
  always @(posedge aclk) begin
    if (wvalid && wready) begin
      axi_write_beats++;
      $display("[%0t] AXI W data=%h strb=%h last=%b", $time, wdata, wstrb, wlast);
    end
  end

  function automatic logic [15:0] crc16_byte(
    input logic [7:0]  byte_value,
    input logic [15:0] previous_crc
  );
    logic [15:0] crc;
    crc = previous_crc;
    for (int bit_index = 0; bit_index < 8; bit_index++)
      crc = (crc[0] ^ byte_value[bit_index]) ?
            ((crc >> 1) ^ 16'h8408) : (crc >> 1);
    return crc;
  endfunction

  byte unsigned packet_bytes[$];
  logic [63:0] packet_words[$];

  task automatic add_rtl_header(
    input logic [5:0] data_type,
    input logic [7:0] word_count_low,
    input logic [7:0] word_count_high
  );
    logic [15:0] header_crc;
    header_crc = crc16_byte(
        word_count_high,
        crc16_byte(
          word_count_low,
          crc16_byte({2'b00, data_type}, crc16_byte(8'h00, 16'hffff))));

    // This is the current RTL smoke-test header representation.
    packet_bytes.push_back(8'h00);
    packet_bytes.push_back({2'b00, data_type});
    packet_bytes.push_back(word_count_low);
    packet_bytes.push_back(word_count_high);
    packet_bytes.push_back(header_crc[7:0]);
    packet_bytes.push_back(header_crc[15:8]);
  endtask

  task automatic build_current_rtl_raw7_packet();
    logic [15:0] payload_crc;

    packet_bytes.delete();
    packet_words.delete();

    // Known packet form used by the present RAW7 RTL smoke test.
    add_rtl_header(6'h29, 8'h17, 8'h01);
    repeat (10)
      packet_bytes.push_back(8'hb8);
    add_rtl_header(6'h29, 8'h17, 8'h01);
    repeat (2)
      packet_bytes.push_back(8'hb8);

    payload_crc = 16'hffff;
    for (int index = 0; index < 558; index++) begin
      packet_bytes.push_back(8'h10 + index);
      payload_crc = crc16_byte(8'h10 + index, payload_crc);
    end
    packet_bytes.push_back(payload_crc[7:0]);
    packet_bytes.push_back(payload_crc[15:8]);

    while ((packet_bytes.size() % 8) != 0)
      packet_bytes.push_back(8'h00);

    for (int base = 0; base < packet_bytes.size(); base += 8) begin
      logic [63:0] packed_word;
      packed_word = 64'b0;
      for (int byte_index = 0; byte_index < 8; byte_index++)
        packed_word[(8 * byte_index) +: 8] = packet_bytes[base + byte_index];
      packet_words.push_back(packed_word);
    end
  endtask
  logic [6:0] previous_rx_state = 7'h00;

/*always @(negedge bfm_clk) begin
  if (!phy_bfm.rst_n) begin
    previous_rx_state = 7'h00;
  end
  else begin
    //----------------------------------------------------------
    // Print only when the RX FSM changes state
    //----------------------------------------------------------
    if (dut.lane_merging_rx_inst.csi2rx_cur_state
        != previous_rx_state) begin

      $display(
        "[%0t] RX_STATE old=%02h new=%02h stop=%b active=%b "
        //"sot=%b valid=%h wait=%b pkt_en=%b",
        ,
        $time,
        previous_rx_state,
        dut.lane_merging_rx_inst.csi2rx_cur_state,
        phy_bfm.stopstate,
        phy_bfm.rxactivehs,
        phy_bfm.rx_lane_sts_reg7,
        phy_bfm.rxvalidhs,
        dut.lane_merging_rx_inst.wait_en,
        dut.pkt_en
      );

      previous_rx_state =
          dut.lane_merging_rx_inst.csi2rx_cur_state;
    end

    //----------------------------------------------------------
    // Print each byte presented to LLP
    //----------------------------------------------------------
    if (dut.rx_lm_byte_vld) begin
      $display(
        "[%0t] LLP_BYTE ctr=%02h data=%02h dtype=%02h",
        $time,
        dut.llp_rx_inst.llp_dec_ctr,
        dut.rx_lm_byte_data,
        dut.dtype_sts_reg
      );
    end

    //----------------------------------------------------------
    // Print actual LLP error code
    //----------------------------------------------------------
    if (dut.llp_err_vld) begin
      $display(
        "[%0t] LLP_ERROR code=%0d ctr=%02h byte=%02h dtype=%02h",
        $time,
        dut.llp_err,
        dut.llp_rx_inst.llp_dec_ctr,
        dut.rx_lm_byte_data,
        dut.dtype_sts_reg
      );
    end
  end
end*/

  initial
    begin : smoke_test
    bit completed;

    $dumpfile("csi2_rx_bfm_smoke.vcd");
    $dumpvars(0, csi2_rx_bfm_smoke_tb);

    phy_bfm.rst_n = 1'b0;
    repeat (10) @(negedge bfm_clk);

    areset_n     = 1'b1;
    rd_rst_n     = 1'b1;
    prst_n       = 1'b1;
    phy_bfm.rst_n = 1'b1;

    // Default run is the RTL-compatible smoke test. These plusargs create
    // targeted failing tests that expose each RTL/spec mismatch.
    if ($test$plusargs("SPEC_SYNC"))
      phy_bfm.rtl_sync_workaround = 1'b0;
    if ($test$plusargs("SPEC_ULPS_POLARITY"))
      phy_bfm.rtl_ulps_polarity_workaround = 1'b0;
    if ($test$plusargs("SPEC_EOT"))
      phy_bfm.rtl_eot_workaround = 1'b0;

    repeat (10) @(negedge bfm_clk);
    build_current_rtl_raw7_packet();

    phy_bfm.transfer_1_packet(packet_words, 3'b011, 1'b1, completed);
    $display("RX state=%02h",
         dut.lane_merging_rx_inst.csi2rx_cur_state);

    if (!completed)
      $fatal(1, "BFM transfer failed, status=%0d", phy_bfm.last_status);

    repeat (3000) @(negedge aclk);

    $display("BFM state=%0d status=%0d AXI write beats=%0d lane_err=%b llp_err=%b dtype=0x%h",
             phy_bfm.bfm_state, phy_bfm.last_status, axi_write_beats,
             dut.lane_err, dut.llp_err_vld, dut.dtype_sts_reg);



    if (axi_write_beats == 0)
      $error("BFM/DUT integration produced no AXI write data");

    $finish;
  end

  initial begin
    #1ms;
    $fatal(1, "BFM/DUT smoke test timeout");
  end

endmodule
