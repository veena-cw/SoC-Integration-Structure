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

// Generated UVM RAL Sequences for RoaLogic_PLIC
// IP: PLIC
// Runtime-generic: register and field lists are obtained from the RAL model.
// Register metadata such as volatile/dont_compare/side effects comes from the generated metadata package.
package plic_ral_sequences_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"
  import plic_ral_pkg::*;
  import plic_ral_block_pkg::*;
  import plic_ral_metadata_pkg::*;

  class plic_ral_base_seq extends uvm_reg_sequence;
    `uvm_object_utils(plic_ral_base_seq)
    plic_ral_block model;

    function new(string name = "plic_ral_base_seq");
      super.new(name);
    endfunction

    // UVM-compatible generic register property helpers.
    // These avoid relying on optional/non-portable uvm_reg register APIs.
    function bit reg_readable(uvm_reg rg);
      uvm_reg_field fs[$];
      rg.get_fields(fs);
      if (fs.size() == 0) return 0;
      foreach (fs[i]) begin
        if (fs[i].get_access() != "WO") return 1;
      end
      return 0;
    endfunction

    function bit reg_writable(uvm_reg rg);
      uvm_reg_field fs[$];
      string a;
      rg.get_fields(fs);
      if (fs.size() == 0) return 0;
      foreach (fs[i]) begin
        a = fs[i].get_access();
        if (a != "RO") return 1;
      end
      return 0;
    endfunction

    function bit reg_all_ro(uvm_reg rg);
      uvm_reg_field fs[$];
      rg.get_fields(fs);
      if (fs.size() == 0) return 0;
      foreach (fs[i]) begin
        if (fs[i].get_access() != "RO") return 0;
      end
      return 1;
    endfunction

    function bit reg_all_wo(uvm_reg rg);
      uvm_reg_field fs[$];
      rg.get_fields(fs);
      if (fs.size() == 0) return 0;
      foreach (fs[i]) begin
        if (fs[i].get_access() != "WO") return 0;
      end
      return 1;
    endfunction

    function bit reg_compare_enabled(uvm_reg rg);
      return !is_dont_compare(rg.get_name());
    endfunction

    function bit reg_is_volatile(uvm_reg rg);
      return is_volatile(rg.get_name());
    endfunction
  endclass

  //============================================================================
  // TEST NAME: plic_reg_access_seq
  // PURPOSE: Generic backward-compatible register access smoke sequence.
  // REGISTERS TESTED: All readable/writable fields that can be safely accessed.
  // REGISTERS SKIPPED: Unsupported, side-effect, volatile, and dont_compare cases.
  // WHY SKIPPED: The legacy smoke sequence is intended for ordinary stable accesses.
  // EXPECTED RESULT: Valid accesses complete and readable writable fields read back correctly.
  //============================================================================
  /*class plic_reg_access_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_access_seq)
    function new(string name = "plic_reg_access_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_field fields[$];
      uvm_reg rg;
      uvm_reg_field f;
      uvm_reg_data_t expected, actual;
      string acc;
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        if (reg_is_volatile(rg)) continue;
        if (!reg_compare_enabled(rg)) continue;
        if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
        rg.get_fields(fields);
        foreach (fields[j]) begin
          f = fields[j];
          acc = f.get_access();
          if (acc == "RW") begin
            expected = $urandom;
            f.write(status, expected, UVM_FRONTDOOR);
            if (status != UVM_IS_OK) begin
              `uvm_error(get_type_name(), $sformatf("ACCESS WRITE FAILED: %s.%s", rg.get_name(), f.get_name()))
            end else begin
              f.read(status, actual, UVM_FRONTDOOR);
              if (status != UVM_IS_OK)
                `uvm_error(get_type_name(), $sformatf("ACCESS READ FAILED: %s.%s", rg.get_name(), f.get_name()))
              else if (actual !== expected)
                `uvm_error(get_type_name(), $sformatf("ACCESS READBACK MISMATCH: %s.%s expected=0x%0h actual=0x%0h", rg.get_name(), f.get_name(), expected, actual))
            end
          end else if (acc == "RO") begin
            f.read(status, actual, UVM_FRONTDOOR);
            if (status != UVM_IS_OK)
              `uvm_error(get_type_name(), $sformatf("RO ACCESS READ FAILED: %s.%s", rg.get_name(), f.get_name()))
          end else if (acc == "WO") begin
            expected = $urandom;
            f.write(status, expected, UVM_FRONTDOOR);
            if (status != UVM_IS_OK)
              `uvm_error(get_type_name(), $sformatf("WO ACCESS WRITE FAILED: %s.%s", rg.get_name(), f.get_name()))
          end
        end
      end
    endtask
  endclass
  */

  class plic_reg_access_seq extends plic_ral_base_seq;

  `uvm_object_utils(plic_reg_access_seq)

  function new(string name = "plic_reg_access_seq");
    super.new(name);
  endfunction
  
function automatic uvm_reg_data_t gen_field_value(
  uvm_reg_field field
);

  uvm_reg_data_t mask;
  int field_width;

  field_width = field.get_n_bits();

  if (field_width >= 32) begin
    mask = 32'hFFFF_FFFF;
  end
  else begin
    mask = (32'h1 << field_width) - 1;
  end

  gen_field_value = $urandom;
  gen_field_value &= mask;

endfunction


  virtual task body();

    uvm_status_e    status;
    uvm_reg         regs[$];
    uvm_reg_field   fields[$];

    uvm_reg         rg;
    uvm_reg_field   f;

    uvm_reg_data_t  expected;
    uvm_reg_data_t  actual;

    string acc;


    model.get_registers(regs);

    foreach (regs[i]) begin

      rg = regs[i];

      // Skip volatile registers
      if (reg_is_volatile(rg))
        continue;

      // Skip registers with comparison disabled
      if (!reg_compare_enabled(rg))
        continue;

      // Skip registers with side effects
      if (has_read_side_effect(rg.get_name()) ||
          has_write_side_effect(rg.get_name()))
        continue;

      // Clear the field queue before getting fields of the current register
      fields.delete();
      rg.get_fields(fields);

      foreach (fields[j]) begin

        f   = fields[j];
        acc = f.get_access();

        // Read-write field
        if (acc == "RW") begin

          expected = gen_field_value(f);

          f.write(
            .status(status),
            .value(expected),
            .path(UVM_FRONTDOOR)
          );

          if (status != UVM_IS_OK) begin
            `uvm_error(
              get_type_name(),
              $sformatf(
                "ACCESS WRITE FAILED: %s.%s",
                rg.get_name(),
                f.get_name()
              )
            )
          end
          else begin

            f.read(
              .status(status),
              .value(actual),
              .path(UVM_FRONTDOOR)
            );

            if (status != UVM_IS_OK) begin
              `uvm_error(
                get_type_name(),
                $sformatf(
                  "ACCESS READ FAILED: %s.%s",
                  rg.get_name(),
                  f.get_name()
                )
              )
            end
            else if (actual !== expected) begin
              `uvm_error(
                get_type_name(),
                $sformatf(
                  "ACCESS READBACK MISMATCH: %s.%s expected=0x%0h actual=0x%0h",
                  rg.get_name(),
                  f.get_name(),
                  expected,
                  actual
                )
              )
            end

          end

        end

        // Read-only field
        else if (acc == "RO") begin

          f.read(
            .status(status),
            .value(actual),
            .path(UVM_FRONTDOOR)
          );

          if (status != UVM_IS_OK) begin
            `uvm_error(
              get_type_name(),
              $sformatf(
                "RO ACCESS READ FAILED: %s.%s",
                rg.get_name(),
                f.get_name()
              )
            )
          end

        end

        // Write-only field
        else if (acc == "WO") begin

          expected = gen_field_value(f);

          f.write(
            .status(status),
            .value(expected),
            .path(UVM_FRONTDOOR)
          );

          if (status != UVM_IS_OK) begin
            `uvm_error(
              get_type_name(),
              $sformatf(
                "WO ACCESS WRITE FAILED: %s.%s",
                rg.get_name(),
                f.get_name()
              )
            )
          end

        end

      end

    end

  endtask

endclass

  //============================================================================
  // TEST NAME: plic_reg_reset_seq
  // PURPOSE: Verify stable readable register reset values.
  // REGISTERS TESTED: Readable registers that are not volatile, dont_compare, or side-effect.
  // REGISTERS SKIPPED: Volatile, dont_compare, unreadable, and explicit side-effect registers.
  // WHY SKIPPED: Their values are not guaranteed to be stable storage for reset comparison.
  // EXPECTED RESULT: Every tested register reads back its documented reset value.
  //============================================================================
  class plic_reg_reset_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_reset_seq)
    function new(string name = "plic_reg_reset_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_data_t rdata;
      uvm_reg rg;
      model.reset();
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        if (!reg_compare_enabled(rg)) continue;
        if (reg_is_volatile(rg)) continue;
        if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
        if (!reg_readable(rg)) continue;
        rg.read(status, rdata, UVM_FRONTDOOR);
        if (status != UVM_IS_OK)
          `uvm_error(get_type_name(), $sformatf("RESET READ FAILED: %s", rg.get_name()))
        else if (rdata !== rg.get_reset())
          `uvm_error(get_type_name(), $sformatf("RESET MISMATCH: %s expected=0x%0h actual=0x%0h", rg.get_name(), rg.get_reset(), rdata))
      end
    endtask
  endclass

  //============================================================================
  // TEST NAME: plic_reg_write_read_seq
  // PURPOSE: Verify ordinary readable/writable register storage.
  // REGISTERS TESTED: Registers containing RW writable fields and no volatile/side-effect/dont_compare metadata.
  // REGISTERS SKIPPED: RO-only, WO-only, volatile, dont_compare, and side-effect registers.
  // WHY SKIPPED: They do not provide stable ordinary storage readback semantics.
  // EXPECTED RESULT: Writable field values read back correctly.
  //============================================================================
  class plic_reg_write_read_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_write_read_seq)
    function new(string name = "plic_reg_write_read_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_field fields[$];
      uvm_reg_data_t current_value;
      uvm_reg_data_t expected;
      uvm_reg_data_t actual;
      uvm_reg_data_t random_value;
      uvm_reg_data_t writable_mask;
      uvm_reg_data_t field_mask;
      uvm_reg rg;
      uvm_reg_field f;
      int width;
      int lsb;
      bit has_rw;
      string acc;
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        if (!reg_compare_enabled(rg) || reg_is_volatile(rg)) continue;
        if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;

        fields.delete();
        rg.get_fields(fields);
        has_rw = 0;
        foreach (fields[j]) begin
          f = fields[j];
          acc = f.get_access();
          if (acc == "RW") has_rw = 1;
        end
        if (!has_rw) continue;

        // Read the current register value first.  This preserves RO/reserved bits
        // instead of randomizing them as part of a full register write.
        rg.read(status, current_value, UVM_FRONTDOOR);
        if (status != UVM_IS_OK) begin
          `uvm_error(get_type_name(), $sformatf("INITIAL READ FAILED: %s", rg.get_name()))
          continue;
        end

        expected = current_value;
        writable_mask = '0;

        // Randomize only RW field positions and construct one complete expected value.
        foreach (fields[j]) begin
          f = fields[j];
          acc = f.get_access();
          if (acc != "RW") continue;
          width = f.get_n_bits();
          lsb = f.get_lsb_pos();
          random_value = { $urandom, $urandom };
          if (width >= $bits(uvm_reg_data_t))
            field_mask = '1;
          else if (width > 0)
            field_mask = (uvm_reg_data_t'(1) << width) - 1;
          else
            field_mask = '0;
          random_value = random_value & field_mask;
          expected = (expected & ~(field_mask << lsb)) | ((random_value & field_mask) << lsb);
          writable_mask = writable_mask | (field_mask << lsb);
        end

        // Perform one register-level write, then one register-level readback.
        rg.write(status, expected, UVM_FRONTDOOR);
        if (status != UVM_IS_OK) begin
          `uvm_error(get_type_name(), $sformatf("WRITE FAILED: %s expected=0x%0h", rg.get_name(), expected))
          continue;
        end

        rg.read(status, actual, UVM_FRONTDOOR);
        if (status != UVM_IS_OK)
          `uvm_error(get_type_name(), $sformatf("READ FAILED: %s", rg.get_name()))
        else if ((actual & writable_mask) !== (expected & writable_mask))
          `uvm_error(get_type_name(), $sformatf("READBACK MISMATCH: %s expected(writable)=0x%0h actual(writable)=0x%0h full_expected=0x%0h full_actual=0x%0h", rg.get_name(), (expected & writable_mask), (actual & writable_mask), expected, actual))
      end
    endtask
  endclass

  //============================================================================
  // TEST NAME: plic_reg_ro_read_seq
  // PURPOSE: Verify stable RO registers are readable and unchanged.
  // REGISTERS TESTED: Registers whose fields are all RO and whose metadata permits comparison.
  // REGISTERS SKIPPED: Mixed-access, volatile, dont_compare, and side-effect registers.
  // WHY SKIPPED: Only stable all-RO storage is targeted by this sequence.
  // EXPECTED RESULT: RO reads match the documented reset value.
  //============================================================================
  class plic_reg_ro_read_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_ro_read_seq)
    function new(string name = "plic_reg_ro_read_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_data_t rdata;
      uvm_reg rg;
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        if (!reg_all_ro(rg)) continue;
        if (!reg_compare_enabled(rg) || reg_is_volatile(rg)) continue;
        if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
        rg.read(status, rdata, UVM_FRONTDOOR);
        if (status != UVM_IS_OK)
          `uvm_error(get_type_name(), $sformatf("RO READ FAILED: %s", rg.get_name()))
        else if (rdata !== rg.get_reset())
          `uvm_error(get_type_name(), $sformatf("RO MISMATCH: %s expected=0x%0h actual=0x%0h", rg.get_name(), rg.get_reset(), rdata))
      end
    endtask
  endclass

  //============================================================================
  // TEST NAME: plic_reg_ro_write_ignore_seq
  // PURPOSE: Verify a physical WRITE to an all-RO register does not change DUT state.
  // REGISTERS TESTED: Stable all-RO registers that are comparable.
  // REGISTERS SKIPPED: Mixed-access, volatile, dont_compare, and side-effect registers.
  // WHY SKIPPED: The negative test is specifically for stable all-RO storage.
  // EXPECTED RESULT: DUT readback remains identical to the value before the illegal WRITE.
  //============================================================================
  class plic_reg_ro_write_ignore_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_ro_write_ignore_seq)
    function new(string name = "plic_reg_ro_write_ignore_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_data_t orig, wdata, rdata;
      uvm_reg rg;
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        if (!reg_all_ro(rg)) continue;
        if (!reg_compare_enabled(rg) || reg_is_volatile(rg)) continue;
        if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
        rg.read(status, orig, UVM_FRONTDOOR);
        // Auto-prediction is disabled on the RAL map; the bus predictor
        // controls mirror updates, including suppression of all-RO writes.
        wdata = ~orig;
        rg.write(status, wdata, UVM_FRONTDOOR);
        rg.read(status, rdata, UVM_FRONTDOOR);
        if (rdata !== orig)
          `uvm_error(get_type_name(), $sformatf("RO WRITE CHANGED %s: before=0x%0h after=0x%0h", rg.get_name(), orig, rdata))
      end
    endtask
  endclass

  //============================================================================
  // TEST NAME: plic_reg_wo_test_seq
  // PURPOSE: Exercise write-only registers without attempting readback comparison.
  // REGISTERS TESTED: Registers containing WO fields.
  // REGISTERS SKIPPED: Registers without WO fields.
  // WHY SKIPPED: They are not write-only targets.
  // EXPECTED RESULT: WO writes complete without an invalid RAL readback requirement.
  //============================================================================
  class plic_reg_wo_test_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_wo_test_seq)
    function new(string name = "plic_reg_wo_test_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_field fields[$];
      uvm_reg_data_t wdata;
      uvm_reg rg;
      bit has_wo;
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        rg.get_fields(fields);
        has_wo = 0;
        foreach (fields[j]) if (fields[j].get_access() == "WO") has_wo = 1;
        if (!has_wo) continue;
        wdata = $urandom;
        rg.write(status, wdata, UVM_FRONTDOOR);
        if (status != UVM_IS_OK)
          `uvm_error(get_type_name(), $sformatf("WO WRITE FAILED: %s", rg.get_name()))
      end
    endtask
  endclass

  //============================================================================
  // TEST NAME: plic_reg_walk_one_seq
  // PURPOSE: Verify writable fields using field-relative walking-one write/read/compare.
  // REGISTERS TESTED: Eligible RW fields in stable, comparable registers.
  // REGISTERS SKIPPED: RO, WO, volatile, dont_compare, reserved, and side-effect fields.
  // WHY SKIPPED: These fields do not provide stable ordinary storage semantics.
  // EXPECTED RESULT: Every one-hot field value reads back exactly as written.
  //============================================================================
  class plic_reg_walk_one_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_walk_one_seq)
    function new(string name = "plic_reg_walk_one_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_field fields[$];
      uvm_reg_data_t expected, actual;
      uvm_reg_field f;
      int width;
      int b;
      uvm_reg rg;
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        if (!reg_compare_enabled(rg) || reg_is_volatile(rg)) continue;
        if (has_read_side_effect(rg.get_name()) || has_write_side_effect(rg.get_name())) continue;
        rg.get_fields(fields);
        foreach (fields[j]) begin
          f = fields[j];
          if (f.get_access() != "RW") continue;
          width = f.get_n_bits();
          if (width <= 0 || width > $bits(uvm_reg_data_t)) continue;
          for (b = 0; b < width; b++) begin
            expected = (uvm_reg_data_t'(1) << b);
            f.write(status, expected, UVM_FRONTDOOR);
            if (status != UVM_IS_OK) begin
              `uvm_error(get_type_name(), $sformatf("WALK-ONE WRITE FAILED: %s.%s bit=%0d", rg.get_name(), f.get_name(), b))
              continue;
            end
            f.read(status, actual, UVM_FRONTDOOR);
            if (status != UVM_IS_OK)
              `uvm_error(get_type_name(), $sformatf("WALK-ONE READ FAILED: %s.%s bit=%0d", rg.get_name(), f.get_name(), b))
            else if (actual !== expected)
              `uvm_error(get_type_name(), $sformatf("WALK-ONE MISMATCH: %s.%s bit=%0d expected=0x%0h actual=0x%0h", rg.get_name(), f.get_name(), b, expected, actual))
            else
              `uvm_info(get_type_name(), $sformatf("WALK-ONE PASS: %s.%s bit=%0d value=0x%0h", rg.get_name(), f.get_name(), b, actual), UVM_HIGH)
          end
        end
      end
    endtask
  endclass

  //============================================================================
  // TEST NAME: plic_reg_volatile_seq
  // PURPOSE: Exercise explicitly volatile registers without stable-value comparison.
  // REGISTERS TESTED: Registers marked volatile in YAML metadata.
  // REGISTERS SKIPPED: Non-volatile registers.
  // WHY SKIPPED: This sequence targets volatile behavior only.
  // EXPECTED RESULT: Volatile reads complete without assuming a stable readback value.
  //============================================================================
  class plic_reg_volatile_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_volatile_seq)
    function new(string name = "plic_reg_volatile_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_data_t rdata;
      uvm_reg rg;
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        if (!reg_is_volatile(rg)) continue;
        if (!reg_readable(rg)) continue;
        rg.read(status, rdata, UVM_FRONTDOOR);
        if (status != UVM_IS_OK)
          `uvm_error(get_type_name(), $sformatf("VOLATILE READ FAILED: %s", rg.get_name()))
      end
    endtask
  endclass

  //============================================================================
  // TEST NAME: plic_reg_side_effect_seq
  // PURPOSE: Exercise only registers explicitly marked with read/write side effects in YAML.
  // REGISTERS TESTED: Registers with read_side_effect or write_side_effect metadata.
  // REGISTERS SKIPPED: Registers without explicit side-effect metadata.
  // WHY SKIPPED: Volatile and access type are independent and must not invent side effects.
  // EXPECTED RESULT: Explicit side-effect transactions complete; no stable storage comparison is assumed.
  //============================================================================
  class plic_reg_side_effect_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_side_effect_seq)
    function new(string name = "plic_reg_side_effect_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg_data_t wdata, rdata;
      bit has_read_side;
      bit has_write_side;
      uvm_reg rg;
      model.get_registers(regs);
      foreach (regs[i]) begin
        rg = regs[i];
        has_read_side = has_read_side_effect(rg.get_name());
        has_write_side = has_write_side_effect(rg.get_name());
        if (!has_read_side && !has_write_side) continue;
        if (has_read_side && reg_readable(rg)) begin
          rg.read(status, rdata, UVM_FRONTDOOR);
          if (status != UVM_IS_OK)
            `uvm_error(get_type_name(), $sformatf("READ SIDE-EFFECT TRANSACTION FAILED: %s", rg.get_name()))
        end
        if (has_write_side && reg_writable(rg)) begin
          wdata = $urandom;
          rg.write(status, wdata, UVM_FRONTDOOR);
          if (status != UVM_IS_OK)
            `uvm_error(get_type_name(), $sformatf("WRITE SIDE-EFFECT TRANSACTION FAILED: %s", rg.get_name()))
        end
      end
    endtask
  endclass

  //============================================================================
  // TEST NAME: plic_reg_mirror_predict_seq
  // PURPOSE: Demonstrate desired/mirror/update using a runtime-selected stable register.
  // REGISTERS TESTED: First runtime-selected stable readable/writable register, if one exists.
  // REGISTERS SKIPPED: Volatile, dont_compare, unreadable, and side-effect registers.
  // WHY SKIPPED: They are not appropriate for this stable mirror demonstration.
  // EXPECTED RESULT: Desired value is transferred and a frontdoor read is completed.
  //============================================================================
  class plic_reg_mirror_predict_seq extends plic_ral_base_seq;
    `uvm_object_utils(plic_reg_mirror_predict_seq)
    function new(string name = "plic_reg_mirror_predict_seq"); super.new(name); endfunction
    virtual task body();
      uvm_status_e status;
      uvm_reg regs[$];
      uvm_reg rg;
      uvm_reg tmp;
      uvm_reg_data_t wdata, rdata;
      model.get_registers(regs);
      rg = null;
      foreach (regs[i]) begin
        tmp = regs[i];
        if (reg_compare_enabled(tmp) && !reg_is_volatile(tmp) && reg_readable(tmp) && reg_writable(tmp) &&
            !has_read_side_effect(tmp.get_name()) && !has_write_side_effect(tmp.get_name())) begin
          rg = tmp;
          break;
        end
      end
      if (rg != null) begin
        wdata = 32'hDEAD_BEEF;
        rg.set(wdata);
        rg.update(status, UVM_FRONTDOOR);
        rg.read(status, rdata, UVM_FRONTDOOR);
      end
    endtask
  endclass

endpackage

