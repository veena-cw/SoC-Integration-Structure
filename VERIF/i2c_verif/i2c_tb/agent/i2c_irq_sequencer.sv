`include "uvm_macros.svh"
import uvm_pkg::*;
class i2c_irq_sequencer extends uvm_sequencer #(i2c_irq_item );
  `uvm_component_utils(i2c_irq_sequencer)
  function new(string name = "i2c_irq_sequencer", uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass
