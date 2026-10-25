//------------------------------------------------------------------------------
// bp_rx : pixel output stage of the CSI-2 C-PHY receiver
//
// Works together with rx_buffer_register and rx_byte_counter (fixed versions):
//   * rx_buff_regN / rx_buff_reg_vldN : sliding window of the last N bytes,
//     vld is high for exactly one clock after a byte was shifted into stage N
//   * rx_byte_ctrXX                   : byte position inside a pixel word,
//     equals (bytes_per_word - 1) when the word in rx_buff_regN is complete
// A pixel word is output when  rx_buff_reg_vldN & (rx_byte_ctrXX == MAX).
//
// Select the data format with one of the macros below (default = YUV422_10b):
//   RGB888 RGB666 RGB565 RGB555 RGB444 RAW6 RAW7 RAW10 RAW12 RAW14 RAW16
//   RAW20 RAW24 RAW28 RAW8 LEGACY_YUV420_8b YUV420_8b YUV420_10b YUV422_8b
//------------------------------------------------------------------------------
module bp_rx(
input cphy_rxwordclkhs,                                       //csi2 rx clock
input rst_n,                                                  //negative edge asynchronous reset

input rx_buff_reg_vld,                                        //any buffer register holds fresh data
input rx_buff_reg_vld1,                                       //buffer register 1  fresh
input rx_buff_reg_vld2,                                       //buffer register 2  fresh
input rx_buff_reg_vld3,                                       //buffer register 3  fresh
input rx_buff_reg_vld4,                                       //buffer register 4  fresh
input rx_buff_reg_vld5,                                       //buffer register 5  fresh
input rx_buff_reg_vld6,                                       //buffer register 6  fresh
input rx_buff_reg_vld7,                                       //buffer register 7  fresh
input rx_buff_reg_vld8,                                       //buffer register 8  fresh
input rx_buff_reg_vld9,                                       //buffer register 9  fresh
input rx_buff_reg_vld10,                                      //buffer register 10 fresh

input [9:0] enable_r,                                         //enable history from rx_byte_counter (not used here)
input  [1:0] rx_byte_ctr24,                                   //Counter for 24-bit data (counts 3 bytes)
input  [1:0] rx_byte_ctr16,                                   //Counter for 16-bit data (counts 2 bytes)
input  [2:0] rx_byte_ctr56,                                   //Counter for 56-bit data (counts 7 bytes)
input  [2:0] rx_byte_ctr40,                                   //Counter for 40-bit data (counts 5 bytes)
input  [5:0] rx_byte_ctr48,                                   //Counter for 48-bit data (counts 6 bytes)
input  [3:0] rx_byte_ctr72,                                   //Counter for 72-bit data (counts 9 bytes)
input  [3:0] rx_byte_ctr32,                                   //Counter for 32-bit data (counts 4 bytes)
input  [2:0] rx_byte_ctr64,                                   //Counter for 64-bit data (counts 8 bytes)
input  [3:0] rx_byte_ctr80,                                   //Counter for 80-bit data (counts 10 bytes)

input  [7:0] rx_buff_reg1,
input [15:0] rx_buff_reg2,
input [23:0] rx_buff_reg3,
input [31:0] rx_buff_reg4,
input [39:0] rx_buff_reg5,
input [47:0] rx_buff_reg6,
input [55:0] rx_buff_reg7,
input [63:0] rx_buff_reg8,
input [71:0] rx_buff_reg9,
input [79:0] rx_buff_reg10,

output logic rx_pixel_dvalid,                                 //pixel data is valid
output logic [`rx_pixel_data-1:0] rx_pixel_data);             //pixel data from the receiver side of CSI2 Controller

logic stop_666;                                               //stop signal indication for RGB666 datatype
logic pixel_dvalid_stop;                                      //stop signal indication when last data is reached

assign stop_666 = (rx_byte_ctr72 == 4'h7);

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) pixel_dvalid_stop <= 1'b0;
  else       pixel_dvalid_stop <= (!(rx_buff_reg_vld));

`ifdef RGB888
 logic [23:0] bp_data_in;
 logic [23:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ? {1'b1, rx_buff_reg3[23:0]} : 25'h0;

`elsif RGB666
 logic [71:0] bp_data_in;
 logic [71:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 73'h0;
  else {rx_pixel_dvalid, rx_pixel_data} <= (((!(rx_buff_reg_vld10)) & (!(stop_666)) & rx_buff_reg_vld9 & (rx_byte_ctr72 == 4'h8))) ?
                                            {1'b1, rx_buff_reg9[71:0]} : 73'h0;

`elsif RGB565
 logic [15:0] bp_data_in;
 logic [15:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 17'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ? {1'b1, rx_buff_reg2[15:0]} : 17'h0;

`elsif RGB555
 logic [14:0] bp_data_in;
 logic [14:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 16'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ? {1'b1, {rx_buff_reg2[15:6], rx_buff_reg2[4:0]}} : 16'h0;

`elsif RGB444
 logic [11:0] bp_data_in;
 logic [11:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 13'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?
                                                 {1'b1, {rx_buff_reg2[15:12], rx_buff_reg2[10:7], rx_buff_reg2[4:1]}} : 13'h0;

`elsif RAW6
 logic [23:0] bp_data_in;
 logic [23:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ? {1'b1, rx_buff_reg3[23:0]} : 25'h0;

`elsif RAW7
 // 8 pixels x 7 bit = 56 bit = 7 bytes -> stage 7 + ctr56.
 // FIX: output only when the 7-byte word is complete (ctr56 == 6), one pulse per word.
 logic [55:0] bp_data_in;
 logic [55:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 57'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ? {1'b1, rx_buff_reg7[55:0]} : 57'h0;

`elsif RAW10
 logic [39:0] bp_data_in;
 logic [39:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 41'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?
                                                 {1'b1, {rx_buff_reg5[31:24], rx_buff_reg5[33:32],
                                                         rx_buff_reg5[23:16], rx_buff_reg5[35:34],
                                                         rx_buff_reg5[15:8],  rx_buff_reg5[37:36],
                                                         rx_buff_reg5[7:0],   rx_buff_reg5[39:38]}} : 41'h0;

`elsif RAW12
 logic [23:0] bp_data_in;
 logic [23:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?
                                                 {1'b1, {rx_buff_reg3[15:8], rx_buff_reg3[19:16],
                                                         rx_buff_reg3[7:0],  rx_buff_reg3[23:20]}} : 25'h0;

`elsif RAW14
 logic [55:0] bp_data_in;
 logic [55:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 57'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?
                                                 {1'b1, {rx_buff_reg7[31:24], rx_buff_reg7[53:48],
                                                         rx_buff_reg7[23:16], rx_buff_reg7[55:54],
                                                         rx_buff_reg7[43:40], rx_buff_reg7[15:8],
                                                         rx_buff_reg7[47:44], rx_buff_reg7[33:32],
                                                         rx_buff_reg7[7:0],   rx_buff_reg7[39:34]}} : 57'h0;

`elsif RAW16
 logic [15:0] bp_data_in;
 logic [15:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 17'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?
                                                 {1'b1, rx_buff_reg2[7:0], rx_buff_reg2[15:8]} : 17'h0;

`elsif RAW20
 logic [39:0] bp_data_in;
 logic [39:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 41'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?
                                                 {1'b1, {rx_buff_reg5[23:16], rx_buff_reg5[35:34],
                                                         rx_buff_reg5[31:24], rx_buff_reg5[33:32],
                                                         rx_buff_reg5[7:0],   rx_buff_reg5[39:38],
                                                         rx_buff_reg5[15:8],  rx_buff_reg5[37:36]}} : 41'h0;

`elsif RAW24
 logic [23:0] bp_data_in;
 logic [23:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?
                                                 {1'b1, {rx_buff_reg3[7:0],  rx_buff_reg3[23:20],
                                                         rx_buff_reg3[15:8], rx_buff_reg3[19:16]}} : 25'h0;

`elsif RAW28
 logic [55:0] bp_data_in;
 logic [55:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 57'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?
                                                 {1'b1, {rx_buff_reg7[23:16], rx_buff_reg7[55:54],
                                                         rx_buff_reg7[43:40], rx_buff_reg7[31:24],
                                                         rx_buff_reg7[53:48], rx_buff_reg7[7:0],
                                                         rx_buff_reg7[39:34], rx_buff_reg7[15:8],
                                                         rx_buff_reg7[47:44], rx_buff_reg7[33:32]}} : 57'h0;

`elsif RAW8
 logic [7:0] bp_data_in;
 logic [7:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 9'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= rx_buff_reg_vld1 ? {1'b1, rx_buff_reg1} : 9'h0;

`elsif LEGACY_YUV420_8b
 logic [7:0] bp_data_in;
 logic [7:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 49'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld6 & (rx_byte_ctr48 == 6'h5)) ?
                                                 {1'b1, rx_buff_reg6[47:0]} : 49'h0;

//64 bits per cycle: odd - 2; even - 4
`elsif YUV420_8b
 logic [7:0] bp_data_in;
 logic [7:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 65'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld8 & (rx_byte_ctr64 == 3'h7)) ?
                                                 {1'b1, rx_buff_reg8[63:0]} : 65'h0;

`elsif YUV420_10b
 logic [7:0] bp_data_in;
 logic [7:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 81'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld10 & (rx_byte_ctr80 == 4'h9)) ?
                                                 {1'b1, {rx_buff_reg10[71:64], rx_buff_reg10[73:72], rx_buff_reg10[63:56], rx_buff_reg10[75:74],
                                                         rx_buff_reg10[55:48], rx_buff_reg10[77:76], rx_buff_reg10[47:40], rx_buff_reg10[79:78],
                                                         rx_buff_reg10[31:24], rx_buff_reg10[33:32], rx_buff_reg10[23:16], rx_buff_reg10[35:34],
                                                         rx_buff_reg10[15:8],  rx_buff_reg10[37:36], rx_buff_reg10[7:0],   rx_buff_reg10[39:38]}} : 81'h0;

`elsif YUV422_8b
 logic [7:0] bp_data_in;
 logic [7:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 65'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld8 & (rx_byte_ctr64 == 3'h7)) ?
                                                 {1'b1, {rx_buff_reg8[63:56], rx_buff_reg8[55:48], rx_buff_reg8[47:40], rx_buff_reg8[39:32],
                                                         rx_buff_reg8[31:24], rx_buff_reg8[23:16], rx_buff_reg8[15:8],  rx_buff_reg8[7:0]}} : 65'h0;

`else //YUV422_10b
 logic [7:0] bp_data_in;
 logic [7:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 81'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld10 & (rx_byte_ctr80 == 4'h9)) ?
                                                 {1'b1, {rx_buff_reg10[71:64], rx_buff_reg10[73:72], rx_buff_reg10[63:56], rx_buff_reg10[75:74],
                                                         rx_buff_reg10[55:48], rx_buff_reg10[77:76], rx_buff_reg10[47:40], rx_buff_reg10[79:78],
                                                         rx_buff_reg10[31:24], rx_buff_reg10[33:32], rx_buff_reg10[23:16], rx_buff_reg10[35:34],
                                                         rx_buff_reg10[15:8],  rx_buff_reg10[37:36], rx_buff_reg10[7:0],   rx_buff_reg10[39:38]}} : 81'h0;

`endif

endmodule
