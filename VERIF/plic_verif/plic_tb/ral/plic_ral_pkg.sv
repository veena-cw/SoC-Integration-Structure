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

// Generated UVM RAL Package for RoaLogic_PLIC
// IP: PLIC v1.0
// Base Address: 0x00000000
// Bus-independent RAL model

package plic_ral_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"

  // Declare the UVM RAL class for CONFIG_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class config_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create config_0_reg objects through the factory.
    `uvm_object_utils(config_0_reg)
    // UVM register field for TARGETS [31:16]
    rand uvm_reg_field TARGETS;
    // UVM register field for SOURCES [15:0]
    rand uvm_reg_field SOURCES;

    // Constructor for config_0_reg
    function new(string name = "config_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      TARGETS = uvm_reg_field::type_id::create("TARGETS");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RO"
      //   reset       = reset value 4
      //   volatile    = whether the field value can change independently
      TARGETS.configure(this, 16, 16, "RO", 0, 4, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      SOURCES = uvm_reg_field::type_id::create("SOURCES");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RO"
      //   reset       = reset value 16
      //   volatile    = whether the field value can change independently
      SOURCES.configure(this, 16, 0, "RO", 0, 16, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for CONFIG_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class config_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create config_1_reg objects through the factory.
    `uvm_object_utils(config_1_reg)
    // UVM register field for RESERVED [31:17]
    rand uvm_reg_field RESERVED;
    // UVM register field for HAS_THRESHOLD [16:16]
    rand uvm_reg_field HAS_THRESHOLD;
    // UVM register field for PRIORITIES [15:0]
    rand uvm_reg_field PRIORITIES;

    // Constructor for config_1_reg
    function new(string name = "config_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (15)
      //   lsb         = least-significant bit position (17)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 15, 17, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      HAS_THRESHOLD = uvm_reg_field::type_id::create("HAS_THRESHOLD");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RO"
      //   reset       = reset value 1
      //   volatile    = whether the field value can change independently
      HAS_THRESHOLD.configure(this, 1, 16, "RO", 0, 1, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      PRIORITIES = uvm_reg_field::type_id::create("PRIORITIES");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RO"
      //   reset       = reset value 8
      //   volatile    = whether the field value can change independently
      PRIORITIES.configure(this, 16, 0, "RO", 0, 8, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for EL_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class el_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create el_0_reg objects through the factory.
    `uvm_object_utils(el_0_reg)
    // UVM register field for RESERVED [31:16]
    rand uvm_reg_field RESERVED;
    // UVM register field for EL [15:0]
    rand uvm_reg_field EL;

    // Constructor for el_0_reg
    function new(string name = "el_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 16, 16, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      EL = uvm_reg_field::type_id::create("EL");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      EL.configure(this, 16, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for PRIORITY_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class priority_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create priority_0_reg objects through the factory.
    `uvm_object_utils(priority_0_reg)
    // UVM register field for P7_RESERVED [31:31]
    rand uvm_reg_field P7_RESERVED;
    // UVM register field for P7 [30:28]
    rand uvm_reg_field P7;
    // UVM register field for P6_RESERVED [27:27]
    rand uvm_reg_field P6_RESERVED;
    // UVM register field for P6 [26:24]
    rand uvm_reg_field P6;
    // UVM register field for P5_RESERVED [23:23]
    rand uvm_reg_field P5_RESERVED;
    // UVM register field for P5 [22:20]
    rand uvm_reg_field P5;
    // UVM register field for P4_RESERVED [19:19]
    rand uvm_reg_field P4_RESERVED;
    // UVM register field for P4 [18:16]
    rand uvm_reg_field P4;
    // UVM register field for P3_RESERVED [15:15]
    rand uvm_reg_field P3_RESERVED;
    // UVM register field for P3 [14:12]
    rand uvm_reg_field P3;
    // UVM register field for P2_RESERVED [11:11]
    rand uvm_reg_field P2_RESERVED;
    // UVM register field for P2 [10:8]
    rand uvm_reg_field P2;
    // UVM register field for P1_RESERVED [7:7]
    rand uvm_reg_field P1_RESERVED;
    // UVM register field for P1 [6:4]
    rand uvm_reg_field P1;
    // UVM register field for P0_RESERVED [3:3]
    rand uvm_reg_field P0_RESERVED;
    // UVM register field for P0 [2:0]
    rand uvm_reg_field P0;

    // Constructor for priority_0_reg
    function new(string name = "priority_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      P7_RESERVED = uvm_reg_field::type_id::create("P7_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (31)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P7_RESERVED.configure(this, 1, 31, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P7 = uvm_reg_field::type_id::create("P7");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (28)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P7.configure(this, 3, 28, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P6_RESERVED = uvm_reg_field::type_id::create("P6_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (27)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P6_RESERVED.configure(this, 1, 27, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P6 = uvm_reg_field::type_id::create("P6");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (24)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P6.configure(this, 3, 24, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P5_RESERVED = uvm_reg_field::type_id::create("P5_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (23)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P5_RESERVED.configure(this, 1, 23, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P5 = uvm_reg_field::type_id::create("P5");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (20)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P5.configure(this, 3, 20, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P4_RESERVED = uvm_reg_field::type_id::create("P4_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (19)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P4_RESERVED.configure(this, 1, 19, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P4 = uvm_reg_field::type_id::create("P4");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P4.configure(this, 3, 16, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P3_RESERVED = uvm_reg_field::type_id::create("P3_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (15)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P3_RESERVED.configure(this, 1, 15, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P3 = uvm_reg_field::type_id::create("P3");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (12)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P3.configure(this, 3, 12, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P2_RESERVED = uvm_reg_field::type_id::create("P2_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (11)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P2_RESERVED.configure(this, 1, 11, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P2 = uvm_reg_field::type_id::create("P2");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P2.configure(this, 3, 8, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P1_RESERVED = uvm_reg_field::type_id::create("P1_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P1_RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P1 = uvm_reg_field::type_id::create("P1");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (4)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P1.configure(this, 3, 4, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P0_RESERVED = uvm_reg_field::type_id::create("P0_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P0_RESERVED.configure(this, 1, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P0 = uvm_reg_field::type_id::create("P0");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P0.configure(this, 3, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for PRIORITY_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class priority_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create priority_1_reg objects through the factory.
    `uvm_object_utils(priority_1_reg)
    // UVM register field for P15_RESERVED [31:31]
    rand uvm_reg_field P15_RESERVED;
    // UVM register field for P15 [30:28]
    rand uvm_reg_field P15;
    // UVM register field for P14_RESERVED [27:27]
    rand uvm_reg_field P14_RESERVED;
    // UVM register field for P14 [26:24]
    rand uvm_reg_field P14;
    // UVM register field for P13_RESERVED [23:23]
    rand uvm_reg_field P13_RESERVED;
    // UVM register field for P13 [22:20]
    rand uvm_reg_field P13;
    // UVM register field for P12_RESERVED [19:19]
    rand uvm_reg_field P12_RESERVED;
    // UVM register field for P12 [18:16]
    rand uvm_reg_field P12;
    // UVM register field for P11_RESERVED [15:15]
    rand uvm_reg_field P11_RESERVED;
    // UVM register field for P11 [14:12]
    rand uvm_reg_field P11;
    // UVM register field for P10_RESERVED [11:11]
    rand uvm_reg_field P10_RESERVED;
    // UVM register field for P10 [10:8]
    rand uvm_reg_field P10;
    // UVM register field for P9_RESERVED [7:7]
    rand uvm_reg_field P9_RESERVED;
    // UVM register field for P9 [6:4]
    rand uvm_reg_field P9;
    // UVM register field for P8_RESERVED [3:3]
    rand uvm_reg_field P8_RESERVED;
    // UVM register field for P8 [2:0]
    rand uvm_reg_field P8;

    // Constructor for priority_1_reg
    function new(string name = "priority_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      P15_RESERVED = uvm_reg_field::type_id::create("P15_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (31)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P15_RESERVED.configure(this, 1, 31, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P15 = uvm_reg_field::type_id::create("P15");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (28)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P15.configure(this, 3, 28, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P14_RESERVED = uvm_reg_field::type_id::create("P14_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (27)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P14_RESERVED.configure(this, 1, 27, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P14 = uvm_reg_field::type_id::create("P14");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (24)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P14.configure(this, 3, 24, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P13_RESERVED = uvm_reg_field::type_id::create("P13_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (23)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P13_RESERVED.configure(this, 1, 23, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P13 = uvm_reg_field::type_id::create("P13");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (20)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P13.configure(this, 3, 20, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P12_RESERVED = uvm_reg_field::type_id::create("P12_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (19)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P12_RESERVED.configure(this, 1, 19, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P12 = uvm_reg_field::type_id::create("P12");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P12.configure(this, 3, 16, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P11_RESERVED = uvm_reg_field::type_id::create("P11_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (15)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P11_RESERVED.configure(this, 1, 15, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P11 = uvm_reg_field::type_id::create("P11");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (12)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P11.configure(this, 3, 12, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P10_RESERVED = uvm_reg_field::type_id::create("P10_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (11)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P10_RESERVED.configure(this, 1, 11, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P10 = uvm_reg_field::type_id::create("P10");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P10.configure(this, 3, 8, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P9_RESERVED = uvm_reg_field::type_id::create("P9_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P9_RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P9 = uvm_reg_field::type_id::create("P9");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (4)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P9.configure(this, 3, 4, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P8_RESERVED = uvm_reg_field::type_id::create("P8_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P8_RESERVED.configure(this, 1, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P8 = uvm_reg_field::type_id::create("P8");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P8.configure(this, 3, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_0_reg objects through the factory.
    `uvm_object_utils(ie_0_reg)
    // UVM register field for RESERVED [31:16]
    rand uvm_reg_field RESERVED;
    // UVM register field for IE [15:0]
    rand uvm_reg_field IE;

    // Constructor for ie_0_reg
    function new(string name = "ie_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 16, 16, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 16, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_1_reg objects through the factory.
    `uvm_object_utils(ie_1_reg)
    // UVM register field for RESERVED [31:16]
    rand uvm_reg_field RESERVED;
    // UVM register field for IE [15:0]
    rand uvm_reg_field IE;

    // Constructor for ie_1_reg
    function new(string name = "ie_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 16, 16, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 16, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_2.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_2_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_2_reg objects through the factory.
    `uvm_object_utils(ie_2_reg)
    // UVM register field for RESERVED [31:16]
    rand uvm_reg_field RESERVED;
    // UVM register field for IE [15:0]
    rand uvm_reg_field IE;

    // Constructor for ie_2_reg
    function new(string name = "ie_2_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 16, 16, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 16, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_3.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_3_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_3_reg objects through the factory.
    `uvm_object_utils(ie_3_reg)
    // UVM register field for RESERVED [31:16]
    rand uvm_reg_field RESERVED;
    // UVM register field for IE [15:0]
    rand uvm_reg_field IE;

    // Constructor for ie_3_reg
    function new(string name = "ie_3_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 16, 16, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (16)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 16, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for THRESHOLD_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class threshold_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create threshold_0_reg objects through the factory.
    `uvm_object_utils(threshold_0_reg)
    // UVM register field for RESERVED [31:3]
    rand uvm_reg_field RESERVED;
    // UVM register field for THRESHOLD [2:0]
    rand uvm_reg_field THRESHOLD;

    // Constructor for threshold_0_reg
    function new(string name = "threshold_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (29)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 29, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      THRESHOLD = uvm_reg_field::type_id::create("THRESHOLD");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      THRESHOLD.configure(this, 3, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for THRESHOLD_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class threshold_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create threshold_1_reg objects through the factory.
    `uvm_object_utils(threshold_1_reg)
    // UVM register field for RESERVED [31:3]
    rand uvm_reg_field RESERVED;
    // UVM register field for THRESHOLD [2:0]
    rand uvm_reg_field THRESHOLD;

    // Constructor for threshold_1_reg
    function new(string name = "threshold_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (29)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 29, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      THRESHOLD = uvm_reg_field::type_id::create("THRESHOLD");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      THRESHOLD.configure(this, 3, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for THRESHOLD_2.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class threshold_2_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create threshold_2_reg objects through the factory.
    `uvm_object_utils(threshold_2_reg)
    // UVM register field for RESERVED [31:3]
    rand uvm_reg_field RESERVED;
    // UVM register field for THRESHOLD [2:0]
    rand uvm_reg_field THRESHOLD;

    // Constructor for threshold_2_reg
    function new(string name = "threshold_2_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (29)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 29, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      THRESHOLD = uvm_reg_field::type_id::create("THRESHOLD");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      THRESHOLD.configure(this, 3, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for THRESHOLD_3.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class threshold_3_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create threshold_3_reg objects through the factory.
    `uvm_object_utils(threshold_3_reg)
    // UVM register field for RESERVED [31:3]
    rand uvm_reg_field RESERVED;
    // UVM register field for THRESHOLD [2:0]
    rand uvm_reg_field THRESHOLD;

    // Constructor for threshold_3_reg
    function new(string name = "threshold_3_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (29)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 29, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      THRESHOLD = uvm_reg_field::type_id::create("THRESHOLD");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      THRESHOLD.configure(this, 3, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for ID_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class id_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create id_0_reg objects through the factory.
    `uvm_object_utils(id_0_reg)
    // UVM register field for RESERVED [31:5]
    rand uvm_reg_field RESERVED;
    // UVM register field for ID [4:0]
    rand uvm_reg_field ID;

    // Constructor for id_0_reg
    function new(string name = "id_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (27)
      //   lsb         = least-significant bit position (5)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 27, 5, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      ID = uvm_reg_field::type_id::create("ID");
      // Configure the field:
      //   width       = number of bits (5)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      ID.configure(this, 5, 0, "RW", 1, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for ID_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class id_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create id_1_reg objects through the factory.
    `uvm_object_utils(id_1_reg)
    // UVM register field for RESERVED [31:5]
    rand uvm_reg_field RESERVED;
    // UVM register field for ID [4:0]
    rand uvm_reg_field ID;

    // Constructor for id_1_reg
    function new(string name = "id_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (27)
      //   lsb         = least-significant bit position (5)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 27, 5, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      ID = uvm_reg_field::type_id::create("ID");
      // Configure the field:
      //   width       = number of bits (5)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      ID.configure(this, 5, 0, "RW", 1, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for ID_2.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class id_2_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create id_2_reg objects through the factory.
    `uvm_object_utils(id_2_reg)
    // UVM register field for RESERVED [31:5]
    rand uvm_reg_field RESERVED;
    // UVM register field for ID [4:0]
    rand uvm_reg_field ID;

    // Constructor for id_2_reg
    function new(string name = "id_2_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (27)
      //   lsb         = least-significant bit position (5)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 27, 5, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      ID = uvm_reg_field::type_id::create("ID");
      // Configure the field:
      //   width       = number of bits (5)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      ID.configure(this, 5, 0, "RW", 1, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for ID_3.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class id_3_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create id_3_reg objects through the factory.
    `uvm_object_utils(id_3_reg)
    // UVM register field for RESERVED [31:5]
    rand uvm_reg_field RESERVED;
    // UVM register field for ID [4:0]
    rand uvm_reg_field ID;

    // Constructor for id_3_reg
    function new(string name = "id_3_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      RESERVED = uvm_reg_field::type_id::create("RESERVED");
      // Configure the field:
      //   width       = number of bits (27)
      //   lsb         = least-significant bit position (5)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 27, 5, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      ID = uvm_reg_field::type_id::create("ID");
      // Configure the field:
      //   width       = number of bits (5)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      ID.configure(this, 5, 0, "RW", 1, 0, 1, 1, 1);
    endfunction

  endclass

endpackage

