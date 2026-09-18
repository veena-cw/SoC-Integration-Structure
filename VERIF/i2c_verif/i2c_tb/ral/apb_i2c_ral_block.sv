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

// Generated UVM RAL Block for APB_to_I2C_Controller
// IP: APB_I2C
// Bus-independent

package apb_i2c_ral_block_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  import apb_i2c_ral_pkg::*;

  class apb_i2c_ral_block extends uvm_reg_block;
    `uvm_object_utils(apb_i2c_ral_block)
    rand ctrl_reg_reg CTRL_REG; // original: CTRL_REG @'h10
    rand status_reg_reg STATUS_REG; // original: STATUS_REG @'h14
    rand txdata_reg_reg TXDATA_REG; // original: TXDATA_REG @'h18
    rand rxdata_reg_reg RXDATA_REG; // original: RXDATA_REG @'h1C
    uvm_reg_map default_map;

    function new(string name = "apb_i2c_ral_block");
      super.new(name, UVM_NO_COVERAGE);
    endfunction

    virtual function void build();
      default_map = create_map("default_map", 32'h30010000, 4, UVM_LITTLE_ENDIAN, 0);

      CTRL_REG = ctrl_reg_reg::type_id::create("CTRL_REG");
      CTRL_REG.configure(this, null, "");
      CTRL_REG.build();
      default_map.add_reg(CTRL_REG, 'h10, "RW");

      STATUS_REG = status_reg_reg::type_id::create("STATUS_REG");
      STATUS_REG.configure(this, null, "");
      STATUS_REG.build();
      default_map.add_reg(STATUS_REG, 'h14, "RO");

      TXDATA_REG = txdata_reg_reg::type_id::create("TXDATA_REG");
      TXDATA_REG.configure(this, null, "");
      TXDATA_REG.build();
      default_map.add_reg(TXDATA_REG, 'h18, "RW");

      RXDATA_REG = rxdata_reg_reg::type_id::create("RXDATA_REG");
      RXDATA_REG.configure(this, null, "");
      RXDATA_REG.build();
      default_map.add_reg(RXDATA_REG, 'h1C, "RO");

    endfunction

  endclass

endpackage
