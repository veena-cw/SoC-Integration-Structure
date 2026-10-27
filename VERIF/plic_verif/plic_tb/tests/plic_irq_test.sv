//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: SoC Integration
//  Module            				: plic_irq_test
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: PLIC interrupt tests (64 sources, 4 targets).
//    plic_irq_base_test : reset, then scenario(); helpers for RAL
//                         configuration, src[] stimulus, claim / complete
//    plic_irq_*_test    : one scenario each
//=================================================================================

`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_irq_item_pkg::*;

class plic_irq_base_test extends plic_base_test;
  `uvm_component_utils(plic_irq_base_test)

  function new(string name = "plic_irq_base_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    phase.raise_objection(this);
    do_reset();
    scenario();
    phase.drop_objection(this);
  endtask

  // Each test puts its steps here
  virtual task scenario();
  endtask

  // Source s as a src[] mask
  function plic_src_t src_bit(int s);
    return plic_src_t'(1) << s;
  endfunction

  // ---------------- RAL configuration ----------------
  task write_field(string reg_name, string fld_name, uvm_reg_data_t val);
    uvm_status_e status;
    uvm_reg      rg = env.ral_model.get_reg_by_name(reg_name);
    rg.get_field_by_name(fld_name).set(val);
    rg.update(status);
  endtask

  task set_priority(int s, int unsigned prio);
    write_field($sformatf("PRIORITY_%0d", s / 8), $sformatf("P%0d", s), prio);
  endtask

  // Sources 0-31 are in IE_t_0, sources 32-63 in IE_t_1
  task set_enable(int t, plic_src_t mask);
    write_field($sformatf("IE_%0d_0", t), "IE", mask[31:0]);
    write_field($sformatf("IE_%0d_1", t), "IE", mask[63:32]);
  endtask

  task set_threshold(int t, int unsigned th);
    write_field($sformatf("THRESHOLD_%0d", t), "THRESHOLD", th);
  endtask

  // ---------------- interrupt sources ----------------
  task drive(plic_irq_op_e op, plic_src_t mask);
    plic_irq_seq seq = plic_irq_seq::type_id::create("seq");
    seq.op   = op;
    seq.mask = mask;
    seq.start(env.irq_agent.sequencer);
  endtask

  task raise(plic_src_t mask); drive(IRQ_RAISE, mask); endtask
  task drop(plic_src_t mask);  drive(IRQ_DROP,  mask); endtask

  // ---------------- software side ----------------
  // src -> irq takes 3 clocks (gateway, cell, target); wait 8 before checking
  task settle();
    repeat (8) @(env.irq_sb.sampled);
  endtask

  task check(string ctx);
    settle();
    env.irq_sb.check_irq(ctx);
  endtask

  // Read ID_t (claim) and compare with the checker's winner
  task claim(int t, output int unsigned id, input string ctx = "");
    uvm_status_e   status;
    uvm_reg_data_t data;
    int unsigned   exp_id, prio;
    settle();
    exp_id = env.irq_sb.winner(t, prio);
    env.ral_model.get_reg_by_name($sformatf("ID_%0d", t)).read(status, data);
    id = data;
    env.irq_sb.check_claim(t, exp_id, id, ctx);
  endtask

  // Write ID_t (complete)
  task complete(int t, int unsigned id);
    uvm_status_e status;
    env.ral_model.get_reg_by_name($sformatf("ID_%0d", t)).write(status, id);
    env.irq_sb.complete(id);
  endtask

  // Claim, compare with the ID the scenario expects, then complete
  task serve(int t, int unsigned exp_id, string ctx = "");
    int unsigned id;
    claim(t, id, ctx);
    repeat(5)@(posedge env.irq_agent.driver.vif.clk);
    
    if (id != exp_id)
      `uvm_error("CLAIM_ID", $sformatf("[%s] target %0d claimed ID=%0d, scenario expects ID=%0d", ctx, t, id, exp_id))
    complete(t, id);
  endtask
endclass

// TEST NAME: plic_irq_single_test
// PURPOSE: each of the 64 sources alone, on each of the 4 targets
class plic_irq_single_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_single_test)
  function new(string name = "plic_irq_single_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    for (int s = 0; s < PLIC_SOURCES; s++) set_priority(s, s % 7 + 1);
    for (int t = 0; t < PLIC_TARGETS; t++)
      for (int s = 0; s < PLIC_SOURCES; s++) begin
        set_enable(t, src_bit(s));
        raise(src_bit(s));
        check($sformatf("t%0d s%0d raised", t, s));
        drop(src_bit(s));
        serve(t, s + 1, $sformatf("t%0d s%0d", t, s));
        check($sformatf("t%0d s%0d completed", t, s));
         set_enable(t, '0);
      end
  endtask
endclass

// TEST NAME: plic_irq_simultaneous_test
// PURPOSE: four sources raised on one clock are claimed in priority order
class plic_irq_simultaneous_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_simultaneous_test)
  function new(string name = "plic_irq_simultaneous_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    plic_src_t mask = src_bit(3) | src_bit(6) | src_bit(9) | src_bit(40);
    set_priority(3, 2);
    set_priority(6, 7);
    set_priority(9, 4);
    set_priority(40, 5);
    set_enable(0, mask);
    raise(mask);
    check("four raised");
    drop(mask);
    serve(0, 7,  "1st: s6 priority 7");
    serve(0, 41, "2nd: s40 priority 5");
    serve(0, 10, "3rd: s9 priority 4");
    serve(0, 4,  "4th: s3 priority 2");
    check("all served");
  endtask
endclass

// TEST NAME: plic_irq_disabled_test
// PURPOSE: a disabled source neither interrupts nor gets claimed
class plic_irq_disabled_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_disabled_test)
  function new(string name = "plic_irq_disabled_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    int unsigned id;
    set_priority(37, 7);
    raise(src_bit(37));
    check("s37 pending, not enabled");
    claim(2, id, "claim with nothing enabled");
    set_enable(2, src_bit(37));
    check("s37 enabled on t2");
    set_enable(2, '0);
    check("s37 disabled again");
    set_enable(2, src_bit(37));
    drop(src_bit(37));
    serve(2, 38, "s37 on t2");
    check("done");
  endtask
endclass

// TEST NAME: plic_irq_threshold_test
// PURPOSE: irq only when priority > threshold; claim still works below threshold
class plic_irq_threshold_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_threshold_test)
  function new(string name = "plic_irq_threshold_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    set_priority(50, 4);
    set_enable(1, src_bit(50));
    raise(src_bit(50));
    for (int th = 0; th < PLIC_PRIORITIES; th++) begin
      set_threshold(1, th);
      check($sformatf("priority 4, threshold %0d", th));
    end
    drop(src_bit(50));
    serve(1, 51, "below threshold, still claimable");
    set_threshold(1, 0);
    check("done");

     set_priority(56, 4);
    set_enable(1, src_bit(56));
    raise(src_bit(56));
    for (int th = 4; th < PLIC_PRIORITIES; th++) begin
      set_threshold(1, th);
      check($sformatf("priority 4, threshold %0d", th));
    end
    drop(src_bit(56));
    serve(1, 57, "below threshold, still claimable");
    set_threshold(1, 0);
    check("done");
  endtask
endclass

// TEST NAME: plic_irq_zero_prio_test
// PURPOSE: equal priorities resolve to the lower ID; priority 0 never interrupts
class plic_irq_zero_prio_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_zero_prio_test)
  function new(string name = "plic_irq_zero_prio_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    plic_src_t mask = src_bit(5) | src_bit(31) | src_bit(32) | src_bit(63);
   // foreach (mask[s]) if (mask[s]) set_priority(s, 3);
    set_enable(0, mask | src_bit(10));
    raise(mask);
    check("four equal priorities");
    drop(mask);
    serve(0, 6,  "s5 first");
    serve(0, 32, "s31");
    serve(0, 33, "s32");
    serve(0, 64, "s63 last");
    raise(src_bit(10));  // priority 0 (reset value)
    check("priority 0 never interrupts");
    drop(src_bit(10));
  endtask
endclass

//=======================================

// TEST NAME: plic_irq_equal_prio_test
// PURPOSE: equal priorities resolve to the lower ID; priority 0 never interrupts
class plic_irq_equal_prio_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_equal_prio_test)
  function new(string name = "plic_irq_equal_prio_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    plic_src_t mask = src_bit(5) | src_bit(31) | src_bit(32) | src_bit(63);
    foreach (mask[s]) if (mask[s]) set_priority(s, 3);
    set_enable(0, mask | src_bit(10));
    raise(mask);
    check("four equal priorities");
    drop(mask);
    serve(0, 6,  "s5 first");
    serve(0, 32, "s31");
    serve(0, 33, "s32");
    serve(0, 64, "s63 last");
    raise(src_bit(10));  // priority 0 (reset value)
    check("priority 0 never interrupts");
    drop(src_bit(10));
  endtask
endclass


// TEST NAME: plic_irq_four_target_test
// PURPOSE: independent delivery on all four targets; a shared source is claimed once
class plic_irq_four_target_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_four_target_test)
  function new(string name = "plic_irq_four_target_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    int unsigned id;
    plic_src_t   all = '0;
    // target t owns source 16*t + 1
    for (int t = 0; t < PLIC_TARGETS; t++) begin
      set_priority(16*t + 1, t + 1);
      set_enable(t, src_bit(16*t + 1));
      all |= src_bit(16*t + 1);
    end
    raise(all);
    check("all four targets");
    drop(all);
    for (int t = 0; t < PLIC_TARGETS; t++) begin
      serve(t, 16*t + 2, $sformatf("target %0d", t));
      check($sformatf("target %0d served", t));
    end
    // source 60 enabled on every target: the first claim takes it from all
    set_priority(60, 5);
    for (int t = 0; t < PLIC_TARGETS; t++) set_enable(t, src_bit(60));
    raise(src_bit(60));
    check("shared s60 on all targets");
    drop(src_bit(60));
    claim(1, id, "t1 claims s60");
    check("s60 gone from all targets");
    claim(3, id, "t3 finds nothing left");
    complete(1, 61);
  endtask
endclass

// TEST NAME: plic_irq_claim_complete_test
// PURPOSE: claimed source blocks re-trigger until completed; re-pends if still high
class plic_irq_claim_complete_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_claim_complete_test)
  function new(string name = "plic_irq_claim_complete_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    int unsigned id;
    claim(0, id, "nothing pending returns 0");
    set_priority(3, 4);
    set_enable(0, src_bit(3));
    raise(src_bit(3));
    check("s3 raised");
    claim(0, id, "claim s3");
    check("claimed, src still high: no irq until complete");
    complete(0, id);
    check("completed while src high: pending again");
    drop(src_bit(3));
    serve(0, 4, "s3 again");
    check("done");
  endtask
endclass

// TEST NAME: plic_irq_nested_complete_test
// PURPOSE: completions out of claim order release the written ID (RISC-V PLIC spec)
//          claim s3 -> claim s10 -> complete s10 -> complete s3
class plic_irq_nested_complete_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_nested_complete_test)
  function new(string name = "plic_irq_nested_complete_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    int unsigned id;
    set_priority(3, 4);
    set_priority(10, 6);
    set_enable(0, src_bit(3) | src_bit(10));
    raise(src_bit(3));
    claim(0, id, "s3 in service");
    raise(src_bit(10));
    check("s10 arrives");
    claim(0, id, "s10 in service");
    drop(src_bit(3) | src_bit(10));
    complete(0, 11);
    complete(0, 4);
    check("both completed");
    raise(src_bit(3));
    check("s3 requests again");
    drop(src_bit(3));
    serve(0, 4, "s3 served again");
  endtask
endclass
