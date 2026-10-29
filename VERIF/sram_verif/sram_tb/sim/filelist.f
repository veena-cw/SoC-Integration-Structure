# ============================================================
# sram_top UVM testbench filelist (paths relative to sim/)
# Order matters -- SystemVerilog is compiled top-to-bottom.
# ============================================================

# ---------- RTL ----------
../../../../DSN/ip/compute/sram/ip/sram/rtl/src/rtl/tc_sram.sv
# async.sv `includes synchronizer.v / wptr_handler.v / rptr_handler.v /
# fifo_mem.v (include dir passed by the Makefile), so those are not listed.
../../../../DSN/ip/compute/sram/ip/async_fifo/rtl/async.sv
../../../../DSN/ip/compute/sram/ip/axi4_slave/rtl/axi4_slave.sv
../../../../DSN/ip/compute/sram/dsn/rtl/axi4s_sram_cdc/axi_sram_cdc.sv
../../../../DSN/ip/compute/sram/dsn/rtl/sram_top.sv

# ---------- Interfaces ----------
../interface/axi_if.sv
../interface/reset_if.sv

# ---------- Types / sequence items ----------
../agent/axi_types.sv
../agent/axi_seq_item.sv
../agent/reset_seq_item.sv

# ---------- Agent configs ----------
../agent/axi_agent_config.sv
../agent/reset_agent_config.sv

# ---------- Sequencers ----------
../agent/axi_sequencer.sv
../agent/reset_sequencer.sv

# ---------- Drivers ----------
../agent/axi_driver.sv
../agent/reset_driver.sv

# ---------- Monitors ----------
../agent/axi_monitor.sv
../agent/reset_monitor.sv

# ---------- Agents ----------
../agent/axi_agent.sv
../agent/reset_agent.sv

# ---------- Sequences ----------
../agent/sequences/axi_base_sequence.sv
../agent/sequences/axi_single_sequence.sv
../agent/sequences/axi_write_sequence.sv
../agent/sequences/axi_read_sequence.sv
../agent/sequences/axi_wr_rd_sequence.sv
../agent/sequences/axi_random_sequence.sv
../agent/sequences/axi_exclusive_sequence.sv
../agent/sequences/reset_sequence.sv

# ---------- Scoreboard / coverage ----------
../env/sram_scoreboard.sv
../env/sram_coverage.sv

# ---------- Virtual sequencer / sequences ----------
../env/sram_virtual_sequencer.sv
../env/sram_virtual_sequence.sv

# ---------- Env ----------
../env/sram_env.sv

# ---------- CDC checks (bound into the async FIFOs by tb_top) ----------
../assertions/cdc_checks.sv

# ---------- Tests ----------
../tests/sram_base_test.sv
../tests/sram_smoke_test.sv
../tests/sram_aligned_test.sv
../tests/sram_unaligned_test.sv
../tests/sram_burst_length_test.sv
../tests/sram_burst_size_test.sv
../tests/sram_wrap_test.sv
../tests/sram_strobe_test.sv
../tests/sram_random_test.sv
../tests/sram_back2back_test.sv
../tests/sram_backpressure_test.sv
../tests/sram_out_of_range_test.sv
../tests/sram_oor_burst_test.sv
../tests/sram_reset_test.sv
../tests/sram_full_mem_test.sv
../tests/sram_rw_overlap_test.sv
../tests/sram_fsm_recovery_test.sv
../tests/sram_pipelined_test.sv
../tests/sram_wlast_err_test.sv
../tests/sram_4kb_cross_test.sv
../tests/sram_cdc_meta_test.sv
../tests/sram_arb_fairness_test.sv
../tests/sram_req_fifo_full_test.sv
../tests/sram_exclusive_test.sv

# ---------- Assertions ----------
../assertions/axi_assertions.sv

# ---------- Top ----------
../top/tb_top.sv
