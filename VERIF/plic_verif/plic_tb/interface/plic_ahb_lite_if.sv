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

// Generated AHB-Lite Interface for RoaLogic_PLIC (verification only, no RTL)
interface plic_ahb_lite_if (
    input logic hclk,
    input logic hreset_n
);
    logic                    hwrite;
    logic [31:0]   haddr;
    logic [1:0]              htrans;
    logic [2:0]              hsize;
    logic [2:0]              hburst;
    logic [31:0]   hwdata;
    logic [31:0]   hrdata;
    logic                    hready;
    logic                    hresp;
    logic               hsel;
    logic               hreadyout;
endinterface
