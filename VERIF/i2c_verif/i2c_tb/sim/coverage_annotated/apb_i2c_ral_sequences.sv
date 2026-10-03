//      // verilator_coverage annotation
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
        
        // Generated UVM RAL Sequences for APB_to_I2C_Controller
        // IP: APB_I2C
        // Runtime-generic: register and field lists are obtained from the RAL model.
        // Register metadata such as volatile/dont_compare/side effects comes from the generated metadata package.
        package apb_i2c_ral_sequences_pkg;
          import uvm_pkg::*;
          `include "uvm_macros.svh"
          import apb_i2c_ral_pkg::*;
          import apb_i2c_ral_block_pkg::*;
          import apb_i2c_ral_metadata_pkg::*;
        
          class apb_i2c_ral_base_seq extends uvm_reg_sequence;
%000001     `uvm_object_utils(apb_i2c_ral_base_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
            apb_i2c_ral_block model;
        
%000001     function new(string name = "apb_i2c_ral_base_seq");
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000001       super.new(name);
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
            endfunction
        
            // UVM-compatible generic register property helpers.
            // These avoid relying on optional/non-portable uvm_reg register APIs.
%000000     function bit reg_readable(uvm_reg rg);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       uvm_reg_field fs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       rg.get_fields(fs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       if (fs.size() == 0) return 0;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       foreach (fs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000         if (fs[i].get_access() != "WO") return 1;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
              end
%000000       return 0;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
            endfunction
        
%000000     function bit reg_writable(uvm_reg rg);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       uvm_reg_field fs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       string a;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       rg.get_fields(fs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       if (fs.size() == 0) return 0;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       foreach (fs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000         a = fs[i].get_access();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000         if (a != "RO") return 1;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
              end
%000000       return 0;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
            endfunction
        
%000000     function bit reg_all_ro(uvm_reg rg);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       uvm_reg_field fs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       rg.get_fields(fs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       if (fs.size() == 0) return 0;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       foreach (fs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000         if (fs[i].get_access() != "RO") return 0;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
              end
%000000       return 1;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
            endfunction
        
%000000     function bit reg_all_wo(uvm_reg rg);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       uvm_reg_field fs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       rg.get_fields(fs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       if (fs.size() == 0) return 0;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       foreach (fs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000         if (fs[i].get_access() != "WO") return 0;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
              end
%000000       return 1;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
            endfunction
        
%000000     function bit reg_compare_enabled(uvm_reg rg);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       return !is_dont_compare(rg.get_name());
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
            endfunction
        
%000000     function bit reg_is_volatile(uvm_reg rg);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
%000000       return is_volatile(rg.get_name());
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_ral_base_seq__Vclpkg
            endfunction
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_access_seq
          // PURPOSE: Generic backward-compatible register access smoke sequence.
          // REGISTERS TESTED: All readable/writable fields that can be safely accessed.
          // REGISTERS SKIPPED: Unsupported, side-effect, volatile, and dont_compare cases.
          // WHY SKIPPED: The legacy smoke sequence is intended for ordinary stable accesses.
          // EXPECTED RESULT: Valid accesses complete and readable writable fields read back correctly.
          //============================================================================
          class apb_i2c_reg_access_seq extends apb_i2c_ral_base_seq;
        
%000001   `uvm_object_utils(apb_i2c_reg_access_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000   function new(string name = "apb_i2c_reg_access_seq");
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
          endfunction
        
        
%000000   virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000     uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000     uvm_reg       regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000     uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000     uvm_reg       rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000     uvm_reg_field f;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000     uvm_reg_data_t expected_reg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000     uvm_reg_data_t actual_reg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000     uvm_reg_data_t field_value;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000     uvm_reg_data_t field_mask;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000     uvm_reg_data_t compare_mask;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000     int unsigned n_bits;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000     int unsigned lsb_pos;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000     string acc;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
            // ------------------------------------------------------------
            // Get all registers from RAL model
            // ------------------------------------------------------------
        
%000000     model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
            // ------------------------------------------------------------
            // Loop through all registers
            // ------------------------------------------------------------
        
%000000     foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000       rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
              // ----------------------------------------------------------
              // Skip registers that should not be tested
              // ----------------------------------------------------------
        
%000000       if (reg_is_volatile(rg))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000       if (!reg_compare_enabled(rg))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000       if (has_read_side_effect(rg.get_name()) ||
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
                  has_write_side_effect(rg.get_name()))
%000000         continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
              // ----------------------------------------------------------
              // Initialize expected value and comparison mask
              // ----------------------------------------------------------
        
%000000       expected_reg = '0;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000       compare_mask = '0;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
              // ----------------------------------------------------------
              // Get fields of current register
              // ----------------------------------------------------------
        
%000000       rg.get_fields(fields);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
              // ----------------------------------------------------------
              // Write each field
              // ----------------------------------------------------------
        
%000000       foreach (fields[j]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000         f   = fields[j];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000         acc = f.get_access();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000         n_bits  = f.get_n_bits();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000         lsb_pos = f.get_lsb_pos();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
                // --------------------------------------------------------
                // Generate field mask
                // --------------------------------------------------------
        
%000000         if (n_bits >= 64)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000           field_mask = '1;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
                else
%000000           field_mask = (64'h1 << n_bits) - 1;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
                // ========================================================
                // RW FIELD
                // ========================================================
        
%000000         if (acc == "RW") begin
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                  // Generate random value
%000000           field_value = $urandom;
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                  // Limit random value to field width
%000000           field_value &= field_mask;
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
                  // ------------------------------------------------------
                  // Build expected register value
                  // ------------------------------------------------------
        
%000000           expected_reg |=
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
                      (field_value & field_mask) << lsb_pos;
        
        
                  // ------------------------------------------------------
                  // Mark this field for comparison
                  // ------------------------------------------------------
        
%000000           compare_mask |= field_mask << lsb_pos;
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
                  `uvm_info(
                    "RAL_ACCESS",
                    $sformatf(
                      "WRITE %s.%s = 0x%0h",
                      rg.get_name(),
                      f.get_name(),
                      field_value
                    ),
                    UVM_MEDIUM
%000000           )
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
                  // ------------------------------------------------------
                  // Write field through frontdoor
                  // ------------------------------------------------------
        
%000000           f.write(
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000             status,
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000             field_value,
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000             UVM_FRONTDOOR
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
                  );
        
        
%000000           if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                    `uvm_error(
                      get_type_name(),
                      $sformatf(
                        "ACCESS WRITE FAILED: %s.%s",
                        rg.get_name(),
                        f.get_name()
                      )
%000000             )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                  end
        
                end
        
        
                // ========================================================
                // WO FIELD
                // ========================================================
        
%000000         else if (acc == "WO") begin
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
%000000           field_value = $urandom;
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                  // Limit random value to field width
%000000           field_value &= field_mask;
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
                  `uvm_info(
                    "RAL_ACCESS",
                    $sformatf(
                      "WRITE-ONLY %s.%s = 0x%0h",
                      rg.get_name(),
                      f.get_name(),
                      field_value
                    ),
                    UVM_MEDIUM
%000000           )
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
                  // ------------------------------------------------------
                  // Write WO field
                  // ------------------------------------------------------
        
%000000           f.write(
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000             status,
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000             field_value,
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000             UVM_FRONTDOOR
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
                  );
        
        
%000000           if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                    `uvm_error(
                      get_type_name(),
                      $sformatf(
                        "WO ACCESS WRITE FAILED: %s.%s",
                        rg.get_name(),
                        f.get_name()
                      )
%000000             )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                  end
        
                end
        
        
                // ========================================================
                // RO FIELD
                // ========================================================
        
%000000         else if (acc == "RO") begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                  `uvm_info(
                    "RAL_ACCESS",
                    $sformatf(
                      "SKIP WRITE for RO field: %s.%s",
                      rg.get_name(),
                      f.get_name()
                    ),
                    UVM_LOW
%000000           )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                end
        
              end
        
        
              // ----------------------------------------------------------
              // Read complete register
              // ----------------------------------------------------------
        
%000000       rg.read(
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000         status,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000         actual_reg,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000         UVM_FRONTDOOR
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
              );
        
        
%000000       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                `uvm_error(
                  get_type_name(),
                  $sformatf(
                    "REGISTER READ FAILED: %s",
                    rg.get_name()
                  )
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
              end
%000000       else begin
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                `uvm_info(
                  "RAL_ACCESS",
                  $sformatf(
                    "REGISTER READ: %s expected=0x%0h actual=0x%0h mask=0x%0h",
                    rg.get_name(),
                    expected_reg,
                    actual_reg,
                    compare_mask
                  ),
                  UVM_MEDIUM
%000000         )
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
        
                // --------------------------------------------------------
                // Compare only RW fields
                // --------------------------------------------------------
        
%000000         if ((actual_reg & compare_mask) !==
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
%000000             (expected_reg & compare_mask)) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                  `uvm_error(
                    get_type_name(),
                    $sformatf(
                      "REGISTER READBACK MISMATCH: %s expected=0x%0h actual=0x%0h mask=0x%0h",
                      rg.get_name(),
                      expected_reg,
                      actual_reg,
                      compare_mask
                    )
%000000           )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                end
%000000         else begin
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                  `uvm_info(
                    "RAL_ACCESS",
                    $sformatf(
                      "REGISTER READBACK PASS: %s",
                      rg.get_name()
                    ),
                    UVM_MEDIUM
%000000           )
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_access_seq__Vclpkg
        
                end
        
              end
        
            end
        
          endtask
        
        endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_reset_seq
          // PURPOSE: Verify stable readable register reset values.
          // REGISTERS TESTED: Readable registers that are not volatile, dont_compare, or side-effect.
          // REGISTERS SKIPPED: Volatile, dont_compare, unreadable, and explicit side-effect registers.
          // WHY SKIPPED: Their values are not guaranteed to be stable storage for reset comparison.
          // EXPECTED RESULT: Every tested register reads back its documented reset value.
          //============================================================================
          class apb_i2c_reg_reset_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_reset_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_reset_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000       uvm_reg_data_t rdata;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000       model.reset();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000         rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000         if (!reg_compare_enabled(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000         if (reg_is_volatile(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000         if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000         if (!reg_readable(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000         rg.read(status, rdata, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000         if (status != UVM_IS_OK)
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("RESET READ FAILED: %s", rg.get_name()))
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000         else if (rdata !== rg.get_reset())
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("RESET MISMATCH: %s expected=0x%0h actual=0x%0h", rg.get_name(), rg.get_reset(), rdata))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_reset_seq__Vclpkg
              end
            endtask
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_write_read_seq
          // PURPOSE: Verify ordinary readable/writable register storage.
          // REGISTERS TESTED: Registers containing RW writable fields and no volatile/side-effect/dont_compare metadata.
          // REGISTERS SKIPPED: RO-only, WO-only, volatile, dont_compare, and side-effect registers.
          // WHY SKIPPED: They do not provide stable ordinary storage readback semantics.
          // EXPECTED RESULT: Writable field values read back correctly.
          //============================================================================
          class apb_i2c_reg_write_read_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_write_read_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_write_read_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg_data_t current_value;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg_data_t expected;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg_data_t actual;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg_data_t random_value;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg_data_t writable_mask;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg_data_t field_mask;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       uvm_reg_field f;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       int width;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       int lsb;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       bit has_rw;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       string acc;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         if (!reg_compare_enabled(rg) || reg_is_volatile(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
        
%000000         fields.delete();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         rg.get_fields(fields);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         has_rw = 0;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         foreach (fields[j]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           f = fields[j];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           acc = f.get_access();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           if (acc == "RW") has_rw = 1;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
                end
%000000         if (!has_rw) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=expr comment=(has_rw==0) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=expr comment=(has_rw==1) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
        
                // Read the current register value first.  This preserves RO/reserved bits
                // instead of randomizing them as part of a full register write.
%000000         rg.read(status, current_value, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("INITIAL READ FAILED: %s", rg.get_name()))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
                end
        
%000000         expected = current_value;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         writable_mask = '0;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
        
                // Randomize only RW field positions and construct one complete expected value.
%000000         foreach (fields[j]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           f = fields[j];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           acc = f.get_access();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           if (acc != "RW") continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           width = f.get_n_bits();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           lsb = f.get_lsb_pos();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           random_value = { $urandom, $urandom };
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           if (width >= $bits(uvm_reg_data_t))
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000             field_mask = '1;
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           else if (width > 0)
-000000  point: type=line comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=line comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000             field_mask = (uvm_reg_data_t'(1) << width) - 1;
-000000  point: type=line comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
                  else
%000000             field_mask = '0;
-000000  point: type=line comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           random_value = random_value & field_mask;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           expected = (expected & ~(field_mask << lsb)) | ((random_value & field_mask) << lsb);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           writable_mask = writable_mask | (field_mask << lsb);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
                end
        
                // Perform one register-level write, then one register-level readback.
%000000         rg.write(status, expected, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("WRITE FAILED: %s expected=0x%0h", rg.get_name(), expected))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
                end
        
%000000         rg.read(status, actual, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         if (status != UVM_IS_OK)
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("READ FAILED: %s", rg.get_name()))
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000         else if ((actual & writable_mask) !== (expected & writable_mask))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("READBACK MISMATCH: %s expected(writable)=0x%0h actual(writable)=0x%0h full_expected=0x%0h full_actual=0x%0h", rg.get_name(), (expected & writable_mask), (actual & writable_mask), expected, actual))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_read_seq__Vclpkg
              end
            endtask
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_ro_read_seq
          // PURPOSE: Verify stable RO registers are readable and unchanged.
          // REGISTERS TESTED: Registers whose fields are all RO and whose metadata permits comparison.
          // REGISTERS SKIPPED: Mixed-access, volatile, dont_compare, and side-effect registers.
          // WHY SKIPPED: Only stable all-RO storage is targeted by this sequence.
          // EXPECTED RESULT: RO reads match the documented reset value.
          //============================================================================
          class apb_i2c_reg_ro_read_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_ro_read_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_ro_read_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000       uvm_reg_data_t rdata;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000         rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000         if (!reg_all_ro(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000         if (!reg_compare_enabled(rg) || reg_is_volatile(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000         if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000         rg.read(status, rdata, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000         if (status != UVM_IS_OK)
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("RO READ FAILED: %s", rg.get_name()))
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000         else if (rdata !== rg.get_reset())
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("RO MISMATCH: %s expected=0x%0h actual=0x%0h", rg.get_name(), rg.get_reset(), rdata))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_read_seq__Vclpkg
              end
            endtask
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_ro_write_ignore_seq
          // PURPOSE: Verify a physical WRITE to an all-RO register does not change DUT state.
          // REGISTERS TESTED: Stable all-RO registers that are comparable.
          // REGISTERS SKIPPED: Mixed-access, volatile, dont_compare, and side-effect registers.
          // WHY SKIPPED: The negative test is specifically for stable all-RO storage.
          // EXPECTED RESULT: DUT readback remains identical to the value before the illegal WRITE.
          //============================================================================
          class apb_i2c_reg_ro_write_ignore_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_ro_write_ignore_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_ro_write_ignore_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000       uvm_reg_data_t orig, wdata, rdata;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000         rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000         if (!reg_all_ro(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000         if (!reg_compare_enabled(rg) || reg_is_volatile(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000         if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000         rg.read(status, orig, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
                // Auto-prediction is disabled on the RAL map; the bus predictor
                // controls mirror updates, including suppression of all-RO writes.
%000000         wdata = ~orig;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000         rg.write(status, wdata, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000         rg.read(status, rdata, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000         if (rdata !== orig)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("RO WRITE CHANGED %s: before=0x%0h after=0x%0h", rg.get_name(), orig, rdata))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_ro_write_ignore_seq__Vclpkg
              end
            endtask
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_wo_test_seq
          // PURPOSE: Exercise write-only registers without attempting readback comparison.
          // REGISTERS TESTED: Registers containing WO fields.
          // REGISTERS SKIPPED: Registers without WO fields.
          // WHY SKIPPED: They are not write-only targets.
          // EXPECTED RESULT: WO writes complete without an invalid RAL readback requirement.
          //============================================================================
          class apb_i2c_reg_wo_test_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_wo_test_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_wo_test_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000       uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000       uvm_reg_data_t wdata;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000       bit has_wo;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000         rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000         rg.get_fields(fields);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000         has_wo = 0;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000         foreach (fields[j]) if (fields[j].get_access() == "WO") has_wo = 1;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000         if (!has_wo) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=expr comment=(has_wo==0) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=expr comment=(has_wo==1) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000         wdata = $urandom;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000         rg.write(status, wdata, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000         if (status != UVM_IS_OK)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("WO WRITE FAILED: %s", rg.get_name()))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_wo_test_seq__Vclpkg
              end
            endtask
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_walk_one_seq
          // PURPOSE: Verify writable fields using field-relative walking-one write/read/compare.
          // REGISTERS TESTED: Eligible RW fields in stable, comparable registers.
          // REGISTERS SKIPPED: RO, WO, volatile, dont_compare, reserved, and side-effect fields.
          // WHY SKIPPED: These fields do not provide stable ordinary storage semantics.
          // EXPECTED RESULT: Every one-hot field value reads back exactly as written.
          //============================================================================
          class apb_i2c_reg_walk_one_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_walk_one_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_walk_one_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       uvm_reg_field fields[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       uvm_reg_data_t expected, actual;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       uvm_reg_field f;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       int width;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       int b;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000         rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000         if (!reg_compare_enabled(rg) || reg_is_volatile(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000         if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000         rg.get_fields(fields);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000         foreach (fields[j]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000           f = fields[j];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000           if (f.get_access() != "RW") continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000           width = f.get_n_bits();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000           if (width <= 0 || width > $bits(uvm_reg_data_t)) continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=expr comment=((width <= 32'sh0)==0 && (width > 32'h40)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=expr comment=((width <= 32'sh0)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=expr comment=((width > 32'h40)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000           for (b = 0; b < width; b++) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000             expected = (uvm_reg_data_t'(1) << b);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000             f.write(status, expected, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000             if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000               `uvm_error(get_type_name(), $sformatf("WALK-ONE WRITE FAILED: %s.%s bit=%0d", rg.get_name(), f.get_name(), b))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000               continue;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
                    end
%000000             f.read(status, actual, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000             if (status != UVM_IS_OK)
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000               `uvm_error(get_type_name(), $sformatf("WALK-ONE READ FAILED: %s.%s bit=%0d", rg.get_name(), f.get_name(), b))
-000000  point: type=line comment=elsif hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000             else if (actual !== expected)
-000000  point: type=line comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=line comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
%000000               `uvm_error(get_type_name(), $sformatf("WALK-ONE MISMATCH: %s.%s bit=%0d expected=0x%0h actual=0x%0h", rg.get_name(), f.get_name(), b, expected, actual))
-000000  point: type=line comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
                    else
%000000               `uvm_info(get_type_name(), $sformatf("WALK-ONE PASS: %s.%s bit=%0d value=0x%0h", rg.get_name(), f.get_name(), b, actual), UVM_HIGH)
-000000  point: type=line comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_walk_one_seq__Vclpkg
                  end
                end
              end
            endtask
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_volatile_seq
          // PURPOSE: Exercise explicitly volatile registers without stable-value comparison.
          // REGISTERS TESTED: Registers marked volatile in YAML metadata.
          // REGISTERS SKIPPED: Non-volatile registers.
          // WHY SKIPPED: This sequence targets volatile behavior only.
          // EXPECTED RESULT: Volatile reads complete without assuming a stable readback value.
          //============================================================================
          class apb_i2c_reg_volatile_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_volatile_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_volatile_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000       uvm_reg_data_t rdata;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000         rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000         if (!reg_is_volatile(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000         if (!reg_readable(rg)) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000         rg.read(status, rdata, UVM_FRONTDOOR);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000         if (status != UVM_IS_OK)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
%000000           `uvm_error(get_type_name(), $sformatf("VOLATILE READ FAILED: %s", rg.get_name()))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_volatile_seq__Vclpkg
              end
            endtask
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_side_effect_seq
          // PURPOSE: Exercise only registers explicitly marked with read/write side effects in YAML.
          // REGISTERS TESTED: Registers with read_side_effect or write_side_effect metadata.
          // REGISTERS SKIPPED: Registers without explicit side-effect metadata.
          // WHY SKIPPED: Volatile and access type are independent and must not invent side effects.
          // EXPECTED RESULT: Explicit side-effect transactions complete; no stable storage comparison is assumed.
          //============================================================================
          class apb_i2c_reg_side_effect_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_side_effect_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_side_effect_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000       uvm_reg_data_t wdata, rdata;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000       bit has_read_side;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000       bit has_write_side;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000         rg = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000         has_read_side = has_read_side_effect(rg.get_name());
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000         has_write_side = has_write_side_effect(rg.get_name());
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000         if (!has_read_side && !has_write_side) continue;
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=expr comment=(has_read_side==0 && has_write_side==0) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=expr comment=(has_read_side==1) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=expr comment=(has_write_side==1) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000         if (has_read_side && reg_readable(rg)) begin
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000           rg.read(status, rdata, UVM_FRONTDOOR);
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000           if (status != UVM_IS_OK)
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000             `uvm_error(get_type_name(), $sformatf("READ SIDE-EFFECT TRANSACTION FAILED: %s", rg.get_name()))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
                end
%000000         if (has_write_side && reg_writable(rg)) begin
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000           wdata = $urandom;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000           rg.write(status, wdata, UVM_FRONTDOOR);
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000           if (status != UVM_IS_OK)
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
%000000             `uvm_error(get_type_name(), $sformatf("WRITE SIDE-EFFECT TRANSACTION FAILED: %s", rg.get_name()))
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_side_effect_seq__Vclpkg
                end
              end
            endtask
          endclass
        
          //============================================================================
          // TEST NAME: apb_i2c_reg_mirror_predict_seq
          // PURPOSE: Demonstrate desired/mirror/update using a runtime-selected stable register.
          // REGISTERS TESTED: First runtime-selected stable readable/writable register, if one exists.
          // REGISTERS SKIPPED: Volatile, dont_compare, unreadable, and side-effect registers.
          // WHY SKIPPED: They are not appropriate for this stable mirror demonstration.
          // EXPECTED RESULT: Desired value is transferred and a frontdoor read is completed.
          //============================================================================
          class apb_i2c_reg_mirror_predict_seq extends apb_i2c_ral_base_seq;
%000001     `uvm_object_utils(apb_i2c_reg_mirror_predict_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000     function new(string name = "apb_i2c_reg_mirror_predict_seq"); super.new(name); endfunction
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000     virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000       uvm_status_e status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000       uvm_reg regs[$];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000       uvm_reg rg;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000       uvm_reg tmp;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000       uvm_reg_data_t wdata, rdata;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000       model.get_registers(regs);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000       rg = null;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000       foreach (regs[i]) begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000         tmp = regs[i];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000         if (reg_compare_enabled(tmp) && !reg_is_volatile(tmp) && reg_readable(tmp) && reg_writable(tmp) &&
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000             !has_read_side_effect(tmp.get_name()) && !has_write_side_effect(tmp.get_name())) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000           rg = tmp;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000           break;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
                end
              end
%000000       if (rg != null) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000         wdata = 32'hDEAD_BEEF;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000         rg.set(wdata);
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000         rg.update(status, UVM_FRONTDOOR);
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
%000000         rg.read(status, rdata, UVM_FRONTDOOR);
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_mirror_predict_seq__Vclpkg
              end
            endtask
          endclass
          
        
          
 000025   class apb_i2c_reg_write_seq extends apb_i2c_ral_base_seq;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
~000025   `uvm_object_utils(apb_i2c_reg_write_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
          rand bit [6:0]  slave_addr;
          rand bit        read_write;
           bit [31:0] tx_data;
          rand bit [7:0] tx_data_lower;
          constraint default_c {
            slave_addr == 7'h55;
            read_write == 1'b0;
          }
        
%000001   function new(string name = "apb_i2c_reg_write_seq");
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
%000001     super.new(name);
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
          endfunction
        
        
 000025   virtual task body();
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
 000025     uvm_status_e   status;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025     uvm_reg_data_t status_value;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025     uvm_reg_data_t ctrl_value;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
 000025     bit busy;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025     bit done;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025     bit slave_error;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
~000025     if (model == null) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              `uvm_fatal("RAL_SEQ",
%000000                  "model is NULL")
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
            end
        
            //========================================================
            // RANDOMIZE SEQUENCE VARIABLES
            //========================================================
        
~000025     if (!(this.randomize())) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              `uvm_fatal("I2C_WRITE",
%000000                  "Sequence randomization failed")
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
            end
        
            `uvm_info(
              "I2C_WRITE",
              $sformatf(
                "RANDOMIZED: SLAVE_ADDR=0x%02h READ_WRITE=%0b TX_LOWER=0x%02h",
                slave_addr,
                read_write,
                tx_data_lower
              ),
              UVM_MEDIUM
~000025     )
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
            //========================================================
            // 1. WAIT UNTIL BUSY = 0
            //========================================================
        
            `uvm_info("I2C_WRITE",
                      "Waiting for BUSY = 0",
~000025               UVM_MEDIUM)
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
~000025     do begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
 000025       model.STATUS_REG.read(
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         status,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         status_value,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         UVM_FRONTDOOR
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              );
        
~000025       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
                `uvm_fatal("I2C_WRITE",
%000000                    "STATUS_REG read failed")
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              end
        
 000025       busy = status_value[0];
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
              `uvm_info(
                "I2C_WRITE",
                $sformatf(
                  "STATUS = 0x%08h BUSY=%0b",
                  status_value,
                  busy
                ),
                UVM_MEDIUM
~000025       );
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
~000025       if (busy)
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
%000000         #100ns;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
~000025     end while (busy);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
            //========================================================
            // 2. WRITE CTRL_REG
            //========================================================
        
 000025 	    ctrl_value = '0;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
 000025 	    ctrl_value[6:0] = slave_addr;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025 	    ctrl_value[7]   = read_write;
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
             //ctrl_value = 32'h0000_0102;
        
        	    `uvm_info(
        	      "I2C_WRITE",
        	      $sformatf(
        		"CTRL_REG <= 0x%08h",
        		ctrl_value
        	      ),
        	      UVM_MEDIUM
~000025 	    )
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
 000025 	    model.CTRL_REG.write(
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025 	      status,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025 	      ctrl_value,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025 	      UVM_FRONTDOOR
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        	    );
        
        
~000025     if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              `uvm_fatal(
                "I2C_WRITE",
                "CTRL_REG write failed"
%000000       )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
            end
        
        
            //========================================================
            // 3. WRITE TXDATA_REG
            //========================================================
 000025     tx_data = {16'h0000,read_write,slave_addr,tx_data_lower};
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
            `uvm_info(
              "I2C_WRITE",
              $sformatf(
                "TXDATA_REG <= 0x%08h",
                tx_data
              ),
              UVM_MEDIUM
~000025     )
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
 000025     model.TXDATA_REG.write(
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025       status,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025       tx_data,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025       UVM_FRONTDOOR
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
            );
        
        
~000025     if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              `uvm_fatal(
                "I2C_WRITE",
                "TXDATA_REG write failed"
%000000       )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
            end
        
        
            //========================================================
            // 4. WAIT UNTIL DONE = 1
            //========================================================
        
            `uvm_info(
              "I2C_WRITE",
              "Waiting for DONE = 1",
              UVM_MEDIUM
~000025     )
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
 000050     do begin
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
 000050       model.STATUS_REG.read(
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000050         status,
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000050         status_value,
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000050         UVM_FRONTDOOR
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              );
        
        
~000050       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000050  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
                `uvm_fatal(
                  "I2C_WRITE",
                  "STATUS_REG read failed"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              end
        
        
 000050       busy        = status_value[0];
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000050       done        = status_value[1];
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000050       slave_error = status_value[2];
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
              `uvm_info(
                "I2C_WRITE",
                $sformatf(
                  "STATUS = 0x%08h BUSY=%0b DONE=%0b SLVERR=%0b",
                  status_value,
                  busy,
                  done,
                  slave_error
                ),
                UVM_MEDIUM
~000050       );
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000050  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
              // Check error
~000050       if (slave_error) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000050  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
                `uvm_error(
                  "I2C_WRITE",
                  "I2C transaction failed: SLAVE_ERROR = 1"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
%000000         break;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              end
        
        
 000025       if (!done)
+000025  point: type=expr comment=(done==0) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=expr comment=(done==1) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         #100ns;
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
~000050     end while (!done);
+000025  point: type=expr comment=(done==0) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=expr comment=(done==1) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000050  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
        
        
~000025     if (done) begin
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              `uvm_info(
                "I2C_WRITE",
                "I2C WRITE transaction completed",
                UVM_MEDIUM
~000025       )
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
            end
            
 000025      model.STATUS_REG.read(
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         status,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         status_value,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         UVM_FRONTDOOR
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              );
        
        
~000025       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
                `uvm_fatal(
                  "I2C_READ",
                  "STATUS_REG read failed"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              end
              
 000025        model.STATUS_REG.read(
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         status,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         status_value,
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
 000025         UVM_FRONTDOOR
+000025  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              );
        
        
~000025       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
                `uvm_fatal(
                  "I2C_READ",
                  "STATUS_REG read failed"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_write_seq__Vclpkg
              end
              
        
          endtask
        
        endclass
        
%000000 class apb_i2c_reg_read_seq extends apb_i2c_ral_base_seq;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
%000001   `uvm_object_utils(apb_i2c_reg_read_seq)
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
          rand bit [6:0] slave_addr;
          rand bit       read_write;
           bit [31:0] tx_data;
          
          rand bit [7:0] tx_data_lower;
          
          bit [7:0] rx_data;
        
        
          constraint default_c {
            slave_addr == 7'h55;
            read_write == 1'b1;
          tx_data_lower == 8'b00;
          }
        
        
%000000   function new(string name = "apb_i2c_reg_read_seq");
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
          endfunction
        
        
%000000   virtual task body();
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
%000000     uvm_status_e   status;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000     uvm_reg_data_t status_value;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000     uvm_reg_data_t ctrl_value;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000     uvm_reg_data_t rx_value;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
%000000     bit busy;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000     bit done;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000     bit slave_error;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
%000000     if (model == null) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              `uvm_fatal(
                "RAL_SEQ",
                "model is NULL"
%000000       )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            end
        
            //========================================================
            // RANDOMIZE SEQUENCE VARIABLES
            //========================================================
        
%000000     if (!randomize()) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              `uvm_fatal("I2C_WRITE",
%000000                  "Sequence randomization failed")
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            end
        
            `uvm_info(
              "I2C_WRITE",
              $sformatf(
                "RANDOMIZED: SLAVE_ADDR=0x%02h READ_WRITE=%0b TX_LOWER=0x%02h",
                slave_addr,
                read_write,
                tx_data_lower
              ),
              UVM_MEDIUM
%000000     )
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
            //========================================================
            // 1. WAIT UNTIL BUSY = 0
            //========================================================
        
        
        
            
            `uvm_info(
              "I2C_READ",
              "Waiting for BUSY = 0",
              UVM_MEDIUM
%000000     )
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
%000000     do begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
%000000       model.STATUS_REG.read(
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         status,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         status_value,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         UVM_FRONTDOOR
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              );
        
        
%000000       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
                `uvm_fatal(
                  "I2C_READ",
                  "STATUS_REG read failed"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              end
        
        
%000000       busy = status_value[0];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
              `uvm_info(
                "I2C_READ",
                $sformatf(
                  "STATUS = 0x%08h BUSY=%0b",
                  status_value,
                  busy
                ),
                UVM_MEDIUM
%000000       );
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
%000000       if (busy)
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         #100ns;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
%000000     end while (busy);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
            //========================================================
            // 2. WRITE CTRL_REG
            //========================================================
        
%000000     ctrl_value = '0;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
%000000     ctrl_value[6:0] = slave_addr;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000     ctrl_value[7]   = read_write;
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
            `uvm_info(
              "I2C_READ",
              $sformatf(
                "CTRL_REG <= 0x%08h",
                ctrl_value
              ),
              UVM_MEDIUM
%000000     )
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
%000000     model.CTRL_REG.write(
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       status,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000      ctrl_value,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       UVM_FRONTDOOR
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            );
        
        
%000000     if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              `uvm_fatal(
                "I2C_READ",
                "CTRL_REG write failed"
%000000       )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            end
             
             //========================================================
            // 3. WRITE TXDATA_REG
            //========================================================
%000000     tx_data = {16'h0000,read_write,slave_addr,8'h00};
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            `uvm_info(
              "I2C_WRITE",
              $sformatf(
                "TXDATA_REG <= 0x%08h",
                tx_data
              ),
              UVM_MEDIUM
%000000     )
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
%000000     model.TXDATA_REG.write(
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       status,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       tx_data,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       UVM_FRONTDOOR
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            );
        
        
%000000     if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              `uvm_fatal(
                "I2C_WRITE",
                "TXDATA_REG write failed"
%000000       )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            end
            
        
        
            //========================================================
            // 4. WAIT UNTIL DONE = 1
            //========================================================
        
            `uvm_info(
              "I2C_READ",
              "Waiting for DONE = 1",
              UVM_MEDIUM
%000000     )
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
%000000     do begin
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
%000000       model.STATUS_REG.read(
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         status,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         status_value,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         UVM_FRONTDOOR
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              );
        
        
%000000       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
                `uvm_fatal(
                  "I2C_READ",
                  "STATUS_REG read failed"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              end
        
        
%000000       busy        = status_value[0];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       done        = status_value[1];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       slave_error = status_value[2];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
              `uvm_info(
                "I2C_READ",
                $sformatf(
                  "STATUS = 0x%08h BUSY=%0b DONE=%0b SLVERR=%0b",
                  status_value,
                  busy,
                  done,
                  slave_error
                ),
                UVM_MEDIUM
%000000       );
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
              // Check slave error
%000000       if (slave_error) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
                `uvm_error(
                  "I2C_READ",
                  "I2C transaction failed: SLAVE_ERROR = 1"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
%000000         return;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
              end
        
        
%000000       if (!done)
-000000  point: type=expr comment=(done==0) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=expr comment=(done==1) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         #100ns;
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
%000000     end while (!done);
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=expr comment=(done==0) => 1 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=expr comment=(done==1) => 0 hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
            //========================================================
            // 5. READ RXDATA_REG
            //========================================================
        
%000000     model.RXDATA_REG.read(
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       status,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       rx_value,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000       UVM_FRONTDOOR
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            );
        
        
%000000     if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              `uvm_fatal(
                "I2C_READ",
                "RXDATA_REG read failed"
%000000       )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
            end
        
        
%000000     rx_data = rx_value[7:0];
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
            `uvm_info(
              "I2C_READ",
              $sformatf(
                "RXDATA_REG = 0x%08h",
                rx_value
              ),
              UVM_MEDIUM
%000000     );
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
        
            `uvm_info(
              "I2C_READ",
              $sformatf(
                "Received I2C data = 0x%02h",
                rx_data
              ),
              UVM_MEDIUM
%000000     );
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
        
%000000 model.STATUS_REG.read(
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         status,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         status_value,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         UVM_FRONTDOOR
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              );
        
        
%000000       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
                `uvm_fatal(
                  "I2C_WRITE",
                  "STATUS_REG read failed"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              end
              
%000000       model.STATUS_REG.read(
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         status,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         status_value,
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
%000000         UVM_FRONTDOOR
-000000  point: type=line comment=block hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              );
        
        
%000000       if (status != UVM_IS_OK) begin
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
                `uvm_fatal(
                  "I2C_WRITE",
                  "STATUS_REG read failed"
%000000         )
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_ral_sequences_pkg::apb_i2c_reg_read_seq__Vclpkg
              end
          endtask
        
        endclass
        endpackage
        
