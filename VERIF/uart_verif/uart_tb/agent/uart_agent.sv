// ------------------------------------------------------------
// uart_agent.sv
//
// One agent class, instantiated twice in uart_env (as d1_agent
// and d2_agent) -- this satisfies "only 3 agents overall,
// replicate the same agent for the second device" rather than
// writing a second, near-duplicate agent class.
//
// dev_tag ("d1" / "d2") is set by uart_env via uvm_resource_db
// BEFORE build_phase runs, and is used only to name this
// agent's children so the component tree matches the approved
// architecture diagram exactly:
//     d1_agent.sequencer -> instance name "uart_d1_sequencer"
//     d1_agent.driver     -> instance name "uart_d1_driver"
//     d1_agent.monitor    -> instance name "uart_d1_monitor"
// (and uart_d2_* for the d2 instance). dev_tag is plumbing for
// naming only -- it carries no protocol behavior, which is why
// it lives here and not in uart_agent_config.
//
// Whether this agent's sequencer ends up wired to the RAL model
// is decided in uart_env.connect_phase (d1 only), not here --
// this class has no RAL awareness of its own.
//
// Config flow (per the approved methodology):
//     Test/Top -> uvm_resource_db -> uart_agent_config -> this
//     agent -> driver / sequencer / monitor
// This agent reads its own uart_agent_config here, applies
// is_active, and re-publishes the virtual interfaces to its own
// full-name scope so its children's build_phase lookups
// (get_full_name()-scoped) resolve.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_agent extends uvm_agent;

    `uvm_component_utils(uart_agent)

    uart_sequencer sequencer;
    uart_driver    driver;
    uart_monitor   monitor;

    uart_agent_config cfg;

    string dev_tag = "d1";

    virtual uart_if  vif;
    virtual reset_if rst_vif;

    function new(string name = "uart_agent", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        void'(uvm_resource_db#(string)::read_by_name(
                get_full_name(), "dev_tag", dev_tag));

        if (!uvm_resource_db#(uart_agent_config)::read_by_name(
                get_full_name(), "cfg", cfg)) begin
            `uvm_info(get_type_name(),
                "No uart_agent_config found -- using defaults (ACTIVE, coverage on)",
                UVM_LOW)
            cfg = uart_agent_config::type_id::create("cfg");
        end

        this.is_active = cfg.is_active;

        if (!uvm_resource_db#(virtual uart_if)::read_by_name(
                get_full_name(), "vif", vif))
            `uvm_fatal(get_type_name(), "uart_if vif not set")

        if (!uvm_resource_db#(virtual reset_if)::read_by_name(
                get_full_name(), "rst_vif", rst_vif))
            `uvm_fatal(get_type_name(), "reset_if rst_vif not set")

        // Forward vifs down to this agent's own children scope.
        uvm_resource_db#(virtual uart_if)::set(
            {get_full_name(), ".*"}, "vif", vif);
        uvm_resource_db#(virtual reset_if)::set(
            {get_full_name(), ".*"}, "rst_vif", rst_vif);

        monitor = uart_monitor::type_id::create(
            $sformatf("uart_%s_monitor", dev_tag), this);

        if (is_active == UVM_ACTIVE) begin
            sequencer = uart_sequencer::type_id::create(
                $sformatf("uart_%s_sequencer", dev_tag), this);
            driver = uart_driver::type_id::create(
                $sformatf("uart_%s_driver", dev_tag), this);
        end

    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);

        if (is_active == UVM_ACTIVE)
            driver.seq_item_port.connect(sequencer.seq_item_export);

    endfunction

endclass
