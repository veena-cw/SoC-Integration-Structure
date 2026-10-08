//------------------------------------------------------------------------------
// axi_sram_cdc.sv
//
// 400 MHz AXI memory interface
//          |
//          v
//     Request Async FIFO
//          |
//       400 -> 750 MHz
//          |
//          v
//     750 MHz SRAM
//          |
//     Response Async FIFO
//          |
//       750 -> 400 MHz
//          |
//          v
// 400 MHz AXI memory interface
//
// The existing asynchronous_fifo implementation is NOT modified.
//
// Address conversion:
//   AXI address = byte address
//   SRAM address = word address
//
// For 128-bit SRAM:
//   bytes/word = 16
//   BYTE_OFF   = 4
//
// Example:
//   AXI 0x1070_0100
//       - 0x1070_0000
//       = 0x0000_0100
//       >> 4
//       = SRAM word address 0x0010
//------------------------------------------------------------------------------

`timescale 1ns/1ps

module axi_sram_cdc #(
    parameter int ADDR_WIDTH     = 32,
    parameter int DATA_WIDTH     = 128,
    parameter int FIFO_DEPTH     = 8,
    parameter int MEM_ADDR_WIDTH = 16,

    parameter logic [ADDR_WIDTH-1:0] SRAM_BASE_ADDR =
        32'h1070_0000
) (
    //==========================================================================
    // 400 MHz AXI domain
    //==========================================================================

    input  logic                         axi_clk_i,
    input  logic                         axi_reset_i,       // active high

    input  logic                         mem_req,
    input  logic                         mem_we,
    input  logic [ADDR_WIDTH-1:0]        mem_addr,
    input  logic [DATA_WIDTH-1:0]        mem_wdata,
    input  logic [DATA_WIDTH/8-1:0]      mem_wstrb,

    output logic [DATA_WIDTH-1:0]         mem_rdata,
    output logic                         mem_rvalid,
    output logic                         mem_ready,

    //==========================================================================
    // 750 MHz SRAM domain
    //==========================================================================

    input  logic                         sram_clk_i,
    input  logic                         sram_reset_i,      // active high

    output logic                         sram_req,
    output logic                         sram_we,
    output logic [MEM_ADDR_WIDTH-1:0]    sram_addr,
    output logic [DATA_WIDTH-1:0]         sram_wdata,
    output logic [DATA_WIDTH/8-1:0]      sram_be,

    input  logic [DATA_WIDTH-1:0]        sram_rdata
);

    localparam int STRB_WIDTH = DATA_WIDTH / 8;
    localparam int BYTE_OFF   = $clog2(STRB_WIDTH);

    localparam int REQ_FIFO_WIDTH =
          1
        + ADDR_WIDTH
        + DATA_WIDTH
        + STRB_WIDTH;

    localparam int RESP_FIFO_WIDTH = DATA_WIDTH;

    //==========================================================================
    // Address range
    //==========================================================================

    logic [ADDR_WIDTH:0] sram_offset;

    always_comb begin
        sram_offset = {1'b0, mem_addr} -
                      {1'b0, SRAM_BASE_ADDR};
    end

    logic addr_in_range;

    always_comb begin
        addr_in_range =
            (mem_addr >= SRAM_BASE_ADDR) &&
            (sram_offset < (STRB_WIDTH * (64'd1 << MEM_ADDR_WIDTH)));
    end

    //==========================================================================
    // REQUEST FIFO
    //
    // 400 MHz -> 750 MHz
    //==========================================================================

    logic [REQ_FIFO_WIDTH-1:0] req_fifo_data_in;
    logic [REQ_FIFO_WIDTH-1:0] req_fifo_data_out;

    logic req_fifo_w_en;
    logic req_fifo_r_en;
    logic req_fifo_full;
    logic req_fifo_empty;

    assign req_fifo_data_in = {
        mem_we,
        mem_addr,
        mem_wdata,
        mem_wstrb
    };

    // Request accepted only when:
    //   1. request is valid
    //   2. address is inside SRAM range
    //   3. FIFO has space
    assign req_fifo_w_en =
        mem_req &&
        addr_in_range &&
        !req_fifo_full;

    // Backpressure to AXI memory interface.
    assign mem_ready =
        !req_fifo_full &&
        addr_in_range;

    // Existing async FIFO -- DO NOT MODIFY.
    asynchronous_fifo #(
        .DEPTH      (FIFO_DEPTH),
        .DATA_WIDTH (REQ_FIFO_WIDTH)
    ) u_req_fifo (
        .wclk      (axi_clk_i),
        .wrst_n    (~axi_reset_i),

        .rclk      (sram_clk_i),
        .rrst_n    (~sram_reset_i),

        .w_en      (req_fifo_w_en),
        .r_en      (req_fifo_r_en),

        .data_in   (req_fifo_data_in),
        .data_out  (req_fifo_data_out),

        .full      (req_fifo_full),
        .empty     (req_fifo_empty)
    );

    //==========================================================================
    // SRAM DOMAIN REQUEST CONTROLLER
    //==========================================================================

    logic                      sram_req_q;
    logic                      sram_we_q;
    logic [MEM_ADDR_WIDTH-1:0] sram_addr_q;
    logic [DATA_WIDTH-1:0]     sram_wdata_q;
    logic [STRB_WIDTH-1:0]     sram_be_q;

    logic read_pending_q;

    // FIFO output is combinationally valid when r_en is asserted in your
    // existing FIFO implementation.
    assign req_fifo_r_en =
        !sram_req_q &&
        !read_pending_q &&
        !req_fifo_empty;

    // Fields extracted from request FIFO.
    wire req_we =
        req_fifo_data_out[REQ_FIFO_WIDTH-1];

    wire [ADDR_WIDTH-1:0] req_axi_addr =
        req_fifo_data_out[
            STRB_WIDTH + DATA_WIDTH + ADDR_WIDTH - 1 :
            STRB_WIDTH + DATA_WIDTH
        ];

    wire [DATA_WIDTH-1:0] req_wdata =
        req_fifo_data_out[
            STRB_WIDTH + DATA_WIDTH - 1 :
            STRB_WIDTH
        ];

    wire [STRB_WIDTH-1:0] req_wstrb =
        req_fifo_data_out[
            STRB_WIDTH-1 : 0
        ];

    // Offset from SRAM base.
    wire [ADDR_WIDTH:0] req_offset =
        {1'b0, req_axi_addr} -
        {1'b0, SRAM_BASE_ADDR};

    // Convert byte address -> SRAM word address.
    wire [MEM_ADDR_WIDTH-1:0] req_sram_addr =
        req_offset[
            BYTE_OFF + MEM_ADDR_WIDTH - 1 :
            BYTE_OFF
        ];

    always_ff @(posedge sram_clk_i or posedge sram_reset_i) begin

        if (sram_reset_i) begin

            sram_req_q     <= 1'b0;
            sram_we_q      <= 1'b0;
            sram_addr_q    <= '0;
            sram_wdata_q   <= '0;
            sram_be_q      <= '0;
            read_pending_q <= 1'b0;

        end
        else begin

            // Default: request pulse is one SRAM clock cycle.
            sram_req_q <= 1'b0;

            // ---------------------------------------------------------------
            // Load request from async FIFO
            // ---------------------------------------------------------------
            if (req_fifo_r_en) begin

                sram_we_q    <= req_we;
                sram_addr_q  <= req_sram_addr;
                sram_wdata_q <= req_wdata;
                sram_be_q    <= req_wstrb;

                sram_req_q <= 1'b1;

            end

            // ---------------------------------------------------------------
            // Track one-cycle SRAM read latency.
            // ---------------------------------------------------------------
            read_pending_q <=
                sram_req_q &&
                !sram_we_q;

        end
    end

    assign sram_req   = sram_req_q;
    assign sram_we    = sram_we_q;
    assign sram_addr  = sram_addr_q;
    assign sram_wdata = sram_wdata_q;
    assign sram_be    = sram_be_q;

    //==========================================================================
    // RESPONSE FIFO
    //
    // 750 MHz -> 400 MHz
    //==========================================================================

    logic [RESP_FIFO_WIDTH-1:0] resp_fifo_data_in;
    logic [RESP_FIFO_WIDTH-1:0] resp_fifo_data_out;

    logic resp_fifo_w_en;
    logic resp_fifo_r_en;
    logic resp_fifo_full;
    logic resp_fifo_empty;

    // IMPORTANT:
    // Do not register sram_rdata first and then write that register into the
    // FIFO on the same clock. That would write the previous value.
    //
    // tc_sram Latency=1 means sram_rdata is valid when read_pending_q is true.
    assign resp_fifo_data_in = sram_rdata;

    assign resp_fifo_w_en =
        read_pending_q &&
        !resp_fifo_full;

    // Existing async FIFO -- DO NOT MODIFY.
    asynchronous_fifo #(
        .DEPTH      (FIFO_DEPTH),
        .DATA_WIDTH (RESP_FIFO_WIDTH)
    ) u_resp_fifo (
        .wclk      (sram_clk_i),
        .wrst_n    (~sram_reset_i),

        .rclk      (axi_clk_i),
        .rrst_n    (~axi_reset_i),

        .w_en      (resp_fifo_w_en),
        .r_en      (resp_fifo_r_en),

        .data_in   (resp_fifo_data_in),
        .data_out  (resp_fifo_data_out),

        .full      (resp_fifo_full),
        .empty     (resp_fifo_empty)
    );

    //==========================================================================
    // AXI DOMAIN RESPONSE REGISTER
    //
    // Your existing FIFO has:
    //
    //   data_out = r_en ? fifo[rptr] : 0
    //
    // Therefore capture the FIFO data on the same AXI clock edge on which
    // the FIFO is popped.
    //==========================================================================

    always_ff @(posedge axi_clk_i or posedge axi_reset_i) begin

        if (axi_reset_i) begin
            mem_rdata <= '0;
        end
        else begin

            if (resp_fifo_r_en)
                mem_rdata <= resp_fifo_data_out;

        end
    end

    // Tell axi4_slave that response data is available.
    assign mem_rvalid =
        !resp_fifo_empty;

    // Pop response when the AXI memory interface is ready.
    //
    // Because axi4_slave serializes requests, there is only one outstanding
    // read at a time.
    assign resp_fifo_r_en =
        !resp_fifo_empty &&
        mem_ready;

endmodule
