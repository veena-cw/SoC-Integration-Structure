
// -----------------------------------------------------------------------------
// csi2_crc16.sv
//
// Running CRC-16 accumulator for CSI-2 long-packet payload checking/
// generation. One byte is folded in per cycle when byte_valid is asserted.
// Assert `init` on the same cycle as the first payload byte to load the
// spec-mandated seed (0xFFFF) before folding that byte in.
// -----------------------------------------------------------------------------

import csi2_pkg::*;

module csi2_crc16 (
  input  logic        clk,
  input  logic        rst_n,
  input  logic         init,        // synchronous reseed, sampled with byte_valid
  input  logic         byte_valid,
  input  logic [7:0]   byte_data,
  output logic [15:0]  crc_o        // running CRC value, valid one cycle after the last byte
);

  logic [15:0] crc_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      crc_q <= CSI2_CRC16_INIT;
    end else if (byte_valid) begin
      crc_q <= csi2_crc16_next(init ? CSI2_CRC16_INIT : crc_q, byte_data);
    end
  end

  assign crc_o = crc_q;

endmodule : csi2_crc16
