# ==========================================
# ethernet Integration RTL
# ==========================================

$REPO_ROOT/DSN/ip/memory_io/ethernet/dsn/rtl/eth_top.sv

# ==========================================
# dma
# ==========================================
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/dma/rtl/taxi_axi_dma.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/dma/rtl/taxi_axi_dma_wr.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/dma/rtl/taxi_axi_dma_rd.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/dma/rtl/taxi_dma_desc_if.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/dma/rtl/taxi_axis_if.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/dma/rtl/taxi_axi_if.sv


# ==========================================
# ethernet
# ==========================================

$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_eth_mac_1g_rgmii_fifo.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_eth_mac_1g_rgmii.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_gmii_rx.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_gmii_tx.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_eth_mac_stats.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_async_fifo.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_sync_reset.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_sync_signal.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_if.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_arb_mux.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_arbiter.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_penc.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_stats_collect.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_mac_ctrl_tx.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_mac_ctrl_rx.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_mac_pause_ctrl_tx.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_mac_pause_ctrl_rx.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_lfsr.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_pad.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_null_src.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_tie.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_rgmii_phy_if.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_ssio_ddr_in.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_iddr.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_oddr.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_async_fifo_adapter.sv
$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/eth/rtl/taxi_axis_adapter.sv

# ==========================================
# Reset
# ==========================================

$REPO_ROOT/DSN/ip/memory_io/ethernet/ip/reset_synchronizer/rtl/reset_synchronizer.sv
