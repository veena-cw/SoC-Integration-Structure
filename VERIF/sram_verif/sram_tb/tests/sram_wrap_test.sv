// ------------------------------------------------------------
// sram_wrap_test.sv
//
// WRAP bursts: every legal length (2/4/8/16 beats) x every size
// x every start position inside the wrap container, so the wrap
// point is hit at each beat index.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_wrap_test extends sram_base_test;

    `uvm_component_utils(sram_wrap_test)

    function new(string name = "sram_wrap_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual task run_main();
        axi_seq_item      wr, rd;
        bit [31:0]        container;
        for (int sz = 0; sz <= 4; sz++) begin
            for (int k = 0; k < 4; k++) begin
                int l = (2 << k) - 1;                    // 1, 3, 7, 15
                container = `SRAM_BASE_ADDR + 32'h8_0000 + (sz * 4 + k) * 32'h400;
                `uvm_info(get_type_name(), $sformatf("WRAP size=%0d beats=%0d", sz, l + 1), UVM_LOW)
                for (int p = 0; p <= l; p++) begin
                    write_burst(container + p * (1 << sz), l, sz, AXI_WRAP, STRB_FULL, wr);
                    read_back(wr, rd);
                end
            end
        end
    endtask

endclass
