`include "uvm_macros.svh"
import uvm_pkg::*;

class lpddr5c_lp_agent extends uvm_agent;

    `uvm_component_utils(lpddr5c_lp_agent)


    //======================================================================
    // Components
    //======================================================================

    lpddr5c_lp_agent_sequencer sequencer;

    lpddr5c_lp_agent_driver    driver;

    lpddr5c_lp_agent_monitor   monitor;


    //======================================================================
    // Constructor
    //======================================================================

    function new(
        string name = "lpddr5c_lp_agent",
        uvm_component parent = null
    );

        super.new(name, parent);

    endfunction


    //======================================================================
    // Build phase
    //======================================================================

    function void build_phase(uvm_phase phase);

        super.build_phase(phase);

        monitor =
            lpddr5c_lp_agent_monitor::type_id::create(
                "monitor",
                this
            );


        if (is_active == UVM_ACTIVE) begin

            sequencer =
                lpddr5c_lp_agent_sequencer::type_id::create(
                    "sequencer",
                    this
                );

            driver =
                lpddr5c_lp_agent_driver::type_id::create(
                    "driver",
                    this
                );

        end

    endfunction


    //======================================================================
    // Connect phase
    //======================================================================

    function void connect_phase(uvm_phase phase);

        super.connect_phase(phase);

        if (is_active == UVM_ACTIVE) begin

            driver.seq_item_port.connect(
                sequencer.seq_item_export
            );

        end

    endfunction

endclass
