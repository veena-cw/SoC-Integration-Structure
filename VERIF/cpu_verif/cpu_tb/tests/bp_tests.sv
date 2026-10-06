// bp_tests.sv
`ifndef BP_TESTS_SV
`define BP_TESTS_SV

class bp_base_test extends uvm_test;
  `uvm_component_utils(bp_base_test)

  bp_env env;

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env = bp_env::type_id::create("env", this);
    // Watchdog: most tests wait for tohost with no bound of their own. A
    // passing two-core test finishes well under 0.5 ms; a hung core must
    // fail the run instead of stalling make sim / make regression.
    // Override with +UVM_TIMEOUT=<time>.
    uvm_top.set_timeout(2ms, 1);
  endfunction

  // Keep reset generation in one place and use the active reset agent before
  // starting each test's BedRock/NBF sequence.
  task apply_cpu_reset();
    cpu_reset_seq reset_seq;
    reset_seq = cpu_reset_seq::type_id::create("reset_seq");
    reset_seq.start(env.reset_agt.reset_sqr);
  endtask

endclass

// Test ID: BP-DV-003 | Feature: ALU Operations
class bp_dv_003_alu_test extends bp_base_test;
  `uvm_component_utils(bp_dv_003_alu_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    alu_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = alu_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-004 | Feature: Immediate arithmetic/logical instructions
class bp_dv_004_immediate_test extends bp_base_test;
  `uvm_component_utils(bp_dv_004_immediate_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    immediate_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = immediate_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-005 | Feature: RV64 shift operations
class bp_dv_005_shift_test extends bp_base_test;
  `uvm_component_utils(bp_dv_005_shift_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    shift_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = shift_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-006 | Feature: RV64M multiply/divide/remainder operations
class bp_dv_006_muldiv_test extends bp_base_test;
  `uvm_component_utils(bp_dv_006_muldiv_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    muldiv_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = muldiv_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Supplemental load/add/store smoke test retained for compatibility. The
// formal BP-DV-007 row is the conditional-branches test below.
class bp_dv_007_load_add_store_test extends bp_base_test;
  `uvm_component_utils(bp_dv_007_load_add_store_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    load_add_store_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = load_add_store_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-007 | Feature: conditional branches
class bp_dv_007_branch_test extends bp_base_test;
  `uvm_component_utils(bp_dv_007_branch_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    branch_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = branch_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-010 | Feature: byte/halfword/word memory operations
class bp_dv_010_memory_widths_test extends bp_base_test;
  `uvm_component_utils(bp_dv_010_memory_widths_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    memory_widths_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = memory_widths_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-012 | Feature: cold-cache line refill and repeated hits
class bp_dv_012_cache_miss_test extends bp_base_test;
  `uvm_component_utils(bp_dv_012_cache_miss_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    cache_miss_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = cache_miss_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-025 | Feature: cache-line refill and AXI burst observation
class bp_dv_025_axi_burst_test extends bp_base_test;
  `uvm_component_utils(bp_dv_025_axi_burst_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    cache_burst_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = cache_burst_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask
endclass

// Test ID: BP-DV-020 | Feature: cache conflict replacement/eviction
class bp_dv_020_cache_replacement_test extends bp_base_test;
  `uvm_component_utils(bp_dv_020_cache_replacement_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    cache_replacement_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = cache_replacement_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask
endclass

// Test ID: BP-DV-011 | Feature: memory request/response backpressure
class bp_dv_011_memory_backpressure_test extends bp_base_test;
  `uvm_component_utils(bp_dv_011_memory_backpressure_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    memory_backpressure_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = memory_backpressure_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask
endclass

// Test ID: BP-DV-024 | Feature: variable DRAM latency under memory stress
class bp_dv_024_dram_latency_test extends bp_base_test;
  `uvm_component_utils(bp_dv_024_dram_latency_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    dram_latency_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = dram_latency_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask
endclass

// Test ID: BP-DV-015 | Feature: illegal instruction trap and mret return
class bp_dv_015_illegal_trap_test extends bp_base_test;
  `uvm_component_utils(bp_dv_015_illegal_trap_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    illegal_trap_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = illegal_trap_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-016 | Feature: ECALL/EBREAK environment and debug traps
class bp_dv_016_ecall_ebreak_test extends bp_base_test;
  `uvm_component_utils(bp_dv_016_ecall_ebreak_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    ecall_ebreak_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = ecall_ebreak_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-019 | Feature: RV64C compressed arithmetic, memory, branch, and jump instructions
class bp_dv_019_compressed_test extends bp_base_test;
  `uvm_component_utils(bp_dv_019_compressed_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    compressed_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = compressed_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-017 | Feature: two-core coherent shared memory
class bp_dv_017_multicore_shared_memory_test extends bp_base_test;
  `uvm_component_utils(bp_dv_017_multicore_shared_memory_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    multicore_shared_memory_test_seq seq;
    bit timeout;

    phase.raise_objection(this);
    apply_cpu_reset();
    seq = multicore_shared_memory_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

    timeout = 1'b0;
    fork : completion_or_timeout
      begin
        wait (env.sb.finished);
      end
      begin
        // A stalled coherent-memory test must fail explicitly instead of
        // leaving make sim waiting indefinitely.
        #(100us);
        timeout = 1'b1;
      end
    join_any
    disable completion_or_timeout;

    if (timeout)
      `uvm_fatal("BP017_TIMEOUT",
                 "BP-DV-017 did not write tohost within 100 us of test start")

    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-013 | Feature: AMO and LR/SC atomic operations
class bp_dv_013_atomic_test extends bp_base_test;
  `uvm_component_utils(bp_dv_013_atomic_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    atomic_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = atomic_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-008 | Feature: JAL/JALR jumps and link registers
class bp_dv_008_jump_test extends bp_base_test;
  `uvm_component_utils(bp_dv_008_jump_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    jump_test_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = jump_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);
    wait (env.sb.finished);
    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-028 | Feature: uncached AXI accesses on every byte lane
class bp_dv_028_axi_unaligned_test extends bp_base_test;
  `uvm_component_utils(bp_dv_028_axi_unaligned_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    axi_unaligned_test_seq seq;
    bit timeout;

    phase.raise_objection(this);
    apply_cpu_reset();
    seq = axi_unaligned_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

    timeout = 1'b0;
    fork : completion_or_timeout
      begin
        wait (env.sb.finished);
      end
      begin
        // A bridge that stalls on an unexpected lane must fail explicitly
        // instead of leaving make sim waiting indefinitely.
        #(200us);
        timeout = 1'b1;
      end
    join_any
    disable completion_or_timeout;

    if (timeout)
      `uvm_fatal("BP028_TIMEOUT",
                 "BP-DV-028 did not write tohost within 200 us of test start")

    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-029 | Feature: AXI block write, then block read, then compare
class bp_dv_029_axi_block_test extends bp_base_test;
  `uvm_component_utils(bp_dv_029_axi_block_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    axi_block_test_seq seq;
    bit timeout;

    phase.raise_objection(this);
    apply_cpu_reset();
    seq = axi_block_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

    timeout = 1'b0;
    fork : completion_or_timeout
      begin
        wait (env.sb.finished);
      end
      begin
        #(200us);
        timeout = 1'b1;
      end
    join_any
    disable completion_or_timeout;

    if (timeout)
      `uvm_fatal("BP029_TIMEOUT",
                 "BP-DV-029 did not write tohost within 200 us of test start")

    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-030 | Feature: BP-DV-029 AXI block test on both cores at once
// Requires the two-core build (BP_CFG_ID=9).
class bp_dv_030_axi_block_dual_core_test extends bp_base_test;
  `uvm_component_utils(bp_dv_030_axi_block_dual_core_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    axi_block_dual_core_test_seq seq;
    bit timeout;

    phase.raise_objection(this);
    apply_cpu_reset();
    seq = axi_block_dual_core_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

    timeout = 1'b0;
    fork : completion_or_timeout
      begin
        wait (env.sb.finished);
      end
      begin
        // Covers both harts' AXI traffic plus hart 0's bounded wait for
        // hart 1's DONE marker.
        #(500us);
        timeout = 1'b1;
      end
    join_any
    disable completion_or_timeout;

    if (timeout)
      `uvm_fatal("BP030_TIMEOUT",
                 "BP-DV-030 did not write tohost within 500 us of test start")

    phase.drop_objection(this);
  endtask

endclass

// Test ID: BP-DV-031 | Feature: BP-DV-030 with the blocks at 0x3002_0000
// Same sequence and checks as BP-DV-030; only the boot image differs
// (axi_block_dual_core_3002.nbf). Requires the two-core build (BP_CFG_ID=9).
// Checks that 0x3xxx_xxxx is routed to the AXI bridge on two cores.
class bp_dv_031_axi_block_dual_core_3002_test extends bp_dv_030_axi_block_dual_core_test;
  `uvm_component_utils(bp_dv_031_axi_block_dual_core_3002_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
endclass

// Test IDs: BP-DV-032/033/034 | Feature: Zicbom cache-block operations
// One test per operation (cbo.clean / cbo.flush / cbo.inval) so a hang in
// one cannot hide another. A hung core shows up as a BP032_TIMEOUT fatal;
// the AXI log's progress markers (c/cbo_ops.c) show the step it reached.
class bp_dv_032_cbo_clean_test extends bp_base_test;
  `uvm_component_utils(bp_dv_032_cbo_clean_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    cbo_test_seq seq;
    bit timeout;

    phase.raise_objection(this);
    apply_cpu_reset();
    seq = cbo_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

    timeout = 1'b0;
    fork : completion_or_timeout
      begin
        wait (env.sb.finished);
      end
      begin
        #(500us);
        timeout = 1'b1;
      end
    join_any
    disable completion_or_timeout;

    if (timeout)
      `uvm_fatal("BP032_TIMEOUT",
                 "cache-block operation test did not write tohost within 500 us (core hung in the CBO op?)")

    phase.drop_objection(this);
  endtask
endclass

class bp_dv_033_cbo_flush_test extends bp_dv_032_cbo_clean_test;
  `uvm_component_utils(bp_dv_033_cbo_flush_test)
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
endclass

class bp_dv_034_cbo_inval_test extends bp_dv_032_cbo_clean_test;
  `uvm_component_utils(bp_dv_034_cbo_inval_test)
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
endclass

// Test ID: BP-DV-035 | Feature: M/S/U privilege modes, medeleg/mideleg, mret/sret
class bp_dv_035_priv_modes_test extends bp_base_test;
  `uvm_component_utils(bp_dv_035_priv_modes_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    priv_modes_test_seq seq;
    bit timeout;

    phase.raise_objection(this);
    apply_cpu_reset();
    seq = priv_modes_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

    timeout = 1'b0;
    fork : completion_or_timeout
      begin
        wait (env.sb.finished);
      end
      begin
        #(500us);
        timeout = 1'b1;
      end
    join_any
    disable completion_or_timeout;

    if (timeout)
      `uvm_fatal("BP035_TIMEOUT",
                 "privilege-mode test did not write tohost within 500 us")

    phase.drop_objection(this);
  endtask
endclass

// Test ID: BP-DV-036 | Feature: Sv39 virtual memory (walks, TLB, 4K/2M/1G,
// page faults, A/D, SUM, sfence.vma)
class bp_dv_036_vm_sv39_test extends bp_base_test;
  `uvm_component_utils(bp_dv_036_vm_sv39_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    vm_sv39_test_seq seq;
    bit timeout;

    phase.raise_objection(this);
    apply_cpu_reset();
    seq = vm_sv39_test_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

    timeout = 1'b0;
    fork : completion_or_timeout
      begin
        wait (env.sb.finished);
      end
      begin
        #(1ms);
        timeout = 1'b1;
      end
    join_any
    disable completion_or_timeout;

    if (timeout)
      `uvm_fatal("BP036_TIMEOUT", "Sv39 test did not write tohost within 1 ms")

    phase.drop_objection(this);
  endtask
endclass

// Test ID: BP-DV-037 | Feature: Sv39 instruction page fault (step 6 of
// vm_sv39.c on its own). Currently fails: after the fault the handler's mret
// continues at address 0 instead of mepc, so tohost is never written.
class bp_dv_037_vm_ifetch_fault_test extends bp_dv_036_vm_sv39_test;
  `uvm_component_utils(bp_dv_037_vm_ifetch_fault_test)
  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
endclass

// Supplemental I2C model smoke test (BP-DV-027, outside the supplied plan).
class bp_i2c_write_read_test extends bp_base_test;
  `uvm_component_utils(bp_i2c_write_read_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    i2c_write_read_seq seq;
    bit timeout;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = i2c_write_read_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

    // On two cores hart 1 runs its I2C checks after hart 0, so do not rely
    // on the sequence's fixed delay: wait for tohost, bounded.
    timeout = 1'b0;
    fork : completion_or_timeout
      begin
        wait (env.sb.finished);
      end
      begin
        #(500us);
        timeout = 1'b1;
      end
    join_any
    disable completion_or_timeout;

    if (timeout)
      `uvm_fatal("I2C_TIMEOUT", "I2C test did not write tohost within 500 us")

    phase.drop_objection(this);
  endtask

endclass

// Preserve the previous UVM name while the I2C smoke test moves outside the
// BP-DV-004 slot assigned to Immediate Instructions by the test plan.
class bp_dv_004_i2c_write_read_test extends bp_i2c_write_read_test;
  `uvm_component_utils(bp_dv_004_i2c_write_read_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction
endclass

`endif
