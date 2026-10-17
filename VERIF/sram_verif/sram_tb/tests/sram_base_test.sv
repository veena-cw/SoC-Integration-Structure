// ------------------------------------------------------------
// sram_base_test.sv
//
// Builds sram_env, publishes the agent configs, resets both
// clock domains, runs run_main() (overridden by each test) and
// prints PASS/FAIL from the UVM error count.
//
// Plusargs (all optional):
//   +AXI_ZERO_DELAY        no random valid/ready gaps
//   +AXI_MAX_DELAY=<n>     max random gap (cycles) on every channel
//   +NUM_TXN=<n>           transaction count for random tests
//
// Optional AXI4 features -- sram_top supports none of them, so
// every SRAM test runs with all of them OFF. These plusargs exist
// to check the TB itself (or to reuse it on another slave):
//   +AXI4_EXCLUSIVE        exclusive accesses (AxLOCK=1)
//   +AXI4_SLAVE_EXCLUSIVE  expect an exclusive monitor (EXOKAY)
//   +AXI4_REGION           random AxREGION
//   +AXI4_USER             random AxUSER / WUSER
//   +AXI4_OUTSTANDING=<n>  up to n write and n read bursts in flight
//   +AXI4_RD_INTERLEAVE    accept interleaved R beats across IDs
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_base_test extends uvm_test;

    `uvm_component_utils(sram_base_test)

    sram_env           env;
    axi_agent_config   axi_cfg;
    reset_agent_config axi_rst_cfg;
    reset_agent_config sram_rst_cfg;

    int unsigned num_txn = 200;

    function new(string name = "sram_base_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Hook for tests to tune the AXI driver timing.
    virtual function void configure_axi(axi_agent_config cfg);
    endfunction

    function void build_phase(uvm_phase phase);
        int unsigned d;
        super.build_phase(phase);

        axi_cfg      = axi_agent_config  ::type_id::create("axi_cfg");
        axi_rst_cfg  = reset_agent_config::type_id::create("axi_rst_cfg");
        sram_rst_cfg = reset_agent_config::type_id::create("sram_rst_cfg");

        configure_axi(axi_cfg);
        if ($test$plusargs("AXI_ZERO_DELAY"))
            axi_cfg.set_zero_delays();
        if ($value$plusargs("AXI_MAX_DELAY=%d", d)) begin
            axi_cfg.max_addr_delay   = d;
            axi_cfg.max_wvalid_gap   = d;
            axi_cfg.max_bready_delay = d;
            axi_cfg.max_rready_delay = d;
        end
        void'($value$plusargs("NUM_TXN=%d", num_txn));

        if ($test$plusargs("AXI4_EXCLUSIVE"))       axi_cfg.exclusive_en     = 1'b1;
        if ($test$plusargs("AXI4_SLAVE_EXCLUSIVE")) axi_cfg.slave_exclusive  = 1'b1;
        if ($test$plusargs("AXI4_REGION"))          axi_cfg.region_en        = 1'b1;
        if ($test$plusargs("AXI4_USER"))            axi_cfg.user_en          = 1'b1;
        if ($test$plusargs("AXI4_RD_INTERLEAVE"))   axi_cfg.rd_interleave_ok = 1'b1;
        if ($value$plusargs("AXI4_OUTSTANDING=%d", d)) begin
            axi_cfg.max_outstanding_wr = (d == 0) ? 1 : d;
            axi_cfg.max_outstanding_rd = (d == 0) ? 1 : d;
        end

        uvm_resource_db#(axi_agent_config)::set(
            "uvm_test_top.env.axi_agent", "cfg", axi_cfg);
        uvm_resource_db#(reset_agent_config)::set(
            "uvm_test_top.env.axi_rst_agent", "cfg", axi_rst_cfg);
        uvm_resource_db#(reset_agent_config)::set(
            "uvm_test_top.env.sram_rst_agent", "cfg", sram_rst_cfg);

        env = sram_env::type_id::create("env", this);

        uvm_root::get().set_timeout(500ms, 1);
    endfunction

    function void end_of_elaboration_phase(uvm_phase phase);
        uvm_root::get().print_topology();
    endfunction

    // Reset both domains (power-on reset).
    task reset_dut();
        sram_reset_vseq rst = sram_reset_vseq::type_id::create("rst");
        rst.start(env.virt_seqr);
        repeat (5) @(posedge env.axi_agt.vif.aclk);
    endtask

    virtual task run_main();
    endtask

    task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        reset_dut();
        run_main();
        repeat (50) @(posedge env.axi_agt.vif.aclk);
        phase.drop_objection(this);
    endtask

    // ---- helpers for tests ------------------------------------
    task write_burst(bit [`AXI_ADDR_WIDTH-1:0] a, bit [7:0] l, bit [2:0] sz,
                     axi_burst_e b, axi_strb_mode_e sm, output axi_seq_item tr);
        axi_single_sequence q = axi_single_sequence::type_id::create("wr");
        q.wr = 1'b1; q.a = a; q.l = l; q.sz = sz; q.b = b; q.sm = sm;
        q.start(env.axi_agt.sequencer);
        tr = q.tr;
    endtask

    task read_burst(bit [`AXI_ADDR_WIDTH-1:0] a, bit [7:0] l, bit [2:0] sz,
                    axi_burst_e b, output axi_seq_item tr);
        axi_single_sequence q = axi_single_sequence::type_id::create("rd");
        q.wr = 1'b0; q.a = a; q.l = l; q.sz = sz; q.b = b;
        q.start(env.axi_agt.sequencer);
        tr = q.tr;
    endtask

    // Read back the exact burst shape of a previous write.
    task read_back(axi_seq_item wr, output axi_seq_item tr);
        read_burst(wr.addr, wr.len, wr.size, wr.burst, tr);
    endtask

    function axi_wr_rd_sequence wr_rd_seq(int unsigned n,
                                          bit [2:0] smin, bit [2:0] smax,
                                          bit [7:0] lmin, bit [7:0] lmax,
                                          bit fixed, bit incr, bit wrap,
                                          int aligned_mode = -1,
                                          int strb_mode    = STRB_FULL);
        axi_wr_rd_sequence s = axi_wr_rd_sequence::type_id::create("wr_rd");
        s.num_txn       = n;
        s.size_min      = smin;  s.size_max = smax;
        s.len_min       = lmin;  s.len_max  = lmax;
        s.allow_fixed   = fixed;
        s.allow_incr    = incr;
        s.allow_wrap    = wrap;
        s.aligned_mode  = aligned_mode;
        s.strb_mode_sel = strb_mode;
        return s;
    endfunction

    function void report_phase(uvm_phase phase);
        uvm_report_server svr = uvm_report_server::get_server();
        int unsigned errs = svr.get_severity_count(UVM_ERROR) +
                            svr.get_severity_count(UVM_FATAL);
        if (errs == 0)
            `uvm_info("TEST_RESULT", $sformatf("*** %s PASSED ***", get_type_name()), UVM_NONE)
        else
            `uvm_info("TEST_RESULT", $sformatf("*** %s FAILED (%0d errors) ***",
                                               get_type_name(), errs), UVM_NONE)
    endfunction

endclass
