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

// Generated UVM RAL Package for APB_to_I2C_Controller
// IP: APB_I2C v1.0
// Base Address: 0x30010000
// Bus-independent RAL model

package apb_i2c_ral_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"

  // Declare the UVM RAL class for CTRL_REG.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ctrl_reg_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ctrl_reg_reg objects through the factory.
    `uvm_object_utils(ctrl_reg_reg)
    // UVM register field for SLAVE_ADDR [6:0]
    rand uvm_reg_field SLAVE_ADDR;
    // UVM register field for READ_WRITE [7:7]
    rand uvm_reg_field READ_WRITE;
    // UVM register field for RESERVED [31:8]
    rand uvm_reg_field RESERVED;

    // Constructor for ctrl_reg_reg
    function new(string name = "ctrl_reg_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      SLAVE_ADDR = uvm_reg_field::type_id::create("SLAVE_ADDR");
      // Configure the field:
      //   width       = number of bits (7)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      SLAVE_ADDR.configure(this, 7, 0, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      READ_WRITE = uvm_reg_field::type_id::create("READ_WRITE");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      READ_WRITE.configure(this, 1, 7, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (24)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 24, 8, "RO", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for STATUS_REG.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class status_reg_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create status_reg_reg objects through the factory.
    `uvm_object_utils(status_reg_reg)
    // UVM register field for I2C_BUSY [0:0]
    rand uvm_reg_field I2C_BUSY;
    // UVM register field for I2C_DONE [1:1]
    rand uvm_reg_field I2C_DONE;
    // UVM register field for SLAVE_ERROR [2:2]
    rand uvm_reg_field SLAVE_ERROR;
    // UVM register field for RESERVED [31:3]
    rand uvm_reg_field RESERVED;

    // Constructor for status_reg_reg
    function new(string name = "status_reg_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      I2C_BUSY = uvm_reg_field::type_id::create("I2C_BUSY");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      I2C_BUSY.configure(this, 1, 0, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      I2C_DONE = uvm_reg_field::type_id::create("I2C_DONE");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (1)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      I2C_DONE.configure(this, 1, 1, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      SLAVE_ERROR = uvm_reg_field::type_id::create("SLAVE_ERROR");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (2)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      SLAVE_ERROR.configure(this, 1, 2, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (29)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 29, 3, "RO", 1, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for TXDATA_REG.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class txdata_reg_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create txdata_reg_reg objects through the factory.
    `uvm_object_utils(txdata_reg_reg)
    // UVM register field for TRANSMIT_DATA [31:0]
    rand uvm_reg_field TRANSMIT_DATA;

    // Constructor for txdata_reg_reg
    function new(string name = "txdata_reg_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      TRANSMIT_DATA = uvm_reg_field::type_id::create("TRANSMIT_DATA");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      TRANSMIT_DATA.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for RXDATA_REG.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class rxdata_reg_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create rxdata_reg_reg objects through the factory.
    `uvm_object_utils(rxdata_reg_reg)
    // UVM register field for RECEIVE_DATA [7:0]
    rand uvm_reg_field RECEIVE_DATA;
    // UVM register field for RESERVED [31:8]
    rand uvm_reg_field RESERVED;

    // Constructor for rxdata_reg_reg
    function new(string name = "rxdata_reg_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RECEIVE_DATA = uvm_reg_field::type_id::create("RECEIVE_DATA");
      // Configure the field:
      //   width       = number of bits (8)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RECEIVE_DATA.configure(this, 8, 0, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (24)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 24, 8, "RO", 1, 0, 1, 1, 1);
    endfunction

  endclass

endpackage
