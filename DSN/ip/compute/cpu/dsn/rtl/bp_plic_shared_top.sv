`include "bp_common_defines.svh"
`include "bp_me_defines.svh"

// ============================================================================
// bp_plic_shared_top
//
// Sits at chip-top, outside both bp_core instances. Arbitrates PLIC-bound
// BedRock mem_fwd traffic from core0/core1 with round_robin_arbiter_2to1,
// feeds the winner into a single bp_bedrock_ahb3lite_bridge, which drives
// ahb3lite_plic_top. Grant is
// latched for the full multi-beat transaction using the bridge's busy_o,
// so a live transaction cannot be pre-empted mid-flit.
//
// irq[] from the PLIC is expected to be split/mapped by the caller into
// each core's m_external_irq_i / s_external_irq_i (not done here - that
// mapping depends on your TARGETS layout, e.g. irq[0]=core0 M-mode,
// irq[1]=core0 S-mode, irq[2]=core1 M-mode, irq[3]=core1 S-mode).
// ============================================================================

module bp_plic_shared_top
  import bp_common_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)
   `declare_bp_bedrock_if_widths(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p)

   // PLIC config
   , parameter PLIC_SOURCES  = 64
   , parameter PLIC_TARGETS  = 4    // e.g. 2 per core (M+S) x 2 cores
   , parameter PLIC_ADDR_W   = 32
   )
  (input  logic clk_i
   , input logic reset_i

   // ---------------- Core 0 PLIC-bound BedRock fwd/rev ----------------
   , input  logic [mem_fwd_header_width_lp-1:0] core0_fwd_header_i
   , input  logic [bedrock_fill_width_p-1:0]    core0_fwd_data_i
   , input  logic                               core0_fwd_v_i
   , output logic                               core0_fwd_ready_and_o

   , output logic [mem_rev_header_width_lp-1:0] core0_rev_header_o
   , output logic [bedrock_fill_width_p-1:0]    core0_rev_data_o
   , output logic                               core0_rev_v_o
   , input  logic                               core0_rev_ready_and_i

   // ---------------- Core 1 PLIC-bound BedRock fwd/rev ----------------
   , input  logic [mem_fwd_header_width_lp-1:0] core1_fwd_header_i
   , input  logic [bedrock_fill_width_p-1:0]    core1_fwd_data_i
   , input  logic                               core1_fwd_v_i
   , output logic                               core1_fwd_ready_and_o

   , output logic [mem_rev_header_width_lp-1:0] core1_rev_header_o
   , output logic [bedrock_fill_width_p-1:0]    core1_rev_data_o
   , output logic                               core1_rev_v_o
   , input  logic                               core1_rev_ready_and_i

   // ---------------- PLIC interrupt sources / outputs ----------------
   , input  logic [PLIC_SOURCES-1:0] plic_src_i
   , output logic [PLIC_TARGETS-1:0] plic_irq_o
   );

  // ==========================================================================
  // 1. Round-robin arbitration
  // ==========================================================================

  logic [1:0] arb_req, arb_grant;
  logic       txn_busy_r, granted_core_r;   // 0 = core0, 1 = core1
  logic       bridge_busy_lo;

  // Gate requests: don't even offer a core to the arbiter while a
  // transaction is already in flight - avoids the arbiter re-picking
  // mid-transaction.
  wire arb_req0 = core0_fwd_v_i & ~txn_busy_r;
  wire arb_req1 = core1_fwd_v_i & ~txn_busy_r;
  assign arb_req = {arb_req1, arb_req0};

  round_robin_arbiter_2to1 plic_arb
   (.clk   (clk_i)
    ,.rst_n(~reset_i)              // arbiter wants active-low, bp side active-high
    ,.req  (arb_req)
    ,.grant(arb_grant)
    );

  // Latch winner for the whole transaction; release only when bridge
  // reports back to idle.
  always_ff @(posedge clk_i or posedge reset_i)
    if (reset_i) begin
      txn_busy_r     <= 1'b0;
      granted_core_r <= 1'b0;
    end
    else begin
      if (!txn_busy_r && |arb_grant) begin
        txn_busy_r     <= 1'b1;
        granted_core_r <= arb_grant[1];   // core1 won if grant[1] set
      end
      else if (txn_busy_r && !bridge_busy_lo) begin
        txn_busy_r <= 1'b0;
      end
    end

  // ==========================================================================
  // 2. Fwd mux: two cores -> one bridge input, gated by latched winner
  //    while busy, by live grant just for the single accept cycle.
  // ==========================================================================

  wire sel_core1 = txn_busy_r ? granted_core_r : arb_grant[1];

  logic [mem_fwd_header_width_lp-1:0] bridge_fwd_header_li;
  logic [bedrock_fill_width_p-1:0]    bridge_fwd_data_li;
  logic                               bridge_fwd_v_li;
  logic                               bridge_fwd_ready_and_lo;

  assign bridge_fwd_header_li = sel_core1 ? core1_fwd_header_i : core0_fwd_header_i;
  assign bridge_fwd_data_li   = sel_core1 ? core1_fwd_data_i   : core0_fwd_data_i;
  assign bridge_fwd_v_li      = sel_core1 ? core1_fwd_v_i      : core0_fwd_v_i;

  // Ready only routes back to whichever core is actually selected this cycle
  assign core0_fwd_ready_and_o = ~sel_core1 & bridge_fwd_ready_and_lo;
  assign core1_fwd_ready_and_o =  sel_core1 & bridge_fwd_ready_and_lo;

  // ==========================================================================
  // 3. Rev demux: bridge's single response stream -> correct core,
  //    keyed off the SAME latch (bridge is a black box on "which core";
  //    response ordering is strictly in-order per bridge FSM, so the
  //    latch is valid for the entire response phase too).
  // ==========================================================================

  logic [mem_rev_header_width_lp-1:0] bridge_rev_header_lo;
  logic [bedrock_fill_width_p-1:0]    bridge_rev_data_lo;
  logic                               bridge_rev_v_lo;
  logic                               bridge_rev_ready_and_li;

  assign core0_rev_header_o = bridge_rev_header_lo;
  assign core0_rev_data_o   = bridge_rev_data_lo;
  assign core0_rev_v_o      = bridge_rev_v_lo & ~granted_core_r;

  assign core1_rev_header_o = bridge_rev_header_lo;
  assign core1_rev_data_o   = bridge_rev_data_lo;
  assign core1_rev_v_o      = bridge_rev_v_lo &  granted_core_r;

  assign bridge_rev_ready_and_li =
      granted_core_r ? core1_rev_ready_and_i : core0_rev_ready_and_i;

  // ==========================================================================
  // 4. Bridge + PLIC, same clock domain assumed (both cores share clk_i)
  // ==========================================================================

  logic ahb_hsel, ahb_hwrite, ahb_hreadyout, ahb_hresp;
  logic [PLIC_ADDR_W-1:0] ahb_haddr;
  logic [31:0]            ahb_hwdata, ahb_hrdata;
  logic [2:0]             ahb_hsize, ahb_hburst;
  logic [3:0]             ahb_hprot;
  logic [1:0]             ahb_htrans;

  bp_bedrock_ahb3lite_bridge
   #(.ADDR_WIDTH(PLIC_ADDR_W)
     ,.CPU_DATA_WIDTH(bedrock_fill_width_p)
     ,.AHB_DATA_WIDTH(32)
     ,.LCE_ID_WIDTH(lce_id_width_p)
     ,.CCE_ID_WIDTH(cce_id_width_p)
     ,.DID_WIDTH(did_width_p)
     ,.LCE_ASSOC(lce_assoc_p)
     ,.MEM_FWD_HEADER_WIDTH(mem_fwd_header_width_lp)
     ,.MEM_REV_HEADER_WIDTH(mem_rev_header_width_lp)
     )
   plic_bridge
    (.cpu_clk_i(clk_i)
     ,.cpu_reset_i(reset_i)

     ,.mem_fwd_header_i(bridge_fwd_header_li)
     ,.mem_fwd_data_i(bridge_fwd_data_li)
     ,.mem_fwd_v_i(bridge_fwd_v_li)
     ,.mem_fwd_ready_and_o(bridge_fwd_ready_and_lo)

     ,.mem_rev_header_o(bridge_rev_header_lo)
     ,.mem_rev_data_o(bridge_rev_data_lo)
     ,.mem_rev_v_o(bridge_rev_v_lo)
     ,.mem_rev_ready_and_i(bridge_rev_ready_and_li)

     ,.busy_o(bridge_busy_lo)          // <-- patched-in port

     ,.ahb_clk_i(clk_i)                // same domain as cores; change if PLIC has its own clock
     ,.ahb_reset_i(reset_i)

     ,.HSEL(ahb_hsel)
     ,.HADDR(ahb_haddr)
     ,.HWDATA(ahb_hwdata)
     ,.HRDATA(ahb_hrdata)
     ,.HWRITE(ahb_hwrite)
     ,.HSIZE(ahb_hsize)
     ,.HBURST(ahb_hburst)
     ,.HPROT(ahb_hprot)
     ,.HTRANS(ahb_htrans)
     ,.HREADYOUT(ahb_hreadyout)
     ,.HRESP(ahb_hresp)
     );

  ahb3lite_plic_top
   #(.HADDR_SIZE(PLIC_ADDR_W)
     ,.HDATA_SIZE(32)
     ,.SOURCES(PLIC_SOURCES)
     ,.TARGETS(PLIC_TARGETS)
     )
   plic
    (.HRESETn(~reset_i)              // PLIC wants active-low
     ,.HCLK(clk_i)

     ,.HSEL(ahb_hsel)
     ,.HADDR(ahb_haddr)
     ,.HWDATA(ahb_hwdata)
     ,.HRDATA(ahb_hrdata)
     ,.HWRITE(ahb_hwrite)
     ,.HSIZE(ahb_hsize)
     ,.HBURST(ahb_hburst)
     ,.HPROT(ahb_hprot)
     ,.HTRANS(ahb_htrans)
     ,.HREADYOUT(ahb_hreadyout)
     ,.HREADY(ahb_hreadyout)          // single-slave shortcut: tie own readyout back as ready
     ,.HRESP(ahb_hresp)

     ,.src(plic_src_i)
     ,.irq(plic_irq_o)
     );

endmodule
