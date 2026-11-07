//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: MIPI DSI
//  Module            				: dsi_ecc_tx_calculator
//  Primary Unit Owner                         	: krishna@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

module dsi_ecc_tx_calculator (
    input               pixel_clk, // global clock
    input               rst_n, // negative edge reset
	input 		        data_in_vld, // data in valid
    input        [23:0] data_in,  // D23 to D0 include word count and data id
    output logic [7:0]  ecc_out,  // P7 to P0 calculated error corretion code to the short packet or long packet
    output logic        valid_out // ecc valid
);

    logic [7:0] ecc_reg; // ecc register
    logic       valid_reg; // valid register

    // Parity calculation using exact equations
    always_ff @(posedge pixel_clk or negedge rst_n)
        if (!rst_n) begin
            ecc_reg  <= 8'h0;
            valid_reg <= 1'b0;
        end
        else begin
		
            // P7 and P6 are always 0
            ecc_reg[7:6] <= 2'b00;
            
            // P5 = D10^D11^D12^D13^D14^D15^D16^D17^D18^D19^D21^D22^D23
            ecc_reg[5] <= data_in[10] ^ data_in[11] ^ data_in[12] ^ 
                         data_in[13] ^ data_in[14] ^ data_in[15] ^ 
                         data_in[16] ^ data_in[17] ^ data_in[18] ^ 
                         data_in[19] ^ data_in[21] ^ data_in[22] ^ 
                         data_in[23];
            
            // P4 = D4^D5^D6^D7^D8^D9^D16^D17^D18^D19^D20^D22^D23
            ecc_reg[4] <= data_in[4]  ^ data_in[5]  ^ data_in[6]  ^ 
                         data_in[7]  ^ data_in[8]  ^ data_in[9]  ^ 
                         data_in[16] ^ data_in[17] ^ data_in[18] ^ 
                         data_in[19] ^ data_in[20] ^ data_in[22] ^ 
                         data_in[23];
						 
			
            
            // P3 = D1^D2^D3^D7^D8^D9^D13^D14^D15^D19^D20^D21^D23
            ecc_reg[3] <= data_in[1]  ^ data_in[2]  ^ data_in[3]  ^ 
                         data_in[7]  ^ data_in[8]  ^ data_in[9]  ^ 
                         data_in[13] ^ data_in[14] ^ data_in[15] ^ 
                         data_in[19] ^ data_in[20] ^ data_in[21] ^ 
                         data_in[23];
			
			
            
            // P2 = D0^D2^D3^D5^D6^D9^D11^D12^D15^D18^D20^D21^D22
            ecc_reg[2] <= data_in[0]  ^ data_in[2]  ^ data_in[3]  ^ 
                         data_in[5]  ^ data_in[6]  ^ data_in[9]  ^ 
                         data_in[11] ^ data_in[12] ^ data_in[15] ^ 
                         data_in[18] ^ data_in[20] ^ data_in[21] ^ 
                         data_in[22];
            
            // P1 = D0^D1^D3^D4^D6^D8^D10^D12^D14^D17^D20^D21^D22^D23
            ecc_reg[1] <= data_in[0]  ^ data_in[1]  ^ data_in[3]  ^ 
                         data_in[4]  ^ data_in[6]  ^ data_in[8]  ^ 
                         data_in[10] ^ data_in[12] ^ data_in[14] ^ 
                         data_in[17] ^ data_in[20] ^ data_in[21] ^ 
                         data_in[22] ^ data_in[23];
            
           
			// P0=  D0^D1^D2^D4^D5^D7^D10^D11^D13^D16^D20^D21^D22^D23
            ecc_reg[0] <= data_in[0]  ^ data_in[1]  ^ data_in[2]  ^ 
                         data_in[4]  ^ data_in[5]  ^ data_in[7]  ^ 
                         data_in[10] ^ data_in[11] ^ data_in[13] ^ 
                         data_in[16] ^ data_in[20] ^ data_in[21] ^ 
                         data_in[22] ^ data_in[23];

                         
            valid_reg <= data_in_vld;
        end


    // Output assignments
    assign ecc_out = ecc_reg;
    assign valid_out = valid_reg;

endmodule
