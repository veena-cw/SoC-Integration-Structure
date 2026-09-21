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

// Generated UVM RAL Block for RoaLogic_PLIC
// IP: PLIC
// Bus-independent

package plic_ral_block_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  import plic_ral_pkg::*;

  class plic_ral_block extends uvm_reg_block;
    `uvm_object_utils(plic_ral_block)
    rand config_0_reg CONFIG_0; // original: CONFIG_0 @'h0
    rand config_1_reg CONFIG_1; // original: CONFIG_1 @'h4
    rand el_0_reg EL_0; // original: EL_0 @'h8
    rand priority_0_reg PRIORITY_0; // original: PRIORITY_0 @'hC
    rand priority_1_reg PRIORITY_1; // original: PRIORITY_1 @'h10
    rand ie_0_reg IE_0; // original: IE_0 @'h14
    rand ie_1_reg IE_1; // original: IE_1 @'h18
    rand ie_2_reg IE_2; // original: IE_2 @'h1C
    rand ie_3_reg IE_3; // original: IE_3 @'h20
    rand threshold_0_reg THRESHOLD_0; // original: THRESHOLD_0 @'h24
    rand threshold_1_reg THRESHOLD_1; // original: THRESHOLD_1 @'h28
    rand threshold_2_reg THRESHOLD_2; // original: THRESHOLD_2 @'h2C
    rand threshold_3_reg THRESHOLD_3; // original: THRESHOLD_3 @'h30
    rand id_0_reg ID_0; // original: ID_0 @'h34
    rand id_1_reg ID_1; // original: ID_1 @'h38
    rand id_2_reg ID_2; // original: ID_2 @'h3C
    rand id_3_reg ID_3; // original: ID_3 @'h40
    uvm_reg_map default_map;

    function new(string name = "plic_ral_block");
      super.new(name, UVM_NO_COVERAGE);
    endfunction

    virtual function void build();
      default_map = create_map("default_map", 0, 4, UVM_LITTLE_ENDIAN, 0);

      CONFIG_0 = config_0_reg::type_id::create("CONFIG_0");
      CONFIG_0.configure(this, null, "");
      CONFIG_0.build();
      default_map.add_reg(CONFIG_0, 'h0, "RO");

      CONFIG_1 = config_1_reg::type_id::create("CONFIG_1");
      CONFIG_1.configure(this, null, "");
      CONFIG_1.build();
      default_map.add_reg(CONFIG_1, 'h4, "RO");

      EL_0 = el_0_reg::type_id::create("EL_0");
      EL_0.configure(this, null, "");
      EL_0.build();
      default_map.add_reg(EL_0, 'h8, "RW");

      PRIORITY_0 = priority_0_reg::type_id::create("PRIORITY_0");
      PRIORITY_0.configure(this, null, "");
      PRIORITY_0.build();
      default_map.add_reg(PRIORITY_0, 'hC, "RW");

      PRIORITY_1 = priority_1_reg::type_id::create("PRIORITY_1");
      PRIORITY_1.configure(this, null, "");
      PRIORITY_1.build();
      default_map.add_reg(PRIORITY_1, 'h10, "RW");

      IE_0 = ie_0_reg::type_id::create("IE_0");
      IE_0.configure(this, null, "");
      IE_0.build();
      default_map.add_reg(IE_0, 'h14, "RW");

      IE_1 = ie_1_reg::type_id::create("IE_1");
      IE_1.configure(this, null, "");
      IE_1.build();
      default_map.add_reg(IE_1, 'h18, "RW");

      IE_2 = ie_2_reg::type_id::create("IE_2");
      IE_2.configure(this, null, "");
      IE_2.build();
      default_map.add_reg(IE_2, 'h1C, "RW");

      IE_3 = ie_3_reg::type_id::create("IE_3");
      IE_3.configure(this, null, "");
      IE_3.build();
      default_map.add_reg(IE_3, 'h20, "RW");

      THRESHOLD_0 = threshold_0_reg::type_id::create("THRESHOLD_0");
      THRESHOLD_0.configure(this, null, "");
      THRESHOLD_0.build();
      default_map.add_reg(THRESHOLD_0, 'h24, "RW");

      THRESHOLD_1 = threshold_1_reg::type_id::create("THRESHOLD_1");
      THRESHOLD_1.configure(this, null, "");
      THRESHOLD_1.build();
      default_map.add_reg(THRESHOLD_1, 'h28, "RW");

      THRESHOLD_2 = threshold_2_reg::type_id::create("THRESHOLD_2");
      THRESHOLD_2.configure(this, null, "");
      THRESHOLD_2.build();
      default_map.add_reg(THRESHOLD_2, 'h2C, "RW");

      THRESHOLD_3 = threshold_3_reg::type_id::create("THRESHOLD_3");
      THRESHOLD_3.configure(this, null, "");
      THRESHOLD_3.build();
      default_map.add_reg(THRESHOLD_3, 'h30, "RW");

      ID_0 = id_0_reg::type_id::create("ID_0");
      ID_0.configure(this, null, "");
      ID_0.build();
      default_map.add_reg(ID_0, 'h34, "RW");

      ID_1 = id_1_reg::type_id::create("ID_1");
      ID_1.configure(this, null, "");
      ID_1.build();
      default_map.add_reg(ID_1, 'h38, "RW");

      ID_2 = id_2_reg::type_id::create("ID_2");
      ID_2.configure(this, null, "");
      ID_2.build();
      default_map.add_reg(ID_2, 'h3C, "RW");

      ID_3 = id_3_reg::type_id::create("ID_3");
      ID_3.configure(this, null, "");
      ID_3.build();
      default_map.add_reg(ID_3, 'h40, "RW");

    endfunction

  endclass

endpackage

