`include "pixel_2_byte_conversion.sv"
`include "mipi_dcs_shortpacket.sv"
`include "dsi_ecc_tx_calculator.sv"
`include "long_packet.sv"
`include "dsi_crc16.sv"
`include "control_mechanism.sv"
`include "lane_management.sv"
`include "axi_dsi_reg_interface.sv"
`include "short_pkt_divider.sv"
`include "async_fifo.sv"
`include "posedge_detector.sv"

`define DataWidthHS_32
`define ADDR_WIDTH  32
    `define DATA_WIDTH  32

// Output lane options
//`define OUTPUT_LANES_1
//`define OUTPUT_LANES_2
//`define OUTPUT_LANES_3
//`define OUTPUT_LANES_4

// Define actual sizes based on configuration
`ifdef DataWidthHS_8
    `define TxDataWidthHS 8
	`define DEFAULT_RX_DATA_WIDTH 2'b00  // Force 8-bit for 1 lane
	`define LANES 1
`elsif TxDataWidthHS_16
    `define TxDataWidthHS 16
	`define DEFAULT_RX_DATA_WIDTH 2'b01  // Force 8-bit for 1 lane
	`define LANES 2
`elsif TxDataWidthHS_32
    `define TxDataWidthHS 32
	`define DEFAULT_RX_DATA_WIDTH 2'b10  // Force 8-bit for 1 lane
	`define LANES 4
`else
    // Default if none selected
    `define TxDataWidthHS 32
	`define DEFAULT_RX_DATA_WIDTH 2'b10  // Force 8-bit for 1 lane
	`define LANES 4
`endif


module dsi_tx_top
(
// high -speed transmit signals
input 									txwordclk_hs, //High-Speed Transmit Word Clock
input									rst_n, // global negative edge reset

output logic 	[1:0] 					txdatawidth_hs, //High-Speed Transmit Data bus Width Select.
output logic 	[`LANES-1:0][7:0]        txdata_hs,  // Fixed 8-bit lanes to the dphy    //High-Speed Transmit Data bus. 
output logic 	[`LANES-1:0]txwordvalid_hs, //High-Speed Transmit Word Data Valid
output logic 							txrequest_clock_hs, // request to send the clock
output logic 							txrequest_data_hs, // request the data send request

input 									txready_clock_hs, // ready signal from dphy to accpt clock
input 									txready_data_hs, // ready signal from dphy to accept data

output logic 							txdatatransfer_en_hs, // High-Speed Tx Data Transfer Enable
output logic 							txskewcal_hs, // High-Speed Transmit Skew Calibration
output logic 							txalternatecal_hs, //High-Speed Transmit Alternate Calibration
output logic							txeqactive_hs, // This is a level sensitive flag indicating the equalization active state.
output logic							txeqlevel_hs, //This is a level sensitive flag indicating the equalization level.

// escape mode tx signals

input   									txclk_esc, //Escape Mode Transmit Clock.
output logic 							txrequest_esc, //Escape Mode Transmit Request. 
output logic 	[3:0] 					txrequesttype_esc, //Escape Mode Transmit Request Type. 
output logic 							txlpdt_esc, // Escape Mode Transmit Low-Power Data. 
output logic 							txulps_exit, // Transmit ULP Exit Sequence. 
output logic 							txulps_esc, //Escape Mode Transmit Ultra-Low Power State.
output logic 	[3:0]					txtrigger_esc, //Escape Mode Transmit Trigger 0-3. 
output logic 	[7:0] 					txdata_esc, //Escape Mode Transmit Data. 
output logic 							txvalid_esc, // Escape Mode Transmit Data Valid

input 									txready_esc, //Escape Mode Transmit Ready.

// control signals
output logic 							turnrequest, //Turnaround Request
output logic 							turndisable, //Disable Turnaround. 
output logic 							forcerxmode, //Force Lane Module Into Receive mode / Wait for Stop state.
output logic 							forcetxstopmode, //Force Lane Module Into Transmit mode / Generate Stop state. 

input 									stopstate, //Lane is in Stop state. 
input 									direction, // Transmit/Receive Direction.
input 									ulpsactivenot,//ULP State (not) Active. 
input 									txhsidleclk_readyhs, //HS-Idle State Start. 

output logic 							txtrainingsel, //Transmit Long / Short Training Selection 
output logic 							txinittrain_hs, //Transmit Initial Training Enable 
output logic 							txhsidleclk_hs, //HS-Idle State Start. 
output logic 							txulpsclk, //Transmit Ultra-Low Power State on Clock Lane.
output logic 							ecmode, //Embedded Clock Mode Enable 
output logic 							alpmode, //Alternate Low Power Mode Selection. 
output logic 							enable, //Enable Lane Module. 

// error signals

input 									errsot_hs, //Start-of-Transmission (SoT) Error. 
input 									errsotsync_hs, //Start-of-Transmission Synchronization Error. 
input 									err_esc, //Escape Entry Error.
input 									errsync_esc, //Low-Power Data Transmission Synchronization Error.
input 									errcontrol, //Control Error. 
input 									errcontention_lp0, //LP0 Contention Error. 
input 									errcontention_lp1, //LP1 Contention Error. 



// dpi interface signals

input 									pixel_clk, // clock from soc
input 									vsync, //Vertical synchronization timing signal 
input 									hsync, //Horizontal synchronization timing signal
input 			[23:0] 					pixel_data, //Pixel data in 16-bit, 18-bit, or 24-bit format
input 									data_enable, //Data enable signal (assertion indicates valid pixels)
input 									shutdown, //Control pin to shut down display (used for Type 4 architecture only)
input 									colormode, //Control pin for switching between normal color and reduced color mode (used for Type 4 architecture only)

// user interface

input  			[7:0] 					dcs_command,     // DCS command byte
input  			[15:0] 					dcs_param,      // Parameter data (up to 2 bytes)
input  									param_valid,           // Parameter valid flag

input  									command_valid,         // Command valid flag

// inputs from ecc reception

input 									no_error, // no errors are present
input 									corrected_error, // single bit error is present which is correctable
input 									error, // multi bit error found

// inputs from rx_top
input 			[3:0] 					rxtrigger_esc, //Escape Mode Receive Trigger 0-3.
input 			[7:0] 					rxdata_esc, // Escape Mode Receive Data. 
input 									rxvalid_esc, //Escape Mode Receive Data Valid. 


// AXI4-Lite slave interface

input                      				aclk, // AXI clock
input                     				aresetn, // AXI active low reset

// write address channel
input   		[`ADDR_WIDTH-1:0]   		awaddr, // write address
input   		[2:0]   					awprot, // write protection (not used)
input                      				awvalid, // write address valid
output logic                     		awready, // write address ready

// write data channel
input   		[`DATA_WIDTH-1:0]   		wdata, // write data
input   	  	[`DATA_WIDTH/8-1:0]   		wstrb, // write byte strobes
input                      				wvalid, // write data valid
output logic                     		wready, // write data ready

// write response channel
output logic  	[1:0]   					bresp, // write response (00 OKAY, 10 SLVERR)
output logic                     		bvalid, // write response valid
input                      				bready, // write response ready

// read address channel
input   		[`ADDR_WIDTH-1:0]   		araddr, // read address
input   		[2:0]   					arprot, // read protection (not used)
input                      				arvalid, // read address valid
output logic                     		arready, // read address ready

// read data channel
output logic  	[`DATA_WIDTH-1:0]   		rdata, // read data
output logic  	[1:0]   					rresp, // read response (00 OKAY, 10 SLVERR)
output logic                     		rvalid, // read data valid
input                      				rready // read data ready
	
	

);

logic [3:0] format_sel;
logic [1:0] configuration;
logic [23:0] pixel_out;     // Output pixel data
logic pixel_out_valid; // pixel data valid
logic hsync_start;
logic hsync_stop;
logic [7:0] ecc_in_short,ecc_long;
logic  ecc_vld_short,ecc_valid_long;
logic 		send_eotp; // send the end of transaction
logic 		send_return_pkt_size; // send return size packet
logic [15:0] return_pkt_size; //return packet size
logic		 send_execute_size; // send the execute size
logic [7:0] compressed_data;  // compressed data
logic compressed_data_vld;  // compressed data valid
logic send_compressed_data;					// signal indicating to send the compressed data
logic [3:0] pixel_resolution; 				// dispaly resolution
logic [23:0] header_packet_short,long_pkt_header;			// header packet with data id and wc
logic  header_packet_valid_short,long_pkt_header_valid;			// header packet valid
logic [31:0] short_packet;        // Data ID field
logic short_packet_valid;           // End of Transmission valid
logic  long_packet_valid;          // data sent out valid
logic [`TxDataWidthHS-1:0] long_packet;  // Data sent from dsi-dphy
logic	crc_valid;		// CRC -16 valid
logic [15:0] crc;	//CRC 16
logic  crc_data_valid;			//Data valid sent to the crc module
logic [`TxDataWidthHS-1:0] crc_data,packet_out;			//Data sent to the crc module
logic lane_read_ready,packet_out_valid;
logic phy_ready;
logic ulps_active;
logic [7:0] rxdata_esc_reg;
logic video_mode_enable;
logic turnrequest_cond;
  logic [31:0] dsi_control;
  logic [31:0] dsi_escape_mode;
   logic ecc_error;
  logic te_received;
  logic [31:0] dsi_status_in,dsi_error_in;
  logic [31:0] dsi_error_status,dsi_status;
  logic txrequest_clock_hs_sig;

assign txdatawidth_hs = `DEFAULT_RX_DATA_WIDTH;

pixel_2_byte_conversion pix_2_byte_inst ( .pixel_clk( pixel_clk), .rst_n(rst_n), .pixel_in(pixel_data),.pixel_in_valid(data_enable), .format_sel(format_sel), 
											.configuration(configuration), .pixel_out(pixel_out), .pixel_out_valid(pixel_out_valid), .enable(enable), .video_mode_enable(video_mode_enable));

mipi_dcs_shortpacket   short_pkt_inst   ( .pixel_clk( pixel_clk), .rst_n(rst_n), .dcs_command(dcs_command), .dcs_param(dcs_param), .param_valid(param_valid),
											.command_valid(command_valid), .vsync(vsync),  .peripherial_on_off(shutdown), .color_mode_on_off(colormode),
											.ecc_in (ecc_in_short), .ecc_vld(ecc_vld_short), .hsync_start(hsync_start), .hsync_stop(hsync_stop), .send_eotp(send_eotp),
											.send_return_pkt_size(send_return_pkt_size), .return_pkt_size(return_pkt_size), .send_execute_size(send_execute_size),
											.compressed_data(compressed_data), .compressed_data_vld(compressed_data_vld),
											.send_compressed_data(send_compressed_data), .pixel_resolution(pixel_resolution), .header_packet(header_packet_short),
											.header_packet_valid(header_packet_valid_short), .short_packet(short_packet), .short_packet_valid(short_packet_valid), .enable(enable) );
											
dsi_ecc_tx_calculator ecc_tx_short_inst ( .pixel_clk( pixel_clk), .rst_n(rst_n), .data_in(header_packet_short), .data_in_vld(header_packet_valid_short), .ecc_out(ecc_in_short),
											.valid_out(ecc_vld_short));
											
long_packet  long_pkt_inst              ( .pixel_clk( pixel_clk), .rst_n(rst_n), .data_in(pixel_out), .data_valid(pixel_out_valid), .format_sel(format_sel), .crc_valid(crc_valid),
											.crc_16(crc), .ecc_valid(ecc_valid_long), .ecc(ecc_long), .pixel_resolution(pixel_resolution), .hsync_start(hsync_start),
											.hsync_stop(hsync_stop), .long_pkt_header(long_pkt_header), .long_pkt_header_valid(long_pkt_header_valid), 
											.crc_data_valid(crc_data_valid), .crc_data(crc_data), .data_out_valid(long_packet_valid), .data_out(long_packet));
											
dsi_ecc_tx_calculator ecc_tx_long_inst ( .pixel_clk( pixel_clk), .rst_n(rst_n), .data_in(long_pkt_header), .data_in_vld(long_pkt_header_valid), .ecc_out(ecc_long),
											.valid_out(ecc_valid_long));
											
dsi_crc16 crc_inst					   ( .pixel_clk( pixel_clk), .rst_n(rst_n), .data_in(crc_data), .data_valid(crc_data_valid), .crc_out(crc), .crc_valid(crc_valid));
    
control_mechanism  cntl_inst		   ( .pixel_clk( pixel_clk), .rst_n(rst_n), .short_packet(short_packet), .short_packet_valid(short_packet_valid),
											.long_packet_valid(long_packet_valid), .long_packet(long_packet), .lane_read_ready(lane_read_ready),
											.txready_clock_hs(txready_clock_hs), .txready_data_hs(txready_data_hs), .txrequest_clock_hs(txrequest_clock_hs_sig),
											.txrequest_data_hs(txrequest_data_hs), .txwordclk_hs(txwordclk_hs), 
											.packet_out(packet_out), .packet_out_valid(packet_out_valid),.short_empty(short_fifo_empty),.short_full(short_fifo_full),
											.long_empty(data_fifo_empty),.long_full(data_fifo_full), .turnrequest_cond(turnrequest_cond));
											
lane_managment  lane_mngt_inst		   ( .txwordclk_hs(txwordclk_hs), .rst_n(rst_n), .data_in_valid(packet_out_valid), .data_in(packet_out), .txdata_hs(txdata_hs),
											.txwordvalid_hs(txwordvalid_hs), .read_pulse(lane_read_ready)); 


axi_lite_dsi_reg_interface #(
    .ADDR_WIDTH (`ADDR_WIDTH),
    .DATA_WIDTH (`DATA_WIDTH)
) reg_inst (
    // AXI clock and reset
    .s_axi_aclk    (aclk),
    .s_axi_aresetn (aresetn),

    // AXI write address channel
    .s_axi_awaddr  (awaddr),
    .s_axi_awvalid (awvalid),
    .s_axi_awready (awready),

    // AXI write data channel
    .s_axi_wdata   (wdata),
    .s_axi_wstrb   (wstrb),
    .s_axi_wvalid  (wvalid),
    .s_axi_wready  (wready),

    // AXI write response channel
    .s_axi_bresp   (bresp),
    .s_axi_bvalid  (bvalid),
    .s_axi_bready  (bready),

    // AXI read address channel
    .s_axi_araddr  (araddr),
    .s_axi_arvalid (arvalid),
    .s_axi_arready (arready),

    // AXI read data channel
    .s_axi_rdata   (rdata),
    .s_axi_rvalid  (rvalid),
    .s_axi_rresp   (rresp),
    .s_axi_rready  (rready),

    // DSI register interface
    .dsi_control      (dsi_control),
    .dsi_status       (dsi_status),
    .dsi_escape_mode  (dsi_escape_mode),
    .dsi_error_status (dsi_error_status),

    // DSI status and error inputs
    .dsi_status_in (dsi_status_in),
    .dsi_error_in  (dsi_error_in),

    // DSI escape signals
    .txready_esc   (txready_esc),
    .txlpdt_esc    (txlpdt_esc),
    .txtrigger_esc (txtrigger_esc),
    .stopstate     (stopstate)
);									

assign video_mode_enable = dsi_control[1];
assign ulps_active = !ulpsactivenot;
assign phy_ready = 	txready_data_hs;
assign format_sel = dsi_control[8:6];
assign configuration = dsi_control[22:21];
assign pixel_resolution = dsi_control[16:13];
assign txtrainingsel = dsi_control[17] & enable;
assign txdatatransfer_en_hs = enable & dsi_control[2];
assign alpmode = enable & dsi_control[19];
assign ecmode = enable & dsi_control[18];
assign txinittrain_hs = ecmode & stopstate & dsi_control[3];
assign forcetxstopmode = dsi_control[24];
assign forcerxmode = dsi_control[25];
assign turndisable = dsi_control[26];

always_ff @(posedge pixel_clk or negedge rst_n)
	if(~rst_n)  txeqactive_hs <=1'b0;
	else txeqactive_hs <= dsi_control[29];
	
always_ff @(posedge pixel_clk or negedge rst_n)
	if(~rst_n)  txeqlevel_hs <=1'b0;
	else  txeqlevel_hs <= dsi_control[30];


always_ff @(posedge txwordclk_hs or negedge rst_n)
	if(~rst_n)  txskewcal_hs <=1'b0;
	else  txskewcal_hs <= dsi_control[27] & !dsi_control[28] & !txrequest_esc;
	
always_ff @(posedge txwordclk_hs or negedge rst_n)
	if(~rst_n)  txalternatecal_hs <=1'b0;
	else  txalternatecal_hs <= dsi_control[27] & dsi_control[28] & !txrequest_esc;
	
always_ff @( posedge pixel_clk or negedge rst_n)
	if(!rst_n) txrequest_clock_hs <= 1'b0;
	else txrequest_clock_hs <= (txrequest_clock_hs_sig | dsi_control[27]) & !txrequest_esc ;

always_ff @(posedge txclk_esc or negedge rst_n)
	if(~rst_n) turnrequest <= 1'b0;
	else if (stopstate) turnrequest <= 1'b0;
	else if (turnrequest_cond) turnrequest <= 1'b1;

always_ff @(posedge txclk_esc or negedge rst_n) begin
    if (!rst_n) begin
        txulpsclk <= 1'b0;  // Reset state
    end
    else begin
        // Assert TxHSIdleClkHS only when TxHSIdleClkReadyHS is de-asserted
        if (((dsi_escape_mode[4:0] == 5'h3 && alpmode) | (txulps_esc)) & enable)
            txulpsclk <= 1'b1;
  
        // De-assert TxHSIdleClkHS only when TxHSIdleClkReadyHS is asserted  
        else if (txulpsclk & txulps_exit)
            txulpsclk <= 1'b0;
        // Otherwise maintain current state
    end
end




always_ff @(posedge txclk_esc or negedge rst_n) 
    if (!rst_n) txulps_exit <= 1'b0;  // Reset state
    else if (((!dsi_escape_mode[0]) | (dsi_escape_mode[1])) & dsi_escape_mode[19] & !ulpsactivenot) txulps_exit <= 1'b1;
	else if (txulps_exit & ulpsactivenot) txulps_exit <= 1'b0;
       

assign enable = dsi_control[0];

always_ff @(posedge aclk or negedge rst_n) begin
    if (!rst_n) begin
        txhsidleclk_hs <= 1'b0;  // Reset state
    end
    else begin
        // Assert TxHSIdleClkHS only when TxHSIdleClkReadyHS is de-asserted
        if (txrequest_esc && dsi_control[23]) begin
            txhsidleclk_hs <= 1'b1;
        end
        // De-assert TxHSIdleClkHS only when TxHSIdleClkReadyHS is asserted  
        else if (txhsidleclk_readyhs && !dsi_control[23]) begin
            txhsidleclk_hs <= 1'b0;
        end
        // Otherwise maintain current state
    end
end

always_ff @(posedge txclk_esc or negedge rst_n)
	if(~rst_n) rxdata_esc_reg <= 8'h0;
	else if (rxvalid_esc) rxdata_esc_reg <= rxdata_esc;
	
always_ff @(posedge txclk_esc or negedge rst_n)
	if(~rst_n) txulps_esc <= 1'b0;
	else txulps_esc <= !alpmode & (&(dsi_escape_mode[1:0]))& enable;


always_ff @(posedge txclk_esc or negedge rst_n)
	if (~rst_n) txrequest_esc <= 1'b0;
	else if (enable & !txready_clock_hs) txrequest_esc <= dsi_escape_mode[0];
	
always_ff @(posedge txclk_esc or negedge rst_n)
	if (~rst_n)      txrequesttype_esc <= 4'h0;
	else if (enable & txrequest_esc) txrequesttype_esc <= dsi_escape_mode[4:1];
	
always_ff @(posedge txclk_esc or negedge rst_n)
	if (~rst_n) txtrigger_esc <= 19'h0;
	else if (enable & txrequest_esc)        txtrigger_esc <= dsi_escape_mode[8:5];
	
always_ff @(posedge txclk_esc or negedge rst_n)
	if (~rst_n) txlpdt_esc <= 19'h0;
	else if (enable & txrequest_esc)        txlpdt_esc <= dsi_escape_mode[9];

always_ff @(posedge txclk_esc or negedge rst_n)
	if (~rst_n) txdata_esc <= 8'h0;
	else if (enable & txrequest_esc)        txdata_esc <= dsi_escape_mode[17:10];
	
always_ff @(posedge txclk_esc or negedge rst_n)
	if (~rst_n) txvalid_esc <= 1'b0;
	else if (enable & txrequest_esc)        txvalid_esc <= dsi_escape_mode[18];

							
assign dsi_error_in = {22'h0,errcontention_lp1,errcontention_lp0,errcontrol,errsync_esc,err_esc,errsotsync_hs,errsot_hs,ecc_error,1'b0};
assign dsi_status_in = {10'h0,rxtrigger_esc,rxdata_esc_reg,stopstate,ulps_active,alpmode,direction,phy_ready,te_received,data_fifo_full,data_fifo_empty,short_fifo_full,short_fifo_empty};
 
	
	
	
endmodule
