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

// Supplemental I2C model smoke test (BP-DV-027, outside the supplied plan).
class bp_i2c_write_read_test extends bp_base_test;
  `uvm_component_utils(bp_i2c_write_read_test)

  function new(string name, uvm_component parent);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    i2c_write_read_seq seq;
    phase.raise_objection(this);

    apply_cpu_reset();
    seq = i2c_write_read_seq::type_id::create("seq");
    seq.start(env.bedrock_agt.bedrock_sqr);

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
