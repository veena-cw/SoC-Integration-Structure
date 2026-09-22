// ------------------------------------------------------------
// reset_agent.sv
//
// Single instance in uart_env. Only drives/monitors rst_n --
// see reset_driver's header comment for why it never reaches
// into the uart_d1_agent / uart_d2_agent to pause or kill their
// sequences: their own drivers' reset-aware handshake (see
// uart_driver.drive_one) is what keeps a mid-reset transaction
// from being lost or mis-accepted.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class reset_agent extends uvm_agent;

    `uvm_component_utils(reset_agent)

    reset_sequencer sequencer;
    reset_driver    driver;
    reset_monitor   monitor;

    reset_agent_config cfg;

    virtual reset_if rst_vif;

    function new(string name = "reset_agent", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_resource_db#(reset_agent_config)::read_by_name(
                get_full_name(), "cfg", cfg)) begin
            `uvm_info(get_type_name(),
                "No reset_agent_config found -- using defaults (ACTIVE)",
                UVM_LOW)
            cfg = reset_agent_config::type_id::create("cfg");
        end

        this.is_active = cfg.is_active;

        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if rst_vif not set")

        uvm_resource_db#(virtual reset_if)::set(
            {get_full_name(), ".*"}, "rst_vif", rst_vif);

        monitor = reset_monitor::type_id::create("monitor", this);

        if (is_active == UVM_ACTIVE) begin
            sequencer = reset_sequencer::type_id::create("sequencer", this);
            driver    = reset_driver   ::type_id::create("driver",    this);
        end
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        if (is_active == UVM_ACTIVE)
            driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction

endclass
