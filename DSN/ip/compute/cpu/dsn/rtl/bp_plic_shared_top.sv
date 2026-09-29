`include "bp_common_defines.svh"
`include "bp_me_defines.svh"

// ============================================================================
// bp_plic_shared_top
//
// Dual-clock shared PLIC integration for two BlackParrot cores.
//
// Clock domains
// -----------------------------------------------------------------------------
// core_clk_i
//   - Core 0 / Core 1 BedRock interfaces
//   - Round-robin arbiter
//   - Transaction ownership
//   - Forward/reverse transaction counters
//   - Bridge CPU/BedRock side
//
// plic_ahb_clk_i
//   - Bridge AHB-side FSM
//   - AHB3-Lite master
//   - AHB3-Lite PLIC
//
// CDC
// -----------------------------------------------------------------------------
// BedRock request/response CDC is handled inside
// bp_bedrock_ahb3lite_bridge through its asynchronous FIFOs.
//
// The bridge busy_o signal is intentionally NOT used here because its
// implementation is based on AHB-domain state and response FIFO state.
//
// PLIC interrupt outputs remain in the plic_ahb_clk_i domain and must be
// synchronized into core_clk_i before being consumed by the cores.
//
// PLIC interrupt sources are expected to already be synchronized to
// plic_ahb_clk_i by the upstream peripheral/interrupt-source logic.
//
// Transaction ownership
// -----------------------------------------------------------------------------
// The shared bridge is owned by one core for the complete BedRock transaction.
//
// Write:
//   N forward flits -> 1 reverse completion flit
//
// Read:
//   1 forward flit -> N reverse data flits
//
// N = ceil(message_size_bytes / BedRock_fill_bytes)
//
// The owner is latched on the first actual forward handshake.
// Ownership is released only when the final reverse flit is accepted by
// the owning core.
//
// PLIC interrupt target mapping is performed by the caller:
//
//   irq[0] -> Core 0 M-mode external interrupt
//   irq[1] -> Core 0 S-mode external interrupt
//   irq[2] -> Core 1 M-mode external interrupt
//   irq[3] -> Core 1 S-mode external interrupt
// ============================================================================

module bp_plic_shared_top
  import bp_common_pkg::*;
#(
  parameter bp_params_e bp_params_p = e_bp_default_cfg

  `declare_bp_proc_params(bp_params_p)

  `declare_bp_bedrock_if_widths(
    paddr_width_p,
    lce_id_width_p,
    cce_id_width_p,
    did_width_p,
    lce_assoc_p
  )

  // PLIC configuration
  , parameter PLIC_SOURCES = 64
  , parameter PLIC_TARGETS = 4
  , parameter PLIC_ADDR_W  = 32
)
(
  // ==========================================================================
  // Clock / reset
  // ==========================================================================

  input logic core_clk_i,
  input logic plic_ahb_clk_i,

  // Active-high main reset.
  // Synchronous with core_clk_i.
  input logic reset_i,


  // ==========================================================================
  // Core 0 PLIC-bound BedRock forward interface
  // ==========================================================================

  input  logic [mem_fwd_header_width_lp-1:0] core0_fwd_header_i,
  input  logic [bedrock_fill_width_p-1:0]    core0_fwd_data_i,
  input  logic                               core0_fwd_v_i,
  output logic                               core0_fwd_ready_and_o,


  // ==========================================================================
  // Core 0 PLIC-bound BedRock reverse interface
  // ==========================================================================

  output logic [mem_rev_header_width_lp-1:0] core0_rev_header_o,
  output logic [bedrock_fill_width_p-1:0]    core0_rev_data_o,
  output logic                               core0_rev_v_o,
  input  logic                               core0_rev_ready_and_i,


  // ==========================================================================
  // Core 1 PLIC-bound BedRock forward interface
  // ==========================================================================

  input  logic [mem_fwd_header_width_lp-1:0] core1_fwd_header_i,
  input  logic [bedrock_fill_width_p-1:0]    core1_fwd_data_i,
  input  logic                               core1_fwd_v_i,
  output logic                               core1_fwd_ready_and_o,


  // ==========================================================================
  // Core 1 PLIC-bound BedRock reverse interface
  // ==========================================================================

  output logic [mem_rev_header_width_lp-1:0] core1_rev_header_o,
  output logic [bedrock_fill_width_p-1:0]    core1_rev_data_o,
  output logic                               core1_rev_v_o,
  input  logic                               core1_rev_ready_and_i,


  // ==========================================================================
  // PLIC interrupt sources / outputs
  // ==========================================================================

  // Expected to be synchronized to plic_ahb_clk_i.
  input logic [PLIC_SOURCES-1:0] plic_src_i,

  // Generated in plic_ahb_clk_i domain.
  // Caller must synchronize these into core_clk_i before feeding the cores.
  output logic [PLIC_TARGETS-1:0] plic_irq_o
);


  // ==========================================================================
  // BedRock interface declarations
  // ==========================================================================

  `declare_bp_bedrock_if(
    paddr_width_p,
    lce_id_width_p,
    cce_id_width_p,
    did_width_p,
    lce_assoc_p
  );


  // ==========================================================================
  // Local parameters
  // ==========================================================================

  localparam int fill_bytes_lp = bedrock_fill_width_p / 8;


  // ==========================================================================
  // 0. AHB clock-domain reset synchronizer
  //
  // reset_i:
  //   active-high reset
  //
  // ahb_reset_lo:
  //   active-high reset synchronized to plic_ahb_clk_i
  //
  // Async assert + synchronous deassert.
  // ==========================================================================

  logic [1:0] ahb_rst_sync_r;
  logic       ahb_reset_lo;

  always_ff @(posedge plic_ahb_clk_i or posedge reset_i) begin
    if (reset_i)
      ahb_rst_sync_r <= 2'b11;
    else
      ahb_rst_sync_r <= {ahb_rst_sync_r[0], 1'b0};
  end

  assign ahb_reset_lo = ahb_rst_sync_r[1];


  // ==========================================================================
  // 1. Round-robin arbitration
  //
  // Entirely in core_clk_i domain.
  //
  // arb_req[0] = Core 0
  // arb_req[1] = Core 1
  // ==========================================================================

  logic [1:0] arb_req;
  logic [1:0] arb_grant;

  logic       txn_busy_r;
  logic       granted_core_r;

  // Remaining forward flits after the first flit has been accepted.
  logic [7:0] fwd_left_r;

  // Remaining reverse flits.
  logic [7:0] rev_left_r;

  // Explicit transaction information latched from the first forward flit.
  logic       txn_is_write_r;
  logic [7:0] txn_flits_r;


  // No new core may request arbitration while another transaction owns
  // the shared bridge.
  assign arb_req = {
    core1_fwd_v_i & ~txn_busy_r,
    core0_fwd_v_i & ~txn_busy_r
  };


  round_robin_arbiter_2to1 plic_arb
  (
    .clk   (core_clk_i),
    .rst_n (~reset_i),
    .req   (arb_req),
    .grant (arb_grant)
  );


  // ==========================================================================
  // 2. Forward-path mux
  //
  // Before transaction ownership:
  //   selected core comes from arbiter grant.
  //
  // After ownership:
  //   selected core is granted_core_r.
  //
  // A read has only one forward flit, so after that handshake fwd_open closes.
  //
  // A write may contain multiple forward flits, so fwd_open remains open until
  // all write flits have been accepted.
  // ==========================================================================

  wire sel_core1 =
      txn_busy_r ? granted_core_r : arb_grant[1];


  wire fwd_open =
      txn_busy_r
      ? (fwd_left_r != 8'd0)
      : (|arb_grant);


  logic [mem_fwd_header_width_lp-1:0] bridge_fwd_header_li;
  logic [bedrock_fill_width_p-1:0]    bridge_fwd_data_li;
  logic                               bridge_fwd_v_li;
  logic                               bridge_fwd_ready_and_lo;


  assign bridge_fwd_header_li =
      sel_core1
      ? core1_fwd_header_i
      : core0_fwd_header_i;


  assign bridge_fwd_data_li =
      sel_core1
      ? core1_fwd_data_i
      : core0_fwd_data_i;


  assign bridge_fwd_v_li =
      fwd_open
      &
      (sel_core1
       ? core1_fwd_v_i
       : core0_fwd_v_i);


  // Ready only goes back to the currently selected core.
  assign core0_fwd_ready_and_o =
      fwd_open
      & ~sel_core1
      & bridge_fwd_ready_and_lo;


  assign core1_fwd_ready_and_o =
      fwd_open
      &  sel_core1
      & bridge_fwd_ready_and_lo;


  // Actual forward handshake.
  wire fwd_hs =
      bridge_fwd_v_li
      & bridge_fwd_ready_and_lo;


  // ==========================================================================
  // 3. Decode the first selected BedRock request
  //
  // These values are used only when accepting the first flit of a transaction.
  // ==========================================================================

  bp_bedrock_mem_fwd_header_s sel_hdr_cast;

  assign sel_hdr_cast = bridge_fwd_header_li;


  function automatic [7:0] num_flits
  (
    input bp_bedrock_msg_size_e s
  );

    int unsigned bytes;

    begin
      bytes = (1 << s);

      num_flits =
          (bytes + fill_bytes_lp - 1)
          / fill_bytes_lp;
    end

  endfunction


  wire sel_is_wr =
      (sel_hdr_cast.msg_type.fwd == e_bedrock_mem_wr);


  wire [7:0] sel_flits =
      num_flits(sel_hdr_cast.size);


  // ==========================================================================
  // 4. Reverse-path demux
  //
  // The bridge has one reverse response stream.
  //
  // The response is routed to the core recorded in granted_core_r.
  // ==========================================================================

  logic [mem_rev_header_width_lp-1:0] bridge_rev_header_lo;
  logic [bedrock_fill_width_p-1:0]    bridge_rev_data_lo;
  logic                               bridge_rev_v_lo;
  logic                               bridge_rev_ready_and_li;


  // Core 0 response.
  assign core0_rev_header_o =
      bridge_rev_header_lo;

  assign core0_rev_data_o =
      bridge_rev_data_lo;

  assign core0_rev_v_o =
      bridge_rev_v_lo
      & txn_busy_r
      & ~granted_core_r;


  // Core 1 response.
  assign core1_rev_header_o =
      bridge_rev_header_lo;

  assign core1_rev_data_o =
      bridge_rev_data_lo;

  assign core1_rev_v_o =
      bridge_rev_v_lo
      & txn_busy_r
      & granted_core_r;


  // Only the transaction-owning core is allowed to consume the response.
  assign bridge_rev_ready_and_li =
      txn_busy_r
      &
      (
        granted_core_r
        ? core1_rev_ready_and_i
        : core0_rev_ready_and_i
      );


  // Actual reverse response handshake.
  wire rev_hs =
      bridge_rev_v_lo
      & bridge_rev_ready_and_li;


  // ==========================================================================
  // 5. Transaction ownership tracking
  //
  // Everything here is in core_clk_i domain.
  //
  // Transaction assumptions:
  //
  //   WRITE:
  //       N forward flits
  //       1 reverse completion flit
  //
  //   READ:
  //       1 forward flit
  //       N reverse data flits
  //
  // Ownership is acquired on the first real forward handshake.
  // Ownership is released on the final reverse handshake.
  // ==========================================================================

  always_ff @(posedge core_clk_i or posedge reset_i) begin

    if (reset_i) begin

      txn_busy_r     <= 1'b0;
      granted_core_r <= 1'b0;

      fwd_left_r     <= '0;
      rev_left_r     <= '0;

      txn_is_write_r <= 1'b0;
      txn_flits_r    <= '0;

    end

    else if (!txn_busy_r) begin

      // ------------------------------------------------------------
      // First forward flit accepted.
      // ------------------------------------------------------------

      if (fwd_hs) begin

        txn_busy_r     <= 1'b1;
        granted_core_r <= sel_core1;

        // Explicitly remember transaction properties.
        txn_is_write_r <= sel_is_wr;
        txn_flits_r    <= sel_flits;

        // Remaining forward flits.
        fwd_left_r <=
            sel_is_wr
            ? (sel_flits - 8'd1)
            : 8'd0;

        // Expected reverse flits.
        rev_left_r <=
            sel_is_wr
            ? 8'd1
            : sel_flits;

      end

    end

    else begin

      // ------------------------------------------------------------
      // Additional forward flits.
      //
      // Only write transactions have additional forward flits.
      // ------------------------------------------------------------

      if (fwd_hs)
        fwd_left_r <= fwd_left_r - 8'd1;


      // ------------------------------------------------------------
      // Reverse response handshake.
      // ------------------------------------------------------------

      if (rev_hs) begin

        if (rev_left_r == 8'd1) begin

          // Last reverse flit accepted by owning core.
          txn_busy_r <= 1'b0;

        end

        rev_left_r <= rev_left_r - 8'd1;

      end

    end

  end


  // ==========================================================================
  // 6. AHB3-Lite interface signals
  //
  // All signals below are in the plic_ahb_clk_i domain.
  // ==========================================================================

  logic                       ahb_hsel;
  logic [paddr_width_p-1:0]   ahb_haddr_full;
  logic [31:0]                ahb_hwdata;
  logic [31:0]                ahb_hrdata;

  logic                       ahb_hwrite;
  logic [2:0]                 ahb_hsize;
  logic [2:0]                 ahb_hburst;
  logic [3:0]                 ahb_hprot;
  logic [1:0]                 ahb_htrans;

  logic                       ahb_hreadyout;
  logic                       ahb_hresp;


  // ==========================================================================
  // 7. BedRock -> AHB3-Lite bridge
  //
  // CPU / BedRock side:
  //     core_clk_i
  //
  // AHB side:
  //     plic_ahb_clk_i
  //
  // CDC is handled internally by the bridge's asynchronous request and
  // response FIFOs.
  // ==========================================================================

  bp_bedrock_ahb3lite_bridge
  #(
    .ADDR_WIDTH             (paddr_width_p),
    .CPU_DATA_WIDTH         (bedrock_fill_width_p),
    .AHB_DATA_WIDTH        (32),

    .LCE_ID_WIDTH           (lce_id_width_p),
    .CCE_ID_WIDTH           (cce_id_width_p),
    .DID_WIDTH              (did_width_p),
    .LCE_ASSOC              (lce_assoc_p),

    .MEM_FWD_HEADER_WIDTH   (mem_fwd_header_width_lp),
    .MEM_REV_HEADER_WIDTH   (mem_rev_header_width_lp)
  )
  plic_bridge
  (
    // ------------------------------------------------------------------------
    // CPU / BedRock clock domain
    // ------------------------------------------------------------------------

    .cpu_clk_i              (core_clk_i),
    .cpu_reset_i            (reset_i),

    .mem_fwd_header_i       (bridge_fwd_header_li),
    .mem_fwd_data_i         (bridge_fwd_data_li),
    .mem_fwd_v_i            (bridge_fwd_v_li),
    .mem_fwd_ready_and_o    (bridge_fwd_ready_and_lo),

    .mem_rev_header_o       (bridge_rev_header_lo),
    .mem_rev_data_o         (bridge_rev_data_lo),
    .mem_rev_v_o            (bridge_rev_v_lo),
    .mem_rev_ready_and_i    (bridge_rev_ready_and_li),

    // Intentionally unused.
    //
    // busy_o is generated from the bridge AHB-side FSM and also includes
    // response-FIFO state. Transaction ownership is tracked locally in the
    // core clock domain using BedRock handshakes instead.
    .busy_o                 (),

    // ------------------------------------------------------------------------
    // AHB3-Lite clock domain
    // ------------------------------------------------------------------------

    .ahb_clk_i              (plic_ahb_clk_i),
    .ahb_reset_i            (ahb_reset_lo),

    .HSEL                   (ahb_hsel),
    .HADDR                  (ahb_haddr_full),
    .HWDATA                 (ahb_hwdata),
    .HRDATA                 (ahb_hrdata),

    .HWRITE                 (ahb_hwrite),
    .HSIZE                  (ahb_hsize),
    .HBURST                 (ahb_hburst),
    .HPROT                  (ahb_hprot),
    .HTRANS                 (ahb_htrans),

    .HREADYOUT              (ahb_hreadyout),
    .HRESP                  (ahb_hresp)
  );


  // ==========================================================================
  // 8. AHB3-Lite PLIC
  //
  // The PLIC register interface operates entirely in plic_ahb_clk_i domain.
  // ==========================================================================

  ahb3lite_plic_top
  #(
    .HADDR_SIZE             (PLIC_ADDR_W),
    .HDATA_SIZE             (32),
    .SOURCES                (PLIC_SOURCES),
    .TARGETS                (PLIC_TARGETS)
  )
  plic
  (
    .HRESETn                (~ahb_reset_lo),
    .HCLK                   (plic_ahb_clk_i),

    .HSEL                   (ahb_hsel),

    .HADDR                  (ahb_haddr_full[PLIC_ADDR_W-1:0]),
    .HWDATA                 (ahb_hwdata),
    .HRDATA                 (ahb_hrdata),

    .HWRITE                 (ahb_hwrite),
    .HSIZE                  (ahb_hsize),
    .HBURST                 (ahb_hburst),
    .HPROT                  (ahb_hprot),
    .HTRANS                 (ahb_htrans),

    .HREADYOUT              (ahb_hreadyout),

    // Single-slave AHB connection.
    .HREADY                 (ahb_hreadyout),

    .HRESP                  (ahb_hresp),

    // External interrupt sources.
    //
    // These must already be synchronized to plic_ahb_clk_i.
    .src                    (plic_src_i),

    // PLIC interrupt target outputs.
    //
    // These are in plic_ahb_clk_i domain and must be synchronized before
    // being consumed by the BlackParrot core clock domain.
    .irq                    (plic_irq_o)
  );


endmodule
