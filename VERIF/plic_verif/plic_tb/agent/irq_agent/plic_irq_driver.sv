`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_irq_item_pkg::*;
class plic_irq_driver extends uvm_driver #(plic_irq_item);
  `uvm_component_utils(plic_irq_driver)
  virtual plic_irq_if #(PLIC_SOURCES, PLIC_TARGETS) vif;

  function new(string name = "plic_irq_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual plic_irq_if #(PLIC_SOURCES, PLIC_TARGETS))::read_by_name(get_full_name(), "irq_vif", vif))
      `uvm_fatal("NOVIF", "PLIC interrupt virtual interface 'irq_vif' not found")
  endfunction

  task run_phase(uvm_phase phase);
    vif.src <= '0;
    forever begin
      seq_item_port.get_next_item(req);
      wait (vif.rst_n === 1'b1);
      @(posedge vif.clk);
      if (req.op == IRQ_RAISE) vif.src <= vif.src |  req.mask;
      else                     vif.src <= vif.src & ~req.mask;
      seq_item_port.item_done();
    end
  endtask
endclass
