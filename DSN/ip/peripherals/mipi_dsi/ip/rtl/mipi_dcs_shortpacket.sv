//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: MIPI DSI
//  Module            				: mipi_dcs_shortpacket
//  Primary Unit Owner                         	: krishna@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================
module mipi_dcs_shortpacket (
    input  pixel_clk,       // global clock
    input  rst_n,		// global negative edge reset
    
    // Command inputs
    input  [7:0] dcs_command,     // DCS command byte
    input  [15:0] dcs_param,      // Parameter data (up to 2 bytes)
    input  param_valid,           // Parameter valid flag
    input  command_valid,         // Command valid flag
    input  [7:0] ecc_in,         // Input ECC value
	input 		ecc_vld,		// ECC value valid
    input        vsync,			// vertical syncronization level signal
	input 		 hsync_start,			// horizontal syncronization level signal
	input        hsync_stop,
	input 		peripherial_on_off, // 1- PERIPH_ON & level
	input 		color_mode_on_off, // 1- color mode on & level
	input 		send_eotp, // send the end of transaction
	input 		send_return_pkt_size, // send return size packet
	input [15:0] return_pkt_size, //return packet size
	input		 send_execute_size, // send the execute size
	input [7:0] compressed_data,  // compressed data
	input compressed_data_vld,  // compressed data valid
	input send_compressed_data,					// signal indicating to send the compressed data
	input [3:0] pixel_resolution, 				// dispaly resolution
	input enable, // dsi controller enabled
    // Output packet fields
	output logic [23:0] header_packet,			// header packet with data id and wc
	output logic  header_packet_valid,			// header packet valid
    output logic [31:0] short_packet,        // Data ID field
    output logic short_packet_valid           // End of Transmission valid
    
);
	
	logic [23:0] short_packet_reg;  // short packet register
	logic vsync_start;  // vsync start
	logic vsync_stop;   // vsync stop
	//logic hsync_start,hsync_stop; //hsync start & hsync stop
	logic peri_on ,peri_off,header_packet_valid_reg; // peripherial_on_off
	logic color_m_on,color_m_off; // color mode on & off
	logic  parameter_0,parameter_1_r_D_H,parameter_1_w,parameter_2_w,parameter_2_r; // signal indicates for parameter 0,1&2
	logic A,B,C,D,E,F,G,H,valid_store; // signals used in k-map
	logic [7:0] data0,data1; // data0 & data1 of short packet
	logic [9:0] maximum_count;
	logic [9:0] count;
	
	logic [1:0] vc;
  
  localparam QCVGA      		= 4'b0000;  // 160×120
    localparam QCIF       		= 4'b0001;  // 176×144
    localparam QCIF_PLUS1 		= 4'b0010;  // 176×208
    localparam QCIF_PLUS2 		= 4'b0011;  // 176×220
    localparam QVGA       		= 4'b0100;  // 320×240
    localparam CIF        		= 4'b0101;  // 352×288
    localparam CIF_PLUS1  		= 4'b0110;  // 352×416
    localparam CIF_PLUS2  		= 4'b0111;  // 352×440
    localparam HALF_VGA   		= 4'b1000;  // 320×480
    localparam TWO_THIRDS_VGA 	= 4'b1001; // 640×320
    localparam VGA        		= 4'b1010;  // 640×480
    localparam WVGA       		= 4'b1011;  // 800×480
    localparam SVGA       		= 4'b1100;  // 800×600
    localparam XVGA       		= 4'b1101;  // 1024×768
    // 4'b1110 and 4'b1111 available for future use
	
	assign vc = 2'b00;
	assign {A,B,C,D,E,F,G,H} = dcs_command;
	
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  count <= 10'h0;
		else count <= (vsync_stop)? 10'h0 : (hsync_stop)? count + 1 : count; 
		
	assign vsync_stop = (count == maximum_count);
	
		
	always_comb
	begin
	case (pixel_resolution)
	QCVGA: maximum_count = 12'h78; //120
	QCIF: maximum_count = 12'h90; //144
	QCIF_PLUS1: maximum_count = 12'hd0; //208
	QCIF_PLUS2: maximum_count = 12'hdc; //220
	QVGA:  maximum_count = 12'hf0; //240
	HALF_VGA: maximum_count = 12'h1e0; // 480
	CIF: maximum_count = 12'h120; //288
	CIF_PLUS1: maximum_count = 12'h1a0; //416
	CIF_PLUS2: maximum_count = 12'h1e0; // 480
	TWO_THIRDS_VGA: maximum_count = 12'h140; //320
	VGA: maximum_count =  12'h1e0; //480
	WVGA:  maximum_count = 12'h1e0; //480
	SVGA: maximum_count = 12'h258; //600
	XVGA: maximum_count = 12'h300; //768
	default:maximum_count =  12'h1e0;
	endcase
	end
	
	posedge_detector vs_st( pixel_clk,rst_n,vsync,vsync_start );
	//posedge_detector hs_st( pixel_clk,rst_n,hsync,hsync_start );

	//negedge_detector vs_stop( pixel_clk,rst_n,vsync,vsync_stop );
	//negedge_detector hs_stop( pixel_clk,rst_n,hsync,hsync_stop );
	
	posedge_detector p_n( pixel_clk,rst_n,peripherial_on_off,peri_off );
	negedge_detector p_f( pixel_clk,rst_n,peripherial_on_off,peri_on );
	
	posedge_detector cm_n( pixel_clk,rst_n,color_mode_on_off,color_m_on );
	negedge_detector cm_f( pixel_clk,rst_n,color_mode_on_off,color_m_off );
	
	posedge_detector hdr_vld ( pixel_clk,rst_n,valid_store,header_packet_valid_reg );
	
	assign parameter_0 = (!A&!B&!C&!E&!F&!G&!H)|(!A&!B&!C&D&!E&!F&G&!H)|(!A&!B&!C&D&!E&!F&H)|(!A&!B&!D&!E&!F&!G&H)|(!A&!B&C&E&!F&!G)|(!A&C&!D&!E&!F&!G&!H)|(!A&B&C&D&!E&!F&G&H)|(!A&C&D&!E&F&!G&!H) ;
	assign parameter_1_w = (!A&!B&C&!D&!E&F&G&!H)|(!A&!B&C&D&!E&F&!G&H)|(!A&!B&C&D&E&!F&G&!H)|(!A&B&!C&!D&!E&!F&!G&!H)|(!A&B&!C&D&!E&!F&G&H)|(!A&B&!C&D&!E&F&!G&H)|(!A&B&C&D&!E&!F&!G&H)|(!A&C&D&!E&F&G&!H);
	assign parameter_1_r_D_H = (!A&!B&!C&!D&!E&F&G&H)|(!A&!B&!C&!D&E&!F&G&!H)|(!A&!B&!C&!D&!F&G&H)|(!A&!B&!C&!D&E&!G&!H)|(!A&!B&!C&!D&F&!G&H)|(!A&!B&!C&!D&F&G&!H)|(!A&!B&!D&E&F&G&H)|(!A&B&!C&D&!E&F&!H)|(!A&B&C&D&!E&!F&!G&!H);
	assign parameter_2_w =  (!A&!B&C&D&!E&!F&!G&!H)|(!A&!B&C&D&!E&F&G&H)|(!A&B&!C&D&!E&!F&!G&H)|(!A&B&!C&D&E&F&G&!H)|(!A&B&C&!D&!E&!F&!G&H);
	assign parameter_2_r = (!A&!B&!C&D&!E&F&!G)|(!A&!B&C&D&E&F&G&H)|(!A&B&!C&!D&!E&F&!G&H)|(!A&B&!C&D&!E&!F&G&!H)|(!A&B&!C&D&E&F&G&H);
		
		/*
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  data0 <= 8'h0;
		else if (short_packet_valid) data0 <= 8'h0;
		else if (send_return_pkt_size) data0 <= {return_pkt_size[0],return_pkt_size[1],return_pkt_size[2],return_pkt_size[3],return_pkt_size[4],return_pkt_size[5],return_pkt_size[6],return_pkt_size[7]};
		else if (compressed_data_vld) data0 <= {compressed_data[0],compressed_data[1],compressed_data[2],compressed_data[3],compressed_data[4],compressed_data[5],compressed_data[6],compressed_data[7]};
		else if (param_valid) data0 <= {dcs_param[0],dcs_param[1],dcs_param[2],dcs_param[3],dcs_param[4],dcs_param[5],dcs_param[6],dcs_param[7]};
	*/
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  data0 <= 8'h0;
		else if (short_packet_valid) data0 <= 8'h0;
		else if (send_return_pkt_size) data0 <= {return_pkt_size[7:0]};
		else if (compressed_data_vld) data0 <= {compressed_data[7:0]};
		else if (param_valid) data0 <= {dcs_param[7:0]};
	
	
	/*
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  data1 <= 8'h0;
		else if (short_packet_valid) data1 <= 8'h0;
		else if (send_return_pkt_size) data1 <= {return_pkt_size[8],return_pkt_size[9],return_pkt_size[10],return_pkt_size[11],return_pkt_size[12],return_pkt_size[13],return_pkt_size[14],return_pkt_size[15]};
		else if (param_valid) data1 <= {dcs_param[8],dcs_param[9],dcs_param[10],dcs_param[11],dcs_param[12],dcs_param[13],dcs_param[14],dcs_param[15]};
	*/
	
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  data1 <= 8'h0;
		else if (short_packet_valid) data1 <= 8'h0;
		else if (send_return_pkt_size) data1 <= {return_pkt_size[15:8]};
		else if (param_valid) data1 <= {dcs_param[15:8]};
	
	
	

	
	/*
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  header_packet <= 24'h0;
		else header_packet <= {data1,data0,short_packet_reg[0],short_packet_reg[1],short_packet_reg[2],
								short_packet_reg[3],short_packet_reg[4],short_packet_reg[5],short_packet_reg[6],short_packet_reg[7]};
	*/
	
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  header_packet <= 24'h0;
		else header_packet <= {data1,data0,short_packet_reg[7:0]};
	
		always_ff @(posedge pixel_clk or negedge rst_n)
		if (!rst_n) short_packet_reg <= 24'h0;
		else if (short_packet_valid) short_packet_reg <= 24'h0;
		else if (vsync_start) short_packet_reg <= {16'h0,6'h01,vc[1],vc[0]};
		else if (vsync_stop) short_packet_reg <= {16'h0,6'h11,vc[1],vc[0]};
		else if (hsync_start) short_packet_reg <= {16'h0,6'h21,vc[1],vc[0]};
		else if (hsync_stop) short_packet_reg <= {16'h0,6'h31,vc[1],vc[0]};
		else if (peri_on) short_packet_reg <= {16'h0,6'h32,vc[1],vc[0]};
		else if (peri_off) short_packet_reg <= {16'h0,6'h22,vc[1],vc[0]};
		else if (color_m_on) short_packet_reg <= {16'h0,6'h12,vc[1],vc[0]};
		else if (color_m_off) short_packet_reg <= {16'h0,6'h02,vc[1],vc[0]};
		else if (parameter_0 & command_valid) short_packet_reg <= {16'h0,dcs_command[5:0],vc[1],vc[0]};
		else if (parameter_1_w & command_valid) short_packet_reg <= {16'h0,6'h15,vc[1],vc[0]};
		else if ((parameter_1_r_D_H) & command_valid) short_packet_reg <= {16'h0,6'h14,vc[1],vc[0]};
		else if (parameter_2_w & command_valid) short_packet_reg <= {16'h0,6'h23,vc[1],vc[0]}; 
		else if (parameter_2_r & command_valid) short_packet_reg <= {16'h0,6'h24,vc[1],vc[0]};
		else if (send_return_pkt_size) short_packet_reg <= {16'h0,6'h37,vc[1],vc[0]};
		else if (send_execute_size) short_packet_reg <= {16'h0,6'h16,vc[1],vc[0]};
		else if (send_compressed_data) short_packet_reg <= {16'h0,6'h07,vc[1],vc[0]};

	
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  valid_store <= 1'b0;
		else if (ecc_vld) valid_store <= 1'b0;	
		else if (command_valid | send_compressed_data | send_execute_size | send_return_pkt_size | color_m_off | color_m_on 
		| peri_off | peri_on | hsync_stop | hsync_start | vsync_stop |  vsync_start ) valid_store <= 1'b1;	

	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  short_packet <= 32'h0;
		//else short_packet <= {short_packet_reg[7:0],data0,data1,ecc_in};
		else short_packet <= {ecc_in,data1,data0,short_packet_reg[7:0]};
		
	always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  short_packet_valid <= 1'b0;
		else if (enable) short_packet_valid <= ecc_vld;
  
  always_ff @ (posedge pixel_clk or negedge rst_n)
		if(!rst_n)  header_packet_valid <= 1'b0;
		else header_packet_valid <= header_packet_valid_reg;
 
endmodule	


/*

	always_ff @(posedge pixel_clk or negedge rst_n)
		if (!rst_n) short_packet_reg <= 24'h0;
		else if (short_packet_valid) short_packet_reg <= 24'h0;
		else if (vsync_start) short_packet_reg <= {16'h0,6'b1000_00,vc[1],vc[0]};
		else if (vsync_stop) short_packet_reg <= {16'h0,6'b1000_10,vc[1],vc[0]};
		else if (hsync_start) short_packet_reg <= {16'h0,6'b1000_01,vc[1],vc[0]};
		else if (hsync_stop) short_packet_reg <= {16'h0,6'b1000_11,vc[1],vc[0]};
		else if (peri_on) short_packet_reg <= {16'h0,6'b0100_11,vc[1],vc[0]};
		else if (peri_off) short_packet_reg <= {16'h0,6'b0100_01,vc[1],vc[0]};
		else if (color_m_on) short_packet_reg <= {16'h0,6'b0100_10,vc[1],vc[0]};
		else if (color_m_off) short_packet_reg <= {16'h0,6'b0100_00,vc[1],vc[0]};
		else if (parameter_0 & command_valid) short_packet_reg <= {16'h0,6'b1010_00,vc[1],vc[0]};
		else if (parameter_1_w & command_valid) short_packet_reg <= {16'h0,6'b1010_10,vc[1],vc[0]};
		else if ((parameter_1_r_D_H) & command_valid) short_packet_reg <= {16'h0,6'b0110_00,vc[1],vc[0]};
		else if (parameter_2_w & command_valid) short_packet_reg <= {16'h0,6'b1100_01,vc[1],vc[0]}; 
		else if (parameter_2_r & command_valid) short_packet_reg <= {16'h0,6'b0010_01,vc[1],vc[0]};
		else if (send_return_pkt_size) short_packet_reg <= {16'h0,6'b1110_11,vc[1],vc[0]};
		else if (send_execute_size) short_packet_reg <= {16'h0,6'b0110_10,vc[1],vc[0]};
		else if (send_compressed_data) short_packet_reg <= {16'h0,6'b1110_00,vc[1],vc[0]};

*/	