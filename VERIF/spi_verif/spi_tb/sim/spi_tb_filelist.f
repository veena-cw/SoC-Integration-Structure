
# ==================================================
# UVM
# ==================================================
$REPO_ROOT/VERIF/uvm-1.1d/src/uvm_pkg.sv


# I2C RTL(need to update by sravanthi)
#-f $REPO_ROOT/DSN/ip/peripherals/spi/dsn/rtl/spi_apb_top.f
$REPO_ROOT/DSN/ip/peripherals/spi/ip/spi/rtl/spi_fifo.sv
$REPO_ROOT/DSN/ip/peripherals/spi/ip/spi/rtl/spi_master.sv

../interface/spi_bus_if.sv
../interface/spi_master_ctrl_if.sv
../interface/spi_bus_word.sv
../interface/spi_master_rx_word.sv

../agent/master_agent/spi_master_item.sv
../agent/master_agent/spi_master_sequencer.sv
../agent/master_agent/spi_master_driver.sv
../agent/master_agent/spi_master_monitor.sv
../agent/master_agent/spi_master_basic_sequence.sv
../agent/master_agent/spi_master_agent.sv


#add the reset agent here

../agent/slave_agent/spi_slave_item.sv
../agent/slave_agent/spi_slave_sequencer.sv
../agent/slave_agent/spi_slave_driver.sv
../agent/slave_agent/spi_slave_monitor.sv
../agent/slave_agent/spi_slave_basic_sequence.sv
../agent/slave_agent/spi_slave_agent.sv


../env/spi_virtual_sequencer.sv
../env/spi_scoreboard.sv
../env/spi_env.sv



../tests/spi_base_test.sv
../tests/spi_full_duplex_vseq.sv
../tests/spi_full_duplex_test.sv
../tests/spi_m1_full_duplex_msb.sv
../tests/spi_m2_full_duplex_msb.sv
../tests/spi_m3_full_duplex_msb.sv


../top/top.sv
