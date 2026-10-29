//==================================================================================
//  Copyright (c) 2025 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: CSI2 Rx Lane Merging
//  Module            				: lane_merging_rx.sv
//  Primary Unit Owner                         	: veena@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//============================================================================================================================================================
// Description: The module contains the logic of merging of lanes from PPI (C-PHY) Interface and forwards it to the Low Level Protocol Layer (LLP) byte-wise.
//============================================================================================================================================================
//2.5 Gsps per lane from c-phy
//2.5/7 = 357.14 MHz is used in Lane Merging (Lane Management Layer) Module of CSI2 Rx Controller
/////////////////////////////////////////For escape mode clock///////////////////////////////////////////////////
//typical Escape Mode rates are much slower than high-speed mode:
//Escape Mode symbol rate is typically in the 10-100 Mbps range per lane
//Since each RxClkEsc pulse transfers 1 byte (8 bits), the clock frequency would be roughly 1/8 of the symbol rate (80 Mbps)
//(because even though symbol rate of escape mode is 10-100 Mbps, typical symbol rate taken is 8-80 Mbps and 80 Mbps is chosen for this design)
//Expected RxClkEsc frequency range: 80/8 = 10 MHz (but only during active transmission)


//`include "sync_fifo.sv"
//`include "async_fifo.sv"
module lane_merging_rx(
//Declaration of Input Signals from C-PHY PPI Interface
input rxwordclkhs,             //High-Speed Receive Word Clock
input cphy_rxwordclkhs,             //High-Speed Receive Word Clock
input rxclkesc,                     //Escape Mode Receive Clock
input rst_n,                        //Negative edge asynchronous reset signal
input rxactivehs,                   //High-Speed Reception Active Signal
input rx_lane_sts_reg7,             //C-PHY lane status register seventh bit indicating the start of transmission 
input rx_lane_sts_reg4,             //C-PHY lane status register fourth bit indicating the end of transmission  

input rxcalibrationprehs,           //Alternate Calibration Burst Being Received
input rxerrcalhs,                   //High-Speed Receive Calibration Error
input rxlpdtesc,                    //Escape Low-Power Data Receive mode
input rxulpsesc,                    //Escape Ultra-Low Power (Receive) mode
input rxvalidesc,                   //Escape Mode Receive Data Valid
input direction,                    //Transmit/Receive Direction; direction = 0 --> Transmit Mode; direction = 1 ---> Receive Mode
input stopstate,                    //Lane is in the Stop state
input ulpsactivenot,                //ULP State (not) Active - default - 1'b1 --> normal operation
input errsoths,                     //Start-of-Transmission (SoT) Error
input errsotsynchs,                 //Start-of-Transmission Synchronization Error
input erresc,                       //Escape Entry Error
input errsyncesc,                   //Low-Power Data Transmission Synchronization Error
input errcontrol,                   //Control Error
input errcontentionlp0,             //LP0 Contention Error
input errcontentionlp1,             //LP1 Contention Error

input [3:0] rxinvalidcodehs,             //High-Speed Invalid Code Word Detection in RxDataHS[15:0]
//input rxinvalidcodehs1,             //High-Speed Invalid Code Word Detection in RxDataHS[31:16]
//input rxinvalidcodehs2,             //High-Speed Invalid Code Word Detection in RxDataHS[47:32]
//input rxinvalidcodehs3,             //High-Speed Invalid Code Word Detection in RxDataHS[63:48]
input [3:0] rxvalidhs,                   //High-Speed Receive Data Valid in RxDataHS[15:0]
//input rxvalidhs1,                   //High-Speed Receive Data Valid in RxDataHS[31:16]
//input rxvalidhs2,                   //High-Speed Receive Data Valid in RxDataHS[47:32]
//input rxvalidhs3,                   //High-Speed Receive Data Valid in RxDataHS[63:48]
input[3:0] rxsynchs,                    //Receiver Synchronization Observed in RxDataHS[15:0]
//input rxsynchs1,                    //Receiver Synchronization Observed in RxDataHS[31:16]
//input rxsynchs2,                    //Receiver Synchronization Observed in RxDataHS[47:32]
//input rxsynchs3,                    //Receiver Synchronization Observed in RxDataHS[63:48]

input [1:0] rxcalibrationformat,    //Calibration Preamble Format Type
input [2:0] rxsynctypehs3,          //High-Speed Signal indicates the Sync Type in 64-bit width
input [2:0] rxsynctypehs2,          //High-Speed Signal indicates the Sync Type in 64-bit width
input [2:0] rxsynctypehs1,          //High-Speed Signal indicates the Sync Type in 32-bit width and 64-bit width
input [2:0] rxsynctypehs0,          //High-Speed Signal indicates the Sync Type in 16-bit width, 32-bit width and 64-bit width

input [3:0] rxalpvalidhs,           //Receiver ALP Code Observed
input [3:0] rxalpcode0,             //Receiver ALP Code Value--> 16/32/64 bit width – RxALPCode0[3:0] 
input [3:0] rxalpcode1,             //Receiver ALP Code Value--> 32/64 bit width – RxALPCode1[3:0] 
input [3:0] rxalpcode2,             //Receiver ALP Code Value--> 64 bit width – RxALPCode2[3:0] 
input [3:0] rxalpcode3,             //Receiver ALP Code Value--> 64 bit width – RxALPCode3[3:0] 
input [3:0] rxalpnibble0,           //Receiver ALP LPDT Nibble Data --> 16/32/64 bit width – RxALPNibble0[3:0]
input [3:0] rxalpnibble1,           //Receiver ALP LPDT Nibble Data --> 32/64 bit width – RxALPNibble1[3:0]
input [3:0] rxalpnibble2,           //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble2[3:0]
input [3:0] rxalpnibble3,           //Receiver ALP LPDT Nibble Data --> 64 bit width – RxALPNibble3[3:0]
input [3:0] rxtriggeresc,           //Escape Mode Receive Trigger 0-3
input [7:0] rxdataesc,              //Escape Mode Receive Data
input [3:0] [15:0] rxdatahs,             //HIGH speed Receive Data from lane0
//input [15:0] rxdatahs1,             //HIGH speed Receive Data from lane1
//input [15:0] rxdatahs2,             //HIGH speed Receive Data from lane2
//input [15:0] rxdatahs3,             //HIGH speed Receive Data from lane3
//input [31:0] lane_configuration,    //32'h0 ---> 1 lane, 32'h1 ----> 2 lanes, 32'h2 ---> 4 lanes
//input [31:0] mode_selection,        //32'h0 ---> c-phy, 32'h1 ---> d-phy

//Declaration of Output Signals from Lane Merging Layer
output logic turnrequest,           //Turn Around Request - 1'b0
output logic turndisable,           //Disable Turn-around - 1'b1
output logic forcerxmode,           //Force Lane Module Into Receive mode / Wait for Stop state - 1'b1
//output logic forcetxstopmode,       //Force Lane Module Into Transmit mode / Generate Stop state - 1'b0
output logic enable,                //Enable Lane Module - 1'b1
//output logic txalp_lpselect,        //Transmitter ALP or LP Select - 1'b0 - LP Signaling; 1'b1 - ALP Signaling; default - 1'b0 
output logic rxalp_lpselect,        //Receiver ALP or LP Select - 1'b0 - LP Signaling; 1'b1 - ALP Signaling; default - 1'b0
output logic [2:0] alpwakestate,    //ALP-Pause Wake Wire State - 3'h0 as it is uncommon for Rx only CSI2 designs

output logic pkt_en,
output logic rx_lm_byte_vld,        //Control signal indicating that the data is valid in rx_lm_byte_data
output logic lane_err,              //error in any of the lanes 	
output logic       rxerrcalhs_reg,
output logic [1:0] rxcalibrationformat_reg,
output logic [3:0] rxalpnibble_reg,
output logic [3:0] rxalpcode_reg,
output logic [1:0] rxdatawidthhs,   //High-Speed Receive Data Width Select - 00 -rsvd; 01 - 16-bit; 10 - 32-bit, 11 - 64-bit
output logic [7:0] rx_lm_byte_data,  //Data received from PPI is forwrded to Low Level Protocol (LLP) Layer

output logic rxdataesc_reg_vld,
output logic rxtriggeresc_reg_vld,
output logic rxalpcode_reg_vld,
output logic rxalpnibble_reg_vld,
output logic [3:0] rxtriggeresc_reg,
output logic [7:0] rxdataesc_reg 
);
  
//Declaration of Internal Signals
//logic pkt_en;                       //level signal indicating the packet start and packet end 
logic lm_full;                      //lane merging fifo is full
logic lm_empty;                     //lane merging fifo is empty
logic lm_wr_en;                     //lane merging fifo write enable
logic lm_active_en;                 //lane merging control signal indicating that the lane merging module is active and enabled
logic lm_active_vld;                //lane merging control signal indicating that the lane merging module is active and valid
logic lm_rd_vld;                    //lane merging fifo read valid
logic csi2_rx_data_reg_vld;
logic rd_vld_out;                   //Valid read signal in alignment with read data
logic rd_vld;                       //valid signal condition to read from FIFO
logic [1:0] empty_vld;              //control signal indicating that the empty signal from FIFO is valid
logic [2:0] byte_ctr_rx;            //byte counter to count 8 clock cycles to read the next data from FIFO (since the LM Rx output is in byte-wise)
logic [63:0] lm_rd_data;            //data read from lane merging fifo
logic [63:0] lm_data_in;            //input data written to lane merging fifo
logic csi2rx_err;
logic wait_en;
logic [3:0] csi2rx_sm_sts;
logic [6:0] csi2rx_cur_state;
logic [6:0] csi2rx_next_state;

localparam CSI2RX_IDLE          = 7'b000_0001;
localparam CSI2RX_HS_MODE       = 7'b000_0010;
localparam CSI2RX_ALP_MODE      = 7'b000_0100;
localparam CSI2RX_ELPDT_MODE    = 7'b000_1000;
localparam CSI2RX_ETRIGGER_MODE = 7'b001_0000;
localparam CSI2RX_EULPS_MODE    = 7'b010_0000;
localparam CSI2RX_EWAIT_MODE    = 7'b100_0000;



/*logic empty;                        //control signal indicating that the FIFO is empty
logic full;                         //control signal indicating that the FIFO is full
logic rx_lm_vld;                    //the merged data is written to FIFO based on this control signal after lane merging
logic rd_vld;                       //valid signal condition to read from FIFO
logic rd_vld_out;                   //Valid read signal in alignment with read data
logic csi2_rx_data_reg_vld;         //control signal indicating that the register data is valid 
logic rx_sync_vld;                  //receiver synchronization is valid
logic rx_sync0_vld;                 //receiver synchronization observed from lane0 is valid
logic rx_sync1_vld;                 //receiver synchronization observed from lane1 is valid
logic rx_sync2_vld;                 //receiver synchronization observed from lane2 is valid
logic rx_sync3_vld;                 //receiver synchronization observed from lane3 is valid
logic csi2_rx_data_reg1_vld;        //data stored in csi2_rx_data_reg1 is valid
logic csi2_rx_data_reg2_vld;        //data stored in csi2_rx_data_reg2 is valid
logic csi2_rx_data_reg3_vld;        //data stored in csi2_rx_data_reg3 is valid
logic csi2_rx_data_reg4_vld;        //data stored in csi2_rx_data_reg4 is valid*/


/*logic [2:0] rx_sync0;               //receiver synchronization type received from lane0
logic [2:0] rx_sync1;               //receiver synchronization type received from lane1 
logic [2:0] rx_sync2;               //receiver synchronization type received from lane2 
logic [2:0] rx_sync3;               //receiver synchronization type received from lane3 */

/*logic [15:0] csi2_rx_data_reg1;     //data from lane0 is stored in register1
logic [15:0] csi2_rx_data_reg2;     //data from lane1 is stored in register2
logic [15:0] csi2_rx_data_reg3;     //data from lane2 is stored in register3
logic [15:0] csi2_rx_data_reg4;     //data from lane3 is stored in register4
logic [63:0] rx_lm;                 //the merged data is written into FIFO
logic [63:0] dout_lm;               //the merged data is read from FIFO*/

//Instantiation of Synchronization FIFO
//FIFO_data sync_fifo_inst(.clk(cphy_rxwordclkhs), .rst_n(rst_n), .wr(rx_lm_vld), .data_in(rx_lm), .rd(rd_vld), 
  //                         .data_out(dout_lm), .Empty(empty), .Full(full));
async_fifo_binary  #(.DATA_WIDTH(64), .ADDR_WIDTH(9)) async_fifo_binary_inst(.wr_clk(rxwordclkhs), .wr_rst_n(rst_n), .wr_en(lm_wr_en), .wr_data(lm_data_in), .full(lm_full), 
.rd_clk(cphy_rxwordclkhs), .rd_rst_n(rst_n), .rd_en(rd_vld), .rd_data(lm_rd_data), .empty(lm_empty)); 


//level signal indicating the packet start and packet end 						   
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) pkt_en <= 1'b0;
  else if(rx_lane_sts_reg4) pkt_en <= 1'b0;
  else if(rx_lane_sts_reg7) pkt_en <= 1'b1; 

//error in any of the lanes 			
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) lane_err <= 1'b0;
  else lane_err <= (((pkt_en &  (!csi2_rx_data_reg_vld) & (!(&(rxalpvalidhs[3:0]))) & (!rxvalidesc & !rxlpdtesc & !rxulpsesc)) |
                   ((!pkt_en) &  (csi2_rx_data_reg_vld | (|rxalpvalidhs[3:0]) | rxvalidesc | rxlpdtesc | rxulpsesc))) | csi2rx_err); 
  
  
assign   csi2_rx_data_reg_vld = ((rxactivehs & ((&(rxvalidhs[3:0])))) | 
 (rxactivehs & (&(rxsynchs[3:0])))); // & rxsynchs1 & rxsynchs2 & rxsynchs3)));

  
 always_ff @(posedge rxwordclkhs or negedge rst_n)
    if(~rst_n)  lm_wr_en <= 1'b0;
    else lm_wr_en <= //((lane_configuration == 32'h2) & //(mode_selection == 32'h0)) & 
      (rxactivehs /*& (((|(rxvalidhs[3:0])) | (|(rxsynchs[3:0]))))*/); //((rxvalidhs0 | rxvalidhs1 | rxvalidhs2 | rxvalidhs3)));
  
  /*always_ff @(posedge rxwordclkhs or negedge rst_n)
    if(~rst_n)  lm_active_en <= 1'b0;
  else lm_active_en <= //((lane_configuration == 32'h2) & //(mode_selection == 32'h0)) & 
                       ((rxactivehs & ((|(rxvalidhs[3:0])))) | //((rxvalidhs0 | rxvalidhs1 | rxvalidhs2 | rxvalidhs3))) | 
					   (rxactivehs & (|(rxsynchs[3:0])))); //| rxsynchs1 | rxsynchs2 | rxsynchs3)));
 */
 
  
always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n)  lm_active_vld <= 1'b0;
  else        lm_active_vld <= lm_active_en;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if(~rst_n)  lm_rd_vld <= 1'b0;
    else        lm_rd_vld <= lm_active_vld;
    
    // ------------------------------------------------------------
// Lane merger FIFO write control
// Write only complete, valid 64-bit words.
// ------------------------------------------------------------

always_ff @(posedge rxwordclkhs or negedge rst_n) begin
    if (!rst_n) begin
        lm_wr_en  <= 1'b0;
        lm_data_in <= 64'h0;
    end
    else begin
        // Default: no FIFO write
        lm_wr_en   <= 1'b0;
        lm_data_in <= 64'h0;

        if (rxactivehs && (&rxsynchs[3:0])) begin
            // Synchronization information
            lm_wr_en <= 1'b1;
            lm_data_in <= {
                52'h0,
                rxsynctypehs3,
                rxsynctypehs2,
                rxsynctypehs1,
                rxsynctypehs0
            };
        end
        else if (rxactivehs && (&rxvalidhs[3:0])) begin
            // All four 16-bit lane words are valid
            lm_wr_en <= 1'b1;
            lm_data_in <= {
                rxdatahs[3][15:0],
                rxdatahs[2][15:0],
                rxdatahs[1][15:0],
                rxdatahs[0][15:0]
            };
        end
    end
end
/*logic lane_merging_sync_data_valid;
logic lane_merging_data_valid;
logic lane_merging_sync_data_valid;  
logic [63:0] lane_merging_data;
logic [11:0] lane_merging_sync_data;
logic [11:0] lane_merging_sync_data_r;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)	 {lane_merging_data_valid,lane_merging_data} <= 65'h0;
  else           {lane_merging_data_valid,lane_merging_data} <= (rxactivehs & (|(rxvalidhs[3:0]))) ? 
                                  {1'b1,{rxdatahs[3][15:0],rxdatahs[2][15:0],rxdatahs[1][15:0],rxdatahs[0][15:0]}} : 65'h0;
  
  always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)	 {lane_merging_sync_data_valid,lane_merging_sync_data} <= 13'h0;
  else       {lane_merging_sync_data_valid,lane_merging_sync_data} <= (rxactivehs & (|(rxsynchs[3:0]))) ? 
                                                                      {1'b1,{rxsynctypehs3,rxsynctypehs2,rxsynctypehs1,rxsynctypehs0}} : 13'h0;   

   always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)	 {lane_merging_sync_data_valid_r,lane_merging_sync_data_r} <= 13'h0;
  else       {lane_merging_sync_data_valid_r,lane_merging_sync_data_r} <= lane_merging_sync_data_valid ? lane_merging_sync_data[11:0] : 13'h0;   																	  

  always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) lm_data_in <= 64'h0;
  else       lm_data_in   <= lane_merging_data_valid ? lane_merging_data[63:0] : 
                             lane_merging_sync_data_valid_r ?  {52'h0,lane_merging_sync_data_r[11:0]} :
                                             64'h0;   		*/					  			
	
 /*always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) lm_data_in <= 64'h0;
  else       lm_data_in   <= (rxactivehs & (|(rxvalidhs[3:0]))) ?  (rxactivehs & (|(rxsynchs[3:0]))) ?  
                              {52'h0,rxsynctypehs3,rxsynctypehs2,rxsynctypehs1,rxsynctypehs0} :{rxdatahs[3][15:0], rxdatahs[2][15:0], rxdatahs[1][15:0], rxdatahs[0][15:0]}:
                                             64'h0; */    
 
/*always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) lm_data_in <= 64'h0;
  else       lm_data_in   <= (rxactivehs & ((|(rxvalidhs[3:0])))) //((rxvalidhs0 | rxvalidhs1 | rxvalidhs2 | rxvalidhs3)))
  ? {rxdatahs3,rxdatahs2,rxdatahs1,rxdatahs0} :
                             (rxactivehs & (rxsynchs0 | rxsynchs1 | rxsynchs2 | rxsynchs3)) ? {52'h0,rxsynctypehs3,rxsynctypehs2,rxsynctypehs1,rxsynctypehs0} :
                                             64'h0;  */
  
  
  
/*
//data from lane0 is stored in register1
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {csi2_rx_data_reg1_vld, csi2_rx_data_reg1} <= 17'h0;
  else {csi2_rx_data_reg1_vld, csi2_rx_data_reg1} <= (!(rxactivehs)) ? 17'h0 :
                                                     rxvalidhs0 ? {1'b1, rxdatahs0[15:0]} : 17'h0;
  
//data from lane1 is stored in register2
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {csi2_rx_data_reg2_vld, csi2_rx_data_reg2} <= 17'h0;
  else {csi2_rx_data_reg2_vld, csi2_rx_data_reg2} <= (!(rxactivehs)) ? 17'h0 :
                                                     rxvalidhs1 ? {1'b1, rxdatahs1[15:0]} : 17'h0;
 
//data from lane2 is stored in register3
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {csi2_rx_data_reg3_vld, csi2_rx_data_reg3} <= 17'h0;
  else {csi2_rx_data_reg3_vld, csi2_rx_data_reg3} <= (!(rxactivehs)) ? 17'h0 :
                                                     rxvalidhs2 ? {1'b1, rxdatahs2[15:0]} : 17'h0;
  
//data from lane3 is stored in register4  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {csi2_rx_data_reg4_vld, csi2_rx_data_reg4} <= 17'h0;
  else {csi2_rx_data_reg4_vld, csi2_rx_data_reg4} <= (!(rxactivehs)) ? 17'h0 :
                                                     rxvalidhs3 ? {1'b1, rxdatahs3[15:0]} : 17'h0;

//synchronization valid signal from lane 0
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_sync0_vld <= 1'b0;
  else rx_sync0_vld <= rxsynchs0;
  
//synchronization valid signal from lane 1  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
   if(~rst_n) rx_sync1_vld <= 1'b0;
   else rx_sync1_vld <= rxsynchs1;

//synchronization valid signal from lane 2  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_sync2_vld <= 1'b0;
  else rx_sync2_vld <= rxsynchs2;
 
//synchronization valid signal from lane 3 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_sync3_vld <= 1'b0;
  else rx_sync3_vld <= rxsynchs3;

//synchronization type from lane 0  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_sync0 <= 3'b0;
  else rx_sync0 <= rxsynctypehs0;
  
//synchronization type from lane 1  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_sync1 <= 3'b0;
  else rx_sync1 <= rxsynctypehs1;

//synchronization type from lane 2  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rx_sync2 <= 3'b0;
  else rx_sync2 <= rxsynctypehs2;

//synchronization type from lane 3  
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
   if(~rst_n) rx_sync3 <= 3'b0;
   else rx_sync3 <= rxsynctypehs3;

//control signal indicating that the register data is valid 
assign csi2_rx_data_reg_vld =  (csi2_rx_data_reg1_vld & csi2_rx_data_reg2_vld & csi2_rx_data_reg3_vld & csi2_rx_data_reg4_vld);
 
//synchronization valid from all 4 lanes   
assign rx_sync_vld = rx_sync0 & rx_sync1 & rx_sync2 & rx_sync3;
//synchronization type from all 4 lanes 
assign rx_sync = {rxsynctypehs3, rxsynctypehs2, rxsynctypehs1, rxsynctypehs0};
  
//lane merged data from all 4 lanes  
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) {rx_lm_vld, rx_lm} <= 65'h0;
  else {rx_lm_vld, rx_lm} <= (rx_sync_vld) ? {1'b1,{52'h0, rx_sync3, rx_sync2, rx_sync1, rx_sync0}} :
                             (csi2_rx_data_reg_vld) ? {1'b1, {csi2_rx_data_reg4,csi2_rx_data_reg3,csi2_rx_data_reg2,csi2_rx_data_reg1}} : 65'h0;*/
							 
	
//valid signal condition to read from FIFO	
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rd_vld <= 1'b0;
 // else if(rx_lm_dstop) rd_vld <= 1'b0;
  else rd_vld <= ((!(lm_empty)) & (byte_ctr_rx == 3'h0));

  
//byte counter to count 8 clock cycles to read the next data from FIFO (since the LM Rx output is in byte-wise)
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) byte_ctr_rx <= 3'h0;
  else if((byte_ctr_rx == 3'h7) | ((byte_ctr_rx == 3'h1) & lm_empty & rx_lm_out_vld)) byte_ctr_rx <= 3'h0;
  else if((!lm_empty | (byte_ctr_rx != 3'h0)) | (rx_lm_out_vld)) byte_ctr_rx <= byte_ctr_rx + 3'h1;

//control signal indicating that the empty signal from FIFO is valid
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) empty_vld <= 2'b0;
  else empty_vld <= {empty_vld[0], lm_empty};
 
//Valid read signal in alignment with read data 
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rd_vld_out <= 1'b0;
  else rd_vld_out <= rd_vld;
  logic rx_lm_out_vld;
  logic rx_lm_dstop; 
  logic [6:0] lm_empty_vld;
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
 if(~rst_n) rx_lm_dstop <= 1'b0;
 else rx_lm_dstop <=  ((!lm_empty && (byte_ctr_rx != 3'h0)) ? 1'b0 :
            ((lm_empty && (byte_ctr_rx != 3'h0)) ? 1'b0 :
            ((lm_empty && (byte_ctr_rx == 3'h0)) ? 1'b1 : 1'b0)));
//((lm_empty_vld == 7'h3f) & (byte_ctr_rx == 3'h0));
 //(lm_empty & (byte_ctr_rx == 3'h0));
 
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
 if(~rst_n) lm_empty_vld <= 7'h0;
 else lm_empty_vld <= {
    lm_empty_vld[5:0],
    lm_empty
};
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n)   rx_lm_out_vld <= 1'b0;
  else if(rx_lm_dstop) rx_lm_out_vld <= 1'b0;
  else if(rd_vld) rx_lm_out_vld <= 1'b1;

//Data received from PPI is forwrded to Low Level Protocol (LLP) Layer along with the respective valid
//Data received from PPI is forwrded to Low Level Protocol (LLP) Layer along with the respective valid
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
    if(~rst_n) {rx_lm_byte_vld, rx_lm_byte_data} <= 9'h0;
  else {rx_lm_byte_vld, rx_lm_byte_data} <= lane_err ? 9'h0 : //(lm_empty | (|empty_vld)) ? 9'h0 :
    ((byte_ctr_rx == 7'h2) & rx_lm_out_vld & (csi2rx_cur_state == CSI2RX_HS_MODE) /*& (!lm_empty) & (!empty_vld[1])*/) ? {1'b1,lm_rd_data[7:0]} : 
    (byte_ctr_rx == 7'h3) & rx_lm_out_vld & (csi2rx_cur_state == CSI2RX_HS_MODE)/*& (!empty_vld)*/ ? {1'b1,{lm_rd_data[15:8]}} : 
    (byte_ctr_rx == 7'h4) & rx_lm_out_vld & (csi2rx_cur_state == CSI2RX_HS_MODE) /*& (!empty_vld)*/ ? {1'b1,{lm_rd_data[23:16]}} : 
    (byte_ctr_rx == 7'h5) & rx_lm_out_vld & (csi2rx_cur_state == CSI2RX_HS_MODE) /*& (!empty_vld)*/ ? {1'b1,{lm_rd_data[31:24]}} : 
    (byte_ctr_rx == 7'h6) & rx_lm_out_vld & (csi2rx_cur_state == CSI2RX_HS_MODE) /*& (!empty_vld)*/ ? {1'b1,{lm_rd_data[39:32]}} : 
    (byte_ctr_rx == 7'h7) &  rx_lm_out_vld & (csi2rx_cur_state == CSI2RX_HS_MODE) /*& (!empty_vld)*/ ? {1'b1,{lm_rd_data[47:40]}} : 
    (byte_ctr_rx == 7'h0) & rx_lm_out_vld & (csi2rx_cur_state == CSI2RX_HS_MODE) /*& (!empty_vld) & (!lm_empty)*/ ? {1'b1,{ lm_rd_data[55:48]}} : 
    (byte_ctr_rx == 7'h1) & rx_lm_out_vld & (csi2rx_cur_state == CSI2RX_HS_MODE) /*& (!(empty_vld[1]))*/ ? {1'b1,{lm_rd_data[63:56]}} : 9'h0;
    
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) turnrequest <= 1'b0;
  else       turnrequest <= 1'b0;

always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) turndisable <= 1'b0;
  else       turndisable <= 1'b1;
  
always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) forcerxmode <= 1'b0;
  else       forcerxmode <= 1'b1;
  
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) rxalp_lpselect <= 1'b0;
  else       rxalp_lpselect <= 1'b0;  //
  
 always_ff @(posedge cphy_rxwordclkhs or negedge rst_n)
  if(~rst_n) enable <= 1'b0;  
  else       enable <= 1'b1;   //
  
  //alpwakestate
 
/*output logic rxdataesc_reg_vld;
output logic rxtriggeresc_reg_vld;
output logic rxalpcode_reg_vld;
output logic rxalpnibble_reg_vld;
output logic [3:0] rxtriggeresc_reg;
output logic [7:0] rxdataesc_reg; */
 
//Alternate Low Power Mode 

always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) {rxalpcode_reg_vld, rxalpcode_reg} <= 17'h0;
  else if(rx_lane_sts_reg4)  {rxalpcode_reg_vld, rxalpcode_reg} <= 17'h0; ///
  else                       {rxalpcode_reg_vld, rxalpcode_reg} <= ((&(rxalpvalidhs[3:0])) & (!(rxvalidhs)) & (csi2rx_cur_state == CSI2RX_ALP_MODE)) ? 
                             {1'b1, {rxalpcode3[3:0],rxalpcode2[3:0],rxalpcode1[3:0],rxalpcode0[3:0]}} : {rxalpcode_reg_vld, rxalpcode_reg};  
  
always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n)                {rxalpnibble_reg_vld, rxalpnibble_reg} <= 17'h0; 
  else if(rx_lane_sts_reg4) {rxalpnibble_reg_vld, rxalpnibble_reg} <= 17'h0;
  else                      {rxalpnibble_reg_vld, rxalpnibble_reg} <= ((&rxalpvalidhs[3:0]) & (rxalpcode0[3:0] == 4'ha) & (rxalpcode1[3:0] == 4'ha) 
                                                                      & (rxalpcode2[3:0] == 4'ha) & (rxalpcode3[3:0] == 4'ha) & 
																	  (csi2rx_cur_state == CSI2RX_ALP_MODE)) ? {1'b1, {rxalpnibble3[3:0], 
											                          rxalpnibble2[3:0], rxalpnibble1[3:0], rxalpnibble0[3:0]}} : 
																	  {rxalpnibble_reg_vld, rxalpnibble_reg};    

always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n)                rxcalibrationformat_reg <= 2'b00;
  else if(rx_lane_sts_reg4) rxcalibrationformat_reg <= 2'b00;
  else rxcalibrationformat_reg <= (rxcalibrationprehs & (rxcalibrationformat ==  2'b01)) ? 2'b01 :
  (rxcalibrationprehs & (rxcalibrationformat ==  2'b10)) ? 2'b10 :
  (rxcalibrationprehs & (rxcalibrationformat ==  2'b11)) ? 2'b11 : rxcalibrationformat_reg;

always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n)                rxerrcalhs_reg <= 1'b0;
  else if(rx_lane_sts_reg4) rxerrcalhs_reg <= 1'b0;
  else                      rxerrcalhs_reg <= rxerrcalhs ? 1'b1 : rxerrcalhs_reg;  
  
//Escape Mode

always_ff @(posedge rxclkesc or negedge rst_n)
  if(~rst_n)  {rxdataesc_reg_vld, rxdataesc_reg} <= 9'h0;
  else if(rx_lane_sts_reg4) {rxdataesc_reg_vld, rxdataesc_reg} <= 9'h0;
  else {rxdataesc_reg_vld, rxdataesc_reg} <= (rxvalidesc & rxlpdtesc & (!rxulpsesc) & (!(rxvalidhs)) & (csi2rx_cur_state == CSI2RX_ELPDT_MODE))  ?
                                             {1'b1, rxdataesc[7:0]} : 
                                             {rxdataesc_reg_vld, rxdataesc_reg}; 
  
always_ff @(posedge rxclkesc or negedge rst_n)
  if(~rst_n)  {rxtriggeresc_reg_vld, rxtriggeresc_reg} <= 5'h0;
  else if(rx_lane_sts_reg4) {rxtriggeresc_reg_vld, rxtriggeresc_reg} <= 5'h0;
  else {rxtriggeresc_reg_vld, rxtriggeresc_reg} <= ((!rxvalidesc) & (rxlpdtesc) & (!rxulpsesc) & (!(rxvalidhs)) & 
                                                   (csi2rx_cur_state == CSI2RX_ETRIGGER_MODE))  ? {1'b1, rxtriggeresc[3:0]} : 
                                                   {rxtriggeresc_reg_vld, rxtriggeresc_reg[3:0]};   
 


always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) csi2rx_cur_state <= 7'h1;
  else       csi2rx_cur_state <= csi2rx_next_state;

assign csi2rx_err = errsoths | errsotsynchs | erresc | errsyncesc | errcontrol | errcontentionlp0 | errcontentionlp1;  
logic rxlpdtesc_en;
logic rxulpsesc_en;
logic ulpsactivenot_en;
logic rxactivehs_en;
//logic [3:0] rxtriggeresc_reg;
logic [3:0] rxalpvalidhs_reg;
always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) rxlpdtesc_en <= 1'b0;
  else rxlpdtesc_en <= rxlpdtesc;
  
//always_ff @(posedge rxwordclkhs or negedge rst_n)
  //if(~rst_n) rxtriggeresc_reg <= 4'h0;
  //else rxtriggeresc_reg <= rxtriggeresc[3:0];
  //else rxtriggeresc_reg <= rxtriggeresc[3:0];
 always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) rxalpvalidhs_reg <= 4'h0;
else rxalpvalidhs_reg <= rxalpvalidhs[3:0];

always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) rxulpsesc_en <= 1'b0;
else rxulpsesc_en <= rxulpsesc;

always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) ulpsactivenot_en <= 1'b0;
  else ulpsactivenot_en <= ulpsactivenot;
  
always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) rxactivehs_en <= 1'b0;
else rxactivehs_en <= rxactivehs;

always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) wait_en <= 1'b0; 
  else       wait_en <= ((!(rxlpdtesc_en)) & (!(&(rxtriggeresc_reg[3:0])))
  & (!(rxulpsesc_en)) & (!(ulpsactivenot_en)) & (!(rxactivehs_en)) & (!(&rxalpvalidhs_reg[3:0])));

always_comb
case(csi2rx_cur_state)
CSI2RX_IDLE:
csi2rx_next_state = csi2rx_err | stopstate ? CSI2RX_IDLE :
                    (rx_lane_sts_reg7 & rxactivehs & 
					(|rxvalidhs[3:0]))? CSI2RX_HS_MODE :
					((|rxalpvalidhs[3:0]) & (!rxactivehs)) ? CSI2RX_ALP_MODE : 
                     (rxlpdtesc & (!rxactivehs)) ? CSI2RX_ELPDT_MODE : 
					 (|(rxtriggeresc[3:0]) & (!rxactivehs)) ? CSI2RX_ETRIGGER_MODE :
					 (rxulpsesc | ulpsactivenot & (!rxactivehs)) ? CSI2RX_EULPS_MODE : 
					 (wait_en) ? CSI2RX_EWAIT_MODE : 
					CSI2RX_IDLE;

CSI2RX_HS_MODE:
csi2rx_next_state = csi2rx_err /*| stopstate*/  ? CSI2RX_IDLE :
                    ((|rxalpvalidhs[3:0]) & (!rxactivehs)) ? CSI2RX_ALP_MODE : CSI2RX_HS_MODE;

CSI2RX_ALP_MODE:
csi2rx_next_state = csi2rx_err | stopstate ? CSI2RX_IDLE :
                    (rxactivehs & (|rxvalidhs[3:0])) ? CSI2RX_HS_MODE : CSI2RX_ALP_MODE;

CSI2RX_ELPDT_MODE:
csi2rx_next_state = csi2rx_err | stopstate ? CSI2RX_IDLE : CSI2RX_ELPDT_MODE;
                   

CSI2RX_ETRIGGER_MODE:
csi2rx_next_state = csi2rx_err | stopstate ? CSI2RX_IDLE : CSI2RX_ETRIGGER_MODE;

CSI2RX_EULPS_MODE:
csi2rx_next_state = csi2rx_err | stopstate ? CSI2RX_IDLE : CSI2RX_EULPS_MODE;

CSI2RX_EWAIT_MODE:
csi2rx_next_state = csi2rx_err | stopstate ? CSI2RX_IDLE :  rxactivehs ? CSI2RX_HS_MODE  : ((|rxalpvalidhs[3:0]) & (!rxactivehs))?CSI2RX_ALP_MODE: CSI2RX_EWAIT_MODE;

default: csi2rx_next_state = CSI2RX_IDLE;
endcase		

always_ff @(posedge rxwordclkhs or negedge rst_n)
  if(~rst_n) csi2rx_sm_sts <= 4'h0;
  else csi2rx_sm_sts <= (csi2rx_cur_state == CSI2RX_IDLE)          ? 4'h1 :
                        (csi2rx_cur_state == CSI2RX_HS_MODE)       ? 4'h2 : 
						(csi2rx_cur_state == CSI2RX_ALP_MODE)      ? 4'h4 : 
						(csi2rx_cur_state == CSI2RX_ELPDT_MODE)    ? 4'h6 : 
						(csi2rx_cur_state == CSI2RX_ETRIGGER_MODE) ? 4'h8 : 
						(csi2rx_cur_state == CSI2RX_EULPS_MODE)    ? 4'ha : 
						(csi2rx_cur_state == CSI2RX_EWAIT_MODE)    ? 4'hc : csi2rx_sm_sts;

 
endmodule	
