//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: 
//  Module            				: 
//  Primary Unit Owner                         	: 
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : 
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

// Generated test_top for AHB-Lite (verification wrapper, DUT external)
`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_irq_item_pkg::*;

module plic_test_top;
    logic hclk;
    localparam int FSM_STATE_BITS = 2;
    plic_reset_if RST_vif();

    plic_ahb_lite_if AHB_LITE_vif (
        .hclk     (hclk),
        .hreset_n (RST_vif.rst_n)
    );

    plic_irq_if #(
        .SOURCES (PLIC_SOURCES),
        .TARGETS (PLIC_TARGETS)
    ) IRQ_vif (
        .clk   (hclk),
        .rst_n (RST_vif.rst_n)
    );

    // Clock generation
    initial begin
        hclk = 0;
        forever #5 hclk = ~hclk;
    end

/*
    // Reset generation via reset_if (reset-aware)
    initial begin
        RST_vif.rst_n = 1'b0;
        repeat (5) @(posedge hclk);
        RST_vif.rst_n = 1'b1;
    end

    */
    
     // PLIC DUT instance
    ahb3lite_plic_top #(
        .SOURCES          (PLIC_SOURCES),
        .TARGETS          (PLIC_TARGETS),
        .PRIORITIES       (PLIC_PRIORITIES),
        .HAS_THRESHOLD    (1),
        .HAS_CONFIG_REG   (1),
        .HADDR_SIZE       (16),
        .HDATA_SIZE       (32)
    ) dut (
        .HCLK      (hclk),
        .HRESETn   (RST_vif.rst_n),

        .HSEL      (AHB_LITE_vif.hsel),
        .HADDR     (AHB_LITE_vif.haddr),
        .HWDATA    (AHB_LITE_vif.hwdata),
        .HRDATA    (AHB_LITE_vif.hrdata),
        .HWRITE    (AHB_LITE_vif.hwrite),
        .HSIZE     (AHB_LITE_vif.hsize),
        .HBURST    (AHB_LITE_vif.hburst),
        .HPROT     (4'b0011),
        .HTRANS    (AHB_LITE_vif.htrans),
        .HREADY    (AHB_LITE_vif.hready),
        .HREADYOUT (AHB_LITE_vif.hreadyout),
        .HRESP     (AHB_LITE_vif.hresp),

        .src       (IRQ_vif.src),
        .irq       (IRQ_vif.irq)
    );

    // --------------------------------------------------------------------------
    // PLIC FSM functional coverage
    //
    // plic_gateway.sv contains the only sequential FSM in this PLIC.  Its
    // state variable is ip_state and the RTL encodings are:
    //   2'b00: wait for an interrupt request
    //   2'b01: wait for interrupt claim
    //   2'b10: wait for interrupt completion
    //   2'b11: unused/illegal; RTL default recovers to 2'b00
    //
    // plic_core generates one gateway_inst per source at:
    //   dut.plic_core_inst.gen_gateway[s].gateway_inst.ip_state
    //
    // Sampling is performed on hclk only when reset is released and the
    // hierarchical state is known.  Only changing state pairs are covered,
    // so repeated samples of a state do not create transition hits.
    // --------------------------------------------------------------------------
    generate
        for (genvar fsm_source = 0; fsm_source < PLIC_SOURCES; fsm_source++) begin : gen_gateway_fsm_coverage
            logic [FSM_STATE_BITS-1:0] previous_state;
            bit previous_valid;

            covergroup gateway_fsm_state_cg(string instance_name)
                with function sample(input logic [FSM_STATE_BITS-1:0] current_state);
                option.name = instance_name;
                state : coverpoint current_state {
                    bins wait_for_request     = {2'b00};
                    bins wait_for_claim       = {2'b01};
                    bins wait_for_completion  = {2'b10};
                    bins illegal_state        = {2'b11};
                }
            endgroup

            covergroup gateway_fsm_transition_cg(string instance_name)
                with function sample(
                    input logic [FSM_STATE_BITS-1:0] current_state,
                    input logic [FSM_STATE_BITS-1:0] prior_state,
                    input bit                         prior_valid
                );
                option.name = instance_name;
                // The RTL permits self-holding in each operational state, but
                // these are deliberately excluded: a transition means a
                // consecutive change of state.
                transition : coverpoint {prior_valid, prior_state, current_state} {
                    bins reset_to_request    = {5'b1_00_00};
                    bins request_to_claim    = {5'b1_00_01};
                    bins claim_to_completion = {5'b1_01_10};
                    bins completion_to_request = {5'b1_10_00};
                    bins illegal_to_request  = {5'b1_11_00};
                }
            endgroup

            gateway_fsm_state_cg gateway_fsm_state_cov = new($sformatf(
                "gateway_fsm_source_%0d_state", fsm_source));
            gateway_fsm_transition_cg gateway_fsm_transition_cov = new($sformatf(
                "gateway_fsm_source_%0d_transition", fsm_source));

            always @(posedge hclk or negedge RST_vif.rst_n) begin
                if (!RST_vif.rst_n) begin
                    previous_state <= 2'b00;
                    previous_valid <= 1'b0;
                end
                else if (!$isunknown(dut.plic_core_inst.gen_gateway[fsm_source].gateway_inst.ip_state)) begin
                    gateway_fsm_state_cov.sample(
                        dut.plic_core_inst.gen_gateway[fsm_source].gateway_inst.ip_state);
                    gateway_fsm_transition_cov.sample(
                        dut.plic_core_inst.gen_gateway[fsm_source].gateway_inst.ip_state,
                        previous_state,
                        previous_valid);
                    previous_state <= dut.plic_core_inst.gen_gateway[fsm_source].gateway_inst.ip_state;
                    previous_valid <= 1'b1;
                end
                else begin
                    // Do not bridge an X/Z interval into a false transition.
                    previous_valid <= 1'b0;
                end
            end

            final begin
                $display("FSM_COVERAGE gateway_fsm_source_%0d state=%0.2f transition=%0.2f total=%0.2f",
                         fsm_source,
                         gateway_fsm_state_cov.get_coverage(),
                         gateway_fsm_transition_cov.get_coverage(),
                         (gateway_fsm_state_cov.get_coverage() +
                          gateway_fsm_transition_cov.get_coverage()) / 2.0);
            end
        end
    endgenerate

    // Waveform dump
    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, plic_ahb_test_top);
    end

    // Resource DB only, no config_db, no modports
    initial begin
        uvm_resource_db#(virtual plic_reset_if)::set("*", "rst_vif", RST_vif);
        uvm_resource_db#(virtual plic_ahb_lite_if)::set("*", "vif", AHB_LITE_vif);
        uvm_resource_db#(virtual plic_irq_if #(PLIC_SOURCES, PLIC_TARGETS))::set("*", "irq_vif", IRQ_vif);
        run_test();
    end
endmodule
