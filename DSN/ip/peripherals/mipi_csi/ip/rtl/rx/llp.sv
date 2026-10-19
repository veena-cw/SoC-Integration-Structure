
   
/*
C-PHY transmits 7 symbols per 16 bits (due to encoding efficiency)
For 16-bit width: cphy_rxwordclkhs = 1/7 of the symbol rate
cphy_rxwordclkhs = 1 GHz ? 7 = 142.857 MHz
Symbol Rate: 1 GHz 
cphy_rxwordclkhs per lane: 142.857 MHz = 7 ns 
Total Data Width: 64 bits (4 lanes)
*/

//==================================================================================
//  Copyright (c) 2025 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: CSI2 Rx Controller
//  Module            				: cphy_llp_rx.sv
//  Primary Unit Owner                         	: veena@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//============================================================================================================================================================
// Description: The LLP module contains the logic of decoding the header and data based on the data received from LM layer byte-wise and forwards it to the
//BPUF Layer.
//============================================================================================================================================================


//ssp - synchronization short packet; gsp - generic short packet; glp - generic long packet; csps - chroma shifted pixel sampling;
//lm - lane management (merging); llp - low level protocol; bpuf - byte-to-pixel unpacking format;
//
//`include "sync_fifo.sv"
//`include "crc.sv"
// Code your design here
module llp_rx(
input               cphy_rxwordclkhs,                          //clock signal
input               rst_n,                                     //negative edge asynchronous reset
input               pkt_en,                                    //packet enable from lane management layer which indicates that the packet is active
input               rx_lane_sts_reg7,                          //C-PHY lane status register seventh bit indicating the start of transmission 
input               rx_lane_sts_reg4,                          //C-PHY lane status register fourth bit indicating the end of transmission  
//input               bp_valid,                                  //byte to pixel valid signal from byte bpuf layer
input               rx_lm_byte_vld,                            //valid control signal indicating that the byte data from lane management layer is valid
input [7:0]         rx_lm_byte_data,                           //byte data from lane management layer
  
output logic        llp_bp_vld,                                //valid control signal indicating that the byte data from LLP Layer to BPUF Layer is valid
//output logic      crc_err,                                   //error in crc (pulse signal)
//output logic      crc_err_vld,                               //error in crc is valid (level signal)
output logic        llp_err_vld,                               //error valid in llp due to crc or any error in the header field
output logic [2:0]  llp_err,                                   //error in llp due to crc or any error in the header field
output logic        long_pkt_vld,                              //control level signal indicating that the received data type is valid for long packet
output logic [5:0]  dtype_sts_reg,                             //data type status register updating to the csi2 internal register
output logic [7:0]  llp_bp_data                                //byte data from LLP Layer to BPUF Layer
);
  

logic hdr_vld_rx_shrt;                                         //control signal indicating that the incoming header data for short packet is valid
logic hdr_vld_rx_long;                                         //control signal indicating that the incoming header data for long packet is valid
//logic crc_out_vld_rx;                                          //output signal from crc module indicating that the crc output data is valid
logic hdr_crcvld_out_short;                                    //control signal indicating that the crc is valid for the haeader based on crc_out_vld_rx 
                                                               //for short packet
logic hdr_crcvld_out_long;                                     //control signal indicating that the crc is valid for the haeader based on crc_out_vld_rx
                                                               //for long packet
logic crc_data_vld;                                            //control signal indication that it is the start of data after header1, sync and header2
                                                               //and is fed as input to crc module for calculation of data CRC
logic data_crcvld_out_long;                                    //control signal indicating that the crc is valid for the data based on crc_out_vld_rx
                                                               //for long packet
logic data_end_vld;                                            //control signal indication that it is the end of data transmission (pulse)
logic data_strt;                                               //level signal which gets asserted when the data (after header) starts and gets deasserted 
                                                               //when the payload data reaches the maximum word count 
logic      crc_err;                                            //error in crc (pulse signal)
logic      crc_err_vld;                                        //error in crc is valid (level signal)
logic ssp_frame_strt_vld;                                      //control signal indication that the received frame start is valid for ssp
logic ssp_frame_end_vld;                                       //control signal indication that the received frame end is valid for ssp
logic ssp_line_strt_vld;                                       //control signal indication that the received line start is valid for ssp
logic ssp_line_end_vld;                                        //control signal indication that the received line end is valid for ssp
logic ssp_dtype_vld;                                           //control signal indication that the received data type field is valid for ssp
logic gsp_code1_vld;                                           //control signal indication that the received code1 field is valid for gsp
logic gsp_code2_vld;                                           //control signal indication that the received code2 field is valid for gsp
logic gsp_code3_vld;                                           //control signal indication that the received code3 field is valid for gsp
logic gsp_code4_vld;                                           //control signal indication that the received code4 field is valid for gsp
logic gsp_code5_vld;                                           //control signal indication that the received code5 field is valid for gsp
logic gsp_code6_vld;                                           //control signal indication that the received code6 field is valid for gsp
logic gsp_code7_vld;                                           //control signal indication that the received code7 field is valid for gsp
logic gsp_code8_vld;                                           //control signal indication that the received code8 field is valid for gsp
logic gsp_dtype_vld;                                           //control signal indication that the received data type field is valid for gsp
logic glp_null_vld;                                            //control signal indication that the null field is valid for glp
logic blank_data_vld;                                          //control signal indication that the blank data field is valid for glp
logic emb_8b_nimg_data_vld;                                    //control signal indication that the embedded eight bit non-image field is valid for glp
logic glp_dtype1_vld;                                          //control signal indication that the data type 1 field is valid for glp
logic glp_dtype2_vld;                                          //control signal indication that the data type 2 field is valid for glp
logic glp_dtype3_vld;                                          //control signal indication that the data type 3 field is valid for glp
logic glp_dtype4_vld;                                          //control signal indication that the data type 4 field is valid for glp
logic glp_dtype_vld;                                           //control signal indication that the received data type field is valid for glp
logic yuv420_8b_vld;                                           //control signal indication that the yuv420 8-bit field is valid for yuv
logic yuv420_10b_vld;                                          //control signal indication that the yuv420 10-bit field is valid for yuv
logic legacy_yuv420_8b_vld;                                    //control signal indication that the legacy yuv420 8-bit field is valid for yuv
logic yuv420_8b_csps_vld;                                      //control signal indication that the yuv420 8-bit csps field is valid for yuv
logic yuv420_10b_csps_vld;                                     //control signal indication that the yuv420 10-bit csps field is valid for yuv
logic yuv422_8b_vld;                                           //control signal indication that the yuv422 8-bit field is valid for yuv
logic yuv422_10b_vld;                                          //control signal indication that the yuv422 10-bit field is valid for yuv
logic yuv_dtype_vld;                                           //control signal indication that the received data type field is valid for yuv
logic rgb444_vld;                                              //control signal indication that the received rgb444 field is valid for rgb
logic rgb555_vld;                                              //control signal indication that the received rgb555 field is valid for rgb
logic rgb565_vld;                                              //control signal indication that the received rgb565 field is valid for rgb
logic rgb666_vld;                                              //control signal indication that the received rgb666 field is valid for rgb
logic rgb888_vld;                                              //control signal indication that the received rgb888 field is valid for rgb
logic rgb_dtype_vld;                                           //control signal indication that the received data type field is valid for rgb
logic raw28_vld;                                               //control signal indication that the received raw28 data type field is valid for raw 
logic raw24_vld;                                               //control signal indication that the received raw24 data type field is valid for raw 
logic raw6_vld;                                                //control signal indication that the received raw6 data type field is valid for raw 
logic raw7_vld;                                                //control signal indication that the received raw7 data type field is valid for raw 
logic raw8_vld;                                                //control signal indication that the received raw8 data type field is valid for raw 
logic raw10_vld;                                               //control signal indication that the received raw10 data type field is valid for raw 
logic raw12_vld;                                               //control signal indication that the received raw12 data type field is valid for raw 
logic raw14_vld;                                               //control signal indication that the received raw14 data type field is valid for raw 
logic raw16_vld;                                               //control signal indication that the received raw16 data type field is valid for raw 
logic raw20_vld;                                               //control signal indication that the received raw20 data type field is valid for raw 
logic raw_dtype_vld;                                           //control signal indication that the received data type field is valid for raw
logic datatype_checker_err;                                    //error flag indication that the received data type field is not valid
logic hdr_rsvd_vld;                                            //control signal indication that the received header reserved field is valid and is zero
logic hdr_rsvd_err;                                            //error flag indication that the received header reserved field is not valid
logic wc_lsb_vld;                                              //control signal indication that the received lsb word count field is valid
logic wc_msb_vld;                                              //control signal indication that the received msb word count field is valid
logic wc_lsb_err;                                              //error flag indication that the received lsb word count field is not valid
logic wc_msb_err;                                              //error flag indication that the received msb word count field is not valid
logic eot_vld;                                                 //control signal indication that the end of transmission from c-phy register is valid
//logic long_pkt_vld;                                            //control level signal indicating that the received data type is valid for long packet
                                                               //and gets deasserted when the last word count is reached
logic shrt_pkt_vld;                                            //control level signal indicating that the received data type is valid for short packet
                                                               //and gets deasserted when the decoder counter reaches 5'h17 (end of header)
logic dstart;                                                  //pulse control signal indicating the start of the data (after header)
logic datatype_checker_vld;                                    //pulse control signal indicating that the received data type field is valid
logic rx_datatype_reg_vld;                                     //control level signal indicating that the received data type is valid (ssp/gsp/glp/raw/rgb/yuv)
//logic crc_valid_rx;                                            //input signal of crc indicating that the incoming crc is valid
logic rx_lm_byte_vld_r;                                        //control signal indicating that the incoming data from lm layer is valid
logic llp_rx_data_valid;                                       //control level signal indicating that the data is active; asserted when data starts
                                                               //after the header and gets deasserted when crc error is present
logic llp_rx_data_out_vld;                                     //control signal giving as input control to Rx Data FIFO in llp indicating that the data 
                                                               //after the header is valid and FIFO can start writing the data
logic data_end_valid;                                          //control pulse signal indicating that the data counter (based on the data type) 
                                                               //reached its maximum word count
logic data_end_valid_r;                                        //control level signal indicating that the last word count of data is reached;
                                                               //asserted when data_end_valid is high and deasserted when next state of transmission comes
logic data_strt_r;                                             //delay of data_strt to ensure data integrity by not losing any received data
logic long_pkt_vld_r;                                          //control signal indicating that the received long packet is valid (glp/rgb/yuv/raw) 
                                                               //and reaches zero when data word count reaches its maximum
logic shrt_pkt_vld_r;                                          //control signal indicating that the received short packet is valid (ssp/gsp) 
                                                               //and reaches zero when data word count reaches its maximum
logic llp_rd_vld;                                              //read enable signal given to Rx Data FIFO when the data payload reaches its 
                                                               //maximum word count and when FIFO is not empty
logic llp_empty;                                               //empty signal condition from Rx Data FIFO
logic llp_full;                                                //full signal condition from Rx Data FIFO
logic llp_rd_en;                                               //delay signal of llp_rd_vld to align in the same cycle with respect to read data
logic dtype_vld_chk;                                           //valid check condition of data type field
logic under_flow;  
logic stop; 
logic llp_violation_err;                                       //if data end valid is reached but data is still coming to llp 
logic llp_bp_vld_r;
logic [7:0] llp_bp_data_r; 
 
logic [1:0] vc_rx;                                             //received virtual channel bits from the header
logic [1:0] foot_ctr;                                          //counter to count the packet footer in the data field of long packet
logic [2:0] vcx_rx;                                            //received virtual channel extension bits from the header
logic [4:0] llp_dec_ctr;                                       //decoder counter in llp to count the header1, sync and header2 (duplicated header)
logic [5:0] dtype_ctr_raw8;                                    //counter to count for raw8 data type; it starts counting when the long packet data type
                                                               //for raw 8 is valid and returns to zero when it reaches its maximum word count limit 
logic [4:0] hdr_rsvd_rx;                                       //received header reserved bits from the header
logic [5:0] dtype_rx;                                          //received data type values from the header
logic [5:0] ssp_frame_strt_reg;                                //data type bits of ssp frame start
logic [5:0] ssp_frame_end_reg;                                 //data type bits of ssp frame end
logic [5:0] ssp_line_strt_reg;                                 //data type bits of ssp line start
logic [5:0] ssp_line_end_reg;                                  //data type bits of ssp line end
logic [5:0] gsp_code1_reg;                                     //data type bits of gsp code1
logic [5:0] gsp_code2_reg;                                     //data type bits of gsp code2
logic [5:0] gsp_code3_reg;                                     //data type bits of gsp code3
logic [5:0] gsp_code4_reg;                                     //data type bits of gsp code4
logic [5:0] gsp_code5_reg;                                     //data type bits of gsp code5
logic [5:0] gsp_code6_reg;                                     //data type bits of gsp code6
logic [5:0] gsp_code7_reg;                                     //data type bits of gsp code7
logic [5:0] gsp_code8_reg;                                     //data type bits of gsp code8
logic [5:0] glp_null_reg;                                      //data type bits of glp null
logic [5:0] blank_data_reg;                                    //data type bits of blank data in gsp 
logic [5:0] emb_8b_nimg_data_reg;                              //data type bits of embedded 8-bit non-image data in gsp 
logic [5:0] glp_dtype1_reg;                                    //data type bits of glp datatype 1
logic [5:0] glp_dtype2_reg;                                    //data type bits of glp datatype 2
logic [5:0] glp_dtype3_reg;                                    //data type bits of glp datatype 3
logic [5:0] glp_dtype4_reg;                                    //data type bits of glp datatype 4
logic [5:0] yuv420_8b_reg;                                     //data type bits of yuv420 8-bit in yuv datatype 
logic [5:0] yuv420_10b_reg;                                    //data type bits of yuv420 10-bit in yuv datatype 
logic [5:0] legacy_yuv420_8b_reg;                              //data type bits of legacy yuv420 8-bit in yuv datatype 
logic [5:0] yuv420_8b_csps_reg;                                //data type bits of yuv420 8-bit csps in yuv datatype 
logic [5:0] yuv420_10b_csps_reg;                               //data type bits of yuv420 10-bit csps in yuv datatype 
logic [5:0] yuv422_8b_reg;                                     //data type bits of yuv422 8-bit in yuv datatype 
logic [5:0] yuv422_10b_reg;                                    //data type bits of yuv422 10-bit in yuv datatype
logic [5:0] rgb444_reg;                                        //data type bits of rgb444 in rgb datatype
logic [5:0] rgb555_reg;                                        //data type bits of rgb555 in rgb datatype
logic [5:0] rgb565_reg;                                        //data type bits of rgb565 in rgb datatype
logic [5:0] rgb666_reg;                                        //data type bits of rgb666 in rgb datatype
logic [5:0] rgb888_reg;                                        //data type bits of rgb888 in rgb datatype
logic [5:0] raw28_reg;                                         //data type bits of raw28 in raw datatype
logic [5:0] raw24_reg;                                         //data type bits of raw24 in raw datatype
logic [5:0] raw6_reg;                                          //data type bits of raw6 in raw datatype
logic [5:0] raw7_reg;                                          //data type bits of raw7 in raw datatype
logic [5:0] raw8_reg;                                          //data type bits of raw8 in raw datatype
logic [5:0] raw10_reg;                                         //data type bits of raw10 in raw datatype
logic [5:0] raw12_reg;                                         //data type bits of raw12 in raw datatype
logic [5:0] raw14_reg;                                         //data type bits of raw14 in raw datatype
logic [5:0] raw16_reg;                                         //data type bits of raw16 in raw datatype
logic [5:0] raw20_reg;                                         //data type bits of raw20 in raw datatype
logic [8:0] dtype_ctr_raw6;                                    //counter to count for raw6 data type; it starts counting when the long packet data type
                                                               //for raw 6 is valid and returns to zero when it reaches its maximum word count limit
logic [7:0] crc_data_rx_shrt;                                  //header data is forwarded to crc module as input to find crc of short packet 
logic [7:0] data_field_lsb_rx;                                 //data field of received short packet (lsb bits)
logic [7:0] data_field_msb_rx;                                 //data field of received short packet (msb bits)
logic [7:0] llp_rx_data_out;                                   //input data to Rx Data FIFO in llp indicating that the data 
                                                               //after the header is valid and FIFO can start writing the data
logic [7:0] wc_lsb_rx;                                         //lsb bits of word count received from lm layer
logic [7:0] wc_msb_rx;                                         //msb bits of word count received from lm layer
logic [7:0] crc_data_rx;                                       //input data to crc module from llp after decoding the header and data to find crc
logic [7:0] hdr_chksum_lsb_rx;                                 //registering the lsb bits of the header checksum received from the lm layer
logic [7:0] hdr_chksum_msb_rx;                                 //registering the msb bits of the header checksum received from the lm layer
logic [7:0] wc_lsb_reg;                                        //word count lsb values based on the data type of long packet
logic [7:0] wc_msb_reg;                                        //word count msb values based on the data type of long packet
logic [7:0] rx_lm_byte_data_r;                                 //data register storing the input data from the lane management layer
logic [7:0] crc_data_rx_long;                                  //header data is forwarded to crc module as input to find crc of long packet
logic [7:0] crc_data;                                          //data is forwarded to crc module as input to find crc of long packet data payload
logic [7:0] crc_out_rx;                                        //crc output data from crc module
logic [7:0] dout_llp;                                          //data read from the Rx Data FIFO
logic [7:0] data_chksum_lsb_rx;                                //registering the lsb bits of the data checksum received from the lm layer
logic [7:0] data_chksum_msb_rx;                                //registering the msb bits of the data checksum received from the lm layer
logic [9:0] dtype_ctr_raw7;                                    //counter to count for raw7 data type; it starts counting when the long packet data type
                                                               //for raw 7 is valid and returns to zero when it reaches its maximum word count limit
logic [9:0] dtype_ctr_raw12;                                   //counter to count for raw12 data type; it starts counting when the long packet data type
                                                               //for raw 12 is valid and returns to zero when it reaches its maximum word count limit
logic [9:0] dtype_ctr_raw10;                                   //counter to count for raw10 data type; it starts counting when the long packet data type
                                                               //for raw 10 is valid and returns to zero when it reaches its maximum word count limit
logic [10:0] dtype_ctr_raw14;                                   //counter to count for raw14 data type; it starts counting when the long packet data type
                                                               //for raw 14 is valid and returns to zero when it reaches its maximum word count limit
logic [10:0] dtype_ctr_raw20;                                   //counter to count for raw20 data type; it starts counting when the long packet data type
                                                               //for raw 20 is valid and returns to zero when it reaches its maximum word count limit
logic [11:0] dtype_ctr_raw28;                                  //counter to count for raw28 data type; it starts counting when the long packet data type
                                                               //for raw 28 is valid and returns to zero when it reaches its maximum word count limit
logic [10:0] dtype_ctr888_24;                                   //counter to count for raw24/rgb888 data type; it starts counting when the long packet data type
                                                               //for raw24/rgb888 is valid and returns to zero when it reaches its maximum word count limit
logic [10:0] dtype_ctr666;                                      //counter to count for rgb666 data type; it starts counting when the long packet data type
                                                               //for rgb666 is valid and returns to zero when it reaches its maximum word count limit
logic [10:0] dtype_ctr565_555_444_16;                           //counter to count for rgb565/555/444/raw16 data type; it starts counting when the 
                                                               //long packet data type for rgb565/555/444/raw16 is valid and returns to zero when 
															   //it reaches its maximum word count limit
logic [9:0] dtype_ctr_lyuv4208;                                //
logic [9:0] dtype_ctr_yuv4208_odd;                             //
logic [9:0] dtype_ctr_yuv42010_odd;                            //
logic [10:0] dtype_ctr_yuv4208_even_4228;                      //
logic [10:0] dtype_ctr_yuv42010_even_42210;					   //									   
															   
logic [15:0] crc_reg_rx;                                       //crc data calculated from crc generator is stored in this register
logic [15:0] crc_hdr_reg;                                      //header checksum bits received from lm layer is stored in this register
logic [15:0] hdr_crcdata_out_short;                            //calculated crc data from crc generator module for short packet header
logic [15:0] hdr_crcdata_out_long;                             //calculated crc data from crc generator module for long packet header
logic [15:0] crc_data_reg;                                     //data checksum bits received from lm layer is stored in this register
logic [15:0] data_crcdata_out_long;                            //calculated crc data from crc generator module for long packet data
logic [3:0] FIFO_Status_out;

//FIFO instantiation  
FIFO_data  #(.DATA_WIDTH(8), .FIFO_DEPTH(4096), .PTR_SIZE(12)) llp_sync_fifo_inst (.clk(cphy_rxwordclkhs), .rst_n(rst_n), .wr(llp_rx_data_out_vld), 
            .data_in(llp_rx_data_out), .rd(llp_rd_vld), .data_out(dout_llp), .Empty(llp_empty), .Full(llp_full), .under_flow(under_flow),
            .stop(stop), .FIFO_Status_out(FIFO_Status_out));

//CRC instantiation for  short packet header
crc16 crc16_inst(.clk(cphy_rxwordclkhs), .rst_n(rst_n), .crc_valid_rx(hdr_vld_rx_shrt), .crc_data_rx(crc_data_rx_shrt), .crc_out_vld_rx(hdr_crcvld_out_short),
                .crc_out_rx(hdr_crcdata_out_short));

//CRC instantiation for  long packet header  
crc16 crc16_inst_long_hdr(.clk(cphy_rxwordclkhs), .rst_n(rst_n), .crc_valid_rx(hdr_vld_rx_long), .crc_data_rx(crc_data_rx_long), 
                         .crc_out_vld_rx(hdr_crcvld_out_long), .crc_out_rx(hdr_crcdata_out_long));
  
//CRC instantiation for  long packet data  
crc16 crc16_inst_long_data(.clk(cphy_rxwordclkhs), .rst_n(rst_n), .crc_valid_rx(crc_data_vld), .crc_data_rx(crc_data), .crc_out_vld_rx(data_crcvld_out_long),
                          .crc_out_rx(data_crcdata_out_long));
 
//read enable from the LLP Rx Data FIFO when the last payload is received and ensuring the FIFO is not empty 
//data will be flushed out when crc error is present else will be forwarded to the Byte-to-Pixel Unpacking Format Layer
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) llp_rd_vld <= 1'b0;
  else llp_rd_vld <= (data_end_valid_r & (!llp_empty));

//read enable delay from the LLP Data FIFO in order to align with the same clock cycle as of the data read from the FIFO  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) llp_rd_en <= 1'b0;
  else llp_rd_en <= llp_rd_vld; 

//LLP-BP Interface signal is forwarded the data to Byte-to-Pixel Unpacking Format Layer provided no crc error is observed   
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {llp_bp_vld, llp_bp_data} <= 9'h0;
  else  {llp_bp_vld, llp_bp_data} <=  (!llp_rd_vld) ? 9'h0 :  
                                   //((!llp_rd_en) | (!llp_rd_vld)) ? 9'h0 : 
                                      (llp_rd_en & ((!crc_err) | (!crc_err_vld) | (!llp_err_vld))) ? {1'b1, dout_llp[7:0]} : 9'h0;*/

 
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {llp_bp_vld_r, llp_bp_data_r} <= 9'h0;
  else  {llp_bp_vld_r, llp_bp_data_r} <=  (!llp_rd_vld) ? 9'h0 :  
                                   //((!llp_rd_en) | (!llp_rd_vld)) ? 9'h0 : 
                                      (llp_rd_en & ((!crc_err) | (!crc_err_vld) | (!llp_err_vld))) ? {1'b1, dout_llp[7:0]} : 9'h0;
 
 
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {llp_bp_vld, llp_bp_data} <= 9'h0;
  else  {llp_bp_vld, llp_bp_data} <= {llp_bp_vld_r, llp_bp_data_r};

//LLP Decoder counter to count the header and sync bits - cphy width - 16-bits per lane (64 bits for 4 lanes)
//header1 - 48 bits, appended rest MSB bits with 0; //sync - 3 bits per lane, appended rest MSB bits with 0 for each lane; 
//header2 - 48 bits, appended rest MSB bits with 0; (//total 192 bits or 24 bytes, so counter counts from 0 to 23 (hexadecimal of 23 is 17) - wrong) 
//(total 96 + 3 = 99 bits or 99/8 = 13 bytes 0 to 12 (hexadecimal of 12 is c) - right)
//13 x 4
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) llp_dec_ctr <= 5'h0;
  else if(llp_dec_ctr == 4'hc /*5'h17*/) llp_dec_ctr <= 5'h0;   
  else if(rx_lm_byte_vld) llp_dec_ctr <= llp_dec_ctr + 5'h1;
 
//end of the payload transmission indication from the c-phy register
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) eot_vld <= 1'b0;
  else eot_vld <= rx_lane_sts_reg4;

//end of the last payload data indication  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) data_end_vld <= 1'b0;
  else data_end_vld <= eot_vld; 

//start of the payload data  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) data_strt <= 1'b0;
  else if(data_end_valid) data_strt <= 1'b0;
  else if(llp_dec_ctr == 5'h17) data_strt <= 1'b1;

//validation of the long packet  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) long_pkt_vld <= 1'b0;
  else if((data_end_valid | data_end_valid_r) & (!rx_lm_byte_vld)) long_pkt_vld <= 1'b0;
  else if(glp_dtype_vld | yuv_dtype_vld | rgb_dtype_vld | raw_dtype_vld) long_pkt_vld <= 1'b1;
  
//validation of the short packet  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) shrt_pkt_vld <= 1'b0;
  else if((llp_dec_ctr == 5'h17) /*data_end_vld*/) shrt_pkt_vld <= 1'b0;
  else if(ssp_dtype_vld | gsp_dtype_vld) shrt_pkt_vld <= 1'b1;

//combinational logic indication of the start of the data payload 
//assign dstart = (llp_dec_ctr == 5'h17);

//start of the data payload
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if(~rst_n) dstart <= 1'b0;
    else dstart <= (llp_dec_ctr == 5'h17);
  
 //control register storing the input byte valid signal from the lane management layer  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_lm_byte_vld_r <= 1'b0;
  else rx_lm_byte_vld_r <= rx_lm_byte_vld;
  
//data register storing the input data from the lane management layer  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_lm_byte_data_r <= 8'h0;
  else rx_lm_byte_data_r <= rx_lm_byte_data;
 
//validation of short packet and long packet using combinational logic  
assign long_pkt_vld_r = data_end_vld ? 1'b0 : (glp_dtype_vld | yuv_dtype_vld | rgb_dtype_vld | raw_dtype_vld) ? 1'b1 : 1'b0;
assign shrt_pkt_vld_r = (llp_dec_ctr == 5'h17) /*data_end_vld*/ ? 1'b0 : (ssp_dtype_vld | gsp_dtype_vld) ? 1'b1 : 1'b0; //shrt_pkt_vld;

//validation of short synchronization packet datatype
assign ssp_dtype_vld = ssp_frame_strt_vld | ssp_frame_end_vld | ssp_line_strt_vld | ssp_line_end_vld;

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) ssp_frame_strt_vld <= 1'b0;
  else if(data_end_vld) ssp_frame_strt_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == ssp_frame_strt_reg[5:0])) ssp_frame_strt_vld <= 1'b1;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) ssp_frame_end_vld <= 1'b0;
  else if(data_end_vld) ssp_frame_end_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == ssp_frame_end_reg[5:0])) ssp_frame_end_vld <= 1'b1; 

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) ssp_line_strt_vld <= 1'b0;
  else if(data_end_vld) ssp_line_strt_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == ssp_line_strt_reg[5:0])) ssp_line_strt_vld <= 1'b1; 

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) ssp_line_end_vld <= 1'b0;
  else if(data_end_vld) ssp_line_end_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == ssp_line_end_reg[5:0])) ssp_line_end_vld <= 1'b1;   

//validation of generic short packet datatype
assign gsp_dtype_vld = (gsp_code1_vld | gsp_code2_vld | gsp_code3_vld | gsp_code4_vld | gsp_code5_vld | gsp_code6_vld | gsp_code7_vld | gsp_code8_vld);

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) gsp_code1_vld <= 1'b0;
  else if(data_end_vld) gsp_code1_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == gsp_code1_reg[5:0])) gsp_code1_vld <= 1'b1;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) gsp_code2_vld <= 1'b0;
  else if(data_end_vld) gsp_code2_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == gsp_code2_reg[5:0])) gsp_code2_vld <= 1'b1;  
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) gsp_code3_vld <= 1'b0;
  else if(data_end_vld) gsp_code3_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == gsp_code3_reg[5:0])) gsp_code3_vld <= 1'b1;  

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) gsp_code4_vld <= 1'b0;
  else if(data_end_vld) gsp_code4_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == gsp_code4_reg[5:0])) gsp_code4_vld <= 1'b1;    
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) gsp_code5_vld <= 1'b0;
  else if(data_end_vld) gsp_code5_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == gsp_code5_reg[5:0])) gsp_code5_vld <= 1'b1;  

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) gsp_code6_vld <= 1'b0;
  else if(data_end_vld) gsp_code6_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == gsp_code6_reg[5:0])) gsp_code6_vld <= 1'b1;    
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) gsp_code7_vld <= 1'b0;
  else if(data_end_vld) gsp_code7_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == gsp_code7_reg[5:0])) gsp_code7_vld <= 1'b1;  

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) gsp_code8_vld <= 1'b0;
  else if(data_end_vld) gsp_code8_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == gsp_code8_reg[5:0])) gsp_code8_vld <= 1'b1;    

//validation of generic long packet datatype
assign glp_dtype_vld = (glp_null_vld | blank_data_vld | emb_8b_nimg_data_vld | glp_dtype1_vld | glp_dtype2_vld | glp_dtype3_vld | glp_dtype4_vld); // | glp_rsvd);

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) glp_null_vld <= 1'b0;
  else if(data_end_vld) glp_null_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == glp_null_reg[5:0])) glp_null_vld <= 1'b1;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) blank_data_vld <= 1'b0;
  else if(data_end_vld) blank_data_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == blank_data_reg[5:0])) blank_data_vld <= 1'b1;  
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) emb_8b_nimg_data_vld <= 1'b0;
  else if(data_end_vld) emb_8b_nimg_data_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == emb_8b_nimg_data_reg[5:0])) emb_8b_nimg_data_vld <= 1'b1;  

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) glp_dtype1_vld <= 1'b0;
  else if(data_end_vld) glp_dtype1_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == glp_dtype1_reg[5:0])) glp_dtype1_vld <= 1'b1;

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) glp_dtype2_vld <= 1'b0;
  else if(data_end_vld) glp_dtype2_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == glp_dtype2_reg[5:0])) glp_dtype2_vld <= 1'b1;  
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) glp_dtype3_vld <= 1'b0;
  else if(data_end_vld) glp_dtype3_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == glp_dtype3_reg[5:0])) glp_dtype3_vld <= 1'b1;    
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) glp_dtype4_vld <= 1'b0;
  else if(data_end_vld) glp_dtype4_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == glp_dtype4_reg[5:0])) glp_dtype4_vld <= 1'b1;      

//validation of YUV datatype
assign yuv_dtype_vld = (yuv420_8b_vld | yuv420_10b_vld | legacy_yuv420_8b_vld | yuv420_8b_csps_vld | yuv420_10b_csps_vld | yuv422_8b_vld | yuv422_10b_vld);

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) yuv420_8b_vld <= 1'b0;
  else if(data_end_vld) yuv420_8b_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == yuv420_8b_reg[5:0])) yuv420_8b_vld <= 1'b1;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) yuv420_10b_vld <= 1'b0;
  else if(data_end_vld) yuv420_10b_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == yuv420_10b_reg[5:0])) yuv420_10b_vld <= 1'b1;  
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) legacy_yuv420_8b_vld <= 1'b0;
  else if(data_end_vld) legacy_yuv420_8b_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == legacy_yuv420_8b_reg[5:0])) legacy_yuv420_8b_vld <= 1'b1;  
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) yuv420_8b_csps_vld <= 1'b0;
  else if(data_end_vld) yuv420_8b_csps_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == yuv420_8b_csps_reg[5:0])) yuv420_8b_csps_vld <= 1'b1;   

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) yuv420_10b_csps_vld <= 1'b0;
  else if(data_end_vld) yuv420_10b_csps_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == yuv420_10b_csps_reg[5:0])) yuv420_10b_csps_vld <= 1'b1; 

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) yuv422_8b_vld <= 1'b0;
  else if(data_end_vld) yuv422_8b_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == yuv422_8b_reg[5:0])) yuv422_8b_vld <= 1'b1;  

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) yuv422_10b_vld <= 1'b0;
  else if(data_end_vld) yuv422_10b_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == yuv422_10b_reg[5:0])) yuv422_10b_vld <= 1'b1;    

//validation of RGB datatype
assign rgb_dtype_vld = (rgb444_vld | rgb555_vld | rgb565_vld | rgb666_vld | rgb888_vld);

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rgb444_vld <= 1'b0;
  else if(data_end_valid) rgb444_vld <= 1'b0;  
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == rgb444_reg[5:0])) rgb444_vld <= 1'b1;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rgb555_vld <= 1'b0;
  else if(data_end_valid) rgb555_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == rgb555_reg[5:0])) rgb555_vld <= 1'b1;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rgb565_vld <= 1'b0;
  else if(data_end_valid) rgb565_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == rgb565_reg[5:0])) rgb565_vld <= 1'b1; 
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rgb666_vld <= 1'b0;
  else if(data_end_valid) rgb666_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == rgb666_reg[5:0])) rgb666_vld <= 1'b1;   
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rgb888_vld <= 1'b0;
  else if(data_end_valid) rgb888_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == rgb888_reg[5:0])) rgb888_vld <= 1'b1;     

//validation of RAW datatype
assign raw_dtype_vld = (raw28_vld | raw24_vld | raw6_vld | raw7_vld | raw8_vld | raw10_vld | raw12_vld | raw14_vld | raw16_vld | raw20_vld);

assign dtype_vld_chk = ((!data_strt_r) & rx_lm_byte_vld & ((llp_dec_ctr == 5'h1) | (llp_dec_ctr == 5'h11)));

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw28_vld <= 1'b0;
  else if(data_end_valid)  raw28_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw28_reg[5:0]))  raw28_vld <= 1'b1;

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw24_vld <= 1'b0;
  else if(data_end_valid)  raw24_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw24_reg[5:0]))  raw24_vld <= 1'b1;

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw6_vld <= 1'b0;
  else if(data_end_valid)  raw6_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw6_reg[5:0]))  raw6_vld <= 1'b1;

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw7_vld <= 1'b0;
  else if(data_end_valid)  raw7_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw7_reg[5:0]))  raw7_vld <= 1'b1;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw8_vld <= 1'b0;
  else if(data_end_valid)  raw8_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw8_reg[5:0]))  raw8_vld <= 1'b1;
		   
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw10_vld <= 1'b0;
  else if(data_end_valid)  raw10_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw10_reg[5:0]))  raw10_vld <= 1'b1;

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw12_vld <= 1'b0;
  else if(data_end_valid)  raw12_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw12_reg[5:0]))  raw12_vld <= 1'b1;	

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw14_vld <= 1'b0;
  else if(data_end_valid)  raw14_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw14_reg[5:0]))  raw14_vld <= 1'b1;	

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw16_vld <= 1'b0;
  else if(data_end_valid)  raw16_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw16_reg[5:0]))  raw16_vld <= 1'b1;
		   
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   raw20_vld <= 1'b0;
  else if(data_end_valid)  raw20_vld <= 1'b0;
  else if(dtype_vld_chk & (rx_lm_byte_data[5:0] == raw20_reg[5:0]))  raw20_vld <= 1'b1;

//SSP Data Type values for comparing with the received data type values for data type correction
assign ssp_frame_strt_reg = 6'h0;
assign ssp_frame_end_reg  = 6'h1;
assign ssp_line_strt_reg  = 6'h2;
assign ssp_line_end_reg   = 6'h3;

//GSP Data Type values for comparing with the received data type values for data type correction
assign gsp_code1_reg = 6'h8;
assign gsp_code2_reg = 6'h9;
assign gsp_code3_reg = 6'ha;
assign gsp_code4_reg = 6'hb;
assign gsp_code5_reg = 6'hc;
assign gsp_code6_reg = 6'hd;
assign gsp_code7_reg = 6'he;
assign gsp_code8_reg = 6'hf;

//GLP Data Type values for comparing with the received data type values for data type correction
assign glp_null_reg         = 6'h10;
assign blank_data_reg       = 6'h11;
assign emb_8b_nimg_data_reg = 6'h12;
assign glp_dtype1_reg       = 6'h13;
assign glp_dtype2_reg       = 6'h14;
assign glp_dtype3_reg       = 6'h15;
assign glp_dtype4_reg       = 6'h16;

//YUV Data Type values for comparing with the received data type values for data type correction
assign yuv420_8b_reg        = 6'h18;
assign yuv420_10b_reg       = 6'h19;
assign legacy_yuv420_8b_reg = 6'h1a;
assign yuv420_8b_csps_reg   = 6'h1c;
assign yuv420_10b_csps_reg  = 6'h1d;
assign yuv422_8b_reg        = 6'h1e;
assign yuv422_10b_reg       = 6'h1f;

//RGB Data Type values for comparing with the received data type values for data type correction
assign rgb444_reg = 6'h20;
assign rgb555_reg = 6'h21;
assign rgb565_reg = 6'h22;
assign rgb666_reg = 6'h23;
assign rgb888_reg = 6'h24;

//RAW Data Type values for comparing with the received data type bits for data type correction
assign raw28_reg = 6'h26;
assign raw24_reg = 6'h27;
assign raw6_reg  = 6'h28;
assign raw7_reg  = 6'h29;
assign raw8_reg  = 6'h2a;
assign raw10_reg = 6'h2b;
assign raw12_reg = 6'h2c;
assign raw14_reg = 6'h2d;
assign raw16_reg = 6'h2e;
assign raw20_reg = 6'h2f;



//LSB value of the word count based on the data type
//Note: Refer to the word count calculation in the CSI2 Rx MicroArchitecture Document    
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) wc_lsb_reg <= 8'h0;
  else if((llp_dec_ctr == 5'h1) | (llp_dec_ctr == 5'h11)) wc_lsb_reg <= (rgb888_vld | raw24_vld) ? 8'hbf :
                                                                                      rgb666_vld ? 8'hcf :
                                              (rgb565_vld | rgb555_vld | rgb444_vld | raw16_vld) ? 8'h7f :
                                                                                        raw6_vld ? 8'hef :
                                                                                        raw7_vld ? 8'h17 :
                                                                          (raw8_vld | raw20_vld) ? 8'h1f :
                                                                                       raw10_vld ? 8'h8f :
                                                                                       raw12_vld ? 8'hdf :
                                                                                       raw14_vld ? 8'h2f :
                                                                                       raw28_vld ? 8'h5f : 8'h0;*/


assign  wc_lsb_reg = (rgb888_vld | raw24_vld) ? 8'hbf :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & rgb666_vld ? 8'hcf :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & (rgb565_vld | rgb555_vld | rgb444_vld | raw16_vld) ? 8'h7f :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & raw6_vld ? 8'hef :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & raw7_vld ? 8'h17 :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & (raw8_vld | raw20_vld) ? 8'h1f :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & raw10_vld ? 8'h8f :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & raw12_vld ? 8'hdf :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & raw14_vld ? 8'h2f :
                     ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & raw28_vld ? 8'h5f : 8'h0;


//MSB value of the word count based on the data type
//Note: Refer to the word count calculation in the CSI2 Rx MicroArchitecture Document      
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) wc_msb_reg <= 8'h0; 
  else if((llp_dec_ctr == 5'h2)  | (llp_dec_ctr == 5'h12)) wc_msb_reg <=     (rgb888_vld | raw24_vld | raw20_vld) ? 8'h3 :
                                      (rgb666_vld | rgb565_vld | rgb555_vld | rgb444_vld | raw16_vld | raw14_vld) ? 8'h2 :
                                                                                            (raw6_vld | raw8_vld) ? 8'h0 :
                                                                               (raw7_vld | raw10_vld | raw12_vld) ? 8'h1 :
                                                                                                        raw28_vld ? 8'h4 : 8'hf;
 
//validation of the received data type 
assign rx_datatype_reg_vld = ssp_dtype_vld | gsp_dtype_vld | glp_dtype_vld | yuv_dtype_vld | rgb_dtype_vld | raw_dtype_vld;  
assign datatype_checker_vld = (rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & rx_datatype_reg_vld & (!data_strt));

//validation of the reserved field in the header
//assign hdr_rsvd_vld = (rx_lm_byte_vld & ((llp_dec_ctr == 5'h0) | (llp_dec_ctr == 5'h10)) & (rx_lm_byte_data[7:3] == 5'h0));
assign hdr_rsvd_vld = (rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h1)) & (rx_lm_byte_data_r[7:3] == 5'h0));


//validation of the received wordcount(both LSB and MSB)
assign wc_lsb_vld = ((long_pkt_vld | long_pkt_vld_r) & rx_lm_byte_vld & ((llp_dec_ctr == 5'h2) /*| (llp_dec_ctr == 5'h12)*/) & 
                    (rx_lm_byte_data[7:0] == wc_lsb_reg[7:0]));
assign wc_msb_vld = ((long_pkt_vld | long_pkt_vld_r) & rx_lm_byte_vld & ((llp_dec_ctr == 5'h3) /*| (llp_dec_ctr == 5'h13)*/) & 
                    (rx_lm_byte_data[7:0] == wc_msb_reg[7:0]));

//flagging of data type error
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) datatype_checker_err <= 1'b0;
  else datatype_checker_err <=  (rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & (!(rx_datatype_reg_vld)) &  (!(data_strt)));

//flagging of word count error
assign wc_lsb_err = ((long_pkt_vld | long_pkt_vld_r) & rx_lm_byte_vld & ((llp_dec_ctr == 5'h2) /*| (llp_dec_ctr == 5'h12)*/) & (!(data_strt)) & 
                    (rx_lm_byte_data[7:0] != wc_lsb_reg[7:0]));
assign wc_msb_err = ((long_pkt_vld | long_pkt_vld_r) & rx_lm_byte_vld & ((llp_dec_ctr == 5'h3) /*| (llp_dec_ctr == 5'h13)*/) &  (!(data_strt)) & 
                    (rx_lm_byte_data[7:0] != wc_msb_reg[7:0]));
					
//flagging of reserved field error in the header
//assign hdr_rsvd_err = (rx_lm_byte_vld & ((llp_dec_ctr == 5'h0) | (llp_dec_ctr == 5'h10)) & (rx_lm_byte_data[7:3] != 5'h0) & (!(data_strt)));
assign hdr_rsvd_err = (rx_lm_byte_vld_r & (llp_dec_ctr == 5'h1) & (rx_lm_byte_data_r[7:3] != 5'h0) & (!(data_strt)));

assign llp_violation_err = (data_end_valid_r & rx_lm_byte_vld);

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) llp_err_vld <= 1'b0;
  else llp_err_vld <= wc_lsb_err | wc_msb_err | datatype_checker_err | hdr_rsvd_err | crc_err_vld | crc_err | llp_violation_err;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) llp_err <= 3'h0;
  else llp_err <= wc_lsb_err              ? 3'h1 :
                  wc_msb_err              ? 3'h2 :
				  datatype_checker_err    ? 3'h3 :
				  hdr_rsvd_err            ? 3'h4 :
				  (crc_err_vld | crc_err) ? 3'h5 : 
				  llp_violation_err       ? 3'h6 : 3'h0;  
  
  

//assignment of the reserved field in the header which is received from lane management (lane merging) layer
assign hdr_rsvd_rx = (((llp_dec_ctr == 5'h1) | (llp_dec_ctr == 5'h11)) & rx_lm_byte_vld_r) ? rx_lm_byte_data_r[7:3] : 5'h0;
//assignment of the virtual channel extension field in the header which is received from lane management (lane merging) layer
assign vcx_rx = (((llp_dec_ctr == 5'h1) | (llp_dec_ctr == 5'h11)) & rx_lm_byte_vld_r) ? rx_lm_byte_data_r[2:0] : 3'h0;
//assignment of the data type field in the header which is received from lane management (lane merging) layer
assign dtype_rx = (((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & rx_lm_byte_vld_r) ? rx_lm_byte_data_r[5:0] : 6'h0;
//assignment of the virtual channel field in the header which is received from lane management (lane merging) layer
assign vc_rx = (((llp_dec_ctr == 5'h2) |  (llp_dec_ctr == 5'h12)) & rx_lm_byte_vld_r) ? rx_lm_byte_data_r[7:6] : 2'h0;
//assignment of the LSB word count field in the header which is received from lane management (lane merging) layer
assign wc_lsb_rx = (((llp_dec_ctr == 5'h3) | (llp_dec_ctr == 5'h13)) & rx_lm_byte_vld_r) ? rx_lm_byte_data_r[7:0] : 8'h0;
//assignment of the MSB word count field in the header which is received from lane management (lane merging) layer
assign wc_msb_rx = (((llp_dec_ctr == 5'h4) | (llp_dec_ctr == 5'h14)) & rx_lm_byte_vld_r) ? rx_lm_byte_data_r[7:0] : 8'h0;
  
//registering the lsb bits of the header checksum received from the lm layer 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) hdr_chksum_lsb_rx <= 8'h0;
  else hdr_chksum_lsb_rx <= (((llp_dec_ctr == 5'h5) /*| (llp_dec_ctr == 5'h15)*/) & rx_lm_byte_vld_r & (!data_strt)) ? rx_lm_byte_data_r[7:0] : hdr_chksum_lsb_rx;
  
//registering the msb bits of the header checksum received from the lm layer
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) hdr_chksum_msb_rx <= 8'h0;
  else hdr_chksum_msb_rx <= (((llp_dec_ctr == 5'h6) /*| (llp_dec_ctr == 5'h16)*/) & rx_lm_byte_vld_r & (!data_strt)) ? rx_lm_byte_data_r[7:0] : hdr_chksum_msb_rx;
   
//registering the lsb bits of the data checksum received from the lm layer
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) data_chksum_lsb_rx <= 8'h0;
  else data_chksum_lsb_rx <= (data_end_valid_r & rx_lm_byte_vld & (foot_ctr == 2'h0)) ? rx_lm_byte_data[7:0] : data_chksum_lsb_rx;

///registering the msb bits of the data checksum received from the lm layer  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) data_chksum_msb_rx <= 8'h0;
  else data_chksum_msb_rx <= (data_end_valid_r & rx_lm_byte_vld & (foot_ctr == 2'h1)) ? rx_lm_byte_data[7:0] : data_chksum_msb_rx;
  
//level signal indicating that crc error occured and gets deasserted when next packet / start of transmission occurs   
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) crc_err_vld <= 1'b0;
  else if(rx_lane_sts_reg7) crc_err_vld <= 1'b0;
  else if(crc_err) crc_err_vld <= 1'b1;
  
//control level signal indicating that the data is active; asserted when data starts and deasserts when crc error is observed
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) llp_rx_data_valid <= 1'b0;
  else if(crc_err_vld) llp_rx_data_valid <= 1'b0;
  else if(dstart | data_strt) llp_rx_data_valid <= 1'b1;
        
//input data to Rx Data FIFO in llp indicating that the data after the header is valid and FIFO can start writing the data along with the valid       
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {llp_rx_data_out_vld, llp_rx_data_out} <= 9'h0;
  else  {llp_rx_data_out_vld, llp_rx_data_out}  <= (llp_rx_data_valid & (data_strt_r & (llp_dec_ctr >= 5'h0) & rx_lm_byte_vld_r)) ? 
                                                   {1'b1, rx_lm_byte_data_r[7:0]} : 9'h0; 

//control signal indicating that the incoming header data for long packet is valid  
assign hdr_vld_rx_long  = (rx_lm_byte_vld_r & (((llp_dec_ctr >= 5'h1) & (llp_dec_ctr <= 5'h4)) |
                             ((llp_dec_ctr >= 5'h11) & (llp_dec_ctr <= 5'h14))) & (!data_strt)) ? 1'b1 : 1'b0;

//header data is forwarded to crc module as input to find crc of long packet
assign crc_data_rx_long = (rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h1) | (llp_dec_ctr == 5'h11)) & (!data_strt)) ? 
                                                                               {hdr_rsvd_rx[4:0], vcx_rx[2:0]} :
                          (rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12)) & (!data_strt)) ? 
						                                                           {vc_rx[1:0], dtype_rx[5:0]} : 
                          (rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h3) | (llp_dec_ctr == 5'h13)) & (!data_strt)) ? 
						                                                                      {wc_lsb_rx[7:0]} :
                          (rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h4) | (llp_dec_ctr == 5'h14)) & (!data_strt)) ? 
						                                                                      {wc_msb_rx[7:0]} : 8'h0;

//data field of received short packet (lsb bits)  
assign data_field_lsb_rx = ((shrt_pkt_vld | shrt_pkt_vld_r) & ((llp_dec_ctr == 5'h3) | (llp_dec_ctr == 5'h13)) & rx_lm_byte_vld_r) ? 
                                                                                                            rx_lm_byte_data_r[7:0] : 8'h0;

//data field of received short packet (msb bits)
assign data_field_msb_rx = ((shrt_pkt_vld | shrt_pkt_vld_r) & ((llp_dec_ctr == 5'h4) | (llp_dec_ctr == 5'h14)) & rx_lm_byte_vld_r) ? 
                                                                                                            rx_lm_byte_data_r[7:0] : 8'h0;

//header data is forwarded to crc module as input to find crc of short packet 
assign crc_data_rx_shrt = ((shrt_pkt_vld | shrt_pkt_vld_r) & rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h1) | (llp_dec_ctr == 5'h11)) & (!data_strt)) ? 
                                                                                                                 {hdr_rsvd_rx[4:0], vcx_rx[2:0]} :
                          ((shrt_pkt_vld | shrt_pkt_vld_r) & rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h2) | (llp_dec_ctr == 5'h12))  & (!data_strt)) ? 
						                                                                                              {vc_rx[1:0], dtype_rx[5:0]} : 
                          ((shrt_pkt_vld | shrt_pkt_vld_r) & rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h3) | (llp_dec_ctr == 5'h13)) & (!data_strt)) ? 
						                                                                                                {data_field_lsb_rx[7:0]} :
                          ((shrt_pkt_vld | shrt_pkt_vld_r) & rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h4) | (llp_dec_ctr == 5'h14)) & (!data_strt)) ? 
						                                                                                                {data_field_msb_rx[7:0]} : 8'h0;
																														
//control signal indicating that the incoming header data for short packet is valid
assign hdr_vld_rx_shrt = ((shrt_pkt_vld | shrt_pkt_vld_r) & rx_lm_byte_vld_r & (llp_dec_ctr >= 5'h0) & (llp_dec_ctr <= 5'h14) & (!data_strt)) ? 1'b1 : 1'b0;
 logic [15:0] crc_reg_rx_r; 
//crc data calculated from crc generator is stored in this register  
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) crc_reg_rx <= 16'h0; 
  else crc_reg_rx <= ((long_pkt_vld | long_pkt_vld_r) & hdr_crcvld_out_long & ((llp_dec_ctr == 5'h6) /*| (llp_dec_ctr == 5'h16)*///) 
   //                   & (!data_strt)) ? hdr_crcdata_out_long [15:0] :
   //                  ((!data_strt) & (shrt_pkt_vld | shrt_pkt_vld_r) & hdr_crcvld_out_short & (llp_dec_ctr == 5'h6) /*| (llp_dec_ctr == 5'h16)*/) ? hdr_crcdata_out_short [15:0] :
   //                  ((long_pkt_vld | long_pkt_vld_r) & data_strt & data_crcvld_out_long & data_end_valid /*& rx_lm_byte_vld_r*/) ?  data_crcdata_out_long [15:0] :
   //				 crc_reg_rx;*/
   
   always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) crc_reg_rx_r <= 16'h0; 
  else crc_reg_rx_r <= ((long_pkt_vld | long_pkt_vld_r) & hdr_crcvld_out_long & ((llp_dec_ctr == 5'h6) /*| (llp_dec_ctr == 5'h16)*/) 
                      & (!data_strt)) ? hdr_crcdata_out_long [15:0] :
                     ((!data_strt) & (shrt_pkt_vld | shrt_pkt_vld_r) & hdr_crcvld_out_short & (llp_dec_ctr == 5'h6) /*| (llp_dec_ctr == 5'h16)*/) ? hdr_crcdata_out_short [15:0] :
                     ((long_pkt_vld | long_pkt_vld_r) & data_strt & data_crcvld_out_long & data_end_valid /*& rx_lm_byte_vld_r*/) ?  data_crcdata_out_long [15:0] :
					 crc_reg_rx_r;
					 //16'h0;
					 
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) crc_reg_rx <= 16'h0; 
  else crc_reg_rx <= crc_reg_rx_r;	
	
 //
//control pulse signal indicating that the data counter (based on the data type) reached its maximum word count  
assign data_end_valid = // ((dtype_ctr565_555_444_16 == 10'h9) | //10'h1f) | 
                         ((dtype_ctr565_555_444_16 == 11'h4ff) | 
                         (dtype_ctr888_24 == 11'h77f) | (dtype_ctr666 == 11'h59f) | (dtype_ctr_raw6 == 9'h1df) | 
                         (dtype_ctr_raw7 == 10'h22f) | (dtype_ctr_raw8 == 6'h3f) | (dtype_ctr_raw10 == 10'h31f) | 
                         (dtype_ctr_raw12 == 10'h3bf) | (dtype_ctr_raw14 == 11'h45f) | (dtype_ctr_raw20 == 11'h63f) | 
                         (dtype_ctr_raw28 == 12'h8bf) | (dtype_ctr_lyuv4208 == 10'h3bf) | (dtype_ctr_yuv4208_odd == 10'h27f) | 
						 (dtype_ctr_yuv4208_even_4228 == 11'h4ff) | (dtype_ctr_yuv42010_odd == 10'h31f) | (dtype_ctr_yuv42010_even_42210 == 11'h63f));

//control level signal indicating that the last word count of data is reached; asserted when data_end_valid is high and 
//deasserted when next state of transmission from c-phy register comes  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) data_end_valid_r <= 1'b0;
  else if(rx_lane_sts_reg7) data_end_valid_r <= 1'b0;
  else if(data_end_valid) data_end_valid_r <= 1'b1;
  
//header checksum bits received from lm layer is stored in this register
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) crc_hdr_reg <= 16'h0;
  else crc_hdr_reg <= (rx_lm_byte_vld_r & ((llp_dec_ctr == 5'h7) /*| (llp_dec_ctr == 5'h17)*/)) ? {hdr_chksum_msb_rx, hdr_chksum_lsb_rx} : crc_hdr_reg;

//data checksum bits received from lm layer 
assign crc_data_reg =   (rx_lm_byte_vld_r & (llp_dec_ctr >= 5'h0) & data_end_valid_r & (foot_ctr == 2'h2)) ? {data_chksum_msb_rx, data_chksum_lsb_rx} : 16'h0; //crc_data_reg;
  
//counter to count the packet footer in the data field of long packet 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) foot_ctr <= 2'h0;
  else if((foot_ctr == 2'h2) | (!rx_lm_byte_vld)) foot_ctr <= 2'h0;
  else if(data_end_valid_r) foot_ctr <= foot_ctr + 2'h1;
 
//delay of data_strt to ensure data integrity by not losing any received data 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) data_strt_r <= 1'b0;
  else data_strt_r <= data_strt;

//error in crc (pulse signal) of long packet header/ short packet header/ long packet data 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) crc_err <= 1'b0;
  else crc_err <= ((!(long_pkt_vld_r)) & (!(data_strt))) ? 1'b0 :
                  ((shrt_pkt_vld | shrt_pkt_vld_r) & (crc_reg_rx[15:0] != crc_hdr_reg[15:0]) & ((llp_dec_ctr == 5'h8) | (llp_dec_ctr == 5'h18)) & (!data_strt)) | //| ctr == 5'h0
                  ((long_pkt_vld | long_pkt_vld_r) & (crc_reg_rx[15:0] != crc_hdr_reg[15:0]) & ((llp_dec_ctr == 5'h8) | (llp_dec_ctr == 5'h18)) & (!data_strt_r)) |  
                 ((data_end_valid_r) & (crc_reg_rx[15:0] != crc_data_reg[15:0]) & (!rx_lm_byte_vld_r) & (foot_ctr == 2'h2)); //& (llp_dec_ctr == 5'h7));
 
//counter to count for raw24/rgb888 data type; it starts counting when the long packet data type
//for raw24/rgb888 is valid and returns to zero when it reaches its maximum word count limit 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr888_24 <= 11'h0;
 // else if(dtype_ctr888_24 == 10'h3bf) dtype_ctr888_24 <= 10'h0;
   else if(dtype_ctr888_24 == 11'h77f) dtype_ctr888_24 <= 11'h0;
  else if((rgb888_vld | raw24_vld) & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr888_24 <= dtype_ctr888_24 + 11'h1;
 
//counter to count for rgb666 data type; it starts counting when the long packet data type
//for rgb666 is valid and returns to zero when it reaches its maximum word count limit 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr666 <= 11'h0;
   else if(dtype_ctr666 == 11'h59f) dtype_ctr666 <= 11'h0;
  //else if(dtype_ctr666 == 10'h2cf) dtype_ctr666 <= 10'h0;
  else if(rgb666_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr666 <= dtype_ctr666 + 11'h1;
 
//counter to count for rgb565/555/444/raw16 data type; it starts counting when the  
//long packet data type for rgb565/555/444/raw16 is valid and returns to zero when
//it reaches its maximum word count limit 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr565_555_444_16 <= 11'h0;
  else if(dtype_ctr565_555_444_16 == 11'h4ff) dtype_ctr565_555_444_16 <= 11'h0;
  //else if(dtype_ctr565_555_444_16 == 10'h27f) dtype_ctr565_555_444_16 <= 10'h0;
  else if((rgb565_vld | rgb555_vld | rgb444_vld | raw16_vld) & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) 
  dtype_ctr565_555_444_16 <= dtype_ctr565_555_444_16 + 11'h1;
  
//counter to count for raw6 data type; it starts counting when the long packet data type
//for raw 6 is valid and returns to zero when it reaches its maximum word count limit  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_raw6 <= 9'h0;
  else if(dtype_ctr_raw6 == 9'h1df) dtype_ctr_raw6 <= 9'h0;
  //else if(dtype_ctr_raw6 == 8'hef) dtype_ctr_raw6 <= 8'h0;
  else if(raw6_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_raw6 <= dtype_ctr_raw6 + 9'h1;
 
//counter to count for raw7 data type; it starts counting when the long packet data type
//for raw 7 is valid and returns to zero when it reaches its maximum word count limit 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_raw7 <= 10'h0;
  else if(dtype_ctr_raw7 == 10'h22f) dtype_ctr_raw7 <= 10'h0;  
  //else if(dtype_ctr_raw7 == 9'h117) dtype_ctr_raw7 <= 9'h0;
  else if(raw7_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_raw7 <= dtype_ctr_raw7 + 10'h1;
 
//counter to count for raw8 data type; it starts counting when the long packet data type
//for raw 8 is valid and returns to zero when it reaches its maximum word count limit  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_raw8 <= 6'h0;
  else if(dtype_ctr_raw8 == 6'h3f) dtype_ctr_raw8 <= 6'h0;
  //else if(dtype_ctr_raw8 == 9'h13f) dtype_ctr_raw8 <= 9'h0;
  else if(raw8_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_raw8 <= dtype_ctr_raw8 + 6'h1;
 
//counter to count for raw10 data type; it starts counting when the long packet data type
//for raw 10 is valid and returns to zero when it reaches its maximum word count limit 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_raw10 <= 10'h0;
  else if(dtype_ctr_raw10 == 10'h31f) dtype_ctr_raw10 <= 10'h0;
  //else if(dtype_ctr_raw10 == 9'h18f) dtype_ctr_raw10 <= 9'h0;
  else if(raw10_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_raw10 <= dtype_ctr_raw10 + 10'h1;
 
//counter to count for raw12 data type; it starts counting when the long packet data type
//for raw 12 is valid and returns to zero when it reaches its maximum word count limit 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_raw12 <= 10'h0;
  else if(dtype_ctr_raw12 == 10'h3bf) dtype_ctr_raw12 <= 10'h0;
  //else if(dtype_ctr_raw12 == 9'h1df) dtype_ctr_raw12 <= 9'h0;
  else if(raw12_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_raw12 <= dtype_ctr_raw12 + 10'h1;

//counter to count for raw14 data type; it starts counting when the long packet data type
//for raw 14 is valid and returns to zero when it reaches its maximum word count limit  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_raw14 <= 11'h0;
  else if(dtype_ctr_raw14 == 11'h45f) dtype_ctr_raw14 <= 11'h0;
  //else if(dtype_ctr_raw14 == 10'h22f) dtype_ctr_raw14 <= 10'h0;
  else if(raw14_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_raw14 <= dtype_ctr_raw14 + 11'h1;

//counter to count for raw20 data type; it starts counting when the long packet data type
//for raw 20 is valid and returns to zero when it reaches its maximum word count limit  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_raw20 <= 11'h0;
  else if(dtype_ctr_raw20 == 11'h63f) dtype_ctr_raw20 <= 11'h0;
  //else if(dtype_ctr_raw20 == 10'h31f) dtype_ctr_raw20 <= 10'h0;
  else if(raw20_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_raw20 <= dtype_ctr_raw20 + 11'h1;
 
//counter to count for raw28 data type; it starts counting when the long packet data type
//for raw 28 is valid and returns to zero when it reaches its maximum word count limit 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_raw28 <= 12'h0;
  else if(dtype_ctr_raw28 == 12'h8bf) dtype_ctr_raw28 <= 12'h0;
  //else if(dtype_ctr_raw28 == 11'h45f) dtype_ctr_raw28 <= 11'h0;
  else if(raw28_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_raw28 <= dtype_ctr_raw28 + 12'h1;
  
/*logic [9:0] dtype_ctr_lyuv4208;  
logic [9:0] dtype_ctr_yuv4208_odd;
logic [9:0] dtype_ctr_yuv42010_odd;
logic [10:0] dtype_ctr_yuv4208_even_4228;
logic [10:0] dtype_ctr_yuv42010_even_42210;*/
//counter to count for legacy yuv420 8-bit data type; it starts counting when the long packet data type
//for legacy yuv420 8-bit is valid and returns to zero when it reaches its maximum word count limit - same as raw12
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_lyuv4208 <= 10'h0;
  else if(dtype_ctr_lyuv4208 == 10'h3bf) dtype_ctr_lyuv4208 <= 10'h0;
  //else if(dtype_ctr_raw28 == 11'h45f) dtype_ctr_raw28 <= 11'h0;
  else if(raw28_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_lyuv4208 <= dtype_ctr_lyuv4208 + 10'h1; 
//counter to count for yuv420 8-bit odd data type; it starts counting when the long packet data type
//for yuv420 8-bit odd is valid and returns to zero when it reaches its maximum word count limit 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_yuv4208_odd <= 10'h0;
  else if(dtype_ctr_yuv4208_odd == 10'h27f) dtype_ctr_yuv4208_odd <= 10'h0;
  //else if(dtype_ctr_raw28 == 11'h45f) dtype_ctr_raw28 <= 11'h0;
  else if(raw28_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_yuv4208_odd <= dtype_ctr_yuv4208_odd + 10'h1; 
  
//counter to count for yuv420 8-bit even data type; it starts counting when the long packet data type
//for yuv420 8-bit even is valid and returns to zero when it reaches its maximum word count limit - same as rgb565/555/444/raw16  
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_yuv4208_even_4228 <= 11'h0;
  else if(dtype_ctr_yuv4208_even_4228 == 11'h4ff) dtype_ctr_yuv4208_even_4228 <= 11'h0;
  //else if(dtype_ctr_raw28 == 11'h45f) dtype_ctr_raw28 <= 11'h0;
  else if(raw28_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_yuv4208_even_4228 <= dtype_ctr_yuv4208_even_4228 + 11'h1; 
   
 //counter to count for yuv420 10-bit odd data type; it starts counting when the long packet data type
//for yuv420 10-bit odd is valid and returns to zero when it reaches its maximum word count limit - same as raw10
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_yuv42010_odd <= 10'h0;
  else if(dtype_ctr_yuv42010_odd == 10'h31f) dtype_ctr_yuv42010_odd <= 10'h0;
  //else if(dtype_ctr_raw28 == 11'h45f) dtype_ctr_raw28 <= 11'h0;
  else if(raw28_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_yuv42010_odd <= dtype_ctr_yuv42010_odd + 10'h1; 
  
//counter to count for yuv420 10-bit even data type; it starts counting when the long packet data type
//for yuv420 10-bit even is valid and returns to zero when it reaches its maximum word count limit - same as raw20
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_ctr_yuv42010_even_42210 <= 11'h0;
  else if(dtype_ctr_yuv42010_even_42210 == 11'h63f) dtype_ctr_yuv42010_even_42210 <= 11'h0;
  //else if(dtype_ctr_raw28 == 11'h45f) dtype_ctr_raw28 <= 11'h0;
  else if(raw28_vld & (dstart | data_strt) & (long_pkt_vld | long_pkt_vld_r)) dtype_ctr_yuv42010_even_42210 <= dtype_ctr_yuv42010_even_42210 + 11'h1; 


//control signal indication that it is the start of data after header1, sync and header2
//and is fed as input to crc module for calculation of data CRC
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) crc_data_vld <= 1'b0;
  else       crc_data_vld <= (((dtype_ctr565_555_444_16 >= 10'h1) | 
                             (dtype_ctr888_24 >= 10'h1) | (dtype_ctr666 >= 10'h1) | (dtype_ctr_raw6 >= 8'h1) | 
                             (dtype_ctr_raw7 >= 9'h1) | (dtype_ctr_raw8 >= 9'h1) | (dtype_ctr_raw10 >= 9'h1) | 
                             (dtype_ctr_raw12 >= 9'h1) | (dtype_ctr_raw14 >= 10'h1) | (dtype_ctr_raw20 >= 10'h1) | 
							 (dtype_ctr_lyuv4208 >= 10'h1) | (dtype_ctr_yuv4208_odd >= 10'h1) | (dtype_ctr_yuv4208_even_4228 >= 11'h1) | 
							 (dtype_ctr_yuv42010_odd >= 10'h1) | (dtype_ctr_yuv42010_even_42210 >= 11'h1) | 
                             (dtype_ctr_raw28 >= 11'h1)) & (!data_end_valid_r) & rx_lm_byte_vld_r) ? 1'b1 : 1'b0;

//data is forwarded to crc module as input to find crc of long packet data payload  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) crc_data <= 8'h0;
  else crc_data <= ((llp_dec_ctr >= 5'h0) & data_strt & rx_lm_byte_vld_r) ? rx_lm_byte_data [7:0] : 8'h0;

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) dtype_sts_reg <= 6'h0;
 // else if(bp_valid)  dtype_sts_reg <= 6'h0;
  else if(data_end_valid) begin
   case(1'b1)
     (dtype_ctr565_555_444_16 == 11'h4ff): dtype_sts_reg <= 6'h22 | 6'h21 | 6'h20 | 6'h2e;
     (dtype_ctr666 == 11'h59f): dtype_sts_reg <= 6'h23;
     (dtype_ctr888_24 == 11'h77f): dtype_sts_reg <= 6'h24 | 6'h27;  
     ((dtype_ctr_raw6 == 9'h1df)): dtype_sts_reg <= 6'h28;  
     ((dtype_ctr_raw7 == 10'h22f)): dtype_sts_reg <= 6'h29;  
     ((dtype_ctr_raw8 == 6'h3f)): dtype_sts_reg <= 6'h2a;
     ((dtype_ctr_raw10 == 10'h31f)): dtype_sts_reg <= 6'h2b;
     ((dtype_ctr_raw12 == 10'h3bf)): dtype_sts_reg <= 6'h2c;  
     ((dtype_ctr_raw14 == 11'h45f)): dtype_sts_reg <= 6'h2d;  
     //((dtype_ctr565_555_444_16 == 10'h27f)): dtype_sts_reg <= 6'h2e;   
     ((dtype_ctr_raw20 == 11'h63f)): dtype_sts_reg <= 6'h2f;   
    // ((dtype_ctr888_24 == 10'h3bf)): dtype_sts_reg <= 6'h27;   
     ((dtype_ctr_raw28 == 12'h8bf)): dtype_sts_reg <= 6'h26; 
	 (dtype_ctr_lyuv4208 == 10'h3bf) : dtype_sts_reg <= 6'h1a;
	 (dtype_ctr_yuv4208_odd == 10'h27f) : dtype_sts_reg <= 6'h18 | 6'h1c;
	 (dtype_ctr_yuv4208_even_4228 == 11'h4ff) : dtype_sts_reg <= 6'h18 | 6'h1c | 6'h1e;
	 (dtype_ctr_yuv42010_odd == 10'h31f) : dtype_sts_reg <= 6'h19 | 6'h1d;
	 (dtype_ctr_yuv42010_even_42210 == 11'h63f) : dtype_sts_reg <= 6'h19 | 6'h1d | 6'h1f;
	 
  default: dtype_sts_reg <= dtype_sts_reg;
  endcase
  end
endmodule

  /* ((dtype_ctr565_555_444_16 == 11'h4ff) | 
                         (dtype_ctr888_24 == 11'h77f) | (dtype_ctr666 == 11'h59f) | (dtype_ctr_raw6 == 9'h1df) | 
                         (dtype_ctr_raw7 == 10'h22f) | (dtype_ctr_raw8 == 6'h3f) | (dtype_ctr_raw10 == 10'h31f) | 
                         (dtype_ctr_raw12 == 10'h3bf) | (dtype_ctr_raw14 == 11'h45f) | (dtype_ctr_raw20 == 11'h63f) | 
                         (dtype_ctr_raw28 == 12'h8bf) | (dtype_ctr_lyuv4208 == 10'h3bf) | (dtype_ctr_yuv4208_odd == 10'h27f) | 
						 (dtype_ctr_yuv4208_even_4228 == 11'h4ff) | (dtype_ctr_yuv42010_odd == 10'h31f) | (dtype_ctr_yuv42010_even_42210 == 11'h63f));*/     