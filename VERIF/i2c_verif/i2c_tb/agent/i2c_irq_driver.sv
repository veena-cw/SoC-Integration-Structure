`include "uvm_macros.svh"
import uvm_pkg::*;
class i2c_irq_driver extends uvm_driver #(i2c_irq_item);

    `uvm_component_utils(i2c_irq_driver)

    virtual i2c_irq_if vif;

    function new(string name = "i2c_irq_driver",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction
function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_resource_db#(virtual i2c_irq_if)::read_by_name(
            get_full_name(),
            "irq_vif",
            vif)) begin

        `uvm_fatal("IRQ_VIF",
            "Failed to get irq_vif in IRQ driver")
    end
endfunction
    task run_phase(uvm_phase phase);

        forever begin

            seq_item_port.get_next_item(req);

            @(posedge vif.clk);

            vif.i2c_irq_en <= req.irq_enable;

            `uvm_info("IRQ_DRV",
                $sformatf("i2c_irq_en = %0b",
                          req.irq_enable),
                UVM_MEDIUM)

            seq_item_port.item_done();

        end

    endtask

endclass
