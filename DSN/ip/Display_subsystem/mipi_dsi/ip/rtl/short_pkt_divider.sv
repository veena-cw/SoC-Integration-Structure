//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: MIPI DSI
//  Module            				: short_pkt_divider
//  Primary Unit Owner                         	: krishna@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================
`define TxDataWidthHS 16
`define TxWordHS 32/`TxDataWidthHS

module short_pkt_divider (
    input  clk,              // Clock signal
    input  rst_n,            // Active-low reset
    input  [31:0] data_in,   // 32-bit input data
    input  valid_in,         // Input data valid
    
    output logic [`TxDataWidthHS - 1:0] data_out,  // Output data (padded with zeros for smaller widths)
    output logic  valid_out,        // Output data valid
    output logic ready_in          // Ready to accept new input
);

    // Internal logicisters
  
    logic [31:0] data_buffer;
    logic [1:0] bytes_sent;
    logic send_out;
    
   assign ready_in = !(|bytes_sent);
	
	always_ff @(posedge clk or negedge rst_n) 
		if (!rst_n) data_buffer <= 32'h0;
		else if (valid_in)  data_buffer <= data_in;
	
	
	always_ff @(posedge clk or negedge rst_n) 
		if (!rst_n) bytes_sent <= 2'b00;
  else bytes_sent <= (bytes_sent == (`TxWordHS -1))? 2'b00 : (send_out)? bytes_sent +2'b01 : bytes_sent;
		
	always_ff @(posedge clk or negedge rst_n) 
		if (!rst_n) send_out <= 1'b0;
		else if (valid_in) send_out <= 1'b1;
		else if (bytes_sent == (`TxWordHS-1))send_out <= 1'b0;
	
	always_ff @(posedge clk or negedge rst_n) 
		if (!rst_n) begin data_out <= {`TxDataWidthHS{1'b0}}; valid_out <= 1'b0; end
		else  begin data_out <= data_buffer[bytes_sent*`TxDataWidthHS+:`TxDataWidthHS];
		valid_out <= send_out;
		end
		
    
    
endmodule