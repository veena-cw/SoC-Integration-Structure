module rx_buffer_register(
  input cphy_rxwordclkhs,       // Clock signal
  input rst_n,                  // Active-low reset signal
  input byte_data_vld,          // Valid signal for input 
  input [5:0] data_type_rx,     // Data type of the received byte
  input [7:0] byte_data,        // 8-bit data byte input
  
  // Valid signals for each buffer stage
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
  
  
   // Internal registers to store data at different stages
  output logic [7:0] rx_buff_reg1,
  output logic [15:0] rx_buff_reg2,
  output logic [23:0] rx_buff_reg3,
  output logic [31:0] rx_buff_reg4,
  output logic [39:0] rx_buff_reg5,
  output logic [47:0] rx_buff_reg6,
  output logic [55:0] rx_buff_reg7,
  output logic [63:0] rx_buff_reg8,
  output logic [71:0] rx_buff_reg9,
  output logic [79:0] rx_buff_reg10

  
);
   
  //signals to indicate data type validity for each stage of the buffer.
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
  
  
  // Combinational logic for data type 
  assign datatype_reg1 =  ((data_type_rx == 6'h24)| (data_type_rx == 6'h28) | (data_type_rx == 6'h2c) | 
                          (data_type_rx == 6'h27) | (data_type_rx == 6'h23) | (data_type_rx == 6'h22) |
                          (data_type_rx == 6'h21) | (data_type_rx == 6'h20) | (data_type_rx == 6'h2e) |
                          (data_type_rx == 6'h29) | (data_type_rx == 6'h2d) | (data_type_rx == 6'h26) |
                          (data_type_rx == 6'h2b) | (data_type_rx == 6'h2f) | (data_type_rx == 6'h2a));

  assign datatype_reg2 = ((datatype_reg1)); // Same criteria for datatype_reg2
  assign datatype_reg3 = ((data_type_rx == 6'h24) | (data_type_rx == 6'h28) | (data_type_rx == 6'h2c) | 
                          (data_type_rx == 6'h27) | (data_type_rx == 6'h23) | (data_type_rx == 6'h29) |
                          (data_type_rx == 6'h2d) | (data_type_rx == 6'h26) | (data_type_rx == 6'h2b) | 
                          (data_type_rx == 6'h2f));
  assign datatype_reg4 = ((data_type_rx == 6'h23) | (data_type_rx == 6'h29) | (data_type_rx == 6'h2d) | 
                          (data_type_rx == 6'h26) | (data_type_rx == 6'h2b) | (data_type_rx == 6'h2f));
  assign datatype_reg5 = ((datatype_reg4)); // Same criteria for datatype_reg5
  assign datatype_reg6 = ((data_type_rx == 6'h23) | (data_type_rx == 6'h29) | (data_type_rx == 6'h2d) | 
                          (data_type_rx == 6'h26));
  assign datatype_reg7 = ((datatype_reg6)); // Same criteria for datatype_reg7
  assign datatype_reg8 = ((data_type_rx == 6'h23)) | datatype_reg7;
  //assign datatype_reg8 = ((data_type_rx == 6'h23));
  assign datatype_reg9 = ((datatype_reg8)); // Same criteria for datatype_reg9
  assign datatype_reg10 = ((data_type_rx == 6'h1d));

assign rx_buff_reg_vld = (rx_buff_reg_vld1 | rx_buff_reg_vld2 | rx_buff_reg_vld3 | rx_buff_reg_vld4 |
                         rx_buff_reg_vld5 | rx_buff_reg_vld6 | rx_buff_reg_vld7 | rx_buff_reg_vld8 |
						 rx_buff_reg_vld9 | rx_buff_reg_vld10) ? 1'b1 : 1'b0;

  // Sequential logic for each buffer
  //buffer1
  always @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) {rx_buff_reg_vld1, rx_buff_reg1} <= 9'h0; 
	else if(!byte_data_vld) {rx_buff_reg_vld1, rx_buff_reg1} <= 9'h0; 
    else if (byte_data_vld & datatype_reg1)
      {rx_buff_reg_vld1, rx_buff_reg1} <= {1'b1, byte_data}; 
 
  //buffer2
  always @(posedge cphy_rxwordclkhs or negedge rst_n) 
    if (!rst_n)  {rx_buff_reg_vld2, rx_buff_reg2} <= 17'h0; 
	else if(!rx_buff_reg_vld1) {rx_buff_reg_vld2, rx_buff_reg2} <= 17'h0; 
    else if (byte_data_vld & datatype_reg2 & rx_buff_reg_vld1)
      {rx_buff_reg_vld2, rx_buff_reg2} <= {1'b1, {byte_data[7:0], rx_buff_reg1[7:0]}}; 
  
  //buffer3
  always @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n)  {rx_buff_reg_vld3, rx_buff_reg3} <= 25'h0; 
	else if(!rx_buff_reg_vld2)  {rx_buff_reg_vld3, rx_buff_reg3} <= 25'h0; 
    else if (byte_data_vld & datatype_reg3 & rx_buff_reg_vld2)
      {rx_buff_reg_vld3, rx_buff_reg3} <= {1'b1, {byte_data[7:0], rx_buff_reg2[15:0]}}; 
  
  //buffer4
  always @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n)  {rx_buff_reg_vld4, rx_buff_reg4} <= 33'h0; 
	else if(!rx_buff_reg_vld3)  {rx_buff_reg_vld4, rx_buff_reg4} <= 33'h0; 
    else if (byte_data_vld & datatype_reg4 & rx_buff_reg_vld3)
      {rx_buff_reg_vld4, rx_buff_reg4} <= {1'b1, {byte_data[7:0], rx_buff_reg3[23:0]}}; 
  
  //buffer5
  always @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n)  {rx_buff_reg_vld5, rx_buff_reg5} <= 41'h0; 
	else if(!rx_buff_reg_vld4) {rx_buff_reg_vld5, rx_buff_reg5} <= 41'h0; 
    else if (byte_data_vld & datatype_reg5 & rx_buff_reg_vld4)
      {rx_buff_reg_vld5, rx_buff_reg5} <= {1'b1, {byte_data[7:0], rx_buff_reg4[31:0]}}; 

  //buffer6
  always @(posedge cphy_rxwordclkhs or negedge rst_n) 
    if (!rst_n)  {rx_buff_reg_vld6, rx_buff_reg6} <= 49'h0; 
	else if(!rx_buff_reg_vld5)  {rx_buff_reg_vld6, rx_buff_reg6} <= 49'h0; 
    else if (byte_data_vld & datatype_reg6 & rx_buff_reg_vld5 )
      {rx_buff_reg_vld6, rx_buff_reg6} <= {1'b1, {byte_data[7:0], rx_buff_reg5[39:0]}}; 
  logic [6:0] byte_data_vld_r;
  logic [6:0] rx_buff_reg_vld6_r;
  always @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) byte_data_vld_r <= 7'h0;
	else byte_data_vld_r <= {byte_data_vld_r[5], byte_data_vld_r[4],
	byte_data_vld_r[3], byte_data_vld_r[2], byte_data_vld_r[1], 
	byte_data_vld_r[0], byte_data_vld};
	
	always @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n) rx_buff_reg_vld6_r <= 7'h0;
	else rx_buff_reg_vld6_r <= {rx_buff_reg_vld6_r[5], rx_buff_reg_vld6_r[4],
	rx_buff_reg_vld6_r[3], rx_buff_reg_vld6_r[2], rx_buff_reg_vld6_r[1], 
	rx_buff_reg_vld6_r[0], rx_buff_reg_vld6}; 
	//logic [7:0] byte_data_r;
	 //always @(posedge cphy_rxwordclkhs or negedge rst_n)
    //if (!rst_n) byte_data_r <= 8'h0;
	//else byte_data_r <= byte_data; 
  
  //buffer7
  always @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n)  {rx_buff_reg_vld7, rx_buff_reg7} <= 57'h0; 
	else if((!(rx_buff_reg_vld6))) {rx_buff_reg_vld7, rx_buff_reg7} <= 57'h0; 
    else if ((byte_data_vld & datatype_reg7 & rx_buff_reg_vld6))
      {rx_buff_reg_vld7, rx_buff_reg7} <= {1'b1, {byte_data[7:0], rx_buff_reg6[47:0]}}; 
  
    //buffer8
  always @(posedge cphy_rxwordclkhs or negedge rst_n) 
    if (!rst_n)  {rx_buff_reg_vld8, rx_buff_reg8} <= 65'h0;  
	else if(!rx_buff_reg_vld7)  {rx_buff_reg_vld8, rx_buff_reg8} <= 65'h0;  
    else if (byte_data_vld & datatype_reg8 & rx_buff_reg_vld7)
      {rx_buff_reg_vld8, rx_buff_reg8} <= {1'b1, {byte_data[7:0], rx_buff_reg7[55:0]}}; 
  
  //buffer9
  always @(posedge cphy_rxwordclkhs or negedge rst_n)
    if (!rst_n)  {rx_buff_reg_vld9, rx_buff_reg9} <= 73'h0; 
	else if(!rx_buff_reg_vld8) {rx_buff_reg_vld9, rx_buff_reg9} <= 73'h0; 
    else if (byte_data_vld & datatype_reg9 & rx_buff_reg_vld8)
      {rx_buff_reg_vld9, rx_buff_reg9} <= {1'b1, {byte_data[7:0], rx_buff_reg8[63:0]}}; 
  
  //buffer10
  always @(posedge cphy_rxwordclkhs or negedge rst_n) 
    if (!rst_n)  {rx_buff_reg_vld10, rx_buff_reg10} <= 81'h0; 
	else if(!rx_buff_reg_vld9) {rx_buff_reg_vld10, rx_buff_reg10} <= 81'h0; 
    else if (byte_data_vld & datatype_reg10 & rx_buff_reg_vld9)
      {rx_buff_reg_vld10, rx_buff_reg10} <= {1'b1, {byte_data[7:0], rx_buff_reg9[71:0]}};


  

  

endmodule
