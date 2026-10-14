`timescale 1ns/1ps
`include "ifdef.sv"

// Simple testbench: reset -> send ONE RAW7 packet on the PPI lanes -> watch AXI output.
module tb_csi2_rx_top;
  // clocks (word clock and byte clock must be the same rate)
  logic rxwordclkhs = 0, cphy_rxwordclkhs = 0, rxclkesc = 0, aclk = 0, pclk = 0;
  always #5  rxwordclkhs = ~rxwordclkhs;
  always #5  cphy_rxwordclkhs = ~cphy_rxwordclkhs;
  always #5  aclk = ~aclk;
  always #10 pclk = ~pclk;
  always #20 rxclkesc = ~rxclkesc;

  // DUT signals (inputs start at 0; only the ones below ever change)
  logic rst_n = 0, areset_n = 0, rd_rst_n = 0, prst_n = 0;
  logic rxactivehs = 0, rxcalibrationprehs = 0, rxerrcalhs = 0, rxlpdtesc = 0, rxulpsesc = 0, rxvalidesc = 0;
  logic direction = 1, stopstate = 1, ulpsactivenot = 1;
  logic errsoths = 0, errsotsynchs = 0, erresc = 0, errsyncesc = 0, errcontrol = 0, errcontentionlp0 = 0, errcontentionlp1 = 0;
  logic rx_lane_sts_reg7 = 0, rx_lane_sts_reg4 = 0;
  logic [1:0]  rxcalibrationformat = 0;
  logic [63:0] rxdatahs = 0;
  logic [3:0]  rxinvalidcodehs = 0, rxvalidhs = 0, rxsynchs = 0;
  logic [2:0]  rxsynctypehs0 = 0, rxsynctypehs1 = 0, rxsynctypehs2 = 0, rxsynctypehs3 = 0;
  logic [3:0]  rxalpvalidhs = 0, rxalpcode0 = 0, rxalpcode1 = 0, rxalpcode2 = 0, rxalpcode3 = 0;
  logic [3:0]  rxalpnibble0 = 0, rxalpnibble1 = 0, rxalpnibble2 = 0, rxalpnibble3 = 0;
  logic [3:0]  rxtriggeresc = 0;
  logic [7:0]  rxdataesc = 0;
  logic [31:0] lane_configuration = 2, mode_selection = 1;
  logic turnrequest, turndisable, forcerxmode, enable, rxalp_lpselect;
  logic [1:0] rxdatawidthhs;
  logic [2:0] alpwakestate;
  logic wvalid, wlast, wready = 1, awready = 1, awvalid, bvalid = 0, bready;
  logic [`wdata-1:0] wdata;
  logic [`wstrb-1:0] wstrb;
  logic [31:0] awid, awaddr;
  logic [7:0]  awlen;
  logic [2:0]  awsize, awprot;
  logic [1:0]  awburst, bresp = 0;
  logic [3:0]  awcache, awqos, awregion;
  logic pwrite = 0, psel = 0, penable = 0, pready, pslverr;
  logic [2:0] pprot = 0;
  logic [3:0] pstrb = 4'hF;
  logic [31:0] paddr = 0, pwdata = 0, prdata;

  csi2_rx_top dut (.*);

  // AXI slave: always ready, respond after every WLAST
  always @(posedge aclk) begin
    if (wvalid && wready && wlast) bvalid <= 1;
    else if (bvalid && bready)     bvalid <= 0;
  end
  always @(posedge aclk) begin
    if (awvalid && awready) $display("[%0t] AW addr=%h len=%0d", $time, awaddr, awlen);
    if (wvalid  && wready)  $display("[%0t] W  data=%h strb=%h last=%b", $time, wdata, wstrb, wlast);
  end

  // CRC-16 (same as crc.sv)
  function automatic [15:0] crc16(input [7:0] b, input [15:0] c);
    integer j; reg [15:0] r;
    begin r = c;
      for (j = 0; j < 8; j = j + 1) r = (r[0]^b[j]) ? ((r>>1)^16'h8408) : (r>>1);
      crc16 = r; end
  endfunction

  byte unsigned pkt[$];
  task automatic add_header(input [5:0] dt, input [7:0] wcl, input [7:0] wch);
    reg [15:0] c;
    begin
      c = crc16(wch, crc16(wcl, crc16({2'b00,dt}, crc16(8'h00, 16'hFFFF))));
      pkt.push_back(0); pkt.push_back({2'b00,dt}); pkt.push_back(wcl); pkt.push_back(wch);
      pkt.push_back(c[7:0]); pkt.push_back(c[15:8]);
    end
  endtask

  // Everything the RTL needs is inside this one task:
  //   stopstate=0, SoT (reg7) with first word, rxvalidhs=1111 every word, EoT (reg4) with last word.
  task automatic send_packet;
    integer w, b, n; reg [63:0] word;
    begin
      n = pkt.size() / 8;
      for (w = 0; w < n; w = w + 1) begin
        for (b = 0; b < 8; b = b + 1) word[8*b +: 8] = pkt[8*w+b];
        @(negedge rxwordclkhs);
        stopstate = 0; rxactivehs = 1; rxvalidhs = 4'hF; rxdatahs = word;
        rx_lane_sts_reg7 = (w == 0);
        rx_lane_sts_reg4 = (w == n-1);
      end
      @(negedge rxwordclkhs);
      rx_lane_sts_reg7 = 0; rx_lane_sts_reg4 = 0; rxactivehs = 0; rxvalidhs = 0; rxdatahs = 0;
    end
  endtask

  integer i, px = 0;
  reg [15:0] dc;
  always @(posedge cphy_rxwordclkhs) if (dut.rx_pixel_dvalid) px = px + 1;

  initial begin
    $dumpfile("tb_simple.vcd"); $dumpvars(0, tb_simple);
    // reset
    repeat (10) @(negedge aclk);
    rst_n = 1; areset_n = 1; rd_rst_n = 1; prst_n = 1;
    repeat (10) @(negedge aclk);

    // build RAW7 packet: header, 10 sync bytes, header again, 2 filler, payload, payload CRC
    add_header(6'h29, 8'h17, 8'h01);
    repeat (10) pkt.push_back(8'hB8);
    add_header(6'h29, 8'h17, 8'h01);
    repeat (2) pkt.push_back(8'hB8);
    dc = 16'hFFFF;
    for (i = 0; i < 558; i = i + 1) begin pkt.push_back(8'h10 + i); dc = crc16(8'h10 + i, dc); end
    pkt.push_back(dc[7:0]); pkt.push_back(dc[15:8]);

    send_packet;
    repeat (1500) @(negedge aclk);

    $display("\ndtype=0x%h  pixel groups=%0d  lane_err=%b  llp_err=%b", dut.dtype_sts_reg, px, dut.lane_err, dut.llp_err_vld);
    $finish;
  end
  initial begin #500000; $display("TIMEOUT"); $finish; end
endmodule
