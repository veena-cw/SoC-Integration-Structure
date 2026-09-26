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

// Generated APB Predictor for RoaLogic_PLIC
// Generic field-aware predictor.
// - All-RO WRITE: ignored because DUT state must not change.
// - Mixed fields: only writable fields are predicted; non-writable fields keep their mirror.
// - Writable access semantics are delegated to uvm_reg_field::predict(UVM_PREDICT_WRITE).
// - volatile/dont_compare/side-effect metadata does not turn a bus WRITE into a prediction rule.
package plic_apb_predictor_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  import plic_apb_item_pkg::*;
  class plic_apb_predictor extends uvm_reg_predictor #(plic_apb_item);
    `uvm_component_utils(plic_apb_predictor)
    function new(string name = "plic_apb_predictor", uvm_component parent = null);
      super.new(name, parent);
    endfunction

    // Return 1 for access types that can accept a physical WRITE.
    // The list is generic and contains no project/register names.
    function bit is_writable_access(string acc);
      case (acc)
        "RW", "WO", "W1C", "W1S", "W1T",
        "W0C", "W0S", "W0T", "WC", "WS",
        "WC1S", "WS1C", "WCRS", "WCRC",
        "W1CRS", "W0C1S", "W0S1C":
          return 1;
        default:
          return 0;
      endcase
    endfunction

    virtual function void write(input plic_apb_item tr);
      uvm_reg_bus_op rw;
      uvm_reg rg;
      uvm_reg_field fields[$];
      uvm_reg_field f;
      bit writable_count;
      string acc;
      int lsb;
      int nbits;
      uvm_reg_data_t field_value;

      if (adapter == null || map == null) begin
        super.write(tr);
        return;
      end

      adapter.bus2reg(tr, rw);

      if (rw.kind != UVM_WRITE) begin
        super.write(tr);
        return;
      end

      rg = map.get_reg_by_offset(rw.addr, 0);
      if (rg == null) begin
        super.write(tr);
        return;
      end

      rg.get_fields(fields);

      if (fields.size() == 0) begin
        super.write(tr);
        return;
      end

      writable_count = 0;
      foreach (fields[i]) begin
        if (is_writable_access(fields[i].get_access()))
          writable_count++;
      end

      // A physical WRITE to an all-RO register is legal as a negative
      // verification transaction, but it must not update the RAL mirror.
      if (writable_count == 0) begin
        `uvm_info(get_type_name(),
          $sformatf("WRITE to %s at 0x%08h: no writable fields; prediction suppressed",
                    rg.get_name(), rw.addr), UVM_MEDIUM)
        return;
      end

      // Mixed-field prediction:
      // predict each writable field independently. RO/read-only and other
      // non-writable fields are deliberately not predicted, so their mirror
      // values remain unchanged.
      foreach (fields[i]) begin
        f = fields[i];
        acc = f.get_access();

        if (!is_writable_access(acc))
          continue;

        lsb = f.get_lsb_pos();
        nbits = f.get_n_bits();

        if (nbits >= $bits(uvm_reg_data_t))
          field_value = rw.data;
        else
          field_value = (rw.data >> lsb) & ((uvm_reg_data_t'(1) << nbits) - 1);

        // UVM_PREDICT_WRITE lets the field apply its access semantics
        // (RW/WO/W1C/etc.) instead of blindly mirroring the complete bus word.
        f.predict(field_value, rw.byte_en, UVM_PREDICT_WRITE,
                  UVM_FRONTDOOR, map);
      end
    endfunction
  endclass
endpackage
