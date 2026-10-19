// ------------------------------------------------------------
// sram_smoke_test.sv
//
// Single 16-byte beats and a short INCR burst at the first,
// a middle and the last SRAM word, each written and read back.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_smoke_test extends sram_base_test;

    `uvm_component_utils(sram_smoke_test)

    // UVM constructor.
    function new(string name = "sram_smoke_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Single beats at the first / a middle / the last word, plus a 4-beat burst.
    virtual task run_main();
        axi_seq_item      wr, rd;
        bit [31:0] addrs[] = '{`SRAM_BASE_ADDR,
                               `SRAM_BASE_ADDR + 32'h10,
                               `SRAM_BASE_ADDR + 32'h8_0000,
                               `SRAM_END_ADDR  - 32'hF};
        foreach (addrs[i]) begin
            write_burst(addrs[i], 0, 4, AXI_INCR, STRB_FULL, wr);
            read_back(wr, rd);
        end
        write_burst(`SRAM_BASE_ADDR + 32'h100, 3, 4, AXI_INCR, STRB_FULL, wr);
        read_back(wr, rd);
    endtask

endclass
