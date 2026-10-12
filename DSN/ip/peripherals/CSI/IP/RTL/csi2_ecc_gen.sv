//-----------------------------------------------------------------------------
// csi2_ecc_gen.sv
// CSI-2 24-bit packet-header ECC generator (Hamming, 6 parity bits).
// Input : header24_i = {WC/Data[15:8], WC/Data[7:0], VC[1:0], DT[5:0]}
// Output: ecc_o[5:0] parity, ecc_o[7:6] = 0
//
// FIX: parity equations replaced with the CSI-2 spec table. The previous
//      equations were not a valid Hamming code (duplicate syndrome columns).
//-----------------------------------------------------------------------------
module csi2_ecc_gen (
  input  logic [23:0] header24_i,
  output logic [7:0]  ecc_o
);

  logic [23:0] d;

  always_comb begin
    d     = header24_i;
    ecc_o = '0;

    ecc_o[0] = d[0]  ^ d[1]  ^ d[2]  ^ d[4]  ^ d[5]  ^ d[7]  ^ d[10] ^ d[11]
             ^ d[13] ^ d[16] ^ d[20] ^ d[21] ^ d[22] ^ d[23];

    ecc_o[1] = d[0]  ^ d[1]  ^ d[3]  ^ d[4]  ^ d[6]  ^ d[8]  ^ d[10] ^ d[12]
             ^ d[14] ^ d[17] ^ d[20] ^ d[21] ^ d[22] ^ d[23];

    ecc_o[2] = d[0]  ^ d[2]  ^ d[3]  ^ d[5]  ^ d[6]  ^ d[9]  ^ d[11] ^ d[12]
             ^ d[15] ^ d[18] ^ d[20] ^ d[21] ^ d[22];

    ecc_o[3] = d[1]  ^ d[2]  ^ d[3]  ^ d[7]  ^ d[8]  ^ d[9]  ^ d[13] ^ d[14]
             ^ d[15] ^ d[19] ^ d[20] ^ d[21] ^ d[23];

    ecc_o[4] = d[4]  ^ d[5]  ^ d[6]  ^ d[7]  ^ d[8]  ^ d[9]  ^ d[16] ^ d[17]
             ^ d[18] ^ d[19] ^ d[20] ^ d[22] ^ d[23];

    ecc_o[5] = d[10] ^ d[11] ^ d[12] ^ d[13] ^ d[14] ^ d[15] ^ d[16] ^ d[17]
             ^ d[18] ^ d[19] ^ d[21] ^ d[22] ^ d[23];

    ecc_o[7:6] = 2'b00;
  end

endmodule