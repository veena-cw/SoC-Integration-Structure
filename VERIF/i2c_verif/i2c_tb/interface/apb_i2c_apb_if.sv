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

// Generated APB Interface for APB_to_I2C_Controller (verification only, no RTL)
import uvm_pkg::*;
interface apb_i2c_apb_if (
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
    
    
     //============================================================
    // Temporary PREADY generation
    //============================================================
/*
    always @(posedge pclk) begin

        if (!preset_n) begin
            pready <= 1'b0;
        end

        else if (psel && penable) begin
            pready <= 1'b1;
        end

        else begin
            pready <= 1'b0;
        end

    end*/
    /*
    property apb_reset_idle_check;
  @(posedge pclk)
  !preset_n |-> (!psel && !penable);
endproperty

assert property (apb_reset_idle_check)
  else `uvm_error("APB_ASSERT",
                  "APB is not IDLE after reset: PSEL/PENABLE must be LOW");
                  
                  
   property apb_setup_check;
  @(posedge pclk) disable iff (!preset_n)
  (!psel && penable==1'b0) |-> ##1
    (psel && penable==1'b0);
endproperty

assert property (apb_setup_check)
  else `uvm_error("APB_ASSERT",
                  "APB SETUP phase violation: PSEL must be HIGH and PENABLE LOW");
                  
  property apb_access_check;
  @(posedge pclk) disable iff(!preset_n)
  (psel && penable==1'b0) |=> (psel && penable);
endproperty

assert property (apb_access_check)
  else `uvm_error("APB_ASSERT",
                  "APB ACCESS violation: PSEL must remain HIGH and PENABLE must become HIGH");
                  
property apb_access_stable_check;
  @(posedge pclk)
  (psel && penable && !pready) |=> 
    (psel && penable);
endproperty

assert property (apb_access_stable_check)
  else `uvm_error("APB_ASSERT",
                  "APB ACCESS violation: PSEL/PENABLE changed before PREADY");     */                                            
endinterface
