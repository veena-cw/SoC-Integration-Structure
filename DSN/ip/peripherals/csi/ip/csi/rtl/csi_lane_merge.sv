
// -----------------------------------------------------------------------------
// csi2_lane_merge.sv
//
// Merges NUM_LANES parallel D-PHY byte-domain lanes into the 4-byte/cycle
// internal bus (csi2_byte_bus_t) used by the RX packet layer.
//
// Assumption (see top-level README): this block sits *above* the D-PHY hard
// IP / SERDES. It assumes lane bytes arriving on `lane_data`/`lane_valid`
// are already byte-aligned and lane-deskewed (i.e. bytes belonging to the
// same position in the CSI-2 byte stream arrive on the same clock cycle
// across all active lanes) -- that alignment/training function is normally
// performed inside the vendor D-PHY receiver macro and is not reproduced
// here.
//
// Per the CSI-2/D-PHY spec, bytes are distributed round-robin starting at
// lane 0, and lanes only ever go idle as a *trailing* group at the end of a
// burst (lane_valid is always a contiguous "thermometer" pattern starting
// from lane 0). NUM_LANES must divide 4 evenly (1, 2 or 4) so that
// accumulated bytes land on a word boundary with no carry/remainder logic
// needed.
// -----------------------------------------------------------------------------

import csi2_pkg::*;

module csi2_lane_merge #(
  parameter int NUM_LANES = 4
) (
  input  logic                        clk,
  input  logic                        rst_n,

  input  logic [NUM_LANES*8-1:0]      lane_data,   // lane0 = bits [7:0], lane1 = [15:8], ...
  input  logic [NUM_LANES-1:0]        lane_valid,  // contiguous from bit 0 upward
  input  logic                        hs_last,     // this cycle is the final beat of the HS burst

  output csi2_byte_bus_tbus_o
);

  initial begin
    assert ((NUM_LANES == 1) || (NUM_LANES == 2) || (NUM_LANES == 4))
      else $fatal(1, "csi2_lane_merge: NUM_LANES must be 1, 2 or 4");
  end

  logic [31:0]      acc_data;
  logic [2:0]        acc_cnt;
  logic               any_valid;

  assign any_valid = |lane_valid;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      acc_data      <= '0;
      acc_cnt       <= '0;
      bus_o.data    <= '0;
      bus_o.keep    <= '0;
      bus_o.valid   <= 1'b0;
      bus_o.last    <= 1'b0;
    end else begin
      bus_o.valid <= 1'b0;
      bus_o.last  <= 1'b0;

      if (any_valid) begin
        automatic logic [31:0] acc_next;
        automatic logic [2:0]  cnt_next;

        acc_next = acc_data;
        cnt_next = acc_cnt;
        for (int i = 0; i < NUM_LANES; i++) begin
          if (lane_valid[i]) begin
            acc_next[(acc_cnt + i[2:0])*8 +: 8] = lane_data[i*8 +: 8];
            cnt_next = cnt_next + 3'd1;
          end
        end

        if (cnt_next == 3'd4) begin
          // full word ready this cycle
          bus_o.data  <= acc_next;
          bus_o.keep  <= 4'b1111;
          bus_o.valid <= 1'b1;
          bus_o.last  <= hs_last;
          acc_data    <= '0;
          acc_cnt     <= '0;
        end else if (hs_last) begin
          // burst ends with a partial (sub-word) beat: flush what we have
          bus_o.data  <= acc_next;
          bus_o.keep  <= (4'b0001 << cnt_next) - 4'b0001;
          bus_o.valid <= 1'b1;
          bus_o.last  <= 1'b1;
          acc_data    <= '0;
          acc_cnt     <= '0;
        end else begin
          acc_data <= acc_next;
          acc_cnt  <= cnt_next;
        end
      end
    end
  end

endmodule : csi2_lane_merge
