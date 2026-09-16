`include "bp_common_defines.svh"
`include "bp_me_defines.svh"
`include "async.sv"

module bp_bedrock_axi4_bridge
  import bp_common_pkg::*;
#(
    // ------------------------------------------------------------------
    // BedRock / general parameters
    // ------------------------------------------------------------------
    parameter int ADDR_WIDTH   = 32,
    parameter int ID_WIDTH     = 4,

    // CPU-side BedRock fill width and AXI-side data width are kept as
    // independent parameters (no hardcoding either way); this release
    // requires CPU_DATA_WIDTH == AXI_DATA_WIDTH, checked below.
    parameter int CPU_DATA_WIDTH = 128,
    parameter int AXI_DATA_WIDTH = 128,

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
    input logic cpu_reset_i,

    input  logic [MEM_FWD_HEADER_WIDTH-1:0] mem_fwd_header_i,
    input  logic [CPU_DATA_WIDTH-1:0]       mem_fwd_data_i,
    input  logic                            mem_fwd_v_i,
    output logic                            mem_fwd_ready_and_o,

    output logic [MEM_REV_HEADER_WIDTH-1:0] mem_rev_header_o,
    output logic [CPU_DATA_WIDTH-1:0]       mem_rev_data_o,
    output logic                            mem_rev_v_o,
    input  logic                            mem_rev_ready_and_i,

    // ==================================================================
    // AXI4 domain
    // ==================================================================
    input logic axi_clk_i,
    input logic axi_reset_i,

    // AW
    output logic [ID_WIDTH-1:0]        m_axi_awid,
    output logic [ADDR_WIDTH-1:0]      m_axi_awaddr,
    output logic [7:0]                 m_axi_awlen,
    output logic [2:0]                 m_axi_awsize,
    output logic [1:0]                 m_axi_awburst,
    output logic                       m_axi_awlock,
    output logic [3:0]                 m_axi_awcache,
    output logic [2:0]                 m_axi_awprot,
    output logic [3:0]                 m_axi_awqos,
    output logic                       m_axi_awvalid,
    input  logic                       m_axi_awready,

    // W
    output logic [AXI_DATA_WIDTH-1:0]   m_axi_wdata,
    output logic [AXI_DATA_WIDTH/8-1:0] m_axi_wstrb,
    output logic                        m_axi_wlast,
    output logic                        m_axi_wvalid,
    input  logic                        m_axi_wready,

    // B
    input  logic [ID_WIDTH-1:0] m_axi_bid,
    input  logic [1:0]          m_axi_bresp,
    input  logic                m_axi_bvalid,
    output logic                m_axi_bready,

    // AR
    output logic [ID_WIDTH-1:0]   m_axi_arid,
    output logic [ADDR_WIDTH-1:0] m_axi_araddr,
    output logic [7:0]            m_axi_arlen,
    output logic [2:0]            m_axi_arsize,
    output logic [1:0]            m_axi_arburst,
    output logic                  m_axi_arlock,
    output logic [3:0]            m_axi_arcache,
    output logic [2:0]            m_axi_arprot,
    output logic [3:0]            m_axi_arqos,
    output logic                  m_axi_arvalid,
    input  logic                  m_axi_arready,

    // R
    input  logic [ID_WIDTH-1:0]       m_axi_rid,
    input  logic [AXI_DATA_WIDTH-1:0] m_axi_rdata,
    input  logic [1:0]                m_axi_rresp,
    input  logic                      m_axi_rlast,
    input  logic                      m_axi_rvalid,
    output logic                      m_axi_rready
);

  // --------------------------------------------------------------------
  // Elaboration-time width check.
  // Asymmetric CPU/AXI data widths need a real width converter (packing
  // narrow CPU flits into wide AXI beats or splitting wide CPU flits
  // across multiple narrow AXI beats, with correct WSTRB and address
  // interleave in both directions). That is not implemented in this
  // bridge; wire CPU_DATA_WIDTH == AXI_DATA_WIDTH for now, or add a
  // dedicated converter stage ahead of this module.
  // --------------------------------------------------------------------
  if (CPU_DATA_WIDTH != AXI_DATA_WIDTH) begin : gen_width_check
    initial
      $fatal(1,
        "bp_bedrock_axi4_bridge: CPU_DATA_WIDTH (%0d) must equal AXI_DATA_WIDTH (%0d) - asymmetric width conversion is not implemented in this bridge.",
        CPU_DATA_WIDTH, AXI_DATA_WIDTH);
  end

  localparam int DATA_WIDTH         = AXI_DATA_WIDTH;
  localparam int BYTES_PER_AXI_BEAT = DATA_WIDTH / 8;

  localparam int REQ_FIFO_WIDTH  = MEM_FWD_HEADER_WIDTH + DATA_WIDTH;
  localparam int RESP_FIFO_WIDTH = MEM_REV_HEADER_WIDTH + DATA_WIDTH;

  // --------------------------------------------------------------------
  // BedRock type declarations (bridge-side, AXI clock domain)
  // --------------------------------------------------------------------
  `declare_bp_bedrock_if(
      ADDR_WIDTH,
      LCE_ID_WIDTH,
      CCE_ID_WIDTH,
      DID_WIDTH,
      LCE_ASSOC
  );

  `bp_cast_i(bp_bedrock_mem_fwd_header_s, bridge_fwd_header);
  // No bp_cast_o here: the rev-header value is produced directly as a
  // flat vector from resp_hdr_r in the FSM below (an implicit struct
  // pack, not a `_cast_o` struct the macro would populate), so using
  // `bp_cast_o` here would leave its generated cast_o struct undriven
  // and the actual output signal it assigns from would be garbage.

  // ======================================================================
  // REQUEST PATH: CPU domain -> async FIFO -> AXI domain
  // ======================================================================

  logic [REQ_FIFO_WIDTH-1:0] req_fifo_data_in, req_fifo_data_out;
  logic                      req_fifo_w_en, req_fifo_r_en;
  logic                      req_fifo_full, req_fifo_empty;

  assign req_fifo_data_in = {mem_fwd_header_i, mem_fwd_data_i};

  // CPU-side backpressure: stall the requester whenever the FIFO is full.
  assign mem_fwd_ready_and_o = !req_fifo_full;
  assign req_fifo_w_en       = mem_fwd_v_i && mem_fwd_ready_and_o;

  asynchronous_fifo #(
      .DEPTH     (FIFO_DEPTH),
      .DATA_WIDTH(REQ_FIFO_WIDTH)
  ) u_req_fifo (
      .wclk    (cpu_clk_i),
      .wrst_n  (~cpu_reset_i),
      .rclk    (axi_clk_i),
      .rrst_n  (~axi_reset_i),
      .w_en    (req_fifo_w_en),
      .r_en    (req_fifo_r_en),
      .data_in (req_fifo_data_in),
      .data_out(req_fifo_data_out),
      .full    (req_fifo_full),
      .empty   (req_fifo_empty)
  );

  // AXI-clock-domain signals into the bridge FSM.
  logic                            bridge_fwd_v;
  logic                            bridge_fwd_ready;
  logic [MEM_FWD_HEADER_WIDTH-1:0] bridge_fwd_header_i;
  logic [DATA_WIDTH-1:0]           bridge_fwd_data;

  // Direct FWFT-style passthrough: asynchronous_fifo presents
  // data_out = mem[raddr] combinationally whenever r_en is asserted,
  // so gating r_en with the bridge's own valid&&ready is sufficient.
  // No skid register, no reload bubble.
  assign bridge_fwd_v        = !req_fifo_empty;
  assign bridge_fwd_header_i = req_fifo_data_out[REQ_FIFO_WIDTH-1 -: MEM_FWD_HEADER_WIDTH];
  assign bridge_fwd_data     = req_fifo_data_out[DATA_WIDTH-1:0];
  assign req_fifo_r_en        = bridge_fwd_v && bridge_fwd_ready;

  // ======================================================================
  // RESPONSE PATH: AXI domain -> async FIFO -> CPU domain
  // ======================================================================

  logic [RESP_FIFO_WIDTH-1:0] resp_fifo_data_in, resp_fifo_data_out;
  logic                       resp_fifo_w_en, resp_fifo_r_en;
  logic                       resp_fifo_full, resp_fifo_empty;

  logic                            bridge_rev_v;
  logic                            bridge_rev_ready;
  logic [MEM_REV_HEADER_WIDTH-1:0] bridge_rev_header_o;
  logic [DATA_WIDTH-1:0]           bridge_rev_data;

  assign resp_fifo_data_in = {bridge_rev_header_o, bridge_rev_data};

  // AXI-side backpressure into the bridge FSM: stall it whenever the
  // response FIFO is full.
  assign bridge_rev_ready = !resp_fifo_full;
  assign resp_fifo_w_en    = bridge_rev_v && bridge_rev_ready;

  asynchronous_fifo #(
      .DEPTH     (FIFO_DEPTH),
      .DATA_WIDTH(RESP_FIFO_WIDTH)
  ) u_resp_fifo (
      .wclk    (axi_clk_i),
      .wrst_n  (~axi_reset_i),
      .rclk    (cpu_clk_i),
      .rrst_n  (~cpu_reset_i),
      .w_en    (resp_fifo_w_en),
      .r_en    (resp_fifo_r_en),
      .data_in (resp_fifo_data_in),
      .data_out(resp_fifo_data_out),
      .full    (resp_fifo_full),
      .empty   (resp_fifo_empty)
  );

  // Same direct FWFT-style passthrough on the CPU-clock side.
  assign mem_rev_header_o = resp_fifo_data_out[RESP_FIFO_WIDTH-1 -: MEM_REV_HEADER_WIDTH];
  assign mem_rev_data_o   = resp_fifo_data_out[DATA_WIDTH-1:0];
  assign mem_rev_v_o      = !resp_fifo_empty;
  assign resp_fifo_r_en   = mem_rev_v_o && mem_rev_ready_and_i;

  // ======================================================================
  // AXI4 master user-side signals (AXI clock domain)
  // ======================================================================

  logic                      wr_req, wr_req_ack;
  logic [ADDR_WIDTH-1:0]     wr_addr;
  logic [7:0]                wr_len;
  logic [2:0]                wr_size;
  logic [1:0]                wr_burst;
  logic [ID_WIDTH-1:0]       wr_id;

  logic                      wdata_valid, wdata_ready;
  logic [DATA_WIDTH-1:0]     wdata;
  logic [DATA_WIDTH/8-1:0]   wstrb;

  logic                      wr_resp_valid, wr_resp_ready;
  logic [1:0]                wr_resp;
  logic [ID_WIDTH-1:0]       wr_resp_id;

  logic                      rd_req, rd_req_ack;
  logic [ADDR_WIDTH-1:0]     rd_addr;
  logic [7:0]                rd_len;
  logic [2:0]                rd_size;
  logic [1:0]                rd_burst;
  logic [ID_WIDTH-1:0]       rd_id;

  logic                      rdata_valid, rdata_ready;
  logic [DATA_WIDTH-1:0]     rdata;
  logic                      rlast;
  logic [1:0]                rresp;
  logic [ID_WIDTH-1:0]       rid_out;

  axi4_master #(
      .ADDR_WIDTH(ADDR_WIDTH),
      .DATA_WIDTH(DATA_WIDTH),
      .ID_WIDTH  (ID_WIDTH)
  ) u_axi4_master (
      .aclk         (axi_clk_i),
      .aresetn      (~axi_reset_i),

      .wr_req       (wr_req),
      .wr_req_ack   (wr_req_ack),
      .wr_addr      (wr_addr),
      .wr_len       (wr_len),
      .wr_size      (wr_size),
      .wr_burst     (wr_burst),
      .wr_id        (wr_id),

      .wdata_valid  (wdata_valid),
      .wdata_ready  (wdata_ready),
      .wdata        (wdata),
      .wstrb        (wstrb),

      .wr_resp_valid(wr_resp_valid),
      .wr_resp_ready(wr_resp_ready),
      .wr_resp      (wr_resp),
      .wr_resp_id   (wr_resp_id),

      .rd_req       (rd_req),
      .rd_req_ack   (rd_req_ack),
      .rd_addr      (rd_addr),
      .rd_len       (rd_len),
      .rd_size      (rd_size),
      .rd_burst     (rd_burst),
      .rd_id        (rd_id),

      .rdata_valid  (rdata_valid),
      .rdata_ready  (rdata_ready),
      .rdata        (rdata),
      .rlast        (rlast),
      .rresp        (rresp),
      .rid_out      (rid_out),

      .m_axi_awid   (m_axi_awid),
      .m_axi_awaddr (m_axi_awaddr),
      .m_axi_awlen  (m_axi_awlen),
      .m_axi_awsize (m_axi_awsize),
      .m_axi_awburst(m_axi_awburst),
      .m_axi_awlock (m_axi_awlock),
      .m_axi_awcache(m_axi_awcache),
      .m_axi_awprot (m_axi_awprot),
      .m_axi_awqos  (m_axi_awqos),
      .m_axi_awvalid(m_axi_awvalid),
      .m_axi_awready(m_axi_awready),

      .m_axi_wdata  (m_axi_wdata),
      .m_axi_wstrb  (m_axi_wstrb),
      .m_axi_wlast  (m_axi_wlast),
      .m_axi_wvalid (m_axi_wvalid),
      .m_axi_wready (m_axi_wready),

      .m_axi_bid    (m_axi_bid),
      .m_axi_bresp  (m_axi_bresp),
      .m_axi_bvalid (m_axi_bvalid),
      .m_axi_bready (m_axi_bready),

      .m_axi_arid   (m_axi_arid),
      .m_axi_araddr (m_axi_araddr),
      .m_axi_arlen  (m_axi_arlen),
      .m_axi_arsize (m_axi_arsize),
      .m_axi_arburst(m_axi_arburst),
      .m_axi_arlock (m_axi_arlock),
      .m_axi_arcache(m_axi_arcache),
      .m_axi_arprot (m_axi_arprot),
      .m_axi_arqos  (m_axi_arqos),
      .m_axi_arvalid(m_axi_arvalid),
      .m_axi_arready(m_axi_arready),

      .m_axi_rid    (m_axi_rid),
      .m_axi_rdata  (m_axi_rdata),
      .m_axi_rresp  (m_axi_rresp),
      .m_axi_rlast  (m_axi_rlast),
      .m_axi_rvalid (m_axi_rvalid),
      .m_axi_rready (m_axi_rready)
  );

  // ======================================================================
  // Core BedRock <-> AXI4 FSM (AXI clock domain)
  // ======================================================================

  parameter ST_IDLE    = 7'b0000001;
  parameter ST_WR_AW   = 7'b0000010;
  parameter ST_WR_DATA = 7'b0000100;
  parameter ST_WR_B    = 7'b0001000;
  parameter ST_RD_AR   = 7'b0010000;
  parameter ST_RD_DATA = 7'b0100000;
  parameter ST_WR_RESP = 7'b1000000;

  logic [6:0] cur_state, next_state;

  bp_bedrock_mem_fwd_header_s req_hdr_r;
  logic [DATA_WIDTH-1:0]      req_first_data_r;

  bp_bedrock_mem_rev_header_s resp_hdr_r;
  logic [DATA_WIDTH-1:0]      resp_data_r;

  logic [7:0] beats_total_r;
  logic [7:0] beat_count_r;

  // Request classification computed once so every consumer agrees.
  // Only cached e_bedrock_mem_wr / e_bedrock_mem_rd are bridged; any
  // other msg_type is simply not accepted (bridge_fwd_ready stays low
  // for it in ST_IDLE), which stalls the requester instead of silently
  // dropping the request.
  wire fwd_is_wr = (bridge_fwd_header_cast_i.msg_type.fwd == e_bedrock_mem_wr);
  wire fwd_is_rd = (bridge_fwd_header_cast_i.msg_type.fwd == e_bedrock_mem_rd);

  // ----------------------------------------------------------------------
  // Functions (fully generic in DATA_WIDTH via BYTES_PER_AXI_BEAT)
  // ----------------------------------------------------------------------

  function automatic [7:0] size_bytes(input bp_bedrock_msg_size_e s);
    return (8'd1 << s);
  endfunction

  function automatic [7:0] num_beats(input bp_bedrock_msg_size_e s);
    int unsigned bytes;
    begin
      bytes = (1 << s);
      return (bytes + BYTES_PER_AXI_BEAT - 1) / BYTES_PER_AXI_BEAT;
    end
  endfunction

  function automatic [2:0] axi_size(input bp_bedrock_msg_size_e s);
    int unsigned bytes;
    begin
      bytes = (1 << s);
      if (bytes >= BYTES_PER_AXI_BEAT)
        return $clog2(BYTES_PER_AXI_BEAT);
      else
        return $clog2(bytes);
    end
  endfunction

  // Byte-strobe for a beat. Multi-beat bursts (size >= AXI width) are
  // always full-width on every beat by construction, so full mask is
  // correct there; the only case needing a partial mask is a single-beat
  // transfer narrower than the bus and/or unaligned within it - which is
  // exactly the "first beat" (== only beat) case this function computes.
  function automatic [DATA_WIDTH/8-1:0] beat_strb(
      input logic [ADDR_WIDTH-1:0] addr,
      input bp_bedrock_msg_size_e  s
  );
    logic [DATA_WIDTH/8-1:0] mask;
    int unsigned nbytes, offset, i;
    begin
      mask   = '0;
      nbytes = size_bytes(s);
      if (nbytes > BYTES_PER_AXI_BEAT)
        nbytes = BYTES_PER_AXI_BEAT;
      offset = addr % BYTES_PER_AXI_BEAT;
      for (i = 0; i < DATA_WIDTH/8; i++)
        if ((i >= offset) && (i < offset + nbytes))
          mask[i] = 1'b1;
      return mask;
    end
  endfunction

  // ----------------------------------------------------------------------
  // 1. State register
  // ----------------------------------------------------------------------

  always_ff @(posedge axi_clk_i or posedge axi_reset_i) begin
    if (axi_reset_i)
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
        if (bridge_fwd_v && bridge_fwd_ready) begin
          if (fwd_is_wr)
            next_state = ST_WR_AW;
          else if (fwd_is_rd)
            next_state = ST_RD_AR;
          else
            next_state = ST_IDLE;
        end else
          next_state = ST_IDLE;
      end

      ST_WR_AW: next_state = wr_req_ack ? ST_WR_DATA : ST_WR_AW;

      ST_WR_DATA: begin
        if (wdata_valid && wdata_ready)
          next_state = (beat_count_r == beats_total_r - 1) ? ST_WR_B : ST_WR_DATA;
        else
          next_state = ST_WR_DATA;
      end

      ST_WR_B: next_state = (wr_resp_valid && wr_resp_ready) ? ST_WR_RESP : ST_WR_B;

      ST_RD_AR: next_state = rd_req_ack ? ST_RD_DATA : ST_RD_AR;

      // Burst completion decided solely by AXI RLAST - see file header.
      ST_RD_DATA: begin
        if (rdata_valid && rdata_ready)
          next_state = rlast ? ST_IDLE : ST_RD_DATA;
        else
          next_state = ST_RD_DATA;
      end

      // bridge_rev_v is forced high throughout ST_WR_RESP (see output
      // logic below), so the response-FIFO's accept signal alone
      // (bridge_rev_ready) tells us when this beat has transferred.
      ST_WR_RESP: next_state = bridge_rev_ready ? ST_IDLE : ST_WR_RESP;

      default: next_state = ST_IDLE;

    endcase
  end

  // ----------------------------------------------------------------------
  // 3. Combinational output logic
  // ----------------------------------------------------------------------

  always_comb begin
    wr_req   = 1'b0;
    wr_addr  = req_hdr_r.addr;
    wr_len   = (beats_total_r == 0) ? 8'd0 : beats_total_r - 1'b1;
    wr_size  = axi_size(req_hdr_r.size);
    wr_burst = 2'b01;
    // Single outstanding write transaction at a time, so a constant AXI
    // ID is safe - there is never more than one in flight to disambiguate.
    wr_id    = '0;

    wdata_valid = 1'b0;
    wdata       = '0;
    wstrb       = '0;

    wr_resp_ready = 1'b0;

    rd_req   = 1'b0;
    rd_addr  = req_hdr_r.addr;
    rd_len   = (beats_total_r == 0) ? 8'd0 : beats_total_r - 1'b1;
    rd_size  = axi_size(req_hdr_r.size);
    rd_burst = 2'b01;
    rd_id    = '0;

    rdata_ready = 1'b0;

    bridge_fwd_ready   = 1'b0;
    bridge_rev_v       = 1'b0;
    bridge_rev_header_o = resp_hdr_r;
    bridge_rev_data    = resp_data_r;

    case (cur_state)

      ST_IDLE: begin
        bridge_fwd_ready = fwd_is_wr || fwd_is_rd;
      end

      ST_WR_AW: wr_req = 1'b1;

      ST_WR_DATA: begin
        if (beat_count_r == 0) begin
          wdata_valid = 1'b1;
          wdata       = req_first_data_r;
          wstrb       = beat_strb(req_hdr_r.addr, req_hdr_r.size);
        end else begin
          wdata_valid = bridge_fwd_v;
          wdata       = bridge_fwd_data;
          wstrb       = '1;
          // Advance the request FIFO only when AXI accepts this beat.
          bridge_fwd_ready = wdata_ready;
        end
      end

      ST_WR_B: wr_resp_ready = 1'b1;

      ST_RD_AR: rd_req = 1'b1;

      ST_RD_DATA: begin
        // Backpressure the AXI R channel using the response-FIFO's
        // ability to accept this beat.
        rdata_ready = bridge_rev_ready;
        bridge_rev_v        = rdata_valid;
        bridge_rev_header_o = resp_hdr_r;
        bridge_rev_data     = rdata;
      end

      ST_WR_RESP: begin
        bridge_rev_v        = 1'b1;
        bridge_rev_header_o = resp_hdr_r;
        bridge_rev_data     = resp_data_r;
      end

      default: bridge_fwd_ready = 1'b0;

    endcase
  end

  // ----------------------------------------------------------------------
  // 4. Datapath / control registers
  // ----------------------------------------------------------------------

  always_ff @(posedge axi_clk_i or posedge axi_reset_i) begin
    if (axi_reset_i) begin
      req_hdr_r        <= '0;
      req_first_data_r <= '0;
      resp_hdr_r       <= '0;
      resp_data_r      <= '0;
      beats_total_r    <= '0;
      beat_count_r     <= '0;
    end else begin

      // Accept first BedRock forward flit.
      if ((cur_state == ST_IDLE) && bridge_fwd_v && bridge_fwd_ready) begin
        req_hdr_r        <= bridge_fwd_header_cast_i;
        req_first_data_r <= bridge_fwd_data;
        beats_total_r    <= num_beats(bridge_fwd_header_cast_i.size);
        beat_count_r     <= 8'd0;
      end

      // Write-data beat counter.
      if ((cur_state == ST_WR_DATA) && wdata_valid && wdata_ready) begin
        beat_count_r <= (beat_count_r == beats_total_r - 1) ? 8'd0 : beat_count_r + 1'b1;
      end

      // Write-response header: echo the request header, msg_type viewed
      // through the .rev accessor (resp_hdr_r is a mem-reverse header).
      if ((cur_state == ST_WR_B) && wr_resp_valid && wr_resp_ready) begin
        resp_hdr_r              <= req_hdr_r;
        resp_hdr_r.msg_type.rev <= e_bedrock_mem_wr;
        resp_data_r             <= '0;
      end

      // Read-response header: echo the request header, msg_type viewed
      // through .rev, latched once and reused for every response beat.
      if ((cur_state == ST_RD_AR) && rd_req_ack) begin
        resp_hdr_r              <= req_hdr_r;
        resp_hdr_r.msg_type.rev <= e_bedrock_mem_rd;
      end

      // Read-data beat counter (diagnostics only - burst completion is
      // decided in the next-state logic using rlast alone).
      if ((cur_state == ST_RD_DATA) && rdata_valid && rdata_ready) begin
        beat_count_r <= rlast ? 8'd0 : beat_count_r + 1'b1;
      end

    end
  end

endmodule
