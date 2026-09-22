// ------------------------------------------------------------
// uart_apb_predictor.sv
//
// uvm_reg_predictor#(uart_seq_item) is a uvm_component (it must
// sit in the component tree so its bus_in analysis export can
// be connected in connect_phase), not a uvm_object -- so it is
// registered and constructed as a component here:
// `uvm_component_utils + super.new(name, parent).
//
// A predictor built with `uvm_object_utils instead compiles
// (uvm_object_registry::create() only ever calls new(name), and
// this class's parent arg has a default), but the object then
// gets constructed with parent=null through uvm_root rather
// than under uart_env, so it ends up in the wrong place in the
// component hierarchy even though no error is raised. Since
// this project now routes configuration through
// uvm_resource_db scopes built from get_full_name(), a
// mis-parented component is exactly the kind of thing that
// would silently break a scope match, so this is fixed here.
//
// ONE instance is shared for the whole environment: its bus_in
// is fed by BOTH d1_agent.monitor.analysis_port and
// d2_agent.monitor.analysis_port (see uart_env.connect_phase),
// so the single ral_model's mirror stays in sync no matter
// which device's bus a given transaction actually appeared on.
// ------------------------------------------------------------
`include "uvm_macros.svh"
import uvm_pkg::*;

class uart_apb_predictor extends uvm_reg_predictor #(uart_seq_item);

    `uvm_component_utils(uart_apb_predictor)

    function new(string name = "uart_apb_predictor",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

endclass
