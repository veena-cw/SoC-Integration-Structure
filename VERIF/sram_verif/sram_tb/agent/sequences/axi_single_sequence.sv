// ------------------------------------------------------------
// axi_single_sequence.sv
//
// One fully directed burst (used by the tests' write_burst /
// read_burst helpers). After start() returns, 'tr' holds the
// sent item including BRESP / RRESP / read data.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class axi_single_sequence extends axi_base_sequence;

    `uvm_object_utils(axi_single_sequence)

    bit                       wr;
    bit [`AXI_ADDR_WIDTH-1:0] a;
    bit [7:0]                 l;
    bit [2:0]                 sz;
    axi_burst_e               b         = AXI_INCR;
    axi_strb_mode_e           sm        = STRB_FULL;
    axi_seq_item              tr;

    // UVM constructor.
    function new(string name = "axi_single_sequence");
        super.new(name);
    endfunction

    // Send the one directed burst described by wr/a/l/sz/b/sm.
    virtual task body();
        directed(wr, a, l, sz, b, sm, tr);
    endtask

endclass
