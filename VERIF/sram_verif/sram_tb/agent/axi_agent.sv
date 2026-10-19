// ------------------------------------------------------------
// axi_agent.sv
//
// AXI4 master agent for sram_top's s_axi_* port.
//
// Config flow:
//     Test/Top -> uvm_resource_db -> axi_agent_config -> this
//     agent -> driver / sequencer / monitor
// The agent re-publishes vif, rst_vif and cfg to its own
// children's scope so their get_full_name()-scoped lookups
// resolve.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class axi_agent extends uvm_agent;

    `uvm_component_utils(axi_agent)

    axi_sequencer sequencer;
    axi_driver    driver;
    axi_monitor   monitor;

    axi_agent_config cfg;

    virtual axi_if   vif;
    virtual reset_if rst_vif;

    // UVM constructor.
    function new(string name = "axi_agent", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Get the agent config, vif and rst_vif from uvm_resource_db, re-publish
    // them to the children's scope, then create monitor (always) and
    // sequencer + driver (UVM_ACTIVE only).
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_resource_db#(axi_agent_config)::read_by_name(
                get_full_name(), "cfg", cfg)) begin
            `uvm_info(get_type_name(),
                "No axi_agent_config found -- using defaults (ACTIVE)", UVM_LOW)
            cfg = axi_agent_config::type_id::create("cfg");
        end

        this.is_active = cfg.is_active;

        if (!uvm_resource_db#(virtual axi_if)::read_by_name(
                get_full_name(), "vif", vif))
            `uvm_fatal(get_type_name(), "axi_if vif not set")

        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if rst_vif not set")

        uvm_resource_db#(virtual axi_if)::set(
            {get_full_name(), ".*"}, "vif", vif);
        uvm_resource_db#(virtual reset_if)::set(
            {get_full_name(), ".*"}, "rst_vif", rst_vif);
        uvm_resource_db#(axi_agent_config)::set(
            {get_full_name(), ".*"}, "cfg", cfg);

        monitor = axi_monitor::type_id::create("axi_monitor", this);

        if (is_active == UVM_ACTIVE) begin
            sequencer = axi_sequencer::type_id::create("axi_sequencer", this);
            driver    = axi_driver   ::type_id::create("axi_driver",    this);
        end
    endfunction

    // Connect driver.seq_item_port to the sequencer (UVM_ACTIVE only).
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        if (is_active == UVM_ACTIVE)
            driver.seq_item_port.connect(sequencer.seq_item_export);
    endfunction

endclass
