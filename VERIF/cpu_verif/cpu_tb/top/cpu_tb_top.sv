// cpu_tb_top.sv
// hdl_top/hvl_top split: this module owns the DUT instantiation and clock/reset;
// UVM's run_test() drives everything else through the virtual interface.
//
// NOTE on integration: bp_processor's real BedRock ports are packed structs
// (bp_bedrock_mem_fwd_header_s, etc, see bp_common_bedrock_if.svh) rather than
// the flattened fields used on bedrock_if here. In the real DUT hookup, add a
// thin adapter that packs/unpacks those structs to/from bedrock_if's signals --
// the field order (msg_type, subop, addr, size, payload) is preserved so the
// mapping is mechanical. That adapter is intentionally left out of this
// standalone package so it compiles without the full bp_common include tree.
/*
`timescale 1ns/1ps

module cpu_tb_top;

  import uvm_pkg::*;
  import bp_uvm_pkg::*;
  `include "uvm_macros.svh"

  bit clk;
  bit reset;

  always #5 clk = ~clk; // 100MHz tb clock, independent of DUT clock per riscv_tb_top.sv convention

  initial begin
    reset = 1'b1;
    repeat (10) @(posedge clk);
    reset = 1'b0;
  end

  bedrock_if #(.ADDR_WIDTH(64), .DATA_WIDTH(64)) bedrock_vif (.clk(clk), .reset(reset));

  // ---------------------------------------------------------------------
  // DUT instantiation placeholder.
  // Swap this for the real `wrapper` module from bp_top/test/tb/bp_tethered,
  // with its mem_fwd/mem_rev ports connected through the adapter noted above.
  // A behavioral stub is provided here (bp_processor_stub) so this package
  // is runnable standalone to validate the UVM environment itself.
  // ---------------------------------------------------------------------
  bp_processor_stub dut (
    .clk_i               (clk),
    .reset_i             (reset),
    .mem_fwd_addr_i      (bedrock_vif.mem_fwd_addr),
    .mem_fwd_msg_type_i  (bedrock_vif.mem_fwd_msg_type),
    .mem_fwd_size_i      (bedrock_vif.mem_fwd_size),
    .mem_fwd_data_i      (bedrock_vif.mem_fwd_data),
    .mem_fwd_v_i         (bedrock_vif.mem_fwd_v),
    .mem_fwd_ready_and_o (bedrock_vif.mem_fwd_ready_and),
    .mem_rev_addr_o      (bedrock_vif.mem_rev_addr),
    .mem_rev_msg_type_o  (bedrock_vif.mem_rev_msg_type),
    .mem_rev_size_o      (bedrock_vif.mem_rev_size),
    .mem_rev_data_o      (bedrock_vif.mem_rev_data),
    .mem_rev_v_o         (bedrock_vif.mem_rev_v),
    .mem_rev_ready_and_i (bedrock_vif.mem_rev_ready_and)
  );

  // Waveform dump for debugging with GTKWave or another VCD viewer.
  // Verilator ignores the scope arguments of $dumpvars, so the whole design
  // is always dumped. For the PLIC path cut it out afterwards: make plic_vcd
  // (sim/plic.vcd).
  // +NO_VCD turns the dump off (long or hanging runs, regressions): a full
  // dump grows by ~100 MB per simulated us at the 1.5 GHz core clock.
  initial if (!$test$plusargs("NO_VCD")) begin
    $dumpfile("cpu_tb_top.vcd");
    $dumpvars(0, cpu_tb_top);
  end

  initial begin
    uvm_resource_db#(virtual bedrock_if)::set("uvm_test_top.env.bedrock_agt.bedrock_drv", "vif", bedrock_vif);
    uvm_resource_db#(virtual bedrock_if)::set("uvm_test_top.env.bedrock_agt.bedrock_mon", "vif", bedrock_vif);
    run_test();
  end

endmodule
*/


`include "bp_common_defines.svh"
`include "bp_me_defines.svh"

// BlackParrot configuration: two cores only, 9 = e_bp_multicore_2_cfg
// (the single-core configurations are not supported by this testbench).
`ifndef BP_CFG_ID
  `define BP_CFG_ID 9
`endif

module cpu_tb_top
  import uvm_pkg::*;
  import bp_uvm_pkg::*;
  import bp_common_pkg::*;
  import bp_me_pkg::*;
  #(
    parameter bp_params_e bp_params_p = bp_params_e'(`BP_CFG_ID)
    `declare_bp_proc_params(bp_params_p)
    `declare_bp_bedrock_if_widths(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p)
  )
  ();
  `include "uvm_macros.svh"

  `declare_bp_bedrock_if(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p);

  // SoC clock plan (all from CPU_PLL; the domains are treated as
  // asynchronous - the bridges cross them with async FIFOs):
  //   CLK_CPU  1.5 GHz : cores, L1/L2 caches, DMA port + DRAM model
  //   CLK_GIC  400 MHz : shared PLIC (AHB side, plic_ahb_clk_i)
  //   CLK_AXI  400 MHz : CPU -> AXI4 bridge AXI side + AXI agent
  // Half periods in ns (timescale 1ns/1ps); override with +define+, e.g.
  // +define+CLK_CPU_HALF_NS=5 for the old 100 MHz single clock.
`ifndef CLK_CPU_HALF_NS
  `define CLK_CPU_HALF_NS 0.333
`endif
`ifndef CLK_GIC_HALF_NS
  `define CLK_GIC_HALF_NS 1.25
`endif
`ifndef CLK_AXI_HALF_NS
  `define CLK_AXI_HALF_NS 1.25
`endif
  bit clk;       // CLK_CPU
  bit plic_clk;  // CLK_GIC
  bit axi_clk;   // CLK_AXI
  wire reset;
  cpu_reset_if reset_vif();
  assign reset = reset_vif.reset;
  always #(`CLK_CPU_HALF_NS) clk      = ~clk;
  always #(`CLK_GIC_HALF_NS) plic_clk = ~plic_clk;
  always #(`CLK_AXI_HALF_NS) axi_clk  = ~axi_clk;
  // Match bp_top/test/tb/bp_tethered/wrapper.sv.  The processor uses a
  // slower real-time clock for the core-side control path; tying rt_clk_i to
  // clk can make the first cache response arrive before its credit is posted.
  logic rt_clk;
  bsg_counter_clock_downsample
    #(.width_p(3))
  rt_clk_gen
   (.clk_i(clk)
    ,.reset_i(!reset)
    ,.val_i('1)
    ,.clk_r_o(rt_clk)
    );
  // two flattened-field TB interfaces (unchanged from before)
  bedrock_if #(.ADDR_WIDTH(64), .DATA_WIDTH(64)) incoming_vif (.clk(clk), .reset(reset));
  bedrock_if #(.ADDR_WIDTH(64), .DATA_WIDTH(64)) outgoing_vif (.clk(clk), .reset(reset));

  // AXI bridge interface driven by cpu_top and serviced by the AXI agent.
  cpu_AXI_if #(
    .ID_WIDTH(`CPU_AXI_ID_WIDTH),
    .ADDR_WIDTH(`CPU_AXI_ADDR_WIDTH),
    .DATA_WIDTH(`CPU_AXI_DATA_WIDTH)
  ) cpu_axi_vif (.axi_clk_i(axi_clk));
  assign cpu_axi_vif.axi_reset_i = reset;

  // struct wires that sit directly on the DUT's real ports
  bp_bedrock_mem_fwd_header_s mem_fwd_header_li, mem_fwd_header_lo;
  bp_bedrock_mem_rev_header_s mem_rev_header_li, mem_rev_header_lo;

  // The real BlackParrot testbench configures and releases the processor
  // through bp_nonsynth_cfg_loader before the host starts the NBF stream.
  bp_bedrock_mem_fwd_header_s cfg_mem_fwd_header;
  logic [bedrock_fill_width_p-1:0] cfg_mem_fwd_data;
  logic cfg_mem_fwd_v, cfg_mem_fwd_ready, cfg_done;
  logic [mem_rev_header_width_lp-1:0] cfg_mem_rev_header;
  logic [bedrock_fill_width_p-1:0] cfg_mem_rev_data;
  logic cfg_mem_rev_v, cfg_mem_rev_ready;

  bp_bedrock_mem_fwd_header_s mem_fwd_header_to_dut;
  logic [bedrock_fill_width_p-1:0] mem_fwd_data_to_dut;
  logic mem_fwd_v_to_dut, mem_fwd_ready_from_dut;
  logic mem_rev_ready_to_dut;

  wire [lce_id_width_p-1:0] host_lce_id =
    num_core_p*2 + num_cacc_p + num_l2e_p + num_sacc_p + num_io_p;
  wire [did_width_p-1:0] proc_did = 1;
  wire [did_width_p-1:0] host_did = '1;

  // Real DMA channels.  These replace the previous tie-offs so the DUT can
  // fetch and write back cache lines through the behavioral DRAM model.
  `declare_bsg_cache_dma_pkt_s(daddr_width_p, l2_block_size_in_words_p);
  bsg_cache_dma_pkt_s [num_cce_p-1:0][l2_dmas_p-1:0] dma_pkt;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_pkt_v, dma_pkt_yumi;
  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0] dma_data_to_dut;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_data_v_to_dut;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_data_ready_from_dut;
  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0] dma_data_from_dut;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_data_v_from_dut, dma_data_yumi;
  logic [num_cce_p-1:0][l2_dmas_p-1:0][daddr_width_p-1:0] dma_log_last_addr;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_log_last_write, dma_log_pkt_seen;
  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0] dma_log_last_read_data;
  logic [num_cce_p-1:0][l2_dmas_p-1:0][l2_fill_width_p-1:0] dma_log_last_write_data;
  logic [num_cce_p-1:0][l2_dmas_p-1:0] dma_log_read_data_seen, dma_log_write_data_seen;
  logic host_mem_write;
  bp_uvm_name_warning_catcher name_warning_catcher;

`ifdef BP_DV_020_LOG
  // BP-DV-020 activity evidence: ten conflict lines are exercised, then
  // replacement must cause additional refills and at least one writeback.
  localparam logic [daddr_width_p-1:0] BP020_CONFLICT_BASE = 64'h8001_0000;
  localparam logic [daddr_width_p-1:0] BP020_CONFLICT_LAST = 64'h8003_4000;
  int unsigned bp020_conflict_read_count;
  int unsigned bp020_conflict_write_count;
  bit bp020_activity_checked;
`endif

  assign mem_fwd_header_li.msg_type = incoming_vif.mem_fwd_msg_type;
  assign mem_fwd_header_li.addr     = incoming_vif.mem_fwd_addr;
  assign mem_fwd_header_li.size     = bp_bedrock_msg_size_e'(incoming_vif.mem_fwd_size);

  // Configuration traffic has priority until the loader releases the core.
  // The UVM driver is held off during this phase, so its first NBF transfer
  // is not lost and no two sources drive the DUT input simultaneously.
  assign mem_fwd_header_to_dut = cfg_done ? mem_fwd_header_li : cfg_mem_fwd_header;
  assign mem_fwd_data_to_dut   = cfg_done ? incoming_vif.mem_fwd_data : cfg_mem_fwd_data;
  assign mem_fwd_v_to_dut      = cfg_done ? incoming_vif.mem_fwd_v : cfg_mem_fwd_v;
  assign incoming_vif.mem_fwd_ready_and = cfg_done && mem_fwd_ready_from_dut;
  assign cfg_mem_fwd_ready = !cfg_done && mem_fwd_ready_from_dut;

  assign mem_rev_ready_to_dut = cfg_done
                              ? incoming_vif.mem_rev_ready_and
                              : cfg_mem_rev_ready;

  // XMR simulation hook: cpu_top keeps these bp_processor ports tied off in RTL.
  // The testbench overrides only the configuration path for the NBF loader.
  assign mem_fwd_ready_from_dut = dut.u_bp.mem_fwd_ready_and_o;
  assign cfg_mem_rev_header     = dut.u_bp.mem_rev_header_o;
  assign cfg_mem_rev_data       = dut.u_bp.mem_rev_data_o;
  assign cfg_mem_rev_v          = dut.u_bp.mem_rev_v_o;

  assign outgoing_vif.mem_fwd_msg_type = mem_fwd_header_lo.msg_type;
  assign outgoing_vif.mem_fwd_addr     = mem_fwd_header_lo.addr;
  assign outgoing_vif.mem_fwd_size     = mem_fwd_header_lo.size;

  // Mirror accepted boot-image writes into the testbench DRAM model. The
  // processor still receives these writes normally; this is only a memory
  // initialization sideband for the TB DMA model.
  assign host_mem_write = incoming_vif.mem_fwd_v
                       && incoming_vif.mem_fwd_ready_and
                       && (incoming_vif.mem_fwd_msg_type == E_MEM_WR);

  bp_nonsynth_cfg_loader
    #(.bp_params_p(bp_params_p), .ucode_str_p("ucode_mem"))
  cfg_loader
   ( .clk_i(clk), .reset_i(~reset)
   , .lce_id_i(host_lce_id), .did_i(host_did)
   , .mem_fwd_header_o(cfg_mem_fwd_header)
   , .mem_fwd_data_o(cfg_mem_fwd_data)
   , .mem_fwd_v_o(cfg_mem_fwd_v)
   , .mem_fwd_ready_and_i(cfg_mem_fwd_ready)
   , .mem_rev_header_i(cfg_mem_rev_header)
   , .mem_rev_data_i(cfg_mem_rev_data)
   , .mem_rev_v_i(cfg_mem_rev_v)
   , .mem_rev_ready_and_o(cfg_mem_rev_ready)
   , .done_o(cfg_done)
   );


  // ---- PLIC interrupt sources ----
  // plic_src_i is driven by the PLIC testbench's interrupt agent
  // (VERIF/plic_verif/plic_tb/agent/irq_agent, used unchanged). Its driver
  // and monitor find this interface as "irq_vif" in uvm_resource_db. With no
  // interrupt agent in the test (every test except BP-DV-058) src stays 0.
  wire plic_irq_rstn = dut.u_bp.m.multicore.shared_plic.ahb_rstn;
  plic_irq_if #(.SOURCES(64), .TARGETS(4)) plic_irq_vif (.clk(plic_clk), .rst_n(plic_irq_rstn));
  initial plic_irq_vif.src = '0;
  assign plic_irq_vif.irq = dut.u_bp.m.multicore.plic_irq_lo;
  initial uvm_resource_db#(virtual plic_irq_if #(64, 4))::set("*", "irq_vif", plic_irq_vif);

  // ---- cpu_top instantiation ----
  cpu_top #(
    .bp_params_p(bp_params_p),
    .ID_WIDTH(`CPU_AXI_ID_WIDTH),
    .AXI_DATA_WIDTH(`CPU_AXI_DATA_WIDTH)
  ) dut
   ( .clk_i(clk), .rt_clk_i(rt_clk), .reset_i(reset)
   // Shared PLIC. The AHB side runs on CLK_GIC; interrupt sources come
   // from plic_irq_vif (PLIC interrupt agent).
   , .plic_ahb_clk_i(plic_clk), .plic_src_i(plic_irq_vif.src)
   , .my_did_i(proc_did), .host_did_i(host_did)
   , .axi_clk_i(axi_clk), .axi_reset_i(reset)
   , .m_axi_awid(cpu_axi_vif.m_axi_awid), .m_axi_awaddr(cpu_axi_vif.m_axi_awaddr)
   , .m_axi_awlen(cpu_axi_vif.m_axi_awlen), .m_axi_awsize(cpu_axi_vif.m_axi_awsize)
   , .m_axi_awburst(cpu_axi_vif.m_axi_awburst), .m_axi_awlock(cpu_axi_vif.m_axi_awlock)
   , .m_axi_awcache(cpu_axi_vif.m_axi_awcache), .m_axi_awprot(cpu_axi_vif.m_axi_awprot)
   , .m_axi_awqos(cpu_axi_vif.m_axi_awqos), .m_axi_awvalid(cpu_axi_vif.m_axi_awvalid)
   , .m_axi_awready(cpu_axi_vif.m_axi_awready), .m_axi_wdata(cpu_axi_vif.m_axi_wdata)
   , .m_axi_wstrb(cpu_axi_vif.m_axi_wstrb), .m_axi_wlast(cpu_axi_vif.m_axi_wlast)
   , .m_axi_wvalid(cpu_axi_vif.m_axi_wvalid), .m_axi_wready(cpu_axi_vif.m_axi_wready)
   , .m_axi_bid(cpu_axi_vif.m_axi_bid), .m_axi_bresp(cpu_axi_vif.m_axi_bresp)
   , .m_axi_bvalid(cpu_axi_vif.m_axi_bvalid), .m_axi_bready(cpu_axi_vif.m_axi_bready)
   , .m_axi_arid(cpu_axi_vif.m_axi_arid), .m_axi_araddr(cpu_axi_vif.m_axi_araddr)
   , .m_axi_arlen(cpu_axi_vif.m_axi_arlen), .m_axi_arsize(cpu_axi_vif.m_axi_arsize)
   , .m_axi_arburst(cpu_axi_vif.m_axi_arburst), .m_axi_arlock(cpu_axi_vif.m_axi_arlock)
   , .m_axi_arcache(cpu_axi_vif.m_axi_arcache), .m_axi_arprot(cpu_axi_vif.m_axi_arprot)
   , .m_axi_arqos(cpu_axi_vif.m_axi_arqos), .m_axi_arvalid(cpu_axi_vif.m_axi_arvalid)
   , .m_axi_arready(cpu_axi_vif.m_axi_arready), .m_axi_rid(cpu_axi_vif.m_axi_rid)
   , .m_axi_rdata(cpu_axi_vif.m_axi_rdata), .m_axi_rresp(cpu_axi_vif.m_axi_rresp)
   , .m_axi_rlast(cpu_axi_vif.m_axi_rlast), .m_axi_rvalid(cpu_axi_vif.m_axi_rvalid)
   , .m_axi_rready(cpu_axi_vif.m_axi_rready)
   , .dma_pkt_o(dma_pkt), .dma_pkt_v_o(dma_pkt_v), .dma_pkt_ready_and_i(dma_pkt_yumi)
   , .dma_data_i(dma_data_to_dut), .dma_data_v_i(dma_data_v_to_dut), .dma_data_ready_and_o(dma_data_ready_from_dut)
   , .dma_data_o(dma_data_from_dut), .dma_data_v_o(dma_data_v_from_dut), .dma_data_ready_and_i(dma_data_yumi)
   );

  bp_nonsynth_dram
   #(.num_dma_p(num_cce_p*l2_dmas_p)
     ,.dma_addr_width_p(daddr_width_p)
     ,.dma_data_width_p(l2_fill_width_p)
     ,.dma_burst_len_p(l2_block_size_in_fill_p)
     ,.dma_mask_width_p(l2_block_size_in_words_p)
     ) dram
    (.clk_i(clk)
     ,.reset_i(~reset)
     ,.dma_pkt_i(dma_pkt)
     ,.dma_pkt_v_i(dma_pkt_v)
     ,.dma_pkt_yumi_o(dma_pkt_yumi)
     ,.dma_data_o(dma_data_to_dut)
     ,.dma_data_v_o(dma_data_v_to_dut)
     ,.dma_data_ready_and_i(dma_data_ready_from_dut)
     ,.dma_data_i(dma_data_from_dut)
     ,.dma_data_v_i(dma_data_v_from_dut)
     ,.dma_data_yumi_o(dma_data_yumi)
     ,.host_mem_write_i(host_mem_write)
     ,.host_mem_addr_i(incoming_vif.mem_fwd_addr)
     ,.host_mem_data_i(incoming_vif.mem_fwd_data)
     );

  // Observe only the processor-to-DRAM DMA interface (L2 <-> bp_nonsynth_dram),
  // in every test. These are accepted external-memory requests; cache hits do
  // not create a DRAM request, and a CPU store may appear here later as a
  // cache-line writeback (or after a CBO.FLUSH). Lines:
  //   CPU DRAM READ/WRITE request cce=<n> dma=<n> addr=<line> time=<t>
  //   CPU DRAM READ/WRITE data    cce=<n> dma=<n> data=<beat> time=<t>
  // BP-DV-020 additionally counts conflict-range traffic (BP_DV_020_LOG).
  always @(posedge clk) begin : dram_dma_interface_log
    if (!reset) begin
      dma_log_pkt_seen       <= '0;
      dma_log_read_data_seen <= '0;
      dma_log_write_data_seen <= '0;
      dma_log_last_addr      <= '0;
      dma_log_last_write     <= '0;
      dma_log_last_read_data <= '0;
      dma_log_last_write_data <= '0;
`ifdef BP_DV_020_LOG
      bp020_conflict_read_count <= 0;
      bp020_conflict_write_count <= 0;
      bp020_activity_checked <= 1'b0;
`endif
    end
    else begin
      for (int cce = 0; cce < num_cce_p; cce++) begin
        for (int dma = 0; dma < l2_dmas_p; dma++) begin
`ifdef BP_DV_020_LOG
          if (dma_pkt_v[cce][dma] && dma_pkt_yumi[cce][dma]
              && (dma_pkt[cce][dma].addr >= BP020_CONFLICT_BASE)
              && (dma_pkt[cce][dma].addr <= BP020_CONFLICT_LAST)) begin
            if (dma_pkt[cce][dma].write_not_read)
              bp020_conflict_write_count++;
            else
              bp020_conflict_read_count++;
          end
`endif

          // Print a request only when its address or direction changes from
          // the last accepted request on this DMA channel.

          if (dma_pkt_v[cce][dma] && dma_pkt_yumi[cce][dma]
              && (!dma_log_pkt_seen[cce][dma]
                  || dma_pkt[cce][dma].addr !== dma_log_last_addr[cce][dma]
                  || dma_pkt[cce][dma].write_not_read !== dma_log_last_write[cce][dma])) begin
            if (dma_pkt[cce][dma].write_not_read)
              $display("CPU DRAM WRITE request cce=%0d dma=%0d addr=%h time=%0t",
                       cce, dma, dma_pkt[cce][dma].addr, $time);
            else
              $display("CPU DRAM READ request cce=%0d dma=%0d addr=%h time=%0t",
                       cce, dma, dma_pkt[cce][dma].addr, $time);

            dma_log_last_addr[cce][dma]  <= dma_pkt[cce][dma].addr;
            dma_log_last_write[cce][dma] <= dma_pkt[cce][dma].write_not_read;
            dma_log_pkt_seen[cce][dma]   <= 1'b1;
          end

          // DMA payload is a separate channel. Suppress repeated identical
          // data beats; print the first accepted beat and each changed value.
          if (dma_data_v_to_dut[cce][dma] && dma_data_ready_from_dut[cce][dma]
              && (!dma_log_read_data_seen[cce][dma]
                  || dma_data_to_dut[cce][dma] !== dma_log_last_read_data[cce][dma])) begin
            $display("CPU DRAM READ data cce=%0d dma=%0d data=%h time=%0t",
                     cce, dma, dma_data_to_dut[cce][dma], $time);
            dma_log_last_read_data[cce][dma] <= dma_data_to_dut[cce][dma];
            dma_log_read_data_seen[cce][dma] <= 1'b1;
          end

          if (dma_data_v_from_dut[cce][dma] && dma_data_yumi[cce][dma]
              && (!dma_log_write_data_seen[cce][dma]
                  || dma_data_from_dut[cce][dma] !== dma_log_last_write_data[cce][dma])) begin
            $display("CPU DRAM WRITE data cce=%0d dma=%0d data=%h time=%0t",
                     cce, dma, dma_data_from_dut[cce][dma], $time);
            dma_log_last_write_data[cce][dma] <= dma_data_from_dut[cce][dma];
            dma_log_write_data_seen[cce][dma] <= 1'b1;
          end
        end
      end

`ifdef BP_DV_020_LOG
      // The final tohost write is the completion point for the C test. Check
      // the actual accepted DMA traffic before allowing BP-DV-020 to pass.
      if (!bp020_activity_checked
          && outgoing_vif.mem_fwd_v
          && outgoing_vif.mem_fwd_ready_and
          && outgoing_vif.mem_fwd_addr == 64'h0010_2000) begin
        bp020_activity_checked = 1'b1;
        if ((bp020_conflict_read_count <= 10)
            || (bp020_conflict_write_count == 0)) begin
          $fatal(1,
                 "BP-DV-020 ACTIVITY CHECK FAILED: conflict_reads=%0d conflict_writebacks=%0d",
                 bp020_conflict_read_count, bp020_conflict_write_count);
        end
        else begin
          $display("BP-DV-020 ACTIVITY CHECK PASSED: conflict_reads=%0d conflict_writebacks=%0d",
                   bp020_conflict_read_count, bp020_conflict_write_count);
        end
      end
`endif
    end
  end

  // --------------------------------------------------------------------
  // AXI read data log: what the AXI slave returned vs what the bridge
  // handed to the CPU.
  //
  //   AXI R    : R-channel beat at the AXI master port, plus the transfer's
  //              bytes at lane (araddr % 8) for MMIO (<= 8 B: RDATA[63:0],
  //              the bridge's MMIO lane convention) or (araddr % 16) for
  //              full-width beats.
  //   AXI->CPU : BedRock read response from bp_bedrock_axi4_bridge into
  //              bp_processor, plus the bytes the core takes from it -
  //              data[63:0] starting at byte (addr % 8).
  //
  // The two "bytes" fields must be equal for a correct read; the CPU line
  // prints MATCH/MISMATCH against the preceding AXI R beat. The bridge
  // allows one outstanding read, so each response pairs with the last beat.
  // --------------------------------------------------------------------
  localparam int AXI_LOG_BUS_BYTES = `CPU_AXI_DATA_WIDTH / 8;

  function automatic int unsigned axi_log_lane(input logic [`CPU_AXI_ADDR_WIDTH-1:0] addr,
                                               input int unsigned nbytes);
    return (nbytes < AXI_LOG_BUS_BYTES) ? (addr % 8) : (addr % AXI_LOG_BUS_BYTES);
  endfunction

  function automatic logic [63:0] axi_log_bytes(
      input logic [`CPU_AXI_DATA_WIDTH-1:0] data,
      input int unsigned                    offset,
      input int unsigned                    nbytes);
    logic [`CPU_AXI_DATA_WIDTH-1:0] shifted;
    shifted = data >> (8 * offset);
    return (nbytes >= 8) ? shifted[63:0]
                         : shifted[63:0] & ((64'd1 << (8 * nbytes)) - 64'd1);
  endfunction

  logic [`CPU_AXI_ADDR_WIDTH-1:0] axi_log_ar_addr;
  int unsigned                    axi_log_ar_bytes;
  logic [63:0]                    axi_log_r_bytes;
  bit                             axi_log_r_seen;

  always @(posedge axi_clk) begin : axi_read_data_log
    // reset is active-low: 1 means the DUT is running.
    if (!reset) begin
      axi_log_r_seen = 1'b0;
    end
    else begin
      if (cpu_axi_vif.m_axi_arvalid && cpu_axi_vif.m_axi_arready) begin
        axi_log_ar_addr  = cpu_axi_vif.m_axi_araddr;
        axi_log_ar_bytes = 1 << cpu_axi_vif.m_axi_arsize;
      end

      if (cpu_axi_vif.m_axi_rvalid && cpu_axi_vif.m_axi_rready) begin
        axi_log_r_bytes = axi_log_bytes(cpu_axi_vif.m_axi_rdata,
                                        axi_log_lane(axi_log_ar_addr, axi_log_ar_bytes),
                                        axi_log_ar_bytes);
        axi_log_r_seen  = 1'b1;
        $display("AXI R    addr=%h size=%0dB lane=%0d rdata=%h bytes=%h time=%0t",
                 axi_log_ar_addr, axi_log_ar_bytes,
                 axi_log_lane(axi_log_ar_addr, axi_log_ar_bytes),
                 cpu_axi_vif.m_axi_rdata, axi_log_r_bytes, $time);
      end
    end
  end

  // AXI->CPU: the bridge's BedRock response, in the core clock domain.
  always @(posedge clk) begin : axi_to_cpu_log
    bp_bedrock_mem_rev_header_s cpu_rev_hdr;
    int unsigned cpu_bytes;
    logic [63:0] cpu_view;
    string       verdict;

    if (reset) begin
      cpu_rev_hdr = dut.rev_hdr;
      if (dut.rev_v && dut.rev_ready
          && (cpu_rev_hdr.msg_type.rev == e_bedrock_mem_rd)) begin
        cpu_bytes = 1 << cpu_rev_hdr.size;
        cpu_view  = axi_log_bytes(dut.rev_data, cpu_rev_hdr.addr % 8, cpu_bytes);
        if (!axi_log_r_seen)
          verdict = "(no AXI R beat seen)";
        else if (cpu_view == axi_log_r_bytes)
          verdict = "MATCH";
        else
          verdict = "MISMATCH";
        $display("AXI->CPU addr=%h size=%0dB data=%h bytes=%h %s time=%0t",
                 cpu_rev_hdr.addr, cpu_bytes, dut.rev_data, cpu_view,
                 verdict, $time);
        axi_log_r_seen = 1'b0;
      end
    end
  end

  // --------------------------------------------------------------------
  // CPU write data log: the BedRock write request bp_processor hands to
  // bp_bedrock_axi4_bridge (before any lane steering in the bridge). For
  // each uncached write it shows where the CPU placed the store data in the
  // 128-bit flit and classifies the upper half:
  //   upper=0      : data only in [63:0], [127:64] all zero
  //   upper=copy   : [127:64] == [63:0] (data copied into both halves)
  //   upper=OTHER  : [127:64] holds something else
  // The AXI W beat that follows is logged by the AXI monitor ("AXI WRITE").
  // --------------------------------------------------------------------
  always @(posedge clk) begin : cpu_write_data_log
    bp_bedrock_mem_fwd_header_s cpu_fwd_hdr;
    logic [63:0] wr_lo, wr_hi;
    string       wr_class;

    if (reset) begin
      cpu_fwd_hdr = dut.fwd_hdr;
      if (dut.fwd_v && dut.fwd_ready
          && (cpu_fwd_hdr.msg_type.fwd == e_bedrock_mem_wr)) begin
        wr_lo = dut.fwd_data[63:0];
        wr_hi = dut.fwd_data[127:64];
        if (wr_hi == '0)
          wr_class = "upper=0";
        else if (wr_hi == wr_lo)
          wr_class = "upper=copy";
        else
          wr_class = "upper=OTHER";
        $display("CPU->AXI addr=%h size=%0dB data=%h lower=%h upper=%h %s time=%0t",
                 cpu_fwd_hdr.addr, 1 << cpu_fwd_hdr.size, dut.fwd_data,
                 wr_lo, wr_hi, wr_class, $time);
      end
    end
  end

  // --------------------------------------------------------------------
  // PLIC AHB log: every AHB transfer between bp_bedrock_ahb3lite_bridge and
  // ahb3lite_plic_top in the shared PLIC (bp_multicore.shared_plic).
  //   PLIC AHB WRITE/READ haddr=<offset from 0x0050_0000> reg=<name>
  //   data=<HWDATA or HRDATA> hresp=<0 OKAY / 1 ERROR>
  // Register names follow the 64-source / 4-target / 8-priority map (see
  // c/plic_reg_access.c). Address phase is captured, data is logged when
  // the data phase completes (HREADYOUT = 1).
  // --------------------------------------------------------------------
  function automatic string plic_reg_name(input logic [31:0] off);
    case (off[31:2])
      30'h00: return "CONFIG0";
      30'h01: return "CONFIG1";
      30'h02, 30'h03: return $sformatf("EL%0d", off[2]);
      default: ;
    endcase
    if (off >= 32'h10 && off < 32'h30) return $sformatf("PRIORITY%0d", (off - 32'h10) >> 2);
    if (off >= 32'h30 && off < 32'h50) return $sformatf("IE[t%0d][%0d]", (off - 32'h30) >> 3, off[2]);
    if (off >= 32'h50 && off < 32'h60) return $sformatf("THRESHOLD[t%0d]", (off - 32'h50) >> 2);
    if (off >= 32'h60 && off < 32'h70) return $sformatf("ID[t%0d]", (off - 32'h60) >> 2);
    return "UNMAPPED";
  endfunction

  logic        plic_ahb_dp_v;
  logic [31:0] plic_ahb_dp_addr;
  logic        plic_ahb_dp_write;
  logic [2:0]  plic_ahb_dp_size;
  logic [31:0] plic_ahb_last_rdata;

  always @(posedge plic_clk) begin : plic_ahb_log
    if (!dut.u_bp.m.multicore.shared_plic.ahb_rstn) begin
      plic_ahb_dp_v = 1'b0;
    end
    else begin
      // Data phase of the previous transfer
      if (plic_ahb_dp_v && dut.u_bp.m.multicore.shared_plic.ahb_hreadyout) begin
        $display("PLIC AHB %s haddr=%h reg=%s size=%0dB data=%h hresp=%0d time=%0t",
                 plic_ahb_dp_write ? "WRITE" : "READ ",
                 plic_ahb_dp_addr, plic_reg_name(plic_ahb_dp_addr),
                 1 << plic_ahb_dp_size,
                 plic_ahb_dp_write ? dut.u_bp.m.multicore.shared_plic.ahb_hwdata
                                   : dut.u_bp.m.multicore.shared_plic.ahb_hrdata,
                 dut.u_bp.m.multicore.shared_plic.ahb_hresp, $time);
        if (!plic_ahb_dp_write)
          plic_ahb_last_rdata = dut.u_bp.m.multicore.shared_plic.ahb_hrdata;
        plic_ahb_dp_v = 1'b0;
      end
      // Address phase of a new transfer
      if (dut.u_bp.m.multicore.shared_plic.ahb_hsel
          && dut.u_bp.m.multicore.shared_plic.ahb_htrans[1]
          && dut.u_bp.m.multicore.shared_plic.ahb_hreadyout) begin
        plic_ahb_dp_v     = 1'b1;
        plic_ahb_dp_addr  = dut.u_bp.m.multicore.shared_plic.ahb_haddr_full[31:0];
        plic_ahb_dp_write = dut.u_bp.m.multicore.shared_plic.ahb_hwrite;
        plic_ahb_dp_size  = dut.u_bp.m.multicore.shared_plic.ahb_hsize;
      end
    end
  end

  // --------------------------------------------------------------------
  // CPU <-> PLIC message log, on each core's port of bp_plic_shared_top.
  //
  // CPU->PLIC core<n> WRITE/READ: request from the core (core<n>_fwd_*).
  //   fwd_data[63:0]: [63:0] of the request; store_val: the bytes at lane
  //   addr % 8 (what the CPU stored).
  // PLIC->CPU core<n> READ : read response (core<n>_rev_*). The core takes a
  //   load of N bytes from lane addr % 8 of rev_data[63:0] (cpu_gets);
  //   MATCH if that equals what the PLIC returned on AHB (ahb_hrdata).
  // PLIC->CPU core<n> WR-ACK: write acknowledgement.
  // --------------------------------------------------------------------
  function automatic logic [63:0] plic_lane_bytes(input logic [63:0] word,
                                                  input int unsigned lane,
                                                  input int unsigned nbytes);
    logic [63:0] mask;
    mask = (nbytes >= 8) ? '1 : ((64'd1 << (8 * nbytes)) - 64'd1);
    return (word >> (8 * lane)) & mask;
  endfunction

  task automatic plic_fwd_log(input int core,
                              input logic [mem_fwd_header_width_lp-1:0] hdr_bits,
                              input logic [bedrock_fill_width_p-1:0]    data);
    bp_bedrock_mem_fwd_header_s hdr;
    int unsigned nbytes, lane;

    hdr    = hdr_bits;
    nbytes = 1 << hdr.size;
    lane   = hdr.addr % 8;
    if (hdr.msg_type.fwd == e_bedrock_mem_wr)
      $display("CPU->PLIC core%0d WRITE addr=%h reg=%s size=%0dB lane=%0d fwd_data[63:0]=%h store_val=%h time=%0t",
               core, hdr.addr, plic_reg_name(hdr.addr - 32'h0050_0000), nbytes, lane,
               data[63:0], plic_lane_bytes(data[63:0], lane, nbytes), $time);
    else
      $display("CPU->PLIC core%0d READ  addr=%h reg=%s size=%0dB lane=%0d time=%0t",
               core, hdr.addr, plic_reg_name(hdr.addr - 32'h0050_0000), nbytes, lane, $time);
  endtask

  task automatic plic_rev_log(input int core,
                              input logic [mem_rev_header_width_lp-1:0] hdr_bits,
                              input logic [bedrock_fill_width_p-1:0]    data);
    bp_bedrock_mem_rev_header_s hdr;
    int unsigned nbytes, lane;
    logic [63:0] got, exp;

    hdr    = hdr_bits;
    nbytes = 1 << hdr.size;
    lane   = hdr.addr % 8;
    if (hdr.msg_type.rev != e_bedrock_mem_rd) begin
      $display("PLIC->CPU core%0d WR-ACK addr=%h reg=%s size=%0dB time=%0t",
               core, hdr.addr, plic_reg_name(hdr.addr - 32'h0050_0000), nbytes, $time);
      return;
    end
    got = plic_lane_bytes(data[63:0], lane, nbytes);
    exp = plic_lane_bytes({32'h0, plic_ahb_last_rdata}, 0, nbytes);
    $display("PLIC->CPU core%0d READ  addr=%h reg=%s size=%0dB lane=%0d rev_data[63:0]=%h cpu_gets=%h ahb_hrdata=%h %s time=%0t",
             core, hdr.addr, plic_reg_name(hdr.addr - 32'h0050_0000), nbytes, lane,
             data[63:0], got, plic_ahb_last_rdata,
             (got == exp) ? "MATCH" : "MISMATCH", $time);
  endtask

  always @(posedge clk) begin : cpu_plic_msg_log
    if (dut.u_bp.m.multicore.shared_plic.ahb_rstn) begin
      if (dut.u_bp.m.multicore.shared_plic.core0_fwd_v_i
          && dut.u_bp.m.multicore.shared_plic.core0_fwd_ready_and_o)
        plic_fwd_log(0, dut.u_bp.m.multicore.shared_plic.core0_fwd_header_i,
                        dut.u_bp.m.multicore.shared_plic.core0_fwd_data_i);
      if (dut.u_bp.m.multicore.shared_plic.core1_fwd_v_i
          && dut.u_bp.m.multicore.shared_plic.core1_fwd_ready_and_o)
        plic_fwd_log(1, dut.u_bp.m.multicore.shared_plic.core1_fwd_header_i,
                        dut.u_bp.m.multicore.shared_plic.core1_fwd_data_i);
      if (dut.u_bp.m.multicore.shared_plic.core0_rev_v_o
          && dut.u_bp.m.multicore.shared_plic.core0_rev_ready_and_i)
        plic_rev_log(0, dut.u_bp.m.multicore.shared_plic.core0_rev_header_o,
                        dut.u_bp.m.multicore.shared_plic.core0_rev_data_o);
      if (dut.u_bp.m.multicore.shared_plic.core1_rev_v_o
          && dut.u_bp.m.multicore.shared_plic.core1_rev_ready_and_i)
        plic_rev_log(1, dut.u_bp.m.multicore.shared_plic.core1_rev_header_o,
                        dut.u_bp.m.multicore.shared_plic.core1_rev_data_o);
    end
  end

  // --------------------------------------------------------------------
  // PLIC interrupt lines: logged whenever they change.
  //   PLIC SRC: plic_src_i[63:0] into the PLIC (external sources)
  //   PLIC IRQ: plic_irq_o[3:0] out of the PLIC (t0/t1 = core0 M/S,
  //             t2/t3 = core1 M/S) and the synchronized M/S external
  //             interrupt each core receives
  // --------------------------------------------------------------------
  logic [63:0] plic_src_q;
  logic [3:0]  plic_irq_q;
  logic [1:0]  plic_meip_q, plic_seip_q;

  always @(posedge clk) begin : plic_irq_log
    if (!dut.u_bp.m.multicore.shared_plic.ahb_rstn) begin
      plic_src_q  = '0;
      plic_irq_q  = '0;
      plic_meip_q = '0;
      plic_seip_q = '0;
    end
    else begin
      if (dut.u_bp.m.multicore.plic_src_i !== plic_src_q) begin
        $display("PLIC SRC plic_src_i=%h (was %h) time=%0t",
                 dut.u_bp.m.multicore.plic_src_i, plic_src_q, $time);
        plic_src_q = dut.u_bp.m.multicore.plic_src_i;
      end
      if ((dut.u_bp.m.multicore.plic_irq_lo !== plic_irq_q)
          || (dut.u_bp.m.multicore.plic_m_external_irq_li !== plic_meip_q)
          || (dut.u_bp.m.multicore.plic_s_external_irq_li !== plic_seip_q)) begin
        plic_irq_q  = dut.u_bp.m.multicore.plic_irq_lo;
        plic_meip_q = dut.u_bp.m.multicore.plic_m_external_irq_li;
        plic_seip_q = dut.u_bp.m.multicore.plic_s_external_irq_li;
        $display("PLIC IRQ plic_irq_o=%b (t3..t0) core0 M=%0b S=%0b core1 M=%0b S=%0b time=%0t",
                 plic_irq_q, plic_meip_q[0], plic_seip_q[0],
                 plic_meip_q[1], plic_seip_q[1], $time);
      end
    end
  end

  // --------------------------------------------------------------------
  // Bridge FIFO-full monitor: counts how often (events = rising edges) and
  // how long (core-clock cycles) each bridge FIFO is full, logs every
  // rising edge ("FIFO FULL ...") and publishes the event counts to the
  // test through uvm_config_db ("fifo_full_<name>", on uvm_test_top).
  //   axi_req  : CPU -> AXI request FIFO   (bp_bedrock_axi4_bridge)
  //   axi_resp : AXI -> CPU response FIFO
  //   ahb_req  : CPU -> PLIC request FIFO  (bp_bedrock_ahb3lite_bridge)
  //   ahb_resp : PLIC -> CPU response FIFO
  // --------------------------------------------------------------------
  localparam int NUM_BRIDGE_FIFOS = 4;
  string       fifo_name   [NUM_BRIDGE_FIFOS] = '{"axi_req", "axi_resp", "ahb_req", "ahb_resp"};
  bit          fifo_full_q [NUM_BRIDGE_FIFOS];
  int unsigned fifo_full_events [NUM_BRIDGE_FIFOS];
  longint unsigned fifo_full_cycles [NUM_BRIDGE_FIFOS];

  always @(posedge clk) begin : bridge_fifo_full_monitor
    bit full_now [NUM_BRIDGE_FIFOS];
    full_now[0] = dut.u_bridge.req_fifo_full;
    full_now[1] = dut.u_bridge.resp_fifo_full;
    full_now[2] = dut.u_bp.m.multicore.shared_plic.plic_bridge.req_fifo_full;
    full_now[3] = dut.u_bp.m.multicore.shared_plic.plic_bridge.resp_fifo_full;
    if (reset) begin
      for (int i = 0; i < NUM_BRIDGE_FIFOS; i++) begin
        if (full_now[i]) begin
          fifo_full_cycles[i]++;
          if (!fifo_full_q[i]) begin
            fifo_full_events[i]++;
            uvm_config_db#(int unsigned)::set(null, "uvm_test_top",
                                              {"fifo_full_", fifo_name[i]},
                                              fifo_full_events[i]);
            $display("FIFO FULL %s event=%0d time=%0t",
                     fifo_name[i], fifo_full_events[i], $time);
          end
        end
        fifo_full_q[i] = full_now[i];
      end
    end
  end

  // --------------------------------------------------------------------
  // White-box response stall (BP-DV-045; off unless the test sets
  // "resp_stall_cycles" on uvm_test_top through uvm_config_db).
  // At the first AXI write to resp_stall_addr (default 0x3005_0000 region,
  // compared on addr[31:16]) bp_bedrock_axi4_bridge.mem_rev_v_o is forced
  // to 0 for resp_stall_cycles core cycles: the core sees no response and
  // the bridge does not pop its response FIFO (r_en = v && ready), so
  // responses accumulate while the bridge keeps serving queued requests.
  // Released afterwards; the queued responses then drain normally.
  // --------------------------------------------------------------------
  initial begin : resp_stall_injector
    int unsigned stall_cycles;
    int unsigned stall_region;
    stall_cycles = 0;
    stall_region = 32'h3005;
    #1;
    void'(uvm_config_db#(int unsigned)::get(null, "uvm_test_top", "resp_stall_cycles", stall_cycles));
    void'(uvm_config_db#(int unsigned)::get(null, "uvm_test_top", "resp_stall_region", stall_region));
    if (stall_cycles != 0) begin
      do @(posedge axi_clk);
      while (!(reset && cpu_axi_vif.m_axi_awvalid && cpu_axi_vif.m_axi_awready
               && (cpu_axi_vif.m_axi_awaddr[31:16] == stall_region[15:0])));
      $display("RESP STALL start: mem_rev_v_o forced 0 for %0d core cycles (axi_resp full events so far=%0d) time=%0t",
               stall_cycles, fifo_full_events[1], $time);
      force dut.u_bridge.mem_rev_v_o = 1'b0;
      repeat (stall_cycles) @(posedge clk);
      release dut.u_bridge.mem_rev_v_o;
      $display("RESP STALL end: released (axi_resp full events=%0d, full cycles=%0d) time=%0t",
               fifo_full_events[1], fifo_full_cycles[1], $time);
    end
  end

  // --------------------------------------------------------------------
  // CCE stall injector (BP-DV-055, white-box). Random short windows where
  // one CCE FSM resource looks busy, so the FSM's wait paths run:
  //   bit 0  pending_busy          pending-bit write port taken
  //   bit 1  lce_cmd_busy          LCE command port taken by a mem response
  //   bit 2  mem_credits_empty     no memory credits left
  //   bit 3  fsm_cmd_ready_then_li LCE command pump not ready (hangs at
  //          boot: the force also reaches the pump's internal handshake -
  //          not used by BP-DV-055)
  //   bit 4  fsm_fwd_ready_then_li memory forward pump not ready
  // Each is only ever forced to its "busy" value, which the FSM must
  // already tolerate - it delays the FSM but cannot change what it does.
  // Config (uvm_config_db on uvm_test_top): cce_stall_pct (chance per core
  // cycle a window starts, 0 = off), cce_stall_mask, cce_stall_max (window
  // length 1..max cycles).
  // --------------------------------------------------------------------
  int unsigned cce_stall_pct = 0;
  int unsigned cce_stall_mask = 'h1F;
  int unsigned cce_stall_max = 8;
  int unsigned cce_stall_windows [10];   // [cce*5 + bit]

  initial begin
    #1;
    void'(uvm_config_db#(int unsigned)::get(null, "uvm_test_top", "cce_stall_pct", cce_stall_pct));
    void'(uvm_config_db#(int unsigned)::get(null, "uvm_test_top", "cce_stall_mask", cce_stall_mask));
    void'(uvm_config_db#(int unsigned)::get(null, "uvm_test_top", "cce_stall_max", cce_stall_max));
    // Command-line overrides, e.g. +CCE_STALL_MASK=1 to stall one resource only
    void'($value$plusargs("CCE_STALL_PCT=%d", cce_stall_pct));
    void'($value$plusargs("CCE_STALL_MASK=%h", cce_stall_mask));
    void'($value$plusargs("CCE_STALL_MAX=%d", cce_stall_max));
    if (cce_stall_pct != 0) begin
      $display("CCE STALL injector enabled: pct=%0d mask=0x%0h max=%0d cycles",
               cce_stall_pct, cce_stall_mask, cce_stall_max);
      // Heartbeat: shows simulation time still advances during a long wait
      forever begin
        #(100us);
        $display("CCE STALL heartbeat time=%0t windows cce0=%0d/%0d/%0d/%0d/%0d cce1=%0d/%0d/%0d/%0d/%0d",
                 $time, cce_stall_windows[0], cce_stall_windows[1], cce_stall_windows[2],
                 cce_stall_windows[3], cce_stall_windows[4], cce_stall_windows[5],
                 cce_stall_windows[6], cce_stall_windows[7], cce_stall_windows[8],
                 cce_stall_windows[9]);
      end
    end
  end

`define CCE_PATH(X) dut.u_bp.m.multicore.cc.y[0].x[X].tile_node.tile.cce.t.cce
`define CCE_STALL(X, BIT, SIG, VAL)                                         \
  initial begin                                                             \
    int unsigned n;                                                         \
    #2;                                                                     \
    if (cce_stall_pct != 0 && cce_stall_mask[BIT]) begin                    \
      wait (`CCE_PATH(X).reset_i === 1'b1);                                 \
      wait (`CCE_PATH(X).reset_i === 1'b0);                                 \
      forever begin                                                         \
        @(posedge clk);                                                     \
        if ($urandom_range(99) < cce_stall_pct) begin                       \
          n = $urandom_range(cce_stall_max, 1);                             \
          force `CCE_PATH(X).SIG = VAL;                                     \
          cce_stall_windows[X*5+BIT]++;                                           \
          repeat (n) @(posedge clk);                                        \
          release `CCE_PATH(X).SIG;                                         \
          repeat ($urandom_range(cce_stall_max, 1)) @(posedge clk);         \
        end                                                                 \
      end                                                                   \
    end                                                                     \
  end

  `CCE_STALL(0, 0, pending_busy,          1'b1)
  `CCE_STALL(0, 1, lce_cmd_busy,          1'b1)
  `CCE_STALL(0, 2, mem_credits_empty,     1'b1)
  `CCE_STALL(0, 3, fsm_cmd_ready_then_li, 1'b0)
  `CCE_STALL(0, 4, fsm_fwd_ready_then_li, 1'b0)
  `CCE_STALL(1, 0, pending_busy,          1'b1)
  `CCE_STALL(1, 1, lce_cmd_busy,          1'b1)
  `CCE_STALL(1, 2, mem_credits_empty,     1'b1)
  `CCE_STALL(1, 3, fsm_cmd_ready_then_li, 1'b0)
  `CCE_STALL(1, 4, fsm_fwd_ready_then_li, 1'b0)
`undef CCE_STALL
`undef CCE_PATH

  // --------------------------------------------------------------------
  // Default-arm injector (BP-DV-057, white-box fault injection). Runs once,
  // when the test triggers the global uvm_event "default_inject_go" (after
  // the program has finished and the cores only spin in L1). For each FSM
  // with unused state encodings it forces one for a clock, releases, and
  // checks what the FSM does from it:
  //   imulh (bsg_imul_iterative, 3-bit state, 6 states): encoding 6 ->
  //         'default: next_state = IDLE' -> must be back in IDLE
  //   axi4_master rd_state (2-bit, 3 states): encoding 3 -> 'default:
  //         rd_state <= RD_IDLE' -> must be back in RD_IDLE (AXI clock)
  //   CCE 0 (bp_cce_fsm, 6-bit state, 29 states): encoding 63 -> 'default'
  //         keeps state_n = state_r, so the FSM must stay at 63; then
  //         e_error (28), a terminal state, must stay; then the saved
  //         state is forced back so the CCE keeps working
  // Defaults with no free encoding (axi4_master wr_state, round-robin
  // arbiter, FMA opcode case) cannot be reached in 2-state simulation and
  // are waived.
  // Result (0 = all as expected) in uvm_config_db "default_inject_result",
  // then "default_inject_done" is triggered:
  //   bit 0 imulh not idle before   bit 1 imulh did not return to IDLE
  //   bit 2 CCE left the illegal state   bit 3 CCE left e_error
  //   bit 4 CCE not restored
  //   bit 5 axi4_master read FSM not idle before   bit 6 not back to RD_IDLE
  // --------------------------------------------------------------------
// The forces below deliberately put values outside each FSM's enum.
/* verilator lint_off ENUMVALUE */
`define IMULH_PATH dut.u_bp.m.multicore.cc.y[0].x[0].tile_node.tile.core.core_lite.core_minimal.be.calculator.pipe_long.imulh
`define CCE0_PATH  dut.u_bp.m.multicore.cc.y[0].x[0].tile_node.tile.cce.t.cce
`define AXIM_PATH  dut.u_bridge.u_axi4_master
  initial begin : default_arm_injector
    uvm_event go, done;
    int unsigned result;
    logic [5:0] cce_saved;
    #1;
    go   = uvm_event_pool::get_global("default_inject_go");
    done = uvm_event_pool::get_global("default_inject_done");
    go.wait_trigger();
    result = 0;

    // 1. multiplier: unused encoding 6 -> default -> IDLE
    @(posedge clk);
    if (`IMULH_PATH.curr_state_r != 0) result |= 1 << 0;
    force `IMULH_PATH.curr_state_r = 3'd6;
    @(posedge clk);
    release `IMULH_PATH.curr_state_r;
    repeat (2) @(posedge clk);
    $display("DEFAULT INJECT imulh: forced state 6, now %0d (expect 0 = IDLE) time=%0t",
             `IMULH_PATH.curr_state_r, $time);
    if (`IMULH_PATH.curr_state_r != 0) result |= 1 << 1;

    // 1b. AXI master read FSM: unused encoding 3 -> default -> RD_IDLE
    @(posedge axi_clk);
    if (`AXIM_PATH.rd_state != 0) result |= 1 << 5;
    force `AXIM_PATH.rd_state = 2'd3;
    @(posedge axi_clk);
    release `AXIM_PATH.rd_state;
    repeat (2) @(posedge axi_clk);
    $display("DEFAULT INJECT axi4_master rd_state: forced 3, now %0d (expect 0 = RD_IDLE) time=%0t",
             `AXIM_PATH.rd_state, $time);
    if (`AXIM_PATH.rd_state != 0) result |= 1 << 6;

    // 2. CCE 0: unused encoding 63 -> default holds the state
    cce_saved = `CCE0_PATH.state_r;
    force `CCE0_PATH.state_r = 6'd63;
    @(posedge clk);
    release `CCE0_PATH.state_r;
    repeat (4) @(posedge clk);
    $display("DEFAULT INJECT cce0: saved state %0d, forced 63, now %0d (expect 63: default keeps state) time=%0t",
             cce_saved, `CCE0_PATH.state_r, $time);
    if (`CCE0_PATH.state_r != 6'd63) result |= 1 << 2;

    // 3. CCE 0: e_error (28) is terminal
    force `CCE0_PATH.state_r = 6'd28;
    @(posedge clk);
    release `CCE0_PATH.state_r;
    repeat (4) @(posedge clk);
    $display("DEFAULT INJECT cce0: forced e_error (28), now %0d (expect 28) time=%0t",
             `CCE0_PATH.state_r, $time);
    if (`CCE0_PATH.state_r != 6'd28) result |= 1 << 3;

    // 4. put the CCE back where it was
    force `CCE0_PATH.state_r = cce_saved;
    @(posedge clk);
    release `CCE0_PATH.state_r;
    repeat (4) @(posedge clk);
    $display("DEFAULT INJECT cce0: restored to %0d, now %0d time=%0t",
             cce_saved, `CCE0_PATH.state_r, $time);
    if (`CCE0_PATH.state_r != cce_saved) result |= 1 << 4;

    uvm_config_db#(int unsigned)::set(null, "*", "default_inject_result", result);
    done.trigger();
  end
`undef IMULH_PATH
`undef CCE0_PATH
`undef AXIM_PATH
/* verilator lint_on ENUMVALUE */

  final begin
    if (cce_stall_pct != 0)
      for (int x = 0; x < 2; x++)
        $display("CCE STALL summary cce%0d windows: pending_busy=%0d lce_cmd_busy=%0d mem_credits_empty=%0d cmd_ready=%0d fwd_ready=%0d",
                 x, cce_stall_windows[x*5+0], cce_stall_windows[x*5+1], cce_stall_windows[x*5+2],
                 cce_stall_windows[x*5+3], cce_stall_windows[x*5+4]);
  end

  final begin
    for (int i = 0; i < NUM_BRIDGE_FIFOS; i++)
      $display("FIFO FULL summary %-8s events=%0d cycles=%0d",
               fifo_name[i], fifo_full_events[i], fifo_full_cycles[i]);
  end

  // --------------------------------------------------------------------
  // AXI W log: each W beat with its strobe. "written" is what a byte-lane
  // slave stores (the WDATA bytes whose WSTRB bit is set, packed from the
  // lowest set lane); "expected" is the store data at the MMIO lane
  // (addr % 8 in [63:0]). STRB OK when WSTRB covers exactly those lanes,
  // STRB WRONG otherwise - the slave then writes the wrong bytes.
  // --------------------------------------------------------------------
  logic [`CPU_AXI_ADDR_WIDTH-1:0] axi_log_aw_addr;
  int unsigned                    axi_log_aw_bytes;

  always @(posedge axi_clk) begin : axi_write_strb_log
    logic [`CPU_AXI_DATA_WIDTH/8-1:0] exp_strb;
    logic [63:0] written, expected;
    int unsigned lane, n;

    if (reset) begin
      if (cpu_axi_vif.m_axi_awvalid && cpu_axi_vif.m_axi_awready) begin
        axi_log_aw_addr  = cpu_axi_vif.m_axi_awaddr;
        axi_log_aw_bytes = 1 << cpu_axi_vif.m_axi_awsize;
      end

      if (cpu_axi_vif.m_axi_wvalid && cpu_axi_vif.m_axi_wready) begin
        lane     = axi_log_lane(axi_log_aw_addr, axi_log_aw_bytes);
        expected = axi_log_bytes(cpu_axi_vif.m_axi_wdata, lane, axi_log_aw_bytes);
        exp_strb = (axi_log_aw_bytes >= AXI_LOG_BUS_BYTES)
                   ? '1 : (((1 << axi_log_aw_bytes) - 1) << lane);
        written  = '0;
        n        = 0;
        for (int i = 0; i < `CPU_AXI_DATA_WIDTH/8; i++)
          if (cpu_axi_vif.m_axi_wstrb[i] && (n < 8)) begin
            written[8*n +: 8] = cpu_axi_vif.m_axi_wdata[8*i +: 8];
            n++;
          end
        $display("AXI W    addr=%h size=%0dB wdata=%h wstrb=%h exp_wstrb=%h written=%h expected=%h %s time=%0t",
                 axi_log_aw_addr, axi_log_aw_bytes, cpu_axi_vif.m_axi_wdata,
                 cpu_axi_vif.m_axi_wstrb, exp_strb, written, expected,
                 (cpu_axi_vif.m_axi_wstrb == exp_strb) ? "STRB OK" : "STRB WRONG",
                 $time);
      end
    end
  end

  initial begin
    name_warning_catcher = new();
    uvm_report_cb::add(null, name_warning_catcher);
    uvm_resource_db#(virtual cpu_reset_if)::set(
      "uvm_test_top.env.reset_agt.reset_drv", "vif", reset_vif);
    uvm_resource_db#(virtual cpu_reset_if)::set(
      "uvm_test_top.env.reset_agt.reset_mon", "vif", reset_vif);
    uvm_resource_db#(virtual bedrock_if)::set(
      "uvm_test_top.env.bedrock_agt.bedrock_drv", "vif", incoming_vif);
    uvm_resource_db#(virtual bedrock_if)::set(
      "uvm_test_top.env.bedrock_agt.bedrock_mon", "vif", incoming_vif);
    uvm_resource_db#(virtual bedrock_if)::set(
      "uvm_test_top.env.outgoing_mon", "vif", outgoing_vif);
    force dut.u_bp.mem_fwd_header_i = mem_fwd_header_to_dut;
    force dut.u_bp.mem_fwd_data_i   = mem_fwd_data_to_dut;
    force dut.u_bp.mem_fwd_v_i      = mem_fwd_v_to_dut;
    force dut.u_bp.mem_rev_ready_and_i = mem_rev_ready_to_dut;

    uvm_resource_db#(virtual cpu_AXI_if #(`CPU_AXI_ID_WIDTH, `CPU_AXI_ADDR_WIDTH, `CPU_AXI_DATA_WIDTH))::set(
      "uvm_test_top.env.axi_agt", "vif", cpu_axi_vif);
    uvm_resource_db#(uvm_active_passive_enum)::set(
      "uvm_test_top.env.axi_agt", "is_active", UVM_ACTIVE);
    run_test();
  end

   // Waveform dump for debugging with GTKWave or another VCD viewer.
  initial if (!$test$plusargs("NO_VCD")) begin
    $dumpfile("cpu_tb_top.vcd");
    $dumpvars(0, reset_vif);
    $dumpvars(0, incoming_vif);
    $dumpvars(0, outgoing_vif);
    $dumpvars(0, cpu_axi_vif);
    $dumpvars(0, dma_pkt);
    $dumpvars(0, dma_pkt_v);
    $dumpvars(0, dma_pkt_yumi);
    $dumpvars(0, dma_data_to_dut);
    $dumpvars(0, dma_data_v_to_dut);
    $dumpvars(0, dma_data_ready_from_dut);
    $dumpvars(0, dma_data_from_dut);
    $dumpvars(0, dma_data_v_from_dut);
    $dumpvars(0, dma_data_yumi);
    $dumpvars(0, host_mem_write);
    $dumpvars(0, cfg_done);
  end

endmodule
