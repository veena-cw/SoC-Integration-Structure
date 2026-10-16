//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project           				: SoC Integration
//  Module            				: plic_irq_scoreboard
//  Primary Unit Owner                         	:
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: PLIC interrupt checker with a reference model.
//    Each source is IDLE, PENDING or CLAIMED (level-triggered gateway):
//      IDLE    -> PENDING  when src[s] is high       (monitor sample)
//      PENDING -> CLAIMED  when a target claims it   (claim)
//      CLAIMED -> IDLE     when its ID is completed  (complete)
//    For each target the winner is the pending, enabled source with the
//    highest priority (lower ID on a tie); irq[t] = winner priority > threshold.
//    Priority, enable and threshold come from the RAL mirror.
//=================================================================================

/*`include "uvm_macros.svh"
import uvm_pkg::*;
import plic_irq_item_pkg::*;
import plic_ral_block_pkg::*;

class plic_irq_scoreboard extends uvm_component;
  `uvm_component_utils(plic_irq_scoreboard)

  typedef enum {IDLE, PENDING, CLAIMED} state_e;

  uvm_analysis_imp #(plic_irq_item, plic_irq_scoreboard) irq_in;
  plic_ral_block ral_model;

  state_e    state[PLIC_SOURCES];
  plic_irq_t act_irq;   // last sampled irq[]
  event      sampled;   // one per clock
  int        checks, errors;

  function new(string name = "plic_irq_scoreboard", uvm_component parent = null);
    super.new(name, parent);
    irq_in = new("irq_in", this);
  endfunction

  // ---------------- configuration from the RAL mirror ----------------
  function int unsigned priority_of(int s);
    return ral_model.get_field_by_name($sformatf("P%0d", s)).get_mirrored_value();
  endfunction

  function bit enabled(int t, int s);
    uvm_reg        ie = ral_model.get_reg_by_name($sformatf("IE_%0d_%0d", t, s / 32));
    uvm_reg_data_t v  = ie.get_field_by_name("IE").get_mirrored_value();
    return v[s % 32];
  endfunction

  function int unsigned threshold(int t);
    uvm_reg th = ral_model.get_reg_by_name($sformatf("THRESHOLD_%0d", t));
    return th.get_field_by_name("THRESHOLD").get_mirrored_value();
  endfunction

  // ---------------- reference model ----------------
  // Called every clock by the interrupt monitor
  function void write(plic_irq_item tr);
    if (!tr.rst_n)
      foreach (state[s]) state[s] = IDLE;
    else
      foreach (state[s]) if (state[s] == IDLE && tr.src[s]) state[s] = PENDING;
    act_irq = tr.irq;
    -> sampled;
  endfunction

  // Winning ID for target t (0 = none) and its priority
  function int unsigned winner(int t, output int unsigned prio);
    winner = 0;
    prio   = 0;
    foreach (state[s])
      if (state[s] == PENDING && enabled(t, s) && priority_of(s) > prio) begin
        winner = s + 1;
        prio   = priority_of(s);
      end
  endfunction

  function plic_irq_t expected_irq();
    int unsigned prio;
    foreach (expected_irq[t]) begin
      void'(winner(t, prio));
      expected_irq[t] = prio > threshold(t);
    end
  endfunction

  // ---------------- checks, called by the sequences ----------------
  function void check_irq(string ctx);
    plic_irq_t exp = expected_irq();
    checks++;
    if (act_irq !== exp) begin
      errors++;
      `uvm_error("IRQ_MISMATCH", $sformatf("[%s] irq=%b expected=%b", ctx, act_irq, exp))
    end else
      `uvm_info("IRQ_SB", $sformatf("[%s] irq=%b ok", ctx, act_irq), UVM_MEDIUM)
  endfunction

  // exp_id was taken from winner() just before the ID register was read
  function void check_claim(int t, int unsigned exp_id, int unsigned act_id, string ctx);
    checks++;
    if (act_id != exp_id) begin
      errors++;
      `uvm_error("CLAIM_ID", $sformatf("[%s] target %0d claimed ID=%0d expected ID=%0d", ctx, t, act_id, exp_id))
    end else
      `uvm_info("IRQ_SB", $sformatf("[%s] target %0d claimed ID=%0d ok", ctx, t, act_id), UVM_MEDIUM)
    if (exp_id != 0) state[exp_id-1] = CLAIMED;
  endfunction

  // RISC-V PLIC spec: completing an ID releases that source
  function void complete(int unsigned id);
    if (id >= 1 && id <= PLIC_SOURCES && state[id-1] == CLAIMED) state[id-1] = IDLE;
  endfunction

  function void report_phase(uvm_phase phase);
    `uvm_info("IRQ_SB", $sformatf("PLIC IRQ checker: %0d checks, %0d errors", checks, errors), UVM_NONE)
  endfunction
endclass*/


// Include UVM macros for reporting messages and registering components.
`include "uvm_macros.svh"

// Import UVM classes such as uvm_component, uvm_reg, and analysis ports.
import uvm_pkg::*;

// Import the package containing the PLIC IRQ transaction class.
import plic_irq_item_pkg::*;

// Import the package containing the PLIC RAL register model.
import plic_ral_block_pkg::*;


// Define the PLIC interrupt scoreboard class.
// It compares expected PLIC behavior with actual DUT behavior.
class plic_irq_scoreboard extends uvm_component;

  // Register this component with the UVM factory.
  `uvm_component_utils(plic_irq_scoreboard)

  // Define the possible states of each interrupt source.
  typedef enum {IDLE, PENDING, CLAIMED} state_e;

  // Receive IRQ transactions from the monitor through an analysis port.
  // Each transaction contains information such as source IRQs and target IRQs.
  uvm_analysis_imp #(plic_irq_item, plic_irq_scoreboard) irq_in;

  // Handle to the PLIC RAL model.
  // Used to read priority, enable, and threshold register mirror values.
  plic_ral_block ral_model;

  // Store the current state of every interrupt source.
  // If PLIC_SOURCES = 64, this array has 64 entries.
  state_e state[PLIC_SOURCES];

  // Store the actual IRQ output values sampled from the DUT.
  plic_irq_t act_irq;

  // Event triggered whenever a new IRQ transaction is received.
  event sampled;

  // Count the total number of checks and errors.
  int checks, errors;


  // Constructor: called when the scoreboard is created.
  function new(string name = "plic_irq_scoreboard",
               uvm_component parent = null);

    // Call the parent UVM component constructor.
    super.new(name, parent);

    // Create the analysis implementation port.
    // The monitor sends transactions to this port.
    irq_in = new("irq_in", this);

  endfunction


  // ---------------------------------------------------------
  // Read the priority configured for a particular source.
  // ---------------------------------------------------------
  function int unsigned priority_of(int s);

    // Find the priority field named P0, P1, P2, etc.
    // Return its mirrored value from the RAL model.
    return ral_model.get_field_by_name(
      $sformatf("P%0d", s)
    ).get_mirrored_value();

  endfunction


  // ---------------------------------------------------------
  // Check whether source s is enabled for target t.
  // ---------------------------------------------------------
  function bit enabled(int t, int s);

    // Calculate which enable register contains source s.
    // s/32 selects the 32-bit word.
    // Example: source index 35 belongs to word 1.
    uvm_reg ie = ral_model.get_reg_by_name(
      $sformatf("IE_%0d_%0d", t, s / 32)
    );

    // Read the mirrored value of the IE field.
    uvm_reg_data_t v =
      ie.get_field_by_name("IE").get_mirrored_value();

    // Select the bit corresponding to source s.
    // Example: source index 35 uses bit 3 of word 1.
    return v[s % 32];

  endfunction


  // ---------------------------------------------------------
  // Read the interrupt threshold for target t.
  // ---------------------------------------------------------
  function int unsigned threshold(int t);

    // Find the threshold register for the specified target.
    // Example: target 2 uses THRESHOLD_2.
    uvm_reg th = ral_model.get_reg_by_name(
      $sformatf("THRESHOLD_%0d", t)
    );

    // Return the mirrored value of its THRESHOLD field.
    return th.get_field_by_name("THRESHOLD")
             .get_mirrored_value();

  endfunction


  // ---------------------------------------------------------
  // Update the reference model using monitor transactions.
  // This function is automatically called when irq_in receives
  // a transaction because the function is named write().
  // ---------------------------------------------------------
  function void write(plic_irq_item tr);

    // If reset is active, reset every source state to IDLE.
    if (!tr.rst_n)
      foreach (state[s])
        state[s] = IDLE;

    // Otherwise, check each source input.
    else
      foreach (state[s])

        // An IDLE source becomes PENDING when its input is high.
        if (state[s] == IDLE && tr.src[s])
          state[s] = PENDING;

    // Save the actual IRQ outputs sampled by the monitor.
    act_irq = tr.irq;

    // Notify any process waiting for a new sample.
    -> sampled;

  endfunction


  // ---------------------------------------------------------
  // Find the highest-priority pending source enabled for
  // target t.
  // Return its interrupt ID and output its priority.
  // ID 0 means no eligible interrupt was found.
  // ---------------------------------------------------------
  function int unsigned winner(
    int t,
    output int unsigned prio
  );

    // Initially, assume there is no winning interrupt.
    winner = 0;

    // Initially, the highest priority is zero.
    prio = 0;

    // Check every interrupt source.
    foreach (state[s])

      // Consider only sources that are:
      // 1. Pending.
      // 2. Enabled for this target.
      // 3. Higher priority than the current winner.
      if (state[s] == PENDING &&
          enabled(t, s) &&
          priority_of(s) > prio) begin

        // Convert the array index into a source ID.
        // Array index 0 corresponds to source ID 1.
        winner = s + 1;

        // Save the priority of the current winning source.
        prio = priority_of(s);

      end

  endfunction


  // ---------------------------------------------------------
  // Calculate the expected IRQ output for every target.
  // ---------------------------------------------------------
  function plic_irq_t expected_irq();

    // Variable used to store the winning priority for each target.
    int unsigned prio;

    // Iterate over every target IRQ bit.
    foreach (expected_irq[t]) begin

      // Find the highest eligible priority for this target.
      // The returned source ID is ignored here; only priority matters.
      void'(winner(t, prio));

      // IRQ should be high only when winning priority
      // is greater than the target's threshold.
      expected_irq[t] = prio > threshold(t);

    end

  endfunction


  // ---------------------------------------------------------
  // Compare actual IRQ outputs with the expected IRQ outputs.
  // Called by a sequence or another test component.
  // ---------------------------------------------------------
  function void check_irq(string ctx);

    // Calculate the expected IRQ values.
    plic_irq_t exp = expected_irq();

    // Increment the number of checks performed.
    checks++;

    // Compare actual and expected outputs, including X/Z values.
    if (act_irq !== exp) begin

      // Record a mismatch.
      errors++;

      // Print an error showing actual and expected IRQ values.
      `uvm_error("IRQ_MISMATCH",
        $sformatf("[%s] irq=%b expected=%b",
                  ctx, act_irq, exp))

    end else

      // Print a message if the IRQ outputs match.
      `uvm_info("IRQ_SB",
        $sformatf("[%s] irq=%b ok", ctx, act_irq),
        UVM_MEDIUM)

  endfunction


  // ---------------------------------------------------------
  // Compare the actual claimed interrupt ID with the expected ID.
  // ---------------------------------------------------------
  function void check_claim(
    int t,
    int unsigned exp_id,
    int unsigned act_id,
    string ctx
  );

    // Increment the number of checks performed.
    checks++;

    // Check whether the CPU received the expected interrupt ID.
    if (act_id != exp_id) begin

      // Record the claim mismatch.
      errors++;

      // Report the actual and expected IDs.
      `uvm_error("CLAIM_ID",
        $sformatf(
          "[%s] target %0d claimed ID=%0d expected ID=%0d",
          ctx, t, act_id, exp_id
        ))

    end else

      // Report a successful claim check.
      `uvm_info("IRQ_SB",
        $sformatf(
          "[%s] target %0d claimed ID=%0d ok",
          ctx, t, act_id
        ),
        UVM_MEDIUM)

    // If a valid interrupt was expected, mark that source CLAIMED.
    // This uses the expected ID even if the actual ID mismatched.
    if (exp_id != 0)
      state[exp_id-1] = CLAIMED;

  endfunction


  // ---------------------------------------------------------
  // Process completion of an interrupt.
  // ---------------------------------------------------------
  function void complete(int unsigned id);

    // Check that the ID is valid and its source is CLAIMED.
    if (id >= 1 &&
        id <= PLIC_SOURCES &&
        state[id-1] == CLAIMED)

      // Release the source by returning it to IDLE.
      state[id-1] = IDLE;

  endfunction


  // ---------------------------------------------------------
  // Print the scoreboard summary at the end of simulation.
  // ---------------------------------------------------------
  function void report_phase(uvm_phase phase);

    // Display total checks performed and total errors detected.
    `uvm_info("IRQ_SB",
      $sformatf(
        "PLIC IRQ checker: %0d checks, %0d errors",
        checks, errors
      ),
      UVM_NONE)

  endfunction

endclass
