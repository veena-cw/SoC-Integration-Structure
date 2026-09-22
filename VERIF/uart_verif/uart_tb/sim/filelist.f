# ============================================================
# APB_UART_IP (apb_uart_tb) Filelist
# Order matters -- SystemVerilog is compiled top-to-bottom.
# ============================================================

# ---------- RTL ----------
../rtl/uart_baudgen.sv
../rtl/uart_tx_fifo.sv
../rtl/uart_rx_fifo.sv
../rtl/uart_tx.sv
../rtl/uart_rx.sv
../rtl/uart_top.sv
../rtl/apb_uart_top.sv

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
../env/uart_ral_pkg.sv
../env/uart_ral_block.sv

# ---------- RAL bus glue (needs uart_seq_item) ----------
../env/uart_apb_adapter.sv
../env/uart_apb_predictor.sv

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
../env/uart_ral_sequences.sv

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

# ---------- Assertions (module; needs uart_if/reset_if) ----------
../assertions/uart_assertions.sv

# ---------- Top ----------
../top/tb_top.sv
