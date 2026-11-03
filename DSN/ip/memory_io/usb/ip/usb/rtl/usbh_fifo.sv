`timescale 1ns/1ps

module usbh_fifo
#(
    parameter WIDTH  = 8,
    parameter DEPTH  = 64,
    parameter ADDR_W = 6
)
(
    input  logic                  clk_i,
    input  logic                  rst_i,
    input  logic [WIDTH-1:0]      data_i,
    input  logic                  push_i,
    input  logic                  pop_i,
    input  logic                  flush_i,

    output logic                  full_o,
    output logic                  empty_o,
    output logic [WIDTH-1:0]      data_o,
    output logic [ADDR_W:0]       count_o
);

    localparam COUNT_W = ADDR_W + 1;

    logic [WIDTH-1:0] ram [0:DEPTH-1];

    logic [ADDR_W-1:0] rd_ptr;
    logic [ADDR_W-1:0] wr_ptr;
    logic [COUNT_W-1:0] count;

    always_ff @(posedge clk_i or negedge rst_i) begin
        if (!rst_i) begin
            count  <= '0;
            rd_ptr <= '0;
            wr_ptr <= '0;
        end
        else if (flush_i) begin
            count  <= '0;
            rd_ptr <= '0;
            wr_ptr <= '0;
        end
        else begin

            if (push_i && !full_o) begin
                ram[wr_ptr] <= data_i;
                wr_ptr <= wr_ptr + 1'b1;
            end

            if (pop_i && !empty_o) begin
                rd_ptr <= rd_ptr + 1'b1;
            end

            if ((push_i && !full_o) && !(pop_i && !empty_o))
                count <= count + 1'b1;
            else if (!(push_i && !full_o) && (pop_i && !empty_o))
                count <= count - 1'b1;
        end
    end

    assign full_o  = (count == DEPTH);
    assign empty_o = (count == 0);
    assign data_o  = ram[rd_ptr];
    assign count_o = count;

endmodule
