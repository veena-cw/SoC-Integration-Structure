//-----------------------------------------------------------------------------
// csi2_tx.sv  -  CSI-2 packet-layer transmitter, C-PHY packet format
//                (one byte per clock, ready/valid)
//
// C-PHY packet structure (N = NUM_LANES):
//
//   Packet Header = 6N x 16-bit words = TWO identical halves.
//   Each half (3N words) is, in transmit order:
//        N x copy of {Reserved[7:0], DI[7:0]}  (16-bit word)
//        N x copy of WC  (long)  /  short-packet data (short)
//        N x copy of PH-CRC  (16-bit CRC over the previous 4 bytes)
//   Lane distribution (round-robin by 16-bit word) therefore gives every lane
//   the sequence  {Res,DI} , WC , PH-CRC .  A Sync Word is inserted on all
//   lanes by the PHY after EACH half (flagged here with byte_sync_o on the
//   last byte of each half).
//
//   Long packet:  header, WC payload bytes, 16-bit payload CRC (footer),
//                 then filler bytes (0x00) after the footer so that the
//                 footer ends on a 16-bit boundary and every lane carries the
//                 same number of 16-bit words:
//                    (WC + 2 + filler) % (2*NUM_LANES) == 0
//   Short packet: header only (WC field = short data field).
//
// CRC handling (this version):
//  * The crc16_next() function is no longer used in this module.
//  * ONE csi2_crc16 instance is used for BOTH CRCs, time-shared:
//      - Header phase : init at pkt_fire, fed with the 4 PH-CRC bytes
//                       ({Res,DI} low/high, field low/high) during the FIRST
//                       copy of the first header half only. The result is
//                       then held and used for every PH-CRC copy in both
//                       halves (the two halves are identical).
//      - Payload phase: re-initialised on the last header byte, then fed
//                       with the payload bytes. Result is the footer CRC.
//
// ASSUMPTIONS TO CHECK against your CSI-2 version:
//  - RES_FIRST: byte order inside the {Reserved, DI} word (1 = Reserved byte
//    transmitted first, DI second).
//  - PH-CRC uses the same CRC-16 as the payload (init FFFF, LSB first, 0x8408)
//    fed with the 4 header bytes in transmit order.
//  - Reserved byte (carries VCX bits in newer spec versions) is driven 0.
//  - Short packets also get a Sync Word after each header half.
//-----------------------------------------------------------------------------
import csi2_pkg::*;
module csi2_tx #(
  parameter int NUM_LANES = 2,
  parameter bit RES_FIRST = 1'b1
)(
  input  logic        clk_i,
  input  logic        rst_ni,

  // Packet request
  input  logic        pkt_valid_i,
  output logic        pkt_ready_o,
  input  logic [5:0]  pkt_dt_i,
  input  logic [1:0]  pkt_vc_i,
  input  logic [15:0] pkt_wc_i,           // long packet: word count
  input  logic [15:0] pkt_short_data_i,   // short packet: data field

  // Payload input
  input  logic        px_valid_i,
  output logic        px_ready_o,
  input  logic [7:0]  px_data_i,

  // Byte stream toward lane distributor
  output logic        byte_valid_o,
  input  logic        byte_ready_i,
  output logic [7:0]  byte_data_o,
  output logic        byte_sop_o,
  output logic        byte_eop_o,
  output logic        byte_sync_o,        // Sync Word follows this byte (header halves)

  // Status
  output logic        tx_active_o,
  output logic        tx_done_o
);

  import csi2_pkg::*;

  initial begin
    if ((NUM_LANES < 1) || (NUM_LANES > 4))
      $error("csi2_tx: NUM_LANES must be between 1 and 4");
  end

  localparam int          ALIGN_BYTES   = 2 * NUM_LANES;
  localparam logic [7:0]  RESERVED_BYTE = 8'h00;

  typedef enum logic [2:0] { ST_IDLE, ST_HEADER, ST_PAYLOAD, ST_CRC, ST_FILLER } state_t;
  state_t state_q;

  logic [5:0]  dt_q;
  logic [1:0]  vc_q;
  logic [15:0] wc_q;
  logic [15:0] short_data_q;
  logic [15:0] payload_remaining_q;
  logic [15:0] filler_remaining_q;
  logic        crc_index_q;

  // Header position counters
  logic        hdr_half_q;     // 0 = first half, 1 = second half
  logic [1:0]  hdr_field_q;    // 0 = {Res,DI}, 1 = WC/data, 2 = PH-CRC
  logic [2:0]  hdr_copy_q;     // 0 .. NUM_LANES-1
  logic        hdr_byte_q;     // 0 = low byte, 1 = high byte of the 16-bit word

  logic packet_is_long_w;
  assign packet_is_long_w = is_long_packet(dt_q);

  //--------------------------------------------------------------------------
  // Handshakes
  //--------------------------------------------------------------------------
  logic byte_fire, pkt_fire;
  assign byte_fire = byte_valid_o && byte_ready_i;
  assign pkt_fire  = pkt_valid_i  && pkt_ready_o;

  assign pkt_ready_o = (state_q == ST_IDLE);
  assign px_ready_o  = (state_q == ST_PAYLOAD) && byte_ready_i;
  assign tx_active_o = (state_q != ST_IDLE);

  //--------------------------------------------------------------------------
  // Filler length (after the CRC footer)
  //   (WC + 2 + filler) multiple of 2*NUM_LANES bytes
  //--------------------------------------------------------------------------
  logic [16:0] wc_plus_crc_w, align_rem_w;
  logic [3:0]  filler_len_w;
  assign wc_plus_crc_w = {1'b0, wc_q} + 17'd2;
  assign align_rem_w   = wc_plus_crc_w % 17'(ALIGN_BYTES);
  assign filler_len_w  = (align_rem_w == 17'd0) ? 4'd0 : 4'(ALIGN_BYTES - int'(align_rem_w));

  //--------------------------------------------------------------------------
  // C-PHY packet header words
  //--------------------------------------------------------------------------
  logic [7:0]  di_w, hdr_b0_w, hdr_b1_w;
  logic [15:0] hdr_field_w;       // WC (long) or short data (short)
  logic [15:0] crc_data_w;        // csi2_crc16 output (PH-CRC in header, payload CRC later)
  logic [15:0] hdr_word_w;
  logic [7:0]  hdr_byte_w;

  assign di_w        = {vc_q, dt_q};
  assign hdr_b0_w    = RES_FIRST ? RESERVED_BYTE : di_w;   // transmitted first
  assign hdr_b1_w    = RES_FIRST ? di_w : RESERVED_BYTE;
  assign hdr_field_w = packet_is_long_w ? wc_q : short_data_q;

  always_comb begin
    case (hdr_field_q)
      2'd0:    hdr_word_w = {hdr_b1_w, hdr_b0_w};
      2'd1:    hdr_word_w = hdr_field_w;
      default: hdr_word_w = crc_data_w;      // PH-CRC from csi2_crc16
    endcase
  end

  assign hdr_byte_w = hdr_byte_q ? hdr_word_w[15:8] : hdr_word_w[7:0];

  // Last byte of a header half / of the whole header
  logic hdr_half_end_w, hdr_last_w, hdr_first_w;
  assign hdr_half_end_w = hdr_byte_q && (hdr_field_q == 2'd2) &&
                          (hdr_copy_q == 3'(NUM_LANES-1));
  assign hdr_last_w     = hdr_half_end_w && hdr_half_q;
  assign hdr_first_w    = !hdr_half_q && (hdr_field_q == 2'd0) &&
                          (hdr_copy_q == 3'd0) && !hdr_byte_q;

  //--------------------------------------------------------------------------
  // CRC-16 : single csi2_crc16 instance, time-shared
  //
  //  init : pkt_fire                      -> start of header CRC
  //         last header byte (byte_fire)  -> start of payload CRC
  //  en   : header, 1st half, 1st copy, fields 0 and 1 (the 4 CRC-covered
  //         bytes) ; or payload byte transferred
  //  data : header byte during header, payload byte otherwise
  //--------------------------------------------------------------------------
  logic       crc_init_w, crc_en_w;
  logic [7:0] crc_byte_w;

  logic hdr_crc_feed_w;
  assign hdr_crc_feed_w = (state_q == ST_HEADER) && !hdr_half_q &&
                          (hdr_field_q != 2'd2)  && (hdr_copy_q == 3'd0);

  assign crc_init_w = pkt_fire ||
                      ((state_q == ST_HEADER) && byte_fire && hdr_last_w);
  assign crc_en_w   = byte_fire &&
                      (hdr_crc_feed_w || (state_q == ST_PAYLOAD));
  assign crc_byte_w = (state_q == ST_HEADER) ? hdr_byte_w : px_data_i;

  csi2_crc16 u_crc16 (
    .clk_i(clk_i), .rst_ni(rst_ni),
    .crc_init_i(crc_init_w), .crc_en_i(crc_en_w),
    .data_i(crc_byte_w), .crc_o(crc_data_w)
  );

  //--------------------------------------------------------------------------
  // Byte output mux
  //--------------------------------------------------------------------------
  always_comb begin
    byte_valid_o = 1'b0;
    byte_data_o  = 8'h00;
    byte_sop_o   = 1'b0;
    byte_eop_o   = 1'b0;
    byte_sync_o  = 1'b0;

    case (state_q)
      ST_HEADER: begin
        byte_valid_o = 1'b1;
        byte_data_o  = hdr_byte_w;
        byte_sop_o   = hdr_first_w;
        byte_sync_o  = hdr_half_end_w;
        byte_eop_o   = hdr_last_w && !packet_is_long_w;
      end

      ST_PAYLOAD: begin
        byte_valid_o = px_valid_i;
        byte_data_o  = px_data_i;
      end

      ST_CRC: begin
        byte_valid_o = 1'b1;
        if (crc_index_q == 1'b0) begin
          byte_data_o = crc_data_w[7:0];
        end else begin
          byte_data_o = crc_data_w[15:8];
          byte_eop_o  = (filler_len_w == 4'd0);
        end
      end

      ST_FILLER: begin
        byte_valid_o = 1'b1;
        byte_data_o  = 8'h00;
        byte_eop_o   = (filler_remaining_q == 16'd1);
      end

      default: ;
    endcase
  end

  // eop is only ever asserted on the last byte of a packet
  assign tx_done_o = byte_fire && byte_eop_o;

  //--------------------------------------------------------------------------
  // State machine
  //--------------------------------------------------------------------------
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q             <= ST_IDLE;
      dt_q                <= '0;
      vc_q                <= '0;
      wc_q                <= '0;
      short_data_q        <= '0;
      payload_remaining_q <= '0;
      filler_remaining_q  <= '0;
      crc_index_q         <= 1'b0;
      hdr_half_q          <= 1'b0;
      hdr_field_q         <= '0;
      hdr_copy_q          <= '0;
      hdr_byte_q          <= 1'b0;
    end else begin
      case (state_q)

        ST_IDLE: begin
          if (pkt_fire) begin
            dt_q                <= pkt_dt_i;
            vc_q                <= pkt_vc_i;
            wc_q                <= pkt_wc_i;
            short_data_q        <= pkt_short_data_i;
            payload_remaining_q <= pkt_wc_i;
            hdr_half_q          <= 1'b0;
            hdr_field_q         <= '0;
            hdr_copy_q          <= '0;
            hdr_byte_q          <= 1'b0;
            crc_index_q         <= 1'b0;
            state_q             <= ST_HEADER;
          end
        end

        ST_HEADER: begin
          if (byte_fire) begin
            hdr_byte_q <= ~hdr_byte_q;
            if (hdr_byte_q) begin                       // 16-bit word finished
              if (hdr_copy_q == 3'(NUM_LANES-1)) begin
                hdr_copy_q <= '0;
                if (hdr_field_q == 2'd2) begin          // half finished
                  hdr_field_q <= '0;
                  if (!hdr_half_q) begin
                    hdr_half_q <= 1'b1;
                  end else begin                        // header finished
                    hdr_half_q <= 1'b0;
                    if (packet_is_long_w) begin
                      crc_index_q <= 1'b0;
                      state_q     <= (wc_q == 16'd0) ? ST_CRC : ST_PAYLOAD;
                    end else begin
                      state_q <= ST_IDLE;
                    end
                  end
                end else begin
                  hdr_field_q <= hdr_field_q + 2'd1;
                end
              end else begin
                hdr_copy_q <= hdr_copy_q + 3'd1;
              end
            end
          end
        end

        ST_PAYLOAD: begin
          if (byte_fire) begin
            if (payload_remaining_q == 16'd1) begin
              payload_remaining_q <= 16'd0;
              crc_index_q         <= 1'b0;
              state_q             <= ST_CRC;
            end else begin
              payload_remaining_q <= payload_remaining_q - 16'd1;
            end
          end
        end

        ST_CRC: begin
          if (byte_fire) begin
            if (crc_index_q == 1'b0) begin
              crc_index_q <= 1'b1;
            end else begin
              crc_index_q <= 1'b0;
              if (filler_len_w != 4'd0) begin
                filler_remaining_q <= {12'd0, filler_len_w};
                state_q            <= ST_FILLER;
              end else begin
                state_q            <= ST_IDLE;
              end
            end
          end
        end

        ST_FILLER: begin
          if (byte_fire) begin
            if (filler_remaining_q == 16'd1) begin
              filler_remaining_q <= 16'd0;
              state_q            <= ST_IDLE;
            end else begin
              filler_remaining_q <= filler_remaining_q - 16'd1;
            end
          end
        end

        default: state_q <= ST_IDLE;
      endcase
    end
  end

endmodule