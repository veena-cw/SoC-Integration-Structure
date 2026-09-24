module AXI_4Beat_Collector #(
    parameter AXI_DATA_WIDTH = 128,
    parameter PACKET_WIDTH   = 512
)(
    input  logic                    clk,
    input  logic                    rst,

    input  logic [AXI_DATA_WIDTH-1:0] axi_data,
    input  logic                      axi_valid,
    output logic                      axi_ready,

    output logic [PACKET_WIDTH-1:0] packet_data,
    output logic                     packet_valid
);

    logic [1:0] beat_count;

    assign axi_ready = !packet_valid;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            packet_data  <= '0;
            beat_count   <= 2'd0;
            packet_valid <= 1'b0;
        end
        else begin
            if (axi_valid && axi_ready) begin

                case (beat_count)
                    2'd0: packet_data[127:0]   <= axi_data;
                    2'd1: packet_data[255:128] <= axi_data;
                    2'd2: packet_data[383:256] <= axi_data;
                    2'd3: packet_data[511:384] <= axi_data;
                endcase

                if (beat_count == 2'd3) begin
                    beat_count   <= 2'd0;
                    packet_valid <= 1'b1;
                end
                else begin
                    beat_count <= beat_count + 1'b1;
                end

            end
        end
    end

endmodule