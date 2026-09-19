//-----------------------------------------------------------------
//                     USB Full Speed Host
//                           V0.6
//                     Ultra-Embedded.com
//                     Copyright 2015-2020
//
//                 Email: admin@ultra-embedded.com
//
//                         License: GPL
// If you would like a version with a more permissive license for
// use in closed source commercial applications please contact me
// for details.
//-----------------------------------------------------------------
//
// This file is open source HDL; you can redistribute it and/or 
// modify it under the terms of the GNU General Public License as 
// published by the Free Software Foundation; either version 2 of 
// the License, or (at your option) any later version.
//
// This file is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public 
// License along with this file; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//-----------------------------------------------------------------

//-----------------------------------------------------------------
//                          Generated File
//-----------------------------------------------------------------


`timescale 1ns/1ps

module usbh_fifo
#(
    parameter WIDTH  = 8,
    parameter DEPTH  = 64,
    parameter ADDR_W = 6
)
(
    // Inputs
    input  logic             clk_i,
    input  logic             rst_i,
    input  logic [7:0]       data_i,
    input  logic             push_i,
    input  logic             pop_i,
    input  logic             flush_i,

    // Outputs
    output logic             full_o,
    output logic             empty_o,
    output logic [7:0]       data_o
);

    //-----------------------------------------------------------------
    // Local Params
    //-----------------------------------------------------------------
    localparam COUNT_W = ADDR_W + 1;

    //-----------------------------------------------------------------
    // Registers
    //-----------------------------------------------------------------
    logic [WIDTH-1:0]   ram [0:DEPTH-1];
    logic [ADDR_W-1:0] rd_ptr;
    logic [ADDR_W-1:0] wr_ptr;
    logic [COUNT_W-1:0] count;

    //-----------------------------------------------------------------
    // Sequential
    //-----------------------------------------------------------------
   // always_ff @(posedge clk_i or posedge rst_i) begin
      //  if (rst_i) begin
    always_ff @(posedge clk_i or negedge rst_i_n) begin
    	if (!rst_i_n) begin
            count  <= '0;
            rd_ptr <= '0;
            wr_ptr <= '0;
        end
        else begin

            if (flush_i) begin
                count  <= '0;
                rd_ptr <= '0;
                wr_ptr <= '0;
            end

            // Push
            if (push_i && !full_o) begin
                ram[wr_ptr] <= data_i;
                wr_ptr      <= wr_ptr + 1'b1;
            end

            // Pop
            if (pop_i && !empty_o) begin
                rd_ptr <= rd_ptr + 1'b1;
            end

            // Count up
            if ((push_i && !full_o) && !(pop_i && !empty_o)) begin
                count <= count + 1'b1;
            end

            // Count down
            else if (!(push_i && !full_o) && (pop_i && !empty_o)) begin
                count <= count - 1'b1;
            end
        end
    end

    //-----------------------------------------------------------------
    // Combinational
    //-----------------------------------------------------------------
    assign full_o  = (count == DEPTH);
    assign empty_o = (count == 0);
    assign data_o  = ram[rd_ptr];

endmodule
