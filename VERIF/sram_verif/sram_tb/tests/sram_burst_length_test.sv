// ------------------------------------------------------------
// sram_burst_length_test.sv
//
// AxLEN sweep:
//   INCR  : 1..17 beats and 32/33/64/65/128/129/255/256 beats,
//           aligned and unaligned, full width and narrow (1 B)
//   FIXED : 1..16 beats
//   WRAP  : 2, 4, 8, 16 beats
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_burst_length_test extends sram_base_test;

    `uvm_component_utils(sram_burst_length_test)

    // UVM constructor.
    function new(string name = "sram_burst_length_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    // AxLEN sweep for INCR (aligned/unaligned/narrow), FIXED and WRAP.
    virtual task run_main();
        axi_seq_item      wr, rd;
        int               lens[$];
        bit [31:0]        a = `SRAM_BASE_ADDR + 32'h1_0000;

        for (int l = 0; l <= 16; l++) lens.push_back(l);
        lens = {lens, 31, 32, 63, 64, 127, 128, 254, 255};

        foreach (lens[i]) begin
            `uvm_info(get_type_name(), $sformatf("INCR len=%0d (%0d beats)", lens[i], lens[i] + 1), UVM_LOW)
            write_burst(a,         lens[i], 4, AXI_INCR, STRB_FULL, wr);  read_back(wr, rd);
            write_burst(a + 32'h5, lens[i], 3, AXI_INCR, STRB_FULL, wr);  read_back(wr, rd);
            write_burst(a + 32'h3, lens[i], 0, AXI_INCR, STRB_FULL, wr);  read_back(wr, rd);
            a += 32'h1000;
        end

        for (int l = 0; l <= 15; l++) begin
            write_burst(a + l * 32'h10, l, 4, AXI_FIXED, STRB_FULL, wr);
            read_back(wr, rd);
        end

        for (int k = 0; k < 4; k++) begin
            int l = (2 << k) - 1;
            write_burst(a + 32'h800 + 32'h30, l, 4, AXI_WRAP, STRB_FULL, wr);
            read_back(wr, rd);
        end
    endtask

endclass
