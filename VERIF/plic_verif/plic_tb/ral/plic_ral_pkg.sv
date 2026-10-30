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
// Configuration: SOURCES=64 TARGETS=4 PRIORITIES=8 HAS_THRESHOLD=1 HAS_CONFIG_REG=1 HDATA_SIZE=32
 import uvm_pkg::*;
  `include "uvm_macros.svh"
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
      //   reset       = reset value 64
      //   volatile    = whether the field value can change independently
      SOURCES.configure(this, 16, 0, "RO", 0, 64, 1, 1, 1);
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
    // UVM register field for EL [31:0]
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
      EL = uvm_reg_field::type_id::create("EL");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      EL.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for EL_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class el_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create el_1_reg objects through the factory.
    `uvm_object_utils(el_1_reg)
    // UVM register field for EL [31:0]
    rand uvm_reg_field EL;

    // Constructor for el_1_reg
    function new(string name = "el_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      EL = uvm_reg_field::type_id::create("EL");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      EL.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // PRIORITY_n field reset values = SoC default priorities from
  // DSN/ip/compute/plic/dsn/include/plic_priority_config.svh (keep in sync)
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
      P7.configure(this, 3, 28, "RW", 0, 2, 1, 1, 1);
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
      P6.configure(this, 3, 24, "RW", 0, 1, 1, 1, 1);
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
      P5.configure(this, 3, 20, "RW", 0, 2, 1, 1, 1);
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
      P4.configure(this, 3, 16, "RW", 0, 1, 1, 1, 1);
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
      P3.configure(this, 3, 12, "RW", 0, 1, 1, 1, 1);
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
      P2.configure(this, 3, 8, "RW", 0, 1, 1, 1, 1);
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
      P1.configure(this, 3, 4, "RW", 0, 1, 1, 1, 1);
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
      P0.configure(this, 3, 0, "RW", 0, 1, 1, 1, 1);
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
      P15.configure(this, 3, 28, "RW", 0, 4, 1, 1, 1);
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
      P14.configure(this, 3, 24, "RW", 0, 3, 1, 1, 1);
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
      P13.configure(this, 3, 20, "RW", 0, 2, 1, 1, 1);
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
      P12.configure(this, 3, 16, "RW", 0, 3, 1, 1, 1);
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
      P11.configure(this, 3, 12, "RW", 0, 2, 1, 1, 1);
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
      P10.configure(this, 3, 8, "RW", 0, 1, 1, 1, 1);
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
      P9.configure(this, 3, 4, "RW", 0, 2, 1, 1, 1);
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
      P8.configure(this, 3, 0, "RW", 0, 1, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for PRIORITY_2.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class priority_2_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create priority_2_reg objects through the factory.
    `uvm_object_utils(priority_2_reg)
    // UVM register field for P23_RESERVED [31:31]
    rand uvm_reg_field P23_RESERVED;
    // UVM register field for P23 [30:28]
    rand uvm_reg_field P23;
    // UVM register field for P22_RESERVED [27:27]
    rand uvm_reg_field P22_RESERVED;
    // UVM register field for P22 [26:24]
    rand uvm_reg_field P22;
    // UVM register field for P21_RESERVED [23:23]
    rand uvm_reg_field P21_RESERVED;
    // UVM register field for P21 [22:20]
    rand uvm_reg_field P21;
    // UVM register field for P20_RESERVED [19:19]
    rand uvm_reg_field P20_RESERVED;
    // UVM register field for P20 [18:16]
    rand uvm_reg_field P20;
    // UVM register field for P19_RESERVED [15:15]
    rand uvm_reg_field P19_RESERVED;
    // UVM register field for P19 [14:12]
    rand uvm_reg_field P19;
    // UVM register field for P18_RESERVED [11:11]
    rand uvm_reg_field P18_RESERVED;
    // UVM register field for P18 [10:8]
    rand uvm_reg_field P18;
    // UVM register field for P17_RESERVED [7:7]
    rand uvm_reg_field P17_RESERVED;
    // UVM register field for P17 [6:4]
    rand uvm_reg_field P17;
    // UVM register field for P16_RESERVED [3:3]
    rand uvm_reg_field P16_RESERVED;
    // UVM register field for P16 [2:0]
    rand uvm_reg_field P16;

    // Constructor for priority_2_reg
    function new(string name = "priority_2_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      P23_RESERVED = uvm_reg_field::type_id::create("P23_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (31)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P23_RESERVED.configure(this, 1, 31, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P23 = uvm_reg_field::type_id::create("P23");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (28)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P23.configure(this, 3, 28, "RW", 0, 4, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P22_RESERVED = uvm_reg_field::type_id::create("P22_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (27)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P22_RESERVED.configure(this, 1, 27, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P22 = uvm_reg_field::type_id::create("P22");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (24)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P22.configure(this, 3, 24, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P21_RESERVED = uvm_reg_field::type_id::create("P21_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (23)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P21_RESERVED.configure(this, 1, 23, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P21 = uvm_reg_field::type_id::create("P21");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (20)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P21.configure(this, 3, 20, "RW", 0, 4, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P20_RESERVED = uvm_reg_field::type_id::create("P20_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (19)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P20_RESERVED.configure(this, 1, 19, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P20 = uvm_reg_field::type_id::create("P20");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P20.configure(this, 3, 16, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P19_RESERVED = uvm_reg_field::type_id::create("P19_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (15)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P19_RESERVED.configure(this, 1, 15, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P19 = uvm_reg_field::type_id::create("P19");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (12)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P19.configure(this, 3, 12, "RW", 0, 4, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P18_RESERVED = uvm_reg_field::type_id::create("P18_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (11)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P18_RESERVED.configure(this, 1, 11, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P18 = uvm_reg_field::type_id::create("P18");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P18.configure(this, 3, 8, "RW", 0, 1, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P17_RESERVED = uvm_reg_field::type_id::create("P17_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P17_RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P17 = uvm_reg_field::type_id::create("P17");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (4)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P17.configure(this, 3, 4, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P16_RESERVED = uvm_reg_field::type_id::create("P16_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P16_RESERVED.configure(this, 1, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P16 = uvm_reg_field::type_id::create("P16");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P16.configure(this, 3, 0, "RW", 0, 3, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for PRIORITY_3.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class priority_3_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create priority_3_reg objects through the factory.
    `uvm_object_utils(priority_3_reg)
    // UVM register field for P31_RESERVED [31:31]
    rand uvm_reg_field P31_RESERVED;
    // UVM register field for P31 [30:28]
    rand uvm_reg_field P31;
    // UVM register field for P30_RESERVED [27:27]
    rand uvm_reg_field P30_RESERVED;
    // UVM register field for P30 [26:24]
    rand uvm_reg_field P30;
    // UVM register field for P29_RESERVED [23:23]
    rand uvm_reg_field P29_RESERVED;
    // UVM register field for P29 [22:20]
    rand uvm_reg_field P29;
    // UVM register field for P28_RESERVED [19:19]
    rand uvm_reg_field P28_RESERVED;
    // UVM register field for P28 [18:16]
    rand uvm_reg_field P28;
    // UVM register field for P27_RESERVED [15:15]
    rand uvm_reg_field P27_RESERVED;
    // UVM register field for P27 [14:12]
    rand uvm_reg_field P27;
    // UVM register field for P26_RESERVED [11:11]
    rand uvm_reg_field P26_RESERVED;
    // UVM register field for P26 [10:8]
    rand uvm_reg_field P26;
    // UVM register field for P25_RESERVED [7:7]
    rand uvm_reg_field P25_RESERVED;
    // UVM register field for P25 [6:4]
    rand uvm_reg_field P25;
    // UVM register field for P24_RESERVED [3:3]
    rand uvm_reg_field P24_RESERVED;
    // UVM register field for P24 [2:0]
    rand uvm_reg_field P24;

    // Constructor for priority_3_reg
    function new(string name = "priority_3_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      P31_RESERVED = uvm_reg_field::type_id::create("P31_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (31)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P31_RESERVED.configure(this, 1, 31, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P31 = uvm_reg_field::type_id::create("P31");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (28)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P31.configure(this, 3, 28, "RW", 0, 5, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P30_RESERVED = uvm_reg_field::type_id::create("P30_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (27)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P30_RESERVED.configure(this, 1, 27, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P30 = uvm_reg_field::type_id::create("P30");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (24)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P30.configure(this, 3, 24, "RW", 0, 5, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P29_RESERVED = uvm_reg_field::type_id::create("P29_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (23)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P29_RESERVED.configure(this, 1, 23, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P29 = uvm_reg_field::type_id::create("P29");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (20)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P29.configure(this, 3, 20, "RW", 0, 5, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P28_RESERVED = uvm_reg_field::type_id::create("P28_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (19)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P28_RESERVED.configure(this, 1, 19, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P28 = uvm_reg_field::type_id::create("P28");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P28.configure(this, 3, 16, "RW", 0, 2, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P27_RESERVED = uvm_reg_field::type_id::create("P27_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (15)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P27_RESERVED.configure(this, 1, 15, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P27 = uvm_reg_field::type_id::create("P27");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (12)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P27.configure(this, 3, 12, "RW", 0, 1, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P26_RESERVED = uvm_reg_field::type_id::create("P26_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (11)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P26_RESERVED.configure(this, 1, 11, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P26 = uvm_reg_field::type_id::create("P26");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P26.configure(this, 3, 8, "RW", 0, 6, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P25_RESERVED = uvm_reg_field::type_id::create("P25_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P25_RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P25 = uvm_reg_field::type_id::create("P25");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (4)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P25.configure(this, 3, 4, "RW", 0, 6, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P24_RESERVED = uvm_reg_field::type_id::create("P24_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P24_RESERVED.configure(this, 1, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P24 = uvm_reg_field::type_id::create("P24");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P24.configure(this, 3, 0, "RW", 0, 2, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for PRIORITY_4.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class priority_4_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create priority_4_reg objects through the factory.
    `uvm_object_utils(priority_4_reg)
    // UVM register field for P39_RESERVED [31:31]
    rand uvm_reg_field P39_RESERVED;
    // UVM register field for P39 [30:28]
    rand uvm_reg_field P39;
    // UVM register field for P38_RESERVED [27:27]
    rand uvm_reg_field P38_RESERVED;
    // UVM register field for P38 [26:24]
    rand uvm_reg_field P38;
    // UVM register field for P37_RESERVED [23:23]
    rand uvm_reg_field P37_RESERVED;
    // UVM register field for P37 [22:20]
    rand uvm_reg_field P37;
    // UVM register field for P36_RESERVED [19:19]
    rand uvm_reg_field P36_RESERVED;
    // UVM register field for P36 [18:16]
    rand uvm_reg_field P36;
    // UVM register field for P35_RESERVED [15:15]
    rand uvm_reg_field P35_RESERVED;
    // UVM register field for P35 [14:12]
    rand uvm_reg_field P35;
    // UVM register field for P34_RESERVED [11:11]
    rand uvm_reg_field P34_RESERVED;
    // UVM register field for P34 [10:8]
    rand uvm_reg_field P34;
    // UVM register field for P33_RESERVED [7:7]
    rand uvm_reg_field P33_RESERVED;
    // UVM register field for P33 [6:4]
    rand uvm_reg_field P33;
    // UVM register field for P32_RESERVED [3:3]
    rand uvm_reg_field P32_RESERVED;
    // UVM register field for P32 [2:0]
    rand uvm_reg_field P32;

    // Constructor for priority_4_reg
    function new(string name = "priority_4_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      P39_RESERVED = uvm_reg_field::type_id::create("P39_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (31)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P39_RESERVED.configure(this, 1, 31, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P39 = uvm_reg_field::type_id::create("P39");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (28)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P39.configure(this, 3, 28, "RW", 0, 7, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P38_RESERVED = uvm_reg_field::type_id::create("P38_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (27)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P38_RESERVED.configure(this, 1, 27, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P38 = uvm_reg_field::type_id::create("P38");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (24)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P38.configure(this, 3, 24, "RW", 0, 7, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P37_RESERVED = uvm_reg_field::type_id::create("P37_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (23)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P37_RESERVED.configure(this, 1, 23, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P37 = uvm_reg_field::type_id::create("P37");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (20)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P37.configure(this, 3, 20, "RW", 0, 7, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P36_RESERVED = uvm_reg_field::type_id::create("P36_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (19)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P36_RESERVED.configure(this, 1, 19, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P36 = uvm_reg_field::type_id::create("P36");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P36.configure(this, 3, 16, "RW", 0, 1, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P35_RESERVED = uvm_reg_field::type_id::create("P35_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (15)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P35_RESERVED.configure(this, 1, 15, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P35 = uvm_reg_field::type_id::create("P35");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (12)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P35.configure(this, 3, 12, "RW", 0, 7, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P34_RESERVED = uvm_reg_field::type_id::create("P34_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (11)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P34_RESERVED.configure(this, 1, 11, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P34 = uvm_reg_field::type_id::create("P34");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P34.configure(this, 3, 8, "RW", 0, 4, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P33_RESERVED = uvm_reg_field::type_id::create("P33_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P33_RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P33 = uvm_reg_field::type_id::create("P33");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (4)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P33.configure(this, 3, 4, "RW", 0, 1, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P32_RESERVED = uvm_reg_field::type_id::create("P32_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P32_RESERVED.configure(this, 1, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P32 = uvm_reg_field::type_id::create("P32");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P32.configure(this, 3, 0, "RW", 0, 5, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for PRIORITY_5.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class priority_5_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create priority_5_reg objects through the factory.
    `uvm_object_utils(priority_5_reg)
    // UVM register field for P47_RESERVED [31:31]
    rand uvm_reg_field P47_RESERVED;
    // UVM register field for P47 [30:28]
    rand uvm_reg_field P47;
    // UVM register field for P46_RESERVED [27:27]
    rand uvm_reg_field P46_RESERVED;
    // UVM register field for P46 [26:24]
    rand uvm_reg_field P46;
    // UVM register field for P45_RESERVED [23:23]
    rand uvm_reg_field P45_RESERVED;
    // UVM register field for P45 [22:20]
    rand uvm_reg_field P45;
    // UVM register field for P44_RESERVED [19:19]
    rand uvm_reg_field P44_RESERVED;
    // UVM register field for P44 [18:16]
    rand uvm_reg_field P44;
    // UVM register field for P43_RESERVED [15:15]
    rand uvm_reg_field P43_RESERVED;
    // UVM register field for P43 [14:12]
    rand uvm_reg_field P43;
    // UVM register field for P42_RESERVED [11:11]
    rand uvm_reg_field P42_RESERVED;
    // UVM register field for P42 [10:8]
    rand uvm_reg_field P42;
    // UVM register field for P41_RESERVED [7:7]
    rand uvm_reg_field P41_RESERVED;
    // UVM register field for P41 [6:4]
    rand uvm_reg_field P41;
    // UVM register field for P40_RESERVED [3:3]
    rand uvm_reg_field P40_RESERVED;
    // UVM register field for P40 [2:0]
    rand uvm_reg_field P40;

    // Constructor for priority_5_reg
    function new(string name = "priority_5_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      P47_RESERVED = uvm_reg_field::type_id::create("P47_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (31)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P47_RESERVED.configure(this, 1, 31, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P47 = uvm_reg_field::type_id::create("P47");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (28)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P47.configure(this, 3, 28, "RW", 0, 5, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P46_RESERVED = uvm_reg_field::type_id::create("P46_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (27)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P46_RESERVED.configure(this, 1, 27, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P46 = uvm_reg_field::type_id::create("P46");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (24)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P46.configure(this, 3, 24, "RW", 0, 5, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P45_RESERVED = uvm_reg_field::type_id::create("P45_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (23)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P45_RESERVED.configure(this, 1, 23, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P45 = uvm_reg_field::type_id::create("P45");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (20)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P45.configure(this, 3, 20, "RW", 0, 5, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P44_RESERVED = uvm_reg_field::type_id::create("P44_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (19)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P44_RESERVED.configure(this, 1, 19, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P44 = uvm_reg_field::type_id::create("P44");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P44.configure(this, 3, 16, "RW", 0, 5, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P43_RESERVED = uvm_reg_field::type_id::create("P43_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (15)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P43_RESERVED.configure(this, 1, 15, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P43 = uvm_reg_field::type_id::create("P43");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (12)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P43.configure(this, 3, 12, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P42_RESERVED = uvm_reg_field::type_id::create("P42_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (11)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P42_RESERVED.configure(this, 1, 11, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P42 = uvm_reg_field::type_id::create("P42");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P42.configure(this, 3, 8, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P41_RESERVED = uvm_reg_field::type_id::create("P41_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P41_RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P41 = uvm_reg_field::type_id::create("P41");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (4)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P41.configure(this, 3, 4, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P40_RESERVED = uvm_reg_field::type_id::create("P40_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P40_RESERVED.configure(this, 1, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P40 = uvm_reg_field::type_id::create("P40");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P40.configure(this, 3, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for PRIORITY_6.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class priority_6_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create priority_6_reg objects through the factory.
    `uvm_object_utils(priority_6_reg)
    // UVM register field for P55_RESERVED [31:31]
    rand uvm_reg_field P55_RESERVED;
    // UVM register field for P55 [30:28]
    rand uvm_reg_field P55;
    // UVM register field for P54_RESERVED [27:27]
    rand uvm_reg_field P54_RESERVED;
    // UVM register field for P54 [26:24]
    rand uvm_reg_field P54;
    // UVM register field for P53_RESERVED [23:23]
    rand uvm_reg_field P53_RESERVED;
    // UVM register field for P53 [22:20]
    rand uvm_reg_field P53;
    // UVM register field for P52_RESERVED [19:19]
    rand uvm_reg_field P52_RESERVED;
    // UVM register field for P52 [18:16]
    rand uvm_reg_field P52;
    // UVM register field for P51_RESERVED [15:15]
    rand uvm_reg_field P51_RESERVED;
    // UVM register field for P51 [14:12]
    rand uvm_reg_field P51;
    // UVM register field for P50_RESERVED [11:11]
    rand uvm_reg_field P50_RESERVED;
    // UVM register field for P50 [10:8]
    rand uvm_reg_field P50;
    // UVM register field for P49_RESERVED [7:7]
    rand uvm_reg_field P49_RESERVED;
    // UVM register field for P49 [6:4]
    rand uvm_reg_field P49;
    // UVM register field for P48_RESERVED [3:3]
    rand uvm_reg_field P48_RESERVED;
    // UVM register field for P48 [2:0]
    rand uvm_reg_field P48;

    // Constructor for priority_6_reg
    function new(string name = "priority_6_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      P55_RESERVED = uvm_reg_field::type_id::create("P55_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (31)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P55_RESERVED.configure(this, 1, 31, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P55 = uvm_reg_field::type_id::create("P55");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (28)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P55.configure(this, 3, 28, "RW", 0, 1, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P54_RESERVED = uvm_reg_field::type_id::create("P54_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (27)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P54_RESERVED.configure(this, 1, 27, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P54 = uvm_reg_field::type_id::create("P54");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (24)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P54.configure(this, 3, 24, "RW", 0, 1, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P53_RESERVED = uvm_reg_field::type_id::create("P53_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (23)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P53_RESERVED.configure(this, 1, 23, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P53 = uvm_reg_field::type_id::create("P53");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (20)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P53.configure(this, 3, 20, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P52_RESERVED = uvm_reg_field::type_id::create("P52_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (19)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P52_RESERVED.configure(this, 1, 19, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P52 = uvm_reg_field::type_id::create("P52");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P52.configure(this, 3, 16, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P51_RESERVED = uvm_reg_field::type_id::create("P51_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (15)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P51_RESERVED.configure(this, 1, 15, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P51 = uvm_reg_field::type_id::create("P51");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (12)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P51.configure(this, 3, 12, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P50_RESERVED = uvm_reg_field::type_id::create("P50_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (11)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P50_RESERVED.configure(this, 1, 11, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P50 = uvm_reg_field::type_id::create("P50");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P50.configure(this, 3, 8, "RW", 0, 3, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P49_RESERVED = uvm_reg_field::type_id::create("P49_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P49_RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P49 = uvm_reg_field::type_id::create("P49");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (4)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P49.configure(this, 3, 4, "RW", 0, 6, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P48_RESERVED = uvm_reg_field::type_id::create("P48_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P48_RESERVED.configure(this, 1, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P48 = uvm_reg_field::type_id::create("P48");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P48.configure(this, 3, 0, "RW", 0, 2, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for PRIORITY_7.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class priority_7_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create priority_7_reg objects through the factory.
    `uvm_object_utils(priority_7_reg)
    // UVM register field for P63_RESERVED [31:31]
    rand uvm_reg_field P63_RESERVED;
    // UVM register field for P63 [30:28]
    rand uvm_reg_field P63;
    // UVM register field for P62_RESERVED [27:27]
    rand uvm_reg_field P62_RESERVED;
    // UVM register field for P62 [26:24]
    rand uvm_reg_field P62;
    // UVM register field for P61_RESERVED [23:23]
    rand uvm_reg_field P61_RESERVED;
    // UVM register field for P61 [22:20]
    rand uvm_reg_field P61;
    // UVM register field for P60_RESERVED [19:19]
    rand uvm_reg_field P60_RESERVED;
    // UVM register field for P60 [18:16]
    rand uvm_reg_field P60;
    // UVM register field for P59_RESERVED [15:15]
    rand uvm_reg_field P59_RESERVED;
    // UVM register field for P59 [14:12]
    rand uvm_reg_field P59;
    // UVM register field for P58_RESERVED [11:11]
    rand uvm_reg_field P58_RESERVED;
    // UVM register field for P58 [10:8]
    rand uvm_reg_field P58;
    // UVM register field for P57_RESERVED [7:7]
    rand uvm_reg_field P57_RESERVED;
    // UVM register field for P57 [6:4]
    rand uvm_reg_field P57;
    // UVM register field for P56_RESERVED [3:3]
    rand uvm_reg_field P56_RESERVED;
    // UVM register field for P56 [2:0]
    rand uvm_reg_field P56;

    // Constructor for priority_7_reg
    function new(string name = "priority_7_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      P63_RESERVED = uvm_reg_field::type_id::create("P63_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (31)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P63_RESERVED.configure(this, 1, 31, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P63 = uvm_reg_field::type_id::create("P63");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (28)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P63.configure(this, 3, 28, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P62_RESERVED = uvm_reg_field::type_id::create("P62_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (27)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P62_RESERVED.configure(this, 1, 27, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P62 = uvm_reg_field::type_id::create("P62");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (24)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P62.configure(this, 3, 24, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P61_RESERVED = uvm_reg_field::type_id::create("P61_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (23)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P61_RESERVED.configure(this, 1, 23, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P61 = uvm_reg_field::type_id::create("P61");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (20)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P61.configure(this, 3, 20, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P60_RESERVED = uvm_reg_field::type_id::create("P60_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (19)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P60_RESERVED.configure(this, 1, 19, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P60 = uvm_reg_field::type_id::create("P60");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (16)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P60.configure(this, 3, 16, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P59_RESERVED = uvm_reg_field::type_id::create("P59_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (15)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P59_RESERVED.configure(this, 1, 15, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P59 = uvm_reg_field::type_id::create("P59");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (12)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P59.configure(this, 3, 12, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P58_RESERVED = uvm_reg_field::type_id::create("P58_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (11)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P58_RESERVED.configure(this, 1, 11, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P58 = uvm_reg_field::type_id::create("P58");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (8)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P58.configure(this, 3, 8, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P57_RESERVED = uvm_reg_field::type_id::create("P57_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P57_RESERVED.configure(this, 1, 7, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P57 = uvm_reg_field::type_id::create("P57");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (4)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P57.configure(this, 3, 4, "RW", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P56_RESERVED = uvm_reg_field::type_id::create("P56_RESERVED");
      // Configure the field:
      //   width       = number of bits (1)
      //   lsb         = least-significant bit position (3)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P56_RESERVED.configure(this, 1, 3, "RO", 0, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      P56 = uvm_reg_field::type_id::create("P56");
      // Configure the field:
      //   width       = number of bits (3)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      P56.configure(this, 3, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_0_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_0_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_0_0_reg objects through the factory.
    `uvm_object_utils(ie_0_0_reg)
    // UVM register field for IE [31:0]
    rand uvm_reg_field IE;

    // Constructor for ie_0_0_reg
    function new(string name = "ie_0_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_0_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_0_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_0_1_reg objects through the factory.
    `uvm_object_utils(ie_0_1_reg)
    // UVM register field for IE [31:0]
    rand uvm_reg_field IE;

    // Constructor for ie_0_1_reg
    function new(string name = "ie_0_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_1_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_1_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_1_0_reg objects through the factory.
    `uvm_object_utils(ie_1_0_reg)
    // UVM register field for IE [31:0]
    rand uvm_reg_field IE;

    // Constructor for ie_1_0_reg
    function new(string name = "ie_1_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_1_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_1_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_1_1_reg objects through the factory.
    `uvm_object_utils(ie_1_1_reg)
    // UVM register field for IE [31:0]
    rand uvm_reg_field IE;

    // Constructor for ie_1_1_reg
    function new(string name = "ie_1_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_2_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_2_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_2_0_reg objects through the factory.
    `uvm_object_utils(ie_2_0_reg)
    // UVM register field for IE [31:0]
    rand uvm_reg_field IE;

    // Constructor for ie_2_0_reg
    function new(string name = "ie_2_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_2_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_2_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_2_1_reg objects through the factory.
    `uvm_object_utils(ie_2_1_reg)
    // UVM register field for IE [31:0]
    rand uvm_reg_field IE;

    // Constructor for ie_2_1_reg
    function new(string name = "ie_2_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_3_0.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_3_0_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_3_0_reg objects through the factory.
    `uvm_object_utils(ie_3_0_reg)
    // UVM register field for IE [31:0]
    rand uvm_reg_field IE;

    // Constructor for ie_3_0_reg
    function new(string name = "ie_3_0_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for IE_3_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class ie_3_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create ie_3_1_reg objects through the factory.
    `uvm_object_utils(ie_3_1_reg)
    // UVM register field for IE [31:0]
    rand uvm_reg_field IE;

    // Constructor for ie_3_1_reg
    function new(string name = "ie_3_1_reg");
      // Call the parent uvm_reg constructor.
      // name = register instance name
      // 32   = register width in bits
      // UVM_NO_COVERAGE = no automatic UVM register coverage is requested.
      super.new(name, 32, UVM_NO_COVERAGE);
    endfunction

    // Build the register fields and configure volatile/compare behavior
    virtual function void build();
      // Create the UVM RAL field object through the UVM factory.
      IE = uvm_reg_field::type_id::create("IE");
      // Configure the field:
      //   width       = number of bits (32)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      IE.configure(this, 32, 0, "RW", 0, 0, 1, 1, 1);
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
    // UVM register field for RESERVED [31:7]
    rand uvm_reg_field RESERVED;
    // UVM register field for ID [6:0]
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
      //   width       = number of bits (25)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 25, 7, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      ID = uvm_reg_field::type_id::create("ID");
      // Configure the field:
      //   width       = number of bits (7)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      ID.configure(this, 7, 0, "RW", 1, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for ID_1.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class id_1_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create id_1_reg objects through the factory.
    `uvm_object_utils(id_1_reg)
    // UVM register field for RESERVED [31:7]
    rand uvm_reg_field RESERVED;
    // UVM register field for ID [6:0]
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
      //   width       = number of bits (25)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 25, 7, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      ID = uvm_reg_field::type_id::create("ID");
      // Configure the field:
      //   width       = number of bits (7)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      ID.configure(this, 7, 0, "RW", 1, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for ID_2.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class id_2_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create id_2_reg objects through the factory.
    `uvm_object_utils(id_2_reg)
    // UVM register field for RESERVED [31:7]
    rand uvm_reg_field RESERVED;
    // UVM register field for ID [6:0]
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
      //   width       = number of bits (25)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 25, 7, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      ID = uvm_reg_field::type_id::create("ID");
      // Configure the field:
      //   width       = number of bits (7)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      ID.configure(this, 7, 0, "RW", 1, 0, 1, 1, 1);
    endfunction

  endclass

  // Declare the UVM RAL class for ID_3.
  // "extends uvm_reg" means this class inherits the standard UVM register
  // functionality such as read(), write(), mirror(), predict(), etc.
  class id_3_reg extends uvm_reg;
    // Register this RAL class with the UVM factory.
    // This allows UVM to create id_3_reg objects through the factory.
    `uvm_object_utils(id_3_reg)
    // UVM register field for RESERVED [31:7]
    rand uvm_reg_field RESERVED;
    // UVM register field for ID [6:0]
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
      //   width       = number of bits (25)
      //   lsb         = least-significant bit position (7)
      //   access      = field access type "RO"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      RESERVED.configure(this, 25, 7, "RO", 1, 0, 1, 1, 1);
      // Create the UVM RAL field object through the UVM factory.
      ID = uvm_reg_field::type_id::create("ID");
      // Configure the field:
      //   width       = number of bits (7)
      //   lsb         = least-significant bit position (0)
      //   access      = field access type "RW"
      //   reset       = reset value 0
      //   volatile    = whether the field value can change independently
      ID.configure(this, 7, 0, "RW", 1, 0, 1, 1, 1);
    endfunction

  endclass

endpackage
