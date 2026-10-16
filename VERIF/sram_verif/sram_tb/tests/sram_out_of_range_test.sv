// ------------------------------------------------------------
// sram_out_of_range_test.sv
//
// Single-beat writes and reads outside [0x1070_0000 :
// 0x107F_FFFF] must return DECERR and must not touch the SRAM.
// The first and last in-range words are written before and
// read after, to catch address aliasing.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_out_of_range_test extends sram_base_test;

    `uvm_component_utils(sram_out_of_range_test)

    function new(string name = "sram_out_of_range_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual task run_main();
        axi_seq_item      wr, rd, first, last;
        bit [31:0] oor[] = '{32'h0000_0000,
                             `SRAM_BASE_ADDR - 32'h10,
                             `SRAM_END_ADDR  + 32'h1,
                             `SRAM_BASE_ADDR + 2 * `SRAM_SIZE_BYTES,   // would alias word 0
                             32'hFFFF_FFF0};
        write_burst(`SRAM_BASE_ADDR,       0, 4, AXI_INCR, STRB_FULL, first);
        write_burst(`SRAM_END_ADDR - 32'hF, 0, 4, AXI_INCR, STRB_FULL, last);

        foreach (oor[i]) begin
            write_burst(oor[i], 0, 4, AXI_INCR, STRB_FULL, wr);
            read_burst(oor[i], 0, 4, AXI_INCR, rd);
            if (wr.bresp != AXI_DECERR || rd.rresp[0] != AXI_DECERR)
                `uvm_error(get_type_name(), $sformatf("addr 0x%08h: BRESP=%0d RRESP=%0d, expected DECERR",
                                                      oor[i], wr.bresp, rd.rresp[0]))
        end

        read_back(first, rd);
        read_back(last,  rd);
    endtask

endclass
