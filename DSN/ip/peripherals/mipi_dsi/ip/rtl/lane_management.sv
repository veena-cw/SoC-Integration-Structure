//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: MIPI DSI
//  Module            				: lane_managment
//  Primary Unit Owner                         	: krishna@veriedge.com
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog/UVM
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

`define LANES 4
module lane_managment (
    input  txwordclk_hs, // byte_clock
    input  rst_n, // global negedge reset
    input  data_in_valid, // data valid
    input  [`TxDataWidthHS-1:0] data_in, // data from the fifo module
    output logic [`LANES-1:0][7:0] txdata_hs,  // Fixed 8-bit lanes to the dphy
    output logic [`LANES-1:0] txwordvalid_hs, // valid for each lane
	output logic read_pulse // to get next data from the fifo
);

    // Internal registers
	logic [`TxDataWidthHS-1:0] input_buffer;  // input store
    logic [$clog2(`TxDataWidthHS/8):0] chunk_counter;  // Track which chunk we're processing
    logic [$clog2(`LANES):0] lane_counter;
    logic processing_buffer;// Flag to indicate we're processing a buffered input

    
    // Calculate number of chunks based on input width
    localparam NUM_CHUNKS = `TxDataWidthHS / 8;
  
  assign read_pulse = !processing_buffer;
  
    // Main processing logic
    always_ff @(posedge txwordclk_hs or negedge rst_n) begin
        if (!rst_n) begin
            // Reset condition
            input_buffer <= {`TxDataWidthHS{1'b0}};
            chunk_counter <= 0;
            lane_counter <= 0;
            txdata_hs <= {(`LANES*8){1'b0}};
            txwordvalid_hs <= {(`LANES){1'b0}};
            processing_buffer <= 1'b0;
        end
        else begin
            // Default txwordvalid_hs to 0
            txwordvalid_hs <= {(`LANES){1'b0}};
            
          if (data_in_valid ) begin
                // Store new input data in buffer
                input_buffer <= data_in;
                chunk_counter <= 0;
                lane_counter <= 0;
                processing_buffer <= 1'b1;
                
                // Process first batch of chunks
                for (int i = 0; i < `LANES && i < NUM_CHUNKS; i++) begin  // checking two conditions 1) no of lanes & 2) total no of data 
                    txdata_hs[i] <= data_in[i*8 +: 8];
                    txwordvalid_hs[i] <= 1'b1;
                end
                
                // Update counters
                if (NUM_CHUNKS <= `LANES) begin
                    // All chunks processed in one cycle
                    processing_buffer <= 1'b0;
                end else begin
                    // More chunks to process in next cycles
                    chunk_counter <= `LANES;
                    lane_counter <= 0;
                end
            end
            else if (processing_buffer) begin
                // Continue processing buffered data
              for (int i = 0; i < `LANES && (chunk_counter + i) < NUM_CHUNKS; i++) begin  // checking two conditions 1) no of lanes & 2) no of data remanings
                    txdata_hs[i] <= input_buffer[(chunk_counter + i)*8 +: 8];
                    txwordvalid_hs[i] <= 1'b1;
                end
                
                // Update counters for next cycle
                chunk_counter <= chunk_counter + `LANES;
                
                // Check if we've processed all chunks
                if (chunk_counter + `LANES >= NUM_CHUNKS) begin // logic to check that data needs extra cock cycle or not
                    processing_buffer <= 1'b0;
                end
             
            end
          else  chunk_counter <= 0;
        end
    end

endmodule
