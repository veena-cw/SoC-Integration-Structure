# ============================================================
# BlackParrot CPU RTL
# ============================================================
-f $REPO_ROOT/DSN/ip/compute/cpu/ip/cpu/rtl/cpu.f


# ============================================================
# Asynchronous FIFO
# ============================================================
+incdir+$REPO_ROOT/DSN/ip/compute/cpu/ip/async_fifo/rtl
-f $REPO_ROOT/DSN/ip/compute/cpu/ip/async_fifo/rtl/async_fifo.f


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
