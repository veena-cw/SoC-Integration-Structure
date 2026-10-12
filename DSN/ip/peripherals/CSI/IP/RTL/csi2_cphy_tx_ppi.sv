//-----------------------------------------------------------------------------
// csi2_cphy_tx_ppi.sv - C-PHY TX PPI adapter, 16-bit PPI per lane
//
//   lane_distribute --(clk_i)--> [write side | asynchronous_fifo | read side]
//                                              --(tx_word_clk_hs_i)--> PHY
//
// clk_i domain          : everything coming from the lane distributor
// tx_word_clk_hs_i      : every tx_* output and tx_ready_hs_i
//                         (spec: TxWordClkHS synchronizes all HS PPI signals;
//                          16-bit width => exactly 1/7 of the symbol rate)
// The PHY is NOT part of this design; it samples tx_* on tx_word_clk_hs_i.
//
// The clock-domain crossing uses the project's own `asynchronous_fifo`
// (with synchronizer, wptr_handler, rptr_handler, fifo_mem) and the project's
// `reset_synchronizer` (one instance per clock domain). Add those files to
// the compile list; this file contains no other helper modules. ASSUMPTION: data_out shows the head entry while
// !empty (first-word-fall-through, i.e. fifo_mem does
// `assign data_out = fifo[b_rptr[PTR_WIDTH-1:0]]`) and r_en pops it.
//
// CHECK against your PPI spec: TxDataWidthHS encoding (DATA_WIDTH_ENC),
// TxSyncTypeHS encoding, TxPreambleTypeHS width, and per-lane vs single-bit
// packet start/end.
//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------
// PPI adapter
//-----------------------------------------------------------------------------
module csi2_cphy_tx_ppi #(
  parameter int         NUM_LANES       = 2,
  parameter logic [2:0] SYNC_TYPE       = 3'b011,
  parameter logic [1:0] DATA_WIDTH_ENC  = 2'b01,   // 16-bit  (CHECK vs spec)
  parameter int         FIFO_DEPTH      = 8        // must be a power of 2
)(
  input  logic clk_i,
  input  logic rst_ni,

  // ---------------- clk_i domain (from lane distributor) ----------------
  input  logic [NUM_LANES*16-1:0] cphy_data_i,
  input  logic [NUM_LANES-1:0]    cphy_valid_i,
  output logic [NUM_LANES-1:0]    cphy_ready_o,
  input  logic [NUM_LANES*2-1:0]  cphy_keep_i,
  input  logic                    cphy_last_i,
  input  logic                    cphy_burst_i,
  input  logic [NUM_LANES-1:0]    cphy_sync_i,

  // ---------------- tx_word_clk_hs_i domain (to/from PHY) ----------------
  input  logic                    tx_word_clk_hs_i,
  output logic [NUM_LANES*16-1:0] tx_data_hs_o,
  output logic [NUM_LANES-1:0]    tx_request_hs_o,
  input  logic [NUM_LANES-1:0]    tx_ready_hs_i,
  output logic [NUM_LANES-1:0]    tx_word_valid_hs_o,
  output logic [NUM_LANES-1:0]    tx_send_sync_hs_o,
  output logic [NUM_LANES*3-1:0]  tx_sync_type_hs_o,
  output logic [NUM_LANES*2-1:0]  tx_preamble_type_hs_o,
  output logic [NUM_LANES*2-1:0]  tx_data_width_hs_o,
  output logic [NUM_LANES-1:0]    tx_data_transfer_en_hs_o,
  output logic [NUM_LANES-1:0]    tx_packet_start_o,
  output logic [NUM_LANES-1:0]    tx_packet_end_o
);

  initial begin
    if (NUM_LANES < 1) $error("NUM_LANES must be >= 1");
    if ((FIFO_DEPTH < 4) || ((FIFO_DEPTH & (FIFO_DEPTH-1)) != 0))
      $error("FIFO_DEPTH must be a power of 2 and >= 4");
  end

  // FIFO word layout
  localparam int W_DATA = NUM_LANES*16;
  localparam int W_KEEP = NUM_LANES*2;
  localparam int W_SYNC = NUM_LANES;
  localparam int W_VAL  = NUM_LANES;
  localparam int WIDTH  = W_DATA + W_KEEP + W_SYNC + W_VAL + 3; // +start,last,burst

  //--------------------------------------------------------------------------
  // Resets (one synchroniser per domain)
  //--------------------------------------------------------------------------
  logic wrst_n, rrst_n;
  reset_synchronizer u_wrst (
    .clk           (clk_i),
    .async_reset_n (rst_ni),
    .sync_reset_n  (wrst_n)
  );
  reset_synchronizer u_rrst (
    .clk           (tx_word_clk_hs_i),
    .async_reset_n (rst_ni),
    .sync_reset_n  (rrst_n)
  );

  //--------------------------------------------------------------------------
  // WRITE SIDE (clk_i)
  //--------------------------------------------------------------------------
  logic wfull, wr_fire_w, any_valid_w, in_pkt_q, pkt_start_w;
  logic [WIDTH-1:0] wdata;

  assign any_valid_w  = |cphy_valid_i;
  assign cphy_ready_o = {NUM_LANES{!wfull}};     // no async input in this path
  assign wr_fire_w    = any_valid_w && !wfull;
  assign pkt_start_w  = !in_pkt_q;

  always_ff @(posedge clk_i or negedge wrst_n) begin
    if (!wrst_n)        in_pkt_q <= 1'b0;
    else if (wr_fire_w) in_pkt_q <= !cphy_last_i;
  end

  assign wdata = { pkt_start_w, cphy_last_i, cphy_burst_i,
                   cphy_valid_i, cphy_sync_i, cphy_keep_i, cphy_data_i };

  //--------------------------------------------------------------------------
  // Asynchronous FIFO (clk_i -> tx_word_clk_hs_i): project FIFO
  //--------------------------------------------------------------------------
  logic [WIDTH-1:0] rdata;
  logic             rempty, rinc;

  asynchronous_fifo #(
    .DEPTH      (FIFO_DEPTH),
    .DATA_WIDTH (WIDTH)
  ) u_fifo (
    .wclk     (clk_i),
    .wrst_n   (wrst_n),
    .rclk     (tx_word_clk_hs_i),
    .rrst_n   (rrst_n),
    .w_en     (wr_fire_w),
    .r_en     (rinc),
    .data_in  (wdata),
    .data_out (rdata),
    .full     (wfull),
    .empty    (rempty)
  );

  //--------------------------------------------------------------------------
  // READ SIDE (tx_word_clk_hs_i): all tx_* outputs
  //--------------------------------------------------------------------------
  logic [W_DATA-1:0] h_data;
  logic [W_KEEP-1:0] h_keep;
  logic [W_SYNC-1:0] h_sync;
  logic [W_VAL-1:0]  h_valid;
  logic              h_burst, h_last, h_start;
  logic              head_ok_w, rd_in_pkt_q;

  assign {h_start, h_last, h_burst, h_valid, h_sync, h_keep, h_data} = rdata;
  assign head_ok_w = !rempty;

  // Pop when every lane that has data is ready (tx_ready_hs_i is already in
  // this clock domain, so no synchroniser is needed).
  assign rinc = head_ok_w && (&(tx_ready_hs_i | ~h_valid));

  // Keeps request high across a mid-packet FIFO underrun
  always_ff @(posedge tx_word_clk_hs_i or negedge rrst_n) begin
    if (!rrst_n)   rd_in_pkt_q <= 1'b0;
    else if (rinc) rd_in_pkt_q <= !h_last;
  end

  assign tx_data_hs_o = h_data;

  always_comb begin
    tx_request_hs_o          = '0;
    tx_word_valid_hs_o       = '0;
    tx_send_sync_hs_o        = '0;
    tx_sync_type_hs_o        = '0;
    tx_preamble_type_hs_o    = '0;
    tx_data_width_hs_o       = '0;
    tx_data_transfer_en_hs_o = '0;
    tx_packet_start_o        = '0;
    tx_packet_end_o          = '0;

    for (int lane = 0; lane < NUM_LANES; lane++) begin
      tx_request_hs_o[lane]          = (head_ok_w && h_burst) || rd_in_pkt_q;

      tx_packet_start_o[lane]        = head_ok_w && h_start;
      tx_packet_end_o[lane]          = head_ok_w && h_last;

      // one 16-bit word per lane per beat
      tx_data_transfer_en_hs_o[lane] = head_ok_w && h_valid[lane];
      tx_word_valid_hs_o[lane]       = head_ok_w && h_valid[lane];
      tx_send_sync_hs_o[lane]        = head_ok_w && h_valid[lane] && h_sync[lane];

      tx_sync_type_hs_o[lane*3 +: 3]     = SYNC_TYPE;
      tx_preamble_type_hs_o[lane*2 +: 2] = 2'b00;
      tx_data_width_hs_o[lane*2 +: 2]    = DATA_WIDTH_ENC;
    end
  end
endmodule