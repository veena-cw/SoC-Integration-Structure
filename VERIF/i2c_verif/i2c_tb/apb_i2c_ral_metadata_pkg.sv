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

// Generated Metadata Package for APB_to_I2C_Controller - carries YAML side-effect/volatile/dont_compare into SV
// No hard-coded logic in predictor/scoreboard/sequences; they call these helpers generically
package apb_i2c_ral_metadata_pkg;
  // Returns 1 if register has volatile==true in YAML
  function bit is_volatile(string name);
    case (name)
      "STATUS_REG": return 1;
      "RXDATA_REG": return 1;
      default: return 0;
    endcase
  endfunction

  function bit is_dont_compare(string name);
    case (name)
      default: return 0;
    endcase
  endfunction

  function bit has_read_side_effect(string name);
    case (name)
      default: return 0;
    endcase
  endfunction

  function bit has_write_side_effect(string name);
    case (name)
      default: return 0;
    endcase
  endfunction
endpackage
