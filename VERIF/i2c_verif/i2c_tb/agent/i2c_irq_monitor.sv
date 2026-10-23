`include "uvm_macros.svh"
import uvm_pkg::*;
class i2c_irq_monitor extends uvm_monitor;

    `uvm_component_utils(i2c_irq_monitor)

    virtual i2c_irq_if vif;

    uvm_analysis_port #(i2c_irq_item) analysis_port;

    function new(string name = "i2c_irq_monitor",
                 uvm_component parent = null);
        super.new(name, parent);

        analysis_port = new("analysis_port", this);
    endfunction
function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_resource_db#(virtual i2c_irq_if)::read_by_name(
            get_full_name(),
            "irq_vif",
            vif)) begin

        `uvm_fatal("IRQ_VIF",
            "Failed to get irq_vif in IRQ monitor")
    end
endfunction

    task run_phase(uvm_phase phase);

        forever begin

            @(posedge vif.clk);

            if (vif.i2c_irq) begin

                `uvm_info("IRQ_MON",
                    "I2C IRQ detected",
                    UVM_MEDIUM)

                // Create IRQ transaction and send to scoreboard

            end

        end

    endtask

endclass
