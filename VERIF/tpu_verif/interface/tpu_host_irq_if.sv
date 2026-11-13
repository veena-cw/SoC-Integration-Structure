//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: TPU
//  Module            				: tpu_host_irq_if
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: irq output of tpu_host_top (level, synchronized to clk_axil), observed by the passive
//               IRQ agent.
//=================================================================================
interface tpu_host_irq_if (input logic clk_axil);
  logic rst_n;
  logic irq;

  clocking mon_cb @(posedge clk_axil);
    default input #1step;
    input irq;
  endclocking

  modport MONITOR (clocking mon_cb, input clk_axil, input rst_n);

`ifdef SVA_ON
  // irq comes from a 2-flop synchronizer with an asynchronously asserted reset: 0 while rst_n is low,
  // never X / Z once rst_n is released
  always @(posedge clk_axil) begin
    if (rst_n === 1'b0 && irq !== 1'b0) $error("IRQ: irq = %b while rst_n is low", irq);
    if (rst_n === 1'b1 && $isunknown(irq)) $error("IRQ: X on irq after reset");
  end
`endif
endinterface : tpu_host_irq_if
