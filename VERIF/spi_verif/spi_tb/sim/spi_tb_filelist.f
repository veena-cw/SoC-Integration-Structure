
# ==================================================
# UVM
# ==================================================
#$REPO_ROOT/VERIF/uvm-1.1d/src/uvm_pkg.sv


# ============================================================
# APB-SPI Design + UVM Testbench Filelist
# Run compilation from spi_tb/sim
# ============================================================

# ---------- SPI Design ----------
-f ../../../../DSN/ip/peripherals/spi/dsn/rtl/spi_apb_top.f

# ---------- Interfaces ----------
../interface/apb_if.sv
../interface/reset_if.sv
../interface/spi_master_if.sv
../interface/spi_slave_if.sv

# ---------- Shared Types ----------
../agent/apb_spi_types_pkg.sv


# ---------- Sequence Items ----------
../agent/apb_seq_item.sv
../agent/reset_seq_item.sv
../agent/spi_master_seq_item.sv
../agent/spi_slave_seq_item.sv

# ---------- Agent Configurations ----------
../agent/apb_agent_config.sv
../agent/reset_agent_config.sv
../agent/spi_master_agent_config.sv
../agent/spi_slave_agent_config.sv

# ---------- Sequencers ----------
../agent/apb_sequencer.sv
../agent/reset_sequencer.sv

# ---------- RAL Model ----------
../ral/apb_spi_ral_pkg.sv
../ral/apb_spi_ral_block.sv
../ral/apb_spi_apb_adapter.sv
../ral/apb_spi_apb_predictor.sv

# ---------- Drivers ----------
../agent/apb_driver.sv
../agent/reset_driver.sv

# ---------- Monitors ----------
../agent/apb_monitor.sv
../agent/reset_monitor.sv
../agent/spi_master_monitor.sv
../agent/spi_slave_monitor.sv

# ---------- Agents ----------
../agent/apb_agent.sv
../agent/reset_agent.sv
../agent/spi_master_agent.sv
../agent/spi_slave_agent.sv

# ---------- Agent Sequences ----------
../agent/sequences/apb_spi_base_sequence.sv
../agent/sequences/apb_spi_apb_write_sequence.sv
../agent/sequences/apb_spi_apb_read_sequence.sv
../agent/sequences/apb_spi_config_sequence.sv
../agent/sequences/reset_sequence.sv

# ---------- RAL Sequence ----------
../ral/ral_sequence/apb_spi_ral_sequence.sv

# ---------- Environment Components ----------
../env/apb_spi_scoreboard.sv
../env/apb_spi_coverage.sv
../env/apb_spi_virtual_sequencer.sv
../env/apb_spi_virtual_sequence.sv
../env/apb_spi_env.sv

# ---------- Tests ----------
../tests/apb_spi_base_test.sv
../tests/apb_spi_smoke_test.sv
../tests/apb_spi_reset_test.sv
../tests/apb_spi_reg_access_test.sv
../tests/apb_spi_ral_test.sv
../tests/apb_spi_fifo_test.sv
../tests/apb_spi_irq_test.sv
../tests/apb_spi_mode_test.sv
../tests/apb_spi_clk_div_test.sv
../tests/apb_spi_cs_test.sv
../tests/apb_spi_burst_test.sv
../tests/apb_spi_stress_test.sv

# ---------- Testbench Top ----------
../top/tb_top.sv
