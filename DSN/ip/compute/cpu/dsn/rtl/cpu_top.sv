`include "bp_common_defines.svh"
`include "bp_be_defines.svh"
`include "bp_me_defines.svh"
`include "bsg_noc_links.svh"


module cpu_top
  import bp_common_pkg::*;
#(
    parameter bp_params_e bp_params_p = e_bp_default_cfg
    `declare_bp_proc_params(bp_params_p)
    `declare_bp_bedrock_if_widths(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p)
    ,
    localparam dma_pkt_width_lp = `bsg_cache_dma_pkt_width(daddr_width_p, l2_block_size_in_words_p)
    ,

    // Bridge-only parameters - BlackParrot's own params say nothing
    // about the AXI4 fabric side, so these stay independently set.
    parameter int ID_WIDTH       = 4,
    parameter int FIFO_DEPTH     = 8,
    parameter int AXI_DATA_WIDTH = bedrock_fill_width_p
) (
    // ==================================================================
    // BlackParrot core domain
    // ==================================================================
    input logic clk_i,
    input logic rt_clk_i,
    input logic reset_i,

    input logic [did_width_p-1:0] my_did_i,
    input logic [did_width_p-1:0] host_did_i,

    // ==================================================================
    // AXI4 domain (bridge side)
    // ==================================================================
    input logic axi_clk_i,
    input logic axi_reset_i,

    output logic [ID_WIDTH-1:0]        m_axi_awid,
    output logic [paddr_width_p-1:0]   m_axi_awaddr,
    output logic [7:0]                 m_axi_awlen,
    output logic [2:0]                 m_axi_awsize,
    output logic [1:0]                 m_axi_awburst,
    output logic                       m_axi_awlock,
    output logic [3:0]                 m_axi_awcache,
    output logic [2:0]                 m_axi_awprot,
    output logic [3:0]                 m_axi_awqos,
    output logic                       m_axi_awvalid,
    input  logic                       m_axi_awready,

    output logic [AXI_DATA_WIDTH-1:0]   m_axi_wdata,
    output logic [AXI_DATA_WIDTH/8-1:0] m_axi_wstrb,
    output logic                        m_axi_wlast,
    output logic                        m_axi_wvalid,
    input  logic                        m_axi_wready,

    input  logic [ID_WIDTH-1:0] m_axi_bid,
    input  logic [1:0]          m_axi_bresp,
    input  logic                m_axi_bvalid,
    output logic                m_axi_bready,

    output logic [ID_WIDTH-1:0]      m_axi_arid,
    output logic [paddr_width_p-1:0] m_axi_araddr,
    output logic [7:0]               m_axi_arlen,
    output logic [2:0]               m_axi_arsize,
    output logic [1:0]               m_axi_arburst,
    output logic                     m_axi_arlock,
    output logic [3:0]               m_axi_arcache,
    output logic [2:0]               m_axi_arprot,
    output logic [3:0]               m_axi_arqos,
    output logic                     m_axi_arvalid,
    input  logic                     m_axi_arready,

    input  logic [ID_WIDTH-1:0]       m_axi_rid,
    input  logic [AXI_DATA_WIDTH-1:0] m_axi_rdata,
    input  logic [1:0]                m_axi_rresp,
    input  logic                      m_axi_rlast,
    input  logic                      m_axi_rvalid,
    output logic                      m_axi_rready,

    // ==================================================================
    // DRAM interface - forwarded straight through from bp_processor,
    // unchanged. Connect this to your real DRAM controller.
    // ==================================================================
    output logic [num_cce_p-1:0][l2_dmas_p-1:0][dma_pkt_width_lp-1:0] dma_pkt_o,
    output logic [num_cce_p-1:0][l2_dmas_p-1:0]                       dma_pkt_v_o,
    input  logic [num_cce_p-1:0][l2_dmas_p-1:0]                       dma_pkt_ready_and_i,

    input  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0] dma_data_i,
    input  logic [num_cce_p-1:0][l2_dmas_p-1:0]                      dma_data_v_i,
    output logic [num_cce_p-1:0][l2_dmas_p-1:0]                      dma_data_ready_and_o,

    output logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0] dma_data_o,
    output logic [num_cce_p-1:0][l2_dmas_p-1:0]                      dma_data_v_o,
    input  logic [num_cce_p-1:0][l2_dmas_p-1:0]                      dma_data_ready_and_i
);

  // --------------------------------------------------------------------
  // Internal wires: bp_processor's Outgoing I/O <-> bridge's CPU-side
  // ports. Named for the signal's MEANING (fwd/rev), not for either
  // module's port suffix - each module's own .connection(wire) line
  // below is what actually assigns the _o/_i direction.
  // --------------------------------------------------------------------
  logic [mem_fwd_header_width_lp-1:0] fwd_hdr;
  logic [bedrock_fill_width_p-1:0]    fwd_data;
  logic                               fwd_v;
  logic                               fwd_ready;

  logic [mem_rev_header_width_lp-1:0] rev_hdr;
  logic [bedrock_fill_width_p-1:0]    rev_data;
  logic                               rev_v;
  logic                               rev_ready;

  bp_processor #(
      .bp_params_p(bp_params_p)
  ) u_bp (
      .clk_i   (clk_i),
      .rt_clk_i(rt_clk_i),
      .reset_i (!reset_i),//Converted posedge reset of CPU to negedge reset at top module

      .my_did_i  (my_did_i),
      .host_did_i(host_did_i),

      // ---- Outgoing I/O: wired to the bridge below ----
      .mem_fwd_header_o(fwd_hdr),
      .mem_fwd_data_o  (fwd_data),
      .mem_fwd_v_o     (fwd_v),
      .mem_fwd_ready_and_i(fwd_ready),

      .mem_rev_header_i(rev_hdr),
      .mem_rev_data_i  (rev_data),
      .mem_rev_v_i     (rev_v),
      .mem_rev_ready_and_o(rev_ready),

      // ---- Incoming I/O: tied off, no peer access into BP here ----
      .mem_fwd_header_i('0),
      .mem_fwd_data_i  ('0),
      .mem_fwd_v_i     (1'b0),
      .mem_fwd_ready_and_o(),

      .mem_rev_header_o(),
      .mem_rev_data_o  (),
      .mem_rev_v_o     (),
      .mem_rev_ready_and_i(1'b1),

      // ---- DRAM interface: forwarded straight up ----
      .dma_pkt_o           (dma_pkt_o),
      .dma_pkt_v_o         (dma_pkt_v_o),
      .dma_pkt_ready_and_i (dma_pkt_ready_and_i),

      .dma_data_i          (dma_data_i),
      .dma_data_v_i        (dma_data_v_i),
      .dma_data_ready_and_o(dma_data_ready_and_o),

      .dma_data_o          (dma_data_o),
      .dma_data_v_o        (dma_data_v_o),
      .dma_data_ready_and_i(dma_data_ready_and_i)
  );

  // Instantiated directly - no auto-parameterizing wrapper in between.
  bp_bedrock_axi4_bridge #(
      .ADDR_WIDTH          (paddr_width_p),
      .ID_WIDTH            (ID_WIDTH),
      .CPU_DATA_WIDTH      (bedrock_fill_width_p),
      .AXI_DATA_WIDTH      (AXI_DATA_WIDTH),
      .LCE_ID_WIDTH        (lce_id_width_p),
      .CCE_ID_WIDTH        (cce_id_width_p),
      .DID_WIDTH           (did_width_p),
      .LCE_ASSOC           (lce_assoc_p),
      .MEM_FWD_HEADER_WIDTH(mem_fwd_header_width_lp),
      .MEM_REV_HEADER_WIDTH(mem_rev_header_width_lp),
      .FIFO_DEPTH          (FIFO_DEPTH)
  ) u_bridge (
      .cpu_clk_i  (clk_i),
      .cpu_reset_i(reset_i),

      .mem_fwd_header_i   (fwd_hdr),
      .mem_fwd_data_i     (fwd_data),
      .mem_fwd_v_i        (fwd_v),
      .mem_fwd_ready_and_o(fwd_ready),

      .mem_rev_header_o   (rev_hdr),
      .mem_rev_data_o     (rev_data),
      .mem_rev_v_o        (rev_v),
      .mem_rev_ready_and_i(rev_ready),

      .axi_clk_i  (axi_clk_i),
      .axi_reset_i(axi_reset_i),

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

      .m_axi_wdata (m_axi_wdata),
      .m_axi_wstrb (m_axi_wstrb),
      .m_axi_wlast (m_axi_wlast),
      .m_axi_wvalid(m_axi_wvalid),
      .m_axi_wready(m_axi_wready),

      .m_axi_bid   (m_axi_bid),
      .m_axi_bresp (m_axi_bresp),
      .m_axi_bvalid(m_axi_bvalid),
      .m_axi_bready(m_axi_bready),

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

      .m_axi_rid   (m_axi_rid),
      .m_axi_rdata (m_axi_rdata),
      .m_axi_rresp (m_axi_rresp),
      .m_axi_rlast (m_axi_rlast),
      .m_axi_rvalid(m_axi_rvalid),
      .m_axi_rready(m_axi_rready)
  );

endmodule

