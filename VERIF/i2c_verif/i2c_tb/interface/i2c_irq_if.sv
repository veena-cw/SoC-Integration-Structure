`include "uvm_macros.svh"
import uvm_pkg::*;
interface i2c_irq_if(input logic clk);

    logic i2c_irq_en;
    logic i2c_irq;

endinterface
