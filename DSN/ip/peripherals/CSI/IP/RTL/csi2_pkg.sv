//-----------------------------------------------------------------------------
// csi2_pkg.sv
//
// Common CSI-2 definitions and CRC-16 function.
//-----------------------------------------------------------------------------

package csi2_pkg;

  //--------------------------------------------------------------------------
  // CSI-2 Data Types
  //--------------------------------------------------------------------------

  typedef enum logic [5:0] {

    // Short packets
    DT_FS          = 6'h00,
    DT_FE          = 6'h01,
    DT_LS          = 6'h02,
    DT_LE          = 6'h03,

    // Generic short packet
    DT_GENERIC     = 6'h08,

    // Long packets
    DT_NULL        = 6'h10,
    DT_BLANKING    = 6'h11,
    DT_EMBEDDED8   = 6'h12,

    DT_YUV420_8    = 6'h18,
    DT_YUV420_10   = 6'h19,
    DT_YUV422_8    = 6'h1E,
    DT_YUV422_10   = 6'h1F,

    DT_RGB444      = 6'h20,
    DT_RGB555      = 6'h21,
    DT_RGB565      = 6'h22,
    DT_RGB666      = 6'h23,
    DT_RGB888      = 6'h24,

    DT_RAW6        = 6'h28,
    DT_RAW7        = 6'h29,
    DT_RAW8        = 6'h2A,
    DT_RAW10       = 6'h2B,
    DT_RAW12       = 6'h2C,
    DT_RAW14       = 6'h2D,
    DT_RAW16       = 6'h2E,
    DT_RAW20       = 6'h2F

  } csi2_dt_e;


  //--------------------------------------------------------------------------
  // CSI-2 byte bus
  //--------------------------------------------------------------------------

  typedef struct packed {
    logic [31:0] data;
    logic [3:0]  keep;
    logic        valid;
    logic        last;
  } csi2_byte_bus_t;


  //--------------------------------------------------------------------------
  // Determine short/long packet
  //--------------------------------------------------------------------------

  function automatic logic is_long_packet(
    input logic [5:0] dt
  );

    is_long_packet = (dt > 6'h0F);

  endfunction


  //--------------------------------------------------------------------------
  // CSI-2 CRC-16
  //
  // Polynomial:
  //
  //      x^16 + x^12 + x^5 + 1
  //
  // Reflected implementation:
  //
  //      16'h8408
  //
  // Initial value:
  //
  //      16'hFFFF
  //
  // Data processed LSB first.
  //--------------------------------------------------------------------------

  function automatic logic [15:0] crc16_next(
    input logic [15:0] crc_in,
    input logic [7:0]  data_in
  );

    logic [15:0] crc;
    logic        feedback;

    crc = crc_in;

    for (int i = 0; i < 8; i++) begin

      feedback = crc[0] ^ data_in[i];

      crc = crc >> 1;

      if (feedback)
        crc = crc ^ 16'h8408;

    end

    return crc;

  endfunction
  
  //-----------------------------------------------------------------------------
// csi2_rx_pkg.sv
// Shared CRC-16 helpers for the CSI-2 RX path.
//
// CSI-2 CRC-16: x^16 + x^12 + x^5 + 1, init 0xFFFF, bit-serial LSB first
// (reflected form, constant 0x8408). CRC is sent low byte first.
//
// IMPORTANT: this MUST give the same result as the CRC used in your csi2_tx.
// If your TX uses a different bit order / init, change it here (or replace
// these functions by the TX ones).
//-----------------------------------------------------------------------------


  function automatic logic [15:0] crc16_byte(input logic [15:0] crc,
                                             input logic [7:0]  d);
    logic [15:0] c;
    c = crc;
    for (int i = 0; i < 8; i++) begin
      if (c[0] ^ d[i]) c = (c >> 1) ^ 16'h8408;
      else             c = (c >> 1);
    end
    return c;
  endfunction

  // CRC over the first 4 header bytes {RSVD, WC_H, WC_L, DI} (byte0 = h[7:0])
  function automatic logic [15:0] crc16_hdr(input logic [31:0] h);
    logic [15:0] c;
    c = 16'hFFFF;
    for (int b = 0; b < 4; b++) c = crc16_byte(c, h[b*8 +: 8]);
    return c;
  endfunction

endpackage

