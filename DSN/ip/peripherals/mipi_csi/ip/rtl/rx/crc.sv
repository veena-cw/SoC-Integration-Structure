//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: CSI-2 Controller
//  Module            				: crc_hdr_32
//  Primary Unit Owner                         	: veena@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
// Description: The module contains the logic for cyclic redundancy check calculation.
//=================================================================================

 module crc16 (
input         clk,                       //clock signal
input         rst_n,                     //negative egde reset
input         crc_valid_rx,                //control signal indicating that the header data obtained from Low Level Protocol is valid  
  input  [7:0] crc_data_rx,                   //header data obtained from the Low Level Protocol Layer
//input         data_valid,
 // input [23:0] data,
 
   output logic crc_out_vld_rx,
  output logic [15:0] crc_out_rx);
//output logic crc_out_dvld,
  //output logic [15:0] crc_dout);            //final swapped crc data
 logic crc_valid_r;
//  logic data_valid_r;
   logic [15:0] crc;                        //crc value obtained from the crc generator based on the 29 bits header data and 3 zero bits padded at the LSB
logic [31:0] aligned_data;               //data obtained after concatenation of 29-bits header and 3 zero bits padded after the header data
   logic [15:0] reg_crc;                    //register storing each crc value based on shifting and xor (if needed) operation
integer      j;                          //integer value to count the data bits from 0 to 31

parameter POLY = 16'h8408;               // CRC-16-CCITT polynomial (bit-reversed) 

 always_ff @(posedge clk or negedge rst_n) begin
     if (!rst_n) begin
            crc <= 16'hFFFF;  // Initialize CRC to 0xFFFF
     end 
   else if (!crc_valid_rx) crc <= 16'hFFFF; 
   else if (crc_valid_rx) begin 

            crc <= reg_crc;
        end
    end
  
//  always_ff @(posedge clk or negedge rst_n) begin
  //  if (!rst_n)  reg_crc <= crc; 
	always_comb begin
      if (crc_valid_rx) begin
            
            reg_crc =  crc; 

            // Process each bit of the input byte
      for (j = 0; j < 8; j = j + 1) begin
        $display("hdr_data_rx = %0h",crc_data_rx[j]);
        $display("reg_crc[0] = %0h",reg_crc[0]);  
        if (reg_crc[0] ^ (crc_data_rx[j] == 1'b1))
          begin
                    reg_crc = (reg_crc >> 1) ^ POLY;
        $display("reg_crc1 = %0h",reg_crc);  
          end
        else begin
                    reg_crc = reg_crc >> 1;//1'b0; //1;
                    $display("reg_crc = %0h",reg_crc);    
    end
            end
       
   end
    
         
  end  
  
 /* always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)  reg_crc <= crc; 
	//always_comb begin
    else if (hdr_valid_rx) begin
            
         //   reg_crc <=  crc; 

            // Process each bit of the input byte
      for (i = 0; i < 8; i = i + 1) begin
        $display("hdr_data_rx = %0h",hdr_data_rx[i]);
        $display("reg_crc[0] = %0h",reg_crc[0]);  
              if (reg_crc[0] ^ (hdr_data_rx[i] == 1'b1))
          begin
                    reg_crc = (reg_crc >> 1) ^ POLY;
        $display("reg_crc1 = %0h",reg_crc);  
          end
        else begin
                    reg_crc = reg_crc >> 1;//1'b0; //1;
                    $display("reg_crc = %0h",reg_crc);    
    end
            end
       
   end
    
         
  end
  */
  
   // assign crc_out = {crc[7:0], crc[15:8]};  // Swap MSB and LSB for final output
  
   always_ff @(posedge clk or negedge rst_n) 
     if (!rst_n) crc_valid_r <= 1'b0;
     else crc_valid_r <= crc_valid_rx ;
  
 //  always_ff @(posedge clk or negedge rst_n) 
   //   if (!rst_n) data_valid_r <= 1'b0;
     //else data_valid_r <= data_valid ;
  // always_ff @(posedge clk or negedge rst_n) 
    // if {crc_out_vld, crc_out} <= 33'h0;
  
   always_ff @(posedge clk or negedge rst_n) 
     if (!rst_n) {crc_out_vld_rx, crc_out_rx} <= 17'h0;
  else {crc_out_vld_rx, crc_out_rx} <= crc_valid_r ? {1'b1, {crc[15:8], crc[7:0]}} : 17'h0;
    //hdr_valid_r ? {1'b1, {crc[7:0], crc[15:8]}} : 17'h0;
      
 //     always_ff @(posedge clk or negedge rst_n) 
   //     if (!rst_n) {crc_out_dvld, crc_dout} <= 17'h0;
  //else {crc_out_dvld, crc_dout} <= data_valid_r ? {1'b1, {crc[7:0], crc[15:8]}} : 17'h0;
  

endmodule 
 
 
