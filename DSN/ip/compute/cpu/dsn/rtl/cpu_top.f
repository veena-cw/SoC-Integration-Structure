# ============================================================
# BlackParrot CPU RTL
# ============================================================
-f $REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/cpu.f


# ============================================================
# Async FIFO include directory
# Required because bp_bedrock_axi4_bridge.sv contains:
# `include "async.sv"
# ============================================================
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/async_fifo/rtl


# ============================================================
# Async FIFO RTL
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/ip/async_fifo/rtl/async.sv



# ============================================================
# AXI4 Master
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/ip/axi4_master/rtl/axi4_master.sv


# ============================================================
# BedRock -> AXI4 Bridge
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/dsn/rtl/bp_cpu_axi4m_if/bp_bedrock_axi4_bridge.sv


# ============================================================
# Top Module
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/dsn/rtl/bp_cpu_axi4m_if/bp_bedrock_axi4_soc_top.sv
