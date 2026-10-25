module rx_buffer_register(
  input  logic        cphy_rxwordclkhs,   // Clock signal
  input  logic        rst_n,              // Active-low reset signal
  input  logic        byte_data_vld,      // Valid signal for input byte
  input  logic [5:0]  data_type_rx,       // Data type of the received packet
  input  logic [7:0]  byte_data,          // 8-bit payload byte (always 8 bits, even for RAW7)

  // Valid signal for each buffer stage.
  // rx_buff_reg_vldN is high for exactly one clock after a byte was shifted
  // into stage N, i.e. "rx_buff_regN holds fresh data this cycle".
  output logic rx_buff_reg_vld1,
  output logic rx_buff_reg_vld2,
  output logic rx_buff_reg_vld3,
  output logic rx_buff_reg_vld4,
  output logic rx_buff_reg_vld5,
  output logic rx_buff_reg_vld6,
  output logic rx_buff_reg_vld7,
  output logic rx_buff_reg_vld8,
  output logic rx_buff_reg_vld9,
  output logic rx_buff_reg_vld10,
  output logic rx_buff_reg_vld,

  // Sliding window of the last N bytes (stage N = N bytes = 8*N bits)
  output logic [7:0]  rx_buff_reg1,
  output logic [15:0] rx_buff_reg2,
  output logic [23:0] rx_buff_reg3,
  output logic [31:0] rx_buff_reg4,
  output logic [39:0] rx_buff_reg5,
  output logic [47:0] rx_buff_reg6,
  output logic [55:0] rx_buff_reg7,   // RAW7 (0x29): 8 pixels x 7 bit = 56 bit = 7 bytes
  output logic [63:0] rx_buff_reg8,
  output logic [71:0] rx_buff_reg9,
  output logic [79:0] rx_buff_reg10
);

  // Which stages are used by which data type
  logic datatype_reg1;
  logic datatype_reg2;
  logic datatype_reg3;
  logic datatype_reg4;
  logic datatype_reg5;
  logic datatype_reg6;
  logic datatype_reg7;
  logic datatype_reg8;
  logic datatype_reg9;
  logic datatype_reg10;

  assign datatype_reg1 = ((data_type_rx == 6'h24) | (data_type_rx == 6'h28) | (data_type_rx == 6'h2c) |
                          (data_type_rx == 6'h27) | (data_type_rx == 6'h23) | (data_type_rx == 6'h22) |
                          (data_type_rx == 6'h21) | (data_type_rx == 6'h20) | (data_type_rx == 6'h2e) |
                          (data_type_rx == 6'h29) | (data_type_rx == 6'h2d) | (data_type_rx == 6'h26) |
                          (data_type_rx == 6'h2b) | (data_type_rx == 6'h2f) | (data_type_rx == 6'h2a));

  assign datatype_reg2 = datatype_reg1;
  assign datatype_reg3 = ((data_type_rx == 6'h24) | (data_type_rx == 6'h28) | (data_type_rx == 6'h2c) |
                          (data_type_rx == 6'h27) | (data_type_rx == 6'h23) | (data_type_rx == 6'h29) |
                          (data_type_rx == 6'h2d) | (data_type_rx == 6'h26) | (data_type_rx == 6'h2b) |
                          (data_type_rx == 6'h2f));
  assign datatype_reg4 = ((data_type_rx == 6'h23) | (data_type_rx == 6'h29) | (data_type_rx == 6'h2d) |
                          (data_type_rx == 6'h26) | (data_type_rx == 6'h2b) | (data_type_rx == 6'h2f));
  assign datatype_reg5 = datatype_reg4;
  assign datatype_reg6 = ((data_type_rx == 6'h23) | (data_type_rx == 6'h29) | (data_type_rx == 6'h2d) |
                          (data_type_rx == 6'h26));
  assign datatype_reg7 = datatype_reg6;                  // 7-byte types (RAW7 0x29, RAW14 0x2d, 0x26) stop here
  assign datatype_reg8 = (data_type_rx == 6'h23);        // FIX: only the 9-byte type goes past stage 7
  assign datatype_reg9 = datatype_reg8;
  assign datatype_reg10 = (data_type_rx == 6'h1d);

  assign rx_buff_reg_vld = rx_buff_reg_vld1 | rx_buff_reg_vld2 | rx_buff_reg_vld3 | rx_buff_reg_vld4 |
                           rx_buff_reg_vld5 | rx_buff_reg_vld6 | rx_buff_reg_vld7 | rx_buff_reg_vld8 |
                           rx_buff_reg_vld9 | rx_buff_reg_vld10;

  // ------------------------------------------------------------------
  // Each stage shifts a new byte in only when a byte is valid this cycle,
  // the stage is used by this data type, and the previous stage was fresh.
  // In every other cycle the stage (and its valid) is cleared, so a valid
  // never stays high on stale data after the packet ends.
  // ------------------------------------------------------------------

  //buffer1
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld1, rx_buff_reg1} <= '0;
    else if (byte_data_vld & datatype_reg1)
      {rx_buff_reg_vld1, rx_buff_reg1} <= {1'b1, byte_data};
    else
      {rx_buff_reg_vld1, rx_buff_reg1} <= '0;

  //buffer2
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld2, rx_buff_reg2} <= '0;
    else if (byte_data_vld & datatype_reg2 & rx_buff_reg_vld1)
      {rx_buff_reg_vld2, rx_buff_reg2} <= {1'b1, byte_data, rx_buff_reg1};
    else
      {rx_buff_reg_vld2, rx_buff_reg2} <= '0;

  //buffer3
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld3, rx_buff_reg3} <= '0;
    else if (byte_data_vld & datatype_reg3 & rx_buff_reg_vld2)
      {rx_buff_reg_vld3, rx_buff_reg3} <= {1'b1, byte_data, rx_buff_reg2};
    else
      {rx_buff_reg_vld3, rx_buff_reg3} <= '0;

  //buffer4
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld4, rx_buff_reg4} <= '0;
    else if (byte_data_vld & datatype_reg4 & rx_buff_reg_vld3)
      {rx_buff_reg_vld4, rx_buff_reg4} <= {1'b1, byte_data, rx_buff_reg3};
    else
      {rx_buff_reg_vld4, rx_buff_reg4} <= '0;

  //buffer5
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld5, rx_buff_reg5} <= '0;
    else if (byte_data_vld & datatype_reg5 & rx_buff_reg_vld4)
      {rx_buff_reg_vld5, rx_buff_reg5} <= {1'b1, byte_data, rx_buff_reg4};
    else
      {rx_buff_reg_vld5, rx_buff_reg5} <= '0;

  //buffer6
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld6, rx_buff_reg6} <= '0;
    else if (byte_data_vld & datatype_reg6 & rx_buff_reg_vld5)
      {rx_buff_reg_vld6, rx_buff_reg6} <= {1'b1, byte_data, rx_buff_reg5};
    else
      {rx_buff_reg_vld6, rx_buff_reg6} <= '0;

  //buffer7  (RAW7 word: 56 bits = 7 bytes = 8 pixels)
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld7, rx_buff_reg7} <= '0;
    else if (byte_data_vld & datatype_reg7 & rx_buff_reg_vld6)
      {rx_buff_reg_vld7, rx_buff_reg7} <= {1'b1, byte_data, rx_buff_reg6};
    else
      {rx_buff_reg_vld7, rx_buff_reg7} <= '0;

  //buffer8
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld8, rx_buff_reg8} <= '0;
    else if (byte_data_vld & datatype_reg8 & rx_buff_reg_vld7)
      {rx_buff_reg_vld8, rx_buff_reg8} <= {1'b1, byte_data, rx_buff_reg7};
    else
      {rx_buff_reg_vld8, rx_buff_reg8} <= '0;

  //buffer9
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld9, rx_buff_reg9} <= '0;
    else if (byte_data_vld & datatype_reg9 & rx_buff_reg_vld8)
      {rx_buff_reg_vld9, rx_buff_reg9} <= {1'b1, byte_data, rx_buff_reg8};
    else
      {rx_buff_reg_vld9, rx_buff_reg9} <= '0;

  //buffer10
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld10, rx_buff_reg10} <= '0;
    else if (byte_data_vld & datatype_reg10 & rx_buff_reg_vld9)
      {rx_buff_reg_vld10, rx_buff_reg10} <= {1'b1, byte_data, rx_buff_reg9};
    else
      {rx_buff_reg_vld10, rx_buff_reg10} <= '0;

endmodule
