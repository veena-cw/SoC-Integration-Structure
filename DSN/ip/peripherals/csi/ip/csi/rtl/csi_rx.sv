
// -----------------------------------------------------------------------------
// csi2_rx.sv
//
// Simple single-lane MIPI CSI-2 packet-layer receiver.
//
// Consumes a 1-byte/cycle byte stream (as would be produced by a D-PHY
// byte-domain receiver -- SERDES/deskew/sync-byte alignment is vendor hard
// IP and out of scope here) and parses CSI-2 short and long packets:
//   - 4-byte short/header word: Data ID + 16-bit Data Field/Word Count + ECC
//   - ECC(24,18)-style single-bit correct / double-bit detect on the header
//     (reuses the verified csi2_ecc_dec block -- no duplicated logic)
//   - for long packets (DT > 6'h0F): Word Count payload bytes followed by a
//     2-byte CRC-16, checked against a running CRC over the payload
//
// The header decoder is fed combinationally: bytes 0-2 come from registers
// latched on the previous 3 cycles, and byte 3 (ECC) is muxed in live from
// rx_data_i on the very cycle it arrives. This lets the routing decision
// (short vs. long, word count, error flags) be made on the same cycle the
// 4th header byte is received -- no bubble cycle, so a byte-for-byte
// continuous stream (as csi2_tx produces) is never dropped.
//
// `sop_i` is an optional synchronization input: pulse it high on the same
// cycle as rx_data_i when the byte stream is known to begin a fresh packet
// (e.g. on a D-PHY LP->HS burst start). This forces the parser back to the
// header-collection state even if it had been mid-packet, matching how a
// real D-PHY exposes burst boundaries. Tie it low if unused; the core will
// still track packet boundaries purely from Word Count fields.
// -----------------------------------------------------------------------------

import csi2_pkg::*;
//`include "csi2_pkg.sv"

module csi2_rx (
  input  logic         clk,
  input  logic         rst_n,

  input  logic  [7:0]  rx_data_i,
  input  logic          rx_valid_i,
  input  logic          sop_i,

  // decoded payload byte stream (long packets)
  output logic  [7:0]  px_data_o,
  output logic          px_valid_o,
  output logic          px_last_o,   // last byte of the current long packet's payload
  output logic  [1:0]  px_vc_o,
  output logic  [5:0]  px_dt_o,

  // short packet events (pulses)
  output logic          frame_start_o,
  output logic          frame_end_o,
  output logic          line_start_o,
  output logic          line_end_o,
  output logic          generic_sp_valid_o,
  output logic  [5:0]  generic_sp_dt_o,
  output logic  [15:0] generic_sp_data_o,

  // error flags (pulses)
  output logic          hdr_ecc_1bit_o,   // corrected
  output logic          hdr_ecc_2bit_o,   // uncorrectable, packet dropped
  output logic          payload_crc_err_o
);

  typedef enum logic [1:0] {
    ST_HDR,
    ST_PAYLOAD,
    ST_CRC
  } state_e;

  state_e        state_q;
  logic  [7:0]   hdr_byte_q [4];   // hdr_byte_q[3] (ECC) is never actually
                                    // latched/used -- byte 3 is consumed
                                    // combinationally the cycle it arrives
  logic  [1:0]   hdr_beat_q;
  logic  [1:0]   vc_q;
  logic  [5:0]   dt_q;
  logic  [15:0]  wc_q;
  logic  [15:0]  payload_cnt_q;
  logic  [15:0]  crc_calc_q;
  logic  [7:0]   crc_byte0_q;
  logic          crc_beat_q;

  // This cycle's header ECC byte is live on rx_data_i whenever we are in
  // ST_HDR at beat 3; the decode result is only acted on in that specific
  // case (see ST_HDR below) and is otherwise simply unused.
  logic  [23:0]  hdr_raw;
  logic  [23:0]  hdr_corrected;
  logic          hdr_err_1bit, hdr_err_2bit;

  assign hdr_raw = {hdr_byte_q[2], hdr_byte_q[1], hdr_byte_q[0]};

  csi2_ecc_dec u_ecc_dec (
    .header_in  (hdr_raw),
    .ecc_in     (rx_data_i),
    .header_out (hdr_corrected),
    .err_1bit   (hdr_err_1bit),
    .err_2bit   (hdr_err_2bit)
  );

  wire  [1:0]  hdr_vc      = hdr_corrected[7:6];
  wire  [5:0]  hdr_dt      = hdr_corrected[5:0];
  wire  [15:0] hdr_len     = hdr_corrected[23:8];
  wire         hdr_is_long = is_long_packet(hdr_dt);

  logic [15:0] crc_calc_next;
  assign crc_calc_next = csi2_crc16_next(crc_calc_q, rx_data_i);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      state_q            <= ST_HDR;
      hdr_beat_q         <= 2'd0;
      vc_q               <= 2'd0;
      dt_q               <= 6'd0;
      wc_q               <= 16'd0;
      payload_cnt_q      <= 16'd0;
      crc_calc_q         <= CSI2_CRC16_INIT;
      crc_byte0_q        <= 8'd0;
      crc_beat_q         <= 1'b0;
      px_data_o          <= 8'd0;
      px_valid_o         <= 1'b0;
      px_last_o          <= 1'b0;
      px_vc_o            <= 2'd0;
      px_dt_o            <= 6'd0;
      frame_start_o      <= 1'b0;
      frame_end_o        <= 1'b0;
      line_start_o       <= 1'b0;
      line_end_o         <= 1'b0;
      generic_sp_valid_o <= 1'b0;
      generic_sp_dt_o    <= 6'd0;
      generic_sp_data_o  <= 16'd0;
      hdr_ecc_1bit_o     <= 1'b0;
      hdr_ecc_2bit_o     <= 1'b0;
      payload_crc_err_o  <= 1'b0;
      for (int i = 0; i < 4; i++) hdr_byte_q[i] <= 8'd0;
    end else begin
      px_valid_o         <= 1'b0;
      px_last_o          <= 1'b0;
      frame_start_o      <= 1'b0;
      frame_end_o        <= 1'b0;
      line_start_o       <= 1'b0;
      line_end_o         <= 1'b0;
      generic_sp_valid_o <= 1'b0;
      hdr_ecc_1bit_o     <= 1'b0;
      hdr_ecc_2bit_o     <= 1'b0;
      payload_crc_err_o  <= 1'b0;

      if (sop_i && rx_valid_i) begin
        // this byte is the start of a fresh packet (e.g. D-PHY HS burst
        // start): pre-empt whatever state we were in and treat it as
        // header byte 0, discarding any in-progress packet.
        hdr_byte_q[0] <= rx_data_i;
        hdr_beat_q    <= 2'd1;
        state_q       <= ST_HDR;

      end else
      unique case (state_q)

        ST_HDR: begin
          if (rx_valid_i) begin
            if (hdr_beat_q == 2'd3) begin
              // byte 3 (ECC) is consumed combinationally by u_ecc_dec this
              // cycle -- act on its result now instead of latching it.
              hdr_ecc_1bit_o <= hdr_err_1bit;
              hdr_ecc_2bit_o <= hdr_err_2bit;
              hdr_beat_q     <= 2'd0;

              if (hdr_err_2bit) begin
                state_q <= ST_HDR;
              end else if (hdr_is_long) begin
                vc_q          <= hdr_vc;
                dt_q          <= hdr_dt;
                wc_q          <= hdr_len;
                payload_cnt_q <= 16'd0;
                crc_calc_q    <= CSI2_CRC16_INIT;
                if (hdr_len == 16'd0) begin
                  crc_beat_q <= 1'b0;
                  state_q    <= ST_CRC;
                end else begin
                  state_q <= ST_PAYLOAD;
                end
              end else begin
                unique case (hdr_dt)
                  DT_FRAME_START: frame_start_o <= 1'b1;
                  DT_FRAME_END:   frame_end_o   <= 1'b1;
                  DT_LINE_START:  line_start_o  <= 1'b1;
                  DT_LINE_END:    line_end_o    <= 1'b1;
                  default: begin
                    generic_sp_valid_o <= 1'b1;
                    generic_sp_dt_o    <= hdr_dt;
                    generic_sp_data_o  <= hdr_len;
                  end
                endcase
                state_q <= ST_HDR;
              end
            end else begin
              hdr_byte_q[hdr_beat_q] <= rx_data_i;
              hdr_beat_q             <= hdr_beat_q + 2'd1;
            end
          end
        end

        ST_PAYLOAD: begin
          if (rx_valid_i) begin
            px_data_o     <= rx_data_i;
            px_valid_o    <= 1'b1;
            px_vc_o       <= vc_q;
            px_dt_o       <= dt_q;
            crc_calc_q    <= crc_calc_next;
            payload_cnt_q <= payload_cnt_q + 16'd1;
            if (payload_cnt_q + 16'd1 == wc_q) begin
              px_last_o  <= 1'b1;
              crc_beat_q <= 1'b0;
              state_q    <= ST_CRC;
            end
          end
        end

        ST_CRC: begin
          if (rx_valid_i) begin
            if (crc_beat_q == 1'b0) begin
              crc_byte0_q <= rx_data_i;
              crc_beat_q  <= 1'b1;
            end else begin
              payload_crc_err_o <= ({rx_data_i, crc_byte0_q} != crc_calc_q);
              state_q           <= ST_HDR;
              hdr_beat_q        <= 2'd0;
            end
          end
        end

        default: state_q <= ST_HDR;

      endcase
    end
  end

endmodule : csi2_rx
