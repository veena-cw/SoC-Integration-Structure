//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: DSI
//  Module            				: long_packet
//  Primary Unit Owner                         	: krishna@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

`define TxDataWidthHS 32
`define TxWordValidHS `TxDataWidthHS/8
module long_packet (
    input  pixel_clk,					// global clock
    input  rst_n,				// global negative edge reset
    input  [23:0] data_in,		// RGB data from pixel to byte conversion
    input  data_valid,			//RGB  data valid
	input  [3:0] format_sel,     // Format selection from RGB Data
	input	crc_valid,			// CRC -16 valid
	input [15:0] crc_16,		//CRC 16
	input	ecc_valid,			//Error Correction Code Vlid
	input [7:0] ecc,			//Error Correction Code
	input [3:0] pixel_resolution, // dispaly resolution
	
	output logic hsync_start,    // horizontal sync start
	output logic hsync_stop,	 // horizontal sync stop
   // output logic [15:0] word_counter,		// word count
	output logic	long_pkt_header_valid, //long packet valid
	output logic [23:0] long_pkt_header, 	//long packet header with word count & data id
	output logic  crc_data_valid,			//Data valid sent to the crc module
	output logic [`TxDataWidthHS-1:0] crc_data,			//Data sent to the crc module
	output logic  data_out_valid,           // data sent out valid
    output logic [`TxDataWidthHS-1:0] data_out  // Data sent from dsi-dphy
);

	 // Define parameters
    //localparam MAX_COUNT = 16'hFFFF;
	
	// 4-bit resolution selection parameters
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
	
	logic [(1024*24)-1 :0] r_formatted_data;
	logic [15:0] w_data_counter;
	//logic [31:0] output_data;
	logic [15:0] r_crcoutput_ptr,r_dataoutput_ptr;  // Tracks which 32-bit segment to output
	logic max_output_index,max_fifo_index ; // needs to write the logic it contains count t0 how many 32 datas should be send out
	logic r_crcdata_ready; // neds that data arrangement has been done
	logic r_format_completed;
	logic r_outputdata_ready;
	logic [(8*3077)-1:0] long_packet;
	//logic read_valid;
	//logic hsync_start,hsync_stop;
	//logic controller;
	logic crc_reg,ecc_reg;
   logic [11:0] w_max_line_pixels;
   logic [15:0] word_counter;		// word count
  logic [1:0] vc;
   assign vc = 2'b00;
    
    // Internal registers
   // reg [23:0] data_array [0:MAX_COUNT]; // Storage for 0xFFFF+1 data values


//********************************************* MAXIMUM COUNTER ***********************************************************

always_comb
	begin
	case (pixel_resolution)
	QCVGA: w_max_line_pixels = 12'h0a0;
	QCIF,QCIF_PLUS1,QCIF_PLUS2: w_max_line_pixels = 12'h0b0;
	QVGA,HALF_VGA: w_max_line_pixels = 12'h140;
	CIF,CIF_PLUS1,CIF_PLUS2: w_max_line_pixels = 12'h160;
	TWO_THIRDS_VGA,VGA: w_max_line_pixels =  12'h280;
	WVGA,SVGA: w_max_line_pixels = 12'h320;
	XVGA: w_max_line_pixels = 12'h400;
	default:w_max_line_pixels =  12'h280;
	endcase
	end


//********************************************* DATA STORAGE ************************************************************** 
    // Counter logic
    always_ff @(posedge pixel_clk or negedge rst_n) begin
        if (!rst_n) begin
            w_data_counter <= 16'h0000;
        end 
      else if (w_data_counter == w_max_line_pixels-1)
                w_data_counter <= 16'h0000;
      else if (data_valid) begin
                w_data_counter <= w_data_counter + 1'b1;
        end
    end
   

        // Arrangement logic - concatenate data from data_array[0] to data_array[w_data_counter]
    // This is a more practical implementation with output selection
    always_ff @(posedge pixel_clk or negedge rst_n) begin
        if (!rst_n) begin
            r_formatted_data <= 0;
			r_format_completed <= 1'b0;
			hsync_start <= 1'b0;
        end 
      else if (data_valid) begin
            // Update the r_format_completed data by placing all entries sequentially
                   case (format_sel)
                    'd0,'d6: r_formatted_data[(w_data_counter*16)+:16] <= data_in[15:0];
					'd1: r_formatted_data[(w_data_counter*18)+:18] <= data_in[17:0];
					'd2,'d3,'d4,'d5: r_formatted_data[(w_data_counter*24)+:24] <= data_in[23:0];
                    default: r_formatted_data[(w_data_counter*24)+:24] <= data_in[23:0]; // Default case
                endcase
               // end
        if ( w_data_counter == 8 ) r_format_completed <= 1'b1;
        if  (w_data_counter == 9 ) r_format_completed <= 1'b0;
        if ( w_data_counter == 4 ) hsync_start <= 1'b1;
            else begin  hsync_start <= 1'b0;    end
           // end
        end
		else begin  r_format_completed <= 1'b0; hsync_start <= 1'b0;    end
    end

  assign hsync_stop = !max_fifo_index;
  
//************************************************* WORD COUNT & HEADER FRAMING *****************************************************

// word count logic 
	always_comb
	begin
	case (pixel_resolution)
	QCVGA: begin
		case (format_sel)
            'd0,'d6: word_counter = ( 16'ha0); //320 bytes
            'd1: word_counter = (16'hb4); //360 bytes
            'd2,'d3,'d4, 'd5: word_counter = (16'hf0); //480 bytes
            default: word_counter = ( 16'hf0); // Default case
        endcase
	end
	QCIF,QCIF_PLUS1,QCIF_PLUS2: begin
		case (format_sel)
			'd0,'d6: word_counter = ( 16'hb0); //352 bytes
            'd1: word_counter = (16'hc6); //396 bytes
            'd2,'d3,'d4,'d5: word_counter = (16'h108); //528 bytes
            default: word_counter = ( 16'h108); // Default case	
		endcase
		end
	QVGA,HALF_VGA: begin
		case (format_sel)
            'd0,'d6: word_counter = ( 16'h140); //640 bytes
            'd1: word_counter = (16'h168); //720 bytes
            'd2,'d3,'d4, 'd5: word_counter = (16'h1e0); //960 bytes
            default: word_counter = ( 16'h1e0); // Default case	
        endcase
		end
	CIF,CIF_PLUS1,CIF_PLUS2: begin
		case (format_sel)
            'd0,'d6: word_counter = ( 16'h160); //704 bytes
            'd1: word_counter = (16'h18c); //792 bytes
            'd2,'d3,'d4,'d5: word_counter = (16'h210); //1056 bytes
            default: word_counter = ( 16'h210); // Default case	
        endcase
		end
	TWO_THIRDS_VGA,VGA: begin
		case (format_sel)
            'd0,'d6: word_counter = ( 16'h280); //1280 bytes
            'd1: word_counter = (16'h2d0); //1440 bytes
            'd2,'d3,'d4, 'd5: word_counter = (16'h3c0); //1920 bytes
            default: word_counter = ( 16'h3c0); // Default case	
        endcase
		end
	WVGA,SVGA: begin
		case (format_sel)
            'd0,'d6: word_counter = ( 16'h320); //1600 bytes
            'd1: word_counter = (16'h384); //1800 bytes
            'd2,'d3,'d4, 'd5: word_counter = (16'h4b0); //2400 bytes
            default: word_counter = ( 16'h4b0); // Default case	
        endcase
		end
	XVGA: begin
		case (format_sel)
            'd0,'d6: word_counter = ( 16'h400); //2048 bytes
            'd1: word_counter = (16'h480); //2304 bytes
            'd2,'d3,'d4, 'd5: word_counter = (16'h600); //3072 bytes
            default: word_counter = ( 16'h600); // Default case	
        endcase
		end
	default: begin  //640p x 480 lines
		case (format_sel)
            'd0,'d6: word_counter = ( 16'h280); //1280 bytes
            'd1: word_counter = (16'h2d0); //1440 bytes
            'd2,'d3,'d4,'d5: word_counter = (16'h3c0); //1920 bytes
            default: word_counter = ( 16'h3c0); // Default case	
        endcase
		end	
	endcase
	end
	
	
	always_comb
	begin
		case (format_sel)
          'd0: long_pkt_header = {word_counter[15:0],6'h0e,vc[1],vc[0]}; //concatenate of wc ms,wc ls ,data is for rgb 565
          'd1: long_pkt_header = {word_counter[15:0],6'h1e,vc[1],vc[0]}; //concatenate of wc ms,wc ls ,data is for rgb 565
          'd2: long_pkt_header = {word_counter[15:0],6'h2e,vc[1],vc[0]}; //concatenate of wc ms,wc ls ,data is for rgb 565						
          'd3: long_pkt_header = {word_counter[15:0],6'h3e,vc[1],vc[0]};  //concatenate of wc ms,wc ls ,data is for rgb 666
          'd4: long_pkt_header = {word_counter[15:0],6'h0c,vc[1],vc[0]};//concatenate of wc ms,wc ls ,data is for rgb 666_2
          'd5: long_pkt_header = {word_counter[15:0],6'h1c,vc[1],vc[0]}; //concatenate of wc ms,wc ls ,data is for rgb 888
          'd6: long_pkt_header = {word_counter[15:0],6'h2c,vc[1],vc[0]}; //concatenate of wc ms,wc ls ,data is for rgb 888
          default: long_pkt_header = {word_counter[15:0],6'h3e,vc[1],vc[0]}; // Default case
        endcase
	end
	
	assign long_pkt_header_valid = r_format_completed;
	
//************************************************** DATA SLICING FOR CRC *************************************************************************************************
	
	// signal indicating that are completed
	always_comb
	begin
	case (pixel_resolution)
	QCVGA: begin
		case (format_sel)
            'd0,'d6: max_output_index = (r_crcoutput_ptr < (16'ha00/`TxDataWidthHS));
            'd1: max_output_index = (r_crcoutput_ptr < (16'hb40/`TxDataWidthHS));
            'd2,'d3,'d4, 'd5: max_output_index = (r_crcoutput_ptr < (16'hf00/`TxDataWidthHS));
            default: max_output_index = (r_crcoutput_ptr < (16'hf00/`TxDataWidthHS)); // Default case
        endcase
		end
	QCIF,QCIF_PLUS1,QCIF_PLUS2: begin
		case (format_sel)
            'd0,'d6: max_output_index = (r_crcoutput_ptr < (16'hb00/`TxDataWidthHS));
            'd1: max_output_index = (r_crcoutput_ptr < (16'hc60/`TxDataWidthHS));
            'd2,'d3,'d4, 'd5: max_output_index = (r_crcoutput_ptr < (16'h1080/`TxDataWidthHS));
            default: max_output_index = (r_crcoutput_ptr < (16'h1080/`TxDataWidthHS)); // Default case
        endcase
		end
	QVGA,HALF_VGA: begin
		case (format_sel)
            'd0,'d6: max_output_index = (r_crcoutput_ptr < (16'h1400/`TxDataWidthHS));
            'd1: max_output_index = (r_crcoutput_ptr < (16'h1680/`TxDataWidthHS));
            'd2,'d3,'d4, 'd5: max_output_index = (r_crcoutput_ptr < (16'h1e00/`TxDataWidthHS));
            default: max_output_index = (r_crcoutput_ptr < (16'h1e00/`TxDataWidthHS)); // Default case
        endcase
		end
	CIF,CIF_PLUS1,CIF_PLUS2: begin
		case (format_sel)
            'd0,'d6: max_output_index = (r_crcoutput_ptr < (16'h1600/`TxDataWidthHS));
            'd1: max_output_index = (r_crcoutput_ptr < (16'h18c0/`TxDataWidthHS));
            'd2,'d3,'d4, 'd5: max_output_index = (r_crcoutput_ptr < (16'h2100/`TxDataWidthHS));
            default: max_output_index = (r_crcoutput_ptr < (16'h2100/`TxDataWidthHS)); // Default case
        endcase
		end
	TWO_THIRDS_VGA,VGA: begin
		case (format_sel)
            'd0,'d6: max_output_index = (r_crcoutput_ptr < (16'h2800/`TxDataWidthHS));
            'd1: max_output_index = (r_crcoutput_ptr < (16'h2918/`TxDataWidthHS));
            'd2,'d3,'d4, 'd5: max_output_index = (r_crcoutput_ptr < (16'h3c00/`TxDataWidthHS));
            default: max_output_index = (r_crcoutput_ptr < (16'h3c00/`TxDataWidthHS)); // Default case
        endcase
		end
	WVGA,SVGA: begin
		case (format_sel)
            'd0,'d6: max_output_index = (r_crcoutput_ptr < (16'h3200/`TxDataWidthHS));
            'd1: max_output_index = (r_crcoutput_ptr < (16'h3840/`TxDataWidthHS));
            'd2,'d3,'d4, 'd5: max_output_index = (r_crcoutput_ptr < (16'h4b00/`TxDataWidthHS));
            default: max_output_index = (r_crcoutput_ptr < (16'h4b00/`TxDataWidthHS)); // Default case
        endcase
		end
	XVGA: begin
		case (format_sel)
          'd0,'d6: max_output_index = (r_crcoutput_ptr < (16'h4000/`TxDataWidthHS));
          'd1: max_output_index = (r_crcoutput_ptr < (16'h4800/`TxDataWidthHS));
          'd2,'d3,'d4, 'd5: max_output_index = (r_crcoutput_ptr < (16'h6000/`TxDataWidthHS));
          default: max_output_index = (r_crcoutput_ptr < (16'h6000/`TxDataWidthHS)); // Default case
        endcase
		end
	default: begin  //640p x 480 lines
		case (format_sel)
            'd0,'d6: max_output_index = (r_crcoutput_ptr < (16'h2800/`TxDataWidthHS));
            'd1: max_output_index = (r_crcoutput_ptr < (16'h2918/`TxDataWidthHS));
            'd2,'d3,'d4, 'd5: max_output_index = (r_crcoutput_ptr < (16'h3c00/`TxDataWidthHS));
            default: max_output_index = (r_crcoutput_ptr < (16'h3c00/`TxDataWidthHS)); // Default case
        endcase
		end
	endcase
	end

always_ff @(posedge pixel_clk or negedge rst_n) 
	if(!rst_n) r_crcdata_ready <= 1'b0;
	else if (!max_output_index) r_crcdata_ready <= 1'b0;
	else if (r_format_completed) r_crcdata_ready <= 1'b1;

// send 8-bits of data to get crc
	always_ff @(posedge pixel_clk or negedge rst_n) 
    if (!rst_n) begin
        crc_data <= `TxDataWidthHS'h0;
        r_crcoutput_ptr <= 16'h0;
        crc_data_valid <= 1'b0;
    end else if (r_crcdata_ready) begin
        // Extract the current 8-bit segment
        crc_data <= r_formatted_data[r_crcoutput_ptr*`TxDataWidthHS+:`TxDataWidthHS];
        crc_data_valid <= 1'b1;
        
        // Move to next segment for next clock cycle
        if (max_output_index)
            r_crcoutput_ptr <= r_crcoutput_ptr + 16'b1;
        else begin
            r_crcoutput_ptr <= 16'h0;  // Reset for next data set
            crc_data_valid <= 1'b0;  // End of data transmission
        end
    end else begin
        crc_data_valid <= 1'b0;  // Default state when not outputting
    end

//*********************************************** FRAMING LONG PACKET LONG WITH DATA & CRC**************************************************
	
	// framing a long packet which include crc,data,ecc,wc&di
  
always_comb  
  begin
		case (pixel_resolution)
	QCVGA: begin
		case (format_sel)
            'd0,'d6: long_packet = {22016'h0,crc_reg,r_formatted_data[2559:0],ecc_reg,long_pkt_header}; 
            'd1: long_packet = {21696'h0,crc_reg,r_formatted_data[2879:0],ecc_reg,long_pkt_header}; 
            'd2,'d3,'d4,'d5: long_packet = {20736'h0,crc_reg,r_formatted_data[3839:0],ecc_reg,long_pkt_header}; 
            default: long_packet = {20736'h0,crc_reg,r_formatted_data[3839:0],ecc_reg,long_pkt_header};
        endcase
    end
		QCIF,QCIF_PLUS1,QCIF_PLUS2: begin
		case (format_sel)
            'd0,'d6: long_packet = {21760'h0,crc_reg,r_formatted_data[2815:0],ecc_reg,long_pkt_header}; 
            'd1: long_packet = {21408'h0,crc_reg,r_formatted_data[3167:0],ecc_reg,long_pkt_header}; 
            'd2,'d3,'d4,'d5: long_packet = {20352'h0,crc_reg,r_formatted_data[4223:0],ecc_reg,long_pkt_header}; 
            default: long_packet = {20352'h0,crc_reg,r_formatted_data[4223:0],ecc_reg,long_pkt_header};
        endcase
		end
	QVGA,HALF_VGA: begin
		case (format_sel)
            'd0,'d6: long_packet = {19456'h0,crc_reg,r_formatted_data[5119:0],ecc_reg,long_pkt_header};
            'd1: long_packet = {18816'h0,crc_reg,r_formatted_data[5759:0],ecc_reg,long_pkt_header}; 
            'd2,'d3,'d4,'d5: long_packet = {7680'h0,crc_reg,r_formatted_data[7679:0],ecc_reg,long_pkt_header}; 
            default: long_packet = {7680'h0,crc_reg,r_formatted_data[7679:0],ecc_reg,long_pkt_header};
        endcase
		end
	CIF,CIF_PLUS1,CIF_PLUS2: begin
		case (format_sel)
            'd0,'d6: long_packet = {18944'h0,crc_reg,r_formatted_data[5631:0],ecc_reg,long_pkt_header};
            'd1: long_packet = {18240'h0,crc_reg,r_formatted_data[6335:0],ecc_reg,long_pkt_header};
            'd2,'d3,'d4,'d5: long_packet = {16128'h0,crc_reg,r_formatted_data[8447:0],ecc_reg,long_pkt_header};
            default: long_packet = {16128'h0,crc_reg,r_formatted_data[8447:0],ecc_reg,long_pkt_header};
        endcase
		end
	TWO_THIRDS_VGA,VGA: begin
		case (format_sel)
            'd0,'d6: long_packet = {14336'h0,crc_reg,r_formatted_data[10239:0],ecc_reg,long_pkt_header}; 
            'd1: long_packet = {13056'h0,crc_reg,r_formatted_data[11519:0],ecc_reg,long_pkt_header}; 
            'd2,'d3,'d4,'d5: long_packet = {9216'h0,crc_reg,r_formatted_data[15359:0],ecc_reg,long_pkt_header}; 
            default: long_packet = {9216'h0,crc_reg,r_formatted_data[15359:0],ecc_reg,long_pkt_header};
        endcase
		end
	WVGA,SVGA: begin
		case (format_sel)
            'd0,'d6: long_packet = {11776'h0,crc_reg,r_formatted_data[12799:0],ecc_reg,long_pkt_header}; 
            'd1: long_packet = {10176'h0,crc_reg,r_formatted_data[14399:0],ecc_reg,long_pkt_header}; 
            'd2,'d3,'d4,'d5: long_packet = {5376'h0,crc_reg,r_formatted_data[19199:0],ecc_reg,long_pkt_header}; 
            default: long_packet = {5376'h0,crc_reg,r_formatted_data[19199:0],ecc_reg,long_pkt_header};
        endcase
		end
	XVGA: begin
		case (format_sel)
            'd0,'d6: long_packet = {8192'h0,crc_reg,r_formatted_data[16383:0],ecc_reg,long_pkt_header};
            'd1: long_packet = {6144'h0,crc_reg,r_formatted_data[18431:0],ecc_reg,long_pkt_header}; 
            'd2,'d3,'d4,'d5: long_packet = {crc_reg,r_formatted_data[24575:0],ecc_reg,long_pkt_header}; 
            default: long_packet = {crc_reg,r_formatted_data[24575:0],ecc_reg,long_pkt_header};
        endcase
		end
	default: begin  //640p x 480 lines
		case (format_sel)
            'd0,'d6: long_packet = {14336'h0,crc_reg,r_formatted_data[10239:0],ecc_reg,long_pkt_header}; 
            'd1: long_packet = {13056'h0,crc_reg,r_formatted_data[11519:0],ecc_reg,long_pkt_header}; 
            'd2,'d3,'d4,'d5: long_packet = {9216'h0,crc_reg,r_formatted_data[15359:0],ecc_reg,long_pkt_header}; 
            default: long_packet = {9216'h0,crc_reg,r_formatted_data[15359:0],ecc_reg,long_pkt_header};
        endcase
		end
	endcase
	end
	

	always_ff @(posedge pixel_clk or negedge rst_n) 
        if (!rst_n) 		crc_reg <= 16'h0;
        else if (crc_valid) crc_reg <= crc_16;

	always_ff @(posedge pixel_clk or negedge rst_n) 
        if (!rst_n) 		ecc_reg <= 8'h0;
        else if (ecc_valid) ecc_reg <= ecc;
        
// ******************************************** LONG PACKET SLICING FOR SEND OUT******************************************************************    
	
	always_comb
	begin
	case (pixel_resolution)
	QCVGA: begin
		case (format_sel)
            'd0,'d6: max_fifo_index = (r_dataoutput_ptr <  (('d2608/`TxDataWidthHS) + ('d2608 % `TxDataWidthHS)));
            'd1: max_fifo_index = (r_dataoutput_ptr < (('d2928/`TxDataWidthHS) + ('d2928 % `TxDataWidthHS)));
            'd2,'d3,'d4, 'd5: max_fifo_index = (r_dataoutput_ptr < (('d3888/`TxDataWidthHS) + ('d3888 % `TxDataWidthHS)));
            default: max_fifo_index = (r_dataoutput_ptr < (('d3888/`TxDataWidthHS) + ('d3888 % `TxDataWidthHS))); // Default case
        endcase
		end
	QCIF,QCIF_PLUS1,QCIF_PLUS2: begin
		case (format_sel)
            'd0,'d6: max_fifo_index = (r_dataoutput_ptr < (('d2864/`TxDataWidthHS) + ('d2864 % `TxDataWidthHS)));
            'd1: max_fifo_index = (r_dataoutput_ptr < (('d3216/`TxDataWidthHS) + ('d3216 % `TxDataWidthHS)));
            'd2,'d3,'d4, 'd5: max_fifo_index = (r_dataoutput_ptr < (('d4272/`TxDataWidthHS) + ('d4272 % `TxDataWidthHS)));
            default: max_fifo_index = (r_dataoutput_ptr < (('d4272/`TxDataWidthHS) + ('d4272 % `TxDataWidthHS))); // Default case
        endcase
		end
	QVGA,HALF_VGA: begin
		case (format_sel)
            'd0,'d6: max_fifo_index = (r_dataoutput_ptr < (('d5216/`TxDataWidthHS) + ('d5216 % `TxDataWidthHS)));
            'd1: max_fifo_index = (r_dataoutput_ptr < (('d5808/`TxDataWidthHS) + ('d5808 % `TxDataWidthHS)));
            'd2,'d3,'d4, 'd5: max_fifo_index = (r_dataoutput_ptr < (('d7728/`TxDataWidthHS) + ('d7728 % `TxDataWidthHS)));
            default: max_fifo_index = (r_dataoutput_ptr < (('d7728/`TxDataWidthHS) + ('d7728 % `TxDataWidthHS))); // Default case
        endcase
		end
	CIF,CIF_PLUS1,CIF_PLUS2: begin
		case (format_sel)
            'd0,'d6: max_fifo_index = (r_dataoutput_ptr < (('d5680/`TxDataWidthHS) + ('d5680 % `TxDataWidthHS)));
            'd1: max_fifo_index = (r_dataoutput_ptr < (('d5808/`TxDataWidthHS) + ('d5808 % `TxDataWidthHS)));
            'd2,'d3,'d4, 'd5: max_fifo_index = (r_dataoutput_ptr < (('d8496/`TxDataWidthHS) + ('d8496 % `TxDataWidthHS)));
            default: max_fifo_index = (r_dataoutput_ptr < (('d8496/`TxDataWidthHS) + ('d8496 % `TxDataWidthHS))); // Default case
        endcase
		end
	TWO_THIRDS_VGA,VGA: begin
		case (format_sel)
            'd0,'d6: max_fifo_index = (r_dataoutput_ptr < (('d10288/`TxDataWidthHS) + ('d10288 % `TxDataWidthHS)));
            'd1: max_fifo_index = (r_dataoutput_ptr < (('d11568/`TxDataWidthHS) + ('d11568 % `TxDataWidthHS)));
            'd2,'d3,'d4, 'd5: max_fifo_index = (r_dataoutput_ptr < (('d15408/`TxDataWidthHS) + ('d15408 % `TxDataWidthHS)));
            default: max_fifo_index = (r_dataoutput_ptr < (('d15408/`TxDataWidthHS) + ('d15408 % `TxDataWidthHS))); // Default case
        endcase
		end
	WVGA,SVGA: begin
		case (format_sel)
            'd0,'d6: max_fifo_index = (r_dataoutput_ptr < (('d12848/`TxDataWidthHS) + ('d12848 % `TxDataWidthHS)));
            'd1: max_fifo_index = (r_dataoutput_ptr < (('d14448/`TxDataWidthHS) + ('d14448 % `TxDataWidthHS)));
            'd2,'d3,'d4, 'd5: max_fifo_index = (r_dataoutput_ptr < (('d19248/`TxDataWidthHS) + ('d19248 % `TxDataWidthHS)));
            default: max_fifo_index = (r_dataoutput_ptr < (('d19248/`TxDataWidthHS) + ('d19248 % `TxDataWidthHS))); // Default case
        endcase
		end
	XVGA: begin
		case (format_sel)
            'd0,'d6: max_fifo_index = (r_dataoutput_ptr < (('d16432/`TxDataWidthHS) + ('d16432 % `TxDataWidthHS)));
            'd1: max_fifo_index = (r_dataoutput_ptr < (('d18480/`TxDataWidthHS) + ('d18480 % `TxDataWidthHS)));
            'd2,'d3,'d4, 'd5: max_fifo_index = (r_dataoutput_ptr < (('d24624/`TxDataWidthHS) + ('d24624 % `TxDataWidthHS)));
            default: max_fifo_index = (r_dataoutput_ptr < (('d24624/`TxDataWidthHS) + ('d24624 % `TxDataWidthHS))); // Default case
        endcase
		end
	default: begin  //640p x 480 lines
		case (format_sel)
            'd0,'d6: max_fifo_index = (r_dataoutput_ptr < (('d10288/`TxDataWidthHS) + ('d10288 % `TxDataWidthHS)));
            'd1: max_fifo_index = (r_dataoutput_ptr < (('d11568/`TxDataWidthHS) + ('d11568 % `TxDataWidthHS)));
            'd2,'d3,'d4, 'd5: max_fifo_index = (r_dataoutput_ptr < (('d15408/`TxDataWidthHS) + ('d15408 % `TxDataWidthHS)));
            default: max_fifo_index = (r_dataoutput_ptr < (('d15408/`TxDataWidthHS) + ('d15408 % `TxDataWidthHS))); // Default case
        endcase
		end
	endcase
	end
	


always_ff @(posedge pixel_clk or negedge rst_n) 
	if(!rst_n) r_outputdata_ready <= 1'b0;
	else if (!max_fifo_index) r_outputdata_ready <= 1'b0;
	else if (ecc_valid) r_outputdata_ready <= 1'b1;

always_ff @(posedge pixel_clk or negedge rst_n) 
    if (!rst_n) begin
        data_out <= 'h0;
        r_dataoutput_ptr <= 16'h0;
        data_out_valid <= 1'b0;
    end else if (r_outputdata_ready) begin
        // Extract the current 32/16/8-bit segment
        data_out <= long_packet[r_dataoutput_ptr*`TxDataWidthHS+:`TxDataWidthHS];
        data_out_valid <= 1'b1;
        
        // Move to next segment for next clock cycle
        if (max_fifo_index)
            r_dataoutput_ptr <= r_dataoutput_ptr + 16'b1;
        else begin
            r_dataoutput_ptr <= 16'h0;  // Reset for next data set
             data_out_valid <= 1'b0;  // End of data transmission
        end
    end else begin
         data_out_valid <= 1'b0; // Default state when not outputting
    end
	

endmodule
