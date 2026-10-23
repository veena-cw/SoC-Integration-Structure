// Paths are relative to csi2_tb/sim/.
+incdir+../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx
+incdir+../env
+incdir+../interface
+incdir+../agent/axi_agent
+incdir+../agent/reset_agent
+incdir+../agent/rx_agent
+incdir+../tests

// Compile-time design profile.  The current repository enables RAW7.
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/ifdef.sv

// Shared verification definitions and interfaces.
../env/csi2_types_pkg.sv
../interface/csi2_reset_if.sv
../interface/csi2_axi_write_if.sv
../interface/csi2_rx_status_if.sv
c_phy_bfm_if.sv

// Current RX RTL hierarchy.  RTL files are referenced only; they are not
// modified by the verification environment.
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/async_fifo2_1.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/lane_merging.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/sync_fifo.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/crc.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/llp.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/rx_buffer_register_3.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/rx_byte_counter_2.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/bpuf_2.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/axim.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/apb_slave.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/csi2_reg.sv
../../../../DSN/ip/peripherals/mipi_csi/ip/rtl/rx/csi2_rx_top.sv

// UVM environment and RX integration top.
../env/csi2_uvm_pkg.sv
../top/csi2_tb_top.sv
