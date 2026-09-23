`include "bp_common_defines.svh"
`include "bp_me_defines.svh"
`include "async.sv"


module bp_bedrock_ahb3lite_bridge
  import bp_common_pkg::*;
#(
    parameter int ADDR_WIDTH = 32,

    parameter int CPU_DATA_WIDTH = 128,
    parameter int AHB_DATA_WIDTH = 32,

    parameter int LCE_ID_WIDTH = 1,
    parameter int CCE_ID_WIDTH = 1,
    parameter int DID_WIDTH    = 3,
    parameter int LCE_ASSOC    = 8,

    parameter int MEM_FWD_HEADER_WIDTH = 64,
    parameter int MEM_REV_HEADER_WIDTH = 64,

    parameter int FIFO_DEPTH = 8
) (
    // ==================================================================
    // CPU / BedRock domain
    // ==================================================================
    input logic cpu_clk_i,
    input logic cpu_reset_i,       // active-high, synchronous to cpu_clk_i

    input  logic [MEM_FWD_HEADER_WIDTH-1:0] mem_fwd_header_i,
    input  logic [CPU_DATA_WIDTH-1:0]       mem_fwd_data_i,
    input  logic                            mem_fwd_v_i,
    output logic                            mem_fwd_ready_and_o,

    output logic [MEM_REV_HEADER_WIDTH-1:0] mem_rev_header_o,
    output logic [CPU_DATA_WIDTH-1:0]       mem_rev_data_o,
    output logic                            mem_rev_v_o,
    input  logic                            mem_rev_ready_and_i,

    // ==================================================================
    // AHB3-Lite domain
    // ==================================================================
    input logic ahb_clk_i,
    input logic ahb_reset_i,       // active-high, synchronous to ahb_clk_i

    output logic                      HSEL,
    output logic [ADDR_WIDTH-1:0]     HADDR,
    output logic [AHB_DATA_WIDTH-1:0] HWDATA,
    input  logic [AHB_DATA_WIDTH-1:0] HRDATA,
    output logic                      HWRITE,
    output logic [2:0]                HSIZE,
    output logic [2:0]                HBURST,
    output logic [3:0]                HPROT,
    output logic [1:0]                HTRANS,
    input  logic                      HREADYOUT,
    input  logic                      HRESP
);

  // --------------------------------------------------------------------
  // Elaboration-time checks. This bridge only implements the
  // CPU-wider-than-AHB split direction; AHB_DATA_WIDTH must divide
  // CPU_DATA_WIDTH evenly so every flit splits into a whole number of
  // AHB beats.
  // --------------------------------------------------------------------
  if (CPU_DATA_WIDTH < AHB_DATA_WIDTH) begin : gen_dir_check
    initial
      $fatal(1,
        "bp_bedrock_ahb3lite_bridge_w32: CPU_DATA_WIDTH (%0d) must be >= AHB_DATA_WIDTH (%0d) - this bridge only implements splitting wide CPU flits into narrower AHB beats, not the reverse.",
        CPU_DATA_WIDTH, AHB_DATA_WIDTH);
  end
  if ((CPU_DATA_WIDTH % AHB_DATA_WIDTH) != 0) begin : gen_ratio_check
    initial
      $fatal(1,
        "bp_bedrock_ahb3lite_bridge_w32: CPU_DATA_WIDTH (%0d) must be an integer multiple of AHB_DATA_WIDTH (%0d).",
        CPU_DATA_WIDTH, AHB_DATA_WIDTH);
  end

  localparam int DATA_WIDTH         = CPU_DATA_WIDTH;  // CDC FIFOs stay CPU-width
  localparam int AHB_BYTES_PER_BEAT = AHB_DATA_WIDTH / 8;
  localparam int CPU_BYTES_PER_FLIT = CPU_DATA_WIDTH / 8;
  localparam int WORDS_PER_FLIT     = CPU_DATA_WIDTH / AHB_DATA_WIDTH;  // e.g. 4

  localparam int REQ_FIFO_WIDTH  = MEM_FWD_HEADER_WIDTH + DATA_WIDTH;
  localparam int RESP_FIFO_WIDTH = MEM_REV_HEADER_WIDTH + DATA_WIDTH;

  `declare_bp_bedrock_if(
      ADDR_WIDTH,
      LCE_ID_WIDTH,
      CCE_ID_WIDTH,
      DID_WIDTH,
      LCE_ASSOC
  );

  `bp_cast_i(bp_bedrock_mem_fwd_header_s, bridge_fwd_header);
  // No bp_cast_o here - same reasoning as every prior bridge in this
  // series: the rev-header value is produced directly as a flat
  // vector from resp_hdr_r in the FSM below.

  // ======================================================================
  // REQUEST PATH: CPU domain -> async FIFO -> AHB domain
  // (unchanged from the width-matched AHB3-Lite bridge - CDC FIFOs
  // carry whole 128-bit flits, splitting happens after this point.)
  // ======================================================================

  logic [REQ_FIFO_WIDTH-1:0] req_fifo_data_in, req_fifo_data_out;
  logic                      req_fifo_w_en, req_fifo_r_en;
  logic                      req_fifo_full, req_fifo_empty;

  assign req_fifo_data_in = {mem_fwd_header_i, mem_fwd_data_i};

  assign mem_fwd_ready_and_o = !req_fifo_full;
  assign req_fifo_w_en       = mem_fwd_v_i && mem_fwd_ready_and_o;

  asynchronous_fifo #(
      .DEPTH     (FIFO_DEPTH),
      .DATA_WIDTH(REQ_FIFO_WIDTH)
  ) u_req_fifo (
      .wclk    (cpu_clk_i),
      .wrst_n  (~cpu_reset_i),
      .rclk    (ahb_clk_i),
      .rrst_n  (~ahb_reset_i),
      .w_en    (req_fifo_w_en),
      .r_en    (req_fifo_r_en),
      .data_in (req_fifo_data_in),
      .data_out(req_fifo_data_out),
      .full    (req_fifo_full),
      .empty   (req_fifo_empty)
  );

  logic                            bridge_fwd_v;
  logic                            bridge_fwd_ready;
  logic [MEM_FWD_HEADER_WIDTH-1:0] bridge_fwd_header_i;
  logic [DATA_WIDTH-1:0]           bridge_fwd_data;

  assign bridge_fwd_v        = !req_fifo_empty;
  assign bridge_fwd_header_i = req_fifo_data_out[REQ_FIFO_WIDTH-1 -: MEM_FWD_HEADER_WIDTH];
  assign bridge_fwd_data     = req_fifo_data_out[DATA_WIDTH-1:0];
  assign req_fifo_r_en       = bridge_fwd_v && bridge_fwd_ready;

  // ======================================================================
  // RESPONSE PATH: AHB domain -> async FIFO -> CPU domain
  // One FIFO word = one fully-assembled 128-bit rev flit (already
  // reassembled from up to WORDS_PER_FLIT AHB beats by the FSM below
  // before it ever reaches this FIFO).
  // ======================================================================

  logic [RESP_FIFO_WIDTH-1:0] resp_fifo_data_in, resp_fifo_data_out;
  logic                       resp_fifo_w_en, resp_fifo_r_en;
  logic                       resp_fifo_full, resp_fifo_empty;

  logic                            bridge_rev_v;
  logic                            bridge_rev_ready;
  logic [MEM_REV_HEADER_WIDTH-1:0] bridge_rev_header_o;
  logic [DATA_WIDTH-1:0]           bridge_rev_data;

  assign resp_fifo_data_in = {bridge_rev_header_o, bridge_rev_data};

  assign bridge_rev_ready = !resp_fifo_full;
  assign resp_fifo_w_en   = bridge_rev_v && bridge_rev_ready;

  asynchronous_fifo #(
      .DEPTH     (FIFO_DEPTH),
      .DATA_WIDTH(RESP_FIFO_WIDTH)
  ) u_resp_fifo (
      .wclk    (ahb_clk_i),
      .wrst_n  (~ahb_reset_i),
      .rclk    (cpu_clk_i),
      .rrst_n  (~cpu_reset_i),
      .w_en    (resp_fifo_w_en),
      .r_en    (resp_fifo_r_en),
      .data_in (resp_fifo_data_in),
      .data_out(resp_fifo_data_out),
      .full    (resp_fifo_full),
      .empty   (resp_fifo_empty)
  );

  assign mem_rev_header_o = resp_fifo_data_out[RESP_FIFO_WIDTH-1 -: MEM_REV_HEADER_WIDTH];
  assign mem_rev_data_o   = resp_fifo_data_out[DATA_WIDTH-1:0];
  assign mem_rev_v_o      = !resp_fifo_empty;
  assign resp_fifo_r_en   = mem_rev_v_o && mem_rev_ready_and_i;

  // ======================================================================
  // AHB3-Lite master (ahb_clk_i domain)
  // ======================================================================

  logic                      m_req, m_req_ack;
  logic [ADDR_WIDTH-1:0]     m_addr;
  logic                      m_write;
  logic [2:0]                m_size;
  logic [AHB_DATA_WIDTH-1:0] m_wdata;

  logic                      m_resp_v, m_resp_ready;
  logic [AHB_DATA_WIDTH-1:0] m_rdata;
  logic                      m_resp_err;

  ahb3lite_master #(
      .ADDR_WIDTH(ADDR_WIDTH),
      .DATA_WIDTH(AHB_DATA_WIDTH)
  ) u_ahb3lite_master (
      .HCLK   (ahb_clk_i),
      .HRESETn(~ahb_reset_i),

      .req_i    (m_req),
      .req_ack_o(m_req_ack),
      .addr_i   (m_addr),
      .write_i  (m_write),
      .size_i   (m_size),
      .wdata_i  (m_wdata),

      .resp_v_o    (m_resp_v),
      .resp_ready_i(m_resp_ready),
      .rdata_o     (m_rdata),
      .resp_err_o  (m_resp_err),

      .HSEL     (HSEL),
      .HADDR    (HADDR),
      .HWDATA   (HWDATA),
      .HRDATA   (HRDATA),
      .HWRITE   (HWRITE),
      .HSIZE    (HSIZE),
      .HBURST   (HBURST),
      .HPROT    (HPROT),
      .HTRANS   (HTRANS),
      .HREADYOUT(HREADYOUT),
      .HRESP    (HRESP)
  );

  // ======================================================================
  // Core BedRock <-> AHB3-Lite FSM, with 4:1 width conversion
  // ======================================================================

  parameter ST_IDLE      = 6'b000001;
  parameter ST_XFER      = 6'b000010;  // drive one 32-bit AHB beat
  parameter ST_XFER_WAIT = 6'b000100;  // wait for that beat, accumulate/extract
  parameter ST_FETCH     = 6'b001000;  // (write only) pop the next 128b flit
  parameter ST_RD_PUSH   = 6'b010000;  // (read only) push one assembled 128b rev flit
  parameter ST_WR_RESP   = 6'b100000;  // (write only) push the single completion flit

  logic [5:0] cur_state, next_state;

  bp_bedrock_mem_fwd_header_s req_hdr_r;
  bp_bedrock_mem_rev_header_s resp_hdr_r;
  logic                        is_write_r;   // latched once in ST_IDLE; ST_XFER/
                                              // ST_XFER_WAIT are shared between
                                              // read and write, so this is what
                                              // tells them apart downstream.

  logic [DATA_WIDTH-1:0] flit_data_r;    // current 128b flit being written out
  logic [DATA_WIDTH-1:0] read_accum_r;   // 128b read result being assembled

  logic [7:0] bedrock_flits_total_r;     // how many 128b BedRock flits this
                                          // message needs (unchanged concept
                                          // from the width-matched bridges)
  logic [7:0] bedrock_flit_count_r;

  logic [2:0] ahb_beats_this_flit;       // combinational: 1..WORDS_PER_FLIT
  logic [2:0] ahb_beat_count_r;

  wire is_first_flit = (bedrock_flit_count_r == 0);
  wire is_last_flit  = (bedrock_flit_count_r == bedrock_flits_total_r - 1);
  wire is_last_beat_of_flit = (ahb_beat_count_r == ahb_beats_this_flit - 1);

  wire fwd_is_wr = (bridge_fwd_header_cast_i.msg_type.fwd == e_bedrock_mem_wr);
  wire fwd_is_rd = (bridge_fwd_header_cast_i.msg_type.fwd == e_bedrock_mem_rd);

  // ----------------------------------------------------------------------
  // Functions
  // ----------------------------------------------------------------------

  function automatic [15:0] size_bytes(input bp_bedrock_msg_size_e s);
    return (16'd1 << s);
  endfunction

  // How many whole 128-bit BedRock flits this message needs.
  function automatic [7:0] num_bedrock_flits(input bp_bedrock_msg_size_e s);
    int unsigned bytes;
    begin
      bytes = size_bytes(s);
      return (bytes + CPU_BYTES_PER_FLIT - 1) / CPU_BYTES_PER_FLIT;
    end
  endfunction

  // How many AHB beats the FIRST (and, for sub-flit messages, only)
  // flit needs. Every flit after the first always needs the full
  // WORDS_PER_FLIT, because only a message smaller than one whole
  // flit (which by construction is always flit 0, and always the
  // only flit) can be partial - sizes >= CPU_BYTES_PER_FLIT are exact
  // multiples of it (BedRock's size enum is powers of two throughout).
  function automatic [2:0] first_flit_ahb_beats(input bp_bedrock_msg_size_e s);
    int unsigned bytes, nbytes_first;
    begin
      bytes        = size_bytes(s);
      nbytes_first = (bytes < CPU_BYTES_PER_FLIT) ? bytes : CPU_BYTES_PER_FLIT;
      return (nbytes_first + AHB_BYTES_PER_BEAT - 1) / AHB_BYTES_PER_BEAT;
    end
  endfunction

  assign ahb_beats_this_flit =
      is_first_flit ? first_flit_ahb_beats(req_hdr_r.size) : WORDS_PER_FLIT[2:0];

  // HSIZE for the CURRENT beat: narrower than a full AHB word only for
  // the very first beat of the very first flit of a sub-word message
  // (size < AHB_BYTES_PER_BEAT); every other beat is always a full
  // AHB-width transfer, by the same reasoning as ahb_beats_this_flit.
  function automatic [2:0] beat_hsize;
    int unsigned bytes;
    begin
      bytes = size_bytes(req_hdr_r.size);
      if (is_first_flit && (ahb_beat_count_r == 0) && (bytes < AHB_BYTES_PER_BEAT))
        beat_hsize = $clog2(bytes);
      else
        beat_hsize = $clog2(AHB_BYTES_PER_BEAT);
    end
  endfunction

  // ----------------------------------------------------------------------
  // 1. State register
  // ----------------------------------------------------------------------

  always_ff @(posedge ahb_clk_i or posedge ahb_reset_i) begin
    if (ahb_reset_i)
      cur_state <= ST_IDLE;
    else
      cur_state <= next_state;
  end

  // ----------------------------------------------------------------------
  // 2. Next-state logic
  // ----------------------------------------------------------------------

  always_comb begin
    next_state = ST_IDLE;

    case (cur_state)

      ST_IDLE: begin
        if (bridge_fwd_v && bridge_fwd_ready)
          next_state = (fwd_is_wr || fwd_is_rd) ? ST_XFER : ST_IDLE;
        else
          next_state = ST_IDLE;
      end

      ST_XFER: next_state = m_req_ack ? ST_XFER_WAIT : ST_XFER;

      ST_XFER_WAIT: begin
        if (m_resp_v && m_resp_ready) begin
          if (is_last_beat_of_flit) begin
            if (is_write_r)
              next_state = is_last_flit ? ST_WR_RESP : ST_FETCH;
            else
              next_state = ST_RD_PUSH;
          end else
            next_state = ST_XFER;
        end else
          next_state = ST_XFER_WAIT;
      end

      // Write only: pull the next 128b flit out of the request FIFO
      // before continuing its AHB beats.
      ST_FETCH: next_state = bridge_fwd_v ? ST_XFER : ST_FETCH;

      // Read only: push this flit's assembled data; if more flits
      // remain, go straight to the next flit's beat 0 (no fetch
      // needed - reads never consume request-FIFO data beyond the
      // header already latched in ST_IDLE).
      ST_RD_PUSH: begin
        if (bridge_rev_ready)
          next_state = is_last_flit ? ST_IDLE : ST_XFER;
        else
          next_state = ST_RD_PUSH;
      end

      ST_WR_RESP: next_state = bridge_rev_ready ? ST_IDLE : ST_WR_RESP;

      default: next_state = ST_IDLE;

    endcase
  end

  // ----------------------------------------------------------------------
  // 3. Combinational output logic
  // ----------------------------------------------------------------------

  always_comb begin
    m_req   = 1'b0;
    m_addr  = req_hdr_r.addr
              + (bedrock_flit_count_r * CPU_BYTES_PER_FLIT)
              + (ahb_beat_count_r * AHB_BYTES_PER_BEAT);
    m_write = is_write_r;
    m_size  = beat_hsize();
    m_wdata = flit_data_r[ahb_beat_count_r*AHB_DATA_WIDTH +: AHB_DATA_WIDTH];

    m_resp_ready = 1'b0;

    bridge_fwd_ready    = 1'b0;
    bridge_rev_v        = 1'b0;
    bridge_rev_header_o = resp_hdr_r;
    bridge_rev_data     = read_accum_r;

    case (cur_state)

      ST_IDLE: bridge_fwd_ready = fwd_is_wr || fwd_is_rd;

      ST_XFER: m_req = 1'b1;

      ST_XFER_WAIT: m_resp_ready = 1'b1;

      ST_FETCH: bridge_fwd_ready = 1'b1;

      ST_RD_PUSH: begin
        bridge_rev_v        = 1'b1;
        bridge_rev_header_o = resp_hdr_r;
        bridge_rev_data     = read_accum_r;
      end

      ST_WR_RESP: begin
        bridge_rev_v        = 1'b1;
        bridge_rev_header_o = resp_hdr_r;
        bridge_rev_data     = '0;
      end

      default: bridge_fwd_ready = 1'b0;

    endcase
  end

  // ----------------------------------------------------------------------
  // 4. Datapath / control registers
  // ----------------------------------------------------------------------

  always_ff @(posedge ahb_clk_i or posedge ahb_reset_i) begin
    if (ahb_reset_i) begin
      req_hdr_r             <= '0;
      resp_hdr_r            <= '0;
      is_write_r            <= 1'b0;
      flit_data_r           <= '0;
      read_accum_r          <= '0;
      bedrock_flits_total_r <= '0;
      bedrock_flit_count_r  <= '0;
      ahb_beat_count_r      <= '0;
    end else begin

      // Accept first BedRock forward flit; also latch the full
      // response header up front (echo + .rev override), same
      // full-echo pattern as every prior bridge in this series.
      if ((cur_state == ST_IDLE) && bridge_fwd_v && bridge_fwd_ready) begin
        req_hdr_r              <= bridge_fwd_header_cast_i;
        flit_data_r            <= bridge_fwd_data;
        is_write_r             <= fwd_is_wr;
        bedrock_flits_total_r  <= num_bedrock_flits(bridge_fwd_header_cast_i.size);
        bedrock_flit_count_r   <= 8'd0;
        ahb_beat_count_r       <= 3'd0;
        read_accum_r           <= '0;

        resp_hdr_r              <= bridge_fwd_header_cast_i;
        resp_hdr_r.msg_type.rev <= fwd_is_wr ? e_bedrock_mem_wr : e_bedrock_mem_rd;
      end

      // One AHB beat completed.
      if ((cur_state == ST_XFER_WAIT) && m_resp_v && m_resp_ready) begin

        if (!is_write_r)
          read_accum_r[ahb_beat_count_r*AHB_DATA_WIDTH +: AHB_DATA_WIDTH] <= m_rdata;

        if (is_last_beat_of_flit)
          ahb_beat_count_r <= 3'd0;
        else
          ahb_beat_count_r <= ahb_beat_count_r + 3'd1;
      end

      // Write only: next 128b flit arrived from the request FIFO.
      if ((cur_state == ST_FETCH) && bridge_fwd_v) begin
        flit_data_r          <= bridge_fwd_data;
        bedrock_flit_count_r <= bedrock_flit_count_r + 8'd1;
      end

      // Read only: this flit's assembled data has been pushed; advance
      // to the next flit and clear the accumulator for it.
      if ((cur_state == ST_RD_PUSH) && bridge_rev_ready) begin
        bedrock_flit_count_r <= bedrock_flit_count_r + 8'd1;
        read_accum_r         <= '0;
      end

    end
  end

endmodule

