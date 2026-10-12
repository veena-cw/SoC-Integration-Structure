//-----------------------------------------------------------------------------
// csi2_raw8_packer.sv
//
// RAW8 pixel -> CSI-2 byte-stream front end (sits in front of csi2_tx).
//
// RAW8 = 1 pixel = 1 byte, so no bit packing is needed. The real job of this
// block is flow control and packet sequencing:
//   * On the first pixel of a line it issues a long-packet request
//     (DT = 0x2A, WC = cfg_line_width_i) to csi2_tx.
//   * It holds the pixel stream off (px_ready = 0) until csi2_tx has finished
//     the header and entered payload, so no pixel is ever sampled early.
//   * It counts accepted pixels and returns to idle after WC pixels.
//
// Pixel source rules (AXI-stream style): once pix_valid_i is high, keep
// pix_data_i and pix_valid_i stable until pix_ready_o is high on a clock edge.
//-----------------------------------------------------------------------------
module csi2_raw8_packer #(
  parameter logic [5:0] DT_RAW8 = 6'h2A
)(
  input  logic        clk_i,
  input  logic        rst_ni,

  // Configuration: pixels per line (must be >= 1; latched at line start)
  input  logic [15:0] cfg_line_width_i,

  // Pixel input
  // pixel source to the RAW8 packer
  input  logic [7:0]  pix_data_i,
  input  logic        pix_valid_i,
  output logic        pix_ready_o,

  // Packet request to csi2_tx
  //RAW8 Packer to csi_tx to start a packet.
  output logic        pkt_valid_o,
  input  logic        pkt_ready_i,
  output logic [5:0]  pkt_dt_o,
  output logic [15:0] pkt_wc_o,

  // Payload byte stream to csi2_tx
  //RAW8 packer and csi2_tx to transfer payload
  output logic [7:0]  px_data_o,
  output logic        px_valid_o,
  input  logic        px_ready_i
);

  typedef enum logic [1:0] { S_IDLE, S_REQ, S_DATA } state_t;
  state_t state_q;

  logic [15:0] wc_q;
  logic [15:0] remaining_q;

  wire pkt_fire = pkt_valid_o && pkt_ready_i;
  wire pix_fire = px_valid_o  && px_ready_i;

  assign pkt_dt_o    = DT_RAW8;
  assign pkt_wc_o    = wc_q;
  assign pkt_valid_o = (state_q == S_REQ);

  // Pass-through, gated by state. valid never depends on ready.
  assign px_data_o   = pix_data_i;
  assign px_valid_o  = (state_q == S_DATA) && pix_valid_i;
  assign pix_ready_o = (state_q == S_DATA) && px_ready_i;

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q     <= S_IDLE;
      wc_q        <= '0;
      remaining_q <= '0;
    end else begin
      case (state_q)
        S_IDLE: begin
          if (pix_valid_i && (cfg_line_width_i != 16'd0)) begin
            wc_q    <= cfg_line_width_i;
            state_q <= S_REQ;
          end
        end

        S_REQ: begin
          if (pkt_fire) begin
            remaining_q <= wc_q;
            state_q     <= S_DATA;
          end
        end

        S_DATA: begin
          if (pix_fire) begin
            if (remaining_q == 16'd1) state_q <= S_IDLE;
            remaining_q <= remaining_q - 16'd1;
          end
        end

        default: state_q <= S_IDLE;
      endcase
    end
  end

endmodule
