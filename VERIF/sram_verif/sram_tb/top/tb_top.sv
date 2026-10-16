`timescale 1ns/1ps

// ------------------------------------------------------------
// tb_top.sv -- UVM top for sram_top
//
//   aclk     : 400 MHz (+AXI_CLK_MHZ=<f>  to change)
//   sram_clk : 750 MHz (+SRAM_CLK_MHZ=<f> to change)
//   axi_rst_if.rst_n  -> aresetn
//   sram_rst_if.rst_n -> sram_resetn
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

module tb_top;

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


    // ============================================================
    // UVM resource_db -- each agent reads at its own scope and
    // re-publishes to its children.
    // ============================================================
    initial begin
        uvm_resource_db#(virtual axi_if)::set(
            "uvm_test_top.env.axi_agent", "vif", axi_vif);
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.axi_agent", "rst_vif", axi_rst_if);
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.axi_rst_agent", "rst_vif", axi_rst_if);
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.sram_rst_agent", "rst_vif", sram_rst_if);

        run_test();
    end

    initial begin
        if ($test$plusargs("DUMP")) begin
            $dumpfile("dump.vcd");
            $dumpvars(0, tb_top);
        end
    end

endmodule
