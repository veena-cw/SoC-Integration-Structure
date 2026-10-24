`timescale 1ns/1ps

// ------------------------------------------------------------
// tb_top.sv -- UVM top for sram_top
//
//   aclk     : 400 MHz (+AXI_CLK_MHZ=<f>  to change)
//   sram_clk : 750 MHz (+SRAM_CLK_MHZ=<f> to change)
//   phase offset / jitter: +SRAM_CLK_PHASE_NS, +CLK_RANDOM_PHASE,
//   +CLK_JITTER_PS (see "Clocks" below; sim/clk_sweep.sh uses them)
//   axi_rst_if.rst_n  -> aresetn
//   sram_rst_if.rst_n -> sram_resetn
//   axi_vif           -> sram_top s_axi_* (AXI agent 0)
//   g_axi_agent[i].u_if, i = 1..NUM_AXI_AGENTS-1 -> one axi_if per
//                        extra AXI agent (env.axi_agent_<i>). No slave
//                        is connected yet: slave outputs are tied idle.
//                        To use one, replace the tie-offs with your
//                        DUT / interconnect port.
//
// NUM_AXI_AGENTS -- number of AXI master agents, each on its own
// axi_if. Set it here (default below) or from the command line with
// 'make NUM_AGENTS=<n>' (Verilator -GNUM_AXI_AGENTS=<n>). tb_top
// publishes it to uvm_resource_db ("num_axi_agents"); the env and the
// tests size their agent / config arrays from that, so the classes
// always match the hardware. Changing it needs a rebuild.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

module tb_top #(
    parameter int NUM_AXI_AGENTS = 1     // <-- number of AXI agents
);

    // ============================================================
    // Clocks
    // ============================================================
    // Plusargs (test plan CDC_001 / CDC_002 clock-ratio sweep):
    //   +AXI_CLK_MHZ=<f>        aclk frequency     (default 400)
    //   +SRAM_CLK_MHZ=<f>       sram_clk frequency (default 750)
    //   +SRAM_CLK_PHASE_NS=<f>  sram_clk start offset vs aclk (default 0.3)
    //   +CLK_RANDOM_PHASE       random sram_clk start offset in [0 : one
    //                           sram_clk period) instead
    //   +CLK_JITTER_PS=<n>      each half period of BOTH clocks is
    //                           independently stretched / shortened by a
    //                           random 0..n ps (default 0 = no jitter);
    //                           clamped to 1/4 of the shorter half period
    logic aclk     = 1'b0;
    logic sram_clk = 1'b0;
    real  axi_clk_mhz    = 400.0;
    real  sram_clk_mhz   = 750.0;
    real  sram_phase_ns  = 0.3;     // arbitrary phase offset between the two domains
    int   clk_jitter_ps  = 0;

    // Random jitter for one half period, in ns: uniform in [-j : +j] ps.
    function automatic real jitter_ns(int j);
        return (j <= 0) ? 0.0 : (real'($urandom_range(0, 2 * j)) - real'(j)) / 1000.0;
    endfunction

    initial begin
        void'($value$plusargs("AXI_CLK_MHZ=%f",   axi_clk_mhz));
        void'($value$plusargs("SRAM_CLK_MHZ=%f",  sram_clk_mhz));
        void'($value$plusargs("SRAM_CLK_PHASE_NS=%f", sram_phase_ns));
        void'($value$plusargs("CLK_JITTER_PS=%d", clk_jitter_ps));
        if ($test$plusargs("CLK_RANDOM_PHASE"))
            sram_phase_ns = real'($urandom_range(0, int'(1000.0 * 1000.0 / sram_clk_mhz) - 1)) / 1000.0;
        // Keep jitter well below a half period so the clocks stay clocks.
        if (clk_jitter_ps > int'(250.0 * 500.0 / ((axi_clk_mhz > sram_clk_mhz) ? axi_clk_mhz : sram_clk_mhz)))
            clk_jitter_ps = int'(250.0 * 500.0 / ((axi_clk_mhz > sram_clk_mhz) ? axi_clk_mhz : sram_clk_mhz));
        $display("tb_top clocks: aclk %0.3f MHz, sram_clk %0.3f MHz (ratio sram/axi %0.3f), sram_clk phase %0.3f ns, jitter +/-%0d ps",
                 axi_clk_mhz, sram_clk_mhz, sram_clk_mhz / axi_clk_mhz, sram_phase_ns, clk_jitter_ps);
    end

    initial begin
        #0;    // plusargs above are read first
        forever #(500.0 / axi_clk_mhz + jitter_ns(clk_jitter_ps)) aclk = ~aclk;
    end

    initial begin
        #0;
        #(sram_phase_ns);
        forever #(500.0 / sram_clk_mhz + jitter_ns(clk_jitter_ps)) sram_clk = ~sram_clk;
    end

    // ============================================================
    // Interfaces
    // ============================================================
    reset_if axi_rst_if  (.clk(aclk));
    reset_if sram_rst_if (.clk(sram_clk));

    axi_if   axi_vif (.aclk(aclk), .aresetn(axi_rst_if.rst_n));

    // ============================================================
    // DUT
    // ============================================================
    sram_top #(
        .ADDR_WIDTH     (`AXI_ADDR_WIDTH),
        .DATA_WIDTH     (`AXI_DATA_WIDTH),
        .ID_WIDTH       (`AXI_ID_WIDTH),
        .MEM_ADDR_WIDTH (16),
        .FIFO_DEPTH     (8),
        .SRAM_BASE_ADDR (`SRAM_BASE_ADDR)
    ) u_dut (
        .aclk           (aclk),
        .aresetn        (axi_rst_if.rst_n),
        .sram_clk       (sram_clk),
        .sram_resetn    (sram_rst_if.rst_n),

        .s_axi_awid     (axi_vif.awid),
        .s_axi_awaddr   (axi_vif.awaddr),
        .s_axi_awlen    (axi_vif.awlen),
        .s_axi_awsize   (axi_vif.awsize),
        .s_axi_awburst  (axi_vif.awburst),
        .s_axi_awlock   (axi_vif.awlock),
        .s_axi_awcache  (axi_vif.awcache),
        .s_axi_awprot   (axi_vif.awprot),
        .s_axi_awqos    (axi_vif.awqos),
        .s_axi_awvalid  (axi_vif.awvalid),
        .s_axi_awready  (axi_vif.awready),

        .s_axi_wdata    (axi_vif.wdata),
        .s_axi_wstrb    (axi_vif.wstrb),
        .s_axi_wlast    (axi_vif.wlast),
        .s_axi_wvalid   (axi_vif.wvalid),
        .s_axi_wready   (axi_vif.wready),

        .s_axi_bid      (axi_vif.bid),
        .s_axi_bresp    (axi_vif.bresp),
        .s_axi_bvalid   (axi_vif.bvalid),
        .s_axi_bready   (axi_vif.bready),

        .s_axi_arid     (axi_vif.arid),
        .s_axi_araddr   (axi_vif.araddr),
        .s_axi_arlen    (axi_vif.arlen),
        .s_axi_arsize   (axi_vif.arsize),
        .s_axi_arburst  (axi_vif.arburst),
        .s_axi_arlock   (axi_vif.arlock),
        .s_axi_arcache  (axi_vif.arcache),
        .s_axi_arprot   (axi_vif.arprot),
        .s_axi_arqos    (axi_vif.arqos),
        .s_axi_arvalid  (axi_vif.arvalid),
        .s_axi_arready  (axi_vif.arready),

        .s_axi_rid      (axi_vif.rid),
        .s_axi_rdata    (axi_vif.rdata),
        .s_axi_rresp    (axi_vif.rresp),
        .s_axi_rlast    (axi_vif.rlast),
        .s_axi_rvalid   (axi_vif.rvalid),
        .s_axi_rready   (axi_vif.rready)
    );

    // sram_top has no AxREGION / xUSER ports (AXI4 optional
    // signals): the master-side ones stay unconnected, the
    // slave-side ones are tied to 0.
    assign axi_vif.buser = '0;
    assign axi_vif.ruser = '0;

    // ============================================================
    // Protocol assertions
    // ============================================================
    axi_assertions u_axi_assertions (.vif(axi_vif));

    // ============================================================
    // White-box check: axi4_slave accepts a W beat (mem_req) while
    // the CDC request FIFO is not ready -> the write is lost
    // inside the DUT. Flags the root cause directly instead of a
    // later read mismatch.
    // ============================================================
    // Sampled at negedge: every term is stable for the whole second
    // half of the cycle (TB drives and DUT flops change on posedge,
    // req_fifo_full is an aclk-domain flop), so this sees exactly
    // what the DUT sees at the next rising edge without racing the
    // posedge update.
    always @(negedge aclk) begin
        if (axi_rst_if.rst_n === 1'b1 &&
            u_dut.u_axi4_slave.mem_req === 1'b1 &&
            u_dut.u_axi4_slave.mem_we  === 1'b1 &&
            u_dut.u_axi_sram_cdc.mem_ready !== 1'b1)
            `uvm_error("WB_WRITE_DROP",
                $sformatf("Write to 0x%08h accepted on W but CDC request FIFO not ready -- write lost",
                          u_dut.u_axi4_slave.mem_addr))
    end

    // White-box check (test plan ARB_001): the single-port slave must
    // accept at most one of AW / AR per cycle. awready and arready are
    // both "both FSMs idle", so a master that presents AWVALID and
    // ARVALID together (only possible with +AXI4_OUTSTANDING) gets both
    // accepted, and the read then waits forever for its data.
    always @(negedge aclk) begin
        if (axi_rst_if.rst_n === 1'b1 &&
            axi_vif.awvalid === 1'b1 && axi_vif.awready === 1'b1 &&
            axi_vif.arvalid === 1'b1 && axi_vif.arready === 1'b1)
            `uvm_error("WB_RW_OVERLAP",
                $sformatf("AW (0x%08h) and AR (0x%08h) accepted in the same cycle -- read and write now share the single-port SRAM",
                          axi_vif.awaddr, axi_vif.araddr))
    end


    // ============================================================
    // CDC checks (test plan CDC_005): Gray-pointer / synchronizer SVA
    // in every asynchronous_fifo (u_req_fifo, u_resp_fifo)
    // ============================================================
    bind asynchronous_fifo cdc_fifo_checker #(.PTR_WIDTH(PTR_WIDTH), .DEPTH(DEPTH)) u_cdc_chk (
        .wclk(wclk), .wrst_n(wrst_n), .rclk(rclk), .rrst_n(rrst_n),
        .b_wptr(b_wptr), .g_wptr(g_wptr), .g_wptr_sync(g_wptr_sync),
        .b_rptr(b_rptr), .g_rptr(g_rptr), .g_rptr_sync(g_rptr_sync));

    // ============================================================
    // Metastability injection (test plan CDC_006)
    // ============================================================
    // For each 2-flop synchronizer: when its input changed since the
    // previous destination clock edge, with probability
    // cdc_meta_ctrl::pct % the first flop (q1) captures the OLD value
    // of the bit(s) of that last input change -- i.e. the flop went
    // metastable and resolved the wrong way, so the change arrives one
    // destination clock later. Applied by forcing q1 right after the
    // edge and releasing it at the falling edge (q1 then holds the
    // value until the next edge). Off unless a test sets
    // cdc_meta_ctrl::pct or +CDC_META=<pct> is given.
    localparam int CDC_PTR_BITS = $clog2(8) + 1;     // FIFO_DEPTH=8 -> 4-bit Gray pointers

`define CDC_META_INJECT(SYNC, NAME)                                              \
    logic [CDC_PTR_BITS-1:0] NAME``_din_prev, NAME``_last_mask, NAME``_q1_old;   \
    always @(SYNC.d_in) begin                                                    \
        NAME``_last_mask = SYNC.d_in ^ NAME``_din_prev;                          \
        NAME``_din_prev  = SYNC.d_in;                                            \
    end                                                                          \
    always @(negedge SYNC.clk) NAME``_q1_old <= SYNC.q1;                         \
    always @(posedge SYNC.clk) begin                                             \
        automatic logic [CDC_PTR_BITS-1:0] q1_new, mask;                         \
        if (SYNC.rst_n === 1'b1 && cdc_meta_ctrl::pct != 0) begin                \
            #1ps;                                                                \
            q1_new = SYNC.q1;                                                    \
            mask   = NAME``_last_mask & (q1_new ^ NAME``_q1_old);                \
            if (mask != '0 && $urandom_range(1, 100) <= cdc_meta_ctrl::pct) begin \
                force SYNC.q1 = (q1_new & ~mask) | (NAME``_q1_old & mask);       \
                cdc_meta_ctrl::hit(`"NAME`");                                     \
                @(negedge SYNC.clk);                                             \
                release SYNC.q1;                                                 \
            end                                                                  \
        end                                                                      \
    end

    `CDC_META_INJECT(u_dut.u_axi_sram_cdc.u_req_fifo.sync_wptr,  req_wptr_sync)
    `CDC_META_INJECT(u_dut.u_axi_sram_cdc.u_req_fifo.sync_rptr,  req_rptr_sync)
    `CDC_META_INJECT(u_dut.u_axi_sram_cdc.u_resp_fifo.sync_wptr, resp_wptr_sync)
    `CDC_META_INJECT(u_dut.u_axi_sram_cdc.u_resp_fifo.sync_rptr, resp_rptr_sync)
`undef CDC_META_INJECT

    initial begin
        automatic int unsigned p;
        if ($value$plusargs("CDC_META=%d", p)) cdc_meta_ctrl::set_pct(p);
    end

    // ============================================================
    // Fault injection (sram_fsm_recovery_test): illegal write-FSM state
    // ============================================================
    // sw_state is 2 bits with 3 states, so 2'b11 is an illegal
    // encoding that only a corrupted flop can produce. When a test
    // triggers the global uvm_event "inject_sw_illegal" (with the bus
    // idle), sw_state is forced to 2'b11 for one clock and released.
    // The FSM's default branch must bring it back to SW_IDLE on the
    // next clock (FSM_RECOVERY error otherwise); then
    // "inject_sw_illegal_done" is triggered. With sw_state = 2'b11
    // awready / wready / bvalid are all 0, so the AXI port stays legal.
    initial begin
        automatic uvm_event inject = uvm_event_pool::get_global("inject_sw_illegal");
        automatic uvm_event done   = uvm_event_pool::get_global("inject_sw_illegal_done");
        forever begin
            inject.wait_trigger();
            @(negedge aclk);
            force u_dut.u_axi4_slave.sw_state = type(u_dut.u_axi4_slave.sw_state)'(2'b11);
            @(negedge aclk);   // one rising edge spent in the illegal state
            release u_dut.u_axi4_slave.sw_state;
            @(negedge aclk);   // next rising edge: default branch -> SW_IDLE
            if (u_dut.u_axi4_slave.sw_state !== 2'b00)
                `uvm_error("FSM_RECOVERY",
                    $sformatf("axi4_slave sw_state=%b one clock after the illegal 2'b11 was released, expected SW_IDLE",
                              u_dut.u_axi4_slave.sw_state))
            else
                `uvm_info("FSM_RECOVERY", "axi4_slave write FSM left the illegal state 2'b11 and returned to SW_IDLE",
                          UVM_LOW)
            done.trigger();
        end
    end

    // ============================================================
    // Extra AXI agents (NUM_AXI_AGENTS > 1): one axi_if each
    // ============================================================
    for (genvar i = 1; i < NUM_AXI_AGENTS; i++) begin : g_axi_agent
        axi_if u_if (.aclk(aclk), .aresetn(axi_rst_if.rst_n));

        // No slave behind this interface yet -- slave outputs idle.
        // Hook-up point: drive these from a DUT / interconnect port
        // (and the master-side signals into it) instead.
        assign u_if.awready = 1'b0;
        assign u_if.wready  = 1'b0;
        assign u_if.bid     = '0;
        assign u_if.bresp   = '0;
        assign u_if.buser   = '0;
        assign u_if.bvalid  = 1'b0;
        assign u_if.arready = 1'b0;
        assign u_if.rid     = '0;
        assign u_if.rdata   = '0;
        assign u_if.rresp   = '0;
        assign u_if.rlast   = 1'b0;
        assign u_if.ruser   = '0;
        assign u_if.rvalid  = 1'b0;

        axi_assertions #(.COVER_EN(1'b0)) u_axi_assertions (.vif(u_if));

        initial begin
            uvm_resource_db#(virtual axi_if)::set(
                $sformatf("uvm_test_top.env.axi_agent_%0d", i), "vif", u_if);
            uvm_resource_db#(virtual reset_if)::set(
                $sformatf("uvm_test_top.env.axi_agent_%0d", i), "rst_vif", axi_rst_if);
        end
    end

    // ============================================================
    // UVM resource_db -- each agent reads at its own scope and
    // re-publishes to its children.
    // ============================================================
    initial begin
        if (NUM_AXI_AGENTS < 1)
            $fatal(1, "tb_top: NUM_AXI_AGENTS=%0d, must be >= 1", NUM_AXI_AGENTS);
        uvm_resource_db#(int)::set("uvm_test_top", "num_axi_agents", NUM_AXI_AGENTS);

        uvm_resource_db#(virtual axi_if)::set(
            "uvm_test_top.env.axi_agent", "vif", axi_vif);
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.axi_agent", "rst_vif", axi_rst_if);
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.axi_rst_agent", "rst_vif", axi_rst_if);
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.sram_rst_agent", "rst_vif", sram_rst_if);

        // UVM 1800.2 checks every component name against a POSIX regex.
        // With UVM_NO_DPI (Verilator) uvm_is_match() cannot evaluate a
        // regex, so every name is reported as invalid -- a false
        // UVM/COMP/NAME warning per component. Silence that ID only.
        uvm_root::get().set_report_id_action("UVM/COMP/NAME", UVM_NO_ACTION);

        // Let the g_axi_agent initial blocks publish their interfaces
        // first (same time step, they run before this #0 resumes).
        #0;
        run_test();
    end

    initial begin
        if ($test$plusargs("DUMP")) begin
            $dumpfile("dump.vcd");
            $dumpvars(0, tb_top);
        end
    end

endmodule
