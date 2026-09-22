
// -----------------------------------------------------------------------------
// csi2_ecc_dec.sv
//
// MIPI CSI-2 packet-header ECC decoder: single-bit error correction,
// double-bit error detection (SECDED) over the 24-bit header word, given
// the received 6-bit ECC syndrome.
//
// The syndrome -> bit-position decode table below was independently derived
// from the csi2_ecc_gen generator matrix (each data bit's syndrome is the
// XOR of the parity-equation indices that reference it) and then
// cross-checked against the syndrome ROM used in an unrelated third-party
// open-source implementation (github.com/hellgate202/csi2_rx,
// csi2_err_bit_pos_pkg.sv) -- all 24 entries matched exactly, giving high
// confidence in both the generator matrix and this decode table.
//
// Error classification:
//   err_1bit = 1: a single-bit error was detected and corrected. This
//                 covers both a flipped data bit (header_out is corrected)
//                 and a flipped ECC/parity bit (header_out is already
//                 correct, nothing to flip).
//   err_2bit = 1: a 2-bit (or higher, aliased) error was detected but is
//                 not correctable; header_out is not trustworthy.
// As with any finite-distance ECC, this scheme only *guarantees* correct
// classification for up to 2-bit errors; higher-order error patterns can in
// principle alias to a lower syndrome. This matches the MIPI CSI-2 spec's
// stated 1-bit-correct / 2-bit-detect guarantee.
// -----------------------------------------------------------------------------

module csi2_ecc_dec (
  input  logic [23:0] header_in,
  input  logic [7:0]  ecc_in,
  output logic [23:0] header_out,
  output logic        err_1bit,
  output logic        err_2bit
);

  logic [7:0] ecc_calc;
  logic [5:0] syndrome;
  logic [4:0] err_bit;
  logic       err_bit_valid;
  logic       is_pow2;

  csi2_ecc_gen u_ecc_gen (
    .header (header_in),
    .ecc    (ecc_calc)
  );

  assign syndrome = ecc_calc[5:0] ^ ecc_in[5:0];
  assign is_pow2  = (syndrome != 6'd0) && ((syndrome & (syndrome - 6'd1)) == 6'd0);

  always_comb begin
    err_bit       = 5'd0;
    err_bit_valid = 1'b0;
    case (syndrome)
      6'd7:  begin err_bit = 5'd0;  err_bit_valid = 1'b1; end
      6'd11: begin err_bit = 5'd1;  err_bit_valid = 1'b1; end
      6'd13: begin err_bit = 5'd2;  err_bit_valid = 1'b1; end
      6'd14: begin err_bit = 5'd3;  err_bit_valid = 1'b1; end
      6'd19: begin err_bit = 5'd4;  err_bit_valid = 1'b1; end
      6'd21: begin err_bit = 5'd5;  err_bit_valid = 1'b1; end
      6'd22: begin err_bit = 5'd6;  err_bit_valid = 1'b1; end
      6'd25: begin err_bit = 5'd7;  err_bit_valid = 1'b1; end
      6'd26: begin err_bit = 5'd8;  err_bit_valid = 1'b1; end
      6'd28: begin err_bit = 5'd9;  err_bit_valid = 1'b1; end
      6'd35: begin err_bit = 5'd10; err_bit_valid = 1'b1; end
      6'd37: begin err_bit = 5'd11; err_bit_valid = 1'b1; end
      6'd38: begin err_bit = 5'd12; err_bit_valid = 1'b1; end
      6'd41: begin err_bit = 5'd13; err_bit_valid = 1'b1; end
      6'd42: begin err_bit = 5'd14; err_bit_valid = 1'b1; end
      6'd44: begin err_bit = 5'd15; err_bit_valid = 1'b1; end
      6'd49: begin err_bit = 5'd16; err_bit_valid = 1'b1; end
      6'd50: begin err_bit = 5'd17; err_bit_valid = 1'b1; end
      6'd52: begin err_bit = 5'd18; err_bit_valid = 1'b1; end
      6'd56: begin err_bit = 5'd19; err_bit_valid = 1'b1; end
      6'd31: begin err_bit = 5'd20; err_bit_valid = 1'b1; end
      6'd47: begin err_bit = 5'd21; err_bit_valid = 1'b1; end
      6'd55: begin err_bit = 5'd22; err_bit_valid = 1'b1; end
      6'd59: begin err_bit = 5'd23; err_bit_valid = 1'b1; end
      // Any other nonzero syndrome (including the six single-bit-in-ECC-byte
      // syndromes 1/2/4/8/16/32, handled via is_pow2 below) does not
      // identify a single header data bit to flip.
      default: begin err_bit = 5'd0; err_bit_valid = 1'b0; end
    endcase
  end

  always_comb begin
    header_out = header_in;
    if (err_bit_valid)
      header_out[err_bit] = ~header_in[err_bit];
  end

  assign err_1bit = (syndrome != 6'd0) && (err_bit_valid || is_pow2);
  assign err_2bit = (syndrome != 6'd0) && !err_bit_valid && !is_pow2;

endmodule : csi2_ecc_dec
