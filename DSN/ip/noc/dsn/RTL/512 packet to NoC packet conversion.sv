module Packet_512_to_FIFO #(
    parameter PACKET_WIDTH = 512,
    parameter FLIT_WIDTH   = 18
)(
    input  logic clk,
    input  logic rst,

    input  logic [PACKET_WIDTH-1:0] packet_data,
    input  logic                    packet_valid,

    FifoIO fifo_io
);

    logic [511:0] packet_reg;
    logic [4:0]   flit_count;
    logic         active;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            packet_reg      <= '0;
            flit_count      <= 5'd0;
            active          <= 1'b0;
            fifo_io.wr_en   <= 1'b0;
            fifo_io.wr_data <= '0;
        end
        else begin
            fifo_io.wr_en <= 1'b0;

            if (packet_valid && !active) begin
                packet_reg <= packet_data;
                flit_count <= 5'd0;
                active     <= 1'b1;
            end

            else if (active && !fifo_io.full) begin
                fifo_io.wr_en   <= 1'b1;
                fifo_io.wr_data <= packet_reg[17:0];

                packet_reg <= packet_reg >> 18;

                if (flit_count == 5'd28) begin
                    flit_count <= 5'd0;
                    active     <= 1'b0;
                end
                else begin
                    flit_count <= flit_count + 1'b1;
                end
            end
        end
    end

endmodule