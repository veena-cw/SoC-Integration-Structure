`timescale 1ns/1ps
`include "uvm_macros.svh"
import uvm_pkg::*;

// Simulation-only fault injection for unreachable UART TX/RX FSM defaults.
// This is a UVM TEST (not an additional virtual sequence).
class uart_fsm_fault_test extends uart_base_test;
    `uvm_component_utils(uart_fsm_fault_test)

    function new(string name = "uart_fsm_fault_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction
            // Declare once, at class scope in uart_fsm_fault_test:
            typedef enum logic [2:0] {
    FAULT_S_IDLE   = 3'd0,
    FAULT_S_START  = 3'd1,
    FAULT_S_DATA   = 3'd2,
    FAULT_S_PARITY = 3'd3,
    FAULT_S_STOP1  = 3'd4,
    FAULT_S_STOP2  = 3'd5
    } tx_state_t;


    virtual task run_phase(uvm_phase phase);
        reset_sequence rst;
        bit tx_pass, rx_pass;

        phase.raise_objection(this);

        rst = reset_sequence::type_id::create("rst");
        rst.delay       = 0;
        rst.pulse_width = 100;
        rst.start(env.virt_seqr.reset_seqr);

        @(posedge env.d1_agent.vif.pclk);
        #1ns;

        // Only inject while the UART is idle and reset is deasserted.
        if ($root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q !== 3'd0 ||
            $root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q !== 3'd0)
            `uvm_fatal("FSM_FAULT", "TX/RX must be idle before injection")

        // CASE 1: TX illegal state (110) must recover to IDLE (000).
        // Force a constant slice to avoid assigning a raw bit vector
        // directly to the strongly typed state_q enum.
        @(negedge env.d1_agent.vif.pclk);
        // Then use it:
        force $root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q = tx_state_t'(3'b110);
        #1ns;
        if ($root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q !== 3'b110)
            `uvm_fatal("FSM_TX", "TX invalid-state injection failed")

        @(posedge env.d1_agent.vif.pclk);  // RTL executes default case
        #1ns;
        release $root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q;
        @(posedge env.d1_agent.vif.pclk);
        #1ns;
        tx_pass = ($root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q === 3'd0 &&
                   env.d1_agent.vif.tx_o === 1'b1);
        if (tx_pass)
            $display("[FSM FAULT] TX illegal 110 -> IDLE : PASS");
        else
            `uvm_error("FSM_TX", "TX failed to recover to IDLE / TX line high")

        // CASE 2: RX illegal state must recover to IDLE on tick_x16.
        // At reset, baudgen divisor is zero, making tick_x16 asserted.
        @(negedge env.d1_agent.vif.pclk);
        if ($root.tb_top.u_dut_d1.u_uart_top.tick_x16 !== 1'b1 ||
            $root.tb_top.u_dut_d1.u_uart_top.u_rx.break_armed_q !== 1'b0)
            `uvm_fatal("FSM_RX", "RX needs tick_x16=1 and break_armed=0")

        force $root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q = tx_state_t'(3'b110);
        #1ns;
        if ($root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q !== 3'b110)
            `uvm_fatal("FSM_RX", "RX invalid-state injection failed")

        @(posedge env.d1_agent.vif.pclk);  // RTL executes default case
        #1ns;
        release $root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q;
        @(posedge env.d1_agent.vif.pclk);
        #1ns;
        rx_pass = ($root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q === 3'd0 &&
                   $root.tb_top.u_dut_d1.u_uart_top.u_rx.data_valid_o === 1'b0);
        if (rx_pass)
            $display("[FSM FAULT] RX illegal 110 -> IDLE : PASS");
        else
            `uvm_error("FSM_RX", "RX failed to recover or asserted data_valid")
            
            
            
            // CASE 3: TX illegal state (110) must recover to IDLE (000).
        // Force a constant slice to avoid assigning a raw bit vector
        // directly to the strongly typed state_q enum.
        @(negedge env.d1_agent.vif.pclk);
        // Then use it:
        force $root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q = tx_state_t'(3'b111);
        #1ns;
        if ($root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q !== 3'b111)
            `uvm_fatal("FSM_TX", "TX invalid-state injection failed")

        @(posedge env.d1_agent.vif.pclk);  // RTL executes default case
        #1ns;
        release $root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q;
        @(posedge env.d1_agent.vif.pclk);
        #1ns;
        tx_pass = ($root.tb_top.u_dut_d1.u_uart_top.u_tx.state_q === 3'd0 &&
                   env.d1_agent.vif.tx_o === 1'b1);
        if (tx_pass)
            $display("[FSM FAULT] TX illegal 111 -> IDLE : PASS");
        else
            `uvm_error("FSM_TX", "TX failed to recover to IDLE / TX line high")

        // CASE 2: RX illegal state must recover to IDLE on tick_x16.
        // At reset, baudgen divisor is zero, making tick_x16 asserted.
        @(negedge env.d1_agent.vif.pclk);
        if ($root.tb_top.u_dut_d1.u_uart_top.tick_x16 !== 1'b1 ||
            $root.tb_top.u_dut_d1.u_uart_top.u_rx.break_armed_q !== 1'b0)
            `uvm_fatal("FSM_RX", "RX needs tick_x16=1 and break_armed=0")

        force $root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q = tx_state_t'(3'b111);
        #1ns;
        if ($root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q !== 3'b111)
            `uvm_fatal("FSM_RX", "RX invalid-state injection failed")

        @(posedge env.d1_agent.vif.pclk);  // RTL executes default case
        #1ns;
        release $root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q;
        @(posedge env.d1_agent.vif.pclk);
        #1ns;
        rx_pass = ($root.tb_top.u_dut_d1.u_uart_top.u_rx.state_q === 3'd0 &&
                   $root.tb_top.u_dut_d1.u_uart_top.u_rx.data_valid_o === 1'b0);
        if (rx_pass)
            $display("[FSM FAULT] RX illegal 111 -> IDLE : PASS");
        else
            `uvm_error("FSM_RX", "RX failed to recover or asserted data_valid")
            
            
            
            

        $display("[FSM FAULT] SUMMARY: TX=%s RX=%s",
                 tx_pass ? "PASS" : "FAIL", rx_pass ? "PASS" : "FAIL");
        phase.drop_objection(this);
    endtask
endclass

