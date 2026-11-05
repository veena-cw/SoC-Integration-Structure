// ============================================================================
// tb_sd_card_bfm.sv -- standalone self-checking smoke test for sd_card_bfm
// The "host" here is an independent, minimal model written from the spec
// (it does not share code with the BFM), so BFM bugs are not hidden.Verilator:  verilator --binary --timing -Wno-fatal --top-module tb_sd_card_bfm \
//                 sd_card_bfm.sv tb_sd_card_bfm.sv && ./obj_dir/Vtb_sd_card_bfm
//   xsim:       xvlog -sv sd_card_bfm.sv tb_sd_card_bfm.sv && \
//               xelab tb_sd_card_bfm -s tbs && xsim tbs -R
// ============================================================================
`timescale 1ns/1ps

module tb_sd_card_bfm;

  reg clk   = 1'b0;
  reg rst_n = 1'b0;
  always #20 clk = ~clk;                       // 25 MHz

  // host-side drivers (non-blocking only)
  reg       h_cmd    = 1'b1;
  reg       h_cmd_oe = 1'b0;
  reg [7:0] h_dat    = 8'hFF;
  reg [7:0] h_dat_oe = 8'h00;

  // BFM side
  wire       c_o, c_oe;
  wire [7:0] d_o, d_oe;

  reg        cfg_emmc = 1'b0;
  reg        cfg_hc   = 1'b1;
  reg [15:0] cfg_busy = 16'd20;
  reg        inj_no_resp = 1'b0, inj_resp_crc = 1'b0, inj_dat_crc = 1'b0, inj_wr_tok = 1'b0;

  // resolved buses (pull-up when nobody drives)
  wire       cmd_bus = c_oe ? c_o : (h_cmd_oe ? h_cmd : 1'b1);
  wire [7:0] dat_bus = (d_oe & d_o) | (h_dat_oe & h_dat) | ~(d_oe | h_dat_oe);

  sd_card_bfm #(.MEM_BLOCKS(64), .VERBOSE(1'b0)) dut (
    .sd_clk(clk), .rst_n(rst_n),
    .cmd_i(cmd_bus), .cmd_o(c_o), .cmd_oe(c_oe),
    .dat_i(dat_bus), .dat_o(d_o), .dat_oe(d_oe),
    .cfg_emmc(cfg_emmc), .cfg_hc(cfg_hc), .cfg_busy_clks(cfg_busy),
    .inj_no_resp(inj_no_resp), .inj_resp_crc_err(inj_resp_crc),
    .inj_dat_crc_err(inj_dat_crc), .inj_wr_crc_status(inj_wr_tok)
  );

  // --------------------------------------------------------------------------
  integer errors = 0;
  integer checks = 0;
  task chk(input cond, input [511:0] msg);
    begin
      checks = checks + 1;
      if (!cond) begin
        errors = errors + 1;
        $display("[%0t] FAIL: %0s", $time, msg);
      end
    end
  endtask

  // --------------------------------------------------------------------------
  // Independent CRC helpers
  // --------------------------------------------------------------------------
  function [6:0] h_crc7(input [39:0] d);
    integer i; reg [6:0] c; reg fb;
    begin
      c = 7'd0;
      for (i = 39; i >= 0; i = i - 1) begin
        fb = c[6] ^ d[i];
        c = {c[5:0], 1'b0};
        if (fb) c = c ^ 7'h09;
      end
      h_crc7 = c;
    end
  endfunction

  function [6:0] h_crc7_120(input [119:0] d);
    integer i; reg [6:0] c; reg fb;
    begin
      c = 7'd0;
      for (i = 119; i >= 0; i = i - 1) begin
        fb = c[6] ^ d[i];
        c = {c[5:0], 1'b0};
        if (fb) c = c ^ 7'h09;
      end
      h_crc7_120 = c;
    end
  endfunction

  function [15:0] h_crc16(input [15:0] c, input b);
    reg fb;
    begin
      fb = c[15] ^ b;
      h_crc16 = {c[14:0], 1'b0};
      if (fb) h_crc16 = h_crc16 ^ 16'h1021;
    end
  endfunction

  // --------------------------------------------------------------------------
  // Host: command / response
  // --------------------------------------------------------------------------
  reg [135:0] resp;
  reg         resp_ok;
  reg         bad_crc = 1'b0;

  task send_cmd(input [5:0] idx, input [31:0] arg);
    reg [47:0] f; integer i;
    begin
      f = {2'b01, idx, arg, 7'd0, 1'b1};
      f[7:1] = h_crc7(f[47:8]);
      if (bad_crc) f[7:1] = f[7:1] ^ 7'h01;
      for (i = 47; i >= 0; i = i - 1) begin
        h_cmd <= f[i]; h_cmd_oe <= 1'b1; @(posedge clk);
      end
      h_cmd_oe <= 1'b0; h_cmd <= 1'b1;
    end
  endtask

  task get_resp(input integer nbits);
    integer t, i;
    begin
      resp = 136'd0; resp_ok = 1'b0; t = 0;
      while (!resp_ok && t < 80) begin
        @(posedge clk);
        if (cmd_bus === 1'b0) resp_ok = 1'b1;
        t = t + 1;
      end
      if (resp_ok) begin
        resp[nbits-1] = 1'b0;
        for (i = nbits-2; i >= 0; i = i - 1) begin
          @(posedge clk);
          resp[i] = cmd_bus;
        end
      end
    end
  endtask

  // R1-format check (R1, R6, R7): idx, CRC7, end bit
  task chk_r1(input [5:0] idx, input [255:0] tag);
    begin
      chk(resp_ok, {tag, " response seen"});
      chk(resp[47:46] == 2'b00, {tag, " start/tx bits"});
      chk(resp[45:40] == idx,   {tag, " index"});
      chk(resp[7:1]   == h_crc7(resp[47:8]), {tag, " CRC7"});
      chk(resp[0] == 1'b1,      {tag, " end bit"});
    end
  endtask

  task cmd_r1(input [5:0] idx, input [31:0] arg, input [255:0] tag);
    begin
      send_cmd(idx, arg); get_resp(48); chk_r1(idx, tag);
    end
  endtask

  task wait_not_busy;
    integer t;
    begin
      t = 0;
      repeat (4) @(posedge clk);
      while (dat_bus[0] === 1'b0 && t < 5000) begin @(posedge clk); t = t + 1; end
      chk(t < 5000, "DAT0 busy released");
    end
  endtask

  // --------------------------------------------------------------------------
  // Host: data
  // --------------------------------------------------------------------------
  reg [7:0] hbuf [0:511];
  reg       h_ok;
  reg [2:0] h_tok;

  task fill_pattern(input [7:0] seed);
    integer i;
    begin for (i = 0; i < 512; i = i + 1) hbuf[i] = seed + (i * 3); end
  endtask

  task host_read_block(input integer w, input integer len);
    integer k, j, nclk, t;
    reg [7:0] bits, mask, acc;
    reg [127:0] crc;
    reg got;
    begin
      nclk = (w == 1) ? len*8 : (w == 4) ? len*2 : len;
      mask = (w == 1) ? 8'h01 : (w == 4) ? 8'h0F : 8'hFF;
      crc = 128'd0; h_ok = 1'b1; got = 1'b0; t = 0; acc = 8'h00;
      while (!got && t < 4000) begin
        @(posedge clk);
        if (dat_bus[0] === 1'b0) got = 1'b1;
        t = t + 1;
      end
      if (!got) begin h_ok = 1'b0; $display("[%0t] host: no read start bit", $time); end
      else begin
        for (k = 0; k < nclk; k = k + 1) begin
          @(posedge clk);
          bits = dat_bus & mask;
          if (w == 1) begin
            acc = {acc[6:0], bits[0]};
            if (k % 8 == 7) hbuf[k/8] = acc;
          end else if (w == 4) begin
            if (k % 2 == 0) acc[7:4] = bits[3:0];
            else begin acc[3:0] = bits[3:0]; hbuf[k/2] = acc; end
          end else hbuf[k] = bits;
          for (j = 0; j < 8; j = j + 1)
            if (mask[j]) crc[16*j +: 16] = h_crc16(crc[16*j +: 16], bits[j]);
        end
        for (k = 15; k >= 0; k = k - 1) begin
          @(posedge clk);
          for (j = 0; j < 8; j = j + 1)
            if (mask[j] && dat_bus[j] !== crc[16*j + k]) h_ok = 1'b0;
        end
        @(posedge clk);
        if (dat_bus[0] !== 1'b1) h_ok = 1'b0;     // end bit
      end
    end
  endtask

  task host_write_block(input integer w, input integer len);
    integer k, j, nclk, t;
    reg [7:0] bits, mask, by, cb;
    reg [127:0] crc;
    begin
      nclk = (w == 1) ? len*8 : (w == 4) ? len*2 : len;
      mask = (w == 1) ? 8'h01 : (w == 4) ? 8'h0F : 8'hFF;
      crc = 128'd0;
      repeat (4) @(posedge clk);
      h_dat <= 8'h00; h_dat_oe <= mask; @(posedge clk);                 // start bit
      for (k = 0; k < nclk; k = k + 1) begin
        if (w == 1)      begin by = hbuf[k/8]; bits = {7'd0, by[7 - (k % 8)]}; end
        else if (w == 4) begin by = hbuf[k/2]; bits = (k % 2 == 0) ? {4'd0, by[7:4]} : {4'd0, by[3:0]}; end
        else bits = hbuf[k];
        h_dat <= bits | ~mask;
        for (j = 0; j < 8; j = j + 1)
          if (mask[j]) crc[16*j +: 16] = h_crc16(crc[16*j +: 16], bits[j]);
        @(posedge clk);
      end
      for (k = 15; k >= 0; k = k - 1) begin
        for (j = 0; j < 8; j = j + 1) cb[j] = crc[16*j + k];
        h_dat <= cb | ~mask; @(posedge clk);
      end
      h_dat <= 8'hFF; @(posedge clk);                                    // end bit
      h_dat_oe <= 8'h00;
      // CRC status token: start(0), 3 status bits, end(1)
      h_tok = 3'b111; t = 0;
      while (dat_bus[0] !== 1'b0 && t < 20) begin @(posedge clk); t = t + 1; end
      chk(t < 20, "write CRC-status start bit seen");
      for (k = 2; k >= 0; k = k - 1) begin @(posedge clk); h_tok[k] = dat_bus[0]; end
      @(posedge clk);
      chk(dat_bus[0] === 1'b1, "write CRC-status end bit");
    end
  endtask

  // --------------------------------------------------------------------------
  // Test flow
  // --------------------------------------------------------------------------
  reg [15:0] rca;
  integer    n, i, pol;
  reg        match;
  reg [31:0] ocr;

  task cmp_blocks(input [7:0] seed, input [255:0] tag);
     integer q; reg okc; reg [7:0] e;
  begin
    okc = 1'b1;
    for (q = 0; q < 512; q = q + 1) begin
      e = seed + (q * 3);               // wrap to 8 bits like fill_pattern
      if (hbuf[q] !== e) okc = 1'b0;
    end
    chk(okc, tag);
  end
endtask

  initial begin
    #1_000_000_00;   // 100 ms watchdog
    $display("TIMEOUT"); $finish;
  end

  initial begin
    repeat (5) @(posedge clk);
    rst_n = 1'b1;
    repeat (5) @(posedge clk);

    // ========================= SD card =========================
    $display("---- SD card flow ----");
    cfg_emmc = 1'b0; cfg_hc = 1'b1;
    send_cmd(0, 32'd0);                       repeat (10) @(posedge clk);
    send_cmd(8, 32'h0000_01AA); get_resp(48); chk_r1(8, "CMD8");
    chk(resp[39:8] == 32'h0000_01AA, "CMD8 echoes arg");

    pol = 0; ocr = 32'd0;
    while (!ocr[31] && pol < 10) begin
      cmd_r1(55, 32'd0, "CMD55");
      send_cmd(41, 32'h40FF_8000); get_resp(48);
      chk(resp_ok, "ACMD41 response");
      chk(resp[47:40] == 8'h3F && resp[7:0] == 8'hFF, "R3 reserved bits");
      ocr = resp[39:8]; pol = pol + 1;
    end
    chk(ocr[31] && ocr[30], "ACMD41 ready, CCS=1");
    chk(pol == 4, "ACMD41 polls == INIT_POLLS+1");

    send_cmd(2, 32'd0); get_resp(136);
    chk(resp_ok && resp[135:128] == 8'h3F, "CMD2 R2 header");
    chk(resp[7:1] == h_crc7_120(resp[127:8]), "CMD2 CID CRC7");
    send_cmd(3, 32'd0); get_resp(48); chk_r1(3, "CMD3");
    rca = resp[39:24];
    chk(rca != 16'd0, "RCA assigned");

    send_cmd(7, {rca, 16'd0}); get_resp(48); chk_r1(7, "CMD7"); wait_not_busy;

    cmd_r1(55, {rca, 16'd0}, "CMD55");
    cmd_r1(6, 32'd2, "ACMD6");                // 4-bit

    // single block write / read, 4-bit
    fill_pattern(8'h11);
    cmd_r1(24, 32'd5, "CMD24");
    host_write_block(4, 512);
    chk(h_tok == 3'b010, "CRC token = 010 (accepted)");
    wait_not_busy;
    cmd_r1(17, 32'd5, "CMD17");
    host_read_block(4, 512);
    chk(h_ok, "CMD17 read CRC16 ok");
    cmp_blocks(8'h11, "CMD17 data == written data");

    // 2-block read with CMD23 pre-count, then 1-block read of block 6 via backdoor data
    dut.bd_fill_block(7, 8'hA0);
    dut.bd_fill_block(8, 8'hB0);
    cmd_r1(23, 32'd2, "CMD23");
    cmd_r1(18, 32'd7, "CMD18");
    host_read_block(4, 512); chk(h_ok, "CMD18 blk0 crc");
    chk(hbuf[0] == 8'hA0 && hbuf[1] == 8'hA1, "CMD18 blk0 data");
    host_read_block(4, 512); chk(h_ok, "CMD18 blk1 crc");
    chk(hbuf[0] == 8'hB0, "CMD18 blk1 data");
    repeat (50) @(posedge clk);
    chk(dat_bus[0] === 1'b1, "no extra block after CMD23 count");

    // open-ended read aborted by CMD12 mid-block
    cmd_r1(18, 32'd7, "CMD18 open");
    fork
      host_read_block(4, 512);
      begin
        repeat (30) @(posedge clk);
        send_cmd(12, 32'd0); get_resp(48);
      end
    join
    chk_r1(12, "CMD12");
    chk(h_ok, "first block intact despite CMD12");
    repeat (6) @(posedge clk);
    wait_not_busy;
    n = 0;
    for (i = 0; i < 1500; i = i + 1) begin @(posedge clk); if (dat_bus[0] === 1'b0) n = n + 1; end
    chk(n == 0, "BFM stopped streaming after CMD12");

    // 1-bit mode check
    cmd_r1(55, {rca, 16'd0}, "CMD55");
    cmd_r1(6, 32'd0, "ACMD6 1-bit");
    fill_pattern(8'h77);
    cmd_r1(24, 32'd9, "CMD24 1b");
    host_write_block(1, 512);
    chk(h_tok == 3'b010, "1-bit CRC token ok"); wait_not_busy;
    cmd_r1(17, 32'd9, "CMD17 1b");
    host_read_block(1, 512);
    chk(h_ok, "1-bit read CRC ok");
    cmp_blocks(8'h77, "1-bit data compare");

    // error injection
    inj_dat_crc = 1'b1;
    cmd_r1(17, 32'd9, "CMD17 inj");
    host_read_block(1, 512);
    chk(!h_ok, "injected read CRC error detected by host");
    inj_dat_crc = 1'b0;

    inj_wr_tok = 1'b1;
    fill_pattern(8'h22);
    cmd_r1(24, 32'd10, "CMD24 inj");
    host_write_block(1, 512);
    chk(h_tok == 3'b101, "CRC-error token = 101"); wait_not_busy;
    inj_wr_tok = 1'b0;

    bad_crc = 1'b1;
    send_cmd(13, {rca, 16'd0}); get_resp(48);
    chk(!resp_ok, "bad CMD CRC -> no response");
    bad_crc = 1'b0;
    repeat (10) @(posedge clk);
    send_cmd(13, {rca, 16'd0}); get_resp(48); chk_r1(13, "CMD13");
    chk(resp[23+8] == 1'b1, "sticky COM_CRC_ERROR reported in next R1");
    send_cmd(13, {rca, 16'd0}); get_resp(48);
    chk(resp[23+8] == 1'b0, "COM_CRC_ERROR cleared after report");

    // ========================= eMMC =========================
    $display("---- eMMC flow ----");
    cfg_emmc = 1'b1; cfg_hc = 1'b1;
    send_cmd(0, 32'd0); repeat (10) @(posedge clk);
    pol = 0; ocr = 32'd0;
    while (!ocr[31] && pol < 10) begin
      send_cmd(1, 32'h40FF_8080); get_resp(48);
      chk(resp_ok, "CMD1 response");
      ocr = resp[39:8]; pol = pol + 1;
    end
    chk(ocr == 32'hC0FF_8080, "eMMC OCR = 0xC0FF8080 (sector mode)");
    send_cmd(2, 32'd0); get_resp(136); chk(resp_ok, "eMMC CMD2");
    cmd_r1(3, 32'h0001_0000, "eMMC CMD3");
    send_cmd(7, 32'h0001_0000); get_resp(48); chk_r1(7, "eMMC CMD7"); wait_not_busy;

    // SWITCH: BUS_WIDTH (183) = 2 (8-bit)
    send_cmd(6, {6'd0, 2'b11, 8'd183, 8'd2, 5'd0, 3'd0}); get_resp(48); chk_r1(6, "CMD6 SWITCH");
    wait_not_busy;

    cmd_r1(8, 32'd0, "eMMC CMD8");
    host_read_block(8, 512);
    chk(h_ok, "EXT_CSD read CRC ok (8-bit)");
    chk({hbuf[215], hbuf[214], hbuf[213], hbuf[212]} == 32'd64, "EXT_CSD SEC_COUNT == 64");
    chk(hbuf[183] == 8'd2, "EXT_CSD BUS_WIDTH reflects SWITCH");

    fill_pattern(8'h5C);
    cmd_r1(24, 32'd3, "eMMC CMD24");
    host_write_block(8, 512);
    chk(h_tok == 3'b010, "8-bit write token ok"); wait_not_busy;
    cmd_r1(17, 32'd3, "eMMC CMD17");
    host_read_block(8, 512);
    chk(h_ok, "8-bit read CRC ok");
    cmp_blocks(8'h5C, "8-bit data compare");

    repeat (20) @(posedge clk);
    $display("---- %0d checks, %0d errors ----", checks, errors);
    if (errors == 0) $display("PASS"); else $display("FAIL");
    $finish;
  end

endmodule
