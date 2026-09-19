# ==========================================
# AXI4 -> USB Integration RTL
# ==========================================

$REPO_ROOT/DSN/ip/memory_io/usb/dsn/rtl/axi4_usb_slave_top.sv
$REPO_ROOT/DSN/ip/memory_io/usb/ip/axi_slave/rtl/axi4_slave.sv

# ==========================================
# usb
# ==========================================

$REPO_ROOT/DSN/ip/memory_io/usb/ip/usb/rtl/usbh_host_defs.sv
$REPO_ROOT/DSN/ip/memory_io/usb/ip/usb/rtl/usbh_fifo.sv
$REPO_ROOT/DSN/ip/memory_io/usb/ip/usb/rtl/usbh_crc5.sv
$REPO_ROOT/DSN/ip/memory_io/usb/ip/usb/rtl/usbh_crc16.sv
$REPO_ROOT/DSN/ip/memory_io/usb/ip/usb/rtl/usbh_sie.sv
$REPO_ROOT/DSN/ip/memory_io/usb/ip/usb/rtl/usbh_host.sv


# ==========================================
# Reset
# ==========================================

$REPO_ROOT/DSN/ip/memory_io/usb/ip/reset_synchronizer/rtl/reset_synchronizer.sv

# ==========================================
# Asynchronous FIFO File List
# ==========================================


-f $REPO_ROOT/DSN/ip/memory_io/usb/ip/async_fifo/rtl/async.f
