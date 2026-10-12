//-----------------------------------------------------------------------------
// tb_csi2_cphy_tx_top_16b.sv  -  self-checking testbench, 16-bit-per-lane PPI
// (module name stays tb_csi2_cphy_tx_top so existing sim setups still work)
//
// FOUR test cases, each starting from a fresh reset:
//   TC1  even widths, no stalls, no gaps           (full-rate baseline)
//   TC2  odd widths (filler cases), random pixel gaps + moderate back-pressure
//   TC3  minimum widths 1,2,1,3 back-to-back, light back-pressure
//   TC4  long line + short line, heavy PHY back-pressure and request stalls
//
// NO TRIGGER / CONTROL SIGNALS, NO UNBOUNDED LOOPS
//   * No wait(...) and no do-while on any DUT signal, no events or flags
//     between processes. Every loop is bounded by a fixed cycle budget, so a
//     broken DUT can only make the test FAIL, never hang the simulation.
//   * Each test runs for a fixed number of clk_i cycles (TEST_CYCLES, a generous
//     upper bound, not a latency model). At the end everything that was
//     expected must have been seen.
//   * The pixel driver is a plain per-clock process (AXI-stream rule: once
//     valid is high, hold data/valid until ready is seen on a clock edge).
//
// NO LATENCY IS MODELLED. The checker is a black box on the PPI pins (sampled
// on tx_word_clk_hs_i, which is asynchronous to clk_i): no hierarchical
// references into the DUT, no skew compensation. It checks ORDER, CONTENT and
// PROTOCOL of whatever the design presents, whenever it presents it.
//
// Reference per lane (N = NUM_LANES), a sequence of 16-bit items:
//     { Res,DI } , WC , PH-CRC , SYNC ,  { Res,DI } , WC , PH-CRC , SYNC ,
//     payload / payload-CRC / filler words dealt round-robin (word j -> lane j%N)
// Payload words = payload bytes, 2 CRC bytes, then 0x00 filler so that
// (WC + 2 + filler) % (2*N) == 0. Byte order inside a word: first byte = LSB.
//
// PPI checks (every accepted beat, every lane):
//   - item == expected (data, or Sync marker + sync type)
//   - TxSendSyncHS only with TxWordValidHS; TxWordValidHS <=> TxDataTransferEnHS
//   - whole PPI bundle stable while a beat is stalled by TxReadyHS
//   - TxRequestHS high on all lanes during every transfer, lanes agree
//   - at the end of each burst (TxRequestHS falling) every lane carried exactly
//     the expected number of items (one packet per burst)
//
// Keep RES_FIRST / EXP_SYNC_TYPE consistent with the DUT.
//-----------------------------------------------------------------------------
`timescale 1ns/1ps

module tb_csi2_cphy_tx_top;

  localparam int         NUM_LANES     = 2;
  localparam logic [1:0] VC            = 2'd0;
  localparam bit         RES_FIRST     = 1'b1;     // byte order of {Res,DI} word
  localparam logic [2:0] EXP_SYNC_TYPE = 3'b011;
  localparam int         TEST_CYCLES   = 6000;     // clk_i cycles per test (upper bound)

  // Test-case line widths (N=2: (WC+2)%4 covers all filler lengths)
  int tc1_w [] = '{8, 20};
  int tc2_w [] = '{7, 33};
  int tc3_w [] = '{1, 2, 1, 3};
  int tc4_w [] = '{64, 5};

  //--------------------------------------------------------------------------
  // DUT signals (16-bit per lane PPI)
  //--------------------------------------------------------------------------
  logic clk_i, rst_ni;

  logic [15:0] cfg_line_width_i;
  logic [7:0]  pix_data_i;
  logic        pix_valid_i;
  logic        pix_ready_o;

  logic cphy_req_o, cphy_req_ready_i;

  logic [NUM_LANES*16-1:0] tx_data_hs_o;
  logic [NUM_LANES-1:0]    tx_request_hs_o;
  logic [NUM_LANES-1:0]    tx_ready_hs_i;
  logic [NUM_LANES-1:0]    tx_word_valid_hs_o;
  logic [NUM_LANES-1:0]    tx_send_sync_hs_o;
  logic [NUM_LANES*3-1:0]  tx_sync_type_hs_o;
  logic [NUM_LANES*2-1:0]  tx_preamble_type_hs_o;
  logic [NUM_LANES*2-1:0]  tx_data_width_hs_o;
  logic [NUM_LANES-1:0]    tx_data_transfer_en_hs_o;
  logic                    tx_word_clk_hs_i;

  csi2_cphy_tx_top #(.NUM_LANES(NUM_LANES), .VC(VC)) dut (.*);

  //--------------------------------------------------------------------------
  // Clocks: PPI word clock is asynchronous to the core clock
  //--------------------------------------------------------------------------
  initial begin clk_i = 0;            forever #5   clk_i = ~clk_i; end
  initial begin tx_word_clk_hs_i = 0; #1.3; forever #3.5 tx_word_clk_hs_i = ~tx_word_clk_hs_i; end

  //--------------------------------------------------------------------------
  // Random back-pressure from the PHY side (percentages set per test)
  //--------------------------------------------------------------------------
  int ready_pct     = 100;   // per-lane TxReadyHS probability, word clock
  int req_ready_pct = 100;   // cphy_req_ready_i probability, core clock

  always @(posedge tx_word_clk_hs_i)
    for (int l = 0; l < NUM_LANES; l++)
      tx_ready_hs_i[l] <= ($urandom_range(0,99) < ready_pct);

  always @(posedge clk_i)
    cphy_req_ready_i <= ($urandom_range(0,99) < req_ready_pct);

  //--------------------------------------------------------------------------
  // Reference model
  //--------------------------------------------------------------------------
  typedef struct {
    bit          is_sync;
    logic [15:0] data;
  } item_t;

  item_t exp_lane [NUM_LANES][$];   // expected 16-bit items per lane, in order
  int    exp_cnt  [NUM_LANES][$];   // expected items per lane, per packet

  int errors    = 0;
  int pkts_seen = 0;

  // CRC-16, x^16+x^12+x^5+1, reflected (0x8408), LSB first
  function automatic logic [15:0] crc_step(input logic [15:0] c, input logic [7:0] b);
    logic [15:0] r;
    r = c;
    for (int k = 0; k < 8; k++) begin
      logic fb;
      fb = r[0] ^ b[k];
      r  = {1'b0, r[15:1]};
      if (fb) r ^= 16'h8408;
    end
    return r;
  endfunction

  task automatic model_packet(input logic [7:0] px [], input int width);
    logic [7:0]  di, b0, b1;
    logic [7:0]  pb [$];
    logic [15:0] phcrc, pcrc, w;
    int          cnt [NUM_LANES];
    int          rem, filler, nwords, lane;
    item_t       it;

    foreach (cnt[l]) cnt[l] = 0;

    // ---- header (two identical halves), PH-CRC over the 4 bytes before it
    di = {VC, 6'h2A};                       // DT = RAW8
    b0 = RES_FIRST ? 8'h00 : di;            // transmitted first
    b1 = RES_FIRST ? di    : 8'h00;
    phcrc = 16'hFFFF;
    phcrc = crc_step(phcrc, b0);
    phcrc = crc_step(phcrc, b1);
    phcrc = crc_step(phcrc, 8'(width & 8'hFF));
    phcrc = crc_step(phcrc, 8'(width >> 8));

    for (int half = 0; half < 2; half++) begin
      for (int l = 0; l < NUM_LANES; l++) begin
        it.is_sync = 0; it.data = {b1, b0};      exp_lane[l].push_back(it);
        it.is_sync = 0; it.data = 16'(width);    exp_lane[l].push_back(it);
        it.is_sync = 0; it.data = phcrc;         exp_lane[l].push_back(it);
        it.is_sync = 1; it.data = 16'h0000;      exp_lane[l].push_back(it);
        cnt[l] += 4;
      end
    end

    // ---- payload + payload CRC footer + filler after the footer
    pcrc = 16'hFFFF;
    for (int i = 0; i < width; i++) begin
      pb.push_back(px[i]);
      pcrc = crc_step(pcrc, px[i]);
    end
    pb.push_back(pcrc[7:0]);
    pb.push_back(pcrc[15:8]);

    rem    = (width + 2) % (2*NUM_LANES);
    filler = (rem == 0) ? 0 : (2*NUM_LANES - rem);
    repeat (filler) pb.push_back(8'h00);

    if (pb.size() % 2 != 0) begin
      $error("model: odd byte count after filler"); errors++;
    end
    nwords = pb.size() / 2;

    for (int j = 0; j < nwords; j++) begin
      w          = {pb[2*j+1], pb[2*j]};
      lane       = j % NUM_LANES;
      it.is_sync = 0;
      it.data    = w;
      exp_lane[lane].push_back(it);
      cnt[lane]++;
    end

    for (int l = 0; l < NUM_LANES; l++) begin
      if (cnt[l] != cnt[0]) begin
        $error("model: lanes unbalanced (lane %0d has %0d, lane 0 has %0d)", l, cnt[l], cnt[0]);
        errors++;
      end
      exp_cnt[l].push_back(cnt[l]);
    end
  endtask

  //--------------------------------------------------------------------------
  // One test case: reset, build reference, run a FIXED number of cycles
  //--------------------------------------------------------------------------
  task automatic run_test(input int tc, input string name,
                          input int ready_p, input int req_p, input int gap_p,
                          input int widths []);
    logic [7:0] px_list [$];
    int         w_list  [$];
    int         idx, total, e0;

    e0 = errors;

    // ---- reset (monitor is idle while rst_ni is low)
    pix_valid_i      <= 1'b0;
    pix_data_i       <= 8'h00;
    cfg_line_width_i <= 16'd0;
    rst_ni           <= 1'b0;
    repeat (6) @(posedge clk_i);

    // ---- clear reference, set stimulus profile
    for (int l = 0; l < NUM_LANES; l++) begin
      exp_lane[l].delete();
      exp_cnt[l].delete();
    end
    pkts_seen     = 0;
    ready_pct     = ready_p;
    req_ready_pct = req_p;

    // ---- build all lines of this test
    foreach (widths[k]) begin
      logic [7:0] px [];
      px = new[widths[k]];
      for (int i = 0; i < widths[k]; i++) begin
        px[i] = 8'($urandom);
        px_list.push_back(px[i]);
        w_list.push_back((i == 0) ? widths[k] : 0);   // width marks first pixel
      end
      model_packet(px, widths[k]);
    end
    total = px_list.size();
    idx   = 0;

    $display("[%0t] ---- TC%0d: %s (lines=%0d, pixels=%0d, ready=%0d%% req=%0d%% gap=%0d%%)",
             $time, tc, name, widths.size(), total, ready_p, req_p, gap_p);

    rst_ni <= 1'b1;
    repeat (2) @(posedge clk_i);

    // ---- fixed-length run: per-clock pixel driver, nothing waits on the DUT
    repeat (TEST_CYCLES) begin
      @(posedge clk_i);

      // acceptance: valid && ready both seen high at this edge
      if (pix_valid_i && pix_ready_o) idx++;

      // free to change only if not holding an un-accepted pixel
      if (!(pix_valid_i && !pix_ready_o)) begin
        if (idx < total && ($urandom_range(0,99) >= gap_p)) begin
          pix_data_i  <= px_list[idx];
          pix_valid_i <= 1'b1;
          if (w_list[idx] != 0) cfg_line_width_i <= 16'(w_list[idx]);
        end else begin
          pix_valid_i <= 1'b0;
        end
      end
    end

    // ---- end-of-test checks (everything expected must have been seen)
    if (idx != total) begin
      $error("TC%0d: pixel source accepted only %0d of %0d pixels", tc, idx, total);
      errors++;
    end
    if (pkts_seen != widths.size()) begin
      $error("TC%0d: %0d bursts seen, expected %0d", tc, pkts_seen, widths.size());
      errors++;
    end
    for (int l = 0; l < NUM_LANES; l++) begin
      if (exp_lane[l].size() != 0) begin
        $error("TC%0d: lane %0d: %0d expected items never seen", tc, l, exp_lane[l].size());
        errors++;
      end
      if (exp_cnt[l].size() != 0) begin
        $error("TC%0d: lane %0d: %0d expected bursts never completed", tc, l, exp_cnt[l].size());
        errors++;
      end
    end
    if (|tx_request_hs_o) begin
      $error("TC%0d: TxRequestHS still high at end of test", tc);
      errors++;
    end

    if (errors == e0) $display("[%0t] TC%0d PASSED", $time, tc);
    else              $display("[%0t] TC%0d FAILED (%0d errors)", $time, tc, errors - e0);
  endtask

  //--------------------------------------------------------------------------
  // Test sequence: plain sequential code, fixed length
  //--------------------------------------------------------------------------
  initial begin
    rst_ni           = 1'b0;
    pix_valid_i      = 1'b0;
    pix_data_i       = 8'h00;
    cfg_line_width_i = 16'd0;
    tx_ready_hs_i    = '1;
    cphy_req_ready_i = 1'b1;
    repeat (3) @(posedge clk_i);

    //        tc  name                                     ready req gap  widths
    run_test(1, "even widths, no stalls",                  100, 100,  0, tc1_w);
    run_test(2, "odd widths, gaps + back-pressure",         50,  66, 25, tc2_w);
    run_test(3, "minimum widths back-to-back",              75,  80,  0, tc3_w);
    run_test(4, "long line, heavy back-pressure",           30,  33, 50, tc4_w);

    $display("");
    $display("============================================================");
    if (errors == 0) $display(" ALL 4 TESTS PASSED");
    else             $display(" TEST FAILED: %0d errors in total", errors);
    $display("============================================================");
    $finish;
  end

  //--------------------------------------------------------------------------
  // Monitor: black-box PPI checker on the PPI (word) clock
  //--------------------------------------------------------------------------
  localparam int BUNDLE_W = NUM_LANES*16 + NUM_LANES + NUM_LANES + NUM_LANES;

  wire [NUM_LANES-1:0] act    = tx_data_transfer_en_hs_o;
  // a lane that is not transferring does not block the common transfer
  // (change here if your PHY needs every lane's TxReadyHS)
  wire                 xfer   = (|act) && (&(tx_ready_hs_i | ~act));
  wire [BUNDLE_W-1:0]  bundle = {tx_data_hs_o, tx_word_valid_hs_o,
                                 tx_send_sync_hs_o, tx_data_transfer_en_hs_o};

  int                  rx_items [NUM_LANES];
  logic                req_prev   = 1'b0;
  bit                  stall_prev = 1'b0;
  logic [BUNDLE_W-1:0] prev_bundle;

  always @(posedge tx_word_clk_hs_i) begin
    if (!rst_ni) begin
      req_prev   = 1'b0;
      stall_prev = 1'b0;
    end else begin
      bit req_now;
      req_now = |tx_request_hs_o;

      // lanes must agree on the burst request
      if ((|tx_request_hs_o) && !(&tx_request_hs_o)) begin
        $error("[%0t] TxRequestHS differs between lanes (%b)", $time, tx_request_hs_o);
        errors++;
      end

      // ---- burst start
      if (req_now && !req_prev)
        foreach (rx_items[l]) rx_items[l] = 0;

      // ---- (a) PPI bundle must be stable while a beat is stalled
      if (stall_prev && (|act) && (bundle !== prev_bundle)) begin
        $error("[%0t] PPI outputs changed during stall", $time);
        errors++;
      end
      stall_prev  = (|act) && !xfer;
      prev_bundle = bundle;

      // ---- (b) request must be high while data is presented
      if ((|act) && !(&tx_request_hs_o)) begin
        $error("[%0t] TxRequestHS not high during data transfer", $time);
        errors++;
      end

      // ---- (c) accepted beat: check every lane
      if (xfer) begin
        for (int lane = 0; lane < NUM_LANES; lane++) begin
          bit          wv, ss;
          logic [15:0] got;
          item_t       it;
          wv  = tx_word_valid_hs_o[lane];
          ss  = tx_send_sync_hs_o [lane];
          got = tx_data_hs_o[lane*16 +: 16];

          if (ss && !wv) begin
            $error("[%0t] lane %0d: TxSendSyncHS without TxWordValidHS", $time, lane);
            errors++;
          end
          if (wv && !act[lane]) begin
            $error("[%0t] lane %0d: TxWordValidHS without TxDataTransferEnHS", $time, lane);
            errors++;
          end
          if (act[lane] && !wv) begin
            $error("[%0t] lane %0d: TxDataTransferEnHS without TxWordValidHS", $time, lane);
            errors++;
          end

          if (wv) begin
            if (exp_lane[lane].size() == 0) begin
              $error("[%0t] lane %0d: unexpected extra item (data %04h sync %0b)",
                     $time, lane, got, ss);
              errors++;
            end else begin
              it = exp_lane[lane].pop_front();
              if (it.is_sync !== ss) begin
                $error("[%0t] lane %0d item %0d: sync flag got %0b expected %0b",
                       $time, lane, rx_items[lane], ss, it.is_sync);
                errors++;
              end else if (ss) begin
                if (tx_sync_type_hs_o[lane*3 +: 3] !== EXP_SYNC_TYPE) begin
                  $error("[%0t] lane %0d item %0d: sync type got %0b expected %0b",
                         $time, lane, rx_items[lane],
                         tx_sync_type_hs_o[lane*3 +: 3], EXP_SYNC_TYPE);
                  errors++;
                end
              end else if (got !== it.data) begin
                $error("[%0t] lane %0d item %0d: got %04h expected %04h",
                       $time, lane, rx_items[lane], got, it.data);
                errors++;
              end
            end
            rx_items[lane]++;
          end
        end
      end

      // ---- burst end (TxRequestHS falling): per-lane item count must match
      if (!req_now && req_prev) begin
        if (exp_cnt[0].size() == 0) begin
          $error("[%0t] burst ended but no packet was expected", $time);
          errors++;
        end else begin
          for (int lane = 0; lane < NUM_LANES; lane++) begin
            int e;
            e = exp_cnt[lane].pop_front();
            if (rx_items[lane] != e) begin
              $error("[%0t] lane %0d carried %0d 16-bit items in burst, expected %0d",
                     $time, lane, rx_items[lane], e);
              errors++;
            end
          end
        end
        $display("[%0t] burst %0d finished (lane0 items %0d)", $time, pkts_seen, rx_items[0]);
        pkts_seen++;
      end

      req_prev = req_now;
    end
  end

endmodule