// bp_coverage.sv
// Portable functional coverage for the BP-DV test plan.
//
// This uses explicit hit counters instead of covergroup get_coverage().
// The simulator flow may parse covergroups without updating their coverage bins.
// A test case is counted as passing coverage only after a zero tohost write.

`ifndef BP_COVERAGE_SV
`define BP_COVERAGE_SV

class bp_coverage extends uvm_subscriber #(bedrock_txn);
  `uvm_component_utils(bp_coverage)

  // Rows marked "Valid" in the test plan. TBD rows are excluded.
  localparam int BP_DV_001 = 1;
  localparam int BP_DV_002 = 2;
  localparam int BP_DV_003 = 3;
  localparam int BP_DV_004 = 4;
  localparam int BP_DV_005 = 5;
  localparam int BP_DV_006 = 6;
  localparam int BP_DV_007 = 7;
  localparam int BP_DV_008 = 8;
  localparam int BP_DV_009 = 9;
  localparam int BP_DV_011 = 11;
  localparam int BP_DV_014 = 14;
  localparam int BP_DV_017 = 17;
  localparam int BP_DV_019 = 19;
  localparam int BP_DV_021 = 21;
  localparam int BP_DV_022 = 22;
  localparam int BP_DV_026 = 26;
  localparam int VALID_TEST_COUNT = 16;

  bit [1:0]  direction_hit;
  bit [5:0]  message_hit;
  bit [7:0]  size_hit;
  bit [1:0]  boot_hit;
  bit [1:0]  error_hit;
  bit [1:0]  finish_hit;
  bit [1:0][5:0] direction_message_hit;
  bit [1:0][5:0] boot_message_hit;

  bit [26:0] valid_test_hit;
  bit [26:0] passing_valid_test_hit;
  bit        pass_hit;
  bit        fail_hit;
  bit        finish_seen;

  int test_id;
  int unsigned n_transactions;
  int unsigned n_passes;

  function new(string name, uvm_component parent);
    super.new(name, parent);
    test_id = BP_DV_003;
    void'($value$plusargs("BP_TEST_ID=%d", test_id));
  endfunction

  function automatic bit is_valid_test(int id);
    case (id)
      BP_DV_001, BP_DV_002, BP_DV_003, BP_DV_004,
      BP_DV_005, BP_DV_006, BP_DV_007, BP_DV_008,
      BP_DV_009, BP_DV_011, BP_DV_014, BP_DV_017,
      BP_DV_019, BP_DV_021, BP_DV_022, BP_DV_026: return 1'b1;
      default: return 1'b0;
    endcase
  endfunction

  // All tracked vectors are at most 32 bits wide; using one packed formal
  // keeps this compatible with Verilator's open-array handling.
  function automatic int count_bits(input bit [31:0] bits);
    int count;
    count = 0;
    foreach (bits[i])
      if (bits[i]) count++;
    return count;
  endfunction

  function automatic real percentage(int hit_count, int total_count);
    if (total_count == 0)
      return 0.0;
    return (100.0 * hit_count) / total_count;
  endfunction

  function void write(bedrock_txn t);
    bit is_host_finish;
    bit passed;

    n_transactions++;

    if (t.dir inside {BEDROCK_FWD, BEDROCK_REV}) begin
      direction_hit[t.dir] = 1'b1;
      if (t.msg_type inside {E_MEM_RD, E_MEM_WR, E_MEM_UC_RD,
                             E_MEM_UC_WR, E_MEM_PREFETCH, E_MEM_AMO}) begin
        message_hit[t.msg_type] = 1'b1;
        direction_message_hit[t.dir][t.msg_type] = 1'b1;
        boot_message_hit[t.is_boot][t.msg_type] = 1'b1;
      end
    end

    if (t.size inside {[0:7]})
      size_hit[t.size] = 1'b1;
    boot_hit[t.is_boot] = 1'b1;
    error_hit[t.error] = 1'b1;

    is_host_finish = (t.dir == BEDROCK_FWD)
                   && (t.msg_type == E_MEM_WR)
                   && (t.addr == 64'h0010_2000);
    finish_hit[is_host_finish] = 1'b1;

    // Count the test-plan result once, at the first finish transaction.
    if (is_host_finish && !finish_seen) begin
      finish_seen = 1'b1;
      passed = (t.data == 64'h0);
      if (is_valid_test(test_id)) begin
        valid_test_hit[test_id] = 1'b1;
        if (passed) begin
          passing_valid_test_hit[test_id] = 1'b1;
          n_passes++;
          pass_hit = 1'b1;
        end
        else begin
          fail_hit = 1'b1;
        end
      end
    end
  endfunction

  function void report_phase(uvm_phase phase);
    int protocol_hits;
    int passing_tests;
    int observed_tests;
    bit [1:0] outcome_hits;

    super.report_phase(phase);
    protocol_hits = count_bits(direction_hit)
                  + count_bits(message_hit)
                  + count_bits(size_hit)
                  + count_bits(boot_hit)
                  + count_bits(error_hit)
                  + count_bits(finish_hit)
                  + count_bits(direction_message_hit)
                  + count_bits(boot_message_hit);
    observed_tests = count_bits(valid_test_hit);
    passing_tests = count_bits(passing_valid_test_hit);
    outcome_hits = {pass_hit, fail_hit};

    `uvm_info("COVERAGE",
      $sformatf("test_id=BP-DV-%03d transactions=%0d passes=%0d protocol=%0.2f%% valid_testcases=%0.2f%% passing_valid_testcases=%0.2f%% outcomes=%0.2f%%",
                test_id, n_transactions, n_passes,
                percentage(protocol_hits, 46),
                percentage(observed_tests, VALID_TEST_COUNT),
                percentage(passing_tests, VALID_TEST_COUNT),
                percentage(count_bits(outcome_hits), 2)), UVM_NONE)
  endfunction

endclass

`endif
