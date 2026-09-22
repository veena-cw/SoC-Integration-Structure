
// -----------------------------------------------------------------------------
// csi2_pkg.sv
//
// Shared types/constants for the MIPI CSI-2 digital protocol-layer core.
//
// Data-type (DT) and short-packet codes below are taken directly from the
// MIPI CSI-2 specification's Data Type coding table (App/short packets use
// codes 0x00-0x0F, generic long packets/pixel data use 0x10-0x37).
// -----------------------------------------------------------------------------

package csi2_pkg;

  // ---------------------------------------------------------------------
  // Short packet data types (0x00-0x0F)
  // ---------------------------------------------------------------------
  localparam bit [5:0] DT_FRAME_START   = 6'h00;
  localparam bit [5:0] DT_FRAME_END     = 6'h01;
  localparam bit [5:0] DT_LINE_START    = 6'h02;
  localparam bit [5:0] DT_LINE_END      = 6'h03;
  // 0x04-0x07 reserved, 0x08-0x0F generic short packet codes 1-8
  localparam bit [5:0] DT_GENERIC_SHORT_0 = 6'h08;

  // ---------------------------------------------------------------------
  // Long packet data types (0x10-0x37)
  // ---------------------------------------------------------------------
  localparam bit [5:0] DT_NULL            = 6'h10;
  localparam bit [5:0] DT_BLANKING        = 6'h11;
  localparam bit [5:0] DT_EMBEDDED_8      = 6'h12;
  localparam bit [5:0] DT_YUV420_8        = 6'h18;
  localparam bit [5:0] DT_YUV420_10       = 6'h19;
  localparam bit [5:0] DT_YUV420_8_LEGACY = 6'h1A;
  localparam bit [5:0] DT_YUV420_8_CSPS   = 6'h1C;
  localparam bit [5:0] DT_YUV420_10_CSPS  = 6'h1D;
  localparam bit [5:0] DT_YUV422_8        = 6'h1E;
  localparam bit [5:0] DT_YUV422_10       = 6'h1F;
  localparam bit [5:0] DT_RGB444          = 6'h20;
  localparam bit [5:0] DT_RGB555          = 6'h21;
  localparam bit [5:0] DT_RGB565          = 6'h22;
  localparam bit [5:0] DT_RGB666          = 6'h23;
  localparam bit [5:0] DT_RGB888          = 6'h24;
  localparam bit [5:0] DT_RAW6            = 6'h28;
  localparam bit [5:0] DT_RAW7            = 6'h29;
  localparam bit [5:0] DT_RAW8            = 6'h2A;
  localparam bit [5:0] DT_RAW10           = 6'h2B;
  localparam bit [5:0] DT_RAW12           = 6'h2C;
  localparam bit [5:0] DT_RAW14           = 6'h2D;

  // A data type is a "long packet" (header carries a byte Word Count and is
  // followed by WC payload bytes + 2-byte CRC) whenever DT > 6'h0F.
  function automatic logic is_long_packet(input logic [5:0] dt);
    return dt > 6'h0F;
  endfunction

  // ---------------------------------------------------------------------
  // Generic byte-domain streaming bus used between blocks in this core.
  // 4 bytes/cycle wide (one CSI-2 "word") with a per-byte enable so it
  // works uniformly for 1/2/4-lane configurations.
  // ---------------------------------------------------------------------
  typedef struct packed {
    logic [31:0] data;   // byte 0 = data[7:0] .. byte3 = data[31:24], in wire order
    logic [3:0]  keep;   // per-byte enable, byte0=keep[0] .. byte3=keep[3]
    logic        valid;
    logic        last;   // last transfer of the current packet
  } csi2_byte_bus_t;

endpackage : csi2_pkg
