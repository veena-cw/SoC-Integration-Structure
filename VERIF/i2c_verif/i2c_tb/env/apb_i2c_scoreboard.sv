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
/*
`include "uvm_macros.svh"
import uvm_pkg::*;
import apb_i2c_apb_item_pkg::*;
import apb_i2c_ral_block_pkg::*;
import apb_i2c_ral_metadata_pkg::*;
`uvm_analysis_imp_decl(_apb)
`uvm_analysis_imp_decl(_i2c)

class apb_i2c_scoreboard extends uvm_component;
  `uvm_component_utils(apb_i2c_scoreboard)
  apb_i2c_ral_block ral_model;
  uvm_analysis_imp_apb #(apb_i2c_apb_item, apb_i2c_scoreboard) bus_in;
   uvm_analysis_imp_i2c	 #(apb_i2c_i2c_item, apb_i2c_scoreboard) i2c_in ;
  int match_cnt;
  int mismatch_cnt;
  int write_cnt;
  int read_cnt;

  function new(string name = "apb_i2c_scoreboard", uvm_component parent = null);
    super.new(name, parent);
    bus_in = new("bus_in", this);
     i2c_in = new("i2c_in", this);
  endfunction

  function bit reg_readable(uvm_reg rg);
    uvm_reg_field fs[$];
    rg.get_fields(fs);
    foreach (fs[i]) if (fs[i].get_access() != "WO") return 1;
    return 0;
  endfunction

  virtual function void write_apb(apb_i2c_apb_item tr);
    if (tr == null) return;
    if (tr.pwrite) write_cnt++; else read_cnt++;
    `uvm_info("SCOREBOARD", $sformatf("SNOOP bus tr: %s", tr.convert2string()), UVM_HIGH)
  endfunction
  
  
  virtual function void write_i2c(apb_i2c_i2c_item tr);
   
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
endclass*/

//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================

// Generated generic scoreboard for APB_to_I2C_Controller (APB)
// Register-specific names are intentionally absent from scoreboard semantic logic.

`include "uvm_macros.svh"
import uvm_pkg::*;

import apb_i2c_apb_item_pkg::*;
import apb_i2c_ral_block_pkg::*;
import apb_i2c_ral_metadata_pkg::*;

`uvm_analysis_imp_decl(_apb)
`uvm_analysis_imp_decl(_i2c)


class apb_i2c_scoreboard extends uvm_component;

  `uvm_component_utils(apb_i2c_scoreboard)


  //==========================================================================
  // RAL MODEL
  //==========================================================================

  apb_i2c_ral_block ral_model;


  //==========================================================================
  // ANALYSIS PORTS
  //==========================================================================

  uvm_analysis_imp_apb #(apb_i2c_apb_item,
                         apb_i2c_scoreboard) bus_in;

  uvm_analysis_imp_i2c #(apb_i2c_i2c_item,
                         apb_i2c_scoreboard) i2c_in;


  //==========================================================================
  // EXISTING COUNTERS
  //==========================================================================

  int match_cnt;
  int mismatch_cnt;
  int write_cnt;
  int read_cnt;


  //==========================================================================
  // I2C TRANSACTION INFORMATION
  //==========================================================================

  bit [6:0] i2c_slave_addr;
  bit       i2c_rw;

  bit [7:0] actual_i2c_write_data;
  bit [7:0] actual_i2c_read_data;

  bit       i2c_write_seen;
  bit       i2c_read_seen;


  //==========================================================================
  // STATUS INFORMATION
  //==========================================================================

  bit status_done;
  bit status_slave_error;
  bit status_busy;


  //==========================================================================
  // APB INFORMATION
  //==========================================================================

  bit [31:0] apb_tx_data;
  bit [7:0]  apb_rx_data;

  bit ctrl_seen;
  bit txdata_seen;
  bit rxdata_seen;
  bit status_seen;


  //==========================================================================
  // CONSTRUCTOR
  //==========================================================================

  function new(string name = "apb_i2c_scoreboard",
               uvm_component parent = null);

    super.new(name, parent);

    bus_in = new("bus_in", this);
    i2c_in = new("i2c_in", this);

  endfunction


  //==========================================================================
  // EXISTING FUNCTION
  //==========================================================================

  function bit reg_readable(uvm_reg rg);

    uvm_reg_field fs[$];

    rg.get_fields(fs);

    foreach (fs[i])
      if (fs[i].get_access() != "WO")
        return 1;

    return 0;

  endfunction


  //==========================================================================
  // APB MONITOR
  //
  // Observe APB transaction and update the RAL mirror.
  // Also extract STATUS DONE/SLAVE_ERROR.
  //==========================================================================

  virtual function void write_apb(apb_i2c_apb_item tr);

    uvm_reg rg;

    if (tr == null)
      return;


    //======================================================================
    // Existing counters
    //======================================================================

    if (tr.pwrite)
      write_cnt++;
    else
      read_cnt++;


    `uvm_info("SCOREBOARD",
              $sformatf("SNOOP bus tr: %s",
                        tr.convert2string()),
              UVM_HIGH)


    //======================================================================
    // Find register from APB address
    //======================================================================

    rg = ral_model.default_map.get_reg_by_offset(tr.paddr);

    if (rg == null) begin

      `uvm_warning("SCOREBOARD",
                   $sformatf(
                   "No RAL register found for APB address 0x%0h",
                   tr.paddr))

      return;

    end


    //======================================================================
    // APB WRITE
    //
    // Update RAL mirror from observed APB write.
    //======================================================================

    if (tr.pwrite) begin

      rg.predict(tr.pwdata);

      `uvm_info("SCOREBOARD",
                $sformatf(
                "RAL WRITE: %s <= 0x%08h",
                rg.get_name(),
                tr.pwdata),
                UVM_MEDIUM)


      //============================================================
      // CTRL register
      //============================================================

      if (rg.get_name() == "CTRL_REG") begin

        ctrl_seen = 1'b1;

        i2c_slave_addr = ral_model.CTRL_REG.SLAVE_ADDR.get_mirrored_value();


        i2c_rw = ral_model.CTRL_REG.READ_WRITE.get_mirrored_value();


        `uvm_info("SCOREBOARD",
                  $sformatf(
                  "CTRL: SLAVE_ADDR=0x%02h RW=%0b",
                  i2c_slave_addr,
                  i2c_rw),
                  UVM_MEDIUM)

      end


      //============================================================
      // TXDATA register
      //============================================================

      if (rg.get_name() == "TXDATA_REG") begin

        txdata_seen = 1'b1;

        apb_tx_data = ral_model.TXDATA_REG.TRANSMIT_DATA.get_mirrored_value();

        `uvm_info("SCOREBOARD",
                  $sformatf(
                  "TXDATA: 0x%08h",
                  apb_tx_data),
                  UVM_MEDIUM)

      end

    end


    //======================================================================
    // APB READ
    //
    // Update RAL mirror from actual APB PRDATA.
    //======================================================================

    else begin

      rg.predict(tr.prdata);

      `uvm_info("SCOREBOARD",
                $sformatf(
                "RAL READ: %s => 0x%08h",
                rg.get_name(),
                tr.prdata),
                UVM_MEDIUM)


      //============================================================
      // STATUS register
      //============================================================

      if (rg.get_name() == "STATUS_REG") begin

        status_seen = 1'b1;

       status_busy = ral_model.STATUS_REG.I2C_BUSY.get_mirrored_value();

	status_done = ral_model.STATUS_REG.I2C_DONE.get_mirrored_value();

	status_slave_error = ral_model.STATUS_REG.SLAVE_ERROR.get_mirrored_value();


        `uvm_info("SCOREBOARD",
                  $sformatf(
                  "STATUS: BUSY=%0b DONE=%0b SLAVE_ERROR=%0b",
                  status_busy,
                  status_done,
                  status_slave_error),
                  UVM_MEDIUM)


        //==========================================================
        // Transaction completed successfully
        //==========================================================

        if (status_done && !status_slave_error) begin

          `uvm_info("SCOREBOARD",
                    "I2C transaction DONE and SLAVE_ERROR=0",
                    UVM_LOW)

          check_i2c_transaction();

        end
        else begin

          `uvm_info("SCOREBOARD",
                    $sformatf(
                    "I2C comparison skipped: DONE=%0b SLAVE_ERROR=%0b",
                    status_done,
                    status_slave_error),
                    UVM_MEDIUM)

        end

      end


      //============================================================
      // RXDATA register
      //============================================================

      if (rg.get_name() == "RXDATA_REG") begin

        rxdata_seen = 1'b1;

        apb_rx_data = ral_model.RXDATA_REG.RECEIVE_DATA.get_mirrored_value();

        `uvm_info("SCOREBOARD",
                  $sformatf(
                  "RXDATA: 0x%02h",
                  apb_rx_data),
                  UVM_MEDIUM)

      end

    end

  endfunction


  //==========================================================================
  // I2C MONITOR
  //
  // Capture actual I2C transaction.
  //
  // NOTE:
  // Replace tr.addr / tr.rw / tr.data with the actual fields
  // in your apb_i2c_i2c_item.
  //==========================================================================

  virtual function void write_i2c(apb_i2c_i2c_item tr);

    if (tr == null)
      return;


    `uvm_info("SCOREBOARD",
              $sformatf(
              "SNOOP I2C tr: %s",
              tr.convert2string()),
              UVM_HIGH)


    //======================================================================
    // I2C WRITE
    //======================================================================

    if (tr.write == 1'b0) begin

      i2c_write_seen = 1'b1;

      actual_i2c_write_data = tr.wdata[7:0];

      `uvm_info("SCOREBOARD",
                $sformatf(
                "I2C WRITE: ADDR=0x%02h DATA=0x%02h",
                tr.addr,
                actual_i2c_write_data),
                UVM_MEDIUM)

    end


    //======================================================================
    // I2C READ
    //======================================================================

    else begin

      i2c_read_seen = 1'b1;

      actual_i2c_read_data = tr.rdata[7:0];

      `uvm_info("SCOREBOARD",
                $sformatf(
                "I2C READ: ADDR=0x%02h DATA=0x%02h",
                tr.addr,
                actual_i2c_read_data),
                UVM_MEDIUM)

    end

  endfunction


  //==========================================================================
  // CHECK I2C TRANSACTION
  //
  // Called only when:
  //
  // STATUS.DONE       == 1
  // STATUS.SLAVE_ERROR == 0
  //
  //==========================================================================

  function  check_i2c_transaction();

    bit rw;

   i2c_rw = ral_model.CTRL_REG.READ_WRITE.get_mirrored_value();


    //======================================================================
    // I2C WRITE
    //======================================================================

    if (rw == 1'b0) begin

      if (!i2c_write_seen) begin

        `uvm_error("SCOREBOARD",
                   "DONE=1 but no I2C WRITE transaction received")

        mismatch_cnt++;

        return;

      end


      //============================================================
      // Expected data comes from TXDATA_REG RAL field
      //============================================================

      apb_tx_data =
    ral_model.TXDATA_REG.TRANSMIT_DATA.get_mirrored_value();


      // TXDATA is 32-bit but I2C transfer is 8-bit
      if (actual_i2c_write_data == apb_tx_data[7:0]) begin

        match_cnt++;

        `uvm_info("SCOREBOARD",
                  $sformatf(
                  "I2C WRITE PASS: TXDATA=0x%02h I2C_DATA=0x%02h",
                  apb_tx_data[7:0],
                  actual_i2c_write_data),
                  UVM_LOW)

      end
      else begin

        mismatch_cnt++;

        `uvm_error("SCOREBOARD",
                   $sformatf(
                   "I2C WRITE FAIL: TXDATA=0x%02h I2C_DATA=0x%02h",
                   apb_tx_data[7:0],
                   actual_i2c_write_data))

      end

    end


    //======================================================================
    // I2C READ
    //======================================================================

    else begin

      if (!i2c_read_seen) begin

        `uvm_error("SCOREBOARD",
                   "DONE=1 but no I2C READ transaction received")

        mismatch_cnt++;

        return;

      end


      //============================================================
      // RXDATA register should contain I2C received data
      //============================================================

      apb_rx_data =
    ral_model.RXDATA_REG.RECEIVE_DATA.get_mirrored_value();


      if (actual_i2c_read_data == apb_rx_data) begin

        match_cnt++;

        `uvm_info("SCOREBOARD",
                  $sformatf(
                  "I2C READ PASS: I2C_DATA=0x%02h RXDATA=0x%02h",
                  actual_i2c_read_data,
                  apb_rx_data),
                  UVM_LOW)

      end
      else begin

        mismatch_cnt++;

        `uvm_error("SCOREBOARD",
                   $sformatf(
                   "I2C READ FAIL: I2C_DATA=0x%02h RXDATA=0x%02h",
                   actual_i2c_read_data,
                   apb_rx_data))

      end

    end


    //======================================================================
    // Clear transaction flags after comparison
    //======================================================================

    i2c_write_seen = 1'b0;
    i2c_read_seen  = 1'b0;

  endfunction


  //==========================================================================
  // EXISTING RESET CHECK
  //==========================================================================

  task check_reset_values();

    uvm_reg regs[$];

    uvm_reg_data_t exp;
    uvm_reg_data_t mir;

    uvm_reg rg;


    ral_model.get_registers(regs);

    foreach (regs[i]) begin

      rg = regs[i];


      if (is_dont_compare(rg.get_name()))
        continue;

      if (is_volatile(rg.get_name()))
        continue;

      if (has_read_side_effect(rg.get_name()) ||
          has_write_side_effect(rg.get_name()))
        continue;

      if (!reg_readable(rg))
        continue;


      exp = rg.get_reset();

      mir = rg.get_mirrored_value();


      if (mir !== exp) begin

        mismatch_cnt++;

        `uvm_error(
          "SCOREBOARD",
          $sformatf(
          "RESET MISMATCH %s: mirrored=0x%0h reset=0x%0h",
          rg.get_name(),
          mir,
          exp))

      end
      else begin

        match_cnt++;

      end

    end

  endtask


  //==========================================================================
  // EXISTING MIRROR CHECK
  //==========================================================================

  function void check_mirror_desired(string ctx = "");

    uvm_reg regs[$];
    uvm_reg rg;

    ral_model.get_registers(regs);

    foreach (regs[i]) begin

      rg = regs[i];

      `uvm_info(
        "SCOREBOARD",
        $sformatf(
        "CHECK [%s] %s desired=0x%08h mirrored=0x%08h reset=0x%08h",
        ctx,
        rg.get_name(),
        rg.get(),
        rg.get_mirrored_value(),
        rg.get_reset()),
        UVM_HIGH)

    end

  endfunction


  //==========================================================================
  // REPORT
  //==========================================================================

  function void report_phase(uvm_phase phase);

    super.report_phase(phase);

    `uvm_info(
      "SCOREBOARD",
      $sformatf(
      "Scoreboard report: %0d writes, %0d reads, %0d matched, %0d mismatched",
      write_cnt,
      read_cnt,
      match_cnt,
      mismatch_cnt),
      UVM_LOW)

  endfunction

endclass
