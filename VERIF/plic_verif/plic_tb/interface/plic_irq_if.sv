//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: SoC Integration
//  Module            				: plic_irq_if
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Interrupt-side interface of the PLIC. The interrupt BFM drives
//               src[], the interrupt monitor samples src[] and irq[].
//=================================================================================

// Interrupt Interface for RoaLogic_PLIC - no modports, resource_db only
interface plic_irq_if #(
    parameter int SOURCES = 16,
    parameter int TARGETS = 4
) (
    input logic clk,
    input logic rst_n
);
    logic [SOURCES-1:0] src;   // driven by plic_irq_driver (BFM)
    logic [TARGETS-1:0] irq;   // driven by DUT
endinterface
