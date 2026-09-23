# CPU verification filelist for Verilator
# Paths are resolved from Makefile-exported environment variables.

+incdir+$UVM_HOME
+incdir+$TB_DIR/agent
+incdir+$TB_DIR/env
+incdir+$TB_DIR/interface
+incdir+$TB_DIR/package
+incdir+$TB_DIR/sequences
+incdir+$TB_DIR/tests
+incdir+$TB_DIR/top

# UVM 1.1d
$UVM_HOME/uvm_pkg.sv

# CPU DUT RTL
-f $CPU_FLIST

# DUT simulation support
$CPU_RTL_DIR/bp_common/src/v/bsg_rom_param.sv
$CPU_RTL_DIR/bp_top/test/common/bp_nonsynth_cfg_loader.sv
$CPU_RTL_DIR/bp_top/test/common/bp_nonsynth_host.sv
$CPU_RTL_DIR/bp_top/test/common/bp_nonsynth_dram.sv

# UVM verification environment
$TB_DIR/package/bp_uvm_pkg.sv
$TB_DIR/interface/bedrock_if.sv
$TB_DIR/interface/cpu_reset_if.sv
$TB_DIR/top/cpu_tb_top.sv
