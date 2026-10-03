//------------------------------------------------------------------------------
// axi4_slave.sv
//
// Generic AXI4 slave using an external memory.
//
// The internal mem[] array has intentionally been removed. Actual storage is
// provided by tc_sram through axi_sram_adapter.
//
// Supported:
//   - AW/W/B and AR/R channels
//   - AWID / ARID
//   - AWLEN / ARLEN
//   - AWSIZE / ARSIZE
//   - AWBURST / ARBURST
//   - FIXED / INCR / WRAP bursts
//   - WSTRB byte enables
//
// The connected tc_sram is configured as a single-port memory, so read and
// write transactions are serialized. AXI READY signals prevent simultaneous
// read/write memory transactions.
//
//------------------------------------------------------------------------------

module axi4_slave #(
    parameter int ADDR_WIDTH     = 32,
    parameter int DATA_WIDTH     = 128,
    parameter int ID_WIDTH       = 4,
    parameter int MEM_ADDR_WIDTH = 16,
    parameter logic [ADDR_WIDTH-1:0] SRAM_BASE_ADDR = 32'h1070_0000

) (
    input  logic                    aclk,
    input  logic                    aresetn,

    // AXI4 write address channel
    input  logic [ID_WIDTH-1:0]     s_axi_awid,
    input  logic [ADDR_WIDTH-1:0]   s_axi_awaddr,
    input  logic [7:0]              s_axi_awlen,
    input  logic [2:0]              s_axi_awsize,
    input  logic [1:0]              s_axi_awburst,
    input  logic                    s_axi_awlock,
    input  logic [3:0]              s_axi_awcache,
    input  logic [2:0]              s_axi_awprot,
    input  logic [3:0]              s_axi_awqos,
    input  logic                    s_axi_awvalid,
    output logic                    s_axi_awready,

    // AXI4 write data channel
    input  logic [DATA_WIDTH-1:0]   s_axi_wdata,
    input  logic [DATA_WIDTH/8-1:0] s_axi_wstrb,
    input  logic                    s_axi_wlast,
    input  logic                    s_axi_wvalid,
    output logic                    s_axi_wready,

    // AXI4 write response channel
    output logic [ID_WIDTH-1:0]     s_axi_bid,
    output logic [1:0]              s_axi_bresp,
    output logic                    s_axi_bvalid,
    input  logic                    s_axi_bready,

    // AXI4 read address channel
    input  logic [ID_WIDTH-1:0]     s_axi_arid,
    input  logic [ADDR_WIDTH-1:0]   s_axi_araddr,
    input  logic [7:0]              s_axi_arlen,
    input  logic [2:0]              s_axi_arsize,
    input  logic [1:0]              s_axi_arburst,
    input  logic                    s_axi_arlock,
    input  logic [3:0]              s_axi_arcache,
    input  logic [2:0]              s_axi_arprot,
    input  logic [3:0]              s_axi_arqos,
    input  logic                    s_axi_arvalid,
    output logic                    s_axi_arready,

    // AXI4 read data channel
    output logic [ID_WIDTH-1:0]     s_axi_rid,
    output logic [DATA_WIDTH-1:0]   s_axi_rdata,
    output logic [1:0]              s_axi_rresp,
    output logic                    s_axi_rlast,
    output logic                    s_axi_rvalid,
    input  logic                    s_axi_rready,

    //--------------------------------------------------------------------------
    // External memory interface
    //--------------------------------------------------------------------------

    output logic                    mem_req,
    output logic                    mem_we,
    output logic [ADDR_WIDTH-1:0]  mem_addr,
    output logic [DATA_WIDTH-1:0]  mem_wdata,
    output logic [DATA_WIDTH/8-1:0] mem_wstrb,

    input  logic [DATA_WIDTH-1:0]   mem_rdata,
    input  logic                    mem_rvalid,
    input  logic                    mem_ready
);

    localparam int BYTE_OFF = $clog2(DATA_WIDTH/8);

    localparam logic [1:0] RESP_OKAY   = 2'b00;
    localparam logic [1:0] RESP_DECERR = 2'b11;
/*
    function automatic logic addr_in_range(
        input logic [ADDR_WIDTH-1:0] a
    );
        if (ADDR_WIDTH > (MEM_ADDR_WIDTH + BYTE_OFF))
            addr_in_range =
                (a[ADDR_WIDTH-1:MEM_ADDR_WIDTH+BYTE_OFF] == '0);
        else
            addr_in_range = 1'b1;
    endfunction
*/

localparam logic [ADDR_WIDTH-1:0] SRAM_SIZE_BYTES =
    (1 << (MEM_ADDR_WIDTH + BYTE_OFF));

localparam logic [ADDR_WIDTH-1:0] SRAM_END_ADDR =
    SRAM_BASE_ADDR + SRAM_SIZE_BYTES - 1;

function automatic logic addr_in_range(
    input logic [ADDR_WIDTH-1:0] a
);
    addr_in_range =
        (a >= SRAM_BASE_ADDR) &&
        (a <= SRAM_END_ADDR);
endfunction


    function automatic logic [ADDR_WIDTH-1:0] next_axi_addr(
        input logic [ADDR_WIDTH-1:0] addr,
        input logic [7:0]            len,
        input logic [2:0]            size,
        input logic [1:0]            burst
    );
        logic [ADDR_WIDTH-1:0] num_bytes;
        logic [3:0]            wrap_shift;
        logic [ADDR_WIDTH-1:0] wrap_mask;
        logic [ADDR_WIDTH-1:0] base;
        logic [ADDR_WIDTH-1:0] lin_next;

        begin
            num_bytes = {{(ADDR_WIDTH-1){1'b0}}, 1'b1} << size;

            case (burst)
                2'b00: begin
                    next_axi_addr = addr; // FIXED
                end

                2'b10: begin // WRAP
                    case (len)
                        8'd1:    wrap_shift = 4'd1;
                        8'd3:    wrap_shift = 4'd2;
                        8'd7:    wrap_shift = 4'd3;
                        8'd15:   wrap_shift = 4'd4;
                        default: wrap_shift = 4'd0;
                    endcase

                    wrap_mask = (num_bytes << wrap_shift) -
                                {{(ADDR_WIDTH-1){1'b0}}, 1'b1};
                    base      = addr & ~wrap_mask;
                    lin_next  = addr + num_bytes;

                    next_axi_addr =
                        ((lin_next & ~wrap_mask) != base) ?
                        base : lin_next;
                end

                default: begin
                    next_axi_addr = addr + num_bytes; // INCR
                end
            endcase
        end
    endfunction

    //--------------------------------------------------------------------------
    // Write FSM
    //--------------------------------------------------------------------------

    typedef enum logic [1:0] {
        SW_IDLE,
        SW_DATA,
        SW_RESP
    } sw_state_t;

    sw_state_t sw_state;

    logic [ADDR_WIDTH-1:0] aw_addr_q;
    logic [7:0]            aw_len_q;
    logic [2:0]            aw_size_q;
    logic [1:0]            aw_burst_q;
    logic [ID_WIDTH-1:0]   aw_id_q;
    logic                  aw_err_q;
    logic [1:0]            bresp_q;

    // Single-port SRAM: do not accept a write address while a read is active.
    assign s_axi_awready = (sw_state == SW_IDLE) &&
                           (sr_state == SR_IDLE);

    assign s_axi_wready  = (sw_state == SW_DATA);
    assign s_axi_bvalid  = (sw_state == SW_RESP);
    assign s_axi_bid     = aw_id_q;
    assign s_axi_bresp   = bresp_q;

    logic mem_wr_req;

    /*
    assign mem_wr_req =
        (sw_state == SW_DATA) &&
        s_axi_wvalid &&
        s_axi_wready &&
        mem_ready;
*/
assign mem_wr_req =
    (sw_state == SW_DATA) &&
    s_axi_wvalid &&
    s_axi_wready &&
    addr_in_range(aw_addr_q);
    
    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            sw_state   <= SW_IDLE;
            aw_addr_q  <= '0;
            aw_len_q   <= '0;
            aw_size_q  <= '0;
            aw_burst_q <= '0;
            aw_id_q    <= '0;
            aw_err_q   <= 1'b0;
            bresp_q    <= RESP_OKAY;
        end
        else begin
            case (sw_state)
                SW_IDLE: begin
                    if (s_axi_awvalid && s_axi_awready) begin
                        aw_addr_q  <= s_axi_awaddr;
                        aw_len_q   <= s_axi_awlen;
                        aw_size_q  <= s_axi_awsize;
                        aw_burst_q <= s_axi_awburst;
                        aw_id_q    <= s_axi_awid;
                        aw_err_q   <= !addr_in_range(s_axi_awaddr);
                        sw_state   <= SW_DATA;
                    end
                end

                SW_DATA: begin
                    if (s_axi_wvalid && s_axi_wready) begin
                        if (!addr_in_range(aw_addr_q))
                            aw_err_q <= 1'b1;

                        if (s_axi_wlast) begin
                            bresp_q <=
                                (aw_err_q || !addr_in_range(aw_addr_q)) ?
                                RESP_DECERR : RESP_OKAY;
                            sw_state <= SW_RESP;
                        end
                        else begin
                            aw_addr_q <= next_axi_addr(
                                aw_addr_q,
                                aw_len_q,
                                aw_size_q,
                                aw_burst_q
                            );
                        end
                    end
                end

                SW_RESP: begin
                    if (s_axi_bvalid && s_axi_bready)
                        sw_state <= SW_IDLE;
                end

                default: sw_state <= SW_IDLE;
            endcase
        end
    end

    //--------------------------------------------------------------------------
    // Read FSM
    //--------------------------------------------------------------------------

    typedef enum logic [1:0] {
        SR_IDLE,
        SR_REQ,
        SR_WAIT,
        SR_DATA
    } sr_state_t;

    sr_state_t sr_state;

    logic [ADDR_WIDTH-1:0] ar_addr_q;
    logic [7:0]            ar_len_q;
    logic [2:0]            ar_size_q;
    logic [1:0]            ar_burst_q;
    logic [ID_WIDTH-1:0]   ar_id_q;
    logic [7:0]            rbeat_cnt;
    logic                  ar_err_q;

    // Single-port SRAM: do not accept a read address while a write is active.
    assign s_axi_arready = (sr_state == SR_IDLE) &&
                           (sw_state == SW_IDLE);

    assign s_axi_rvalid =
        (sr_state == SR_DATA);

    assign s_axi_rid   = ar_id_q;
    assign s_axi_rlast =
        (sr_state == SR_DATA) &&
        (rbeat_cnt == ar_len_q);

    assign s_axi_rdata = mem_rdata;
    assign s_axi_rresp = ar_err_q ? RESP_DECERR : RESP_OKAY;

    logic mem_rd_req;

/*
    assign mem_rd_req =
        (sr_state == SR_REQ) &&
        mem_ready;
*/
assign mem_rd_req =
    (sr_state == SR_REQ) &&
    addr_in_range(ar_addr_q);
    
    //--------------------------------------------------------------------------
    // Single memory interface driver.
    //
    // Write has priority by construction, although AXI READY gating prevents
    // read/write overlap for the single-port SRAM.
    //--------------------------------------------------------------------------

    assign mem_req   = mem_wr_req | mem_rd_req;
    assign mem_we    = mem_wr_req;
    assign mem_addr  = mem_wr_req ? aw_addr_q : ar_addr_q;
    assign mem_wdata = mem_wr_req ? s_axi_wdata : '0;
    assign mem_wstrb = mem_wr_req ? s_axi_wstrb : '0;

    always_ff @(posedge aclk or negedge aresetn) begin
        if (!aresetn) begin
            sr_state   <= SR_IDLE;
            ar_addr_q  <= '0;
            ar_len_q   <= '0;
            ar_size_q  <= '0;
            ar_burst_q <= '0;
            ar_id_q    <= '0;
            rbeat_cnt  <= '0;
            ar_err_q   <= 1'b0;
        end
        else begin
            case (sr_state)

                SR_IDLE: begin
                    if (s_axi_arvalid && s_axi_arready) begin
                        ar_addr_q  <= s_axi_araddr;
                        ar_len_q   <= s_axi_arlen;
                        ar_size_q  <= s_axi_arsize;
                        ar_burst_q <= s_axi_arburst;
                        ar_id_q    <= s_axi_arid;
                        rbeat_cnt  <= '0;
                        ar_err_q   <= !addr_in_range(s_axi_araddr);

                        if (addr_in_range(s_axi_araddr))
                            sr_state <= SR_REQ;
                        else
                            sr_state <= SR_DATA;
                    end
                end

                SR_REQ: begin
                    if (mem_ready)
                        sr_state <= SR_WAIT;
                end

                SR_WAIT: begin
                    if (mem_rvalid)
                        sr_state <= SR_DATA;
                end

                SR_DATA: begin
                    if (s_axi_rvalid && s_axi_rready) begin
                        if (s_axi_rlast) begin
                            sr_state <= SR_IDLE;
                        end
                        else begin
                            ar_addr_q <= next_axi_addr(
                                ar_addr_q,
                                ar_len_q,
                                ar_size_q,
                                ar_burst_q
                            );
                            rbeat_cnt <= rbeat_cnt + 8'd1;
                            sr_state <= SR_REQ;
                        end
                    end
                end

                default: sr_state <= SR_IDLE;

            endcase
        end
    end

endmodule
