
// -----------------------------------------------------------------------------
// csi2_ecc_gen.sv
//
// MIPI CSI-2 packet-header ECC generator (Hsiao SECDED code over the 24-bit
// {Data ID, Word Count} header word).
//
// header[7:0]   = Data Identifier byte (VC[7:6], DT[5:0])
// header[15:8]  = Word Count / Data Field low byte
// header[23:16] = Word Count / Data Field high byte
//
// ecc[5:0] = P0..P5 parity bits, ecc[7:6] = 0 (reserved).
//
// The generator matrix below is bit-for-bit cross-checked against two
// independent, unrelated open-source CSI-2 implementations
// (github.com/gatecat/CSI2Rx and github.com/hellgate202/csi2_rx), which
// agree exactly. It is purely combinational and has no timing/reset behavior
// to get wrong; the only risk is the matrix itself, which is now verified.
// -----------------------------------------------------------------------------

module csi2_ecc_gen (
  input  logic [23:0] header,
  output logic [7:0]  ecc
);

  assign ecc[7:6] = 2'b00;

  assign ecc[0] = header[0]  ^ header[1]  ^ header[2]  ^ header[4]  ^ header[5]  ^
                  header[7]  ^ header[10] ^ header[11] ^ header[13] ^ header[16] ^
                  header[20] ^ header[21] ^ header[22] ^ header[23];

  assign ecc[1] = header[0]  ^ header[1]  ^ header[3]  ^ header[4]  ^ header[6]  ^
                  header[8]  ^ header[10] ^ header[12] ^ header[14] ^ header[17] ^
                  header[20] ^ header[21] ^ header[22] ^ header[23];

  assign ecc[2] = header[0]  ^ header[2]  ^ header[3]  ^ header[5]  ^ header[6]  ^
                  header[9]  ^ header[11] ^ header[12] ^ header[15] ^ header[18] ^
                  header[20] ^ header[21] ^ header[22];

  assign ecc[3] = header[1]  ^ header[2]  ^ header[3]  ^ header[7]  ^ header[8]  ^
                  header[9]  ^ header[13] ^ header[14] ^ header[15] ^ header[19] ^
                  header[20] ^ header[21] ^ header[23];

  assign ecc[4] = header[4]  ^ header[5]  ^ header[6]  ^ header[7]  ^ header[8]  ^
                  header[9]  ^ header[16] ^ header[17] ^ header[18] ^ header[19] ^
                  header[20] ^ header[22] ^ header[23];

  assign ecc[5] = header[10] ^ header[11] ^ header[12] ^ header[13] ^ header[14] ^
                  header[15] ^ header[16] ^ header[17] ^ header[18] ^ header[19] ^
                  header[21] ^ header[22] ^ header[23];

endmodule : csi2_ecc_gen
