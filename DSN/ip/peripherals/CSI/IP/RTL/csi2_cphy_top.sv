//-----------------------------------------------------------------------------
// csi2_cphy_tx_top.sv
// RAW8 pixels -> CSI-2 packets -> C-PHY TX PPI (16-bit per lane)
//
//  pix_* -> csi2_raw8_packer -> csi2_tx -> lane_distribute -> tx_ppi -> PHY
//
// Changes vs. the 32-bit version:
//  * lane_distribute and tx_ppi now work on ONE 16-bit word per lane per beat,
//    so every PPI-side vector is narrower:
//        tx_data_hs_o         NUM_LANES*16   (was *32)
//        tx_word_valid_hs_o   NUM_LANES      (was *2)
//        tx_send_sync_hs_o    NUM_LANES      (was *2)
//        tx_sync_type_hs_o    NUM_LANES*3    (was *6)
//        cphy_data  NUM_LANES*16, cphy_keep NUM_LANES*2, cphy_sync NUM_LANES
//  * tx_packet_start_o / tx_packet_end_o of the PPI are not part of the
//    standard PPI and are left unconnected here.
//  * tx_word_clk_hs_i comes from the PHY; the PPI crosses clk_i -> that clock.
//-----------------------------------------------------------------------------
import csi2_pkg::*;
module csi2_cphy_tx_top #(
  parameter int         NUM_LANES   = 2,
  parameter logic [1:0] VC          = 2'd0
)(
  input  logic clk_i,
  input  logic rst_ni,

  // Configuration
  input  logic [15:0] cfg_line_width_i,   // pixels (= bytes) per line

  // RAW8 pixel stream
  input  logic [7:0]  pix_data_i,
  input  logic        pix_valid_i,
  output logic        pix_ready_o,

  // C-PHY request interface
  output logic        cphy_req_o,
  input  logic        cphy_req_ready_i,

  // C-PHY TX PPI (16-bit per lane)
  output logic [NUM_LANES*16-1:0] tx_data_hs_o,
  output logic [NUM_LANES-1:0]    tx_request_hs_o,
  input  logic [NUM_LANES-1:0]    tx_ready_hs_i,
  output logic [NUM_LANES-1:0]    tx_word_valid_hs_o,
  output logic [NUM_LANES-1:0]    tx_send_sync_hs_o,
  output logic [NUM_LANES*3-1:0]  tx_sync_type_hs_o,
  output logic [NUM_LANES*2-1:0]  tx_preamble_type_hs_o,
  output logic [NUM_LANES*2-1:0]  tx_data_width_hs_o,
  output logic [NUM_LANES-1:0]    tx_data_transfer_en_hs_o,
  input  logic                    tx_word_clk_hs_i
);

  // RAW8 packer <-> csi2_tx
  logic        pkt_valid, pkt_ready;
  logic [5:0]  pkt_dt;
  logic [15:0] pkt_wc;
  logic [7:0]  px_data;
  logic        px_valid, px_ready;

  // csi2_tx <-> distributor
  logic [7:0]  csi2_byte_data;
  logic        csi2_byte_valid, csi2_byte_ready, csi2_byte_sop, csi2_byte_eop;
  logic        csi2_byte_sync;
  logic        csi2_tx_active, csi2_tx_done;

  // distributor <-> PPI (one 16-bit word per lane per beat)
  logic [NUM_LANES*16-1:0] cphy_data;
  logic [NUM_LANES-1:0]    cphy_valid, cphy_ready;
  logic [NUM_LANES*2-1:0]  cphy_keep;
  logic                    cphy_last, cphy_burst;
  logic [NUM_LANES-1:0]    cphy_sync;

  // Common word accepted only when every active lane is ready
  // (idle lanes report ready inside the PPI).
  logic cphy_all_ready;
  assign cphy_all_ready = &cphy_ready;

  csi2_raw8_packer u_raw8 (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .cfg_line_width_i(cfg_line_width_i),
    .pix_data_i(pix_data_i), .pix_valid_i(pix_valid_i), .pix_ready_o(pix_ready_o),
    .pkt_valid_o(pkt_valid), .pkt_ready_i(pkt_ready),
    .pkt_dt_o(pkt_dt), .pkt_wc_o(pkt_wc),
    .px_data_o(px_data), .px_valid_o(px_valid), .px_ready_i(px_ready)
  );

  csi2_tx #(.NUM_LANES(NUM_LANES)) u_csi2_tx (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .pkt_valid_i(pkt_valid), .pkt_ready_o(pkt_ready),
    .pkt_dt_i(pkt_dt), .pkt_vc_i(VC), .pkt_wc_i(pkt_wc),
    .pkt_short_data_i(16'h0000),
    .px_valid_i(px_valid), .px_ready_o(px_ready), .px_data_i(px_data),
    .byte_valid_o(csi2_byte_valid), .byte_ready_i(csi2_byte_ready),
    .byte_data_o(csi2_byte_data),
    .byte_sop_o(csi2_byte_sop), .byte_eop_o(csi2_byte_eop),
    .byte_sync_o(csi2_byte_sync),
    .tx_active_o(csi2_tx_active), .tx_done_o(csi2_tx_done)
  );

  csi2_cphy_lane_distribute #(.NUM_LANES(NUM_LANES)) u_lane_distribute (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .byte_valid_i(csi2_byte_valid), .byte_ready_o(csi2_byte_ready),
    .byte_data_i(csi2_byte_data),
    .byte_sop_i(csi2_byte_sop), .byte_eop_i(csi2_byte_eop),
    .byte_sync_i(csi2_byte_sync),
    .tx_active_i(csi2_tx_active),
    .cphy_req_o(cphy_req_o), .cphy_req_ready_i(cphy_req_ready_i),
    .cphy_burst_o(cphy_burst),
    .cphy_data_o(cphy_data), .cphy_valid_o(cphy_valid),
    .cphy_ready_i(cphy_all_ready),
    .cphy_keep_o(cphy_keep), .cphy_last_o(cphy_last),
    .cphy_sync_o(cphy_sync)
  );

  csi2_cphy_tx_ppi #(.NUM_LANES(NUM_LANES)) u_cphy_tx_ppi (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .cphy_data_i(cphy_data), .cphy_valid_i(cphy_valid),
    .cphy_ready_o(cphy_ready),
    .cphy_keep_i(cphy_keep), .cphy_last_i(cphy_last),
    .cphy_burst_i(cphy_burst),
    .cphy_sync_i(cphy_sync),
    .tx_word_clk_hs_i(tx_word_clk_hs_i),
    .tx_data_hs_o(tx_data_hs_o), .tx_request_hs_o(tx_request_hs_o),
    .tx_ready_hs_i(tx_ready_hs_i),
    .tx_word_valid_hs_o(tx_word_valid_hs_o),
    .tx_send_sync_hs_o(tx_send_sync_hs_o),
    .tx_sync_type_hs_o(tx_sync_type_hs_o),
    .tx_preamble_type_hs_o(tx_preamble_type_hs_o),
    .tx_data_width_hs_o(tx_data_width_hs_o),
    .tx_data_transfer_en_hs_o(tx_data_transfer_en_hs_o),
    .tx_packet_start_o(),
    .tx_packet_end_o()
  );

endmodule