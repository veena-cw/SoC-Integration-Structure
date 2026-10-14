module rx_byte_counter (
  input cphy_rxwordclkhs,       // Clock input signal
  input rst_n,                  // Active-low reset 
  input byte_data_valid,          // Valid Byte data signal
  input rx_buf_reg_vld,         // Valid Rx buffer register signal
  input [5:0] data_type_rx_reg, // 6-bit Input Signal

  // Output counters for different data widths
   output logic [9:0] enable_r,
  output logic [1:0] rx_byte_ctr24,  // Counter for 24-bit data (counts 3 bytes)
  output logic [1:0] rx_byte_ctr16,  // Counter for 16-bit data (counts 2 bytes)
  output logic [2:0] rx_byte_ctr56,  // Counter for 56-bit data (counts 7 bytes)
  output logic [2:0] rx_byte_ctr40,  // Counter for 40-bit data (counts 5 bytes)
  output logic [3:0] rx_byte_ctr72,  // Counter for 72-bit data (counts 9 bytes)
  output logic [3:0] rx_byte_ctr32,
  output logic [3:0] rx_byte_ctr80,
  output logic [2:0] rx_byte_ctr64,
  output logic [5:0] rx_byte_ctr48
);

  logic data_type_rx_reg1; // For 24-bit data
  logic data_type_rx_reg2; // For 72-bit data
  logic data_type_rx_reg3; // For 16-bit data
  logic data_type_rx_reg4; // For 56-bit data
  logic data_type_rx_reg5; // For 40-bit data
  logic data_type_rx_reg6;
  logic data_type_rx_reg7;
  logic data_type_rx_reg8;
   logic data_type_rx_reg9;
  logic enable;

  
  // Maximum counter values based on byte counts
  localparam MAX_24 = 2'd2;  // 3 bytes //applicable for legacy yuv 420 8-bit
  localparam MAX_72 = 4'd8;  // 9 bytes
  localparam MAX_16 = 2'd1;  // 2 bytes //yuv 420 8-bit odd
  localparam MAX_56 = 3'd6;  // 7 bytes
  localparam MAX_40 = 3'd4;  // 5 bytes //yuv 420 10-bit odd and yuv422 10-bit
  localparam MAX_32 = 2'd3;  // 4 bytes //yuv 420 8-bit even & yuv 422 8-bit
  localparam MAX_80 = 4'd9;  //10 bytes //yuv 420 10-bit even 
  localparam MAX_64 = 4'd7;  //8 bytes
  localparam MAX_48 = 3'd5;  //6 bytes
  //4 bytes and 10 bytes for yuv
  //4 bytes for yuv 420 8-bit even & yuv 422 8-bit
  //10 bytes for yuv 420 10-bit even 
 
 // Check if the incoming data type is one of the types that require a 24-bit counter (3 bytes)
assign data_type_rx_reg1 = ((data_type_rx_reg == 6'h24) | (data_type_rx_reg == 6'h28) |
                            (data_type_rx_reg == 6'h2c) | (data_type_rx_reg == 6'h27));

// Check if the incoming data type is one of the types that require a 72-bit counter (9 bytes)
assign data_type_rx_reg2 = ((data_type_rx_reg == 6'h23));

// Check if the incoming data type is one of the types that require a 16-bit counter (2 bytes)
assign data_type_rx_reg3 = ((data_type_rx_reg == 6'h22) | (data_type_rx_reg == 6'h21 )|
                            (data_type_rx_reg == 6'h20) | (data_type_rx_reg == 6'h2e));

//Check if the incoming data type is one of the types that require  a 56-bit counter (7 bytes)
assign data_type_rx_reg4 = ((data_type_rx_reg == 6'h29) | (data_type_rx_reg == 6'h2d )|
                            (data_type_rx_reg == 6'h26));

//Check if the incoming data type is one of the types that require  a 40-bit counter (5 bytes)
assign data_type_rx_reg5 = ((data_type_rx_reg == 6'h2b )| (data_type_rx_reg == 6'h2f) | (data_type_rx_reg == 6'h19) | (data_type_rx_reg == 6'h1D));

assign data_type_rx_reg6 = (/*(data_type_rx_reg == 6'h18) |*/ (data_type_rx_reg == 6'h1c));  //yuv420 8-bit even //| (data_type_rx_reg == 6'h2f));

assign data_type_rx_reg7 = ((data_type_rx_reg == 6'h19));  //yuv420 10-bit even //| (data_type_rx_reg == 6'h2f));

assign data_type_rx_reg8 = ((data_type_rx_reg == 6'h18)); //yuv420 8-bit

assign data_type_rx_reg9 = ((data_type_rx_reg == 6'h1a)); //lyuv420 8-bit

// Enable signal when data is valid and buffer register is valid
assign enable  = byte_data_valid & rx_buf_reg_vld;

// 24-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr24 <= 2'h0;
  else if (enable & data_type_rx_reg1)
    rx_byte_ctr24 <= (rx_byte_ctr24 == MAX_24) ? 2'h0 : rx_byte_ctr24 + 2'h1;

// 72-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr72 <= 4'h0;
  else if (enable & data_type_rx_reg2)
    rx_byte_ctr72 <= (rx_byte_ctr72 == MAX_72) ? 4'h0 : rx_byte_ctr72 + 4'h1;

// 16-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr16 <= 2'h0;
  else if (enable & data_type_rx_reg3)
    rx_byte_ctr16 <= (rx_byte_ctr16 == MAX_16) ? 2'h0 : rx_byte_ctr16 + 2'h1;
	
// 32-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr32 <= 3'h0;
  else if (enable & data_type_rx_reg6)
    rx_byte_ctr32 <= (rx_byte_ctr32 == MAX_32) ? 3'h0 : rx_byte_ctr32 + 3'h1;

// 80-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr80 <= 4'h0;
  else if (enable & data_type_rx_reg7)
    rx_byte_ctr80 <= (rx_byte_ctr80 == MAX_80) ? 4'h0 : rx_byte_ctr80 + 4'h1;	

// 80-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr64 <= 3'h0;
  else if (enable & data_type_rx_reg8)
    rx_byte_ctr64 <= (rx_byte_ctr64 == MAX_64) ? 3'h0 : rx_byte_ctr64 + 3'h1;	
	

always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) enable_r <= 10'h0;
  else        enable_r <= {enable_r[8], enable_r[7], 
  enable_r[6], enable_r[5], enable_r[4], 
                           enable_r[3], enable_r[2], enable_r[1], 
						   enable_r[0], enable};

// 56-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr56 <= 3'h0;
  else if ((enable | (|enable_r[9:0])) & data_type_rx_reg4)
    rx_byte_ctr56 <= (rx_byte_ctr56 == MAX_56) ? 3'h0 : rx_byte_ctr56 + 3'h1;

// 40-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr40 <= 3'h0;
  else if (enable & data_type_rx_reg5)
    rx_byte_ctr40 <= (rx_byte_ctr40 == MAX_40) ? 3'h0 : rx_byte_ctr40 + 3'h1;
	
// 40-bit Counter Logic
always @(posedge cphy_rxwordclkhs or negedge rst_n)
  if (~rst_n) rx_byte_ctr48 <= 6'h0;
  else if (enable & data_type_rx_reg9)
    rx_byte_ctr48 <= (rx_byte_ctr48 == MAX_48) ? 6'h0 : rx_byte_ctr48 + 6'h1;	

endmodule

