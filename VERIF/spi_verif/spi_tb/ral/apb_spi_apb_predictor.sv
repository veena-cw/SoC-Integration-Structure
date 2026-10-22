//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_apb_predictor
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: RAL predictor: field-aware mirror update from the APB monitor, ignores aborted/error transfers, resets the mirror on DUT reset
//=================================================================================
import apb_spi_types_pkg::*;

class apb_spi_apb_predictor extends uvm_reg_predictor #(apb_seq_item);

  `uvm_component_utils(apb_spi_apb_predictor)

  // reset events from the reset monitor
  uvm_analysis_imp_rst #(reset_seq_item, apb_spi_apb_predictor) rst_imp;

  function new(string name = "apb_spi_apb_predictor", uvm_component parent = null);
    super.new(name, parent);
    rst_imp = new("rst_imp", this);
  endfunction

  // 1 for access types that can accept a physical WRITE
  function bit is_writable_access(string acc);
    case (acc)
      "RW", "RW1C", "WO", "W1C", "W1S", "W1T",
      "W0C", "W0S", "W0T", "WC", "WS",
      "WC1S", "WS1C", "WCRS", "WCRC",
      "W1CRS", "W0C1S", "W0S1C":
        return 1;
      default:
        return 0;
    endcase
  endfunction

  // DUT reset: the register mirror goes back to the hardware reset values
  function void write_rst(reset_seq_item t);
    uvm_reg_block blk;
    if (t.is_assert && map != null) begin
      blk = map.get_parent();
      if (blk != null) blk.reset();
    end
  endfunction

  // - transfers aborted by reset or answered with PSLVERR never reach the DUT registers: no prediction
  // - WRITE to an all-RO register: prediction suppressed (mirror must not change)
  // - mixed registers: only writable fields are predicted, through uvm_reg_field::predict(UVM_PREDICT_WRITE)
  virtual function void write(input apb_seq_item tr);
    uvm_reg_bus_op rw;
    uvm_reg        rg;
    uvm_reg_field  fields[$];
    uvm_reg_field  f;
    int unsigned   writable_count;
    string         acc;
    int            lsb;
    int            nbits;
    uvm_reg_data_t field_value;

    if (tr.aborted_by_reset || tr.pslverr) return;

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
    foreach (fields[i])
      if (is_writable_access(fields[i].get_access())) writable_count++;

    if (writable_count == 0) begin
      `uvm_info(get_type_name(),
                $sformatf("WRITE to %s at 0x%08h: no writable fields; prediction suppressed", rg.get_name(), rw.addr),
                UVM_MEDIUM)
      return;
    end

    foreach (fields[i]) begin
      f   = fields[i];
      acc = f.get_access();
      if (!is_writable_access(acc)) continue;
      lsb   = f.get_lsb_pos();
      nbits = f.get_n_bits();
      if (nbits >= $bits(uvm_reg_data_t)) field_value = rw.data;
      else                                field_value = (rw.data >> lsb) & ((uvm_reg_data_t'(1) << nbits) - 1);
      f.predict(field_value, rw.byte_en, UVM_PREDICT_WRITE, UVM_FRONTDOOR, map);
    end
  endfunction

endclass
