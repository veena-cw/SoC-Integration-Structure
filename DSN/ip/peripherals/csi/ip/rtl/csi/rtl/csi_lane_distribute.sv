
// -----------------------------------------------------------------------------
// csi2_lane_distribute.sv
//
// Inverse of csi2_lane_merge: takes the 4-byte/cycle internal bus
// (csi2_byte_bus_t) produced by the TX packet layer and serializes it out
// onto NUM_LANES D-PHY byte-domain lanes, round-robin from lane 0, per the
// CSI-2/D-PHY spec. NUM_LANES must be 1, 2 or 4.
//
// bus_i.keep is assumed contiguous from bit 0 (i.e. it only ever indicates
// "first N bytes of this word are valid"), which is how csi2_tx.sv produces
// it.
//
// This block ends at the D-PHY byte-domain boundary: driving the actual
// HS burst (LP->HS transition, sync-byte insertion, differential
// serialization) is D-PHY hard-IP/PLL/SERDES territory and is out of scope
// here (see top-level README).
// -----------------------------------------------------------------------------

import csi2_pkg::*;

module csi2_lane_distribute #(
  parameter int NUM_LANES = 4
) (
  input  logic                    clk,
  input  logic                    rst_n,

  input  logic csi2_byte_bus_tus_i,
  output logic                    bus_ready_o,   // may accept a new word (bus_i.valid) this cycle

  output logic [NUM_LANES*8-1:0]  lane_data,
  output logic [NUM_LANES-1:0]    lane_valid,
  output logic                    hs_active,     // burst in progress, drive lanes
  output logic                    hs_last        // final beat of the HS burst
);

  initial begin
    assert ((NUM_LANES == 1) || (NUM_LANES == 2) || (NUM_LANES == 4))
      else $fatal(1, "csi2_lane_distribute: NUM_LANES must be 1, 2 or 4");
  end

  logic [31:0] word_q;
  logic [2:0]  bytes_left_q;
  logic        word_last_q;
  logic        busy_q;

  logic [2:0]  emit_cnt;

  assign bus_ready_o = !busy_q;

  // number of bytes popped from word_q this cycle
  assign emit_cnt = busy_q ? ((bytes_left_q >= NUM_LANES[2:0]) ? NUM_LANES[2:0] : bytes_left_q) : 3'd0;

  always_comb begin
    lane_data  = '0;
    lane_valid = '0;
    if (busy_q) begin
      for (int i = 0; i < NUM_LANES; i++) begin
        if (i < emit_cnt) begin
          lane_data[i*8 +: 8] = word_q[i*8 +: 8];
          lane_valid[i]       = 1'b1;
        end
      end
    end
  end

  assign hs_active = busy_q && (emit_cnt != 3'd0);
  assign hs_last    = busy_q && word_last_q && (bytes_left_q == emit_cnt) && (emit_cnt != 3'd0);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      word_q       <= '0;
      bytes_left_q <= '0;
      word_last_q  <= 1'b0;
      busy_q       <= 1'b0;
    end else begin
      if (busy_q) begin
        if (emit_cnt >= bytes_left_q) begin
          busy_q       <= 1'b0;
          bytes_left_q <= '0;
        end else begin
          word_q       <= word_q >> (emit_cnt * 8);
          bytes_left_q <= bytes_left_q - emit_cnt;
        end
      end

      if (!busy_q && bus_i.valid) begin
        word_q       <= bus_i.data;
        bytes_left_q <= 3'(bus_i.keep[0]) + 3'(bus_i.keep[1]) + 3'(bus_i.keep[2]) + 3'(bus_i.keep[3]);
        word_last_q  <= bus_i.last;
        busy_q       <= 1'b1;
      end
    end
  end

endmodule : csi2_lane_distribute
