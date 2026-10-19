//`include "rx_buffer_register.sv"
//`include "rx_byte_counter.sv"



/*rx_buffer_register rx_buffer_register_inst (.clk(pixel_clk), .rst_n(rst_n), .rx_buff_reg_vld(rx_buff_reg_vld),
                                            .rx_buff_reg_vld1(rx_buff_reg_vld1), .rx_buff_reg_vld2(rx_buff_reg_vld2), 
											.rx_buff_reg_vld3(rx_buff_reg_vld3), .rx_buff_reg_vld4(rx_buff_reg_vld4), 
											.rx_buff_reg_vld5(rx_buff_reg_vld5), .rx_buff_reg_vld6(rx_buff_reg_vld6), 
											.rx_buff_reg_vld7(rx_buff_reg_vld7), .rx_buff_reg_vld8(rx_buff_reg_vld8), 
											.rx_buff_reg_vld9(rx_buff_reg_vld9), .rx_buff_reg_vld10(rx_buff_reg_vld10),
											.rx_buff_reg1(rx_buff_reg1), .rx_buff_reg2(rx_buff_reg2), .rx_buff_reg3(rx_buff_reg3), 
											.rx_buff_reg4(rx_buff_reg4), .rx_buff_reg5(rx_buff_reg5), .rx_buff_reg6(rx_buff_reg6), 
											.rx_buff_reg7(rx_buff_reg7), .rx_buff_reg8(rx_buff_reg8), .rx_buff_reg9(rx_buff_reg9), 
											.rx_buff_reg10(rx_buff_reg10), .byte_data_vld(byte_data_vld), .data_type_rx(data_type_rx),
											.byte_data(byte_data));
rx_byte_counter rx_byte_counter_inst(.clk(pixel_clk), .rst_n(rst_n), .byte_data_vld(byte_data_vld), .rx_buf_reg_vld(rx_buf_reg_vld), 
                                    .data_type_rx_reg(data_type_rx_reg));
									
//Instantiation of Asynchronous FIFO
async_fifo_binary async_fifo_binary_inst(.wr_clk(cphy_rxwordclkhs), .wr_rst_n(rst_n), .wr_en(bp_wr_en), .wr_data(bp_data_in), .full(bp_full), 
                                        .rd_clk(axi_clk), .rd_rst_n(rst_n), .rd_en(bp_rd_vld), .rd_data(bp_rd_data), .empty(bp_empty)); */
										
//Instantiation of AXI Master
//AXI_CSI2_Bridge_upstream_top  axi_csi2_rx(.Aclk(Aclk), .ARESET_n(rst_n), );										

                                            
module bp_rx(
input cphy_rxwordclkhs,                                       //csi2 rx clock
//input axi_clk,                                                //axi clock
input rst_n,                                                  //negative edge asynchronous reset 
input rx_buff_reg_vld,                                        //control signal indicating that the buffer register is valid 
input rx_buff_reg_vld1,                                       //control signal indicating that the first buffer register is valid and contains data from llp 
input rx_buff_reg_vld2,                                       //control signal indicating that the second buffer register is valid and contains data from llp 
input rx_buff_reg_vld3,                                       //control signal indicating that the third buffer register is valid and contains data from llp 
input rx_buff_reg_vld4,                                       //control signal indicating that the fourth buffer register is valid and contains data from llp 
input rx_buff_reg_vld5,                                       //control signal indicating that the fifth buffer register is valid and contains data from llp 
input rx_buff_reg_vld6,                                       //control signal indicating that the sixth buffer register is valid and contains data from llp 
input rx_buff_reg_vld7,                                       //control signal indicating that the seventh buffer register is valid and contains data from llp 
input rx_buff_reg_vld8,                                       //control signal indicating that the eighth buffer register is valid and contains data from llp 
input rx_buff_reg_vld9,                                       //control signal indicating that the ninth buffer register is valid and contains data from llp 
input rx_buff_reg_vld10,                                      //control signal indicating that the tenth buffer register is valid and contains data from llp 

input [1:0] enable_r,
input  [1:0] rx_byte_ctr24,                                   //Counter for 24-bit data (counts 3 bytes)
input  [1:0] rx_byte_ctr16,                                   //Counter for 16-bit data (counts 2 bytes)
input  [2:0] rx_byte_ctr56,                                   //Counter for 56-bit data (counts 7 bytes)
input  [2:0] rx_byte_ctr40,                                   //Counter for 40-bit data (counts 5 bytes)
input [5:0] rx_byte_ctr48,
input  [3:0] rx_byte_ctr72,                                   //Counter for 72-bit data (counts 9 bytes)
input  [7:0] rx_buff_reg1,                                    //first buffer register that contains the data received from llp        
input [15:0] rx_buff_reg2,                                    //second buffer register that contains the data received from llp along with the data stored
                                                              //in the first buffer register 
input [23:0] rx_buff_reg3,                                    //third buffer register that contains the data received from llp along with the data stored
                                                              //in the second buffer register 
input [31:0] rx_buff_reg4,                                    //fourth buffer register that contains the data received from llp along with the data stored
                                                              //in the third buffer register 
input [39:0] rx_buff_reg5,                                    //fifth buffer register that contains the data received from llp along with the data stored
                                                              //in the fourth buffer register 
input [47:0] rx_buff_reg6,                                    //sixth buffer register that contains the data received from llp along with the data stored
                                                              //in the fifth buffer register 
input [55:0] rx_buff_reg7,                                    //seventh buffer register that contains the data received from llp along with the data stored
                                                              //in the sixth buffer register 
input [63:0] rx_buff_reg8,                                    //eighth buffer register that contains the data received from llp along with the data stored
                                                              //in the seventh buffer register  
input [71:0] rx_buff_reg9,                                    //ninth buffer register that contains the data received from llp along with the data stored
                                                              //in the eighth buffer register 
input [79:0] rx_buff_reg10,                                   //tenth buffer register that contains the data received from llp along with the data stored
                                                              //in the ninth buffer register 


output logic rx_pixel_dvalid,                                 //control signal indicating that the pixel data is valid and ready to out
 output logic [`rx_pixel_data-1:0] rx_pixel_data);                  //pixel data from the receiver side of CSI2 Controller
//output logic [`PWIDTH-1:0] rx_pixel_data);                  //pixel data from the receiver side of CSI2 Controller
logic [5:0] data_type_rx;
logic [5:0] data_type_rx_reg;
//logic [7:0] byte_data;
//logic rx_buf_reg_vld;
//logic byte_data_vld;
logic stop_666;                                               //stop signal indication for RGB666 datatype
logic pixel_dvalid_stop;                                      //stop signal indication when last data is reached
//logic bp_wr_en;                                               //write enable of pixel data in asynchronous fifo with respect to csi2 rx clock
//logic bp_full;                                                //full flag indication from asynchronous fifo
//logic bp_empty;                                               //empty flag indication from asynchronous fifo
//logic bp_rd_vld;                                              //read enable valid of pixel data in asynchronous fifo with respect to axi clock	
//logic [`PWIDTH-1:0] bp_data_in;                               //writing the pixel data in asynchronous fifo with respect to csi2 rx clock
//logic [`AXIWIDTH-1:0] bp_rd_data; 							  //reading the pixel data from asynchronous fifo with respect to axi clock	

/*logic rx_buff_reg_vld;                                      //
logic rx_buff_reg_vld1;                                       //
logic rx_buff_reg_vld2;                                       //
logic rx_buff_reg_vld3;                                       //
logic rx_buff_reg_vld4;                                       //
logic rx_buff_reg_vld5;                                       //
logic rx_buff_reg_vld6;                                       //
logic rx_buff_reg_vld7;                                       //
logic rx_buff_reg_vld8;                                       //
logic rx_buff_reg_vld9;                                       //
logic rx_buff_reg_vld10;                                      //
logic [1:0] rx_byte_ctr24;                                    //Counter for 24-bit data (counts 3 bytes)
logic [1:0] rx_byte_ctr16;                                    //Counter for 16-bit data (counts 2 bytes)
logic [2:0] rx_byte_ctr56;                                    //Counter for 56-bit data (counts 7 bytes)
logic [2:0] rx_byte_ctr40;                                    //Counter for 40-bit data (counts 5 bytes)
logic [3:0] rx_byte_ctr72;                                    //
logic [7:0] rx_buff_reg1;                                     //
logic [15:0] rx_buff_reg2;                                    //
logic [23:0] rx_buff_reg3;                                    //
logic [31:0] rx_buff_reg4;                                    //
logic [39:0] rx_buff_reg5;                                    //
logic [47:0] rx_buff_reg6;                                    //
logic [55:0] rx_buff_reg7;                                    //
logic [63:0] rx_buff_reg8;                                    //
logic [71:0] rx_buff_reg9;                                    //
logic [79:0] rx_buff_reg10;                                   // 
  

//instantiation of rx buffer register  
rx_buffer_register rx_buffer_register_inst (.clk(pixel_clk), .rst_n(rst_n), .rx_buff_reg_vld(rx_buff_reg_vld),
                                            .rx_buff_reg_vld1(rx_buff_reg_vld1), .rx_buff_reg_vld2(rx_buff_reg_vld2),
											.rx_buff_reg_vld3(rx_buff_reg_vld3), .rx_buff_reg_vld4(rx_buff_reg_vld4),
											.rx_buff_reg_vld5(rx_buff_reg_vld5), .rx_buff_reg_vld6(rx_buff_reg_vld6), 
											.rx_buff_reg_vld7(rx_buff_reg_vld7), .rx_buff_reg_vld8(rx_buff_reg_vld8), 
											.rx_buff_reg_vld9(rx_buff_reg_vld9), .rx_buff_reg_vld10(rx_buff_reg_vld10),
											.rx_buff_reg1(rx_buff_reg1), .rx_buff_reg2(rx_buff_reg2), .rx_buff_reg3(rx_buff_reg3), 
											.rx_buff_reg4(rx_buff_reg4), .rx_buff_reg5(rx_buff_reg5), .rx_buff_reg6(rx_buff_reg6), 
											.rx_buff_reg7(rx_buff_reg7), .rx_buff_reg8(rx_buff_reg8), .rx_buff_reg9(rx_buff_reg9), 
											.rx_buff_reg10(rx_buff_reg10), .byte_data_vld(byte_data_vld), .data_type_rx(data_type_rx), 
											.byte_data(byte_data));
//instantiation of rx byte counter											
rx_byte_counter rx_byte_counter_inst(.clk(pixel_clk), .rst_n(rst_n), .byte_data_vld(byte_data_vld), .rx_buf_reg_vld(rx_buf_reg_vld), 
                                    .data_type_rx_reg(data_type_rx_reg));*/
/*									
rx_buffer_register rx_buffer_register_inst (.cphy_rxwordclkhs(cphy_rxwordclkhs), .rst_n(rst_n), .rx_buff_reg_vld(rx_buff_reg_vld),
                                            .rx_buff_reg_vld1(rx_buff_reg_vld1), .rx_buff_reg_vld2(rx_buff_reg_vld2), 
											.rx_buff_reg_vld3(rx_buff_reg_vld3), .rx_buff_reg_vld4(rx_buff_reg_vld4), 
											.rx_buff_reg_vld5(rx_buff_reg_vld5), .rx_buff_reg_vld6(rx_buff_reg_vld6), 
											.rx_buff_reg_vld7(rx_buff_reg_vld7), .rx_buff_reg_vld8(rx_buff_reg_vld8), 
											.rx_buff_reg_vld9(rx_buff_reg_vld9), .rx_buff_reg_vld10(rx_buff_reg_vld10),
											.rx_buff_reg1(rx_buff_reg1), .rx_buff_reg2(rx_buff_reg2), .rx_buff_reg3(rx_buff_reg3), 
											.rx_buff_reg4(rx_buff_reg4), .rx_buff_reg5(rx_buff_reg5), .rx_buff_reg6(rx_buff_reg6), 
											.rx_buff_reg7(rx_buff_reg7), .rx_buff_reg8(rx_buff_reg8), .rx_buff_reg9(rx_buff_reg9), 
											.rx_buff_reg10(rx_buff_reg10), .byte_data_vld(byte_data_vld), .data_type_rx(data_type_rx),
											.byte_data(byte_data));
rx_byte_counter rx_byte_counter_inst(.cphy_rxwordclkhs(cphy_rxwordclkhs), .rst_n(rst_n), .byte_data_valid(byte_data_vld), .rx_buf_reg_vld(rx_buf_reg_vld), 
                                    .data_type_rx_reg(data_type_rx_reg), .rx_byte_ctr24(rx_byte_ctr24), .rx_byte_ctr16(rx_byte_ctr16),
									.rx_byte_ctr56(rx_byte_ctr56), .rx_byte_ctr40(rx_byte_ctr40), .rx_byte_ctr72(rx_byte_ctr72));*/
									
//Instantiation of Asynchronous FIFO
/*async_fifo_binary async_fifo_binary_inst(.wr_clk(cphy_rxwordclkhs), .wr_rst_n(rst_n), .wr_en(bp_wr_en), .wr_data(bp_data_in), .full(bp_full), 
                                        .rd_clk(aclk), .rd_rst_n(rst_n), .rd_en(bp_rd_vld), .rd_data(bp_rd_data), .empty(bp_empty)); */									
									
  
assign stop_666 = (rx_byte_ctr72 == 4'h7);
 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) pixel_dvalid_stop <= 1'b0;
  else pixel_dvalid_stop <= (!(rx_buff_reg_vld)); //(!(byte_data_vld));

`ifdef RGB888
 //output logic [23:0] rx_pixel_data;
 logic [23:0] bp_data_in; 
 logic [23:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else {rx_pixel_dvalid, rx_pixel_data} <=  (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ? {1'b1, rx_buff_reg3[23:0]} : pixel_dvalid_stop ? 25'h0 : 25'h0;
  
`elsif RGB666
// output logic [71:0] rx_pixel_data;
 logic [71:0] bp_data_in;
 logic [71:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 73'h0;
  else {rx_pixel_dvalid, rx_pixel_data} <=  (((!(rx_buff_reg_vld10)) & (!(stop_666)) & rx_buff_reg_vld9 & (rx_byte_ctr72 == 4'h8))) ?
                                            {1'b1, rx_buff_reg9[71:0]} : pixel_dvalid_stop ? 73'h0 : 73'h0;
`elsif RGB565
 //output logic [15:0] rx_pixel_data;
 logic [15:0] bp_data_in;
 logic [15:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 17'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <=  (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?  {1'b1, rx_buff_reg2[15:0]} : 17'h0;	
  
`elsif RGB555
 //output logic [14:0] rx_pixel_data;
 logic [14:0] bp_data_in;
 logic [14:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 16'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?  {1'b1, {rx_buff_reg2[15:6], rx_buff_reg2[4:0]}} : 16'h0; 
  
`elsif RGB444
 //output logic [11:0] rx_pixel_data;
 logic [11:0] bp_data_in;
 logic [11:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 13'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ? 
                                                 {1'b1, {rx_buff_reg2[15:12], rx_buff_reg2[10:7], rx_buff_reg2[4:1]}} : 13'h0;

`elsif RAW6
 //output logic [23:0] rx_pixel_data;
 logic [23:0] bp_data_in;
 logic [23:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1, {rx_buff_reg3[23:0]}} : 25'h0;												 
  
`elsif RAW7
 //output logic [55:0] rx_pixel_data;
 logic [55:0] bp_data_in;
 logic [55:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 57'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= 
  (!rx_buff_reg_vld3 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {rx_buff_reg8[55:0]}} : 
  //((!(&enable_r[1:0])) & rx_buff_reg_vld5 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {16'h0, {rx_buff_reg5[39:0]}}} : 
  (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {rx_buff_reg7[55:0]}} : 57'h0;  
 // (rx_buff_reg_vld8 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {rx_buff_reg8[55:0]}} : 57'h0;  
`elsif RAW10
// output logic [39:0] rx_pixel_data;
 logic [39:0] bp_data_in;
 logic [39:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 41'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?  {1'b1, {rx_buff_reg5[31:24],rx_buff_reg5[39:38],
                                                 rx_buff_reg5[23:16],rx_buff_reg5[37:36],rx_buff_reg5[15:8],rx_buff_reg5[35:34],rx_buff_reg5[7:0],
												 rx_buff_reg5[33:32]}} : pixel_dvalid_stop ? 41'h0 : 41'h0; */
												 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 41'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?  {1'b1, {rx_buff_reg5[31:24],rx_buff_reg5[33:32],
                                                 rx_buff_reg5[23:16],rx_buff_reg5[35:34],rx_buff_reg5[15:8],rx_buff_reg5[37:36],rx_buff_reg5[7:0],
												 rx_buff_reg5[39:38]}} : pixel_dvalid_stop ? 41'h0 : 41'h0; 												 

`elsif RAW12
//output logic [23:0] rx_pixel_data;
 logic [23:0] bp_data_in;
 logic [23:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1, {rx_buff_reg3[15:8],rx_buff_reg3[23:20],rx_buff_reg3[7:0],rx_buff_reg3[19:16]}} :
                                                 			pixel_dvalid_stop ? 25'h0 : 25'h0;*/
															
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1, {rx_buff_reg3[15:8],
                                                 rx_buff_reg3[19:16],rx_buff_reg3[7:0],rx_buff_reg3[23:20]}} :
                                                 pixel_dvalid_stop ? 25'h0 : 25'h0;															
															
`elsif RAW14
 //output logic [55:0] rx_pixel_data;
 logic [55:0] bp_data_in;
 logic [55:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 57'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {rx_buff_reg7[31:24],rx_buff_reg7[55:50],
                                                 rx_buff_reg7[23:16],rx_buff_reg7[49:48], rx_buff_reg7[47:44],rx_buff_reg7[15:8],rx_buff_reg7[43:40],
												 rx_buff_reg7[39:38],rx_buff_reg7[7:0],rx_buff_reg7[37:32]}} : pixel_dvalid_stop ? 57'h0 : 57'h0;  */  	

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 57'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {rx_buff_reg7[31:24],rx_buff_reg7[53:48],
                                                 rx_buff_reg7[23:16],rx_buff_reg7[55:54], rx_buff_reg7[43:40],rx_buff_reg7[15:8],rx_buff_reg7[47:44],
												 rx_buff_reg7[33:32],rx_buff_reg7[7:0],rx_buff_reg7[39:34]}} : pixel_dvalid_stop ? 57'h0 : 57'h0;    													 
  
`elsif RAW16
 //output logic [15:0] rx_pixel_data;
 logic [15:0] bp_data_in;
 logic [15:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 17'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?  {1'b1, rx_buff_reg2[7:0],rx_buff_reg2[15:8]} :
                                                 pixel_dvalid_stop ? 17'h0 : 17'h0; 
												 
`elsif RAW20
// output logic [39:0] rx_pixel_data;
 logic [39:0] bp_data_in;
 logic [39:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 41'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?  {1'b1,  {rx_buff_reg5[31:24],rx_buff_reg5[5:4],  
                                                 rx_buff_reg5[39:32],rx_buff_reg5[7:6],rx_buff_reg5[15:8], rx_buff_reg5[1:0], rx_buff_reg5[23:16], 
												 rx_buff_reg5[3:2]}} : pixel_dvalid_stop ? 41'h0 : 41'h0;	*/	

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 41'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?  {1'b1,  {rx_buff_reg5[23:16],rx_buff_reg5[35:34],  
                                                 rx_buff_reg5[31:24],rx_buff_reg5[33:32],rx_buff_reg5[7:0], rx_buff_reg5[39:38], rx_buff_reg5[15:8], 
												 rx_buff_reg5[37:36]}} : pixel_dvalid_stop ? 41'h0 : 41'h0;		


`elsif RAW24
 //output logic [23:0] rx_pixel_data;
 logic [23:0] bp_data_in;
 logic [23:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1,  rx_buff_reg3[7:0],rx_buff_reg3[19:16],  
                                                 rx_buff_reg3[15:8],rx_buff_reg3[23:20]} : pixel_dvalid_stop ? 25'h0 : 25'h0;*/
												 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1,  rx_buff_reg3[7:0],rx_buff_reg3[23:20],  
                                                 rx_buff_reg3[15:8],rx_buff_reg3[19:16]} : pixel_dvalid_stop ? 25'h0 : 25'h0;												 

`elsif RAW28
 //output logic [55:0] rx_pixel_data;
 logic [55:0] bp_data_in;
 logic [55:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 57'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1,  {rx_buff_reg7[23:16],rx_buff_reg7[49:48],  
                                                 rx_buff_reg7[47:44],rx_buff_reg7[31:24], rx_buff_reg7[55:50], rx_buff_reg7[7:0], rx_buff_reg7[37:32], 
												 rx_buff_reg7[15:8],rx_buff_reg7[43:40],rx_buff_reg7[39:38]}} : pixel_dvalid_stop ? 57'h0 : 57'h0;*/
												 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 57'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1,  {rx_buff_reg7[23:16],rx_buff_reg7[55:54],  
                                                 rx_buff_reg7[43:40],rx_buff_reg7[31:24], rx_buff_reg7[53:48], rx_buff_reg7[7:0], rx_buff_reg7[39:34], 
												 rx_buff_reg7[15:8],rx_buff_reg7[47:44],rx_buff_reg7[33:32]}} : pixel_dvalid_stop ? 57'h0 : 57'h0;
												 
`elseif RAW8
//output logic [7:0] rx_pixel_data;
logic [7:0] bp_data_in;
logic [7:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 9'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= rx_buff_reg_vld1 ? {1'b1, rx_buff_reg1} : pixel_dvalid_stop ? 9'h0 : 9'h0;	

`elseif LEGACY_YUV420_8b
logic [7:0] bp_data_in;
logic [7:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 25'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?
                                                 {1'b1, {rx_buff_reg3[23:16],rx_buff_reg3[15:8],rx_buff_reg3[7:0]}} : pixel_dvalid_stop ? 25'h0 : 25'h0;	*/

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 49'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld6 & (rx_byte_ctr48 == 3'h5)) ?
                                                 {1'b1, {rx_buff_reg6[47:0]}} : pixel_dvalid_stop ? 49'h0 : 49'h0;	

//64 bits per cycle 	odd - 2; even - 4 											 
`elseif YUV420_8b
logic [7:0] bp_data_in;
logic [7:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 33'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?
                                                 {1'b1, {16'h0,rx_buff_reg2[15:8],rx_buff_reg2[7:0]}} : pixel_dvalid_stop ? 9'h0 : 
												 (rx_buff_reg_vld4 & (rx_byte_ctr32 == 2'h3)) ? 
												  {1'b1, {rx_buff_reg4[31:24], rx_buff_reg4[23:16], rx_buff_reg4[15:8],rx_buff_reg4[7:0]}} : 
												  pixel_dvalid_stop ? 33'h0 : 
												 : 33'h0;*/
												 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 64'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld8 & (rx_byte_ctr64 == 3'h7)) ?
                                                 {1'b1, rx_buff_reg8[63:0]} : pixel_dvalid_stop ? 64'h0 : 
												 pixel_dvalid_stop ? 64'h0 : 
												 : 64'h0;												 

`elseif YUV420_10b
logic [7:0] bp_data_in;
logic [7:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 81'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?
                                                 {1'b1, {40'h0, rx_buff_reg5[31:24],rx_buff_reg5[33:32],rx_buff_reg5[23:16],
												 rx_buff_reg5[35:34], rx_buff_reg5[15:8], rx_buff_reg5[37:36],  
												 rx_buff_reg5[7:0], rx_buff_reg5[39:38]}} : pixel_dvalid_stop ? 81'h0 : 
												 
												 (rx_buff_reg_vld10 & (rx_byte_ctr80 == 4'h9)) ? 
												  {1'b1, {rx_buff_reg10[71:64], rx_buff_reg10[73:72], rx_buff_reg10[63:56],rx_buff_reg10[75:74],
												  rx_buff_reg10[55:48], rx_buff_reg10[77:76], rx_buff_reg10[47:40], rx_buff_reg10[79:78],
												  rx_buff_reg10[31:24], rx_buff_reg10[33:32], rx_buff_reg10[23:16], rx_buff_reg10[35:34],
												  rx_buff_reg10[15:8], rx_buff_reg10[37:36], rx_buff_reg10[7:0], rx_buff_reg10[39:38]}} : 
												  pixel_dvalid_stop ? 81'h0 : 
												 : 81'h0;		*/	

												 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 81'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <=  (rx_buff_reg_vld10 & (rx_byte_ctr80 == 4'h9)) ? 
												  {1'b1, {rx_buff_reg10[71:64], rx_buff_reg10[73:72], rx_buff_reg10[63:56],rx_buff_reg10[75:74],
												  rx_buff_reg10[55:48], rx_buff_reg10[77:76], rx_buff_reg10[47:40], rx_buff_reg10[79:78],
												  rx_buff_reg10[31:24], rx_buff_reg10[33:32], rx_buff_reg10[23:16], rx_buff_reg10[35:34],
												  rx_buff_reg10[15:8], rx_buff_reg10[37:36], rx_buff_reg10[7:0], rx_buff_reg10[39:38]}} : 
												  pixel_dvalid_stop ? 81'h0 : 
												 : 81'h0;														 

`elseif YUV422_8b
logic [7:0] bp_data_in;
logic [7:0] bp_rd_data;
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 33'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld4 & (rx_byte_ctr32 == 2'h3)) ?
                                                 {1'b1, {rx_buff_reg4[31:24],rx_buff_reg4[23:16],rx_buff_reg4[15:8],
												 rx_buff_reg4[7:0]}} : pixel_dvalid_stop ? 33'h0 : 33'h0;*/
												 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 65'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld8 & (rx_byte_ctr64 == 3'h7)) ?
                                                 {1'b1, {rx_buff_reg8[63:56], rx_buff_reg8[55:48], rx_buff_reg8[47:40], rx_buff_reg8[39:32],  
												 rx_buff_reg8[31:24],rx_buff_reg8[23:16],rx_buff_reg8[15:8],
												 rx_buff_reg8[7:0]}} : pixel_dvalid_stop ? 65'h0 : 65'h0;

`else //YUV422_10b
logic [7:0] bp_data_in;
logic [7:0] bp_rd_data;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 81'h0;
  else       {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld10 & (rx_byte_ctr80 == 4'h9)) ?
                                                 {1'b1, {rx_buff_reg10[71:64], rx_buff_reg10[73:72], rx_buff_reg10[63:56], 
												 rx_buff_reg10[75:74], rx_buff_reg10[55:48], rx_buff_reg10[77:76], rx_buff_reg10[47:40],
                                                 rx_buff_reg10[79:78],												 
												 rx_buff_reg10[31:24],rx_buff_reg10[33:32],rx_buff_reg10[23:16],
												 rx_buff_reg10[35:34], rx_buff_reg10[15:8], rx_buff_reg10[37:36], 
												 rx_buff_reg10[7:0], rx_buff_reg10[39:38]}} : pixel_dvalid_stop ? 81'h0 : 81'h0;																 


  
`endif  
												 
/*  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 'h0;
  else begin
     // if(pixel_ready) begin
    case(data_type_rx_reg)
        6'h24: 
          {rx_pixel_dvalid, rx_pixel_data} <= // pixel_dvalid_stop ? 9'h0 : 
            (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ? {1'b1, rx_buff_reg3[23:0]} : pixel_dvalid_stop ? 25'h0 : 25'h0;
                 
        6'h23: 
            {rx_pixel_dvalid, rx_pixel_data} <= // pixel_dvalid_stop ? 9'h0 : 
          (((!(rx_buff_reg_vld10)) & (!(stop_666)) & rx_buff_reg_vld9 & (rx_byte_ctr72 == 4'h8))) ? {1'b1, rx_buff_reg9[71:0]} : pixel_dvalid_stop ? 73'h0 : 73'h0;
        
          6'h22: 
            {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?  {1'b1, rx_buff_reg2[15:0]} : 17'h0; //pixel_dvalid_stop ? 73'h0 :
         
        6'h21: 
          {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?  {1'b1, {rx_buff_reg2[15:6], rx_buff_reg2[4:0]}} : 16'h0; //pixel_dvalid_stop ? 73'h0 :
         
         6'h20: 
          {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?  {1'b1, {rx_buff_reg2[15:12], rx_buff_reg2[10:7], rx_buff_reg2[4:1]}} : 13'h0; //pixel_dvalid_stop ? 73'h0 :
         
       6'h28: 
         {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1, {rx_buff_reg3[23:0]}} : 25'h0; //pixel_dvalid_stop ? 73'h0 :
          
         6'h29: 
           {rx_pixel_dvalid, rx_pixel_data} <= (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {rx_buff_reg7[55:0]}} : 57'h0; //pixel_dvalid_stop ? 73'h0 :
          
           6'h2a: 
           {rx_pixel_dvalid, rx_pixel_data} <= 
            rx_buff_reg_vld1 ? {1'b1, rx_buff_reg1} : pixel_dvalid_stop ? 9'h0 : 9'h0;
           
         6'h2b: 
           {rx_pixel_dvalid, rx_pixel_data} <= 
           (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?  {1'b1, {rx_buff_reg5[31:24],rx_buff_reg5[39:38],rx_buff_reg5[23:16],rx_buff_reg5[37:36],
		                        rx_buff_reg5[15:8],rx_buff_reg5[35:34],rx_buff_reg5[7:0],rx_buff_reg5[33:32]}} : pixel_dvalid_stop ? 41'h0 : 41'h0;
           
          6'h2c:
           {rx_pixel_dvalid, rx_pixel_data} <= 
            (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1, {rx_buff_reg3[15:8],rx_buff_reg3[23:20],rx_buff_reg3[7:0],rx_buff_reg3[19:16]}} :
                                                 			pixel_dvalid_stop ? 25'h0 : 25'h0;
           
         6'h2d: 
           {rx_pixel_dvalid, rx_pixel_data} <= 
          // (rx_buff_reg7_vld & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {rx_buff_reg7[31:24],rx_buff_reg7[39:34],rx_buff_reg7[23:16],rx_buff_reg7[47:44],rx_buff_reg7[33:32],rx_buff_reg7[15:8],rx_buff_reg7[55:54],rx_buff_reg7[43:40],rx_buff_reg7[7:0],rx_buff_reg7[53:48]}} : pixel_dvalid_stop ? 57'h0 : 57'h0;
(rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1, {rx_buff_reg7[31:24],rx_buff_reg7[55:50],rx_buff_reg7[23:16],rx_buff_reg7[49:48], rx_buff_reg7[47:44],
rx_buff_reg7[15:8],rx_buff_reg7[43:40],rx_buff_reg7[39:38],rx_buff_reg7[7:0],rx_buff_reg7[37:32]}} : pixel_dvalid_stop ? 57'h0 : 57'h0;          
		 
          6'h2e: 
           {rx_pixel_dvalid, rx_pixel_data} <= 
            (rx_buff_reg_vld2 & (rx_byte_ctr16 == 2'h1)) ?  {1'b1, rx_buff_reg2[7:0],rx_buff_reg2[15:8]} : pixel_dvalid_stop ? 17'h0 : 17'h0;
          
        6'h2f: 
           {rx_pixel_dvalid, rx_pixel_data} <= 
        //  (rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?  {1'b1,  rx_buff_reg5[31:24],rx_buff_reg5[37:36],  rx_buff_reg5[23:16],rx_buff_reg5[39:38]} : pixel_dvalid_stop ? 41'h0 : 41'h0;
		(rx_buff_reg_vld5 & (rx_byte_ctr40 == 3'h4)) ?  {1'b1,  {rx_buff_reg5[31:24],rx_buff_reg5[5:4],  rx_buff_reg5[39:32],rx_buff_reg5[7:6],
		rx_buff_reg5[15:8], rx_buff_reg5[1:0], rx_buff_reg5[23:16], rx_buff_reg5[3:2]}}
		: pixel_dvalid_stop ? 41'h0 : 41'h0;
          
         6'h27: 
           {rx_pixel_dvalid, rx_pixel_data} <= 
           //(rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1,  rx_buff_reg3[23:16],rx_buff_reg3[7:4],  rx_buff_reg3[15:8],rx_buff_reg3[3:0]} : pixel_dvalid_stop ? 25'h0 : 25'h0;
		   (rx_buff_reg_vld3 & (rx_byte_ctr24 == 2'h2)) ?  {1'b1,  rx_buff_reg3[7:0],rx_buff_reg3[19:16],  rx_buff_reg3[15:8],rx_buff_reg3[23:20]} : pixel_dvalid_stop ? 25'h0 : 25'h0;
           
         6'h26: 
           {rx_pixel_dvalid, rx_pixel_data} <= 
         //(rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1,  {rx_buff_reg7[23:16],rx_buff_reg7[7:4],  rx_buff_reg7[15:8],rx_buff_reg7[3:0]}} : pixel_dvalid_stop ? 25'h0 : 25'h0;
		   (rx_buff_reg_vld7 & (rx_byte_ctr56 == 3'h6)) ?  {1'b1,  {rx_buff_reg7[23:16],rx_buff_reg7[49:48],  rx_buff_reg7[47:44],
		   rx_buff_reg7[31:24], rx_buff_reg7[55:50], rx_buff_reg7[7:0], rx_buff_reg7[37:32], rx_buff_reg7[15:8], rx_buff_reg7[43:40], 
		   rx_buff_reg7[39:38]}} : pixel_dvalid_stop ? 57'h0 : 57'h0;
           
		   endcase
         end*/
		  endmodule
 /*
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {bp_wr_en, bp_data_in} <= 'h0;
  else begin
    case(data_type_rx_reg)
        6'h24: 
          {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [23:0]} : 25'h0;  
	    6'h23: 
           {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [71:0]} : 73'h0;  
        6'h22: 
		   {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [15:0]} : 17'h0;  
        6'h21: 
		 {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [15:0]} : 16'h0;  
        6'h20: 
		 {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [11:0]} : 13'h0;  
        6'h28: 
		{bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [23:0]} : 25'h0;  
        6'h29: 
		 {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [55:0]} : 57'h0;  
        6'h2a: 
        {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [7:0]} : 9'h0;  
        6'h2b: 
        {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [39:0]} : 41'h0;  
        6'h2c:
          {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [23:0]} : 25'h0;  
        6'h2d: 
          {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [55:0]} : 57'h0;  
		6'h2e: 
           {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [15:0]} : 17'h0;  
        6'h2f: 
           {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [39:0]} : 41'h0;  
        6'h27: 
          {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [23:0]} : 25'h0;  
        6'h26: 
          {bp_wr_en, bp_data_in} <= (rx_pixel_dvalid & (!(bp_full))) ? {1'b1, rx_pixel_data [55:0]} : 57'h0;  
        endcase
         end  
logic rx_pixel_dvalid_r;
logic bp_pixel_rd;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_pixel_dvalid_r <= 1'b0;
  else   rx_pixel_dvalid_r <= rx_pixel_dvalid;
	
always_ff @(posedge Aclk or negedge rst_n)
  if(~rst_n) bp_pixel_rd <= 1'b0;
  else   bp_pixel_rd <= rx_pixel_dvalid_r;

always_ff @(posedge Aclk or negedge rst_n)
  if(~rst_n) bp_rd_vld <= 1'b0;
  else bp_rd_vld <= (bp_pixel_rd & (!(bp_empty)));
	
//always_ff @(posedge Aclk or negedge rst_n)
  //if(~rst_n) WVALID <= 1'b0;
 // else  WVALID <= bp_rd_vld; 
  */            
		
  
 
		
 
 
 
 
/*
 always_ff @(posedge clk or negedge rst_n)
    if(~rst_n) {rx_pixel_dvalid, rx_pixel_data} <= 'h0;
    else begin
     // if(pixel_ready) begin
      case(data_type_rx_reg)
          6'h24: begin
           // if(rx_buff_reg1_vld)
            {rx_pixel_dvalid, rx_pixel_data} <= // pixel_dvalid_stop ? 9'h0 : 
            rx_buff_reg1_vld ? {1'b1, rx_buff_reg1} : pixel_dvalid_stop ? 9'h0 : 9'h0;
            //else {rx_pixel_dvalid, rx_pixel_data} <= 9'h0;
              end
        6'h23: begin
            {rx_pixel_dvalid, rx_pixel_data} <= // pixel_dvalid_stop ? 9'h0 : 
          (((!(rx_buff_reg10_vld)) & (!(stop_666)) & rx_buf_reg_vld & (rx_byte_ctr == 7'h8)) | (stop_666 & rx_buff_reg2_vld & (rx_byte_ctr == 7'h7) & rx_buff_reg8_vld & rx_buff_reg9_vld)) ? {1'b1, rx_buff_reg9[71:0]} : pixel_dvalid_stop ? 73'h0 : 73'h0;
        end
          6'h22: begin
            {rx_pixel_dvalid, rx_pixel_data} <= rx_buff_reg2_vld & (rx_byte_ctr == 7'h1) ?  {1'b1, rx_buff_reg2[15:0]} : 17'h0; //pixel_dvalid_stop ? 73'h0 :
          end
        6'h21: begin
          {rx_pixel_dvalid, rx_pixel_data} <= rx_buff_reg2_vld & (rx_byte_ctr == 7'h1) ?  {1'b1, {rx_buff_reg2[15:6], rx_buff_reg2[4:0]}} : 17'h0; //pixel_dvalid_stop ? 73'h0 :
          end
         6'h20: begin
          {rx_pixel_dvalid, rx_pixel_data} <= rx_buff_reg2_vld & (rx_byte_ctr == 7'h1) ?  {1'b1, {rx_buff_reg2[15:12], rx_buff_reg2[10:7], rx_buff_reg2[4:1]}} : 17'h0; //pixel_dvalid_stop ? 73'h0 :
          end
       6'h28: begin
         {rx_pixel_dvalid, rx_pixel_data} <= rx_buff_reg3_vld & (rx_byte_ctr == 7'h2) ?  {1'b1, {rx_buff_reg3[23:0]}} : 25'h0; //pixel_dvalid_stop ? 73'h0 :
          end
         6'h29: begin
           {rx_pixel_dvalid, rx_pixel_data} <= rx_buff_reg7_vld & (rx_byte_ctr == 7'h6) ?  {1'b1, {rx_buff_reg7[55:0]}} : 57'h0; //pixel_dvalid_stop ? 73'h0 :
          end
           6'h2a: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
            rx_buff_reg1_vld ? {1'b1, rx_buff_reg1} : pixel_dvalid_stop ? 9'h0 : 9'h0;
           end
         6'h2b: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
           rx_buff_reg5_vld & (rx_byte_ctr == 7'h4) ?  {1'b1, {rx_buff_reg5[31:24],rx_buff_reg5[39:38],rx_buff_reg5[23:16],rx_buff_reg5[37:36],rx_buff_reg5[15:8],rx_buff_reg5[35:34],rx_buff_reg5[7:0],rx_buff_reg5[33:32]}} : pixel_dvalid_stop ? 41'h0 : 41'h0;
           end
          6'h2c: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
            rx_buff_reg3_vld & (rx_byte_ctr == 7'h2) ?  {1'b1, {rx_buff_reg3[15:8],rx_buff_reg3[23:20],rx_buff_reg3[7:0],rx_buff_reg3[19:16]}} : pixel_dvalid_stop ? 25'h0 : 25'h0;
           end
         6'h2d: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
           rx_buff_reg7_vld & (rx_byte_ctr == 7'h6) ?  {1'b1, {rx_buff_reg7[31:24],rx_buff_reg7[39:34],rx_buff_reg7[23:16],rx_buff_reg7[47:44],rx_buff_reg7[33:32],rx_buff_reg7[15:8],rx_buff_reg7[55:54],rx_buff_reg7[43:40],rx_buff_reg7[7:0],rx_buff_reg7[53:48]}} : pixel_dvalid_stop ? 57'h0 : 57'h0;
           end
          6'h2e: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
            rx_buff_reg2_vld & (rx_byte_ctr == 7'h1) ?  {1'b1, rx_buff_reg2[15:8],rx_buff_reg2[7:0]} : pixel_dvalid_stop ? 17'h0 : 17'h0;
           end
        6'h2f: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
          rx_buff_reg5_vld & (rx_byte_ctr == 7'h4) ?  {1'b1,  rx_buff_reg5[31:24],rx_buff_reg5[37:36],  rx_buff_reg5[23:16],rx_buff_reg5[39:38]} : pixel_dvalid_stop ? 41'h0 : 41'h0;
           end
         6'h27: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
           rx_buff_reg3_vld & (rx_byte_ctr == 7'h2) ?  {1'b1,  rx_buff_reg3[23:16],rx_buff_reg3[7:4],  rx_buff_reg3[15:8],rx_buff_reg3[3:0]} : pixel_dvalid_stop ? 25'h0 : 25'h0;
           end
         6'h26: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
           rx_buff_reg3_vld & (rx_byte_ctr == 7'h2) ?  {1'b1,  rx_buff_reg3[23:16],rx_buff_reg3[7:4],  rx_buff_reg3[15:8],rx_buff_reg3[3:0]} : pixel_dvalid_stop ? 25'h0 : 25'h0;
           end
 
  6'h18: begin
           {rx_pixel_dvalid, rx_pixel_data} <= 
    rx_buff_reg7_vld & (rx_byte_ctr == 7'h7) ?  {1'b1,  {rx_buff_reg8[63:56],rx_buff_reg8[47:40],rx_buff_reg8[31:0]}} : pixel_dvalid_stop ? 25'h0 : 25'h0;
           end
        
              
        endcase
         end */
		 //endmodule