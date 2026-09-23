`include "uvm_macros.svh"
 
module top;
import uvm_pkg::*;

  //import spi_pkg::*;

  localparam int DATA_WIDTH = 8;
  localparam int NUM_CS     = 4;
  localparam int FIFO_DEPTH = 16;
  localparam int DIV_WIDTH  = 16;
  localparam int CS_DLY_W   = 8;

  logic clk_i;

  spi_master_ctrl_if master_if(.clk_i(clk_i));
  spi_bus_if         bus_if();

  // ----------------------------------------------------------
  // DUT: ONLY spi_master
  // ----------------------------------------------------------
  spi_master #(
    .DATA_WIDTH(DATA_WIDTH),
    .NUM_CS(NUM_CS),
    .FIFO_DEPTH(FIFO_DEPTH),
    .DIV_WIDTH(DIV_WIDTH),
    .CS_DLY_W(CS_DLY_W)
  ) dut (
    .clk_i                (clk_i),
    .rst_ni               (master_if.rst_ni),

    .cpol_i               (master_if.cpol_i),
    .cpha_i               (master_if.cpha_i),
    .lsb_first_i          (master_if.lsb_first_i),
    .clk_div_i            (master_if.clk_div_i),
    .cs_sel_i             (master_if.cs_sel_i),
    .cs_setup_cycles_i    (master_if.cs_setup_cycles_i),
    .cs_hold_cycles_i     (master_if.cs_hold_cycles_i),
    .cs_inter_byte_i      (master_if.cs_inter_byte_i),

    .tx_we_i              (master_if.tx_we_i),
    .tx_wdata_i           (master_if.tx_wdata_i),
    .tx_full_o            (master_if.tx_full_o),
    .tx_empty_o           (master_if.tx_empty_o),
    .tx_count_o           (master_if.tx_count_o),

    .rx_re_i              (master_if.rx_re_i),
    .rx_rdata_o           (master_if.rx_rdata_o),
    .rx_full_o            (master_if.rx_full_o),
    .rx_empty_o           (master_if.rx_empty_o),
    .rx_count_o           (master_if.rx_count_o),

    .start_i              (master_if.start_i),
    .busy_o               (master_if.busy_o),
    .xfer_done_o          (master_if.xfer_done_o),

    .sck_o                (bus_if.sck),
    .mosi_o               (bus_if.mosi),
    .miso_i               (bus_if.miso),
    .cs_n_o               (bus_if.cs_n)
  );

  // ----------------------------------------------------------
  // Main clock = 100 MHz
  // ----------------------------------------------------------
  initial begin
    clk_i = 1'b0;
    forever #5 clk_i = ~clk_i;
  end

  //waveform dump
    initial begin
  $dumpfile("dump.vcd");
  $dumpvars(0, tb_top);
end
  
  
  // ----------------------------------------------------------
  // Give interfaces to UVM and start test
  // ----------------------------------------------------------
  initial begin
    uvm_config_db#(virtual spi_master_ctrl_if)::set(
      null, "*", "master_vif", master_if);

    uvm_config_db#(virtual spi_bus_if)::set(
      null, "*", "bus_vif", bus_if);

    run_test("spi_full_duplex_test");
  end
  


endmodule
