// ------------------------------------------------------------
// uart_env.sv
//
//   d1_agent      (ACTIVE) -- drives/monitors apb_uart_top d1
//   d2_agent      (ACTIVE) -- drives/monitors apb_uart_top d2
//                             (same uart_agent class as d1,
//                             dev_tag="d2" -- see uart_agent.sv)
//   reset_agent   (ACTIVE) -- single rst_n source
//   virt_seqr     -- holds d1/d2/reset sequencers + the shared
//                    ral_model + adapter
//   ral_model     -- the ONE uart_ral_block instance. Its
//                    default_map is redirected between
//                    d1_agent.sequencer and d2_agent.sequencer
//                    by uart_virtual_sequence, per byte/step;
//                    register-regression sequences always run
//                    with it pointed at d1.
//   adapter       -- uart_apb_adapter (shared, stateless)
//   predictor     -- uart_apb_predictor, fed by BOTH monitors so
//                    the one shared mirror stays in sync no
//                    matter which device produced a transaction
//   scoreboard    -- single uart_scoreboard, fed by both monitors
//   cov           -- uart_coverage, fed by both monitors + both
//                    devices' irq_o pins
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_env extends uvm_env;

    `uvm_component_utils(uart_env)

    uart_agent   d1_agent;
    uart_agent   d2_agent;
    reset_agent  reset_agent_inst;

    uart_virtual_sequencer virt_seqr;

    uart_ral_block     ral_model;
    uart_apb_adapter   adapter;
    uart_apb_predictor predictor;

    uart_scoreboard scoreboard;
    uart_coverage   cov;

    function new(string name = "uart_env", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        // ---- device tags, so each agent's children get the
        // instance names the approved architecture diagram shows
        // (uart_d1_sequencer/driver/monitor, uart_d2_*) ----
        uvm_resource_db#(string)::set(
            {get_full_name(), ".d1_agent"}, "dev_tag", "d1");
        uvm_resource_db#(string)::set(
            {get_full_name(), ".d2_agent"}, "dev_tag", "d2");

        d1_agent         = uart_agent ::type_id::create("d1_agent", this);
        d2_agent         = uart_agent ::type_id::create("d2_agent", this);
        reset_agent_inst = reset_agent::type_id::create("reset_agent", this);

        virt_seqr = uart_virtual_sequencer::type_id::create("virt_seqr", this);

        // ---- the one shared RAL model ----
        ral_model = uart_ral_block::type_id::create("ral_model");
        ral_model.build();
        adapter   = uart_apb_adapter  ::type_id::create("adapter");
        predictor = uart_apb_predictor::type_id::create("predictor", this);

        scoreboard = uart_scoreboard::type_id::create("scoreboard", this);
        cov        = uart_coverage  ::type_id::create("cov",        this);
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);

        // ---- virtual sequencer hooks ----
        virt_seqr.d1_sequencer = d1_agent.sequencer;
        virt_seqr.d2_sequencer = d2_agent.sequencer;
        virt_seqr.reset_seqr   = reset_agent_inst.sequencer;
        virt_seqr.ral_model    = ral_model;
        virt_seqr.adapter      = adapter;
        virt_seqr.scoreboard   = scoreboard;

        // ---- RAL hook: d1 is the map's default/home target.
        // uart_virtual_sequence redirects this to d2_agent.sequencer
        // for whichever steps need d2 to be the frontdoor target,
        // and always redirects back to d1 before running any of
        // the register-regression sequences. ----
        ral_model.default_map.set_sequencer(d1_agent.sequencer, adapter);

        predictor.map     = ral_model.default_map;
        predictor.adapter = adapter;

        // ---- predictor snoops BOTH buses, so the one shared
        // mirror tracks whichever device a transaction actually
        // happened on ----
        d1_agent.monitor.analysis_port.connect(predictor.bus_in);
        d2_agent.monitor.analysis_port.connect(predictor.bus_in);

        // ---- scoreboard snoops both buses ----
        d1_agent.monitor.analysis_port.connect(scoreboard.d1_imp);
        d2_agent.monitor.analysis_port.connect(scoreboard.d2_imp);

        // ---- coverage snoops both buses ----
        d1_agent.monitor.analysis_port.connect(cov.monitor_d1_imp);
        d2_agent.monitor.analysis_port.connect(cov.monitor_d2_imp);

        // Note: cov's own vif_d1/vif_d2 (needed for irq_o polling)
        // are NOT set here -- build_phase already ran tree-wide by
        // the time connect_phase executes, and cov reads them in
        // its build_phase. tb_top sets those directly at cov's own
        // scope, the same way it sets vif directly at each agent's
        // scope, rather than env forwarding them late.

    endfunction

endclass
