package csi2_pkg;

  // Verification topology.  Only RX standalone is backed by RTL in the
  // current repository; the other values are retained for future expansion.
  typedef enum int unsigned {
    CSI2_RX_STANDALONE,
    CSI2_TX_STANDALONE,
    CSI2_TX_RX_COMBINED
  } csi2_verification_mode_e;

  typedef enum logic [1:0] {
    NONE,
    ODD_LINE,
    EVEN_LINE
  } line_type_e;

  // CSI-2 datatype encodings recognized by the current LLP RTL.
  localparam logic [5:0] DT_FRAME_START       = 6'h00;
  localparam logic [5:0] DT_FRAME_END         = 6'h01;
  localparam logic [5:0] DT_LINE_START        = 6'h02;
  localparam logic [5:0] DT_LINE_END          = 6'h03;

  localparam logic [5:0] DT_YUV420_8          = 6'h18;
  localparam logic [5:0] DT_YUV420_10         = 6'h19;
  localparam logic [5:0] DT_YUV420_8_LEGACY   = 6'h1a;
  localparam logic [5:0] DT_YUV420_8_CSPS     = 6'h1c;
  localparam logic [5:0] DT_YUV420_10_CSPS    = 6'h1d;
  localparam logic [5:0] DT_YUV422_8          = 6'h1e;
  localparam logic [5:0] DT_YUV422_10         = 6'h1f;

  localparam logic [5:0] DT_RGB444            = 6'h20;
  localparam logic [5:0] DT_RGB555            = 6'h21;
  localparam logic [5:0] DT_RGB565            = 6'h22;
  localparam logic [5:0] DT_RGB666            = 6'h23;
  localparam logic [5:0] DT_RGB888            = 6'h24;

  localparam logic [5:0] DT_RAW28             = 6'h26;
  localparam logic [5:0] DT_RAW24             = 6'h27;
  localparam logic [5:0] DT_RAW6              = 6'h28;
  localparam logic [5:0] DT_RAW7              = 6'h29;
  localparam logic [5:0] DT_RAW8              = 6'h2a;
  localparam logic [5:0] DT_RAW10             = 6'h2b;
  localparam logic [5:0] DT_RAW12             = 6'h2c;
  localparam logic [5:0] DT_RAW14             = 6'h2d;
  localparam logic [5:0] DT_RAW16             = 6'h2e;
  localparam logic [5:0] DT_RAW20             = 6'h2f;

  localparam logic [15:0] CSI2_CRC16_INIT = 16'hffff;

  // Legacy verification byte-bus type.  It remains here so existing source
  // files compile while the environment is migrated to the actual PPI RTL.
  typedef struct packed {
    logic [31:0] data;
    logic [3:0]  keep;
    logic        valid;
    logic        last;
  } csi2_byte_bus_t;

  function automatic bit is_long_packet(input logic [5:0] datatype);
    return (datatype >= 6'h10);
  endfunction

  function automatic logic [15:0] csi2_crc16_next(
    input logic [15:0] previous_crc,
    input logic [7:0]  data_byte
  );
    logic [15:0] crc;
    crc = previous_crc;
    for (int bit_index = 0; bit_index < 8; bit_index++)
      crc = (crc[0] ^ data_byte[bit_index]) ?
            ((crc >> 1) ^ 16'h8408) : (crc >> 1);
    return crc;
  endfunction

endpackage : csi2_pkg
