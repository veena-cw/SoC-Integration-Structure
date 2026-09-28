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
# AHB3-Lite Master
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/ip/ahb3-lite_master/rtl/ahb3lite_master.sv


# ============================================================
# BedRock -> AHB3-Lite Bridge
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/dsn/rtl/bp_cpu_ahb3lite_if/bp_bedrock_ahb3lite_bridge.sv


# ============================================================
# Round-Robin Arbiter
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/ip/rr_arbiter/rtl/round_robin_arbiter_2to1.sv


# ============================================================
# Shared PLIC Integration Top
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/dsn/rtl/bp_plic_shared_top.sv


# ============================================================
# PLIC
# ============================================================
-f $REPO_ROOT/DSN/ip/compute/plic/ip/plic/rtl/plic.f


# ============================================================
# Top Module
# ============================================================
$REPO_ROOT/DSN/ip/compute/cpu/dsn/rtl/bp_cpu_axi4m_if/bp_bedrock_axi4_soc_top.sv
