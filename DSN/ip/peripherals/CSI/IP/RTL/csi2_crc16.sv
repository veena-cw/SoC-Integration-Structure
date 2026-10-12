//-----------------------------------------------------------------------------
// csi2_crc16.sv
// CSI-2 CRC-16 over PAYLOAD bytes. x^16+x^12+x^5+1, init 16'hFFFF.
//
// FIX: CSI-2 shifts each data byte LSB-first (reflected CRC-CCITT, 16'h8408).
//      The old code was MSB-first with 16'h1021, which gives a different CRC.
//      CRC is transmitted LSB byte first (handled in csi2_tx).
//-----------------------------------------------------------------------------
import csi2_pkg::*;
module csi2_crc16 (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  logic        crc_init_i,
  input  logic        crc_en_i,
  input  logic [7:0]  data_i,
  output logic [15:0] crc_o
);

  function automatic logic [15:0] crc16_next (
    input logic [15:0] crc_in,
    input logic [7:0]  data_in
  );
    logic [15:0] crc;
    logic        feedback;
    begin
      crc = crc_in;
      for (int k = 0; k < 8; k++) begin
        feedback = crc[0] ^ data_in[k];   // LSB first
        crc      = {1'b0, crc[15:1]};
        if (feedback) crc = crc ^ 16'h8408;
      end
      crc16_next = crc;
    end
  endfunction

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)          crc_o <= 16'hFFFF;
    else if (crc_init_i)  crc_o <= 16'hFFFF;
    else if (crc_en_i)    crc_o <= crc16_next(crc_o, data_i);
  end

endmodule