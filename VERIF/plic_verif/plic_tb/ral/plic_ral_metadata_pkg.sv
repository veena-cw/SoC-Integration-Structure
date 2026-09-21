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

// Generated Metadata Package for RoaLogic_PLIC - carries YAML side-effect/volatile/dont_compare into SV
// No hard-coded logic in predictor/scoreboard/sequences; they call these helpers generically
package plic_ral_metadata_pkg;
  // Returns 1 if register has volatile==true in YAML
  function bit is_volatile(string name);
    case (name)
      "ID_0": return 1;
      "ID_1": return 1;
      "ID_2": return 1;
      "ID_3": return 1;
      default: return 0;
    endcase
  endfunction

  function bit is_dont_compare(string name);
    case (name)
      "ID_0": return 1;
      "ID_1": return 1;
      "ID_2": return 1;
      "ID_3": return 1;
      default: return 0;
    endcase
  endfunction

  function bit has_read_side_effect(string name);
    case (name)
      "ID_0": return 1;
      "ID_1": return 1;
      "ID_2": return 1;
      "ID_3": return 1;
      default: return 0;
    endcase
  endfunction

  function bit has_write_side_effect(string name);
    case (name)
      "ID_0": return 1;
      "ID_1": return 1;
      "ID_2": return 1;
      "ID_3": return 1;
      default: return 0;
    endcase
  endfunction
endpackage

