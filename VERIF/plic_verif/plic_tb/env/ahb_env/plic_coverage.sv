//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: SoC Integration
//  Module            				: plic_coverage
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: Functional coverage for the AHB-Lite PLIC.
//               Fed by the AHB monitor (register accesses, claim/complete) and
//               the interrupt monitor (src[]/irq[] every clock). Priority,
//               enable, threshold and EL are shadowed from bus writes, the
//               gateway state (pending) comes from the interrupt scoreboard.
//
//               With Verilator 5.052 the covergroups are collected into the
//               coverage .dat file (build with --coverage-user);
//               get_coverage() is not supported there, so the per-group
//               summary is printed only on other simulators.
//=================================================================================

`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_ahb_lite_item_pkg::*;
import plic_irq_item_pkg::*;

`uvm_analysis_imp_decl(_ahb)
`uvm_analysis_imp_decl(_irq)

class plic_coverage extends uvm_component;
  `uvm_component_utils(plic_coverage)

  typedef enum {K_CONFIG, K_EL, K_PRIORITY, K_IE, K_THRESHOLD, K_ID, K_UNMAPPED} reg_kind_e;
  // Enum coverpoints list their bins: Verilator would otherwise create auto bins
  typedef enum {D_ZERO, D_ONE_HOT, D_MULTI, D_ALL_ONES} density_e;
  typedef enum {R_NONE, R_ABOVE_TH, R_AT_OR_BELOW_TH} prio_rel_e;

  // Register map (word offsets from 0x0)
  localparam int OFF_EL        = 'h08;
  localparam int OFF_PRIORITY  = 'h10;
  localparam int OFF_IE        = 'h30;
  localparam int OFF_THRESHOLD = 'h50;
  localparam int OFF_ID        = 'h60;
  localparam int OFF_END       = 'h70;

  uvm_analysis_imp_ahb #(plic_ahb_lite_item, plic_coverage) ahb_in;
  uvm_analysis_imp_irq #(plic_irq_item,      plic_coverage) irq_in;
  plic_irq_scoreboard irq_sb;   // reference gateway state (PENDING / CLAIMED)

  // ---------------- shadow of the configuration ----------------
  bit [2:0]          prio[PLIC_SOURCES];
  plic_src_t         ie[PLIC_TARGETS];
  bit [2:0]          th[PLIC_TARGETS];
  plic_src_t         el;
  int unsigned       in_service[PLIC_TARGETS][$];   // claimed IDs, oldest first
  plic_src_t         prev_src;
  plic_irq_t         prev_irq;
  bit                prev_rst_n;
  // Gateway state of the previous sample: irq_sb gets each sample first and
  // has already cleared its states when the reset sample reaches us
  bit                prev_pending, prev_claimed;

  // ======================================================================
  // Register access: every register read and written
  // ======================================================================
  covergroup cg_reg_access with function sample(int unsigned idx, bit wr);
    cp_reg : coverpoint idx { bins regs[] = {[0:(OFF_END/4)-1]}; }
    cp_dir : coverpoint wr  { bins rd = {0}; bins wr = {1}; }
    x_reg_dir : cross cp_reg, cp_dir;
  endgroup

  // Write data patterns on the RW configuration registers
  covergroup cg_reg_data with function sample(reg_kind_e kind, density_e d);
    cp_kind : coverpoint kind { bins el = {K_EL}; bins prio = {K_PRIORITY}; bins ie = {K_IE}; bins th = {K_THRESHOLD}; }
    cp_data : coverpoint d { bins zero = {D_ZERO}; bins one_hot = {D_ONE_HOT}; bins multi = {D_MULTI}; bins all_ones = {D_ALL_ONES}; }
    x_kind_data : cross cp_kind, cp_data;
  endgroup

  // ======================================================================
  // Configuration
  // ======================================================================
  // Every source gets a priority, every priority level is used
  covergroup cg_priority with function sample(int unsigned s, bit [2:0] p, bit [2:0] p_old);
    cp_src  : coverpoint s { bins src[] = {[0:PLIC_SOURCES-1]}; }
    cp_prio : coverpoint p { bins lvl[] = {[0:PLIC_PRIORITIES-1]}; }
    cp_word : coverpoint s / 32 { bins word[] = {[0:(PLIC_SOURCES-1)/32]}; }
    cp_dir  : coverpoint int'(p) - int'(p_old) { bins raised = {[1:$]}; bins lowered = {[$:-1]}; }
    x_word_prio : cross cp_word, cp_prio;
  endgroup

  covergroup cg_enable with function sample(int unsigned t, int unsigned w, density_e d);
    cp_tgt  : coverpoint t { bins tgt[]  = {[0:PLIC_TARGETS-1]}; }
    cp_word : coverpoint w { bins word[] = {[0:(PLIC_SOURCES-1)/32]}; }
    cp_dens : coverpoint d { bins zero = {D_ZERO}; bins one_hot = {D_ONE_HOT}; bins multi = {D_MULTI}; bins all_ones = {D_ALL_ONES}; }
    x_tgt_word_dens : cross cp_tgt, cp_word, cp_dens;
  endgroup

  covergroup cg_threshold with function sample(int unsigned t, bit [2:0] v, bit [2:0] v_old);
    cp_tgt : coverpoint t { bins tgt[] = {[0:PLIC_TARGETS-1]}; }
    cp_th  : coverpoint v { bins lvl[] = {[0:PLIC_PRIORITIES-1]}; }
    cp_dir : coverpoint int'(v) - int'(v_old) { bins raised = {[1:$]}; bins lowered = {[$:-1]}; }
    x_tgt_th : cross cp_tgt, cp_th;
  endgroup

  // Edge / level triggered sources
  covergroup cg_el with function sample(int unsigned w, density_e d);
    cp_word : coverpoint w { bins word[] = {[0:(PLIC_SOURCES-1)/32]}; }
    cp_dens : coverpoint d { bins zero = {D_ZERO}; bins one_hot = {D_ONE_HOT}; bins multi = {D_MULTI}; bins all_ones = {D_ALL_ONES}; }
  endgroup

  // ======================================================================
  // Interrupt sources: every source raised, in every relevant context
  // ======================================================================
  covergroup cg_src_raise with function sample(int unsigned s, bit [2:0] p, int unsigned n_tgt,
                                               bit edge_mode, bit in_service);
    cp_src     : coverpoint s     { bins src[] = {[0:PLIC_SOURCES-1]}; }
    cp_prio    : coverpoint p     { bins zero = {0}; bins lvl[] = {[1:PLIC_PRIORITIES-1]}; }
    cp_targets : coverpoint n_tgt { bins none = {0}; bins one = {1}; bins some = {[2:PLIC_TARGETS-1]}; bins all = {PLIC_TARGETS}; }
    cp_mode    : coverpoint edge_mode  { bins level = {0}; bins edge_trig = {1}; }
    cp_busy    : coverpoint in_service { bins idle = {0}; bins while_in_service = {1}; }
    x_prio_targets : cross cp_prio, cp_targets;
    x_mode_busy    : cross cp_mode, cp_busy;
  endgroup

  // How many sources change on the same clock
  covergroup cg_src_burst with function sample(int unsigned n_rise, int unsigned n_high);
    cp_rise : coverpoint n_rise { bins one = {1}; bins two_three = {[2:3]}; bins four_up = {[4:$]}; }
    cp_high : coverpoint n_high { bins one = {1}; bins few = {[2:7]}; bins many = {[8:$]}; }
  endgroup

  // ======================================================================
  // Targets: irq outputs
  // ======================================================================
  covergroup cg_irq with function sample(int unsigned t, bit level, int unsigned n_active);
    cp_tgt    : coverpoint t     { bins tgt[] = {[0:PLIC_TARGETS-1]}; }
    cp_edge   : coverpoint level { bins fall = {0}; bins rise = {1}; }
    cp_active : coverpoint n_active { bins none = {0}; bins one = {1}; bins some = {[2:PLIC_TARGETS-1]}; bins all = {PLIC_TARGETS}; }
    x_tgt_edge : cross cp_tgt, cp_edge;
  endgroup

  // ======================================================================
  // Claim (read ID_t)
  // ======================================================================
  covergroup cg_claim with function sample(int unsigned t, int unsigned id, int unsigned n_pend,
                                           prio_rel_e rel, bit tie, bit irq_level, int unsigned depth);
    cp_tgt   : coverpoint t  { bins tgt[] = {[0:PLIC_TARGETS-1]}; }
    cp_id    : coverpoint id {
      bins none     = {0};
      bins first    = {1};
      bins low      = {[2:31]};
      bins w0_last  = {32};
      bins w1_first = {33};
      bins high     = {[34:PLIC_SOURCES-1]};
      bins last     = {PLIC_SOURCES};
      illegal_bins out_of_range = {[PLIC_SOURCES+1:$]};
    }
    cp_valid : coverpoint id != 0 { bins empty = {0}; bins valid = {1}; }
    cp_pend  : coverpoint n_pend { bins zero = {0}; bins one = {1}; bins few = {[2:3]}; bins many = {[4:$]}; }
    // claimable even when the threshold masks irq
    cp_rel   : coverpoint rel { bins none = {R_NONE}; bins above_th = {R_ABOVE_TH}; bins at_or_below_th = {R_AT_OR_BELOW_TH}; }
    cp_tie   : coverpoint tie iff (n_pend >= 2) { bins distinct = {0}; bins equal_prio = {1}; }
    cp_irq   : coverpoint irq_level { bins irq_low = {0}; bins irq_high = {1}; }
    cp_depth : coverpoint depth { bins first_claim = {0}; bins nested = {[1:$]}; }
    x_tgt_valid : cross cp_tgt, cp_valid;
    x_tgt_pend  : cross cp_tgt, cp_pend;
    // winner vs threshold against the irq level; a plain coverpoint so the
    // illegal combination is excluded on every simulator
    cp_rel_irq : coverpoint {rel == R_ABOVE_TH, rel == R_AT_OR_BELOW_TH, irq_level} {
      bins none_irq_low           = {3'b000};
      bins above_th_irq_low       = {3'b100};   // claimed before irq propagated
      bins above_th_irq_high      = {3'b101};
      bins at_or_below_th_irq_low = {3'b010};
//      illegal_bins irq_without_winner = {3'b001, 3'b011};
    }
    x_tgt_depth : cross cp_tgt, cp_depth;
  endgroup

  // ======================================================================
  // Complete (write ID_t)
  // ======================================================================
  covergroup cg_complete with function sample(int unsigned t, bit matched, int unsigned depth,
                                              bit in_order, bit src_high);
    cp_tgt     : coverpoint t        { bins tgt[] = {[0:PLIC_TARGETS-1]}; }
    cp_matched : coverpoint matched  { bins not_claimed = {0}; bins claimed = {1}; }
    cp_depth   : coverpoint depth    { bins single = {1}; bins nested = {[2:$]}; }
    cp_order   : coverpoint in_order iff (depth >= 2) { bins out_of_order = {0}; bins lifo = {1}; }
    cp_src     : coverpoint src_high { bins src_low = {0}; bins src_still_high = {1}; }
    x_tgt_matched : cross cp_tgt, cp_matched;
    x_depth_src   : cross cp_depth, cp_src;
  endgroup

  // ======================================================================
  // Reset with activity in flight
  // ======================================================================
  covergroup cg_reset with function sample(bit pending, bit irq_active, bit claimed);
    cp_pend    : coverpoint pending    { bins quiet = {0}; bins with_pending = {1}; }
    cp_irq     : coverpoint irq_active { bins quiet = {0}; bins with_irq = {1}; }
    cp_claimed : coverpoint claimed    { bins quiet = {0}; bins with_claimed = {1}; }
  endgroup

  function new(string name = "plic_coverage", uvm_component parent = null);
    super.new(name, parent);
    ahb_in        = new("ahb_in", this);
    irq_in        = new("irq_in", this);
    cg_reg_access = new();
    cg_reg_data   = new();
    cg_priority   = new();
    cg_enable     = new();
    cg_threshold  = new();
    cg_el         = new();
    cg_src_raise  = new();
    cg_src_burst  = new();
    cg_irq        = new();
    cg_claim      = new();
    cg_complete   = new();
    cg_reset      = new();
    prev_rst_n    = 1;   // the reset at time 0 is sampled too
  endfunction

  // ---------------- helpers ----------------
  function density_e density(bit [31:0] v);
    if (v == 0)            return D_ZERO;
    if (v == '1)           return D_ALL_ONES;
    if ($countones(v) == 1) return D_ONE_HOT;
    return D_MULTI;
  endfunction

  function reg_kind_e kind_of(int unsigned off);
    if (off <  OFF_EL)        return K_CONFIG;
    if (off <  OFF_PRIORITY)  return K_EL;
    if (off <  OFF_IE)        return K_PRIORITY;
    if (off <  OFF_THRESHOLD) return K_IE;
    if (off <  OFF_ID)        return K_THRESHOLD;
    if (off <  OFF_END)       return K_ID;
    return K_UNMAPPED;
  endfunction

  function int unsigned n_targets(int unsigned s);
    n_targets = 0;
    for (int t = 0; t < PLIC_TARGETS; t++) n_targets += ie[t][s];
  endfunction

  function bit is_in_service(int unsigned id);
    for (int t = 0; t < PLIC_TARGETS; t++)
      foreach (in_service[t][i]) if (in_service[t][i] == id) return 1;
    return 0;
  endfunction

  // Priorities reset to the SoC defaults, taken from the RAL reset values
  function void clear_shadow();
    foreach (prio[s]) prio[s] = irq_sb.ral_model.get_field_by_name($sformatf("P%0d", s)).get_reset();
    foreach (ie[t]) begin ie[t] = '0; th[t] = 0; in_service[t].delete(); end
    el = '0;
  endfunction

  // ---------------- AHB side ----------------
  function void write_ahb(plic_ahb_lite_item tr);
    int unsigned off = tr.addr[15:0] & ~32'h3;
    reg_kind_e   k   = kind_of(off);
    if (k == K_UNMAPPED) return;
    cg_reg_access.sample(off / 4, tr.write);
    if (tr.write && k inside {K_EL, K_PRIORITY, K_IE, K_THRESHOLD})
      cg_reg_data.sample(k, density(tr.wdata));
    case (k)
      K_EL:        begin
                     int unsigned w = (off - OFF_EL) / 4;
                     if (tr.write) begin el[w*32 +: 32] = tr.wdata; cg_el.sample(w, density(tr.wdata)); end
                   end
      K_PRIORITY:  if (tr.write) sample_priority(off, tr.wdata);
      K_IE:        begin
                     int unsigned t = (off - OFF_IE) / 8;
                     int unsigned w = ((off - OFF_IE) / 4) % 2;
                     if (tr.write) begin ie[t][w*32 +: 32] = tr.wdata; cg_enable.sample(t, w, density(tr.wdata)); end
                   end
      K_THRESHOLD: begin
                     int unsigned t = (off - OFF_THRESHOLD) / 4;
                     if (tr.write) begin cg_threshold.sample(t, tr.wdata[2:0], th[t]); th[t] = tr.wdata[2:0]; end
                   end
      K_ID:        begin
                     int unsigned t = (off - OFF_ID) / 4;
                     if (tr.write) sample_complete(t, tr.wdata[6:0]);
                     else          sample_claim(t, tr.rdata[6:0]);
                   end
      default: ;
    endcase
  endfunction

  // PRIORITY_n holds sources 8n..8n+7, 4 bits each (3-bit value + reserved)
  function void sample_priority(int unsigned off, bit [31:0] wdata);
    int unsigned base = (off - OFF_PRIORITY) / 4 * 8;
    for (int k = 0; k < 8; k++) begin
      bit [2:0] p = wdata[4*k +: 3];
      if (base + k < PLIC_SOURCES && p != prio[base + k]) begin
        cg_priority.sample(base + k, p, prio[base + k]);
        prio[base + k] = p;
      end
    end
  endfunction

  // Sampled with the gateway state just before the claim takes effect
  function void sample_claim(int unsigned t, int unsigned id);
    int unsigned n_pend = 0, n_top = 0, max_p = 0;
    prio_rel_e   rel;
    foreach (prio[s])
      if (irq_sb.state[s] == plic_irq_scoreboard::PENDING && ie[t][s] && prio[s] > 0) begin
        n_pend++;
        if (prio[s] > max_p) begin max_p = prio[s]; n_top = 1; end
        else if (prio[s] == max_p) n_top++;
      end
    rel = (n_pend == 0) ? R_NONE : (max_p > th[t]) ? R_ABOVE_TH : R_AT_OR_BELOW_TH;
    cg_claim.sample(t, id, n_pend, rel, n_top > 1, prev_irq[t], in_service[t].size());
    if (id != 0) in_service[t].push_back(id);
  endfunction

  function void sample_complete(int unsigned t, int unsigned id);
    int idx[$] = in_service[t].find_first_index(x) with (x == id);
    int unsigned depth = in_service[t].size();
    bit matched = idx.size() > 0;
    bit lifo    = matched && idx[0] == depth - 1;
    bit src_hi  = (id >= 1 && id <= PLIC_SOURCES) ? prev_src[id-1] : 0;
    cg_complete.sample(t, matched, depth, lifo, src_hi);
    if (matched) in_service[t].delete(idx[0]);
  endfunction

  // ---------------- interrupt side (every clock) ----------------
  function void write_irq(plic_irq_item tr);
    plic_src_t rise = tr.src & ~prev_src;
    if (!tr.rst_n) begin
      if (prev_rst_n) cg_reset.sample(prev_pending, prev_irq != 0, prev_claimed);
      clear_shadow();
    end else begin
      if (rise != 0) begin
        foreach (rise[s])
          if (rise[s]) cg_src_raise.sample(s, prio[s], n_targets(s), el[s], is_in_service(s + 1));
        cg_src_burst.sample($countones(rise), $countones(tr.src));
      end
      foreach (tr.irq[t])
        if (tr.irq[t] !== prev_irq[t]) cg_irq.sample(t, tr.irq[t], $countones(tr.irq));
    end
    prev_pending = 0;
    prev_claimed = 0;
    foreach (irq_sb.state[s]) begin
      prev_pending |= irq_sb.state[s] == plic_irq_scoreboard::PENDING;
      prev_claimed |= irq_sb.state[s] == plic_irq_scoreboard::CLAIMED;
    end
    prev_src   = tr.src;
    prev_irq   = tr.irq;
    prev_rst_n = tr.rst_n;
  endfunction

  function void report_phase(uvm_phase phase);
`ifndef VERILATOR
    `uvm_info("PLIC_COV", $sformatf({"Functional coverage: total %0.2f%%\n",
      "  reg_access %0.2f  reg_data %0.2f  priority %0.2f  enable %0.2f  threshold %0.2f  el %0.2f\n",
      "  src_raise %0.2f  src_burst %0.2f  irq %0.2f  claim %0.2f  complete %0.2f  reset %0.2f"},
      $get_coverage(),
      cg_reg_access.get_coverage(), cg_reg_data.get_coverage(), cg_priority.get_coverage(),
      cg_enable.get_coverage(), cg_threshold.get_coverage(), cg_el.get_coverage(),
      cg_src_raise.get_coverage(), cg_src_burst.get_coverage(), cg_irq.get_coverage(),
      cg_claim.get_coverage(), cg_complete.get_coverage(), cg_reset.get_coverage()), UVM_NONE)
`else
    `uvm_info("PLIC_COV", "Functional coverage written to the Verilator coverage file; run 'make cov-report'", UVM_NONE)
`endif
  endfunction
endclass
