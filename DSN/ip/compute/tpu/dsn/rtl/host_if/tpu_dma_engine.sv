`timescale 1ns/1ps
`default_nettype none

// DMA between host memory (AXI4 master, 128-bit data, INCR bursts) and the Unified Buffer.
//
// One 128-bit beat = eight 16-bit words (little endian: word 0 in bits [15:0], lower address).
// The UB host-write port takes only two words per clock and the UB read-back port returns two words,
// so the wide beat is converted in four 32-bit chunks:
//   Load : AR burst. Each R beat is held in a 128-bit register and drained into the UB host-write
//          channels two words per cycle (4 cycles per full beat). The next R beat is accepted in the
//          cycle the last chunk drains, so the UB ingest rate (2 words/clock) is the limit.
//          The UB has no write address, so data appends at the UB write pointer.
//   Store: AW burst. For each beat the UB is read four times through the read-back port to fill a
//          128-bit register, then W is presented (WSTRB masks the unused words of a short last beat),
//          then one B response per burst.
// Length is in 16-bit words. Host address must be 16-byte aligned.
//
// Burst rules: INCR, 16-byte beats (AxSIZE = 4), at most MAX_BURST beats, never crossing a 4 KB
// boundary. One burst in flight at a time. IDs are always 0.
// Error codes: 0x20 AXI error response or RLAST mismatch, 0x08 handshake timeout, 0x04 UB overflow,
// 0x40 misaligned address. After a timeout the bus transaction is abandoned, so reset the system
// before reusing the interconnect.
module tpu_dma_engine #(
    parameter int UB_DEPTH  = 128,
    parameter int MAX_BURST = 16,      // beats per burst, 1..256
    parameter int ID_W      = 1
)(
    input  logic clk,
    input  logic rst,

    input  logic        start,
    input  logic        is_store,
    input  logic [31:0] host_addr_in,
    input  logic [15:0] ub_addr_in,
    input  logic [15:0] len_in,
    input  logic [31:0] beat_timeout,     // cycles per handshake wait, 0 disables

    output logic        busy,
    output logic        done_pulse,
    output logic        err_pulse,
    output logic [7:0]  err_code,

    // UB side
    output logic [15:0] ub_wr_host_data_0,
    output logic [15:0] ub_wr_host_data_1,
    output logic        ub_wr_host_valid_0,
    output logic        ub_wr_host_valid_1,
    output logic [15:0] ub_host_rd_addr,
    input  logic [15:0] ub_host_rd_data_lo,
    input  logic [15:0] ub_host_rd_data_hi,
    input  logic [15:0] ub_wr_ptr,

    // AXI4 master: write address
    output logic [ID_W-1:0] m_axi_awid,
    output logic [31:0]     m_axi_awaddr,
    output logic [7:0]      m_axi_awlen,
    output logic [2:0]      m_axi_awsize,
    output logic [1:0]      m_axi_awburst,
    output logic            m_axi_awlock,
    output logic [3:0]      m_axi_awcache,
    output logic [2:0]      m_axi_awprot,
    output logic [3:0]      m_axi_awqos,
    output logic            m_axi_awvalid,
    input  logic            m_axi_awready,
    // write data
    output logic [127:0]    m_axi_wdata,
    output logic [15:0]     m_axi_wstrb,
    output logic            m_axi_wlast,
    output logic            m_axi_wvalid,
    input  logic            m_axi_wready,
    // write response
    input  logic [ID_W-1:0] m_axi_bid,
    input  logic [1:0]      m_axi_bresp,
    input  logic            m_axi_bvalid,
    output logic            m_axi_bready,
    // read address
    output logic [ID_W-1:0] m_axi_arid,
    output logic [31:0]     m_axi_araddr,
    output logic [7:0]      m_axi_arlen,
    output logic [2:0]      m_axi_arsize,
    output logic [1:0]      m_axi_arburst,
    output logic            m_axi_arlock,
    output logic [3:0]      m_axi_arcache,
    output logic [2:0]      m_axi_arprot,
    output logic [3:0]      m_axi_arqos,
    output logic            m_axi_arvalid,
    input  logic            m_axi_arready,
    // read data
    input  logic [ID_W-1:0] m_axi_rid,
    input  logic [127:0]    m_axi_rdata,
    input  logic [1:0]      m_axi_rresp,
    input  logic            m_axi_rlast,
    input  logic            m_axi_rvalid,
    output logic            m_axi_rready
);
    localparam [3:0] S_IDLE = 4'd0, S_NEXT = 4'd1,
                     S_LD_AR = 4'd2, S_LD_R = 4'd3, S_LD_DRAIN = 4'd4,
                     S_ST_AW = 4'd5, S_ST_FILL = 4'd6, S_ST_W = 4'd7, S_ST_B = 4'd8;
    localparam [7:0] E_UB = 8'h04, E_TMO = 8'h08, E_AXI = 8'h20, E_PARAM = 8'h40;

    logic [3:0]   state;
    logic         store_q;
    logic [31:0]  host_addr;
    logic [15:0]  ub_addr, rem;     // rem counts 16-bit words still to move
    logic [8:0]   blen, bcnt;       // beats in current burst (1..256), beats done
    logic         err_q;
    logic [31:0]  tmo;
    logic [127:0] beat_q;           // load: R beat being drained. store: beat being assembled
    logic         hold_valid;       // load only: beat_q holds undrained data
    logic [1:0]   chunk;            // 32-bit chunk index inside beat_q

    logic tmo_hit;
    assign tmo_hit = (beat_timeout != 32'd0) && (tmo >= beat_timeout);

    // words moved by the next 32-bit chunk (load) and by the current beat (store)
    logic [1:0] cur_nw;
    assign cur_nw = (rem >= 16'd2) ? 2'd2 : 2'd1;
    logic [3:0] nwb;
    assign nwb = (rem >= 16'd8) ? 4'd8 : rem[3:0];

    // byte strobes for a beat carrying nwb words
    logic [16:0] strb_full;
    assign strb_full = (17'd1 << {nwb, 1'b0}) - 17'd1;

    // ---------------- burst planner ----------------
    logic [16:0] beats_rem;
    logic [10:0] beats_4k;
    logic [8:0]  plan;
    always_comb begin
        beats_rem = ({1'b0, rem} + 17'd7) >> 3;
        beats_4k  = 11'((13'd4096 - {1'b0, host_addr[11:0]}) >> 4);   // 1..256 beats to the 4 KB edge
        plan      = 9'(MAX_BURST);
        if (beats_rem < {8'd0, plan}) plan = beats_rem[8:0];
        if (beats_4k  < {2'd0, plan}) plan = beats_4k[8:0];
    end

    // ---------------- load drain: chunk -> UB host-write channels ----------------
    logic [31:0] h2d_chunk;
    always_comb begin
        case (chunk)
            2'd0:    h2d_chunk = beat_q[31:0];
            2'd1:    h2d_chunk = beat_q[63:32];
            2'd2:    h2d_chunk = beat_q[95:64];
            default: h2d_chunk = beat_q[127:96];
        endcase
    end

    logic [15:0] f_d0, f_d1;
    logic        f_v0, f_v1;
    logic [31:0] unused_beat;
    logic [3:0]  unused_strb;

    tpu_data_formatter fmt (
        .h2d_beat(h2d_chunk), .h2d_nwords(cur_nw),
        .ub_wr_data_0(f_d0), .ub_wr_data_1(f_d1), .ub_wr_valid_0(f_v0), .ub_wr_valid_1(f_v1),
        .d2h_lo(16'h0000), .d2h_hi(16'h0000), .d2h_nwords(2'd0),
        .d2h_beat(unused_beat), .d2h_strb(unused_strb)
    );

    logic beat_end_now;      // the chunk drained this cycle is the last one of the beat
    assign beat_end_now = hold_valid && (chunk == 2'd3 || rem <= {14'd0, cur_nw});

    assign ub_wr_host_valid_0 = f_v0 && hold_valid;
    assign ub_wr_host_valid_1 = f_v1 && hold_valid;
    assign ub_wr_host_data_0  = ub_wr_host_valid_0 ? f_d0 : 16'h0000;
    assign ub_wr_host_data_1  = ub_wr_host_valid_1 ? f_d1 : 16'h0000;

    // store fill: UB words ub_addr + 2*chunk, +1
    assign ub_host_rd_addr = ub_addr + {13'd0, chunk, 1'b0};

    assign busy = (state != S_IDLE);

    // ---------------- AXI4 outputs ----------------
    logic [7:0] blen_m1;
    assign blen_m1 = blen[7:0] - 8'd1;           // 256 beats wraps to 255 correctly

    assign m_axi_arid    = '0;
    assign m_axi_araddr  = host_addr;
    assign m_axi_arlen   = blen_m1;
    assign m_axi_arsize  = 3'b100;               // 16 bytes per beat
    assign m_axi_arburst = 2'b01;                // INCR
    assign m_axi_arlock  = 1'b0;
    assign m_axi_arcache = 4'b0011;              // normal, non-cacheable, bufferable
    assign m_axi_arprot  = 3'b000;
    assign m_axi_arqos   = 4'b0000;
    assign m_axi_arvalid = (state == S_LD_AR);
    assign m_axi_rready  = (state == S_LD_R) && (!hold_valid || beat_end_now);

    assign m_axi_awid    = '0;
    assign m_axi_awaddr  = host_addr;
    assign m_axi_awlen   = blen_m1;
    assign m_axi_awsize  = 3'b100;
    assign m_axi_awburst = 2'b01;
    assign m_axi_awlock  = 1'b0;
    assign m_axi_awcache = 4'b0011;
    assign m_axi_awprot  = 3'b000;
    assign m_axi_awqos   = 4'b0000;
    assign m_axi_awvalid = (state == S_ST_AW);

    assign m_axi_wdata   = beat_q;
    assign m_axi_wstrb   = strb_full[15:0];
    assign m_axi_wlast   = (bcnt == blen - 9'd1);
    assign m_axi_wvalid  = (state == S_ST_W);
    assign m_axi_bready  = (state == S_ST_B);

    logic unused;
    assign unused = &{1'b0, m_axi_bid, m_axi_rid, unused_beat, unused_strb, strb_full[16]};

    task automatic fail(input logic [7:0] code);
        err_pulse  <= 1'b1;
        err_code   <= code;
        state      <= S_IDLE;
        hold_valid <= 1'b0;
        chunk      <= 2'd0;
    endtask

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state      <= S_IDLE;
            store_q    <= 1'b0;
            host_addr  <= '0;
            ub_addr    <= '0;
            rem        <= '0;
            blen       <= '0;
            bcnt       <= '0;
            err_q      <= 1'b0;
            tmo        <= '0;
            beat_q     <= '0;
            hold_valid <= 1'b0;
            chunk      <= 2'd0;
            done_pulse <= 1'b0;
            err_pulse  <= 1'b0;
            err_code   <= '0;
        end else begin
            done_pulse <= 1'b0;
            err_pulse  <= 1'b0;
            err_code   <= 8'h00;

            // load drain: one 32-bit chunk (two UB words) per cycle while a beat is held.
            // Placed before the state machine so that a new beat or fail() overrides it.
            if (hold_valid) begin
                rem <= rem - {14'd0, cur_nw};
                if (beat_end_now) begin
                    hold_valid <= 1'b0;
                    chunk      <= 2'd0;
                end else begin
                    chunk <= chunk + 2'd1;
                end
            end

            case (state)
                S_IDLE: if (start) begin
                    host_addr <= host_addr_in;
                    ub_addr   <= ub_addr_in;
                    rem       <= len_in;
                    store_q   <= is_store;
                    tmo       <= '0;
                    err_q     <= 1'b0;
                    bcnt      <= '0;
                    chunk     <= 2'd0;
                    if (len_in == 16'd0) begin
                        done_pulse <= 1'b1;
                    end else if (host_addr_in[3:0] != 4'b0000) begin
                        fail(E_PARAM);
                    end else if (!is_store && ({1'b0, ub_wr_ptr} + {1'b0, len_in}) > UB_DEPTH) begin
                        fail(E_UB);
                    end else if (is_store && ({1'b0, ub_addr_in} + {1'b0, len_in}) > UB_DEPTH) begin
                        fail(E_UB);
                    end else begin
                        state <= S_NEXT;
                    end
                end

                // plan the next burst
                S_NEXT: begin
                    blen  <= plan;
                    bcnt  <= '0;
                    tmo   <= '0;
                    state <= store_q ? S_ST_AW : S_LD_AR;
                end

                // ---------------- load ----------------
                S_LD_AR: begin
                    if (m_axi_arready) begin
                        state <= S_LD_R;
                        tmo   <= '0;
                    end else if (tmo_hit) fail(E_TMO);
                    else tmo <= tmo + 32'd1;
                end

                S_LD_R: begin
                    if (m_axi_rvalid && m_axi_rready) begin
                        tmo       <= '0;
                        host_addr <= host_addr + 32'd16;
                        bcnt      <= bcnt + 9'd1;
                        if (m_axi_rresp != 2'b00) err_q <= 1'b1;
                        if (m_axi_rlast != (bcnt == blen - 9'd1)) begin
                            fail(E_AXI);                               // burst length mismatch
                        end else begin
                            if (m_axi_rresp == 2'b00 && !err_q) begin
                                beat_q     <= m_axi_rdata;
                                hold_valid <= 1'b1;
                                chunk      <= 2'd0;
                            end
                            if (bcnt == blen - 9'd1) begin
                                if (err_q || m_axi_rresp != 2'b00) fail(E_AXI);
                                else state <= S_LD_DRAIN;
                            end
                        end
                    end else if (m_axi_rready) begin
                        if (tmo_hit) fail(E_TMO);
                        else tmo <= tmo + 32'd1;
                    end
                end

                // last beat of the burst is in beat_q: wait until it is fully in the UB
                S_LD_DRAIN: begin
                    if (!hold_valid) begin
                        if (rem == 16'd0) begin
                            done_pulse <= 1'b1;
                            state      <= S_IDLE;
                        end else state <= S_NEXT;
                    end
                end

                // ---------------- store ----------------
                S_ST_AW: begin
                    if (m_axi_awready) begin
                        state <= S_ST_FILL;
                        bcnt  <= '0;
                        chunk <= 2'd0;
                        tmo   <= '0;
                    end else if (tmo_hit) fail(E_TMO);
                    else tmo <= tmo + 32'd1;
                end

                S_ST_FILL: begin
                    case (chunk)
                        2'd0:    beat_q[31:0]   <= {ub_host_rd_data_hi, ub_host_rd_data_lo};
                        2'd1:    beat_q[63:32]  <= {ub_host_rd_data_hi, ub_host_rd_data_lo};
                        2'd2:    beat_q[95:64]  <= {ub_host_rd_data_hi, ub_host_rd_data_lo};
                        default: beat_q[127:96] <= {ub_host_rd_data_hi, ub_host_rd_data_lo};
                    endcase
                    if (chunk == 2'd3) begin
                        chunk <= 2'd0;
                        tmo   <= '0;
                        state <= S_ST_W;
                    end else begin
                        chunk <= chunk + 2'd1;
                    end
                end

                S_ST_W: begin
                    if (m_axi_wready) begin
                        tmo       <= '0;
                        host_addr <= host_addr + 32'd16;
                        ub_addr   <= ub_addr + {12'd0, nwb};
                        rem       <= rem - {12'd0, nwb};
                        bcnt      <= bcnt + 9'd1;
                        if (bcnt == blen - 9'd1) state <= S_ST_B;
                        else begin
                            chunk <= 2'd0;
                            state <= S_ST_FILL;
                        end
                    end else if (tmo_hit) fail(E_TMO);
                    else tmo <= tmo + 32'd1;
                end

                S_ST_B: begin
                    if (m_axi_bvalid) begin
                        tmo <= '0;
                        if (m_axi_bresp != 2'b00) fail(E_AXI);
                        else if (rem == 16'd0) begin
                            done_pulse <= 1'b1;
                            state      <= S_IDLE;
                        end else state <= S_NEXT;
                    end else if (tmo_hit) fail(E_TMO);
                    else tmo <= tmo + 32'd1;
                end

                default: state <= S_IDLE;
            endcase
        end
    end
endmodule
