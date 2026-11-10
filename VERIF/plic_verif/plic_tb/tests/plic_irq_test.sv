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
//    (edge_test needs the scoreboard's edge model; reset_test resets mid-run)
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

  task wait_clk(int n);
    repeat (n) @(posedge env.irq_agent.driver.vif.clk);
  endtask

  // One-clock pulse on every source in mask (one edge each), then a gap so
  // back-to-back pulses are separate edges
  task pulse(plic_src_t mask);
    raise(mask);
    drop(mask);
    wait_clk(2);
  endtask

  // EL: 1 = edge-triggered, 0 = level-triggered (sources 0-31 in EL_0)
  task set_edge(plic_src_t mask);
    write_field("EL_0", "EL", mask[31:0]);
    write_field("EL_1", "EL", mask[63:32]);
  endtask

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

  // Claim and complete on target t until it returns 0; n = IDs served
  task drain(int t, output int unsigned n, input string ctx = "");
    int unsigned id;
    n = 0;
    forever begin
      claim(t, id, $sformatf("%s #%0d", ctx, n + 1));
      if (id == 0) break;
      n++;
      complete(t, id);
    end
  endtask

  // Claim round-robin over all targets until none has anything left
  task drain_all(string ctx = "");
    int unsigned id;
    bit          got;
    do begin
      got = 0;
      for (int t = 0; t < PLIC_TARGETS; t++) begin
        claim(t, id, $sformatf("%s t%0d", ctx, t));
        if (id != 0) begin
          got = 1;
          complete(t, id);
        end
      end
    end while (got);
  endtask
endclass

// TEST NAME: plic_gateway_default_test
// PURPOSE: force an illegal gateway state so the defensive default branch is
//          executed once. This is intentional fault injection for coverage.
class plic_gateway_default_test extends plic_irq_base_test;
  `uvm_component_utils(plic_gateway_default_test)

  function new(string name = "plic_gateway_default_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task scenario();
    // Generated hierarchy: dut.plic_core_inst.gen_gateway[0].gateway_inst
    force $root.plic_test_top.dut.plic_core_inst.gen_gateway[0].gateway_inst.ip_state = 2'b11;
    @(posedge env.irq_agent.driver.vif.clk);
    release $root.plic_test_top.dut.plic_core_inst.gen_gateway[0].gateway_inst.ip_state;
    // Let the recovery assignment from the default arm take effect.
    @(posedge env.irq_agent.driver.vif.clk);
    `uvm_info(get_type_name(),
              "Forced gateway ip_state=2'b11; default branch executed",
              UVM_LOW)
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
    plic_src_t mask = src_bit(56) | src_bit(57) | src_bit(58) | src_bit(59);
   // foreach (mask[s]) if (mask[s]) set_priority(s, 3);
    set_enable(0, mask | src_bit(60));
    raise(mask);
    check("four equal priorities");
    drop(mask);
    serve(0, 0,  "s5 first");
    serve(0, 0, "s31");
    serve(0, 0, "s32");
    serve(0, 0, "s63 last");
    raise(src_bit(60));  // priority 0 (reset value)
    check("priority 0 never interrupts");
    drop(src_bit(60));
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
    int unsigned id;
    plic_src_t mask = src_bit(5) | src_bit(31) | src_bit(32) | src_bit(63);
    foreach (mask[s]) if (mask[s]) set_priority(s, 3);
    set_enable(0, mask | src_bit(10));
    raise(mask);
    check("four equal priorities");

    for (int s = 0; s < 64; s++) begin
  if (mask[s]) begin
    claim(0, id, $sformatf("claim s%0d", s));
    check($sformatf("claimed s%0d", s));
    drop(src_bit(s));
    complete(0, id);
  end
end
   
/*
    drop(mask);
    serve(0, 6,  "s5 first");
    serve(0, 32, "s31");
    serve(0, 33, "s32");
    serve(0, 64, "s63 last");
    */
  endtask
endclass


// TEST NAME: plic_irq_four_target_test
// PURPOSE: independent delivery on all four targets; a shared source is claimed once
/*class plic_irq_four_target_test extends plic_irq_base_test;
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
endclass*/

class plic_irq_four_target_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_four_target_test)
  function new(string name = "plic_irq_four_target_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
task scenario();
  int unsigned id;
  int src[4] = '{1, 17, 33, 49};

  // Configure one source for each target
  for (int t = 0; t < 4; t++) begin
    set_priority(src[t], t + 1);
    set_enable(t, src_bit(src[t]));
  end

  // Raise all four interrupts
  raise(src_bit(1) | src_bit(17) |
        src_bit(33) | src_bit(49));
  check("all four targets");
  drop(src_bit(1) | src_bit(17) |
       src_bit(33) | src_bit(49));

  // Claim and complete each target's interrupt
  for (int t = 0; t < 4; t++) begin
    serve(t, src[t] + 1, $sformatf("target %0d", t));
    check($sformatf("target %0d served", t));
  end

  // Test one shared interrupt enabled on all targets
  set_priority(60, 5);
  for (int t = 0; t < 4; t++)
    set_enable(t, src_bit(60));

  raise(src_bit(60));
  check("shared source 60");
  drop(src_bit(60));

  claim(1, id, "target 1 claims source 60");
  check("source 60 claimed");
  claim(3, id, "target 3 finds no interrupt");
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
    drop(src_bit(3));
    raise(src_bit(3));
    check("re-raised while in service: still no irq");
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
/*class plic_irq_nested_complete_test extends plic_irq_base_test;
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
    complete(0, 4);
    complete(0, 11);
    
    check("both completed");

     raise(src_bit(3));
      check("s3 arrives");
    claim(0, id, "s3 in service");

    raise(src_bit(10));
    check("s10 arrives");
    claim(0, id, "s10 in service");
    drop(src_bit(3) | src_bit(10));
    complete(0, 11);
    complete(0, 4);
    check("both completed");

    raise(src_bit(3));
    claim(0, id, "s3 in service");
    raise(src_bit(10));
    check("s10 arrives");
    claim(0, id, "s10 in service");
    drop(src_bit(3) | src_bit(10));
     complete(0, 4);
    complete(0, 11);
   
    check("both completed");
    
   
  endtask
endclass*/



class plic_irq_nested_complete_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_nested_complete_test)

  function new(string name = "plic_irq_nested_complete_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task scenario();
    int unsigned id;
    plic_src_t mask;

    set_priority(3, 4);
    set_priority(10, 6);

    mask = src_bit(3) | src_bit(10);

    for (int t = 0; t < PLIC_TARGETS; t++) begin

      `uvm_info("NESTED_TEST",
                $sformatf("Testing Target %0d", t),
                UVM_MEDIUM)

      // Enable sources for current target
      set_enable(t, mask);

      // Scenario 1: FIFO completion
      raise(src_bit(3));
      claim(t, id, "s3 in service");

      raise(src_bit(10));
      check("s10 arrives");
      claim(t, id, "s10 in service");

      drop(mask);
      complete(t, 4);
      complete(t, 11);

      check("both completed");

      // Scenario 2: LIFO completion
      raise(src_bit(3));
      check("s3 arrives");
      claim(t, id, "s3 in service");

      raise(src_bit(10));
      check("s10 arrives");
      claim(t, id, "s10 in service");

      drop(mask);
      complete(t, 11);
      complete(t, 4);

      check("both completed");

      // Scenario 3: FIFO completion again
      raise(src_bit(3));
      claim(t, id, "s3 in service");

      raise(src_bit(10));
      check("s10 arrives");
      claim(t, id, "s10 in service");

      drop(mask);
      complete(t, 4);
      complete(t, 11);

      check("both completed");

      // Disable these sources on the current target
      set_enable(t, '0);

    end
  endtask
endclass


// TEST NAME: plic_irq_edge_test
// PURPOSE: edge-triggered gateway (EL=1): every rising edge is one interrupt,
//          edges are counted while the source is pending or in service and the
//          count saturates at MAX_PENDING_COUNT
class plic_irq_edge_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_edge_test)
  function new(string name = "plic_irq_edge_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  task scenario();
    int unsigned id, n;
    int unsigned max_pend = plic_irq_scoreboard::PLIC_MAX_PENDING;
    // default priorities: s5 = 2, s25 = 6, s37 = 7, s49 = 6
    plic_src_t   edges = src_bit(5) | src_bit(25) | src_bit(37) | src_bit(49);

    set_edge(edges);

    // 1. three edges before the claim, two more while in service
    set_enable(0, src_bit(5));
    repeat (3) pulse(src_bit(5));
    check("s5: 3 edges, first one pending");
    claim(0, id, "s5 event 1");
    repeat (2) pulse(src_bit(5));
    check("s5 in service, 2 more edges counted");
    complete(0, id);
    drain(0, n, "s5 counted events");
    if (n != 4)
      `uvm_error("EDGE_CNT", $sformatf("s5: %0d events served after the first, expected 4", n))
    set_enable(0, '0);

    // 2. more edges than the gateway can count: 1 pending + max_pend counted
    set_enable(1, src_bit(37));
    repeat (max_pend + 4) pulse(src_bit(37));
    check("s37 saturated");
    drain(1, n, "s37 saturated");
    if (n != max_pend + 1)
      `uvm_error("EDGE_CNT", $sformatf("s37: %0d events served, expected %0d", n, max_pend + 1))
    set_enable(1, '0);

    // 3. edge source on all targets and on some targets; one claim takes it
    for (int t = 0; t < PLIC_TARGETS; t++) set_enable(t, src_bit(25) | (t inside {1, 2} ? src_bit(49) : '0));
    pulse(src_bit(25) | src_bit(49));
    check("s25 on all targets, s49 on t1/t2");
    drain_all("s25 / s49 single edge");
    for (int t = 0; t < PLIC_TARGETS; t++) set_enable(t, '0);

    // 4. a held-high edge source is one event, not one per clock
    set_enable(0, src_bit(5));
    raise(src_bit(5));
    wait_clk(20);
    drain(0, n, "s5 held high");
    drop(src_bit(5));
    if (n != 1)
      `uvm_error("EDGE_CNT", $sformatf("s5 held high: %0d events served, expected 1", n))

    // 5. all sources edge, then all back to level
    set_edge('1);
    check("all sources edge-triggered, none toggling");
    set_edge('0);
    set_enable(0, '0);
    check("all level-triggered again");
  endtask
endclass

// TEST NAME: plic_irq_reset_test
// PURPOSE: reset in the middle of operation (sources pending and irq high,
//          an ID claimed, edge events counted) returns every register to its
//          reset value and the gateways to idle
class plic_irq_reset_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_reset_test)
  function new(string name = "plic_irq_reset_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  // Read back every configuration register and compare with the RAL
  // mirror, which do_reset() has set to the reset values (ID_t not read:
  // a read is a claim)
  task check_defaults(string ctx);
    uvm_status_e status;
    string       regs[$] = '{"EL_0", "EL_1"};
    for (int i = 0; i < 8; i++) regs.push_back($sformatf("PRIORITY_%0d", i));
    for (int t = 0; t < PLIC_TARGETS; t++) begin
      regs.push_back($sformatf("IE_%0d_0", t));
      regs.push_back($sformatf("IE_%0d_1", t));
      regs.push_back($sformatf("THRESHOLD_%0d", t));
    end
    `uvm_info(get_type_name(), $sformatf("[%s] checking reset values", ctx), UVM_LOW)
    foreach (regs[i]) env.ral_model.get_reg_by_name(regs[i]).mirror(status, UVM_CHECK);
  endtask

  task scenario();
    int unsigned id;
    // default priorities: s5 = 2, s12 = 3, s35 = 7
    plic_src_t   mask = src_bit(12) | src_bit(35);

    // 1. reset while sources are pending and irq[] is high
    set_priority(12, 6);
    set_priority(35, 1);
    for (int t = 0; t < PLIC_TARGETS; t++) begin
      set_enable(t, mask);
      set_threshold(t, t % 2);
    end
    set_edge(src_bit(20));
    raise(mask);
    check("pending, irq high before reset");
    do_reset();
    check_defaults("reset with pending sources");
    check("after reset: nothing enabled, no irq");
    // still-high level sources pend again, at their default priorities
    set_enable(0, mask);
    check("still-high sources pend again");
    drop(mask);
    serve(0, 36, "s35 default priority 7");
    serve(0, 13, "s12 default priority 3");
    check("served after reset");

    // 2. reset while an ID is claimed and edge events are counted
    set_edge(src_bit(5));
    set_enable(0, src_bit(5));
    repeat (3) pulse(src_bit(5));
    claim(0, id, "s5 claimed before reset");
    wait_clk(5);  // in service for a few clocks before the reset
    do_reset();
    check_defaults("reset with a claimed ID");
    // EL is level again, src low: the counted edges are gone
    set_enable(0, src_bit(5));
    claim(0, id, "no counted edges after reset");
    // the claim from before reset needs no completion
    raise(src_bit(5));
    check("s5 interrupts again without completing the old claim");
    drop(src_bit(5));
    serve(0, 6, "s5 after reset");
    check("done");
  endtask
endclass


class plic_irq_level_reset_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_level_reset_test)

  function new(string name = "plic_irq_level_reset_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  // Check all configuration registers against reset values
  task check_defaults(string ctx);
    uvm_status_e status;
    string regs[$] = '{"EL_0", "EL_1"};

    for (int i = 0; i < 8; i++)
      regs.push_back($sformatf("PRIORITY_%0d", i));

    for (int t = 0; t < PLIC_TARGETS; t++) begin
      regs.push_back($sformatf("IE_%0d_0", t));
      regs.push_back($sformatf("IE_%0d_1", t));
      regs.push_back($sformatf("THRESHOLD_%0d", t));
    end

    `uvm_info(get_type_name(),
      $sformatf("[%s] checking reset values", ctx), UVM_LOW)

    foreach (regs[i])
      env.ral_model.get_reg_by_name(regs[i]).mirror(status, UVM_CHECK);
  endtask

  task scenario();
    int unsigned id;
    plic_src_t mask = src_bit(12) | src_bit(35);

    // All sources configured as level-triggered
    set_edge('0);

    // ------------------------------------------------
    // 1. Reset while level-triggered sources are pending
    // ------------------------------------------------

    set_priority(12, 6);
    set_priority(35, 1);

    for (int t = 0; t < PLIC_TARGETS; t++) begin
      set_enable(t, mask);
      set_threshold(t, t % 2);
    end

    // Raise both level-triggered sources
    raise(mask);
    check("level sources pending before reset");

    // Apply reset while sources remain HIGH
    do_reset();

    check_defaults("reset with pending level interrupts");
    check("after reset: IRQ outputs low");

    // Re-enable target 0 while sources are still HIGH
    set_enable(0, mask);
    check("level sources re-pending after reset");

    // Drop sources after requests have become pending
    drop(mask);

    // Default priorities: source 35 = 7, source 12 = 3
    serve(0, 36, "source 35 default priority");
    serve(0, 13, "source 12 default priority");

    check("pending level interrupts served after reset");

    // ------------------------------------------------
    // 2. Reset while a level interrupt is claimed
    // ------------------------------------------------

    set_edge('0);
    set_enable(0, src_bit(5));

    // Keep source 5 HIGH
    raise(src_bit(5));
    check("s5 pending before claim");

    // Claim interrupt ID 6
    claim(0, id, "s5 claimed before reset");

    if (id != 6)
      `uvm_error("CLAIM_ID",
        $sformatf("Expected ID 6 before reset, got ID %0d", id))

    wait_clk(5);

    // Reset while source 5 is still HIGH and interrupt is in service
    do_reset();

    check_defaults("reset with claimed level interrupt");
    check("after reset: no IRQ while disabled");

    // Re-enable source 5 while it is still HIGH
    set_enable(0, src_bit(5));
    check("s5 re-pending after reset");

    // Claim the new interrupt without completing the old claim
    claim(0, id, "s5 new interrupt after reset");

    if (id != 6)
      `uvm_error("CLAIM_ID",
        $sformatf("Expected ID 6 after reset, got ID %0d", id))

    // Deassert source before completing the new interrupt
    drop(src_bit(5));
    complete(0, id);

    check("s5 completed after reset");
  endtask
endclass
// TEST NAME: plic_irq_prio_sweep_test
// PURPOSE: every source at every priority level on every target, with all
//          threshold levels per target, then with sources enabled on none,
//          one or some targets; all 64 sources raised at once each round
class plic_irq_prio_sweep_test extends plic_irq_base_test;
  `uvm_component_utils(plic_irq_prio_sweep_test)
  function new(string name = "plic_irq_prio_sweep_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  // Source s gets priority (s + offset) % PLIC_PRIORITIES, or every source
  // gets fixed when fixed >= 0; one write per register
  task set_priorities(int offset, int fixed = -1);
    uvm_status_e status;
    for (int r = 0; r < PLIC_SOURCES / 8; r++) begin
      uvm_reg rg = env.ral_model.get_reg_by_name($sformatf("PRIORITY_%0d", r));
      for (int k = 0; k < 8; k++) begin
        int unsigned p = fixed >= 0 ? fixed : (8*r + k + offset) % PLIC_PRIORITIES;
        // Source 0 stays >= 1: a pending priority-0 ID 1 is claimable (DUT
        // bug, checked in plic_irq_zero_prio_test)
        if (8*r + k == 0 && p == 0) p = 1;
        rg.get_field_by_name($sformatf("P%0d", 8*r + k)).set(p);
      end
      rg.update(status);

  
    end
  endtask

  task scenario();
    plic_src_t all = '1;
    plic_src_t en[PLIC_TARGETS];

    // 1. all sources on all targets; priorities and thresholds rotate
    for (int t = 0; t < PLIC_TARGETS; t++) set_enable(t, all);
    for (int r = 0; r < PLIC_PRIORITIES; r++) begin
      set_priorities(r);
      for (int t = 0; t < PLIC_TARGETS; t++) set_threshold(t, (r + t) % PLIC_PRIORITIES);
      raise(all);
      check($sformatf("round %0d: all raised", r));
      drop(all);
      drain_all($sformatf("round %0d", r));
      check($sformatf("round %0d: drained", r));
    end

    // 2. source s enabled on targets 0 .. (s % 4) - 1: none, one or some
    for (int t = 0; t < PLIC_TARGETS; t++) begin
      en[t] = '0;
      set_threshold(t, 0);
    end
    for (int s = 0; s < PLIC_SOURCES; s++)
      for (int t = 0; t < s % 4; t++) en[t][s] = 1'b1;
    for (int t = 0; t < PLIC_TARGETS; t++) set_enable(t, en[t]);
    for (int r = 0; r < PLIC_PRIORITIES; r++) begin
      set_priorities(r);
      raise(all);
      check($sformatf("mixed round %0d: all raised", r));
      drop(all);
      drain_all($sformatf("mixed round %0d", r));
    end

    // 3. sources still pending (no target, or priority 0): serve them all on t0
    set_priorities(0, 1);
    set_enable(0, all);
    drain_all("leftovers");
    check("all served");
  endtask
endclass
