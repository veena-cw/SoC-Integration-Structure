# ============================================================
# TPU Core RTL
# ============================================================
-f $REPO_ROOT/DSN/ip/compute/tpu/ip/tpu/rtl/tpu.f


# ============================================================
# Asynchronous FIFO
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/ip/async_fifo/rtl/fifo_mem.v
$REPO_ROOT/DSN/ip/compute/tpu/ip/async_fifo/rtl/rptr_handler.v
$REPO_ROOT/DSN/ip/compute/tpu/ip/async_fifo/rtl/synchronizer.v
$REPO_ROOT/DSN/ip/compute/tpu/ip/async_fifo/rtl/wptr_handler.v
$REPO_ROOT/DSN/ip/compute/tpu/ip/async_fifo/rtl/async.sv


# ============================================================
# AXI4-Lite Slave
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/ip/axi4lite_slave/rtl/axi4lite_slave.sv


# ============================================================
# AXI4 Master
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/ip/axi4_master/rtl/axi4_master.sv


# ============================================================
# TPU Host Interface
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_sync_2ff.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_rst_sync.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_reg_cdc.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_axi_cdc.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_command_scheduler.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_data_formatter.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_dma_engine.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_host_interface.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_register_bank.sv


# ============================================================
# Modified Unified Buffer
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/unified_buffer.sv


# ============================================================
# TPU Top-Level Integration
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/tpu_top.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/tpu_host_top.sv
