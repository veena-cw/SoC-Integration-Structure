# ==========================================
# AXI4 Slave-> SRAM BRIDGE RTL
# ==========================================

$REPO_ROOT/DSN/ip/compute/sram/dsn/rtl/sram_top.sv
$REPO_ROOT/DSN/ip/compute/sram/ip/axi4_slave/rtl/axi4_slave.sv
$REPO_ROOT/DSN/ip/compute/sram/dsn/rtl/axi4s_sram_cdc/axi_sram_cdc.sv

# ==========================================
# Asynchronous FIFO File List
# ==========================================

-f $REPO_ROOT/DSN/ip/compute/sram/ip/async_fifo/rtl/async.f


# ==========================================
# SRAM IP File List
# ==========================================

-f $REPO_ROOT/DSN/ip/compute/sram/ip/sram/rtl/sram.f
