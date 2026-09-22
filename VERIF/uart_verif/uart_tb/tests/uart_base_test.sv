// ------------------------------------------------------------
// uart_base_test.sv
//
// Builds uart_env and provides run_scenario(), a small helper
// that runs one uart_virtual_sequence with a given mode/byte
// count under its own objection. Derived tests call this one or
// more times; a bare uart_base_test on its own runs one
// FULL_DUPLEX scenario.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_base_test extends uvm_test;

    `uvm_component_utils(uart_base_test)

    uart_env env;

    function new(string name = "uart_base_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        uart_agent_config   d1_cfg;
        uart_agent_config   d2_cfg;
        reset_agent_config  rst_cfg;

        super.build_phase(phase);

        // ---- Test/Top -> uvm_resource_db -> Agent Configuration.
        // Both uart devices are ACTIVE with coverage on: they both
        // send and receive data in every mode. Set explicitly here
        // (rather than relying on uart_agent's own fallback
        // default) so a derived test can override any of these
        // before calling super.build_phase(), per the approved
        // config flow. ----
        d1_cfg = uart_agent_config::type_id::create("d1_cfg");
        d1_cfg.is_active       = UVM_ACTIVE;
        d1_cfg.coverage_enable = 1'b1;
        uvm_resource_db#(uart_agent_config)::set(
            "uvm_test_top.env.d1_agent", "cfg", d1_cfg);

        d2_cfg = uart_agent_config::type_id::create("d2_cfg");
        d2_cfg.is_active       = UVM_ACTIVE;
        d2_cfg.coverage_enable = 1'b1;
        uvm_resource_db#(uart_agent_config)::set(
            "uvm_test_top.env.d2_agent", "cfg", d2_cfg);

        rst_cfg = reset_agent_config::type_id::create("rst_cfg");
        rst_cfg.is_active       = UVM_ACTIVE;
        rst_cfg.coverage_enable = 1'b1;
        uvm_resource_db#(reset_agent_config)::set(
            "uvm_test_top.env.reset_agent", "cfg", rst_cfg);

        env = uart_env::type_id::create("env", this);
    endfunction

    protected task run_scenario(uart_virtual_sequence::mode_e mode,
                                 int unsigned num_bytes = 4);
        uart_virtual_sequence vseq;

        vseq = uart_virtual_sequence::type_id::create("vseq");
        vseq.mode      = mode;
        vseq.num_bytes = num_bytes;

        vseq.start(env.virt_seqr);
    endtask

    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);

        `uvm_info(get_type_name(), "uart_base_test: running one FULL_DUPLEX scenario", UVM_LOW)
        run_scenario(uart_virtual_sequence::FULL_DUPLEX, 4);

        phase.drop_objection(this);
    endtask

endclass
