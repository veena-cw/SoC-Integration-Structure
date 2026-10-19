//==================================================================================
//  Copyright (c) 2025 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: CSI2 Rx Top
//  Module            				: csi2_rx_top.sv
//  Primary Unit Owner                         	: veena@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//============================================================================================================================================================
// Description: The module contains the signal lists of PPI, AXI and APB interfaces as well as instantiations of CSI2 Rx Controller Modules.
//============================================================================================================================================================


//ppi (physical layer) - lane merging
//lm inputs  bpuf outputs



module csi2_rx_top (
//ppi interface
input rxwordclkhs,                    //High-Speed Receive Word Clock
input cphy_rxwordclkhs,               //clock derived from rxwordclkhs
input rxclkesc,                       //Escape Mode Receive Clock
input rst_n,                          //Negative edge asynchronous reset signal
input rxactivehs,                     //High-Speed Reception Active Signal
input rxcalibrationprehs,             //Alternate Calibration Burst Being Received
input rxerrcalhs,                     //High-Speed Receive Calibration Error
input rxlpdtesc,                      //Escape Low-Power Data Receive mode
input rxulpsesc,                      //Escape Ultra-Low Power (Receive) mode
input rxvalidesc,                     //Escape Mode Receive Data Valid
input direction,                      //Transmit/Receive Direction; direction = 0 --> Transmit Mode; direction = 1 ---> Receive Mode
input stopstate,                      //Lane is in the Stop state
input ulpsactivenot,                  //ULP State (not) Active - default - 1'b1 --> normal operation
input errsoths,                       //Start-of-Transmission (SoT) Error
input errsotsynchs,                   //Start-of-Transmission Synchronization Error
input erresc,                         //Escape Entry Error
input errsyncesc,                     //Low-Power Data Transmission Synchronization Error
input errcontrol,                     //Control Error
input errcontentionlp0,               //LP0 Contention Error
input errcontentionlp1,               //LP1 Contention Error
input rx_lane_sts_reg7,               //C-PHY lane status register seventh bit indicating the start of transmission 
input rx_lane_sts_reg4,               //C-PHY lane status register fourth bit indicating the end of transmission 

input [1:0] rxcalibrationformat,      //Calibration Preamble Format Type
input [63:0] rxdatahs,                //HIGH speed Receive Data from all 4 lanes
input [3:0] rxinvalidcodehs,          //High-Speed Invalid Code Word Detection in RxDataHS[63:0] (from all 4 lanes)
input [3:0] rxvalidhs,                //High-Speed Receive Data Valid in RxDataHS[63:0] (from all 4 lanes)
input [3:0] rxsynchs,                 //Receiver Synchronization Observed in RxDataHS[63:0] (from all 4 lanes)
input [2:0] rxsynctypehs0,            //High-Speed Signal indicates the Sync Type in 16-bit width, 32-bit width and 64-bit width
input [2:0] rxsynctypehs1,            //High-Speed Signal indicates the Sync Type in 32-bit width and 64-bit width
input [2:0] rxsynctypehs2,            //High-Speed Signal indicates the Sync Type in 64-bit width
input [2:0] rxsynctypehs3,            //High-Speed Signal indicates the Sync Type in 64-bit width
input [3:0] rxalpvalidhs,             //Receiver ALP Code Observed
input [3:0] rxalpcode0,               //Receiver ALP Code Value --> 16/32/64 bit width – RxALPNibble0[3:0]
input [3:0] rxalpcode1,               //Receiver ALP LPDT Nibble Data --> 32/64 bit width – RxALPNibble1[3:0]
input [3:0] rxalpcode2,               //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble2[3:0]
input [3:0] rxalpcode3,               //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble3[3:0]
input [3:0] rxalpnibble0,             //Receiver ALP LPDT Nibble Data --> 16/32/64 bit width – RxALPNibble0[3:0]
input [3:0] rxalpnibble1,             //Receiver ALP LPDT Nibble Data --> 32/64 bit width – RxALPNibble1[3:0]
input [3:0] rxalpnibble2,             //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble2[3:0]
input [3:0] rxalpnibble3,             //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble3[3:0]
input [3:0] rxtriggeresc,             //Escape Mode Receive Trigger 0-3
input [7:0] rxdataesc,                //Escape Mode Receive Data
//input rx_lane_sts_reg7,             //received from c-phy register 
//input rx_lane_sts_reg4,             //received from c-phy register 

output logic turnrequest,             //Turn Around Request - 1'b0
output logic turndisable,             //Disable Turn-around - 1'b1
output logic forcerxmode,             //Force Lane Module Into Receive mode / Wait for Stop state - 1'b1
//output logic forcetxstopmode,         //Force Lane Module Into Transmit mode / Generate Stop state - 1'b0
output logic enable,                  //Enable Lane Module - 1'b1
//output logic txalp_lpselect,          //Transmitter ALP or LP Select - 1'b0 - LP Signaling; 1'b1 - ALP Signaling; default - 1'b0 
output logic rxalp_lpselect,          //Receiver ALP or LP Select - 1'b0 - LP Signaling; 1'b1 - ALP Signaling; default - 1'b0 
output logic [1:0] rxdatawidthhs,     //High-Speed Receive Data Width Select; 2'h1 - 16 bit; 2'h2 - 32 bit; 2'h3 - 64-bit; 2'h1 by default 
output logic [2:0] alpwakestate,      //ALP-Pause Wake Wire State - 3'h0 as it is uncommon for Rx only CSI2 designs
input [31:0] lane_configuration,      //32'h0 ---> 1 lane, 32'h1 ----> 2 lanes, 32'h2 ---> 4 lanes
input [31:0] mode_selection,          //32'h0 ---> c-phy, 32'h1 ---> d-phy
//axi
input aclk,                           //clock in AXI
input areset_n,                       //reset in AXI
input rd_rst_n,

//master write data channel port list
output logic wvalid,                  //valid indicator from master in axi write data channel
output logic wlast,                   //last write data from AXI master in axi write data channel
output logic [`wdata-1:0] wdata,      //write data (pixel data) from AXI master via the write data channel
output logic   [`wstrb-1:0] wstrb,    //write data strobes from AXI master via the write data channel 
//output logic [((2**(`burst_size))*8 )-1:0] wdata, //write data (pixel data) from AXI master via the write data channel
//output logic [(2**(`burst_size))-1:0] wstrb,      //write data strobes from AXI master via the write data channel
input  wready,                        //ready indicator from AXI slave in write data channel

//master AW channel port list
input awready,                        //ready indicator from AXI slave in write address channel
output logic awvalid,                 //valid indicator from master in axi write address channel
//output logic [`ID-1:0] awid,        //write address id
output logic [31:0] awid,             //write address id
output logic [7:0] awlen,             //transaction length from AXI master in write address channel
output logic [2:0] awsize,            //transaction size from AXI master in write address channel
output logic [1:0] awburst,           //burst attribute from AXI master in write address channel
output logic [31:0] awaddr,           //transaction address from AXI master in write address channel
output logic [3:0] awcache,           //memory attributes from AXI master in write address channel
output logic [2:0] awprot,            //access attributes from AXI master in write address channel
output logic [3:0] awqos,             //QoS identifier from AXI master in write address channel
output logic [3:0] awregion,          //region identifier from AXI master in write address channel
   
//Master write response channel port list
//input [`ID-1:0] bid,                //response id
input [1:0]  bresp,                   //response indicator from AXI slave in write response channel
input bvalid,                         //valid indicator from AXI slave in write response channel
output logic bready,                  //ready indicator from AXI master in write response channel

//APB Interface Signals
input pclk,                           //APB clock
input prst_n,                         //APB reset
input pwrite,                         //apb write
input psel,                           //apb select signal
input penable,                        //apb enable signal
input [2:0] pprot,                    //Indicates the normal, privileged, or secure protection level of the transaction. 
input [3:0]	pstrb,                    //apb strobe
input [31:0] paddr,                   //apb address
input [31:0] pwdata,                  //apb write data
output logic pready,                  //apb ready signal
output logic pslverr,                 //apb slave error
output logic [31:0] prdata);          //apb read data


logic        awlock;                  //exclusive access indicator from AXI master in axi write address channel
logic        awuser;                  //user-defined extension to a request from AXI master in write address channel
logic        axim_err;                //error indication from axi slave is forwarded to the internal CSI2 Rx Controller register
logic        wuser;                   //user-defined extension to a request from AXI master in write data channel
logic rx_buff_reg_vld1;               //control signal indicating that the data in buffer register1 is valid
logic rx_buff_reg_vld2;               //control signal indicating that the data in buffer register2 is valid
logic rx_buff_reg_vld3;               //control signal indicating that the data in buffer register3 is valid
logic rx_buff_reg_vld4;               //control signal indicating that the data in buffer register4 is valid
logic rx_buff_reg_vld5;               //control signal indicating that the data in buffer register5 is valid
logic rx_buff_reg_vld6;               //control signal indicating that the data in buffer register6 is valid
logic rx_buff_reg_vld7;               //control signal indicating that the data in buffer register7 is valid
logic rx_buff_reg_vld8;               //control signal indicating that the data in buffer register8 is valid
logic rx_buff_reg_vld9;               //control signal indicating that the data in buffer register9 is valid
logic rx_buff_reg_vld10;              //control signal indicating that the data in buffer register10 is valid
logic rx_buff_reg_vld;                //control signal indicating that the data in any of the buffer registers is valid
logic rx_pixel_dvalid;                //control signal indicating that the data in byte to pixel converted data is valid
//logic bp_valid;                       //control signal indicating that the data in pixel converter is valid
logic pkt_en;                         //control signal indicating that the incoming packet is valid

logic [1:0] axim_sts;                 //status of axi master module
logic [`rx_pixel_data-1:0] rx_pixel_data; //data in byte to pixel converter
logic [1:0] rx_byte_ctr24;            //Counter for 24-bit data (counts 3 bytes)
logic [1:0] rx_byte_ctr16;            //Counter for 16-bit data (counts 2 bytes)
logic [2:0] rx_byte_ctr56;            //Counter for 56-bit data (counts 7 bytes)
logic [2:0] rx_byte_ctr40;            //Counter for 40-bit data (counts 5 bytes)
logic [3:0] rx_byte_ctr72;            //Counter for 72-bit data (counts 9 bytes)
logic [7:0] rx_buff_reg1;             //buffer register1 to store the incoming 8 bits of data received from llp module
logic [15:0] rx_buff_reg2;            //buffer register2 to store the incoming 8 bits of data along with the buffer register1 data received from llp module
logic [23:0] rx_buff_reg3;            //buffer register3 to store the incoming 8 bits of data along with the buffer register2 data received from llp module
logic [31:0] rx_buff_reg4;            //buffer register4 to store the incoming 8 bits of data along with the buffer register3 data received from llp module
logic [39:0] rx_buff_reg5;            //buffer register5 to store the incoming 8 bits of data along with the buffer register4 data received from llp module
logic [47:0] rx_buff_reg6;            //buffer register6 to store the incoming 8 bits of data along with the buffer register5 data received from llp module
logic [55:0] rx_buff_reg7;            //buffer register7 to store the incoming 8 bits of data along with the buffer register6 data received from llp module
logic [63:0] rx_buff_reg8;            //buffer register8 to store the incoming 8 bits of data along with the buffer register7 data received from llp module
logic [71:0] rx_buff_reg9;            //buffer register9 to store the incoming 8 bits of data along with the buffer register8 data received from llp module
logic [79:0] rx_buff_reg10;           //buffer register10 to store the incoming 8 bits of data along with the buffer register9 data received from llp module
logic        llp_bp_vld;              //valid control signal indicating that the byte data from LLP Layer to BPUF Layer is valid
logic        llp_err_vld;             //error valid in llp due to crc or any error in the header field
logic [2:0]  llp_err;                 //error in llp due to crc or any error in the header field
logic        long_pkt_vld;            //control level signal indicating that the received data type is valid for long packet
logic [5:0]  dtype_sts_reg;           //data type status register updating to the csi2 internal register
logic [7:0]  llp_bp_data;             //byte data from LLP Layer to BPUF Layer
logic rx_lm_byte_vld;                 //Control signal indicating that the data is valid in rx_lm_byte_data
logic lane_err;                       //error in any of the lanes 	
//logic [1:0] rxdatawidthhs;          //High-Speed Receive Data Width Select - 00 -rsvd; 01 - 16-bit; 10 - 32-bit, 11 - 64-bit
logic [7:0] rx_lm_byte_data;          //Data received from PPI is forwrded to Low Level Protocol (LLP) Layer


//interface signal --inside the bracket
//design signals -- outside

lane_merging_rx lane_merging_rx_inst (.rxwordclkhs(rxwordclkhs), .cphy_rxwordclkhs(cphy_rxwordclkhs), .rxclkesc(rxclkesc), .rst_n(rst_n), 
.rxactivehs(rxactivehs), .rx_lane_sts_reg7(rx_lane_sts_reg7), .rx_lane_sts_reg4(rx_lane_sts_reg4), 
.rxcalibrationprehs(rxcalibrationprehs), .rxerrcalhs(rxerrcalhs), .rxlpdtesc(rxlpdtesc), .rxulpsesc(rxulpsesc),
.rxvalidesc(rxvalidesc), .direction(direction), .stopstate(stopstate), .ulpsactivenot(ulpsactivenot),
.errsoths(errsoths), .errsotsynchs(errsotsynchs), .erresc(erresc), .errsyncesc(errsyncesc), .errcontrol(errcontrol),
.errcontentionlp0(errcontentionlp0), .errcontentionlp1(errcontentionlp1), .rxinvalidcodehs(rxinvalidcodehs),
.rxvalidhs(rxvalidhs), .rxsynchs(rxsynchs), .rxcalibrationformat(rxcalibrationformat),
.rxsynctypehs0(rxsynctypehs0), .rxsynctypehs1(rxsynctypehs1), .rxsynctypehs2(rxsynctypehs2), .rxsynctypehs3(rxsynctypehs3),
.rxalpvalidhs(rxalpvalidhs), .rxalpcode0(rxalpcode0), .rxalpcode1(rxalpcode1), .rxalpcode2(rxalpcode2), .rxalpcode3(rxalpcode3),
.rxalpnibble0(rxalpnibble0), .rxalpnibble1(rxalpnibble1), .rxalpnibble2(rxalpnibble2), .rxalpnibble3(rxalpnibble3),
.rxtriggeresc(rxtriggeresc), .rxdataesc(rxdataesc), .rxdatahs(rxdatahs), /*.rxdatahs1(rxdatahs1), .rxdatahs2(rxdatahs2),
.rxdatahs3(rxdatahs3), .lane_configuration(lane_configuration), .mode_selection(mode_selection),*/
.turnrequest(turnrequest), .turndisable(turndisable), .forcerxmode(forcerxmode), /*.forcetxstopmode(forcetxstopmode), */
.enable(enable), /*.txalp_lpselect(txalp_lpselect),*/ .rxalp_lpselect(rxalp_lpselect), .alpwakestate(alpwakestate),
.rx_lm_byte_vld(rx_lm_byte_vld), .lane_err(lane_err), .rxdatawidthhs(rxdatawidthhs), .rx_lm_byte_data(rx_lm_byte_data), .pkt_en(pkt_en));

//inputs to llp--> outside,
//lane merging outputs --> inside
llp_rx llp_rx_inst (.cphy_rxwordclkhs(cphy_rxwordclkhs), .rst_n(rst_n), .rx_lm_byte_vld(rx_lm_byte_vld), .rx_lm_byte_data(rx_lm_byte_data),
/*.bp_valid(bp_valid),*/ .rx_lane_sts_reg4(rx_lane_sts_reg4), .rx_lane_sts_reg7(rx_lane_sts_reg7), .pkt_en(pkt_en), .llp_bp_vld(llp_bp_vld),
.llp_err_vld(llp_err_vld), .llp_err(llp_err), .long_pkt_vld(long_pkt_vld), .dtype_sts_reg(dtype_sts_reg), .llp_bp_data(llp_bp_data));

//inputs to rx buffer register ---> outside
//llp outputs ---> inside
rx_buffer_register rx_buffer_register_inst(.cphy_rxwordclkhs(cphy_rxwordclkhs), .rst_n(rst_n), .byte_data_vld(llp_bp_vld),
.byte_data(llp_bp_data), .data_type_rx(dtype_sts_reg), .rx_buff_reg_vld1(rx_buff_reg_vld1), .rx_buff_reg_vld2(rx_buff_reg_vld2),
.rx_buff_reg_vld3(rx_buff_reg_vld3), .rx_buff_reg_vld4(rx_buff_reg_vld4), .rx_buff_reg_vld5(rx_buff_reg_vld5), .rx_buff_reg_vld6(rx_buff_reg_vld6),
.rx_buff_reg_vld7(rx_buff_reg_vld7), .rx_buff_reg_vld8(rx_buff_reg_vld8), .rx_buff_reg_vld9(rx_buff_reg_vld9), .rx_buff_reg_vld10(rx_buff_reg_vld10),
.rx_buff_reg_vld(rx_buff_reg_vld), .rx_buff_reg1(rx_buff_reg1), .rx_buff_reg2(rx_buff_reg2), .rx_buff_reg3(rx_buff_reg3), 
.rx_buff_reg4(rx_buff_reg4), .rx_buff_reg5(rx_buff_reg5), .rx_buff_reg6(rx_buff_reg6), .rx_buff_reg7(rx_buff_reg7), .rx_buff_reg8(rx_buff_reg8),
.rx_buff_reg9(rx_buff_reg9), .rx_buff_reg10(rx_buff_reg10));

//llp to rx byte counter; llp output ---> inside
//rx buffer register to rx byte counter; rx buffer register output ---> inside
//inputs to rx byte counter ---> outside
rx_byte_counter rx_byte_counter_inst(.cphy_rxwordclkhs(cphy_rxwordclkhs), .rst_n(rst_n), .byte_data_valid(llp_bp_vld), .data_type_rx_reg(dtype_sts_reg),
.rx_buf_reg_vld(rx_buff_reg_vld), .rx_byte_ctr24(rx_byte_ctr24), .rx_byte_ctr16(rx_byte_ctr16), .rx_byte_ctr56(rx_byte_ctr56), .rx_byte_ctr40(rx_byte_ctr40),
.rx_byte_ctr72(rx_byte_ctr72));


//rx byte counter to bp & rx buffer register to bp
//rx byte counter output ---> inside; inputs to bp ----> outside
//rx buffer register output ---> inside; inputs to bp ---> outside
bp_rx bp_rx_inst(.cphy_rxwordclkhs(cphy_rxwordclkhs), /*aclk(axi_clk),*/ .rst_n(rst_n), .rx_buff_reg_vld(rx_buff_reg_vld), .rx_buff_reg_vld1(rx_buff_reg_vld1), 
.rx_buff_reg_vld2(rx_buff_reg_vld2), .rx_buff_reg_vld3(rx_buff_reg_vld3), .rx_buff_reg_vld4(rx_buff_reg_vld4), .rx_buff_reg_vld5(rx_buff_reg_vld5), 
.rx_buff_reg_vld6(rx_buff_reg_vld6), .rx_buff_reg_vld7(rx_buff_reg_vld7), .rx_buff_reg_vld8(rx_buff_reg_vld8), .rx_buff_reg_vld9(rx_buff_reg_vld9),
.rx_buff_reg_vld10(rx_buff_reg_vld10), .rx_buff_reg1(rx_buff_reg1), .rx_buff_reg2(rx_buff_reg2), .rx_buff_reg3(rx_buff_reg3), .rx_buff_reg4(rx_buff_reg4),
.rx_buff_reg5(rx_buff_reg5), .rx_buff_reg6(rx_buff_reg6), .rx_buff_reg7(rx_buff_reg7), .rx_buff_reg8(rx_buff_reg8), .rx_buff_reg9(rx_buff_reg9),
.rx_buff_reg10(rx_buff_reg10), .rx_byte_ctr24(rx_byte_ctr24), .rx_byte_ctr16(rx_byte_ctr16), .rx_byte_ctr56(rx_byte_ctr56), .rx_byte_ctr40(rx_byte_ctr40),
.rx_byte_ctr72(rx_byte_ctr72), .rx_pixel_dvalid(rx_pixel_dvalid), .rx_pixel_data(rx_pixel_data), .enable_r(enable_r));

//bp to axi master
//bp outputs ---> inside; inputs to axi ---> outside
axi_master axim_inst(.cphy_rxwordclkhs(cphy_rxwordclkhs), /*.rxwordclkhs(rxwordclkhs)*/ .aclk(aclk), .areset_n(areset_n), .rd_rst_n(rd_rst_n),
.data_type_rx_reg(dtype_sts_reg), 
.rx_pixel_dvalid(rx_pixel_dvalid), .awready(awready), .wready(wready), .bvalid(bvalid), .bresp(bresp), .rx_pixel_data(rx_pixel_data),
.wvalid(wvalid), .awvalid(awvalid), .wlast(wlast), .awcache(awcache), .awlock(awlock), .awuser(awuser), .wuser(wuser), .bready(bready),
.axim_err(axim_err), .awburst(awburst), .axim_sts(axim_sts), .awsize(awsize), .awqos(awqos), .awregion(awregion), .awlen(awlen), 
.awprot(awprot), .awaddr(awaddr), .awid(awid), .wstrb(wstrb), .wdata(wdata));

//various modules to register;
//module outputs ---> inside, inputs to register ---> outside
csi2_rx_reg csi2_rx_reg_inst(/*.rd_clk2(rd_clk2),*/ .pclk(pclk), .prst_n(prst_n), .rst_n(rst_n), .axim_err(axim_err), .lane_err(lane_err), 
.llp_err_vld(llp_err_vld), .axim_sts(axim_sts), .llp_err(llp_err), .dtype_sts_reg(dtype_sts_reg), .pwrite(pwrite), .psel(psel), 
.penable(penable), .pprot(pprot), .pstrb(pstrb), .paddr(paddr), .pwdata(pwdata), .pready(pready), .pslverr(pslverr), .prdata(prdata), 
.rx_lane_sts_reg7(rx_lane_sts_reg7), .rx_lane_sts_reg4(rx_lane_sts_reg4));

endmodule
