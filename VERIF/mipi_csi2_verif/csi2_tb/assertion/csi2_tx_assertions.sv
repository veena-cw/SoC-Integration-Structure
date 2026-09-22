`timescale 1ns/1ps

// TX-side assertion modules for the current CSI-2 digital protocol RTL.
// No DUT hierarchy is referenced, so these modules can be attached with bind.
//
// This file contains two independent checkers:
//   1. csi2_tx_assertions              - packet request/payload to byte stream
//   2. csi2_lane_distribute_assertions - 32-bit byte bus to 1/2/4 lanes

import csi2_pkg::*;

module csi2_tx_assertions #(
  parameter logic [1:0] VC = 2'd0,
  // Enable only in tests that send a complete FS/LS/.../LE/FE sequence.
  parameter bit CHECK_FRAME_SEQUENCE = 1'b0
) (
  input logic        clk,
  input logic        rst_n,

  input logic        pkt_valid_i,
  input logic        pkt_ready_o,
  input logic        pkt_long_i,
  input logic [5:0]  pkt_dt_i,
  input logic [15:0] pkt_len_i,

  input logic [7:0]  px_data_i,
  input logic        px_valid_i,
  input logic        px_ready_o,

  input logic [7:0]  byte_data_o,
  input logic        byte_valid_o,
  input logic        byte_sop_o,
  input logic        byte_eop_o
);

  typedef struct packed {
    logic [7:0] data;
    logic       sop;
    logic       eop;
  } expected_byte_t;

  expected_byte_t expected_q[$];
  logic            long_active;
  logic [15:0]     accepted_wc;
  logic [15:0]     accepted_payload_count;
  logic [15:0]     expected_crc;
  logic            header_start_delay;
  logic            frame_open;
  logic            line_open;

  function automatic logic [7:0] header_ecc(input logic [23:0] header);
    logic [7:0] ecc;
    ecc[7:6] = 2'b00;
    ecc[0] = header[0]  ^ header[1]  ^ header[2]  ^ header[4]  ^ header[5]  ^
             header[7]  ^ header[10] ^ header[11] ^ header[13] ^ header[16] ^
             header[20] ^ header[21] ^ header[22] ^ header[23];
    ecc[1] = header[0]  ^ header[1]  ^ header[3]  ^ header[4]  ^ header[6]  ^
             header[8]  ^ header[10] ^ header[12] ^ header[14] ^ header[17] ^
             header[20] ^ header[21] ^ header[22] ^ header[23];
    ecc[2] = header[0]  ^ header[2]  ^ header[3]  ^ header[5]  ^ header[6]  ^
             header[9]  ^ header[11] ^ header[12] ^ header[15] ^ header[18] ^
             header[20] ^ header[21] ^ header[22];
    ecc[3] = header[1]  ^ header[2]  ^ header[3]  ^ header[7]  ^ header[8]  ^
             header[9]  ^ header[13] ^ header[14] ^ header[15] ^ header[19] ^
             header[20] ^ header[21] ^ header[23];
    ecc[4] = header[4]  ^ header[5]  ^ header[6]  ^ header[7]  ^ header[8]  ^
             header[9]  ^ header[16] ^ header[17] ^ header[18] ^ header[19] ^
             header[20] ^ header[22] ^ header[23];
    ecc[5] = header[10] ^ header[11] ^ header[12] ^ header[13] ^ header[14] ^
             header[15] ^ header[16] ^ header[17] ^ header[18] ^ header[19] ^
             header[21] ^ header[22] ^ header[23];
    return ecc;
  endfunction

  task automatic push_expected(input logic [7:0] data,
                               input logic       sop,
                               input logic       eop);
    expected_byte_t item;
    item.data = data;
    item.sop  = sop;
    item.eop  = eop;
    expected_q.push_back(item);
  endtask

  // ------------------------- Interface properties -------------------------
  ap_reset_outputs: assert property (@(posedge clk)
    !rst_n |-> (pkt_ready_o && !px_ready_o && !byte_valid_o &&
                !byte_sop_o && !byte_eop_o))
    else $error("TX_ASSERT: TX outputs are not at their reset values");

  ap_request_stable_while_stalled: assert property (@(posedge clk)
    disable iff (!rst_n)
    pkt_valid_i && !pkt_ready_o |=>
      pkt_valid_i && $stable({pkt_long_i, pkt_dt_i, pkt_len_i}))
    else $error("TX_ASSERT: packet request changed before acceptance");

  ap_payload_stable_while_stalled: assert property (@(posedge clk)
    disable iff (!rst_n)
    px_valid_i && !px_ready_o |=> px_valid_i && $stable(px_data_i))
    else $error("TX_ASSERT: payload byte changed while stalled");

  ap_sop_requires_valid: assert property (@(posedge clk)
    disable iff (!rst_n) byte_sop_o |-> byte_valid_o)
    else $error("TX_ASSERT: byte_sop_o asserted without byte_valid_o");

  ap_eop_requires_valid: assert property (@(posedge clk)
    disable iff (!rst_n) byte_eop_o |-> byte_valid_o)
    else $error("TX_ASSERT: byte_eop_o asserted without byte_valid_o");

  ap_ready_channels_exclusive: assert property (@(posedge clk)
    disable iff (!rst_n) !(pkt_ready_o && px_ready_o))
    else $error("TX_ASSERT: packet and payload ready asserted together");

  ap_known_control_outputs: assert property (@(posedge clk)
    disable iff (!rst_n)
    !$isunknown({pkt_ready_o, px_ready_o, byte_valid_o,
                 byte_sop_o, byte_eop_o}))
    else $error("TX_ASSERT: X/Z detected on a TX control output");

  ap_known_byte_when_valid: assert property (@(posedge clk)
    disable iff (!rst_n) byte_valid_o |-> !$isunknown(byte_data_o))
    else $error("TX_ASSERT: X/Z byte emitted while valid");

  // --------------------- End-to-end packet reference ----------------------
  // The queue proves exact header ordering, ECC, payload ordering, CRC order,
  // SOP/EOP position, output latency, and absence of extra/missing bytes.
  always @(posedge clk or negedge rst_n) begin : tx_reference_check
    expected_byte_t observed_expected;
    logic [23:0] header;
    logic [7:0]  ecc;
    logic [15:0] crc_next;

    if (!rst_n) begin
      expected_q.delete();
      long_active           = 1'b0;
      accepted_wc          = 16'd0;
      accepted_payload_count = 16'd0;
      expected_crc         = CSI2_CRC16_INIT;
      header_start_delay   = 1'b0;
      frame_open           = 1'b0;
      line_open            = 1'b0;
    end else begin
      // Anything already queued was expected on this cycle.
      if ((expected_q.size() != 0) && !header_start_delay) begin
        assert (byte_valid_o)
          else $error("TX_ASSERT: expected output byte is missing");
      end
      if (header_start_delay) begin
        assert (!byte_valid_o)
          else $error("TX_ASSERT: first header byte appeared earlier than the registered interface latency");
        header_start_delay = 1'b0;
      end

      if (byte_valid_o) begin
        assert (expected_q.size() != 0)
          else $error("TX_ASSERT: unexpected extra output byte 0x%02h", byte_data_o);
        if (expected_q.size() != 0) begin
          observed_expected = expected_q.pop_front();
          assert (byte_data_o === observed_expected.data)
            else $error("TX_ASSERT: byte mismatch expected=0x%02h actual=0x%02h",
                        observed_expected.data, byte_data_o);
          assert (byte_sop_o === observed_expected.sop)
            else $error("TX_ASSERT: incorrect SOP position");
          assert (byte_eop_o === observed_expected.eop)
            else $error("TX_ASSERT: incorrect EOP position");
        end
      end

      if (pkt_valid_i && pkt_ready_o) begin
        assert (!$isunknown({pkt_long_i, pkt_dt_i, pkt_len_i}))
          else $error("TX_ASSERT: accepted packet request contains X/Z");
        assert (pkt_long_i == is_long_packet(pkt_dt_i))
          else $error("TX_ASSERT: pkt_long_i disagrees with DT 0x%02h", pkt_dt_i);
        assert (!((pkt_dt_i >= 6'h04) && (pkt_dt_i <= 6'h07)))
          else $error("TX_ASSERT: reserved short-packet DT used: 0x%02h", pkt_dt_i);
        assert (pkt_dt_i <= 6'h37)
          else $error("TX_ASSERT: DT outside the supported CSI-2 range: 0x%02h", pkt_dt_i);

        header = {pkt_len_i[15:8], pkt_len_i[7:0], VC, pkt_dt_i};
        ecc    = header_ecc(header);
        push_expected({VC, pkt_dt_i}, 1'b1, 1'b0);
        push_expected(pkt_len_i[7:0], 1'b0, 1'b0);
        push_expected(pkt_len_i[15:8], 1'b0, 1'b0);
        push_expected(ecc, 1'b0, !pkt_long_i);

        long_active             = pkt_long_i;
        accepted_wc             = pkt_len_i;
        accepted_payload_count  = 16'd0;
        expected_crc            = CSI2_CRC16_INIT;
        // The request is captured in ST_IDLE. The registered first header
        // byte is observed by this checker one additional sampled edge later.
        header_start_delay      = 1'b1;

        if (pkt_long_i && (pkt_len_i == 16'd0)) begin
          push_expected(CSI2_CRC16_INIT[7:0],  1'b0, 1'b0);
          push_expected(CSI2_CRC16_INIT[15:8], 1'b0, 1'b1);
          long_active = 1'b0;
        end

        if (CHECK_FRAME_SEQUENCE && !pkt_long_i) begin
          case (pkt_dt_i)
            DT_FRAME_START: begin
              assert (!frame_open)
                else $error("TX_ASSERT: Frame Start received while a frame is open");
              frame_open = 1'b1;
              line_open  = 1'b0;
            end
            DT_FRAME_END: begin
              assert (frame_open && !line_open)
                else $error("TX_ASSERT: Frame End without an open frame or with an open line");
              frame_open = 1'b0;
            end
            DT_LINE_START: begin
              assert (frame_open && !line_open)
                else $error("TX_ASSERT: Line Start outside a frame or while a line is open");
              line_open = 1'b1;
            end
            DT_LINE_END: begin
              assert (frame_open && line_open)
                else $error("TX_ASSERT: Line End without an open line");
              line_open = 1'b0;
            end
            default: ;
          endcase
        end
        if (CHECK_FRAME_SEQUENCE && pkt_long_i) begin
          assert (frame_open && line_open)
            else $error("TX_ASSERT: long-packet request accepted outside an open frame/line");
        end
      end

      if (px_valid_i && px_ready_o) begin
        assert (long_active)
          else $error("TX_ASSERT: payload accepted without an active long packet");
        assert (accepted_payload_count < accepted_wc)
          else $error("TX_ASSERT: more payload bytes accepted than Word Count");
        assert (!$isunknown(px_data_i))
          else $error("TX_ASSERT: accepted payload byte contains X/Z");

        crc_next = csi2_crc16_next(expected_crc, px_data_i);
        push_expected(px_data_i, 1'b0, 1'b0);
        accepted_payload_count = accepted_payload_count + 16'd1;
        expected_crc = crc_next;

        if (accepted_payload_count == accepted_wc) begin
          push_expected(crc_next[7:0],  1'b0, 1'b0);
          push_expected(crc_next[15:8], 1'b0, 1'b1);
          long_active = 1'b0;
        end
      end

    end
  end

endmodule : csi2_tx_assertions


module csi2_lane_distribute_assertions #(
  parameter int NUM_LANES = 4
) (
  input logic                         clk,
  input logic                         rst_n,
  input csi2_byte_bus_t               bus_i,
  input logic                         bus_ready_o,
  input logic [NUM_LANES*8-1:0]       lane_data,
  input logic [NUM_LANES-1:0]         lane_valid,
  input logic                         hs_active,
  input logic                         hs_last
);

  typedef struct packed {
    logic [7:0] data;
    logic       last;
  } expected_lane_byte_t;

  expected_lane_byte_t lane_q[$];

  function automatic bit keep_is_legal(input logic [3:0] keep);
    return (keep inside {4'b0001, 4'b0011, 4'b0111, 4'b1111});
  endfunction

  initial begin
    assert ((NUM_LANES == 1) || (NUM_LANES == 2) || (NUM_LANES == 4))
      else $fatal(1, "TX_LANE_ASSERT: NUM_LANES must be 1, 2, or 4");
  end

  ap_bus_stable_while_stalled: assert property (@(posedge clk)
    disable iff (!rst_n)
    bus_i.valid && !bus_ready_o |=>
      bus_i.valid && $stable({bus_i.data, bus_i.keep, bus_i.last}))
    else $error("TX_LANE_ASSERT: bus word changed while stalled");

  ap_hs_active_matches_lane_valid: assert property (@(posedge clk)
    disable iff (!rst_n) hs_active == (|lane_valid))
    else $error("TX_LANE_ASSERT: hs_active disagrees with lane_valid");

  ap_hs_last_requires_active: assert property (@(posedge clk)
    disable iff (!rst_n) hs_last |-> hs_active)
    else $error("TX_LANE_ASSERT: hs_last asserted without an active lane beat");

  ap_reset_lane_outputs: assert property (@(posedge clk)
    !rst_n |-> (!hs_active && !hs_last && (lane_valid == '0)))
    else $error("TX_LANE_ASSERT: lane outputs active during reset");

  always @(posedge clk or negedge rst_n) begin : lane_distributor_reference
    expected_lane_byte_t exp;
    logic [NUM_LANES-1:0] expected_valid;
    int emit_count;
    int accepted_count;

    if (!rst_n) begin
      lane_q.delete();
    end else begin
      assert (!$isunknown({bus_ready_o, lane_valid, hs_active, hs_last}))
        else $error("TX_LANE_ASSERT: X/Z on lane-distributor control signals");

      expected_valid = '0;
      emit_count = (lane_q.size() < NUM_LANES) ? lane_q.size() : NUM_LANES;
      for (int i = 0; i < emit_count; i++) expected_valid[i] = 1'b1;

      assert (lane_valid == expected_valid)
        else $error("TX_LANE_ASSERT: lane_valid is not the expected contiguous pattern");
      assert (hs_active == (emit_count != 0))
        else $error("TX_LANE_ASSERT: incorrect HS active timing");

      for (int lane = 0; lane < emit_count; lane++) begin
        exp = lane_q.pop_front();
        assert (lane_data[lane*8 +: 8] === exp.data)
          else $error("TX_LANE_ASSERT: byte mismatch on lane %0d", lane);
        assert ((lane == emit_count-1) ? (hs_last === exp.last) : !hs_last)
          else $error("TX_LANE_ASSERT: incorrect hs_last position");
      end

      if (bus_i.valid && bus_ready_o) begin
        assert (keep_is_legal(bus_i.keep))
          else $error("TX_LANE_ASSERT: bus keep must be nonzero and contiguous from bit 0");
        assert (!$isunknown({bus_i.data, bus_i.keep, bus_i.last}))
          else $error("TX_LANE_ASSERT: accepted bus word contains X/Z");

        accepted_count = $countones(bus_i.keep);
        for (int byte_index = 0; byte_index < accepted_count; byte_index++) begin
          exp.data = bus_i.data[byte_index*8 +: 8];
          exp.last = bus_i.last && (byte_index == accepted_count-1);
          lane_q.push_back(exp);
        end
      end
    end
  end

endmodule : csi2_lane_distribute_assertions
