`timescale 1ns/1ps

// ------------------------------------------------------------
// tb_top.sv -- UVM top for sram_top
//
//   aclk     : 400 MHz (+AXI_CLK_MHZ=<f>  to change)
//   sram_clk : 750 MHz (+SRAM_CLK_MHZ=<f> to change)
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
    logic aclk     = 1'b0;
    logic sram_clk = 1'b0;
    real  axi_clk_mhz  = 400.0;
    real  sram_clk_mhz = 750.0;

    initial begin
        void'($value$plusargs("AXI_CLK_MHZ=%f",  axi_clk_mhz));
        forever #(500.0 / axi_clk_mhz) aclk = ~aclk;
    end

    initial begin
        void'($value$plusargs("SRAM_CLK_MHZ=%f", sram_clk_mhz));
        #0.3;   // arbitrary phase offset between the two domains
        forever #(500.0 / sram_clk_mhz) sram_clk = ~sram_clk;
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
