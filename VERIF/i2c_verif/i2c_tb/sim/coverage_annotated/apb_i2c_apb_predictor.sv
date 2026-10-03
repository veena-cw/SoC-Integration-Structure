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
        
        // Generated APB Predictor for APB_to_I2C_Controller
        // Generic field-aware predictor.
        // - All-RO WRITE: ignored because DUT state must not change.
        // - Mixed fields: only writable fields are predicted; non-writable fields keep their mirror.
        // - Writable access semantics are delegated to uvm_reg_field::predict(UVM_PREDICT_WRITE).
        // - volatile/dont_compare/side-effect metadata does not turn a bus WRITE into a prediction rule.
        package apb_i2c_apb_predictor_pkg;
          import uvm_pkg::*;
          `include "uvm_macros.svh"
          import apb_i2c_apb_item_pkg::*;
          class apb_i2c_apb_predictor extends uvm_reg_predictor #(apb_i2c_apb_item);
~000051     `uvm_component_utils(apb_i2c_apb_predictor)
+000051  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
-000001  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
-000000  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000001     function new(string name = "apb_i2c_apb_predictor", uvm_component parent = null);
-000001  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000001       super.new(name, parent);
-000001  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
            endfunction
        
            // Return 1 for access types that can accept a physical WRITE.
            // The list is generic and contains no project/register names.
 000125     function bit is_writable_access(string acc);
+000125  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000125       case (acc)
+000125  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
                "RW", "WO", "W1C", "W1S", "W1T",
                "W0C", "W0S", "W0T", "WC", "WS",
                "WC1S", "WS1C", "WCRS", "WCRC",
%000000         "W1CRS", "W0C1S", "W0S1C":
-000000  point: type=line comment=case hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000           return 1;
-000000  point: type=line comment=case hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         default:
-000000  point: type=line comment=case hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000           return 0;
-000000  point: type=line comment=case hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
              endcase
            endfunction
        
 000300     virtual function void write(input apb_i2c_apb_item tr);
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       uvm_reg_bus_op rw;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       uvm_reg rg;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       uvm_reg_field fields[$];
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       uvm_reg_field f;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       bit writable_count;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       string acc;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       int lsb;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       int nbits;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000300       uvm_reg_data_t field_value;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
        
~000300       if (adapter == null || map == null) begin
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000300  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         super.write(tr);
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
              end
        
 000300       adapter.bus2reg(tr, rw);
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
        
~000050       if (rw.kind != UVM_WRITE) begin
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000050  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         super.write(tr);
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
              end
        
 000300       rg = map.get_reg_by_offset(rw.addr, 0);
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
~000050       if (rg == null) begin
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000050  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         super.write(tr);
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
              end
        
 000300       rg.get_fields(fields);
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
        
~000050       if (fields.size() == 0) begin
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000050  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         super.write(tr);
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
              end
        
 000300       writable_count = 0;
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
~000300       foreach (fields[i]) begin
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000100  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000100  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000075         if (is_writable_access(fields[i].get_access()))
+000025  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000075  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000075           writable_count++;
+000075  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
              end
        
              // A physical WRITE to an all-RO register is legal as a negative
              // verification transaction, but it must not update the RAL mirror.
~000025       if (writable_count == 0) begin
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000025  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
                `uvm_info(get_type_name(),
                  $sformatf("WRITE to %s at 0x%08h: no writable fields; prediction suppressed",
~000025                     rg.get_name(), rw.addr), UVM_MEDIUM)
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000025  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000         return;
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
              end
        
              // Mixed-field prediction:
              // predict each writable field independently. RO/read-only and other
              // non-writable fields are deliberately not predicted, so their mirror
              // values remain unchanged.
~000300       foreach (fields[i]) begin
+000025  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000025  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
-000000  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000300  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000025         f = fields[i];
+000025  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000025         acc = f.get_access();
+000025  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
        
~000025         if (!is_writable_access(acc))
+000025  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
-000000  point: type=expr comment=(is_writable_access(acc)==0) => 1 hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
+000025  point: type=expr comment=(is_writable_access(acc)==1) => 0 hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000           continue;
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
        
 000025         lsb = f.get_lsb_pos();
+000025  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000025         nbits = f.get_n_bits();
+000025  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
        
~000025         if (nbits >= $bits(uvm_reg_data_t))
+000025  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
%000000           field_value = rw.data;
-000000  point: type=branch comment=if hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
                else
 000025           field_value = (rw.data >> lsb) & ((uvm_reg_data_t'(1) << nbits) - 1);
+000025  point: type=branch comment=else hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
        
                // UVM_PREDICT_WRITE lets the field apply its access semantics
                // (RW/WO/W1C/etc.) instead of blindly mirroring the complete bus word.
 000025         f.predict(field_value, rw.byte_en, UVM_PREDICT_WRITE,
+000025  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
 000025                   UVM_FRONTDOOR, map);
+000025  point: type=line comment=block hier=apb_i2c_apb_predictor_pkg::apb_i2c_apb_predictor__Vclpkg
              end
            endfunction
          endclass
        endpackage
        
