# ==========================================
# UVM
# ==========================================

+incdir+/home/cw028_harish/uvm-1.1d/src
/home/cw028_harish/uvm-1.1d/src/uvm_pkg.sv



# I2C RTL
-f $REPO_ROOT/DSN/ip/peripherals/i2c/dsn/rtl/i2c_top.f



# I2C TB
../ral/apb_i2c_ral_pkg.sv
../ral/apb_i2c_ral_block.sv
../ral/apb_i2c_ral_metadata_pkg.sv

../interface/apb_i2c_apb_if.sv
../interface/apb_i2c_reset_if.sv

../agent/apb_i2c_apb_item.sv
../agent/apb_i2c_reset_agent.sv
../agent/apb_i2c_apb_sequencer.sv
../agent/apb_i2c_apb_driver.sv
../agent/apb_i2c_apb_monitor.sv
../agent/apb_i2c_apb_agent.sv



../ral/apb_i2c_apb_adapter.sv
../ral/apb_i2c_apb_predictor.sv
../ral/apb_i2c_ral_sequences.sv

../env/apb_i2c_scoreboard.sv
../env/apb_i2c_ral_env.sv
../tests/apb_i2c_ral_test.sv



../top/test_top.sv
