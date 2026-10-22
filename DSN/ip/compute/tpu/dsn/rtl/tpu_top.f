# ============================================================
# TPU Core RTL
# ============================================================
-f $REPO_ROOT/DSN/ip/compute/tpu/ip/tpu/rtl/tpu.f


# ============================================================
# TPU Host Interface
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_command_scheduler.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_data_formatter.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_dma_engine.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_host_interface.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/tpu_register_bank.sv

# ============================================================
# Modified UB for TPU Host Interface
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/host_if/unified_buffer.sv


# ============================================================
# TPU Top-Level Integration with modified tpu top for host Interface
# ============================================================
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/tpu_top.sv
$REPO_ROOT/DSN/ip/compute/tpu/dsn/rtl/tpu_host_top.sv
