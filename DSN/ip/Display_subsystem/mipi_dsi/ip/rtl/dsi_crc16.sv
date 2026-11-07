//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: MIPI DSI
//  Module            				: dsi_crc16
//  Primary Unit Owner                         	: krishna@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

//`define TxDataWidthHS 32

module dsi_crc16 (
    input  pixel_clk, // global clock
    input  rst_n, // global negative edge reset
	input  [`TxDataWidthHS-1:0] data_in, // data in 
    input  data_valid, // data valid
    output logic [15:0] crc_out, // crc generated
	output logic crc_valid // crc valid
);

    parameter POLY = 16'h8408;  // CRC-16-CCITT polynomial (bit-reversed)
    logic [15:0] crc;
	//logic [15:0] count;
	logic [15:0] word_count = 16'h17;
	logic [7:0] byte_in;
	logic [15:0] temp_crc;
   integer i;
  
    always_ff @(posedge pixel_clk or negedge rst_n) 
        if (!rst_n) crc <= 16'hFFFF;  // Initialize CRC to 0xFFFF
      	else if (data_valid)  crc <= temp_crc;
        
 

   always_comb
     begin
        if (data_valid) begin
            temp_crc = crc;

            // Process each bit of the input byte
          for (i = 0; i < `TxDataWidthHS; i = i + 1) begin
                if ((temp_crc[0] ^ data_in[i]) == 1'b1)
                    temp_crc = (temp_crc >> 1) ^ POLY;
                else
                    temp_crc = temp_crc >> 1;
            end         
     end
     end
 
/*

always_ff @(posedge pixel_clk or negedge rst_n) 
        if (!rst_n) count <= 17'h0;
		else if (crc_valid) count <= 17'h0;
		else count <= (data_valid) ? count + 17'h1 : count;
*/


always_ff @(posedge pixel_clk or negedge rst_n) 
        if (!rst_n) crc_valid <= 1'b0;
		else crc_valid <= data_valid;

  //  assign crc_out = {crc[7:0], crc[15:8]};  // Swap MSB and LSB for final output
  assign crc_out = crc[15:0];

endmodule
