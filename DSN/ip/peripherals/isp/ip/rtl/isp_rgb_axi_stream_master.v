`timescale 1ns/1ps
module isp_rgb_axi_stream_master #(
    parameter DATA_WIDTH = 32
)(
    input  wire                    clk,
    input  wire                    reset_n,
    input  wire                    flush_i,        // drop held beat (abort / reset)

    input  wire [23:0]             pixel_data_i,
    input  wire                    pixel_valid_i,
    input  wire                    pixel_last_i,
    input  wire                    pixel_sof_i,
    output wire                    pixel_ready_o,  // FIX: was declared "input" but is driven here

    output reg  [DATA_WIDTH-1:0]   m_axis_tdata,
    output reg                     m_axis_tvalid,
    input  wire                    m_axis_tready,
    output wire [DATA_WIDTH/8-1:0] m_axis_tkeep,
    output reg                     m_axis_tlast,
    output reg                     m_axis_tuser
);
    assign m_axis_tkeep  = 4'b0111;
    assign pixel_ready_o = !m_axis_tvalid || m_axis_tready;

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            m_axis_tdata <= 0; m_axis_tvalid <= 0; m_axis_tlast <= 0; m_axis_tuser <= 0;
        end else if (flush_i) begin
            m_axis_tvalid <= 0; m_axis_tlast <= 0; m_axis_tuser <= 0;
        end else if (pixel_ready_o) begin
            m_axis_tvalid <= pixel_valid_i;
            if (pixel_valid_i) begin
                m_axis_tdata <= {8'h00, pixel_data_i};
                m_axis_tlast <= pixel_last_i;
                m_axis_tuser <= pixel_sof_i;
            end else begin
                m_axis_tlast <= 1'b0;
                m_axis_tuser <= 1'b0;
            end
        end
    end
endmodule
