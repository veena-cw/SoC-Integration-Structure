`include "uvm_macros.svh"
import uvm_pkg::*;
class i2c_irq_item extends uvm_sequence_item;

    rand bit irq_enable;
         bit i2c_irq;
    `uvm_object_utils_begin(i2c_irq_item)
        `uvm_field_int(irq_enable, UVM_ALL_ON)
         `uvm_field_int(i2c_irq, UVM_ALL_ON)
    `uvm_object_utils_end

    function new(string name = "i2c_irq_item");
        super.new(name);
    endfunction

endclass
