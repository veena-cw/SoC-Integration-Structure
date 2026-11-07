`timescale 1ns/1ps
// AXI4 write-only slave (32-bit beats) -> input FIFO -> 32-to-8 serializer.
module isp_axi4_slave #(
    parameter ADDR_WIDTH = 32,
    parameter DATA_WIDTH = 32,      // serializer assumes 32
    parameter ID_WIDTH   = 4,
    parameter FIFO_DEPTH = 16       // power of 2
)(
    input  wire                     clk,
    input  wire                     reset_n,
    input  wire                     flush_i,         // clear FIFO + serializer
    input  wire                     pixel_ready_i,   // downstream can take a pixel

    input  wire [ID_WIDTH-1:0]      s_axi_awid,
    input  wire [ADDR_WIDTH-1:0]    s_axi_awaddr,
    input  wire [7:0]               s_axi_awlen,
    input  wire [2:0]               s_axi_awsize,
    input  wire [1:0]               s_axi_awburst,
    input  wire                     s_axi_awvalid,
    output wire                     s_axi_awready,

    input  wire [DATA_WIDTH-1:0]    s_axi_wdata,
    input  wire [DATA_WIDTH/8-1:0]  s_axi_wstrb,
    input  wire                     s_axi_wlast,
    input  wire                     s_axi_wvalid,
    output wire                     s_axi_wready,

    output reg  [ID_WIDTH-1:0]      s_axi_bid,
    output reg  [1:0]               s_axi_bresp,
    output reg                      s_axi_bvalid,
    input  wire                     s_axi_bready,

    output reg  [7:0]               raw_pixel_data_o,
    output reg                      raw_pixel_valid_o,

    output wire                     input_fifo_full_o,
    output wire                     input_fifo_empty_o,
    output reg                      input_error_o        // 1-cycle pulse
);
    localparam BYTE_LANES = DATA_WIDTH/8;
    localparam PTR_WIDTH  = (FIFO_DEPTH <= 2) ? 1 : $clog2(FIFO_DEPTH);
    localparam COUNT_WIDTH = $clog2(FIFO_DEPTH + 1);
    localparam AXI_FIXED = 2'b00, AXI_INCR = 2'b01;
    localparam AXI_OKAY = 2'b00, AXI_SLVERR = 2'b10;

    reg [DATA_WIDTH-1:0]  fifo_data_mem [0:FIFO_DEPTH-1];
    reg [BYTE_LANES-1:0]  fifo_strb_mem [0:FIFO_DEPTH-1];
    reg [PTR_WIDTH-1:0]   fifo_wr_ptr, fifo_rd_ptr;
    reg [COUNT_WIDTH-1:0] fifo_count;

    reg                   write_active;
    reg [ID_WIDTH-1:0]    write_id_reg;
    reg [8:0]             beats_remaining;
    reg                   aw_error;       // static (burst type / size) error
    reg                   burst_error;    // aw_error or WLAST mismatch
    reg [1:0]             byte_index;

    assign input_fifo_full_o  = (fifo_count == FIFO_DEPTH);
    assign input_fifo_empty_o = (fifo_count == 0);

    assign s_axi_awready = !write_active && !s_axi_bvalid;
    // on an erroneous burst data is accepted (so the burst can finish) but dropped
    assign s_axi_wready  = write_active && (aw_error || !input_fifo_full_o);

    wire aw_hs     = s_axi_awvalid && s_axi_awready;
    wire w_hs      = s_axi_wvalid  && s_axi_wready;
    wire fifo_push = w_hs && !aw_error;
    wire fifo_pop  = !input_fifo_empty_o && pixel_ready_i && (byte_index == 2'd3);
    wire last_beat = (beats_remaining == 9'd1);
    wire aw_bad    = ((s_axi_awburst != AXI_INCR) && (s_axi_awburst != AXI_FIXED)) ||
                     (s_axi_awsize != 3'b010);

    // ---- write control + response ----
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            write_active <= 0; write_id_reg <= 0; beats_remaining <= 0;
            aw_error <= 0; burst_error <= 0;
            s_axi_bid <= 0; s_axi_bresp <= AXI_OKAY; s_axi_bvalid <= 0;
            input_error_o <= 0;
        end else begin
            input_error_o <= 1'b0;
            if (s_axi_bvalid && s_axi_bready) s_axi_bvalid <= 1'b0;

            if (aw_hs) begin
                write_active    <= 1'b1;
                write_id_reg    <= s_axi_awid;
                beats_remaining <= {1'b0, s_axi_awlen} + 9'd1;
                aw_error        <= aw_bad;
                burst_error     <= aw_bad;
                if (aw_bad) input_error_o <= 1'b1;
            end

            if (w_hs) begin
                if (s_axi_wlast != last_beat) begin
                    burst_error   <= 1'b1;
                    input_error_o <= 1'b1;
                end
                if (last_beat) begin
                    write_active    <= 1'b0;
                    beats_remaining <= 9'd0;
                    s_axi_bid       <= write_id_reg;
                    s_axi_bresp     <= (burst_error || !s_axi_wlast) ? AXI_SLVERR : AXI_OKAY;
                    s_axi_bvalid    <= 1'b1;
                end else
                    beats_remaining <= beats_remaining - 9'd1;
            end
        end
    end

    // ---- input FIFO ----
    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            fifo_wr_ptr <= 0; fifo_rd_ptr <= 0; fifo_count <= 0;
        end else if (flush_i) begin
            fifo_wr_ptr <= 0; fifo_rd_ptr <= 0; fifo_count <= 0;
        end else begin
            if (fifo_push) begin
                fifo_data_mem[fifo_wr_ptr] <= s_axi_wdata;
                fifo_strb_mem[fifo_wr_ptr] <= s_axi_wstrb;
                fifo_wr_ptr <= (fifo_wr_ptr == FIFO_DEPTH-1) ? {PTR_WIDTH{1'b0}} : fifo_wr_ptr + 1'b1;
            end
            if (fifo_pop)
                fifo_rd_ptr <= (fifo_rd_ptr == FIFO_DEPTH-1) ? {PTR_WIDTH{1'b0}} : fifo_rd_ptr + 1'b1;
            case ({fifo_push, fifo_pop})
                2'b10:   fifo_count <= fifo_count + 1'b1;
                2'b01:   fifo_count <= fifo_count - 1'b1;
                default: fifo_count <= fifo_count;
            endcase
        end
    end

    // ---- 32-to-8 serializer (byte0 first, WSTRB gates each byte) ----
    wire [DATA_WIDTH-1:0]   head_data = fifo_data_mem[fifo_rd_ptr];
    wire [BYTE_LANES-1:0]   head_strb = fifo_strb_mem[fifo_rd_ptr];

    always @(posedge clk or negedge reset_n) begin
        if (!reset_n) begin
            byte_index <= 0; raw_pixel_data_o <= 0; raw_pixel_valid_o <= 0;
        end else if (flush_i) begin
            byte_index <= 0; raw_pixel_valid_o <= 0;
        end else begin
            raw_pixel_valid_o <= 1'b0;
            if (!input_fifo_empty_o && pixel_ready_i) begin
                raw_pixel_data_o  <= head_data[byte_index*8 +: 8];
                raw_pixel_valid_o <= head_strb[byte_index];
                byte_index        <= byte_index + 1'b1;   // wraps 3 -> 0
            end
        end
    end
endmodule
