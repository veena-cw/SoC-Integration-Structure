#!/bin/bash
export PROJ_ROOT="/home/cw001_sujatha/Desktop/Test1/SD_eMMC/SD_eMMC_2710/uvm-tools/uvm-tools"
export SD_EMMC_RTL="$PROJ_ROOT/sd_emmc_dsn/sd_emmc/rtl"
export ASYNC_FIFO_RTL="$PROJ_ROOT/sd_emmc_dsn/async_fifo/rtl"

mkdir -p build

# Populate build/rtl.f directly
find "$SD_EMMC_RTL" "$ASYNC_FIFO_RTL" -type f \( -name "*.v" -o -name "*.sv" -o -name "*.vh" -o -name "*.svh" -o -name "*.h" \) > build/rtl.f

echo "Local environment initialized. Filelist build/rtl.f generated."
