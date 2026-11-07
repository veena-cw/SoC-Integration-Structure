
//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: MIPI DSI
//  Module            				: pixel_2_byte_conversion
//  Primary Unit Owner                         	: krishna@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================
module pixel_2_byte_conversion (
    input  pixel_clk, // global clock
    input  rst_n, // global negative edge reset
    input  [23:0] pixel_in,      // RGB 121212 input (36 bits total) from the DPI interface
    input  [3:0] format_sel,     // Format selection from RGB Data from register
	input  [1:0] configuration, 
    input  pixel_in_valid, // pixel data valid 
	input  enable , // dsi device is enabled
	input  video_mode_enable, // video mode is enable or not
    output logic [23:0] pixel_out,     // Output pixel data
    output logic pixel_out_valid // pixel data valid
);

  // Registered outputs
    logic [23:0] pixel_in_reg;
	logic [23:0] next_pixel;
    logic next_valid;
  	logic pixel_in_valid_reg;
  
    // Format selection parameters
    localparam RGB565   = 4'b0000;
    localparam RGB666   = 4'b0001;
    localparam RGB666_2 = 4'b0010;
    localparam RGB888   = 4'b0011;
	localparam YCbCr101010_2 = 4'b0100;
	localparam YCbCr121212 = 4'b0101;
	localparam YCbCr888 = 4'b0110;
	//localparam YCbCr888_2 = 4'b0111;

    // Input RGB components (12-bit each)
  logic [7:0] r_in;
  assign r_in = pixel_in_reg[23:16];  // Red component 
  logic [7:0] g_in;
  assign g_in = pixel_in_reg[15:8];  // Green component 
  logic [7:0] b_in;
  assign b_in = pixel_in_reg[7:0];   // Blue component  
  
  logic [11:0] y_in;
  logic [11:0] u_v_in;
  
  assign y_in = pixel_in_reg[11:0];
  assign u_v_in = pixel_in_reg[23:12];
  

    
	
	always_ff @(posedge pixel_clk or negedge rst_n)
		if (!rst_n) pixel_in_reg <= 24'h0;
		else if (pixel_in_valid) pixel_in_reg <= pixel_in;
  
  always_ff @(posedge pixel_clk or negedge rst_n)
    if (!rst_n) pixel_in_valid_reg <= 1'b0;
		else  pixel_in_valid_reg <= pixel_in_valid;

    // Format conversion logic
    always_comb begin
        next_valid = pixel_in_valid_reg && enable && video_mode_enable;
        case (format_sel)
            RGB565: begin
                // Convert to RGB565 (5:6:5)
				if (configuration == 2'b00) next_pixel = {8'h0,pixel_in_reg[4:0],pixel_in_reg[10:5],pixel_in_reg[15:11]}; //{bgr}
				else if (configuration == 2'b01) next_pixel = {8'h0,pixel_in_reg[4:0],pixel_in_reg[13:8],pixel_in_reg[20:16]}; //{bgr}
                else next_pixel = {8'h0,pixel_in_reg[5:1],pixel_in_reg[13:8],pixel_in_reg[21:17]}; //{bgr}
            end
            
            
            
            RGB666: begin
                // Convert to RGB666 (6:6:6)
                if (configuration == 2'b00) next_pixel = {6'h0,pixel_in_reg[5:0],pixel_in_reg[11:6],pixel_in_reg[17:12]}; //{bgr}
				else  next_pixel = {6'h0,pixel_in_reg[5:0],pixel_in_reg[13:8],pixel_in_reg[21:16]}; //{bgr}
            end
            
            RGB666_2: begin
                // Second RGB666 format (alternative alignment)
                if (configuration == 2'b00) next_pixel = {pixel_in_reg[5:0],2'b0,pixel_in_reg[11:6],2'b0,pixel_in_reg[17:12],2'b0}; //{bgr}
				else  next_pixel = {pixel_in_reg[5:0],2'b0,pixel_in_reg[13:8],2'b0,pixel_in_reg[21:16],2'b0}; //{bgr}
            end
            
            RGB888: begin
                // Convert to RGB888 (8:8:8)
                next_pixel = {b_in[7:0],g_in[7:0],r_in[7:0] };
            end
			
			YCbCr101010_2: begin
                
                next_pixel = {
					y_in[9:0],2'b00,u_v_in[9:0],2'b00
                  
                };
            end
            
			YCbCr121212 :  begin
                
                next_pixel = {
				  y_in[11:0],u_v_in[11:0]
                };
            end
			
			YCbCr888 :  begin
                
                next_pixel = {
                    8'h0,
					
				  y_in[7:0],u_v_in[7:0]
                };
            end
			
            default: begin
                next_pixel = {
				  b_in[7:0],g_in[7:0],r_in[7:0]
                }; // RGB888
            end
        endcase
    end

    // Register outputs
    always_ff @(posedge pixel_clk or negedge rst_n) begin
        if (!rst_n) begin
            pixel_out <= 24'h0;
            pixel_out_valid <= 1'b0;
        end else begin
            pixel_out <= next_pixel;
            pixel_out_valid <= next_valid;
        end
    end

endmodule
