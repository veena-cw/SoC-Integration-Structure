`timescale 1ns/1ps

import uvm_pkg::*;
`include "uvm_macros.svh"

module tb_top;

    // ============================================================
    // Clock
    // ============================================================
    logic clk = 0;
    initial forever #5 clk = ~clk;

    // ============================================================
    // Interfaces (instance names match the approved architecture
    // diagram: uart_d1_interface, reset_interface, uart_d2_interface)
    // ============================================================
    reset_if  reset_interface   (.clk(clk));

    uart_if   uart_d1_interface (.pclk(clk));
    uart_if   uart_d2_interface (.pclk(clk));

    // ============================================================
    // DUT d1 : apb_uart_top
    // ============================================================
    apb_uart_top u_dut_d1 (
        .PCLK    (clk),
        .PRESETn (reset_interface.rst_n),

        .PSEL    (uart_d1_interface.psel),
        .PENABLE (uart_d1_interface.penable),
        .PWRITE  (uart_d1_interface.pwrite),
        .PADDR   (uart_d1_interface.paddr),
        .PWDATA  (uart_d1_interface.pwdata),
        .PSTRB   (uart_d1_interface.pstrb),
        .PRDATA  (uart_d1_interface.prdata),
        .PREADY  (uart_d1_interface.pready),
        .PSLVERR (uart_d1_interface.pslverr),

        .rx_i    (uart_d1_interface.rx_i),
        .tx_o    (uart_d1_interface.tx_o),
        .cts_n_i (uart_d1_interface.cts_n_i),
        .rts_n_o (uart_d1_interface.rts_n_o),
        .irq_o   (uart_d1_interface.irq_o)
    );

    // ============================================================
    // DUT d2 : apb_uart_top
    // ============================================================
    apb_uart_top u_dut_d2 (
        .PCLK    (clk),
        .PRESETn (reset_interface.rst_n),

        .PSEL    (uart_d2_interface.psel),
        .PENABLE (uart_d2_interface.penable),
        .PWRITE  (uart_d2_interface.pwrite),
        .PADDR   (uart_d2_interface.paddr),
        .PWDATA  (uart_d2_interface.pwdata),
        .PSTRB   (uart_d2_interface.pstrb),
        .PRDATA  (uart_d2_interface.prdata),
        .PREADY  (uart_d2_interface.pready),
        .PSLVERR (uart_d2_interface.pslverr),

        .rx_i    (uart_d2_interface.rx_i),
        .tx_o    (uart_d2_interface.tx_o),
        .cts_n_i (uart_d2_interface.cts_n_i),
        .rts_n_o (uart_d2_interface.rts_n_o),
        .irq_o   (uart_d2_interface.irq_o)
    );

    // ============================================================
    // Serial link between d1 and d2
    // ============================================================
    assign uart_d1_interface.rx_i    = uart_d2_interface.tx_o;
    assign uart_d2_interface.rx_i    = uart_d1_interface.tx_o;

    assign uart_d1_interface.cts_n_i = uart_d2_interface.rts_n_o;
    assign uart_d2_interface.cts_n_i = uart_d1_interface.rts_n_o;

    // ============================================================
    // Protocol assertions (bus protocol only, one per device)
    // ============================================================
    uart_assertions u_assertions_d1 (
        .vif     (uart_d1_interface),
        .rst_vif (reset_interface)
    );

    uart_assertions u_assertions_d2 (
        .vif     (uart_d2_interface),
        .rst_vif (reset_interface)
    );

    // ============================================================
    // UVM resource_db
    //
    // Flow: Top -> uvm_resource_db -> Agent Configuration -> Agent
    // -> Driver/Sequencer/Monitor. Top sets the virtual interfaces
    // directly at each agent's own scope (and at cov's scope,
    // which needs the raw vifs for irq_o polling and is not part
    // of the agent hierarchy); each uart_agent/reset_agent then
    // re-publishes what it read down to its own children's scope
    // in its own build_phase -- see uart_agent.sv / reset_agent.sv.
    // ============================================================
    initial begin

        // ---- reset: every agent that needs it reads at its own
        // scope ----
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.d1_agent", "rst_vif", reset_interface);
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.d2_agent", "rst_vif", reset_interface);
        uvm_resource_db#(virtual reset_if)::set(
            "uvm_test_top.env.reset_agent", "rst_vif", reset_interface);

        // ---- d1 agent ----
        uvm_resource_db#(virtual uart_if)::set(
            "uvm_test_top.env.d1_agent", "vif", uart_d1_interface);

        // ---- d2 agent ----
        uvm_resource_db#(virtual uart_if)::set(
            "uvm_test_top.env.d2_agent", "vif", uart_d2_interface);

        // ---- coverage (not part of the agent hierarchy; needs
        // the raw vifs directly for irq_o polling) ----
        uvm_resource_db#(virtual uart_if)::set(
            "uvm_test_top.env.cov", "vif_d1", uart_d1_interface);
        uvm_resource_db#(virtual uart_if)::set(
            "uvm_test_top.env.cov", "vif_d2", uart_d2_interface);

        run_test();
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_top);
    end

endmodule
