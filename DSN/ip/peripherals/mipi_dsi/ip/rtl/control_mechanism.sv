//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: MIPI DSI
//  Module            				: control_mechanism
//  Primary Unit Owner                         	: krishna@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================
`define TxDataWidthHS 16
module control_mechanism (
    input  pixel_clk, 
    input  rst_n,
	
	input  [31:0] short_packet,     // short packet from the mipi short packet module    
    input  short_packet_valid,   // short packet valid       
	
	input  long_packet_valid,         // long packet valid   
    input [`TxDataWidthHS-1:0] long_packet,   // long packet from the long packt module
	
	//input short_pkt_ready,
	input lane_read_ready, // ready from the lane mangement to send the next data
	
	input txready_clock_hs, // ready signal from dphy to accpt clock
	input txready_data_hs, // ready signal from dphy to accept data
	
	output logic txrequest_clock_hs, // request to send the clock
	output logic txrequest_data_hs, // request the data send request
	
	output logic [`TxDataWidthHS-1:0] packet_out, // packet to the lane mangement block
	output logic   packet_out_valid, // packet valid to the lane mangement class
	input  txwordclk_hs, // clock to the dphy layer
	output logic short_empty, // short fifo empty
	output logic short_full, // short fifo full
	output logic long_empty, // long fifo empty
	output logic long_full, // long fifo full
	output logic turnrequest_cond // a condition to introduce turn around
	
);

  	logic short_packet_out_valid;
	logic long_packet_out_valid;
	logic short_pkt_ready;
	logic short_out_vld;
	logic [31:0] short_out;
	logic short_read;
	logic long_read;
	logic [`TxDataWidthHS-1:0] short_packet_out,long_packet_out;
	logic valid_out;
  logic short_request,long_request;
  logic priority_to_short;
	logic [3:0] count_value;

short_pkt_divider short_inst(txwordclk_hs,rst_n,short_out,short_packet_out_valid,short_packet_out,valid_out, short_pkt_ready);


always_ff @(posedge pixel_clk or negedge rst_n)
	if(!rst_n) turnrequest_cond <= 1'b0;
	else if ((short_out[7:2] == 6'h04) | (short_out[7:2] == 6'h06) | 
			(short_out[7:2] == 6'h14) | (short_out[7:2] == 6'h24) ) turnrequest_cond <= 1'b1;
	else if (count_value == 4'hf) turnrequest_cond <= 1'b0;
	
always_ff @(posedge pixel_clk or negedge rst_n)
	if(!rst_n) count_value <= 4'h0;
	else if ((short_out[5:0] == 6'h04) | (short_out[5:0] == 6'h06) | 
			(short_out[5:0] == 6'h14) | (short_out[5:0] == 6'h24) ) count_value <= 4'h1;
	else count_value <= (|count_value)? count_value+4'h1 : count_value;	

  
  async_fifo_binary #(32,4) short_pkt_inst ( .wr_clk(pixel_clk), .wr_rst_n(rst_n), .wr_en(short_packet_valid), .wr_data(short_packet),.full(short_full),
											.rd_clk(txwordclk_hs),.rd_rst_n(rst_n),.rd_en(short_read),.rd_data(short_out),.empty(short_empty)
);

  async_fifo_binary #(`TxDataWidthHS,9) long_pkt_inst ( .wr_clk(pixel_clk), .wr_rst_n(rst_n), .wr_en(long_packet_valid), .wr_data(long_packet),.full(long_full),
											.rd_clk(txwordclk_hs),.rd_rst_n(rst_n),.rd_en(long_read),.rd_data(long_packet_out),.empty(long_empty)
);
  
  
  
  always_ff @(posedge pixel_clk or negedge rst_n)
	if(!rst_n) txrequest_clock_hs <= 1'b0;
	else if (lane_read_ready & short_empty & long_empty) txrequest_clock_hs <= 1'b0;
	else if (!long_empty | !short_empty)txrequest_clock_hs <= 1'b1;
	
 always_ff @(posedge pixel_clk or negedge rst_n)
	if(!rst_n) txrequest_data_hs <= 1'b0;
	else txrequest_data_hs <= (!long_empty | !short_empty) & txready_clock_hs;
		
 // assign txwordclk_hs = txready_clock_hs & pixel_clk;
  
  assign short_read = short_pkt_ready & txready_data_hs & short_request & lane_read_ready;
  assign long_read = txready_data_hs & !short_request & long_request & lane_read_ready;
  
  always_ff @(posedge txwordclk_hs or negedge rst_n) 
		if (!rst_n) short_packet_out_valid <= 32'h0;
		else  short_packet_out_valid <= short_read;
  
  always_ff @(posedge txwordclk_hs or negedge rst_n) 
		if (!rst_n) long_packet_out_valid <= 32'h0;
		else  long_packet_out_valid <= long_read;

  
  assign short_request = !short_empty & priority_to_short & !turnrequest_cond;
  assign long_request = !long_empty & !priority_to_short ;
  
  always_ff @(posedge txwordclk_hs or negedge rst_n) begin
    if (!rst_n) begin
        priority_to_short <= 1'b0; // Start with short priority
    end 
	else begin
        // Switch priority only when current priority queue becomes empty
        if (priority_to_short && short_empty) begin
            priority_to_short <= 1'b0; // Switch to long when short queue is empty
        end else if (!priority_to_short && long_empty) begin
            priority_to_short <= 1'b1; // Switch to short when long queue is empty
        end
    end
end
  
  assign packet_out = valid_out ? short_packet_out : long_packet_out;
  assign packet_out_valid =  valid_out | long_packet_out_valid;
  
  endmodule