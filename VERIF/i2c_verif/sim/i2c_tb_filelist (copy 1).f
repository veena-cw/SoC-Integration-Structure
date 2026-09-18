# I2C RTL
-f ../../../../DSN/ip/peripherals/i2c/dsn/ip/apb_to_i2c_bridge.f

# ==========================================
# I2C TB
# ==========================================

../i2c_tb/ral/apb_i2c_ral_pkg.sv
../i2c_tb/ral/apb_i2c_ral_block.sv
../i2c_tb/ral/apb_i2c_ral_metadata_pkg.sv
../i2c_tb/interface/apb_i2c_apb_if.sv
../i2c_tb/agent/apb_i2c_apb_item.sv
../i2c_tb/ral/apb_i2c_apb_adapter.sv
../i2c_tb/ral/apb_i2c_apb_predictor.sv
../i2c_tb/interface/apb_i2c_reset_if.sv
../i2c_tb/agent/apb_i2c_reset_agent.sv
../i2c_tb/env/apb_i2c_scoreboard.sv
../i2c_tb/ral/apb_i2c_ral_sequences.sv
../i2c_tb/agent/apb_i2c_apb_sequencer.sv
../i2c_tb/agent/apb_i2c_apb_driver.sv
../i2c_tb/agentral/apb_i2c_apb_monitor.sv
../i2c_tb/agent/apb_i2c_apb_agent.sv
../i2c_tb/env/apb_i2c_ral_env.sv
../i2c_tb/ral/apb_i2c_ral_test.sv
../i2c_tb/top/test_top.sv
