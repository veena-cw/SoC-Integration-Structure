module rx_byte_counter (
  input  logic       cphy_rxwordclkhs,   // Clock input signal
  input  logic       rst_n,              // Active-low reset
  input  logic       byte_data_valid,    // Valid byte data signal
  input  logic       rx_buf_reg_vld,     // OR of all rx_buffer_register stage valids
  input  logic [5:0] data_type_rx_reg,   // Data type of the packet

  output logic [9:0] enable_r,           // enable history (kept for compatibility)
  output logic [1:0] rx_byte_ctr24,      // 3 bytes
  output logic [1:0] rx_byte_ctr16,      // 2 bytes
  output logic [2:0] rx_byte_ctr56,      // 7 bytes  (RAW7 0x29, RAW14 0x2d, 0x26)
  output logic [2:0] rx_byte_ctr40,      // 5 bytes
  output logic [3:0] rx_byte_ctr72,      // 9 bytes
  output logic [3:0] rx_byte_ctr32,      // 4 bytes
  output logic [3:0] rx_byte_ctr80,      // 10 bytes
  output logic [2:0] rx_byte_ctr64,      // 8 bytes
  output logic [5:0] rx_byte_ctr48       // 6 bytes
);

  logic data_type_rx_reg1; // 24-bit
  logic data_type_rx_reg2; // 72-bit
  logic data_type_rx_reg3; // 16-bit
  logic data_type_rx_reg4; // 56-bit
  logic data_type_rx_reg5; // 40-bit
  logic data_type_rx_reg6; // 32-bit
  logic data_type_rx_reg7; // 80-bit
  logic data_type_rx_reg8; // 64-bit
  logic data_type_rx_reg9; // 48-bit
  logic enable;
  logic cnt_clr;

  // Counter wrap values (bytes per word - 1)
  localparam [1:0] MAX_24 = 2'd2;  // 3 bytes
  localparam [3:0] MAX_72 = 4'd8;  // 9 bytes
  localparam [1:0] MAX_16 = 2'd1;  // 2 bytes
  localparam [2:0] MAX_56 = 3'd6;  // 7 bytes
  localparam [2:0] MAX_40 = 3'd4;  // 5 bytes
  localparam [3:0] MAX_32 = 4'd3;  // 4 bytes
  localparam [3:0] MAX_80 = 4'd9;  // 10 bytes
  localparam [2:0] MAX_64 = 3'd7;  // 8 bytes
  localparam [5:0] MAX_48 = 6'd5;  // 6 bytes

  // 3-byte types
  assign data_type_rx_reg1 = (data_type_rx_reg == 6'h24) | (data_type_rx_reg == 6'h28) |
                             (data_type_rx_reg == 6'h2c) | (data_type_rx_reg == 6'h27);
  // 9-byte type
  assign data_type_rx_reg2 = (data_type_rx_reg == 6'h23);
  // 2-byte types
  assign data_type_rx_reg3 = (data_type_rx_reg == 6'h22) | (data_type_rx_reg == 6'h21) |
                             (data_type_rx_reg == 6'h20) | (data_type_rx_reg == 6'h2e);
  // 7-byte types: RAW7 (0x29), RAW14 (0x2d), 0x26
  assign data_type_rx_reg4 = (data_type_rx_reg == 6'h29) | (data_type_rx_reg == 6'h2d) |
                             (data_type_rx_reg == 6'h26);
  // 5-byte types
  assign data_type_rx_reg5 = (data_type_rx_reg == 6'h2b) | (data_type_rx_reg == 6'h2f) |
                             (data_type_rx_reg == 6'h19) | (data_type_rx_reg == 6'h1d);
  assign data_type_rx_reg6 = (data_type_rx_reg == 6'h1c);   // yuv420 8-bit even
  assign data_type_rx_reg7 = (data_type_rx_reg == 6'h19);   // yuv420 10-bit even
  assign data_type_rx_reg8 = (data_type_rx_reg == 6'h18);   // yuv420 8-bit
  assign data_type_rx_reg9 = (data_type_rx_reg == 6'h1a);   // legacy yuv420 8-bit

  // Count a byte only when it is valid AND the buffer already holds the previous byte
  assign enable = byte_data_valid & rx_buf_reg_vld;

  // Buffer empty (no fresh byte last cycle) => next packet / idle => realign all counters to 0.
  // rx_buf_reg_vld is still high on the cycle right after the last byte, so the counter
  // still holds its "word complete" value (MAX) while the last word is presented.
  assign cnt_clr = ~rx_buf_reg_vld;

  // enable history (not used by the counters any more)
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n) enable_r <= 10'h0;
    else        enable_r <= {enable_r[8:0], enable};

  // 24-bit counter
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr24 <= '0;
    else if (cnt_clr) rx_byte_ctr24 <= '0;
    else if (enable & data_type_rx_reg1)
      rx_byte_ctr24 <= (rx_byte_ctr24 == MAX_24) ? '0 : rx_byte_ctr24 + 1'b1;

  // 72-bit counter
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr72 <= '0;
    else if (cnt_clr) rx_byte_ctr72 <= '0;
    else if (enable & data_type_rx_reg2)
      rx_byte_ctr72 <= (rx_byte_ctr72 == MAX_72) ? '0 : rx_byte_ctr72 + 1'b1;

  // 16-bit counter
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr16 <= '0;
    else if (cnt_clr) rx_byte_ctr16 <= '0;
    else if (enable & data_type_rx_reg3)
      rx_byte_ctr16 <= (rx_byte_ctr16 == MAX_16) ? '0 : rx_byte_ctr16 + 1'b1;

  // 32-bit counter
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr32 <= '0;
    else if (cnt_clr) rx_byte_ctr32 <= '0;
    else if (enable & data_type_rx_reg6)
      rx_byte_ctr32 <= (rx_byte_ctr32 == MAX_32) ? '0 : rx_byte_ctr32 + 1'b1;

  // 80-bit counter
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr80 <= '0;
    else if (cnt_clr) rx_byte_ctr80 <= '0;
    else if (enable & data_type_rx_reg7)
      rx_byte_ctr80 <= (rx_byte_ctr80 == MAX_80) ? '0 : rx_byte_ctr80 + 1'b1;

  // 64-bit counter
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr64 <= '0;
    else if (cnt_clr) rx_byte_ctr64 <= '0;
    else if (enable & data_type_rx_reg8)
      rx_byte_ctr64 <= (rx_byte_ctr64 == MAX_64) ? '0 : rx_byte_ctr64 + 1'b1;

  // 56-bit counter (RAW7 / RAW14 / 0x26)
  // FIX: counts only on valid bytes (no enable_r tail), clears when the buffer is empty.
  // Word complete for RAW7 = rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'd6)
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr56 <= '0;
    else if (cnt_clr) rx_byte_ctr56 <= '0;
    else if (enable & data_type_rx_reg4)
      rx_byte_ctr56 <= (rx_byte_ctr56 == MAX_56) ? '0 : rx_byte_ctr56 + 1'b1;

  // 40-bit counter
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr40 <= '0;
    else if (cnt_clr) rx_byte_ctr40 <= '0;
    else if (enable & data_type_rx_reg5)
      rx_byte_ctr40 <= (rx_byte_ctr40 == MAX_40) ? '0 : rx_byte_ctr40 + 1'b1;

  // 48-bit counter
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (~rst_n)       rx_byte_ctr48 <= '0;
    else if (cnt_clr) rx_byte_ctr48 <= '0;
    else if (enable & data_type_rx_reg9)
      rx_byte_ctr48 <= (rx_byte_ctr48 == MAX_48) ? '0 : rx_byte_ctr48 + 1'b1;

endmodule
