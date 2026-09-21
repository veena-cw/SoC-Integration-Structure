//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: 
//  Module            				: 
//  Primary Unit Owner                         	: 
//  Secondary Contact                           : 
//  Source [SystemVerilog|Verilog|VHDL|Other]   : 
//=================================================================================
//  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
//=================================================================================

// Generated APB Interface for RoaLogic_PLIC (verification only, no RTL)
interface plic_apb_if (
    input logic pclk,
    input logic preset_n
);
    logic                    psel;
    logic                    penable;
    logic                    pwrite;
    logic [31:0]   paddr;
    logic [31:0]   pwdata;
    logic [31:0]   prdata;
    logic                    pready;
    logic                    pslverr;
    logic [3:0] pstrb;
endinterface
