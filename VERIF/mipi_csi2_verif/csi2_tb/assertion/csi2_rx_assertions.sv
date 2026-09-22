`timescale 1ns/1ps

// RX-side assertion modules for the current CSI-2 digital protocol RTL.
// No DUT hierarchy is referenced, so these modules can be attached with bind.
//
// This file contains two independent checkers:
//   1. csi2_lane_merge_assertions - 1/2/4 lanes to 32-bit byte bus
//   2. csi2_rx_assertions         - byte stream to payload/events/errors

import csi2_pkg::*;

module csi2_lane_merge_assertions #(
  parameter int NUM_LANES = 4
) (
  input logic                         clk,
  input logic                         rst_n,
  input logic [NUM_LANES*8-1:0]       lane_data,
  input logic [NUM_LANES-1:0]         lane_valid,
  input logic                         hs_last,
  input csi2_byte_bus_t               bus_o
);

  logic [31:0] ref_acc_data;
  int unsigned ref_acc_count;
  logic        exp_valid;
  logic [31:0] exp_data;
  logic [3:0]  exp_keep;
  logic        exp_last;

  function automatic bit lane_valid_is_contiguous(
    input logic [NUM_LANES-1:0] value
  );
    logic seen_zero;
    seen_zero = 1'b0;
    for (int i = 0; i < NUM_LANES; i++) begin
      if (!value[i]) seen_zero = 1'b1;
      else if (seen_zero) return 1'b0;
    end
    return 1'b1;
  endfunction

  initial begin
    assert ((NUM_LANES == 1) || (NUM_LANES == 2) || (NUM_LANES == 4))
      else $fatal(1, "RX_LANE_ASSERT: NUM_LANES must be 1, 2, or 4");
  end

  ap_last_requires_lane_data: assert property (@(posedge clk)
    disable iff (!rst_n) hs_last |-> (|lane_valid))
    else $error("RX_LANE_ASSERT: hs_last asserted without a valid lane byte");

  ap_bus_last_requires_valid: assert property (@(posedge clk)
    disable iff (!rst_n) bus_o.last |-> bus_o.valid)
    else $error("RX_LANE_ASSERT: bus last asserted without bus valid");

  ap_reset_bus_outputs: assert property (@(posedge clk)
    !rst_n |-> (!bus_o.valid && !bus_o.last &&
                (bus_o.data == 32'd0) && (bus_o.keep == 4'd0)))
    else $error("RX_LANE_ASSERT: merged bus is not at reset values");

  always @(posedge clk or negedge rst_n) begin : lane_merger_reference
    logic [31:0] next_data;
    int unsigned next_count;
    int unsigned lane_count;
    logic [3:0] next_keep;

    if (!rst_n) begin
      ref_acc_data  = 32'd0;
      ref_acc_count = 0;
      exp_valid     = 1'b0;
      exp_data      = 32'd0;
      exp_keep      = 4'd0;
      exp_last      = 1'b0;
    end else begin
      assert (!$isunknown({lane_valid, hs_last, bus_o.valid, bus_o.last, bus_o.keep}))
        else $error("RX_LANE_ASSERT: X/Z on lane-merger control signals");
      assert (lane_valid_is_contiguous(lane_valid))
        else $error("RX_LANE_ASSERT: lane_valid must be contiguous from lane 0");

      assert (bus_o.valid === exp_valid)
        else $error("RX_LANE_ASSERT: incorrect merged-bus valid timing");
      if (exp_valid) begin
        assert (bus_o.data === exp_data)
          else $error("RX_LANE_ASSERT: merged data mismatch expected=%08h actual=%08h",
                      exp_data, bus_o.data);
        assert (bus_o.keep === exp_keep)
          else $error("RX_LANE_ASSERT: merged keep mismatch expected=%04b actual=%04b",
                      exp_keep, bus_o.keep);
        assert (bus_o.last === exp_last)
          else $error("RX_LANE_ASSERT: incorrect merged last timing");
      end

      exp_valid = 1'b0;
      exp_last  = 1'b0;

      lane_count = $countones(lane_valid);
      if (lane_count != 0) begin
        assert (!$isunknown(lane_data))
          else $error("RX_LANE_ASSERT: active lane data contains X/Z");
        assert ((ref_acc_count + lane_count) <= 4)
          else $error("RX_LANE_ASSERT: lane bytes overflow the 32-bit accumulator");

        next_data  = ref_acc_data;
        next_count = ref_acc_count;
        for (int lane = 0; lane < NUM_LANES; lane++) begin
          if (lane_valid[lane]) begin
            next_data[next_count*8 +: 8] = lane_data[lane*8 +: 8];
            next_count++;
          end
        end

        if ((next_count == 4) || hs_last) begin
          next_keep = (4'b0001 << next_count) - 4'b0001;
          exp_valid = 1'b1;
          exp_data  = next_data;
          exp_keep  = next_keep;
          exp_last  = hs_last;
          ref_acc_data  = 32'd0;
          ref_acc_count = 0;
        end else begin
          ref_acc_data  = next_data;
          ref_acc_count = next_count;
        end
      end
    end
  end

endmodule : csi2_lane_merge_assertions


module csi2_rx_assertions #(
  // Keep disabled for isolated short-packet tests. Enable for complete frames.
  parameter bit CHECK_FRAME_SEQUENCE        = 1'b0,
  parameter bit REQUIRE_PAYLOAD_INSIDE_LINE = 1'b0
) (
  input logic        clk,
  input logic        rst_n,

  input logic [7:0]  rx_data_i,
  input logic        rx_valid_i,
  input logic        sop_i,

  input logic [7:0]  px_data_o,
  input logic        px_valid_o,
  input logic        px_last_o,
  input logic [1:0]  px_vc_o,
  input logic [5:0]  px_dt_o,

  input logic        frame_start_o,
  input logic        frame_end_o,
  input logic        line_start_o,
  input logic        line_end_o,
  input logic        generic_sp_valid_o,
  input logic [5:0]  generic_sp_dt_o,
  input logic [15:0] generic_sp_data_o,

  input logic        hdr_ecc_1bit_o,
  input logic        hdr_ecc_2bit_o,
  input logic        payload_crc_err_o
);

  typedef enum logic [1:0] {
    REF_HDR,
    REF_PAYLOAD,
    REF_CRC
  } ref_state_e;

  typedef struct packed {
    logic [23:0] header;
    logic        err_1bit;
    logic        err_2bit;
  } ecc_result_t;

  ref_state_e ref_state;
  logic [7:0] ref_hdr [0:2];
  logic [1:0] ref_hdr_count;
  logic [1:0] ref_vc;
  logic [5:0] ref_dt;
  logic [15:0] ref_wc;
  logic [15:0] ref_payload_count;
  logic [15:0] ref_crc;
  logic [7:0]  ref_crc_byte0;
  logic        ref_crc_second;

  logic        exp_px_valid;
  logic [7:0]  exp_px_data;
  logic        exp_px_last;
  logic [1:0]  exp_px_vc;
  logic [5:0]  exp_px_dt;
  logic        exp_frame_start;
  logic        exp_frame_end;
  logic        exp_line_start;
  logic        exp_line_end;
  logic        exp_generic_valid;
  logic [5:0]  exp_generic_dt;
  logic [15:0] exp_generic_data;
  logic        exp_ecc1;
  logic        exp_ecc2;
  logic        exp_crc_error;

  logic frame_open;
  logic line_open;

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

  function automatic ecc_result_t decode_header(
    input logic [23:0] header_in,
    input logic [7:0]  received_ecc
  );
    ecc_result_t result;
    logic [5:0] syndrome;
    logic [7:0] calculated_ecc;
    logic [4:0] bit_position;
    logic       data_bit_valid;
    logic       syndrome_is_power_of_two;

    calculated_ecc = header_ecc(header_in);
    syndrome = calculated_ecc[5:0] ^ received_ecc[5:0];
    bit_position = 5'd0;
    data_bit_valid = 1'b1;
    case (syndrome)
      6'd7:  bit_position = 5'd0;
      6'd11: bit_position = 5'd1;
      6'd13: bit_position = 5'd2;
      6'd14: bit_position = 5'd3;
      6'd19: bit_position = 5'd4;
      6'd21: bit_position = 5'd5;
      6'd22: bit_position = 5'd6;
      6'd25: bit_position = 5'd7;
      6'd26: bit_position = 5'd8;
      6'd28: bit_position = 5'd9;
      6'd35: bit_position = 5'd10;
      6'd37: bit_position = 5'd11;
      6'd38: bit_position = 5'd12;
      6'd41: bit_position = 5'd13;
      6'd42: bit_position = 5'd14;
      6'd44: bit_position = 5'd15;
      6'd49: bit_position = 5'd16;
      6'd50: bit_position = 5'd17;
      6'd52: bit_position = 5'd18;
      6'd56: bit_position = 5'd19;
      6'd31: bit_position = 5'd20;
      6'd47: bit_position = 5'd21;
      6'd55: bit_position = 5'd22;
      6'd59: bit_position = 5'd23;
      default: data_bit_valid = 1'b0;
    endcase

    syndrome_is_power_of_two =
      (syndrome != 6'd0) && ((syndrome & (syndrome - 6'd1)) == 6'd0);

    result.header   = header_in;
    result.err_1bit = (syndrome != 6'd0) &&
                      (data_bit_valid || syndrome_is_power_of_two);
    result.err_2bit = (syndrome != 6'd0) &&
                      !data_bit_valid && !syndrome_is_power_of_two;
    if (data_bit_valid && (syndrome != 6'd0))
      result.header[bit_position] = ~header_in[bit_position];
    return result;
  endfunction

  // ------------------------- Interface properties -------------------------
  ap_sop_requires_valid: assert property (@(posedge clk)
    disable iff (!rst_n) sop_i |-> rx_valid_i)
    else $error("RX_ASSERT: SOP asserted without a valid input byte");

  ap_px_last_requires_valid: assert property (@(posedge clk)
    disable iff (!rst_n) px_last_o |-> px_valid_o)
    else $error("RX_ASSERT: px_last_o asserted without px_valid_o");

  ap_ecc_flags_exclusive: assert property (@(posedge clk)
    disable iff (!rst_n) !(hdr_ecc_1bit_o && hdr_ecc_2bit_o))
    else $error("RX_ASSERT: corrected and uncorrectable ECC flags asserted together");

  ap_short_events_onehot: assert property (@(posedge clk)
    disable iff (!rst_n)
    $onehot0({frame_start_o, frame_end_o, line_start_o,
              line_end_o, generic_sp_valid_o}))
    else $error("RX_ASSERT: multiple short-packet outputs asserted together");

  ap_reset_outputs: assert property (@(posedge clk)
    !rst_n |-> (!px_valid_o && !px_last_o &&
                !frame_start_o && !frame_end_o &&
                !line_start_o && !line_end_o && !generic_sp_valid_o &&
                !hdr_ecc_1bit_o && !hdr_ecc_2bit_o && !payload_crc_err_o))
    else $error("RX_ASSERT: RX output pulse active during reset");

  ap_known_controls: assert property (@(posedge clk)
    disable iff (!rst_n)
    !$isunknown({px_valid_o, px_last_o, frame_start_o, frame_end_o,
                 line_start_o, line_end_o, generic_sp_valid_o,
                 hdr_ecc_1bit_o, hdr_ecc_2bit_o, payload_crc_err_o}))
    else $error("RX_ASSERT: X/Z detected on an RX control output");

  ap_known_input_byte: assert property (@(posedge clk)
    disable iff (!rst_n) rx_valid_i |-> !$isunknown(rx_data_i))
    else $error("RX_ASSERT: valid RX input byte contains X/Z");

  ap_known_payload_output: assert property (@(posedge clk)
    disable iff (!rst_n) px_valid_o |->
      !$isunknown({px_data_o, px_vc_o, px_dt_o}))
    else $error("RX_ASSERT: valid payload output contains X/Z");

  // ---------------------- Independent RX reference ------------------------
  // The delayed expected outputs prove exact one-cycle decode latency,
  // header correction/drop behavior, payload count, metadata, short-event
  // decoding, and CRC checking.
  always @(posedge clk or negedge rst_n) begin : rx_reference_check
    logic [23:0] raw_header;
    ecc_result_t decoded;
    logic [1:0] corrected_vc;
    logic [5:0] corrected_dt;
    logic [15:0] corrected_len;
    logic [15:0] crc_next;

    if (!rst_n) begin
      ref_state         = REF_HDR;
      ref_hdr_count     = 2'd0;
      ref_vc            = 2'd0;
      ref_dt            = 6'd0;
      ref_wc            = 16'd0;
      ref_payload_count = 16'd0;
      ref_crc           = CSI2_CRC16_INIT;
      ref_crc_byte0     = 8'd0;
      ref_crc_second    = 1'b0;

      exp_px_valid      = 1'b0;
      exp_px_data       = 8'd0;
      exp_px_last       = 1'b0;
      exp_px_vc         = 2'd0;
      exp_px_dt         = 6'd0;
      exp_frame_start   = 1'b0;
      exp_frame_end     = 1'b0;
      exp_line_start    = 1'b0;
      exp_line_end      = 1'b0;
      exp_generic_valid = 1'b0;
      exp_generic_dt    = 6'd0;
      exp_generic_data  = 16'd0;
      exp_ecc1          = 1'b0;
      exp_ecc2          = 1'b0;
      exp_crc_error     = 1'b0;
      frame_open        = 1'b0;
      line_open         = 1'b0;
    end else begin
      assert (px_valid_o === exp_px_valid)
        else $error("RX_ASSERT: incorrect payload-valid timing");
      assert (px_last_o === exp_px_last)
        else $error("RX_ASSERT: incorrect payload-last timing");
      if (exp_px_valid) begin
        assert ({px_vc_o, px_dt_o, px_data_o} ===
                {exp_px_vc, exp_px_dt, exp_px_data})
          else $error("RX_ASSERT: decoded payload or metadata mismatch");
      end

      assert ({frame_start_o, frame_end_o, line_start_o, line_end_o} ===
              {exp_frame_start, exp_frame_end, exp_line_start, exp_line_end})
        else $error("RX_ASSERT: incorrect frame/line event decode or timing");
      assert (generic_sp_valid_o === exp_generic_valid)
        else $error("RX_ASSERT: incorrect generic-short valid timing");
      if (exp_generic_valid) begin
        assert ({generic_sp_dt_o, generic_sp_data_o} ===
                {exp_generic_dt, exp_generic_data})
          else $error("RX_ASSERT: generic-short content mismatch");
      end
      assert ({hdr_ecc_1bit_o, hdr_ecc_2bit_o} === {exp_ecc1, exp_ecc2})
        else $error("RX_ASSERT: incorrect ECC status or timing");
      assert (payload_crc_err_o === exp_crc_error)
        else $error("RX_ASSERT: incorrect payload CRC result or timing");

      // Default values for the response generated by this cycle's input.
      exp_px_valid      = 1'b0;
      exp_px_last       = 1'b0;
      exp_frame_start   = 1'b0;
      exp_frame_end     = 1'b0;
      exp_line_start    = 1'b0;
      exp_line_end      = 1'b0;
      exp_generic_valid = 1'b0;
      exp_ecc1          = 1'b0;
      exp_ecc2          = 1'b0;
      exp_crc_error     = 1'b0;

      // Optional semantic frame/line ordering checks use decoded DUT events.
      if (CHECK_FRAME_SEQUENCE) begin
        if (frame_start_o) begin
          assert (!frame_open)
            else $error("RX_ASSERT: Frame Start while another frame is open");
          frame_open = 1'b1;
          line_open  = 1'b0;
        end
        if (line_start_o) begin
          assert (frame_open && !line_open)
            else $error("RX_ASSERT: Line Start outside a frame or while a line is open");
          line_open = 1'b1;
        end
        if (line_end_o) begin
          assert (frame_open && line_open)
            else $error("RX_ASSERT: Line End without an open line");
          line_open = 1'b0;
        end
        if (frame_end_o) begin
          assert (frame_open && !line_open)
            else $error("RX_ASSERT: Frame End without an open frame or with an open line");
          frame_open = 1'b0;
        end
      end

      if (REQUIRE_PAYLOAD_INSIDE_LINE && px_valid_o) begin
        assert (frame_open && line_open)
          else $error("RX_ASSERT: payload observed outside an open frame/line");
      end

      if (sop_i && rx_valid_i) begin
        ref_hdr[0]    = rx_data_i;
        ref_hdr_count = 2'd1;
        ref_state     = REF_HDR;
      end else begin
        case (ref_state)
          REF_HDR: begin
            if (rx_valid_i) begin
              if (ref_hdr_count == 2'd3) begin
                raw_header    = {ref_hdr[2], ref_hdr[1], ref_hdr[0]};
                decoded       = decode_header(raw_header, rx_data_i);
                corrected_vc  = decoded.header[7:6];
                corrected_dt  = decoded.header[5:0];
                corrected_len = decoded.header[23:8];
                exp_ecc1      = decoded.err_1bit;
                exp_ecc2      = decoded.err_2bit;
                ref_hdr_count = 2'd0;

                if (decoded.err_2bit) begin
                  ref_state = REF_HDR;
                end else if (is_long_packet(corrected_dt)) begin
                  ref_vc            = corrected_vc;
                  ref_dt            = corrected_dt;
                  ref_wc            = corrected_len;
                  ref_payload_count = 16'd0;
                  ref_crc           = CSI2_CRC16_INIT;
                  ref_crc_second    = 1'b0;
                  ref_state = (corrected_len == 16'd0) ? REF_CRC : REF_PAYLOAD;
                end else begin
                  case (corrected_dt)
                    DT_FRAME_START: exp_frame_start = 1'b1;
                    DT_FRAME_END:   exp_frame_end   = 1'b1;
                    DT_LINE_START:  exp_line_start  = 1'b1;
                    DT_LINE_END:    exp_line_end    = 1'b1;
                    default: begin
                      exp_generic_valid = 1'b1;
                      exp_generic_dt    = corrected_dt;
                      exp_generic_data  = corrected_len;
                    end
                  endcase
                  ref_state = REF_HDR;
                end
              end else begin
                ref_hdr[ref_hdr_count] = rx_data_i;
                ref_hdr_count = ref_hdr_count + 2'd1;
              end
            end
          end

          REF_PAYLOAD: begin
            if (rx_valid_i) begin
              crc_next         = csi2_crc16_next(ref_crc, rx_data_i);
              exp_px_valid     = 1'b1;
              exp_px_data      = rx_data_i;
              exp_px_vc        = ref_vc;
              exp_px_dt        = ref_dt;
              ref_crc          = crc_next;
              ref_payload_count = ref_payload_count + 16'd1;
              if (ref_payload_count == ref_wc) begin
                exp_px_last    = 1'b1;
                ref_crc_second = 1'b0;
                ref_state      = REF_CRC;
              end
            end
          end

          REF_CRC: begin
            if (rx_valid_i) begin
              if (!ref_crc_second) begin
                ref_crc_byte0  = rx_data_i;
                ref_crc_second = 1'b1;
              end else begin
                exp_crc_error  = ({rx_data_i, ref_crc_byte0} != ref_crc);
                ref_crc_second = 1'b0;
                ref_hdr_count  = 2'd0;
                ref_state      = REF_HDR;
              end
            end
          end

          default: begin
            ref_state     = REF_HDR;
            ref_hdr_count = 2'd0;
          end
        endcase
      end
    end
  end

endmodule : csi2_rx_assertions
