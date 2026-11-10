`timescale 1ns/1ps
`default_nettype none
`include "bp_common_defines.svh"

//   BlackParrot BedRock (mem fwd/rev) to AXI4-Lite master bridge with clock domain crossing.
//   cpu_clk_i  (BedRock / CPU domain, 1.5 GHz)  : request FIFO write side, response FIFO read side
//   axil_clk_i (AXI4-Lite domain, 100 MHz)      : bridge FSM and the external AXI4_Lite_Master

module bp_bedrock_axil_bridge
  import bp_common_pkg::*;
#(
    parameter int ADDR_WIDTH     = 32,
    parameter int CPU_DATA_WIDTH = 128,           // BedRock flit width, 64 or 128

    parameter int LCE_ID_WIDTH   = 1,
    parameter int CCE_ID_WIDTH   = 1,
    parameter int DID_WIDTH      = 3,
    parameter int LCE_ASSOC      = 8,

    // Width of the header ports. Default is the exact width of bp_bedrock_mem_fwd_header_s.
    parameter int MEM_FWD_HEADER_WIDTH =
        `bp_bedrock_header_width(ADDR_WIDTH, `bp_bedrock_fwd_payload_width(LCE_ID_WIDTH, CCE_ID_WIDTH, DID_WIDTH, LCE_ASSOC)),
    parameter int MEM_REV_HEADER_WIDTH = MEM_FWD_HEADER_WIDTH,

    parameter int FIFO_DEPTH     = 8,             // power of two, at least 4
    parameter int AXIL_TIMEOUT   = 255            // AXI4_Lite_Master handshake timeout in axil_clk_i cycles, 1..255
) (
    // ==================================================================
    // CPU / BedRock domain
    // ==================================================================
    input  logic                            cpu_clk_i,
    input  logic                            cpu_reset_i,          // active high

    input  logic [MEM_FWD_HEADER_WIDTH-1:0] mem_fwd_header_i,
    input  logic [CPU_DATA_WIDTH-1:0]       mem_fwd_data_i,
    input  logic                            mem_fwd_v_i,
    output logic                            mem_fwd_ready_and_o,

    output logic [MEM_REV_HEADER_WIDTH-1:0] mem_rev_header_o,
    output logic [CPU_DATA_WIDTH-1:0]       mem_rev_data_o,
    output logic                            mem_rev_v_o,
    input  logic                            mem_rev_ready_and_i,

    output logic                            err_o,                // one cycle: an errored response was accepted

    // ==================================================================
    // AXI4-Lite master domain
    // ==================================================================
    input  logic                            axil_clk_i,
    input  logic                            axil_resetn_i,        // active low

    output logic [ADDR_WIDTH-1:0]           m_axil_awaddr,
    output logic [2:0]                      m_axil_awprot,
    output logic                            m_axil_awvalid,
    input  logic                            m_axil_awready,

    output logic [31:0]                     m_axil_wdata,
    output logic [3:0]                      m_axil_wstrb,
    output logic                            m_axil_wvalid,
    input  logic                            m_axil_wready,

    input  logic [1:0]                      m_axil_bresp,
    input  logic                            m_axil_bvalid,
    output logic                            m_axil_bready,

    output logic [ADDR_WIDTH-1:0]           m_axil_araddr,
    output logic [2:0]                      m_axil_arprot,
    output logic                            m_axil_arvalid,
    input  logic                            m_axil_arready,

    input  logic [31:0]                     m_axil_rdata,
    input  logic [1:0]                      m_axil_rresp,
    input  logic                            m_axil_rvalid,
    output logic                            m_axil_rready
);
    localparam int DATA_W       = CPU_DATA_WIDTH;
    localparam int DATA_BYTES   = DATA_W / 8;
    localparam int NW           = DATA_W / 32;                 // 32-bit words per flit
    localparam int WIDX_W       = $clog2(NW);
    localparam int REQ_W        = MEM_FWD_HEADER_WIDTH + DATA_W;
    localparam int RESP_W       = MEM_REV_HEADER_WIDTH + DATA_W + 1;   // header, data, err

    if (DATA_W != 64 && DATA_W != 128) begin : gen_width_check
        initial $fatal(1, "bp_bedrock_axil_bridge: CPU_DATA_WIDTH (%0d) must be 64 or 128", DATA_W);
    end
    if (AXIL_TIMEOUT < 1 || AXIL_TIMEOUT > 255) begin : gen_timeout_check
        initial $fatal(1, "bp_bedrock_axil_bridge: AXIL_TIMEOUT (%0d) must be 1..255 (AXI4_Lite_Master has 8 bit counters)", AXIL_TIMEOUT);
    end

    `declare_bp_bedrock_if(ADDR_WIDTH, LCE_ID_WIDTH, CCE_ID_WIDTH, DID_WIDTH, LCE_ASSOC);

    localparam int FWD_HDR_BITS = $bits(bp_bedrock_mem_fwd_header_s);
    localparam int REV_HDR_BITS = $bits(bp_bedrock_mem_rev_header_s);
    if (FWD_HDR_BITS > MEM_FWD_HEADER_WIDTH || REV_HDR_BITS > MEM_REV_HEADER_WIDTH) begin : gen_hdr_check
        initial $fatal(1, "bp_bedrock_axil_bridge: header port width is smaller than the BedRock header (%0d bits)", FWD_HDR_BITS);
    end

    // ======================================================================
    // Reset: one combined asynchronous reset, synchronized per domain
    // ======================================================================
    logic arst_n, cpu_rst_n, axil_rst_n;
    assign arst_n = !cpu_reset_i && axil_resetn_i;

    bp_bedrock_axil_rst_sync u_rs_cpu  (.clk(cpu_clk_i),  .arst_n(arst_n), .rst_n(cpu_rst_n));
    bp_bedrock_axil_rst_sync u_rs_axil (.clk(axil_clk_i), .arst_n(arst_n), .rst_n(axil_rst_n));

    // ======================================================================
    // REQUEST PATH: CPU domain -> async FIFO -> AXI4-Lite domain
    // ======================================================================
    logic [REQ_W-1:0] req_fifo_din, req_fifo_dout;
    logic             req_fifo_w_en, req_fifo_r_en, req_fifo_full, req_fifo_empty;

    assign req_fifo_din        = {mem_fwd_header_i, mem_fwd_data_i};
    assign mem_fwd_ready_and_o = !req_fifo_full && cpu_rst_n;
    assign req_fifo_w_en       = mem_fwd_v_i && mem_fwd_ready_and_o;

    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(REQ_W)) u_req_fifo (
        .wclk(cpu_clk_i),  .wrst_n(cpu_rst_n),
        .rclk(axil_clk_i), .rrst_n(axil_rst_n),
        .w_en(req_fifo_w_en), .r_en(req_fifo_r_en),
        .data_in(req_fifo_din), .data_out(req_fifo_dout),
        .full(req_fifo_full), .empty(req_fifo_empty)
    );

    // ======================================================================
    // RESPONSE PATH: AXI4-Lite domain -> async FIFO -> CPU domain
    // ======================================================================
    logic [RESP_W-1:0] resp_fifo_din, resp_fifo_dout;
    logic              resp_fifo_w_en, resp_fifo_r_en, resp_fifo_full, resp_fifo_empty;

    asynchronous_fifo #(.DEPTH(FIFO_DEPTH), .DATA_WIDTH(RESP_W)) u_resp_fifo (
        .wclk(axil_clk_i), .wrst_n(axil_rst_n),
        .rclk(cpu_clk_i),  .rrst_n(cpu_rst_n),
        .w_en(resp_fifo_w_en), .r_en(resp_fifo_r_en),
        .data_in(resp_fifo_din), .data_out(resp_fifo_dout),
        .full(resp_fifo_full), .empty(resp_fifo_empty)
    );

    // FWFT passthrough on the CPU side (asynchronous_fifo presents data_out for the current read pointer)
    assign mem_rev_header_o = resp_fifo_dout[RESP_W-1 -: MEM_REV_HEADER_WIDTH];
    assign mem_rev_data_o   = resp_fifo_dout[1 +: DATA_W];
    assign mem_rev_v_o      = !resp_fifo_empty;
    assign resp_fifo_r_en   = mem_rev_v_o && mem_rev_ready_and_i;

    always_ff @(posedge cpu_clk_i or negedge cpu_rst_n) begin
        if (!cpu_rst_n) err_o <= 1'b0;
        else            err_o <= resp_fifo_r_en && resp_fifo_dout[0];
    end

    // ======================================================================
    // FSM (AXI4-Lite clock domain)
    // ======================================================================
    typedef enum logic [2:0] {
        S_IDLE   = 3'd0,   // wait for a request in the request FIFO
        S_DECODE = 3'd1,   // classify the captured request
        S_WR_REQ = 3'd2,   // one cycle: usr_write_req for the current word
        S_WR_WAIT= 3'd3,   // wait for usr_wr_done of the current word
        S_RD_REQ = 3'd4,   // one cycle: usr_read_req for the current word
        S_RD_WAIT= 3'd5,   // wait for usr_rd_done of the current word
        S_RESP   = 3'd6    // push the BedRock response into the response FIFO
    } state_e;

    state_e state;

    bp_bedrock_mem_fwd_header_s req_hdr_r;
    logic [DATA_W-1:0]          req_data_r;
    logic [WIDX_W-1:0]          wcnt_r;          // current 32-bit word of the request
    logic [WIDX_W:0]            nwords_r;        // number of 32-bit transfers (1, 2 or 4)
    logic [WIDX_W-1:0]          base_r;          // flit word that carries word 0 of the request
    logic                       is_wr_r;
    logic                       err_r;
    logic                       supported_r;     // request was accepted for a bus access
    logic [31:0]                rd_words_r [0:NW-1];

    // ---- request classification (from the captured header) ----
    logic [7:0]          nbytes;
    logic                is_wr, is_rd, size_ok, supported;
    logic [WIDX_W:0]     nwords;
    logic [WIDX_W-1:0]   sel_idx, base_idx;

    always_comb begin
        nbytes    = 8'd1 << req_hdr_r.size;
        is_wr     = (req_hdr_r.msg_type.fwd == e_bedrock_mem_wr);
        is_rd     = (req_hdr_r.msg_type.fwd == e_bedrock_mem_rd);
        size_ok   = (nbytes <= 8'(DATA_BYTES));
        supported = (is_wr || is_rd) && size_ok;
        nwords    = (nbytes < 8'd4) ? (WIDX_W+1)'(1) : (WIDX_W+1)'(nbytes >> 2);
        sel_idx   = req_hdr_r.payload.uncached ? WIDX_W'(req_hdr_r.addr[2])
                                               : req_hdr_r.addr[2 +: WIDX_W];
        base_idx  = sel_idx & ~(nwords[WIDX_W-1:0] - 1'b1);
    end

    // ---- payload of the current 32-bit transfer ----
    logic [WIDX_W-1:0]     cur_widx;
    logic [3:0]            strb_w;
    logic [ADDR_WIDTH-1:0] word_addr;

    always_comb begin
        cur_widx  = base_r + wcnt_r;
        word_addr = {req_hdr_r.addr[ADDR_WIDTH-1:2], 2'b00} + (ADDR_WIDTH'(wcnt_r) << 2);
        case (req_hdr_r.size)
            e_bedrock_msg_size_1: strb_w = 4'b0001 << req_hdr_r.addr[1:0];
            e_bedrock_msg_size_2: strb_w = 4'b0011 << req_hdr_r.addr[1:0];
            default:              strb_w = 4'b1111;
        endcase
    end

    wire last_word = (wcnt_r == nwords_r[WIDX_W-1:0] - 1'b1);

    // ======================================================================
    // External AXI4-Lite master
    // ======================================================================
    logic        usr_write_req, usr_read_req;
    logic [31:0] usr_rdata;
    logic        usr_wr_busy, usr_wr_done, usr_rd_busy, usr_rd_done;
    logic [1:0]  usr_wr_resp, usr_rd_resp;

    assign usr_write_req = (state == S_WR_REQ);
    assign usr_read_req  = (state == S_RD_REQ);

    AXI4_Lite_Master #(
        .C_M_AXI_ADDR_WIDTH(ADDR_WIDTH),
        .C_M_AXI_DATA_WIDTH(32),
        .TIMEOUT_VAL       (AXIL_TIMEOUT)
    ) u_axil_master (
        .M_AXI_ACLK   (axil_clk_i),
        .M_AXI_ARESETN(axil_rst_n),

        .usr_write_req(usr_write_req),
        .usr_read_req (usr_read_req),
        .usr_araddr   (word_addr),
        .usr_awaddr   (word_addr),
        .usr_wdata    (req_data_r[cur_widx*32 +: 32]),
        .usr_wstrb    (strb_w),
        .usr_rdata    (usr_rdata),

        .usr_wr_busy  (usr_wr_busy),
        .usr_wr_done  (usr_wr_done),
        .usr_wr_resp  (usr_wr_resp),
        .usr_rd_busy  (usr_rd_busy),
        .usr_rd_done  (usr_rd_done),
        .usr_rd_resp  (usr_rd_resp),

        .M_AXI_AWADDR (m_axil_awaddr),
        .M_AXI_AWPROT (m_axil_awprot),
        .M_AXI_AWVALID(m_axil_awvalid),
        .M_AXI_AWREADY(m_axil_awready),

        .M_AXI_WDATA  (m_axil_wdata),
        .M_AXI_WSTRB  (m_axil_wstrb),
        .M_AXI_WVALID (m_axil_wvalid),
        .M_AXI_WREADY (m_axil_wready),

        .M_AXI_BRESP  (m_axil_bresp),
        .M_AXI_BVALID (m_axil_bvalid),
        .M_AXI_BREADY (m_axil_bready),

        .M_AXI_ARADDR (m_axil_araddr),
        .M_AXI_ARPROT (m_axil_arprot),
        .M_AXI_ARVALID(m_axil_arvalid),
        .M_AXI_ARREADY(m_axil_arready),

        .M_AXI_RDATA  (m_axil_rdata),
        .M_AXI_RRESP  (m_axil_rresp),
        .M_AXI_RVALID (m_axil_rvalid),
        .M_AXI_RREADY (m_axil_rready)
    );

    // usr_wr_busy and usr_rd_busy are not needed: the FSM issues one request and waits for its done pulse.
    wire unused_busy = &{1'b0, usr_wr_busy, usr_rd_busy};

    // request FIFO is popped in the cycle the request is captured
    assign req_fifo_r_en = (state == S_IDLE) && !req_fifo_empty;

    wire [MEM_FWD_HEADER_WIDTH-1:0] fifo_hdr_w  = req_fifo_dout[REQ_W-1 -: MEM_FWD_HEADER_WIDTH];
    wire [DATA_W-1:0]               fifo_data_w = req_fifo_dout[DATA_W-1:0];

    always_ff @(posedge axil_clk_i or negedge axil_rst_n) begin
        if (!axil_rst_n) begin
            state       <= S_IDLE;
            req_hdr_r   <= '0;
            req_data_r  <= '0;
            wcnt_r      <= '0;
            nwords_r    <= '0;
            base_r      <= '0;
            is_wr_r     <= 1'b0;
            err_r       <= 1'b0;
            supported_r <= 1'b0;
            for (int i = 0; i < NW; i++) rd_words_r[i] <= '0;
        end else begin
            case (state)

                S_IDLE: begin
                    if (!req_fifo_empty) begin
                        req_hdr_r  <= fifo_hdr_w[FWD_HDR_BITS-1:0];
                        req_data_r <= fifo_data_w;
                        wcnt_r     <= '0;
                        err_r      <= 1'b0;
                        for (int i = 0; i < NW; i++) rd_words_r[i] <= '0;
                        state      <= S_DECODE;
                    end
                end

                S_DECODE: begin
                    nwords_r    <= nwords;
                    base_r      <= base_idx;
                    is_wr_r     <= is_wr;
                    supported_r <= supported;
                    if (!supported) begin
                        err_r <= 1'b1;
                        state <= S_RESP;
                    end else if (is_wr) begin
                        state <= S_WR_REQ;
                    end else begin
                        state <= S_RD_REQ;
                    end
                end

                // the master is idle here (reset, or the previous transfer has reported done)
                S_WR_REQ: state <= S_WR_WAIT;

                S_WR_WAIT: begin
                    if (usr_wr_done) begin
                        if (usr_wr_resp[1]) err_r <= 1'b1;       // SLVERR, DECERR or master timeout
                        if (last_word) begin
                            state <= S_RESP;
                        end else begin
                            wcnt_r <= wcnt_r + 1'b1;
                            state  <= S_WR_REQ;
                        end
                    end
                end

                S_RD_REQ: state <= S_RD_WAIT;

                S_RD_WAIT: begin
                    if (usr_rd_done) begin
                        // AXI4_Lite_Master keeps the previous usr_rdata when a read times out or errors, so an
                        // errored word is returned as zero instead of stale data
                        rd_words_r[wcnt_r] <= usr_rd_resp[1] ? 32'h0 : usr_rdata;
                        if (usr_rd_resp[1]) err_r <= 1'b1;
                        if (last_word) begin
                            state <= S_RESP;
                        end else begin
                            wcnt_r <= wcnt_r + 1'b1;
                            state  <= S_RD_REQ;
                        end
                    end
                end

                S_RESP: begin
                    if (!resp_fifo_full) state <= S_IDLE;
                end

                default: state <= S_IDLE;
            endcase
        end
    end

    // ---- response assembly ----
    bp_bedrock_mem_rev_header_s resp_hdr;
    logic [DATA_W-1:0]          resp_data;

    always_comb begin
        resp_hdr                = bp_bedrock_mem_rev_header_s'(req_hdr_r);
        resp_hdr.msg_type.rev   = bp_bedrock_rev_type_e'(req_hdr_r.msg_type.fwd);
        resp_data               = '0;
        if (!is_wr_r && supported_r) begin
            for (int k = 0; k < NW; k++)
                resp_data[k*32 +: 32] = rd_words_r[k & (int'(nwords_r) - 1)];
        end
    end

    assign resp_fifo_din  = {(MEM_REV_HEADER_WIDTH)'(resp_hdr), resp_data, err_r};
    assign resp_fifo_w_en = (state == S_RESP) && !resp_fifo_full;

endmodule

// Two flop reset synchronizer: asynchronous assert, synchronous deassert, active low.
module bp_bedrock_axil_rst_sync (
    input  logic clk,
    input  logic arst_n,
    output logic rst_n
);
    logic [1:0] sr;
    always_ff @(posedge clk or negedge arst_n) begin
        if (!arst_n) sr <= 2'b00;
        else         sr <= {sr[0], 1'b1};
    end
    assign rst_n = sr[1];
endmodule
`default_nettype wire
