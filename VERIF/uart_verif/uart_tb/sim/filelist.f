# ============================================================
# APB_UART_IP (apb_uart_tb) Filelist
# Order matters -- SystemVerilog is compiled top-to-bottom.
# ============================================================

# ---------- RTL ----------
# ---------- RTL ----------
../../../../DSN/ip/peripherals/uart/ip/uart/rtl/uart_baudgen.sv
../../../../DSN/ip/peripherals/uart/ip/uart/rtl/uart_fifo.sv
../../../../DSN/ip/peripherals/uart/ip/uart/rtl/uart_tx.sv
../../../../DSN/ip/peripherals/uart/ip/uart/rtl/uart_rx.sv
../../../../DSN/ip/peripherals/uart/ip/uart/rtl/uart_top.sv
../../../../DSN/ip/peripherals/uart/dsn/rtl/uart_apb_top.sv

# kept in the tree for reference, no longer compiled.

# ---------- Interfaces ----------
../interface/uart_if.sv
../interface/reset_if.sv

# ---------- Sequence items ----------
../agent/uart_seq_item.sv
../agent/reset_seq_item.sv

# ---------- Agent configs ----------
../agent/uart_agent_config.sv
../agent/reset_agent_config.sv

# ---------- Sequencers ----------
../agent/uart_sequencer.sv
../agent/reset_sequencer.sv

# ---------- RAL model (register pkg + block; no bus dependency) ----------
../ral/uart_ral_pkg.sv
../ral/uart_ral_block.sv

# ---------- RAL bus glue (needs uart_seq_item) ----------
../ral/uart_apb_adapter.sv
../ral/uart_apb_predictor.sv

# ---------- Drivers ----------
../agent/uart_driver.sv
../agent/reset_driver.sv

# ---------- Monitors ----------
../agent/uart_monitor.sv
../agent/reset_monitor.sv

# ---------- Agents ----------
../agent/uart_agent.sv
../agent/reset_agent.sv

# ---------- Per-agent sequences ----------
../agent/sequences/uart_base_sequence.sv
../agent/sequences/uart_apb_write_sequence.sv
../agent/sequences/uart_apb_read_sequence.sv
../agent/sequences/uart_config_sequence.sv
../agent/sequences/reset_sequence.sv

# ---------- RAL regression sequences (d1-only; needs ral_block) ----------
../ral/ral_sequence/uart_ral_sequences.sv

# ---------- Scoreboard / coverage ----------
../env/uart_scoreboard.sv
../env/uart_coverage.sv

# ---------- Virtual sequencer / virtual sequence ----------
../env/uart_virtual_sequencer.sv
../env/uart_virtual_sequence.sv



# ---------- Env ----------
../env/uart_env.sv

# ---------- Tests ----------
../tests/uart_base_test.sv
../tests/uart_smoke_test.sv
../tests/uart_reg_access_test.sv
../tests/uart_apb_transaction_test.sv
../tests/uart_stress_test.sv
../tests/uart_fifo_test.sv
../tests/uart_spec_test.sv
../tests/uart_error_test.sv
../tests/uart_irq_gen_test.sv

# ---------- Assertions (module; needs uart_if/reset_if) ----------
../assertions/uart_assertions.sv

# ---------- Top ----------
../top/tb_top.sv
