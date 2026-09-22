
// -----------------------------------------------------------------------------
// csi2_tx.sv
//
// Simple single-lane MIPI CSI-2 packet-layer transmitter.
//
// Builds CSI-2 short packets (4 bytes: Data ID, 16-bit Data Field, ECC) and
// long packets (4-byte header + WC payload bytes + 2-byte CRC), one byte per
// clock cycle, from a generic pixel/payload byte stream.
//
// This is the digital protocol layer only. It produces the byte sequence
// that would be handed to a D-PHY transmitter (which drives LP->HS
// transitions, sync-byte insertion and serialization); that PHY layer is
// vendor hard-IP and is out of scope here.
//
// Packet request interface (one in-flight packet at a time):
//   pkt_valid_i / pkt_ready_o : handshake to start a new packet
//   pkt_long_i                : 1 = long packet (video/generic payload),
//                                0 = short packet (frame/line sync, generic)
//   pkt_dt_i   [5:0]          : CSI-2 Data Type
//   pkt_len_i  [15:0]         : long packet: Word Count (payload byte count)
//                                short packet: 16-bit Data Field value
//
// For long packets, after the header is accepted the core pulls exactly
// pkt_len_i payload bytes from the px_data_i/px_valid_i stream (px_ready_o
// gates it). The producer must supply exactly that many bytes.
// -----------------------------------------------------------------------------

import csi2_pkg::*;

module csi2_tx #(
  parameter bit [1:0] VC = 2'd0
) (
  input  logic        clk,
  input  logic        rst_n,

  // packet request
  input  logic         pkt_valid_i,
  output logic         pkt_ready_o,
  input  logic         pkt_long_i,
  input  logic  [5:0]  pkt_dt_i,
  input  logic  [15:0] pkt_len_i,

  // payload byte stream (long packets only)
  input  logic  [7:0]  px_data_i,
  input  logic         px_valid_i,
  output logic         px_ready_o,

  // serialized CSI-2 byte stream out (1 byte/cycle)
  output logic  [7:0]  byte_data_o,
  output logic         byte_valid_o,
  output logic         byte_sop_o,   // first byte of a new packet (header byte 0)
  output logic         byte_eop_o    // last byte of the current packet
);

  typedef enum logic [1:0] {
    ST_IDLE,
    ST_HDR,
    ST_PAYLOAD,
    ST_CRC
  } state_e;

  state_e        state_q;
  logic  [7:0]   hdr_byte_q [4];
  logic  [1:0]   hdr_beat_q;
  logic          is_long_q;
  logic  [15:0]  wc_q;
  logic  [15:0]  payload_cnt_q;
  logic  [15:0]  crc_calc_q;
  logic  [7:0]   crc_byte_q [2];
  logic          crc_beat_q;

  logic  [23:0]  hdr_word;
  logic  [7:0]   hdr_ecc;

  assign hdr_word = {pkt_len_i[15:8], pkt_len_i[7:0], VC, pkt_dt_i};

  csi2_ecc_gen u_ecc_gen (
    .header (hdr_word),
    .ecc    (hdr_ecc)
  );

  assign pkt_ready_o = (state_q == ST_IDLE);
  assign px_ready_o  = (state_q == ST_PAYLOAD);

  logic [15:0] crc_calc_next;
  assign crc_calc_next = csi2_crc16_next(crc_calc_q, px_data_i);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q       <= ST_IDLE;
      hdr_beat_q    <= 2'd0;
      is_long_q     <= 1'b0;
      wc_q          <= 16'd0;
      payload_cnt_q <= 16'd0;
      crc_calc_q    <= CSI2_CRC16_INIT;
      crc_beat_q    <= 1'b0;
      byte_data_o   <= 8'd0;
      byte_valid_o  <= 1'b0;
      byte_sop_o    <= 1'b0;
      byte_eop_o    <= 1'b0;
      for (int i = 0; i < 4; i++) hdr_byte_q[i] <= 8'd0;
      for (int i = 0; i < 2; i++) crc_byte_q[i] <= 8'd0;
    end else begin
      byte_valid_o <= 1'b0;
      byte_sop_o   <= 1'b0;
      byte_eop_o   <= 1'b0;

      unique case (state_q)

        ST_IDLE: begin
          hdr_beat_q <= 2'd0;
          if (pkt_valid_i) begin
            hdr_byte_q[0] <= {VC, pkt_dt_i};
            hdr_byte_q[1] <= pkt_len_i[7:0];
            hdr_byte_q[2] <= pkt_len_i[15:8];
            hdr_byte_q[3] <= hdr_ecc;
            is_long_q     <= pkt_long_i;
            wc_q          <= pkt_len_i;
            payload_cnt_q <= 16'd0;
            crc_calc_q    <= CSI2_CRC16_INIT;
            state_q       <= ST_HDR;
          end
        end

        ST_HDR: begin
          byte_data_o  <= hdr_byte_q[hdr_beat_q];
          byte_valid_o <= 1'b1;
          byte_sop_o   <= (hdr_beat_q == 2'd0);
          if (hdr_beat_q == 2'd3) begin
            hdr_beat_q <= 2'd0;
            if (is_long_q) begin
              if (wc_q == 16'd0) begin
                // zero-length payload: CRC is over an empty byte range
                crc_byte_q[0] <= CSI2_CRC16_INIT[7:0];
                crc_byte_q[1] <= CSI2_CRC16_INIT[15:8];
                crc_beat_q    <= 1'b0;
                state_q       <= ST_CRC;
              end else begin
                state_q <= ST_PAYLOAD;
              end
            end else begin
              byte_eop_o <= 1'b1;
              state_q    <= ST_IDLE;
            end
          end else begin
            hdr_beat_q <= hdr_beat_q + 2'd1;
          end
        end

        ST_PAYLOAD: begin
          if (px_valid_i) begin
            byte_data_o   <= px_data_i;
            byte_valid_o  <= 1'b1;
            crc_calc_q    <= crc_calc_next;
            payload_cnt_q <= payload_cnt_q + 16'd1;
            if (payload_cnt_q + 16'd1 == wc_q) begin
              crc_byte_q[0] <= crc_calc_next[7:0];
              crc_byte_q[1] <= crc_calc_next[15:8];
              crc_beat_q    <= 1'b0;
              state_q       <= ST_CRC;
            end
          end
        end

        ST_CRC: begin
          byte_data_o  <= crc_byte_q[crc_beat_q];
          byte_valid_o <= 1'b1;
          if (crc_beat_q == 1'b1) begin
            byte_eop_o <= 1'b1;
            state_q    <= ST_IDLE;
          end
          crc_beat_q <= crc_beat_q + 1'b1;
        end

        default: state_q <= ST_IDLE;

      endcase
    end
  end

endmodule : csi2_tx
