// bedrock_txn.sv
// UVM sequence item modeling one BedRock mem_fwd / mem_rev beat.
// Field names/widths follow bp_common_bedrock_if.svh (msg_type, subop, addr, size, payload)
// from the BlackParrot RTL so this maps 1:1 onto the real interface.

`ifndef BEDROCK_TXN_SV
`define BEDROCK_TXN_SV

typedef enum logic [2:0] {
  E_MEM_RD        = 3'b000, // read request
  E_MEM_WR        = 3'b001, // write request
  E_MEM_UC_RD     = 3'b010, // uncached read
  E_MEM_UC_WR     = 3'b011, // uncached write
  E_MEM_PREFETCH  = 3'b100,
  E_MEM_AMO       = 3'b101
} bedrock_msg_type_e;

typedef enum logic {
  BEDROCK_FWD = 1'b0, // testbench -> DUT (mem_fwd)
  BEDROCK_REV = 1'b1  // DUT -> testbench (mem_rev)
} bedrock_dir_e;

class bedrock_txn extends uvm_sequence_item;

  rand bedrock_dir_e         dir;
  rand bedrock_msg_type_e    msg_type;
  rand bit [63:0]            addr;
  rand bit [3:0]             size;      // encoded size, bp_bedrock_msg_size_e style (1B..128B, pow2)
  rand bit [63:0]            data;
  rand bit                   is_boot;   // marks NBF/boot-loader beats so the driver can burst them
       bit                   error;     // set by monitor/driver on a bad handshake

  `uvm_object_utils_begin(bedrock_txn)
    `uvm_field_enum(bedrock_dir_e, dir, UVM_ALL_ON)
    `uvm_field_enum(bedrock_msg_type_e, msg_type, UVM_ALL_ON)
    `uvm_field_int(addr, UVM_ALL_ON)
    `uvm_field_int(size, UVM_ALL_ON)
    `uvm_field_int(data, UVM_ALL_ON)
    `uvm_field_int(is_boot, UVM_ALL_ON)
    `uvm_field_int(error, UVM_ALL_ON)
  `uvm_object_utils_end

  function new(string name = "bedrock_txn");
    super.new(name);
  endfunction

  //constraint c_size { size inside {0,1,2,3,4,5,6,7}; } // 1B..128B pow2 encoding

endclass

`endif
