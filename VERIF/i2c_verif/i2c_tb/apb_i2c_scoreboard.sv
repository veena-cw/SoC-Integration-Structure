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

// Generated generic scoreboard for APB_to_I2C_Controller (APB)
// Register-specific names are intentionally absent from scoreboard semantic logic.
`include "uvm_macros.svh"
import uvm_pkg::*;
import apb_i2c_apb_item_pkg::*;
import apb_i2c_ral_block_pkg::*;
import apb_i2c_ral_metadata_pkg::*;

class apb_i2c_scoreboard extends uvm_component;
  `uvm_component_utils(apb_i2c_scoreboard)
  apb_i2c_ral_block ral_model;
  uvm_analysis_imp #(apb_i2c_apb_item, apb_i2c_scoreboard) bus_in;
  int match_cnt;
  int mismatch_cnt;
  int write_cnt;
  int read_cnt;

  function new(string name = "apb_i2c_scoreboard", uvm_component parent = null);
    super.new(name, parent);
    bus_in = new("bus_in", this);
  endfunction

  function bit reg_readable(uvm_reg rg);
    uvm_reg_field fs[$];
    rg.get_fields(fs);
    foreach (fs[i]) if (fs[i].get_access() != "WO") return 1;
    return 0;
  endfunction

  virtual function void write(apb_i2c_apb_item tr);
    if (tr == null) return;
    if (tr.pwrite) write_cnt++; else read_cnt++;
    `uvm_info("SCOREBOARD", $sformatf("SNOOP bus tr: %s", tr.convert2string()), UVM_HIGH)
  endfunction

  task check_reset_values();
    uvm_reg regs[$];
    uvm_reg_data_t exp, mir;
    uvm_reg rg;
    ral_model.get_registers(regs);
    foreach (regs[i]) begin
      rg = regs[i];
      if (is_dont_compare(rg.get_name())) continue;
      if (is_volatile(rg.get_name())) continue;
      if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
      if (!reg_readable(rg)) continue;
      exp = rg.get_reset();
      mir = rg.get_mirrored_value();
      if (mir !== exp) begin
        mismatch_cnt++;
        `uvm_error("SCOREBOARD", $sformatf("RESET MISMATCH %s: mirrored=0x%0h reset=0x%0h", rg.get_name(), mir, exp))
      end else begin
        match_cnt++;
      end
    end
  endtask

  function void check_mirror_desired(string ctx = "");
    uvm_reg regs[$];
    uvm_reg rg;
    ral_model.get_registers(regs);
    foreach (regs[i]) begin
      rg = regs[i];
      `uvm_info("SCOREBOARD", $sformatf("CHECK [%s] %s desired=0x%08h mirrored=0x%08h reset=0x%08h", ctx, rg.get_name(), rg.get(), rg.get_mirrored_value(), rg.get_reset()), UVM_HIGH)
    end
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("SCOREBOARD", $sformatf("Scoreboard report: %0d writes, %0d reads, %0d matched, %0d mismatched", write_cnt, read_cnt, match_cnt, mismatch_cnt), UVM_LOW)
  endfunction
endclass
