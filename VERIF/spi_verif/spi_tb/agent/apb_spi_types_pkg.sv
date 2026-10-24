`include "uvm_macros.svh"

package apb_spi_types_pkg;
  import uvm_pkg::*;
 `uvm_analysis_imp_decl(_apb)
  `uvm_analysis_imp_decl(_mst)
  `uvm_analysis_imp_decl(_mst_start)
  `uvm_analysis_imp_decl(_slv)
  `uvm_analysis_imp_decl(_rst)

  typedef enum bit {
    COV_DISABLE = 1'b0,
    COV_ENABLE  = 1'b1
  } cov_mode_e;

  typedef enum bit {
  SLV_BYTE     = 1'b0,
  SLV_RX_PROBE = 1'b1
} spi_slave_item_kind_e;

  //parameter time CLK_PERIOD = 10ns;
 // parameter int DATA_WIDTH = 8;

  /*parameter int unsigned FIFO_DEPTH     = 16;
  parameter bit [7:0]    SLAVE_TX_CONST = 8'h0C;
  parameter bit [31:0]   ID_VALUE       = 32'h5910_017E;
  parameter bit [31:0]   VERSION_VALUE  = 32'h0001_0000;

  parameter bit [15:0] ADDR_CTRL      = 16'h0000;
  parameter bit [15:0] ADDR_STATUS    = 16'h0004;
  parameter bit [15:0] ADDR_IRQ_STAT  = 16'h0008;
  parameter bit [15:0] ADDR_IRQ_MASK  = 16'h000C;
  parameter bit [15:0] ADDR_CLK_DIV   = 16'h0010;
  parameter bit [15:0] ADDR_TX_DATA   = 16'h0014;
  parameter bit [15:0] ADDR_RX_DATA   = 16'h0018;
  parameter bit [15:0] ADDR_FIFO_LVL  = 16'h001C;
  parameter bit [15:0] ADDR_ID        = 16'h0020;
  parameter bit [15:0] ADDR_VERSION   = 16'h0024;
  parameter bit [15:0] ADDR_SCRATCH0  = 16'h0028;
  parameter bit [15:0] ADDR_SCRATCH1  = 16'h002C;
  parameter bit [15:0] ADDR_SCRATCH2  = 16'h0030;
  parameter bit [15:0] ADDR_SCRATCH3  = 16'h0034;
  parameter bit [15:0] ADDR_SCRATCH4  = 16'h0038;
  parameter bit [15:0] ADDR_SCRATCH5  = 16'h003C;
*/
endpackage

