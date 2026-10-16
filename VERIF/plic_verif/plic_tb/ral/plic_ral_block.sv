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
// Configuration: SOURCES=64 TARGETS=4 PRIORITIES=8 HAS_THRESHOLD=1 HAS_CONFIG_REG=1 HDATA_SIZE=32

package plic_ral_block_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  import plic_ral_pkg::*;

  class plic_ral_block extends uvm_reg_block;
    `uvm_object_utils(plic_ral_block)
    rand config_0_reg CONFIG_0; // original: CONFIG_0 @'h0
    rand config_1_reg CONFIG_1; // original: CONFIG_1 @'h4
    rand el_0_reg EL_0; // original: EL_0 @'h8
    rand el_1_reg EL_1; // original: EL_1 @'hC
    rand priority_0_reg PRIORITY_0; // original: PRIORITY_0 @'h10
    rand priority_1_reg PRIORITY_1; // original: PRIORITY_1 @'h14
    rand priority_2_reg PRIORITY_2; // original: PRIORITY_2 @'h18
    rand priority_3_reg PRIORITY_3; // original: PRIORITY_3 @'h1C
    rand priority_4_reg PRIORITY_4; // original: PRIORITY_4 @'h20
    rand priority_5_reg PRIORITY_5; // original: PRIORITY_5 @'h24
    rand priority_6_reg PRIORITY_6; // original: PRIORITY_6 @'h28
    rand priority_7_reg PRIORITY_7; // original: PRIORITY_7 @'h2C
    rand ie_0_0_reg IE_0_0; // original: IE_0_0 @'h30
    rand ie_0_1_reg IE_0_1; // original: IE_0_1 @'h34
    rand ie_1_0_reg IE_1_0; // original: IE_1_0 @'h38
    rand ie_1_1_reg IE_1_1; // original: IE_1_1 @'h3C
    rand ie_2_0_reg IE_2_0; // original: IE_2_0 @'h40
    rand ie_2_1_reg IE_2_1; // original: IE_2_1 @'h44
    rand ie_3_0_reg IE_3_0; // original: IE_3_0 @'h48
    rand ie_3_1_reg IE_3_1; // original: IE_3_1 @'h4C
    rand threshold_0_reg THRESHOLD_0; // original: THRESHOLD_0 @'h50
    rand threshold_1_reg THRESHOLD_1; // original: THRESHOLD_1 @'h54
    rand threshold_2_reg THRESHOLD_2; // original: THRESHOLD_2 @'h58
    rand threshold_3_reg THRESHOLD_3; // original: THRESHOLD_3 @'h5C
    rand id_0_reg ID_0; // original: ID_0 @'h60
    rand id_1_reg ID_1; // original: ID_1 @'h64
    rand id_2_reg ID_2; // original: ID_2 @'h68
    rand id_3_reg ID_3; // original: ID_3 @'h6C
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

      EL_1 = el_1_reg::type_id::create("EL_1");
      EL_1.configure(this, null, "");
      EL_1.build();
      default_map.add_reg(EL_1, 'hC, "RW");

      PRIORITY_0 = priority_0_reg::type_id::create("PRIORITY_0");
      PRIORITY_0.configure(this, null, "");
      PRIORITY_0.build();
      default_map.add_reg(PRIORITY_0, 'h10, "RW");

      PRIORITY_1 = priority_1_reg::type_id::create("PRIORITY_1");
      PRIORITY_1.configure(this, null, "");
      PRIORITY_1.build();
      default_map.add_reg(PRIORITY_1, 'h14, "RW");

      PRIORITY_2 = priority_2_reg::type_id::create("PRIORITY_2");
      PRIORITY_2.configure(this, null, "");
      PRIORITY_2.build();
      default_map.add_reg(PRIORITY_2, 'h18, "RW");

      PRIORITY_3 = priority_3_reg::type_id::create("PRIORITY_3");
      PRIORITY_3.configure(this, null, "");
      PRIORITY_3.build();
      default_map.add_reg(PRIORITY_3, 'h1C, "RW");

      PRIORITY_4 = priority_4_reg::type_id::create("PRIORITY_4");
      PRIORITY_4.configure(this, null, "");
      PRIORITY_4.build();
      default_map.add_reg(PRIORITY_4, 'h20, "RW");

      PRIORITY_5 = priority_5_reg::type_id::create("PRIORITY_5");
      PRIORITY_5.configure(this, null, "");
      PRIORITY_5.build();
      default_map.add_reg(PRIORITY_5, 'h24, "RW");

      PRIORITY_6 = priority_6_reg::type_id::create("PRIORITY_6");
      PRIORITY_6.configure(this, null, "");
      PRIORITY_6.build();
      default_map.add_reg(PRIORITY_6, 'h28, "RW");

      PRIORITY_7 = priority_7_reg::type_id::create("PRIORITY_7");
      PRIORITY_7.configure(this, null, "");
      PRIORITY_7.build();
      default_map.add_reg(PRIORITY_7, 'h2C, "RW");

      IE_0_0 = ie_0_0_reg::type_id::create("IE_0_0");
      IE_0_0.configure(this, null, "");
      IE_0_0.build();
      default_map.add_reg(IE_0_0, 'h30, "RW");

      IE_0_1 = ie_0_1_reg::type_id::create("IE_0_1");
      IE_0_1.configure(this, null, "");
      IE_0_1.build();
      default_map.add_reg(IE_0_1, 'h34, "RW");

      IE_1_0 = ie_1_0_reg::type_id::create("IE_1_0");
      IE_1_0.configure(this, null, "");
      IE_1_0.build();
      default_map.add_reg(IE_1_0, 'h38, "RW");

      IE_1_1 = ie_1_1_reg::type_id::create("IE_1_1");
      IE_1_1.configure(this, null, "");
      IE_1_1.build();
      default_map.add_reg(IE_1_1, 'h3C, "RW");

      IE_2_0 = ie_2_0_reg::type_id::create("IE_2_0");
      IE_2_0.configure(this, null, "");
      IE_2_0.build();
      default_map.add_reg(IE_2_0, 'h40, "RW");

      IE_2_1 = ie_2_1_reg::type_id::create("IE_2_1");
      IE_2_1.configure(this, null, "");
      IE_2_1.build();
      default_map.add_reg(IE_2_1, 'h44, "RW");

      IE_3_0 = ie_3_0_reg::type_id::create("IE_3_0");
      IE_3_0.configure(this, null, "");
      IE_3_0.build();
      default_map.add_reg(IE_3_0, 'h48, "RW");

      IE_3_1 = ie_3_1_reg::type_id::create("IE_3_1");
      IE_3_1.configure(this, null, "");
      IE_3_1.build();
      default_map.add_reg(IE_3_1, 'h4C, "RW");

      THRESHOLD_0 = threshold_0_reg::type_id::create("THRESHOLD_0");
      THRESHOLD_0.configure(this, null, "");
      THRESHOLD_0.build();
      default_map.add_reg(THRESHOLD_0, 'h50, "RW");

      THRESHOLD_1 = threshold_1_reg::type_id::create("THRESHOLD_1");
      THRESHOLD_1.configure(this, null, "");
      THRESHOLD_1.build();
      default_map.add_reg(THRESHOLD_1, 'h54, "RW");

      THRESHOLD_2 = threshold_2_reg::type_id::create("THRESHOLD_2");
      THRESHOLD_2.configure(this, null, "");
      THRESHOLD_2.build();
      default_map.add_reg(THRESHOLD_2, 'h58, "RW");

      THRESHOLD_3 = threshold_3_reg::type_id::create("THRESHOLD_3");
      THRESHOLD_3.configure(this, null, "");
      THRESHOLD_3.build();
      default_map.add_reg(THRESHOLD_3, 'h5C, "RW");

      ID_0 = id_0_reg::type_id::create("ID_0");
      ID_0.configure(this, null, "");
      ID_0.build();
      default_map.add_reg(ID_0, 'h60, "RW");

      ID_1 = id_1_reg::type_id::create("ID_1");
      ID_1.configure(this, null, "");
      ID_1.build();
      default_map.add_reg(ID_1, 'h64, "RW");

      ID_2 = id_2_reg::type_id::create("ID_2");
      ID_2.configure(this, null, "");
      ID_2.build();
      default_map.add_reg(ID_2, 'h68, "RW");

      ID_3 = id_3_reg::type_id::create("ID_3");
      ID_3.configure(this, null, "");
      ID_3.build();
      default_map.add_reg(ID_3, 'h6C, "RW");

    endfunction

  endclass

endpackage
