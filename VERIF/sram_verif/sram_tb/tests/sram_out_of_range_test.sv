// ------------------------------------------------------------
// sram_out_of_range_test.sv
//
// Single-beat writes and reads outside [0x1070_0000 :
// 0x107F_FFFF] must return DECERR and must not touch the SRAM.
// The first and last in-range words are written before and
// read after, to catch address aliasing. Each out-of-range write
// is followed directly by an in-range write that must get OKAY,
// so the slave's BRESP / error state goes DECERR -> OKAY (no
// sticky error).
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_out_of_range_test extends sram_base_test;

    `uvm_component_utils(sram_out_of_range_test)

    // UVM constructor.
    function new(string name = "sram_out_of_range_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // Single beats outside the window (DECERR), each followed by an
    // in-range write (OKAY); edge words checked for aliasing.
    virtual task run_main();
        axi_seq_item      wr, rd, ok_wr, first, last;
        bit [31:0] oor[] = '{32'h0000_0000,
                             `SRAM_BASE_ADDR - 32'h10,
                             `SRAM_END_ADDR  + 32'h1,
                             `SRAM_BASE_ADDR + 2 * `SRAM_SIZE_BYTES,   // would alias word 0
                             32'hFFFF_FFF0};
        write_burst(`SRAM_BASE_ADDR,       0, 4, AXI_INCR, STRB_FULL, first);
        write_burst(`SRAM_END_ADDR - 32'hF, 0, 4, AXI_INCR, STRB_FULL, last);

        foreach (oor[i]) begin
            write_burst(oor[i], 0, 4, AXI_INCR, STRB_FULL, wr);
            // DECERR -> OKAY: the next in-range write must not inherit the error.
            write_burst(`SRAM_BASE_ADDR + 32'h100 + i * 32'h10, 0, 4, AXI_INCR, STRB_FULL, ok_wr);
            read_burst(oor[i], 0, 4, AXI_INCR, rd);
            if (wr.bresp != AXI_DECERR || rd.rresp[0] != AXI_DECERR)
                `uvm_error(get_type_name(), $sformatf("addr 0x%08h: BRESP=%0d RRESP=%0d, expected DECERR",
                                                      oor[i], wr.bresp, rd.rresp[0]))
            if (ok_wr.bresp != AXI_OKAY)
                `uvm_error(get_type_name(), $sformatf("in-range write 0x%08h after DECERR: BRESP=%0d, expected OKAY",
                                                      ok_wr.addr, ok_wr.bresp))
            read_back(ok_wr, rd);
        end

        read_back(first, rd);
        read_back(last,  rd);
    endtask

endclass
