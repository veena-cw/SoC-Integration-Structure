# ============================================================
# Ethernet DMA + RGMII RTL
# ============================================================
../../../rtl/taxi/axis/rtl/taxi_axis_if.sv
../../../rtl/taxi/axi/rtl/taxi_axi_if.sv
../../../rtl/taxi/axi/rtl/taxi_axil_if.sv
../../../rtl/taxi/dma/rtl/taxi_dma_desc_if.sv
../../../rtl/taxi/prim/rtl/taxi_arbiter.sv
../../../rtl/taxi/prim/rtl/taxi_penc.sv
../../../rtl/taxi/lfsr/rtl/taxi_lfsr.sv
../../../rtl/taxi/sync/rtl/taxi_sync_signal.sv
../../../rtl/taxi/sync/rtl/taxi_sync_reset.sv
../../../rtl/taxi/io/rtl/taxi_ssio_ddr_in.sv
../../../rtl/taxi/io/rtl/taxi_iddr.sv
../../../rtl/taxi/io/rtl/taxi_oddr.sv
../../../rtl/taxi/stats/rtl/taxi_stats_collect.sv
../../../rtl/taxi/axis/rtl/taxi_axis_adapter.sv
../../../rtl/taxi/axis/rtl/taxi_axis_arb_mux.sv
../../../rtl/taxi/axis/rtl/taxi_axis_async_fifo.sv
../../../rtl/taxi/axis/rtl/taxi_axis_async_fifo_adapter.sv
../../../rtl/taxi/axis/rtl/taxi_axis_pad.sv
../../../rtl/taxi/axis/rtl/taxi_axis_null_src.sv
../../../rtl/taxi/axis/rtl/taxi_axis_tie.sv
../../../rtl/taxi/dma/rtl/taxi_axi_dma_rd.sv
../../../rtl/taxi/dma/rtl/taxi_axi_dma_wr.sv
../../../rtl/taxi/dma/rtl/taxi_axi_dma.sv
../../../rtl/taxi/eth/rtl/taxi_axis_gmii_rx.sv
../../../rtl/taxi/eth/rtl/taxi_axis_gmii_tx.sv
../../../rtl/taxi/eth/rtl/taxi_eth_mac_stats.sv
../../../rtl/taxi/eth/rtl/taxi_mac_ctrl_rx.sv
../../../rtl/taxi/eth/rtl/taxi_mac_ctrl_tx.sv
../../../rtl/taxi/eth/rtl/taxi_mac_pause_ctrl_rx.sv
../../../rtl/taxi/eth/rtl/taxi_mac_pause_ctrl_tx.sv
../../../rtl/taxi/eth/rtl/taxi_eth_mac_1g.sv
../../../rtl/taxi/eth/rtl/taxi_rgmii_phy_if.sv
../../../rtl/top/eth_cdc.sv
../../../rtl/taxi/eth/rtl/taxi_eth_mac_1g_rgmii.sv
../../../rtl/taxi/eth/rtl/taxi_eth_mac_1g_rgmii_fifo.sv
../../../rtl/top/axi4lite_dma_regbank_desc.sv
../../../rtl/top/eth_dma_mac_top.sv

# ============================================================
# UVM TB include directories
# ============================================================

# ============================================================
# UVM TB interfaces/package/top
# ============================================================
../interfaces/eth_axil_if.sv
../interfaces/eth_axi_if.sv
../interfaces/eth_reset_if.sv
../interfaces/eth_irq_if.sv
../interfaces/eth_rgmii_if.sv
../interfaces/eth_axis_tx_if.sv
../interfaces/eth_axis_rx_if.sv
../interfaces/eth_desc_debug_if.sv
../top/eth_uvm_pkg.sv
../top/eth_tb_top.sv
