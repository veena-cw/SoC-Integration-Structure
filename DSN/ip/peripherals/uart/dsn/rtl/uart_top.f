# ==========================================
# APB -> UART BRIDGE RTL
# ==========================================

$REPO_ROOT/DSN/ip/peripherals/uart/dsn/rtl/uart_apb_top.sv

# ==========================================
# UART
# ==========================================

$REPO_ROOT/DSN/ip/peripherals/uart/ip/uart/rtl/baud_gen.sv
$REPO_ROOT/DSN/ip/peripherals/uart/ip/uart/rtl/uart_fifo.sv
$REPO_ROOT/DSN/ip/peripherals/uart/ip/uart/rtl/uart_tx.sv
$REPO_ROOT/DSN/ip/peripherals/uart/ip/uart/rtl/uart_rx.sv
$REPO_ROOT/DSN/ip/peripherals/uart/ip/uart/rtl/uart_top.sv


# ==========================================
# Asynchronous FIFO File List
# ==========================================

-f $REPO_ROOT/DSN/ip/peripherals/uart/ip/async_fifo/rtl/async.f
