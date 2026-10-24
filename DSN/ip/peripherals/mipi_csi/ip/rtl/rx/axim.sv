//==================================================================================
//  Copyright (c) 2025 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: CSI2 Rx Controller
//  Module            				: axi_master.sv
//  Primary Unit Owner                         	: veena@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//============================================================================================================================================================
// Description: The AXI Master module contains the logic of transmitting the pixel data to the upper layer via pixel-axi bridging.
//============================================================================================================================================================

/*`define RGB888    6'h24
`define RGB666    6'h23 
`define RGB565    6'h22
`define RGB555    6'h21
`define RGB444    6'h20
`define RAW6      6'h28
`define RAW7      6'h29
`define RAW8      6'h2a
`define RAW10     6'h2b
`define RAW12     6'h2c
`define RAW14     6'h2d
`define RAW16     6'h2e
`define RAW20     6'h2f
`define RAW24     6'h27
`define RAW28     6'h26*/

//`idfef RGB888
//`define data_width 24
//`elsif RGB565
//`define data_width 46


module axi_master(rxwordclkhs, cphy_rxwordclkhs, aclk, areset_n, rd_rst_n, rx_pixel_dvalid, awready, wready, bvalid, data_type_rx_reg, rx_pixel_data, awlock, awvalid, wvalid,
wlast, awuser, wuser, bready, bresp, axim_err, awburst, axim_sts, awprot, awqos, awregion, awcache, awid, awaddr, awsize, wstrb, awlen, wdata, rxdataesc_reg_vld,
rxalpnibble_reg_vld);

input               rxwordclkhs;
input               cphy_rxwordclkhs;                //high speed receive word clock from csi2 rx controller via PPI
input               aclk;                    //clock in AXI 
input               areset_n;                    //negative edge asynchronous reset signal
input               rd_rst_n;
input               rx_pixel_dvalid;            //control signal from csi2 rx controller indicating that the pixel data is valid
input               awready;                    //ready indicator from AXI slave in write address channel
input               wready;                     //ready indicator from AXI slave in write data channel
input               bvalid;                     //valid indicator from AXI slave in write response channel
input rxdataesc_reg_vld;
input rxalpnibble_reg_vld;
input [1:0]         bresp;                      //response indicator from AXI slave in write response channel
input [5:0]         data_type_rx_reg;           //data type from the register
//input [PWIDTH-1:0]  rx_pixel_data;              //pixel data from byte to pixel converter in CSI2 Rx Controller
input [`rx_pixel_data-1:0]  rx_pixel_data;              //pixel data from byte to pixel converter in CSI2 Rx Controller
output logic        awlock;                     //exclusive access indicator from AXI master in axi write address channel
output logic        awvalid;                    //valid indicator from master in axi write address channel
output logic        wvalid;                     //valid indicator from master in axi write data channel
output logic        wlast;                      //last write data from AXI master in axi write data channel
output logic        awuser;                     //user-defined extension to a request from AXI master in write address channel
output logic        wuser;                      //user-defined extension to a request from AXI master in write data channel
output logic        bready;                     //ready indicator from AXI master in write response channel
output logic        axim_err;                   //error indication from axi slave is forwarded to the internal CSI2 Rx Controller register
output logic [1:0]  awburst;                    //burst attribute from AXI master in write address channel
output logic [1:0]  axim_sts;                   //status indication from axi slave is forwarded to the internal CSI2 Rx Controller register
output logic [2:0]  awsize;                     //transaction size from AXI master in write address channel
output logic [2:0]  awprot;                     //access attributes from AXI master in write address channel
output logic [3:0]  awqos;                      //QoS identifier from AXI master in write address channel
output logic [3:0]  awregion;                   //region identifier from AXI master in write address channel
output logic [3:0]  awcache;                    //memory attributes from AXI master in write address channel
output logic [7:0]  awlen;                      //transaction length from AXI master in write address channel
output logic [31:0] awaddr;                     //transaction address from AXI master in write address channel
output logic [31:0] awid;
  output logic [`wstrb-1:0] wstrb;
  output logic [`wdata-1:0] wdata;

//logic               rd_rst_n;
logic               axi_pixel_dvld;             //storing of incoming valid from byte to pixel converter 
logic               axi_pixel_rd;               //delay of pixel data valid to align with the clock cycle while reading from the AXI asynchronous FIFO
logic               axi_rd_vld;                 //read enable indication to AXI FIFO in order to read the pixel data
logic               axi_wr_en;                  //control signal indication to AXI FIFO to enable the write as pixel data is ready to write into it
logic               data_type_rx_reg_vld;       //control signal indication that the given data type is valid
logic               axi_full;                   //indication from AXI FIFO that it is full
logic               axi_empty;                  //indication from AXI FIFO that it is empty
//logic               wvld1_888;                  //control signal indicating that the data in wdata1_888 is valid
//logic               wvld2_888;                  //control signal indicating that the data in wdata2_888 is valid
//logic               wvld3_888;                  //control signal indicating that the data in wdata3_888 is valid
//logic               wvld4_888;                  //control signal indicating that the data in wdata4_888 is valid
//logic               wdata1_vld1;                //control signal indicating that the data in wdata1 for RGB565 is valid
//logic               wdata2_vld2;                //control signal indicating that the data in wdata2 for RGB565 is valid
//logic               wdata3_vld3;                //control signal indicating that the data in wdata3 for RGB565 is valid
//logic               wdata4_vld4;                //control signal indicating that the data in wdata4 for RGB565 is valid
//logic               wdata1_555vld1;             //control signal indicating that the data in wdata1_555 is valid
//logic               wdata2_555vld2;             //control signal indicating that the data in wdata2_555 is valid
//logic               wdata3_555vld3;             //control signal indicating that the data in wdata3_555 is valid
//logic               wdata4_555vld4;             //control signal indicating that the data in wdata4_555 is valid
//logic               wdata1_444vld1;             //control signal indicating that the data in wdata1_444 is valid
//logic               wdata2_444vld2;             //control signal indicating that the data in wdata2_444 is valid
//logic               wdata3_444vld3;             //control signal indicating that the data in wdata3_444 is valid
//logic               wdata4_444vld4;             //control signal indicating that the data in wdata4_444 is valid
//logic               wdata_vld1_raw28;           //control signal indicating that the data in wdata1_raw28 is valid
//logic               wvld1_raw24;                //control signal indicating that the data in wdata1_raw24 is valid
//logic               wvld2_raw24;                //control signal indicating that the data in wdata2_raw24 is valid
//logic               wvld3_raw24;                //control signal indicating that the data in wdata3_raw24 is valid
//logic               wvld4_raw24;                //control signal indicating that the data in wdata4_raw24 is valid
//logic               wvalid1_raw20;              //control signal indicating that the data in wdata1_raw20 is valid
//logic               wvalid2_raw20;              //control signal indicating that the data in wdata2_raw20 is valid
//logic               wdata1_raw12_vld;           //control signal indicating that the data in wdata1_raw12 is valid
//logic               wdata2_raw12_vld;           //control signal indicating that the data in wdata2_raw12 is valid
//logic               wdata1_vld_raw16;           //control signal indicating that the data in wdata1_raw16 is valid
//logic               wdata2_vld_raw16;           //control signal indicating that the data in wdata2_raw16 is valid
//logic               wdata3_vld_raw16;           //control signal indicating that the data in wdata3_raw16 is valid
//logic               wdata4_vld_raw16;           //control signal indicating that the data in wdata4_raw16 is valid
//logic               wdata_vld2_raw28;           //control signal indicating that the data in wdata2_raw28 is valid
logic               data_length_vld;
logic axi_empty_r;
logic [1:0] axim_stats;
logic [1:0] axim_status;
logic [9:0] wready_wait_ctr;
//logic [15:0]        wdata1_raw16;               //first incoming pixel data read from AXI FIFO for RAW16 is stored in the register
//logic [23:0]        wdata1_raw24;               //first incoming pixel data read from AXI FIFO for RAW24 is stored in the register
//logic [23:0]        wdata1_raw12;               //first incoming pixel data read from AXI FIFO for RAW12 is stored in the register
//logic [31:0]        wdata2_raw16;               //second incoming pixel data read from AXI FIFO for RAW16 is stored in the register
//logic [39:0]        wdata1_raw20;               //first incoming pixel data read from AXI FIFO for RAW20 is stored in the register
//logic [47:0]        wdata2_raw24;               //second incoming pixel data read from AXI FIFO for RAW24 is stored in the register
//logic [47:0]        wdata2_raw12;               //second incoming pixel data read from AXI FIFO for RAW12 is stored in the register
//logic [47:0]        wdata3_raw16;               //first incoming pixel data read from AXI FIFO for RAW16 is stored in the register
//logic [55:0]        wdata1_raw28;               //first incoming pixel data read from AXI FIFO for RAW28 is stored in the register
//logic [63:0]        wdata4_raw16;               //fourth incoming pixel data read from AXI FIFO for RAW16 is stored in the register
//logic [71:0]        wdata3_raw24;               //third incoming pixel data read from AXI FIFO for RAW24 is stored in the register
//logic [79:0]        wdata2_raw20;               //second incoming pixel data read from AXI FIFO for RAW20 is stored in the register
//logic [95:0]        wdata4_raw24;               //fourth incoming pixel data read from AXI FIFO for RAW24 is stored in the register
//logic [111:0]       wdata2_raw28;               //second incoming pixel data read from AXI FIFO for RAW28 is stored in the register
//logic [14:0]        wdata1_444;                 //first incoming pixel data read from AXI FIFO for RGB444 is stored in the register
//logic [14:0]        wdata1_555;                 //first incoming pixel data read from AXI FIFO for RGB555 is stored in the register
//logic [15:0]        wdata1;                     //first incoming pixel data read from AXI FIFO for RGB565 is stored in the register
//logic [23:0]        wdata1_888;                 //first incoming pixel data read from AXI FIFO for RGB888 is stored in the register
//logic [29:0]        wdata2_444;                 //control signal indicating that the data in wdata1_444 is valid
//logic [29:0]        wdata2_555;                 //second incoming pixel data read from AXI FIFO is stored along with the first data from wdata1_555 register
//logic [31:0]        wdata2;                     //second incoming pixel data read from AXI FIFO is stored along with the first data from wdata1 register
//logic [44:0]        wdata3_555;                 //third incoming pixel data read from AXI FIFO is stored along with the data from wdata2_555 register
//logic [44:0]        wdata3_444;                 //third incoming pixel data read from AXI FIFO is stored along with the data from wdata2_444 register
//logic [47:0]        wdata3;                     //third incoming pixel data read from AXI FIFO is stored along with the data from wdata2 for RGB565 register
//logic [47:0]        wdata2_888;                 //second incoming pixel data read from AXI FIFO is stored along with the first data from wdata1_888 register
//logic [59:0]        wdata4_555;                 //fourth incoming pixel data read from AXI FIFO is stored along with the data from wdata3_555 register
//logic [59:0]        wdata4_444;                 //fourth incoming pixel data read from AXI FIFO is stored along with the data from wdata3_444 register
//logic [63:0]        wdata4;                     //fourth incoming pixel data read from AXI FIFO is stored along with the data from wdata3 for RGB565 register
//logic [71:0]        wdata3_888;                 //third incoming pixel data read from AXI FIFO is stored along with the data from wdata2_888 register
//logic [95:0]        wdata4_888;                 //fourth incoming pixel data read from AXI FIFO is stored along with the data from wdata1_888 register

logic axi_empty_esc;
logic axi_rd_vld_esc;
logic axi_full_esc;
logic axi_wr_en_esc;
logic axi_empty_alp;
logic axi_rd_vld_alp;
logic axi_full_alp;
logic axi_wr_en_alp;



//Instantiation of Asynchronous FIFO
async_fifo_binary #(.DATA_WIDTH(`axi_data_width), .ADDR_WIDTH(`axi_depth)) async_fifo_binary_axi_inst(.wr_clk(cphy_rxwordclkhs),  .wr_rst_n(areset_n), 
                   .rd_rst_n(rd_rst_n),  .wr_en(axi_wr_en), .wr_data(axi_data_in), .full(axi_full), 
                                        .rd_clk(aclk), /*.areset_n(areset_n),*/ .rd_en(axi_rd_vld), .rd_data(axi_rd_data), .empty(axi_empty)); 
										
//for ALP Mode
async_fifo_binary #(.DATA_WIDTH(`axi_data_width), .ADDR_WIDTH(`axi_depth)) async_fifo_binary_axi_inst_alp(.wr_clk(rxwordclkhs),  .wr_rst_n(areset_n), 
                    .rd_rst_n(rd_rst_n),  .wr_en(axi_wr_en_alp), .wr_data(axi_data_in_alp), .full(axi_full_alp), .rd_clk(aclk), .rd_en(axi_rd_vld_alp),
					.rd_data(axi_rd_data_alp), .empty(axi_empty_alp)); 		

//for Escape Mode
async_fifo_binary #(.DATA_WIDTH(`axi_data_width), .ADDR_WIDTH(`axi_depth)) async_fifo_binary_axi_inst_esc(.wr_clk(rxwordclkhs),  .wr_rst_n(areset_n), 
                    .rd_rst_n(rd_rst_n),  .wr_en(axi_wr_en_esc), .wr_data(axi_data_in_esc), .full(axi_full_esc), .rd_clk(aclk), .rd_en(axi_rd_vld_esc),
					.rd_data(axi_rd_data_esc), .empty(axi_empty_esc)); 							

 
localparam BASE_ADDR_888   = 32'h0100_0000;          //Address space -> 0x0100_0000 - 0x01FF_FFFF
localparam BASE_ADDR_666   = 32'h0200_0000;          //Address space -> 0x0200_0000 - 0x02FF_FFFF
localparam BASE_ADDR_565   = 32'h0300_0000;          //Address space -> 0x0300_0000 - 0x03FF_FFFF
localparam BASE_ADDR_555   = 32'h0400_0000;          //Address space -> 0x0400_0000 - 0x04FF_FFFF
localparam BASE_ADDR_444   = 32'h0500_0000;          //Address space -> 0x0500_0000 - 0x05FF_FFFF
localparam BASE_ADDR_RAW6  = 32'h0600_0000;          //Address space -> 0x0600_0000 - 0x06FF_FFFF
localparam BASE_ADDR_RAW7  = 32'h0700_0000;          //Address space -> 0x0700_0000 - 0x07FF_FFFF
localparam BASE_ADDR_RAW8  = 32'h0800_0000;          //Address space -> 0x0800_0000 - 0x08FF_FFFF
localparam BASE_ADDR_RAW10 = 32'h0900_0000;          //Address space -> 0x0900_0000 - 0x09FF_FFFF
localparam BASE_ADDR_RAW12 = 32'h0a00_0000;          //Address space -> 0x0A00_0000 - 0x0AFF_FFFF
localparam BASE_ADDR_RAW14 = 32'h0b00_0000;          //Address space -> 0x0B00_0000 - 0x0BFF_FFFF
localparam BASE_ADDR_RAW16 = 32'h0c00_0000;          //Address space -> 0x0C00_0000 - 0x0CFF_FFFF
localparam BASE_ADDR_RAW20 = 32'h0d00_0000;          //Address space -> 0x0D00_0000 - 0x0DFF_FFFF
localparam BASE_ADDR_RAW24 = 32'h0e00_0000;          //Address space -> 0x0E00_0000 - 0x0EFF_FFFF
localparam BASE_ADDR_RAW28 = 32'h0f00_0000;          //Address space -> 0x-0F00_0000 - 0x0FFF_FFFF
localparam BASE_ADDR_LYUV4208 = 32'h1000_0000;     //0x1_0000_0000 - 0x1_FFFF_FFFF
localparam BASE_ADDR_YUV4208 = 32'h2000_0000;     //0x2_0000_0000 - 0x2_FFFF_FFFF
//localparam BASE_ADDR_YUV4208_EVEN = 32'h3_0000_0000;     //0x3_0000_0000 - 0x3_FFFF_FFFF
localparam BASE_ADDR_YUV42010 = 32'h3000_0000;     //0x4_0000_0000 - 0x4_FFFF_FFFF
//localparam BASE_ADDR_YUV42010_EVEN = 32'h5_0000_0000;     //0x5_0000_0000 - 0x5_FFFF_FFFF
localparam BASE_ADDR_YUV4228 = 32'h4000_0000;     //0x6_0000_0000 - 0x6_FFFF_FFFF
localparam BASE_ADDR_YUV42210 = 32'h5000_0000;     //0x7_0000_0000 - 0x7_FFFF_FFFF

localparam BASE_ADDR_ALP   = 32'hA000_0000;        // ALP buffer base
localparam BASE_ADDR_ESC   = 32'hE000_0000;        // ESC buffer base

//base address is used to address the memory region. As per this design, CSI2 frames are stored at 0x4000_0000.
//base address ensures writes go to the correct device. 
//local parameterization of total transfers in different data types
localparam  TOTAL_TRANSFERS_COMMON                   = 160;
localparam  TOTAL_TRANSFERS_RAW8                     = 64;
localparam TOTAL_TRANSFERS_RGB888                    = 128;
localparam TOTAL_TRANSFERS_RAW7_YUV4208b_10b_odd     = 80;

//420 8bODD = 80; 4208bEVEN = 160;
  
/*  
//localparam  TOTAL_TRANSFERS_RGB888                   = 240;                          //8'hf0
localparam  TOTAL_TRANSFERS_RGB666_565_555_444_RAW16_y420_4228 = 80;                //            //160;//8'ha0      
localparam  TOTAL_TRANSFERS_y4208even = 160;                                        //      
localparam  TOTAL_TRANSFERS_y42010even      = 160; //100; 
localparam  TOTAL_TRANSFERS_y42010odd      = 80; //100;                    //       //7'h64
   //yuv4228 - 160; yuv42210 - 160    
localparam  TOTAL_TRANSFERS_RAW6_12_24_ly4208        = 160                           //           //120;//7'h78
//localparam  TOTAL_TRANSFERS_RAW7                     = 70;                            //7'h46
//localparam  TOTAL_TRANSFERS_RAW8                     = 64;                            //7'h40
localparam  TOTAL_TRANSFERS_RAW10_20_y420_42210      = 160; //100;                    //       //7'h64
localparam  TOTAL_TRANSFERS_RAW14_RAW28              = 140;                           //8'h8c
localparam  TOTAL_TRANSFERS_ALP_ESC_MODE             = 10;*/
//local parameterization of wstrobe in different data types



localparam WSTRB_RGB888_RAW12_lyuv4208              = 63;                             //6'h3f 
localparam WSTRB_RGB666                             = 511;                            //9'h1ff
localparam WSTRB_RGB565_55_444_RAW16_yuv4208_4228   = 255;                            //8'hff
localparam WSTRB_RAW6                               = 7;                              //3'h7
//localparam WSTRB_RAW12                            = 63;                             //6'3f
localparam WSTRB_RAW7_14                            = 127;                            //7'h7f
localparam WSTRB_RAW8_ESC                           = 1;                              //1'h1
localparam WSTRB_RAW10                              = 31;                             //5'h1f
localparam WSTRB_RAW20_yuv420_42210                 = 1023;                           //10'h3ff
localparam WSTRB_RAW24                              = 4095;                           //12'hfff
localparam WSTRB_RAW28                              = 16383;                          //14'h3fff
localparam WSTRB_ALP                                = 2;                              //2'h2
//localparam WSTRB_YUV4208_ODD                        = 15;                             //4'hf
//local parameterization of awsize in different data types
localparam AWSIZE2                                  = 2;
localparam AWSIZE3                                  = 3;
localparam AWSIZE4                                  = 4;
localparam AWSIZE_RAW8                              = 0;
/*
localparam AWSIZE_RGB666_RAW20_24_28_yuv420e_42210  = 4;                             //3'h4
localparam AWSIZE_RGB888_565_555_444_RAW7_10_14_16  = 3;                             //3'h3
localparam AWSIZE_RAW6_yuv4208_odd                  = 2;                             //3'h2
localparam AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o = 3;                           //3'h3
localparam AWSIZE_RAW8                              = 0;                             //3'h0*/
//local parameterization of data width in different data types
localparam DWIDTH_8                                = 8;
localparam DWIDTH_32                               = 32;
localparam DWIDTH_64                               = 64;
localparam DWIDTH_128                              = 128;
/*
localparam DWIDTH_RGB565_555_444_RAW14_16          = 64;                              //7'h40 //1920 and 3 bytes per cc; in axi = max 255 transfers
localparam DWIDTH_RGB888_666_RAW20                 = 128;                             //8'h80
localparam DWIDTH_RAW6                             = 32; //64; //32;                              //6'h20
localparam DWIDTH_RAW12                            = 64;                              //7'h40
localparam DWIDTH_RAW7                             = 64;                              //7'h40
localparam DWIDTH_RAW8_ESC                         = 8;                               //4'h8
localparam DWIDTH_RAW10                            = 64;                              //7'h40
localparam DWIDTH_RAW24                            = 128;                             //7'h70
localparam DWIDTH_RAW28                            = 128;                             //7'h70
localparam DWIDTH_ALPMODE                          = 16;                              //5'h10
localparam DWIDTH_LYUV4208_4208e_42010o_4228       = 64;
localparam DWIDTH_YUV4208_ODD                      = 32;
localparam DWIDTH_YUV42010e_42210                  = 128;*/
//local parameterization of awburst 
localparam AWBURST_INCR                            = 1;                               //2'h1 --> Increment; 2'h0 --> Fixed; 2'h2 --> Wrap
//local parameterization of awcache
localparam AWCACHE_SEL                             = 3;                               //4'h3 --> Normal non-cacheable bufferable; 
                                                                                     //Bit[0] = 1 --> Bufferable (Allows write buffering for better 
																					 //performance), CSI2 data is continuous streaming, benefits from 
																					 //buffering
                                                                                     //Bit[1] = 1 --> Enables caching (though marked as non-cacheable, 
																					 //this bit helps with ordering)
                                                                                     //Bit[2] = 0 --> Read-Allocate (Not applicable for write-only transfers)
                                                                                     //Bit[3] = 0 --> No write allocation needed
                                                                                     //local parameterization of awprot  
localparam AWPROT_SEL                              = 0;                               //3'h0; AWPROT[0] = 0 --> Normal access (pixel data doesn't need 
                                                                                     //privileged access)
                                                                                     //AWPROT[1] = 0 --> Secure access (to secure the transfer of camera data)
                                                                                     //AWPROT[2] = 0 --> Data access (it is pixel data, not instructions)
//local parameterization of awlock
localparam AWLOCK_SEL                              = 0;                               //1'b0; 1'b0 = Normal Access; 1'b1 - Exclusive access;		
//local parameterization of awqos
localparam AWQOS_SEL                               = 3;                               //4'h3 --> medium priority; 4'h0 --> lowest priority; 
                                                                                     //4'hf --> highest priority		
//local parameterization of awregion
localparam AWREGION_SEL                            = 0;                               //4'h0 --> default region (most common) (camera pixel data typically goes to standard system memory (DDR))
//local parameterization of awuser
localparam AWUSER_WIDTH                            = 1;                               //user-defined width
localparam AWUSER_SEL                              = 0;                               //default/don't care
//local parameterization of wuser	
localparam WUSER_WIDTH                             = 1;                               //user-defined width
localparam WUSER_SEL                               = 0;                               //default/don't care											

integer i; 

//burst length (number of W beats = awlen + 1) of the data type this module is built for
`ifdef RGB888
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_RGB888;
`elsif RAW7
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_RAW7_YUV4208b_10b_odd;
`elsif RAW8
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_RAW8;
`elsif RGB666
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RGB565
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RGB555
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RGB444
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RAW6
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RAW10
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RAW12
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RAW14
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RAW16
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RAW20
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RAW24
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif RAW28
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif LEGACY_YUV420_8b
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif YUV420_8b
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif YUV420_10b
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif YUV422_8b
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`elsif YUV422_10b
localparam [8:0] BURST_BEATS = TOTAL_TRANSFERS_COMMON;
`else
localparam [8:0] BURST_BEATS = 9'd1;                  //ALP / escape mode: single-beat bursts (awlen = 0)
`endif

logic [8:0] beat_cnt;                                  //W beats already accepted in the current burst
logic       burst_active;                              //an AW has been raised for the current burst
logic       rd_dvld;                                   //axi_rd_data holds a new FIFO word in this cycle
logic       rd_issue;                                  //start a FIFO read

//counts the accepted W beats of a burst; data_length_vld pulses in the cycle after the last beat of the burst
//has been accepted (counter reached the limit) and clears the burst attributes below
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) beat_cnt <= 9'h0;
  else if(wvalid & wready) beat_cnt <= (beat_cnt == (BURST_BEATS - 9'd1)) ? 9'h0 : (beat_cnt + 9'h1);

always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) data_length_vld <= 1'b0;
  else          data_length_vld <= wvalid & wready & (beat_cnt == (BURST_BEATS - 9'd1));

//last write data: high together with the last beat of the burst
assign wlast = wvalid & (beat_cnt == (BURST_BEATS - 9'd1));

//storing of incoming valid from byte to pixel converter 
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) axi_pixel_dvld <= 1'b0;
  else   axi_pixel_dvld <= rx_pixel_dvalid;
  
//delay of pixel data valid to align with the clock cycle while reading from the AXI asynchronous FIFO	
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) axi_pixel_rd <= 1'b0;
  else   axi_pixel_rd <= axi_pixel_dvld;
  
//read enable indication to AXI FIFO in order to read the pixel data.
//A word is popped only when the W channel is idle (one beat in flight):
//rd_issue -> axi_rd_vld (FIFO read) -> rd_dvld (read data valid) -> wvalid/wdata -> handshake.
assign rd_issue = (!axi_empty) & (!axi_rd_vld) & (!rd_dvld) & (!wvalid) & burst_active;

always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) axi_rd_vld <= 1'b0;
  else          axi_rd_vld <= rd_issue;

always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) rd_dvld <= 1'b0;
  else          rd_dvld <= axi_rd_vld;

logic [8:0] yuv_ctr;  
  //counter for counting 480 lines in a frame in case of yuv formats
 always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) yuv_ctr <= 9'h0;
  else if(yuv_ctr == 9'h1df) yuv_ctr <= 9'h0;
  else if(axi_rd_vld) yuv_ctr <= yuv_ctr + 9'h1;   
  
  
/*`ifdef  RAW8  //deafult as RAW8
//output logic       wstrb;       //write data strobes from AXI master via the write data channel
//output logic [7:0] wdata;       //write data (pixel data) from AXI master via the write data channel
logic [7:0]        data_width;  //data width determining the data strobe in AXI master for transmitting the data
logic [7:0]        axi_data_in; //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [7:0]        axi_rd_data; //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 9'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [7:0]} : 9'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_RAW8;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE_RAW8;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= 1'b0; //{(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= 1'b0; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW8;   

//data width determining the data strobe in AXI master for transmitting the data
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 8'h0;					   
  else if(data_length_vld) data_width <= 8'h0;
  else if(axi_wr_en) data_width <= DWIDTH_RAW8;   		

//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_RAW8 - 1;  
 
//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 8'h0;
  else if(rd_dvld) wdata <= axi_rd_data[7:0];    
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h8; 
*/
`ifdef RGB888
//output logic [7:0]   wstrb;                   //write data strobes from AXI master via the write data channel
//output logic [127:0] wdata;                   //write data (pixel data) from AXI master via the write data channel
logic               wvld1_888;
logic               wvld2_888;
logic               wvld3_888;
logic               wvld4_888;
logic [23:0]        wdata1_888;
logic [47:0]        wdata2_888;
logic [71:0]        wdata3_888;
logic [95:0]        wdata4_888;
logic [23:0]         axi_data_in;             //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [23:0]         axi_rd_data;             //data read from AXI FIFO and is forwarded to the Application Layer via AXI master
logic [63:0]         data_width;              //data width determining the data strobe in AXI master for transmitting the data
  


//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 25'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [23:0]} : 25'h0;  

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  //else if(!wready) awaddr <= awaddr;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_888;   //burst start address    

//transaction size from AXI master in write address channel						   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RGB888_565_555_444_RAW7_10_14_16;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb) {1'b0}}; //'h0; //{(data_width/8){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb) {1'b0}}; //'h0; //{(data_width/8){1'b0}}; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB888_RAW12_lyuv4208;      

//data width determining the data strobe in AXI master for transmitting the data						   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 64'h0; 						   
  else if(data_length_vld) data_width <= 64'h0; 
  else if(axi_wr_en) data_width <=  DWIDTH_64; //DWIDTH_RGB565_555_444_RAW14_16;
 
//transaction length from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
   else if(data_length_vld) awlen <= 8'h0;
   else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_RGB888 - 1;    

//first incoming pixel data read from AXI FIFO for RGB888 is stored in the regsietr  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvld1_888,wdata1_888} <= 25'h0;
  else {wvld1_888,wdata1_888} <= (wvalid & wready & (!(axi_empty))) ? {1'b1, axi_rd_data[23:0]} : 25'h0;   

//second incoming pixel data read from AXI FIFO for RGB888 is stored in the regsietr along with the first data from wdata1_888 register
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvld2_888,wdata2_888} <= 49'h0;
  else {wvld2_888,wdata2_888} <= (wvld1_888 & wvalid & wready & (!(axi_empty))) ? {1'b1, {axi_rd_data[23:0], wdata1_888[23:0]}} : 49'h0;     

//third incoming pixel data read from AXI FIFO for RGB888 is stored in the regsietr along with the stored data from wdata2_888 register
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvld3_888,wdata3_888} <= 73'h0;
  else {wvld3_888,wdata3_888} <= (wvld2_888 & wvalid & wready & (!(axi_empty))) ? {1'b1, {axi_rd_data[23:0], wdata2_888[47:0]}} : 73'h0;   

//fourth incoming pixel data read from AXI FIFO for RGB888 is stored in the regsietr along with the stored data from wdata3_888 register
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvld4_888,wdata4_888} <= 97'h0;
  else {wvld4_888,wdata4_888} <= (wvld3_888 & wvalid & wready & (!(axi_empty))) ? {1'b1, {axi_rd_data[23:0], wdata3_888[71:0]}} : 97'h0;   

//write data from write data channel is forwarded to the AXI slave     
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 128'h0;
  else wdata <= (wvalid & wready & (!(axi_empty))) ? {1'b1, {32'h0, wdata4_888[95:0]}} : 128'h0;   
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h1;    

`elsif RGB666
//output logic [15:0]  wstrb;              //write data strobes from AXI master via the write data channel
//output logic [127:0] wdata;              //write data (pixel data) from AXI master via the write data channel
logic [71:0]         axi_data_in;        //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [71:0]         axi_rd_data;        //data read from AXI FIFO and is forwarded to the Application Layer via AXI master
logic [127:0]        data_width;         //data width determining the data strobe in AXI master for transmitting the data

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 73'h0;
  else  {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [71:0]} : 73'h0;  
 
//transaction address from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0; 
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_666;   //burst start address 

//transaction size from AXI master in write address channel							
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE4;
  //AWSIZE_RGB666_RAW20_24_28_yuv420e_42210;		

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB666;        
 
//data width determining the data strobe in AXI master for transmitting the data 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 128'h0;						   
  else if(data_length_vld) data_width <= 128'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_128; //DWIDTH_RGB888_666_RAW20;  

//transaction length from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_COMMON - 1; 	

//write data (pixel data) from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 128'h0;
  else if(rd_dvld) wdata <= {56'h0,axi_rd_data[71:0]};  
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h2;    

`elsif RGB565
//output logic [7:0]  wstrb;             //write data strobes from AXI master via the write data channel
//output logic [63:0] wdata;             //write data (pixel data) from AXI master via the write data channel
logic              wdata1_vld1;
logic              wdata2_vld2;
logic              wdata3_vld3;
logic              wdata4_vld4;
logic [15:0]       wdata1;
logic [31:0]       wdata2;
logic [47:0]       wdata3;
logic [63:0]       wdata4;
logic [15:0]        axi_data_in;       //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [15:0]        axi_rd_data;       //data read from AXI FIFO and is forwarded to the Application Layer via AXI master
logic [63:0]        data_width;        //data width determining the data strobe in AXI master for transmitting the data

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 17'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [15:0]} : 17'h0;

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
   else  if (axi_wr_en) awaddr <= BASE_ADDR_565;   //burst start address  

//transaction size from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
//  AWSIZE_RGB888_565_555_444_RAW7_10_14_16;

//write data strobes from AXI master via the write data channel		
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB565_55_444_RAW16_yuv4208_4228;  

//data width determining the data strobe in AXI master for transmitting the data
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 64'h0; 						   
  else if(data_length_vld) data_width <= 64'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_RGB565_555_444_RAW14_16;  

//transaction length from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_COMMON - 1; 

//first incoming pixel data read from AXI FIFO for RGB565 is stored in the regsietr  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata1_vld1, wdata1} <= 17'h0;
  else wdata1 <= (wvalid & wready & (!(axi_empty))) ? {1'b1,axi_rd_data[15:0]} : 17'h0;
 
//second incoming pixel data read from AXI FIFO for RGB565 is stored in the regsietr along with the first data from wdata1 register 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata2_vld2, wdata2} <= 33'h0;
  else wdata2 <= (wdata1_vld1 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[15:0],wdata1[15:0]}} : 33'h0;  
  
//third incoming pixel data read from AXI FIFO for RGB565 is stored in the regsietr along with the data from wdata2 register  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata3_vld3, wdata3} <= 49'h0;
  else wdata3 <= (wdata2_vld2 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[15:0],wdata2[31:0]}} : 49'h0; 

//fourth incoming pixel data read from AXI FIFO for RGB565 is stored in the regsietr along with the data from wdata3 register
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata4_vld4, wdata4} <= 65'h0;
  else wdata4 <= (wdata3_vld3 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[15:0],wdata3[47:0]}} : 65'h0;   

//write data (pixel data) from AXI master via the write data channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0;
  else wdata <= wdata4_vld4 ? wdata4[63:0] : 64'h0;    
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h3;    
  
`elsif RGB555
//output logic [7:0]  wstrb;            //write data strobes from AXI master via the write data channel
//output logic [63:0] wdata;            //write data (pixel data) from AXI master via the write data channel
logic               wdata1_555vld1;
logic               wdata2_555vld2;
logic               wdata3_555vld3;
logic               wdata4_555vld4;
logic [14:0]        wdata1_555;
logic [29:0]        wdata2_555;
logic [44:0]        wdata3_555;
logic [59:0]        wdata4_555;
logic [63:0]        data_width;       //data width determining the data strobe in AXI master for transmitting the data
logic [14:0]        axi_data_in;      //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [14:0]        axi_rd_data;      //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 16'h0;
 else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [14:0]} : 16'h0;

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_555;   //burst start address  

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RGB888_565_555_444_RAW7_10_14_16;			

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB565_55_444_RAW16_yuv4208_4228;  
 
//data width determining the data strobe in AXI master for transmitting the data 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 64'h0; 						   
  else if(data_length_vld) data_width <= 64'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_RGB565_555_444_RAW14_16;  
 
//transaction length from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_COMMON - 1;   
 
//first incoming pixel data read from AXI FIFO for RGB555 is stored in the regsietr  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata1_555vld1, wdata1_555} <= 16'h0;
  else wdata1_555 <= (wvalid & wready & (!(axi_empty))) ? {1'b1,axi_rd_data[14:0]} : 16'h0;
 
//second incoming pixel data read from AXI FIFO for RGB555 is stored in the regsietr along with the data from wdata1_555 register   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata2_555vld2, wdata2_555} <= 31'h0;
  else wdata2_555 <= (wdata1_555vld1 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[14:0],wdata1_555[14:0]}} : 31'h0;  
 
//third incoming pixel data read from AXI FIFO for RGB555 is stored in the regsietr along with the data from wdata2_555 register    
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata3_555vld3, wdata3_555} <= 46'h0;
  else wdata3_555 <= (wdata2_555vld2 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[14:0],wdata2_555[29:0]}} : 46'h0; 

//fourth incoming pixel data read from AXI FIFO for RGB555 is stored in the regsietr along with the data from wdata3_555 register
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata4_555vld4, wdata4_555} <= 61'h0;
  else wdata4_555 <= (wdata3_555vld3 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[14:0],wdata3_555[44:0]}} : 61'h0;   

//write data (pixel data) from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0;
  else wdata <= wdata4_555vld4 ? {4'h0, wdata4_555[59:0]} : 64'h0;     

always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h4;    
  
`elsif RGB444
//output logic [7:0]  wstrb;               //write data strobes from AXI master via the write data channel
//output logic [63:0] wdata;               //write data (pixel data) from AXI master via the write data channel
logic               wdata1_444vld1;
logic               wdata2_444vld2;
logic               wdata3_444vld3;
logic               wdata4_444vld4;
logic [14:0]        wdata1_444;
logic [29:0]        wdata2_444;
logic [44:0]        wdata3_444;
logic [59:0]        wdata4_444;
logic [63:0]        data_width;          //data width determining the data strobe in AXI master for transmitting the data
logic [11:0]        axi_data_in;         //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [11:0]        axi_rd_data;         //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n)   {axi_wr_en, axi_data_in} <= 13'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [11:0]} : 13'h0;

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_444;   //burst start address

//transaction size from AXI master in write address channel		
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RGB888_565_555_444_RAW7_10_14_16;
 
//write data strobes from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB565_55_444_RAW16_yuv4208_4228; 
 
//data width determining the data strobe in AXI master for transmitting the data 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 64'h0; 						   
  else if(data_length_vld) data_width <= 64'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_RGB565_555_444_RAW14_16;  

//transaction length from AXI master in write address channel		
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_COMMON - 1; 

//first incoming pixel data read from AXI FIFO for RGB444 is stored in the regsietr  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata1_444vld1, wdata1_444} <= 16'h0;
  else wdata1_444 <= (wvalid & wready & (!(axi_empty))) ? {1'b1,axi_rd_data[14:0]} : 16'h0;
 
//second incoming pixel data read from AXI FIFO for RGB444 is stored in the regsietr along with the data from  wdata1_444 register 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata2_444vld2, wdata2_444} <= 31'h0;
  else wdata2_444 <= (wdata1_444vld1 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[14:0],wdata1_444[14:0]}} : 31'h0;  

//third incoming pixel data read from AXI FIFO for RGB444 is stored in the regsietr along with the data from  wdata2_444 register   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata3_444vld3, wdata3_444} <= 46'h0;
  else wdata3_444 <= (wdata2_444vld2 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[14:0],wdata2_444[29:0]}} : 46'h0; 

//fourth incoming pixel data read from AXI FIFO for RGB444 is stored in the regsietr along with the data from  wdata3_444 register 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata4_444vld4, wdata4_444} <= 61'h0;
  else wdata4_444 <= (wdata3_444vld3 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[14:0],wdata3_444[44:0]}} : 61'h0;   
 
//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0;
  else wdata <= wdata4_444vld4 ? {4'h0, wdata4_444[59:0]} : 64'h0;     
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h5;    
  
`elsif RAW6
//output logic [2:0]  wstrb;          //write data strobes from AXI master via the write data channel
//output logic [31:0] wdata;          //write data (pixel data) from AXI master via the write data channel
logic [31:0]        data_width;     //data width determining the data strobe in AXI master for transmitting the data
logic [23:0]        axi_data_in;    //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [23:0]        axi_rd_data;    //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 25'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [23:0]} : 25'h0;

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_RAW6;   //burst start address  

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE2;
  //AWSIZE_RAW6_yuv4208_odd;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW6;  
 
//data width determining the data strobe in AXI master for transmitting the data 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 32'h0;						   
  else if(data_length_vld) data_width <= 32'h0;
  else if(axi_wr_en) data_width <= DWIDTH_32; //DWIDTH_RAW6;    

//transaction length from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_COMMON - 1;    

//write data (pixel data) from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 32'h0;
  else if(rd_dvld) wdata <= {8'h0,axi_rd_data[23:0]};    
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h6;    
  
`elsif RAW7
//output logic [6:0]  wstrb;            //write data strobes from AXI master via the write data channel
//output logic [63:0] wdata;            //write data (pixel data) from AXI master via the write data channel
logic [55:0]        data_width;       //data width determining the data strobe in AXI master for transmitting the data
logic [55:0]        axi_data_in;      //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [55:0]        axi_rd_data;      //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 57'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [55:0]} : 57'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_RAW7;   //burst start address 

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3; 
  //AWSIZE_RGB888_565_555_444_RAW7_10_14_16;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= 127'h0;//{(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= 127'h0; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW7_14;  

//data width determining the data strobe in AXI master for transmitting the data
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 56'h0;					   
  else if(data_length_vld) data_width <= 56'h0;
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_RAW7;   

//transaction length from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_RAW7_YUV4208b_10b_odd - 1;    

//write data (pixel data) from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0;
 else if(rd_dvld) wdata <= {8'h0,axi_rd_data[55:0]};     
  // else if(rd_dvld) wdata <= {8'h0,axi_rd_data[55:0]};    
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h7;    
 
  
`elsif RAW10 
//output logic [4:0]  wstrb;                 //write data strobes from AXI master via the write data channel
//output logic [63:0] wdata;                 //write data (pixel data) from AXI master via the write data channel
logic [39:0]        data_width;            //data width determining the data strobe in AXI master for transmitting the data
logic [39:0]        axi_data_in;           //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [39:0]        axi_rd_data;           //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 41'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [39:0]} : 41'h0;

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en)	awaddr <= BASE_ADDR_RAW10;   //burst start address  

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RGB888_565_555_444_RAW7_10_14_16;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW10;  

//data width determining the data strobe in AXI master for transmitting the data  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 40'h0;			   
  else if(data_length_vld) data_width <= 40'h0;
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_RAW10;  

//transaction length from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_COMMON - 1;    

//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0;
  else if(rd_dvld) wdata <= {24'h0, axi_rd_data[39:0]};    

always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h10;               //a;    
  
`elsif RAW12
//output logic [2:0]  wstrb;          //write data strobes from AXI master via the write data channel
//output logic [63:0] wdata;          //write data (pixel data) from AXI master via the write data channel
logic               wdata1_raw12_vld;
logic               wdata2_raw12_vld;
logic [23:0]        wdata1_raw12;
logic [47:0]        wdata2_raw12;
logic [31:0]        data_width;     //data width determining the data strobe in AXI master for transmitting the data
logic [23:0]        axi_data_in;    //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [23:0]        axi_rd_data;    //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 25'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [23:0]} : 25'h0;

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) 	awaddr <= BASE_ADDR_RAW12;   //burst start address 

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o;							

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW6;  

//data width determining the data strobe in AXI master for transmitting the data  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 32'h0;						   
  else if(data_length_vld) data_width <= 32'h0;
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_RAW6;    

//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
   else if(data_length_vld) awlen <= 8'h0;
   else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_COMMON - 1;   

//first incoming pixel data read from AXI FIFO for RAW12 is stored in the regsietr  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata1_raw12_vld, wdata1_raw12} <= 25'h0;
  else  {wdata1_raw12_vld, wdata1_raw12} <= (wvalid & wready & (!(axi_empty))) ? axi_rd_data[23:0] : 25'h0;   

//second incoming pixel data read from AXI FIFO for RAW12 is stored in the regsietr along with the data from  wdata1_raw12 register   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata2_raw12_vld, wdata2_raw12} <= 49'h0;
  else  {wdata2_raw12_vld, wdata2_raw12} <= (wdata1_raw12_vld & wvalid & wready & (!(axi_empty))) ? {axi_rd_data[23:0], wdata1_raw12[23:0]} : 49'h0;     

//write data (pixel data) from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0;
  else wdata <= (wdata2_raw12_vld & wvalid & wready & (!(axi_empty))) ? {16'h0, wdata2_raw12[47:0]} : 64'h0; 

always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h12;                    //c;    
 
`elsif RAW14
//output logic [7:0]  wstrb;              //write data strobes from AXI master via the write data channel
//output logic [63:0] wdata;              //write data (pixel data) from AXI master via the write data channel
logic [63:0]        data_width;         //data width determining the data strobe in AXI master for transmitting the data
logic [55:0]        axi_data_in;        //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [55:0]        axi_rd_data;        //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 57'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [55:0]} : 57'h0;

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en)	awaddr <= BASE_ADDR_RAW14;   //burst start address

//transaction size from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RGB888_565_555_444_RAW7_10_14_16;	

//write data strobes from AXI master via the write data channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW7_14;   
 
//data width determining the data strobe in AXI master for transmitting the data 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 64'h0; 						   
  else if(data_length_vld) data_width <= 64'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_RGB565_555_444_RAW14_16;  

//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_COMMON - 1;   

//write data (pixel data) from AXI master via the write data channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0;
  else if(rd_dvld) wdata <= {8'h0, axi_rd_data[55:0]};     
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h14;         //e;    
   
`elsif RAW16 
//output logic [7:0]  wstrb;           //write data strobes from AXI master via the write data channel
//output logic [63:0] wdata;           //write data (pixel data) from AXI master via the write data channel
logic               wdata1_vld_raw16;
logic               wdata2_vld_raw16;
logic               wdata3_vld_raw16;
logic               wdata4_vld_raw16;
logic [15:0]        wdata1_raw16;
logic [31:0]        wdata2_raw16;
logic [47:0]        wdata3_raw16;
logic [63:0]        wdata4_raw16;
logic [63:0]        data_width;      //data width determining the data strobe in AXI master for transmitting the data
logic [15:0]        axi_data_in;     //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [15:0]        axi_rd_data;     //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 17'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [15:0]} : 17'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en)	awaddr <= BASE_ADDR_RAW16;   //burst start address  

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RGB888_565_555_444_RAW7_10_14_16;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB565_55_444_RAW16_yuv4208_4228;
 
//data width determining the data strobe in AXI master for transmitting the data 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 64'h0; 						   
  else if(data_length_vld) data_width <= 64'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_RGB565_555_444_RAW14_16;  

//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_COMMON - 1;   
 
//first incoming pixel data read from AXI FIFO for RAW16 is stored in the regsietr   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata1_vld_raw16, wdata1_raw16} <= 17'h0;
  else {wdata1_vld_raw16, wdata1_raw16}  <= (wvalid & wready & (!(axi_empty))) ? {1'b1,axi_rd_data[15:0]} : 17'h0;
 
//second incoming pixel data read from AXI FIFO for RAW16 is stored in the regsietr along with the data from wdata1_raw16 register  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata2_vld_raw16, wdata2_raw16} <= 33'h0;
  else {wdata2_vld_raw16, wdata2_raw16} <= (wdata1_vld_raw16 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[15:0],wdata1_raw16[15:0]}} : 33'h0;  

//third incoming pixel data read from AXI FIFO for RAW16 is stored in the regsietr along with the data from wdata2_raw16 register    
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata3_vld_raw16, wdata3_raw16} <= 49'h0;
  else {wdata3_vld_raw16, wdata3_raw16} <= (wdata2_vld_raw16 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[15:0],wdata2_raw16[31:0]}} : 49'h0; 

//fourth incoming pixel data read from AXI FIFO for RAW16 is stored in the regsietr along with the data from wdata3_raw16 register  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata4_vld_raw16, wdata4_raw16} <= 65'h0;
  else {wdata4_vld_raw16, wdata4_raw16} <= (wdata3_vld_raw16 & wvalid & wready & (!(axi_empty))) ? {1'b1,{axi_rd_data[15:0],wdata3_raw16[47:0]}} : 65'h0;   

//write data (pixel data) from AXI master via the write data channel   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0;
  else wdata <= wdata4_vld_raw16 ? wdata4_raw16[63:0] : 64'h0;      
 
 always_ff @(posedge aclk or negedge areset_n)
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h16;          //10;    
  
`elsif RAW20 
//output logic [15:0]  wstrb;           //write data strobes from AXI master via the write data channel
//output logic [127:0] wdata;           //write data (pixel data) from AXI master via the write data channel
logic                wvalid1_raw20;
logic                wvalid2_raw20;
logic [39:0]         wdata1_raw20;
logic [79:0]         wdata2_raw20;
logic [127:0]        data_width;      //data width determining the data strobe in AXI master for transmitting the data
logic [39:0]         axi_data_in;     //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [39:0]         axi_rd_data;     //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 41'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [39:0]} : 41'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_RAW20;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE4;
  //AWSIZE_RGB666_RAW20_24_28_yuv420e_42210;		

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW20_yuv420_42210;     

//data width determining the data strobe in AXI master for transmitting the data
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 128'h0;						   
  else if(data_length_vld) data_width <= 128'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_128; //DWIDTH_RGB888_666_RAW20;  
 
//transaction length from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_COMMON - 1;     

//first incoming pixel data read from AXI FIFO for RAW20 is stored in the regsietr    
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvalid1_raw20, wdata1_raw20} <= 41'h0;
  else {wvalid1_raw20, wdata1_raw20}  <= (wvalid & wready & (!(axi_empty))) ? {1'b1, axi_rd_data[39:0]} : 41'h0;   

//second incoming pixel data read from AXI FIFO for RAW20 is stored in the regsietr along with the data from wdata1_raw20 register    
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvalid2_raw20, wdata2_raw20} <= 81'h0;
  else {wvalid2_raw20, wdata2_raw20}  <= (wvalid & wready & (!(axi_empty))) ? {1'b1, {axi_rd_data[39:0], wdata1_raw20}}  : 81'h0;     

//write data (pixel data) from AXI master via the write data channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 128'h0;
  else wdata <= (wvalid2_raw20 & wvalid & wready & (!(axi_empty))) ? {48'h0, wdata2_raw20[79:0]} : 128'h0;   

always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h20;            //14;    
  
`elsif RAW24 
//output logic [11:0]  wstrb;              //write data strobes from AXI master via the write data channel
//output logic [127:0] wdata;              //write data (pixel data) from AXI master via the write data channel
logic                wvld1_raw24;
logic                wvld2_raw24;
logic                wvld3_raw24;
logic                wvld4_raw24;
logic [23:0]         wdata1_raw24;
logic [47:0]         wdata2_raw24;
logic [71:0]         wdata3_raw24;
logic [95:0]         wdata4_raw24;
logic [95:0]         data_width;         //data width determining the data strobe in AXI master for transmitting the data
logic [23:0]         axi_data_in;        //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [23:0]         axi_rd_data;        //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 25'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [23:0]} : 25'h0;

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_RAW24;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE4;
  //AWSIZE_RGB666_RAW20_24_28_yuv420e_42210;			

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW24;   

//data width determining the data strobe in AXI master for transmitting the data
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)   data_width <= 96'h0;					   
  else if(data_length_vld) data_width <= 96'h0;
  else if(axi_wr_en) data_width <= DWIDTH_128; //DWIDTH_RAW24;  
 
//transaction length from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_COMMON - 1;   

//first incoming pixel data read from AXI FIFO for RAW24 is stored in the regsietr    
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvld1_raw24, wdata1_raw24} <= 25'h0;
  else {wvld1_raw24, wdata1_raw24} <= (wvalid & wready & (!(axi_empty))) ? {1'b1, axi_rd_data[23:0]} : 25'h0;   

//second incoming pixel data read from AXI FIFO for RAW24 is stored in the regsietr along with the data from wdata1_raw24 register    
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvld2_raw24, wdata2_raw24} <= 49'h0;
  else {wvld2_raw24, wdata2_raw24} <= (wvld1_raw24 & wvalid & wready & (!(axi_empty))) ? {1'b1, {axi_rd_data[23:0], wdata1_raw24[23:0]}} : 49'h0;   

//third incoming pixel data read from AXI FIFO for RAW24 is stored in the regsietr along with the data from wdata2_raw24 register  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvld3_raw24, wdata3_raw24} <= 73'h0;
  else {wvld3_raw24, wdata3_raw24} <= (wvld2_raw24 & wvalid & wready & (!(axi_empty))) ? {1'b1, {axi_rd_data[23:0], wdata2_raw24[47:0]}} : 73'h0;   

//fourth incoming pixel data read from AXI FIFO for RAW24 is stored in the regsietr along with the data from wdata3_raw24 register  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wvld4_raw24, wdata4_raw24} <= 97'h0;
  else {wvld4_raw24, wdata4_raw24} <= (wvld3_raw24 & wvalid & wready & (!(axi_empty))) ? {1'b1, {axi_rd_data[23:0], wdata3_raw24[71:0]}} : 97'h0;     

//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 128'h0;
  else wdata <= (wvld4_raw24 & wvalid & wready & (!(axi_empty))) ? {32'h0, wdata4_raw24[95:0]} : 128'h0;    

always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h24;              //18;   
  
`elsif RAW28 
//output logic [13:0]  wstrb;            //write data strobes from AXI master via the write data channel
//output logic [127:0] wdata;            //write data (pixel data) from AXI master via the write data channel
logic                wdata_vld1_raw28;
logic                wdata_vld2_raw28;
logic [55:0]         wdata1_raw28;
logic [111:0]        wdata2_raw28;
logic [111:0]        data_width;       //data width determining the data strobe in AXI master for transmitting the data
logic [55:0]         axi_data_in;      //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [55:0]         axi_rd_data;      //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 57'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [55:0]} : 57'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_RAW28;   //burst start address 			

//transaction size from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE4;
  //AWSIZE_RGB666_RAW20_24_28_yuv420e_42210;		

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= {(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW28;    

//data width determining the data strobe in AXI master for transmitting the data
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) data_width <= 112'h0;			   
  else if(data_length_vld) data_width <= 112'h0;
  else if(axi_wr_en) data_width <= DWIDTH_128; //DWIDTH_RAW28;   

//transaction length from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_COMMON - 1;  

//first incoming pixel data read from AXI FIFO for RAW28 is stored in the regsietr    
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata_vld1_raw28, wdata1_raw28} <= 57'h0;
  else {wdata_vld1_raw28, wdata1_raw28} <= (wvalid & wready & (!(axi_empty))) ? {1'b1, axi_rd_data[55:0]} : 57'h0; 

//second incoming pixel data read from AXI FIFO for RAW28 is stored in the regsietr along with the data from wdata1_raw28 register  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) {wdata_vld2_raw28, wdata2_raw28} <= 113'h0;
  else {wdata_vld2_raw28, wdata2_raw28} <= (wdata_vld1_raw28 & wvalid & wready & (!(axi_empty))) ? {1'b1, {axi_rd_data[55:0], wdata1_raw28[55:0]}} : 113'h0;  

//write data (pixel data) from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 128'h0;
  else wdata <= (wdata_vld2_raw28 & wvalid & wready & (!(axi_empty))) ? {1'b1, {16'h0, wdata2_raw28[111:0]}} : 128'h0;    
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h28;           //1c;    
   
`elsif RAW8  //deafult as RAW8
//output logic       wstrb;       //write data strobes from AXI master via the write data channel
//output logic [7:0] wdata;       //write data (pixel data) from AXI master via the write data channel
logic [7:0]        data_width;  //data width determining the data strobe in AXI master for transmitting the data
logic [7:0]        axi_data_in; //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [7:0]        axi_rd_data; //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 9'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [7:0]} : 9'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_RAW8;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE_RAW8;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= 1'b0; //{(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= 1'b0; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW8_ESC;   

//data width determining the data strobe in AXI master for transmitting the data
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 8'h0;					   
  else if(data_length_vld) data_width <= 8'h0;
  else if(axi_wr_en) data_width <= DWIDTH_8; //DWIDTH_RAW8_ESC;   		

//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_RAW8 - 1;  
 
//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 8'h0;
  else if(rd_dvld) wdata <= axi_rd_data[7:0];    
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h8;  

`elsif LEGACY_YUV420_8b
logic [63:0]        data_width;  //data width determining the data strobe in AXI master for transmitting the data
logic [47:0]        axi_data_in; //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [47:0]        axi_rd_data; //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 49'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [47:0]} : 49'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_LYUV4208;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= 8'h0; //{(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= 8'h0; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB888_RAW12_lyuv4208;   

//data width determining the data strobe in AXI master for transmitting the data
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 64'h0;					   
  else if(data_length_vld) data_width <= 64'h0;
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_LYUV4208_4208e_42010o_4228;   		

//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_COMMON - 1;  
 
//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 32'h0;
  else if(rd_dvld) wdata <= {16'h0, axi_rd_data[47:0]};    
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h42080;  

`elsif YUV420_8b
logic [63:0]        data_width;  //data width determining the data strobe in AXI master for transmitting the data
logic [63:0]        axi_data_in; //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [63:0]        axi_rd_data; //data read from AXI FIFO and is forwarded to the Application Layer via AXI master
//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 65'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [63:0]} : 65'h0; 
  
//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_YUV4208;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o;
  //((yuv_ctr[0] == 1'b1)) ? : AWSIZE_RAW6_yuv4208_odd : AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o;	  

//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0; 
  else if(rd_dvld) wdata <= axi_rd_data[63:0];   

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)            wstrb <= 8'h0; //{(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= 8'h0; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB565_55_444_RAW16_yuv4208_4228;
  
   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 'h0;					   
  else if(data_length_vld) data_width <= 'h0;
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_LYUV4208_4208e_42010o_4228;     
 // DWIDTH_LYUV4208_4208e_42010o_4228       = 64;
 // DWIDTH_YUV4208_ODD                      = 32;
 
//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <=   TOTAL_TRANSFERS_COMMON - 1;                                      //TOTAL_TRANSFERS_RAW6_12_24_ly4208 - 1;   

always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h42081;  

`elsif YUV420_10b
logic [127:0]       data_width;  //data width determining the data strobe in AXI master for transmitting the data
logic [79:0]        axi_data_in; //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [79:0]        axi_rd_data; //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 81'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [79:0]} : 81'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_YUV42010;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE4;
  //AWSIZE_RGB666_RAW20_24_28_yuv420e_42210;
  //((yuv_ctr[0] == 1'b1)) ? : AWSIZE_RAW6_yuv4208_odd : AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o;	  

//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 128'h0; 
  else if(rd_dvld) wdata <= {48'h0, axi_rd_data[79:0]};   

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)            wstrb <= 16'h0; //{(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= 16'h0; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW20_yuv420_42210;
  
   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 128'h0;					   
  else if(data_length_vld) data_width <= 128'h0;
  else if(axi_wr_en) data_width <= DWIDTH_128; //DWIDTH_YUV42010e_42210;     
  
//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <= TOTAL_TRANSFERS_COMMON - 1;                                         //TOTAL_TRANSFERS_RAW6_12_24_ly4208 - 1;     

always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h42010;  

`elsif YUV422_8b
logic [63:0]        data_width;  //data width determining the data strobe in AXI master for transmitting the data
logic [63:0]        axi_data_in; //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [63:0]        axi_rd_data; //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 65'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [63:0]} : 65'h0; 

//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_YUV4228;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE3;
  //AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o;
  //((yuv_ctr[0] == 1'b1)) ? : AWSIZE_RAW6_yuv4208_odd : AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o;	  

//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 64'h0; 
  else if(rd_dvld) wdata <= axi_rd_data[63:0];   

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)            wstrb <= 8'h0; //{(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= 8'h0; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RGB565_55_444_RAW16_yuv4208_4228;
  
   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 'h0;					   
  else if(data_length_vld) data_width <= 'h0;
  else if(axi_wr_en) data_width <= DWIDTH_64; //DWIDTH_LYUV4208_4208e_42010o_4228;     

//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <=  TOTAL_TRANSFERS_COMMON - 1;                                       //TOTAL_TRANSFERS_RAW6_12_24_ly4208 - 1;   

always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h4228;  

`elsif YUV422_10b	
logic [79:0]        data_width;  //data width determining the data strobe in AXI master for transmitting the data
logic [79:0]        axi_data_in; //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [79:0]        axi_rd_data; //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 81'h0;
  else {axi_wr_en, axi_data_in} <= (rx_pixel_dvalid & (!(axi_full))) ? {1'b1, rx_pixel_data [79:0]} : 81'h0; 	
  
//transaction address from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  else if(data_length_vld) awaddr <= 32'h0;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_YUV42210;   //burst start address

//transaction size from AXI master in write address channel						
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else if(data_length_vld) awsize <= 3'h0;
  else  if (axi_wr_en) awsize <= AWSIZE4;
  //AWSIZE_RGB666_RAW20_24_28_yuv420e_42210;
  //((yuv_ctr[0] == 1'b1)) ? : AWSIZE_RAW6_yuv4208_odd : AWSIZE_RAW12_lyuv4208_yuv4208e_4228_42010o;	  

//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 128'h0; 
  else if(rd_dvld) wdata <= {48'h0, axi_rd_data[79:0]};   

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)            wstrb <= 16'h0; //{(`wstrb){1'b0}};
  else if(data_length_vld) wstrb <= 16'h0; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW20_yuv420_42210;
  
   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 'h0;					   
  else if(data_length_vld) data_width <= 'h0;
  else if(axi_wr_en) data_width <= DWIDTH_128; //DWIDTH_YUV42010e_42210;   

//transaction length from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else if(data_length_vld) awlen <= 8'h0;
  else if(axi_wr_en) awlen <=  TOTAL_TRANSFERS_COMMON - 1;                                       //TOTAL_TRANSFERS_RAW6_12_24_ly4208 - 1;     
	
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'h42210;  	
	
`elsif RxALP_LP_SELECT //ALP Mode
//logic                wdata_vld1_raw28;
//logic                wdata_vld2_raw28;
//logic [55:0]         wdata1_raw28;
//logic [111:0]        wdata2_raw28;
logic [63:0]        data_width;       //data width determining the data strobe in AXI master for transmitting the data
logic [15:0]         axi_data_in;      //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [15:0]         axi_rd_data;      //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 17'h0;
  else {axi_wr_en, axi_data_in} <= (rxalpcode_reg_vld & (!(axi_full))) ? {1'b1, rxalpcode_reg [15:0]} : 17'h0;  

//transaction address from AXI master in write address channel
//localparam BASE_ADDR_ALP = 32'hA000_0000;  // ALP buffer base
//localparam TOTAL_TRANSFERS_ALPMODE = 10;
//logic [31:0] alp_write_ptr = 32'h0;          // Write pointer (in bytes)

// For each ALP write (when all 4 lanes valid)
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  //else if(data_length_vld) awaddr <= 32'h0;
  //else if(!wready) awaddr <= awaddr;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_ALP;   //burst start address    

//transaction size from AXI master in write address channel						   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else awsize <= 3'h3; //16-bit (2 bytes) --> awsize = 3'h1; 32-bit (4 bytes) --> awsize = 3'h2; 64-bit (8 bytes) ---> awsize = 3'h3;
  //else if(data_length_vld) awsize <= 3'h0;
  //else  if (axi_wr_en) awsize <= AWSIZE_RGB888_565_555_444_RAW7_10_14_16;	

//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb) {1'b0}}; //'h0; //{(data_width/8){1'b0}};
 // else if(data_length_vld) wstrb <= {(`wstrb) {1'b0}}; //'h0; //{(data_width/8){1'b0}}; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_ALP;      

//data width determining the data strobe in AXI master for transmitting the data						   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 64'h0; 						   
  //else if(data_length_vld) data_width <= 64'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_ALPMODE;
 
//transaction length from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else          awlen <= 8'h0; //for a single transfer burst which is common in ALP
  // else if(data_length_vld) awlen <= 8'h0;
  // else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_RGB888 - 1;    

//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 16'h0;
  else if(rd_dvld) wdata <= axi_rd_data[15:0];   
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'ha;   	  
  
`else //Escape Mode
logic [7:0]        data_width;       //data width determining the data strobe in AXI master for transmitting the data
logic [7:0]         axi_data_in;      //input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller
logic [7:0]         axi_rd_data;      //data read from AXI FIFO and is forwarded to the Application Layer via AXI master

//input data to AXI FIFO from byte to pixel converter in CSI2 Rx Controller along with the corresponding valid
always_ff @(posedge cphy_rxwordclkhs or negedge areset_n)
  if(~areset_n) {axi_wr_en, axi_data_in} <= 9'h0;
  else {axi_wr_en, axi_data_in} <= (rxdataesc_reg_vld & (!(axi_full))) ? {1'b1, rxdataesc_reg [7:0]} : 9'h0;  

//transaction address from AXI master in write address channel
//localparam BASE_ADDR_ESC = 32'hB000_0000;  // ALP buffer base
//localparam TOTAL_TRANSFERS_ESCMODE = 10;
//localparam WSTRB_ESC = 1;
//localparam DWIDTH_ESCMODE = 8;
//logic [31:0] alp_write_ptr = 32'h0;          // Write pointer (in bytes)

// For each ALP write (when all 4 lanes valid)
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               awaddr <= 32'h0;
  //else if(data_length_vld) awaddr <= 32'h0;
  //else if(!wready) awaddr <= awaddr;
  else  if (axi_wr_en) awaddr <= BASE_ADDR_ESC;   //burst start address    

//transaction size from AXI master in write address channel						   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awsize <= 3'h0;
  else awsize <= 3'h0; //1 byte transfers - Escape Mode data comes in individual bytes (RxDataEsc[7:0]);
  
//write data strobes from AXI master via the write data channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)               wstrb <= {(`wstrb) {1'b0}}; //'h0; //{(data_width/8){1'b0}};
 // else if(data_length_vld) wstrb <= {(`wstrb) {1'b0}}; //'h0; //{(data_width/8){1'b0}}; //{(`wstrb){1'b0}};
  else if(axi_wr_en)       wstrb <= WSTRB_RAW8_ESC;      

//data width determining the data strobe in AXI master for transmitting the data						   
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  data_width <= 8'h0; 						   
  //else if(data_length_vld) data_width <= 64'h0; 
  else if(axi_wr_en) data_width <= DWIDTH_RAW8_ESC;
 
//transaction length from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awlen <= 8'h0;
  else          awlen <= 8'h0; //for a single transfer burst which is common in ESC Mode
  // else if(data_length_vld) awlen <= 8'h0;
  // else if(axi_wr_en)       awlen <= TOTAL_TRANSFERS_RGB888 - 1;    

//write data (pixel data) from AXI master via the write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wdata <= 8'h0;
  else if(rd_dvld) wdata <= axi_rd_data[7:0];   
  
always @(posedge aclk or negedge areset_n) 
    if (!areset_n) awid <= 32'h0;
    else   awid <= 32'he;  	  

 `endif

always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) axi_empty_r <= 1'b0;
  else axi_empty_r <= axi_empty;

//control signal indication that the data type from the register is valid 
assign data_type_rx_reg_vld = (((data_type_rx_reg >= 6'h20) & (data_type_rx_reg <= 6'h24)) |
                              ((data_type_rx_reg >= 6'h26) & (data_type_rx_reg <= 6'h2f))); 

//a new burst starts when the FIFO holds data, no burst is in progress and the data type is valid
//(the burst attributes awaddr/awlen/awsize/wstrb ... were loaded when the first pixel was written)
wire burst_start = (!burst_active) & (!axi_empty) & (data_type_rx_reg_vld | rxalpnibble_reg_vld | rxdataesc_reg_vld);

always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) burst_active <= 1'b0;
  else if(data_length_vld) burst_active <= 1'b0;
  else if(burst_start)     burst_active <= 1'b1;

//valid indicator from master in axi write address channel: one AW per burst, held until awready
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awvalid <= 1'b0;
  else if(awvalid & awready) awvalid <= 1'b0;
  else if(burst_start)       awvalid <= 1'b1;

//valid indicator from master in axi write data channel: set when a FIFO word reaches wdata, held until wready
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wvalid <= 1'b0;
  else if(rd_dvld)           wvalid <= 1'b1;
  else if(wvalid & wready)   wvalid <= 1'b0;

//waits for 1 us to receive wready, if not, flags error 
//logic [9:0] wready_wait_ctr;
always_ff @(posedge aclk or negedge areset_n)
 if(~areset_n) wready_wait_ctr <= 10'h0;
 else if(wready | (wready_wait_ctr == 10'h3e7)) wready_wait_ctr <= 10'h0;
 else if(wvalid) wready_wait_ctr <= wready_wait_ctr + 10'h1; 
 
//burst attribute from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awburst <= 2'h0;
  else if(data_length_vld) awburst <= 2'h0;
  else if(axi_wr_en)       awburst <= AWBURST_INCR;  

//memory attributes from AXI master in write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awcache <= 4'h0;
  else if(data_length_vld) awcache <= 4'h0;
  else  if(axi_wr_en)      awcache <= AWCACHE_SEL;  

//access attributes from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awprot <= 3'h0;
  else if(data_length_vld) awprot <= 3'h0;
  else if(axi_wr_en)       awprot <= AWPROT_SEL;

//exclusive access indicator from AXI master in axi write address channel  
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n)  awlock <= 1'b0;
  else if(data_length_vld) awlock <= 1'b0;
  else if(axi_wr_en)       awlock <= AWLOCK_SEL;  

//QoS identifier from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awqos <= 4'h0;
  else if(data_length_vld) awqos <= 4'h0;
  else  if(axi_wr_en)      awqos <= AWQOS_SEL;
 
//region identifier from AXI master in write address channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awregion <= 4'h0;
  else if(data_length_vld) awregion <= 4'h0;
  else if(axi_wr_en)       awregion <= AWREGION_SEL;  
 
//user-defined extension to a request from AXI master in write address channel
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) awuser <= 1'b0; //AWUSER_WIDTH'h0;
  else       awuser <= AWUSER_SEL;
 
//user-defined extension to a request from AXI master in write data channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) wuser <= 1'b0; //WUSER_WIDTH'h0;
  else       wuser <= WUSER_SEL;

//ready indicator from AXI master in write response channel 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) bready <= 1'b0;
  else if(bvalid & bready) bready <= 1'b0;
  else if(wvalid)  bready <= 1'b1;

//error indication from axi slave is forwarded to the internal CSI2 Rx Controller register
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) axim_err <= 1'b0;
  else axim_err <= ((bresp == 2'h2) |  (bresp == 2'h3));
 
//status indication from axi slave is forwarded to the internal CSI2 Rx Controller register 
always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) axim_stats <= 2'h0;
  else       axim_stats <= (bresp == 2'h0) ? 2'h0:   //OKAY
                        (bresp == 2'h1) ? 2'h1:   //EXOKAY
                        (bresp == 2'h2) ? 2'h2:   //SLVERR
                        (bresp == 2'h3) ? 2'h3:   //DECERR 
						2'h0;
						//axim_sts;

//always_ff @(posedge aclk or negedge areset_n)
  //if(~areset_n) axim_status <= 2'h0;
  //else          axim_status <= axim_stats;

always_ff @(posedge aclk or negedge areset_n)
  if(~areset_n) axim_sts <= 2'h0;
  else          axim_sts <= axim_stats;
						
						         //         2'h0;
//Treat EXOKAY as OKAY (Recommended for CSI-2)
//Since CSI-2 typically involves non-exclusive streaming writes (e.g., writing frame data to memory), 
//you can safely treat EXOKAY identically to OKAY:
  
endmodule  
//=========================================================================================================================================================
//Calculation of awsize and total transfers based on the word count of each data type//

//RGB888 ---> AWBURST = 0B01 (INCR) (as address increments sequentially after each transfer).
//AWSIZE = 0b011 (8 bytes per transfer with 6 bytes valid)
//AWLENGTH = 127 //239 (1 transfer since 6 bytes fit into one 8 byte transfer with padding) (1920/8 = 240 clockc cycles) //1920/15 = 128
 //    localparam TOTAL_TRANSFERS = 128; //240;  // 1920B / 8B
  //  localparam ADDR_INCREMENT  = 16;  //8     // AWSIZE= 16 //8
 //  for (i = 0; i < TOTAL_TRANSFERS; i = i + 1) begin
 //  AWADDR <= AWADDR + ADDR_INCREMENT;
 
//RGB666 ---> 1440 bytes with 9 bytes per clock cycle 
//AWSIZE = 0b100 (16 bytes per transfer)
//AWLEN = 159 //0-159, 159 (N-1 (N = total number of transfers)); 
//WSTRB = 1FF
//AWADDR = Increment by 16

//RGB565/555/444/RAW16 ---> 1280 bytes with 2 bytes per clock cycle
//But collect 8 bytes and transmit per clock cycle 
//AWSIZE = 0b011 (8 bytes per transfer)
//AWLEN = 159 (160 transfers) (1280/8 = 160)
//WSTRB = FF
//AWADDR = Increments by 8

//RAW6 ---> 480 bytes with 3 bytes per clock cycle
//AWSIZE = 0b010 (4 bytes per transfer) 
//AWLEN = 159 (120 beats, 480/3 = 160 transfers, grouped as 480/4 = 120 beats, 4B per transfer)
//WSTRB = 7 (0111)
//AWADDR = Increments by 4

//RAW7 ---> 560 bytes with 7 bytes per clock cycle 
//AWSIZE = 0b011 (8 bytes per transfer)
//AWLEN = 79 (70 beats, 560/7 = 80 transfers, grouped as 70 beats 8B per transfer)
//WSTRB = 7f (0111 1111)
//AWADDR = Increments by 8

//RAW8 ----> 64 bytes with 1 byte per clock cycle
//AWSIZE = 0b000 (1 byte per transfer)
//AWLEN = 63 (64 transfers)
//WSTRB = 0001
//AWADDR = Imcrement by 1

//RAW10 ---> 800 bytes with 5 bytes per clock cycle 
//AWSIZE = 0b011 (8 bytes per transfer) 
//AWLEN = 159 (800/5 = 160 transfers, grouped as 800/8 = 100 beats 8B per transfer)
//WSTRB = 1f (0001 1111)
//AWADDR = Increments by 8

//RAW12 ---> 960 bytes with 3 bytes per clock cycle
//we take 960 bytes with 6 bytes per clock cycle since 960/6 = 160 < 255
//AWSIZE = 0b011 (8 bytes per transfer)
//AWLEN = 119 (960/6 = 160 transfers, grouped as 960/8 = 120 beats, 8B per transfer)
//WSTRB = 3f (0011_1111)
//AWADDR = Increments by 8
/*
//RAW12 ---> 960 bytes with 3 bytes per clock cycle
//AWSIZE = 0b010 (4 bytes per transfer)
//AWLEN = 239 (960/3 = 320 transfers, grouped as 960/4 = 240 beats, 4B per transfer)
//WSTRB = 7 (0111)
//AWADDR = Increments by 4*/

//RAW14 ---> 1120 bytes with 7 bytes per clock cycle
//AWSIZE = 0b011 (8 bytes per transfer)
//AWLEN = 159 (1120/7 = 160 transfers, grouped as 1120/8 = 140 beats, 8B per transfer)
//WSTRB = 7f (0111 1111
//AWADDR = Increments by 8

//RAW20 ---> 1600 bytes with 5 bytes per clock cycle 
//collect 10 bytes in 2 clock cycles since AXI4 maximum 255 transfers
//AWSIZE = 0b100 (16 bytes per transfer)
//AWLEN = 159 (1600/10 = 160 transfers, grouped as 1600/16 = 100 beats, 16B per transfer) //
//WSTRB = 3ff (0011 1111 1111)
//AWADDR = Increments by 16 

//RAW24 ---> 1920 bytes with 3 bytes per clock cycle //data width = 12x8 = 96 bits
//collect 12 bytes in 4 clock cycles 
//AWSIZE = 0b100 (16 bytes per transfer)
//AWLEN = 159 (1920/12 = 160 transfers, grouped as 1920/16 = 120 beats, 16B per transfer)
//WSTRB = fff (1111 1111 1111)
//AWADDR = Increments by 16 

//RAW28 ---> 2240 with 7 bytes per clock cycle 
//collect 14 bytes in 2 clock cycles since 2240/7 = 320 > 256
//AWSIZE = 0b100 (16 bytes per transfer)
//AWLENGTH = 159 (2240/14 = 160 transfers, grouped as 2240/16 = 140 beats, 16B per transfer)
//WSTRB =  3fff (0011 1111 1111 1111)
//AWADDR = Increments by 16
//===========================================================================================================================================================
