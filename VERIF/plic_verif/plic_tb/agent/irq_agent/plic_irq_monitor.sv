`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_irq_item_pkg::*;

class plic_irq_monitor extends uvm_monitor;
  `uvm_component_utils(plic_irq_monitor)
  virtual plic_irq_if #(PLIC_SOURCES, PLIC_TARGETS) vif;
  uvm_analysis_port #(plic_irq_item) analysis_port;

  function new(string name = "plic_irq_monitor", uvm_component parent = null);
    super.new(name, parent);
    analysis_port = new("analysis_port", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(virtual plic_irq_if #(PLIC_SOURCES, PLIC_TARGETS))::read_by_name(get_full_name(), "irq_vif", vif))
      `uvm_fatal("NOVIF", "PLIC interrupt virtual interface 'irq_vif' not found")
  endfunction

  // Sample at negedge, when src[] and irq[] are stable
  task run_phase(uvm_phase phase);
    plic_irq_item tr;
    forever begin
      @(negedge vif.clk);
      tr = plic_irq_item::type_id::create("tr");
      tr.rst_n = (vif.rst_n === 1'b1);
      tr.src   = vif.src;
      tr.irq   = vif.irq;
      analysis_port.write(tr);
    end
  endtask
endclass
