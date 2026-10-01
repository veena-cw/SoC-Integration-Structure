// bp_uvm_pkg.sv
// Compile-time defaults shared by the parameterized CPU AXI UVM classes.
`ifndef CPU_AXI_DATA_WIDTH
  `define CPU_AXI_DATA_WIDTH 128
`endif
`ifndef CPU_AXI_ADDR_WIDTH
  `define CPU_AXI_ADDR_WIDTH 64
`endif
`ifndef CPU_AXI_ID_WIDTH
  `define CPU_AXI_ID_WIDTH 4
`endif
package bp_uvm_pkg;
  import uvm_pkg::*;
  `include "uvm_macros.svh"

  // The no-DPI UVM component-name checker reports this informational
  // compatibility warning through a uvm_object visitor, so a component
  // report-action plusarg does not match it.  Catch only this warning;
  // leave all other UVM warnings, errors, and fatals visible.
  class bp_uvm_name_warning_catcher extends uvm_report_catcher;
    function new(string name = "bp_uvm_name_warning_catcher");
      super.new(name);
    endfunction

    virtual function action_e catch();
      if (get_id() == "UVM/COMP/NAME")
        return CAUGHT;
      return THROW;
    endfunction
  endclass

  `include "bedrock_txn.sv"
  `include "cpu_reset_agent.sv"
  `include "bedrock_driver.sv"
  `include "bedrock_monitor.sv"
  `include "bp_coverage.sv"
  `include "bedrock_agent.sv"
  `include "axi_agent/cpu_axi_txn.sv"
  `include "axi_agent/cpu_axi_mem_model.sv"
  `include "axi_agent/cpu_axi_agent_sequencer.sv"
  `include "axi_agent/cpu_axi_agent_driver.sv"
  `include "axi_agent/cpu_axi_agent_monitor.sv"
  `include "axi_agent/cpu_axi_agent.sv"
  `include "cpu_axi_coverage.sv"
  `include "nbf_load_seq.sv"
  `include "alu_test_seq.sv"
  `include "immediate_test_seq.sv"
  `include "shift_test_seq.sv"
  `include "muldiv_test_seq.sv"
  `include "load_add_store_test_seq.sv"
  `include "jump_test_seq.sv"
  `include "branch_test_seq.sv"
  `include "memory_widths_test_seq.sv"
  `include "cache_miss_test_seq.sv"
  `include "cache_burst_test_seq.sv"
  `include "cache_replacement_test_seq.sv"
  `include "dram_latency_test_seq.sv"
  `include "memory_backpressure_test_seq.sv"
  `include "illegal_trap_test_seq.sv"
  `include "ecall_ebreak_test_seq.sv"
  `include "compressed_test_seq.sv"
  `include "multicore_shared_memory_test_seq.sv"
  `include "atomic_test_seq.sv"
  `include "i2c_write_read_seq.sv"
  `include "axi_unaligned_test_seq.sv"
  `include "scoreboard.sv"
  `include "bp_env.sv"
  `include "bp_tests.sv"

endpackage
