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
    // DUT d1 : uart_apb_top (was apb_uart_top -- see rtl/
    // uart_apb_top.sv's header for the new THR/RHR/SR/CR/BRDR/
    // IER/ISR register map). New in this module vs. the old one:
    //   * PPROT input -- unused by the register logic (its own
    //     header comment says so); tied off here, not added to
    //     uart_if.sv, since nothing ever needs to drive it per-
    //     transaction.
    //   * divisor_load_i / uart_irq_en inputs -- gate BRDR/IER
    //     writes. uart_irq_en is tied high (it only gates the IER
    //     write). divisor_load_i must NOT be tied high -- see the
    //     strobe generated just below.
    //   * uart_irq output, renamed from the old irq_o (the
    //     uart_if.sv signal name itself is unchanged; only this
    //     port connection needed updating).
    // ============================================================
    // divisor_load_i is NOT a plain enable: uart_apb_top uses it both to
    // gate the BRDR write and (passed straight through) as uart_baudgen's
    // reload strobe. Tied permanently high, the baud counter is reloaded
    // every clock and never counts -> no tick_x1/tick_x16 -> nothing is ever
    // transmitted or received. It must be a short strobe that covers the
    // BRDR write cycle (so the write passes the gate) plus one more cycle
    // (so baudgen reloads *after* brdr_reg holds the new value).
    wire d1_brdr_wr = uart_d1_interface.psel & uart_d1_interface.penable &
                      uart_d1_interface.pwrite & (uart_d1_interface.paddr[15:0] == 16'h0010);
    wire d2_brdr_wr = uart_d2_interface.psel & uart_d2_interface.penable &
                      uart_d2_interface.pwrite & (uart_d2_interface.paddr[15:0] == 16'h0010);
    logic d1_brdr_wr_q, d2_brdr_wr_q;
    always_ff @(posedge clk) begin
        d1_brdr_wr_q <= d1_brdr_wr;
        d2_brdr_wr_q <= d2_brdr_wr;
    end

    uart_apb_top u_dut_d1 (
        .PCLK           (clk),
        .PRESETn        (reset_interface.rst_n),

        .PSEL           (uart_d1_interface.psel),
        .PENABLE        (uart_d1_interface.penable),
        .PWRITE         (uart_d1_interface.pwrite),
        .PADDR          (uart_d1_interface.paddr),
        .PWDATA         (uart_d1_interface.pwdata),
        .PSTRB          (uart_d1_interface.pstrb),
        .PPROT          (3'h0),
        .PRDATA         (uart_d1_interface.prdata),
        .PREADY         (uart_d1_interface.pready),
        .PSLVERR        (uart_d1_interface.pslverr),

        .divisor_load_i (d1_brdr_wr | d1_brdr_wr_q),
        .uart_irq_en    (1'b1),

        .rx_i           (uart_d1_interface.rx_i),
        .tx_o           (uart_d1_interface.tx_o),
        .cts_n_i        (uart_d1_interface.cts_n_i),
        .rts_n_o        (uart_d1_interface.rts_n_o),
        .uart_irq       (uart_d1_interface.irq_o)
    );

    // ============================================================
    // DUT d2 : uart_apb_top -- see u_dut_d1 above for what's new.
    // ============================================================
    uart_apb_top u_dut_d2 (
        .PCLK           (clk),
        .PRESETn        (reset_interface.rst_n),

        .PSEL           (uart_d2_interface.psel),
        .PENABLE        (uart_d2_interface.penable),
        .PWRITE         (uart_d2_interface.pwrite),
        .PADDR          (uart_d2_interface.paddr),
        .PWDATA         (uart_d2_interface.pwdata),
        .PSTRB          (uart_d2_interface.pstrb),
        .PPROT          (3'h0),
        .PRDATA         (uart_d2_interface.prdata),
        .PREADY         (uart_d2_interface.pready),
        .PSLVERR        (uart_d2_interface.pslverr),

        .divisor_load_i (d2_brdr_wr | d2_brdr_wr_q),
        .uart_irq_en    (1'b1),

        .rx_i           (uart_d2_interface.rx_i),
        .tx_o           (uart_d2_interface.tx_o),
        .cts_n_i        (uart_d2_interface.cts_n_i),
        .rts_n_o        (uart_d2_interface.rts_n_o),
        .uart_irq       (uart_d2_interface.irq_o)
    );

    // Testbench-only waveform probes.  These aliases make the RX FIFO head
    // visible directly at tb_top in dump.vcd, without modifying the DUT RTL.
    // `*_rx_fifo_head_dbg` updates when the first received byte enters the
    // FIFO and remains stable until CR.RX_RD_EN pops that entry.  In contrast,
    // `*_rhr_latched_dbg` is the APB wrapper's RHR read latch and only updates
    // when software addresses RHR.
    logic [8:0] d1_rx_fifo_head_dbg;
    logic [8:0] d2_rx_fifo_head_dbg;
    logic [8:0] d1_rhr_latched_dbg;
    logic [8:0] d2_rhr_latched_dbg;

    assign d1_rx_fifo_head_dbg = u_dut_d1.u_uart_top.rx_rd_data_o;
    assign d2_rx_fifo_head_dbg = u_dut_d2.u_uart_top.rx_rd_data_o;
    assign d1_rhr_latched_dbg  = u_dut_d1.rhr_reg[8:0];
    assign d2_rhr_latched_dbg  = u_dut_d2.rhr_reg[8:0];

    // ============================================================
    // Serial link between d1 and d2
    // ============================================================
    // Normal DUT-to-DUT connection. In SPEC_RX mode the selected
    // side is replaced by the TB-generated serial waveform.
    assign uart_d1_interface.rx_i =
        uart_d1_interface.spec_rx_drive_en ?
        uart_d1_interface.spec_rx_drive :
        uart_d2_interface.tx_o;

    assign uart_d2_interface.rx_i =
        uart_d2_interface.spec_rx_drive_en ?
        uart_d2_interface.spec_rx_drive :
        uart_d1_interface.tx_o;

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
