// ------------------------------------------------------------
// sram_coverage.sv
//
// Functional coverage of the AXI bursts seen by the monitor.
//
// Covergroups are ignored by Verilator,
// so the bin_hits are explicit counters keyed by name. Every legal
// bin is registered up front in build_phase; report_phase prints
// the hit percentage and lists bin_hits that were never hit.
//
// Bins:
//   dir x burst x size          (RD/WR x FIXED/INCR/WRAP x 1..16 B)
//   dir x burst x length class  (only AXI-legal lengths per burst)
//   dir x aligned/unaligned x size  (no unaligned 1-byte)
//   aligned/unaligned x burst   (no unaligned WRAP)
//   start byte offset 0..15 in the 128-bit word
//   dir x response (OKAY / DECERR)
//   write strobe kind (full / partial / zero)
//   address region (below, first 4 KB, middle, last 4 KB, above)
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class sram_coverage extends uvm_subscriber #(axi_seq_item);

    `uvm_component_utils(sram_coverage)

    int unsigned bin_hits[string];

    function new(string name = "sram_coverage", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        string dirs[2]   = '{"RD", "WR"};
        string bursts[3] = '{"FIXED", "INCR", "WRAP"};
        super.build_phase(phase);

        foreach (dirs[d]) begin
            foreach (bursts[b])
                for (int s = 0; s <= 4; s++)
                    add($sformatf("dir_burst_size/%s/%s/%0dB", dirs[d], bursts[b], 1 << s));

            add({"dir_burst_len/", dirs[d], "/FIXED/len1"});
            add({"dir_burst_len/", dirs[d], "/FIXED/len2"});
            add({"dir_burst_len/", dirs[d], "/FIXED/len3-15"});
            add({"dir_burst_len/", dirs[d], "/FIXED/len16"});
            add({"dir_burst_len/", dirs[d], "/INCR/len1"});
            add({"dir_burst_len/", dirs[d], "/INCR/len2"});
            add({"dir_burst_len/", dirs[d], "/INCR/len3-15"});
            add({"dir_burst_len/", dirs[d], "/INCR/len16"});
            add({"dir_burst_len/", dirs[d], "/INCR/len17-64"});
            add({"dir_burst_len/", dirs[d], "/INCR/len65-255"});
            add({"dir_burst_len/", dirs[d], "/INCR/len256"});
            add({"dir_burst_len/", dirs[d], "/WRAP/len2"});
            add({"dir_burst_len/", dirs[d], "/WRAP/len4"});
            add({"dir_burst_len/", dirs[d], "/WRAP/len8"});
            add({"dir_burst_len/", dirs[d], "/WRAP/len16"});

            for (int s = 0; s <= 4; s++) begin
                add($sformatf("dir_align_size/%s/aligned/%0dB", dirs[d], 1 << s));
                if (s > 0) add($sformatf("dir_align_size/%s/unaligned/%0dB", dirs[d], 1 << s));
            end

            add({"dir_resp/", dirs[d], "/OKAY"});
            add({"dir_resp/", dirs[d], "/DECERR"});
        end

        add("align_burst/aligned/FIXED");
        add("align_burst/aligned/INCR");
        add("align_burst/aligned/WRAP");
        add("align_burst/unaligned/FIXED");
        add("align_burst/unaligned/INCR");

        for (int o = 0; o < 16; o++) add($sformatf("start_offset/%0d", o));

        add("wr_strobe/full");
        add("wr_strobe/partial");
        add("wr_strobe/zero");

        add("region/below_base");
        add("region/first_4KB");
        add("region/middle");
        add("region/last_4KB");
        add("region/above_end");
    endfunction

    function void add(string name);
        bin_hits[name] = 0;
    endfunction

    function void hit(string name);
        if (bin_hits.exists(name)) bin_hits[name]++;
    endfunction

    function string len_class(axi_seq_item t);
        int unsigned beats = 32'(t.len) + 1;
        if (beats == 1)   return "len1";
        if (beats == 2)   return "len2";
        if (t.burst == AXI_WRAP) return $sformatf("len%0d", beats);
        if (beats <= 15)  return "len3-15";
        if (beats == 16)  return "len16";
        if (beats <= 64)  return "len17-64";
        if (beats <= 255) return "len65-255";
        return "len256";
    endfunction

    function void write(axi_seq_item t);
        string dir   = t.write ? "WR" : "RD";
        string burst = t.burst.name().substr(4, t.burst.name().len() - 1);
        string al    = t.is_aligned() ? "aligned" : "unaligned";
        bit [1:0] resp;

        if (t.aborted) return;

        hit($sformatf("dir_burst_size/%s/%s/%0dB", dir, burst, t.num_bytes()));
        hit({"dir_burst_len/", dir, "/", burst, "/", len_class(t)});
        hit($sformatf("dir_align_size/%s/%s/%0dB", dir, al, t.num_bytes()));
        hit({"align_burst/", al, "/", burst});
        hit($sformatf("start_offset/%0d", t.addr[3:0]));

        resp = t.write ? t.bresp : (t.rresp.size() ? t.rresp[0] : AXI_OKAY);
        hit({"dir_resp/", dir, (resp == AXI_DECERR) ? "/DECERR" : "/OKAY"});

        if (t.write) begin
            bit all_full = 1'b1, all_zero = 1'b1;
            foreach (t.strb[i]) begin
                if (t.strb[i] != t.lane_mask(i)) all_full = 1'b0;
                if (t.strb[i] != 0)              all_zero = 1'b0;
            end
            hit(all_zero ? "wr_strobe/zero" : (all_full ? "wr_strobe/full" : "wr_strobe/partial"));
        end

        if      (t.addr <  `SRAM_BASE_ADDR)            hit("region/below_base");
        else if (t.addr >  `SRAM_END_ADDR)             hit("region/above_end");
        else if (t.addr <  `SRAM_BASE_ADDR + 32'h1000) hit("region/first_4KB");
        else if (t.addr >  `SRAM_END_ADDR  - 32'h1000) hit("region/last_4KB");
        else                                           hit("region/middle");
    endfunction

    function real get_coverage();
        int unsigned n_hit = 0;
        foreach (bin_hits[k]) if (bin_hits[k] > 0) n_hit++;
        return (bin_hits.size() == 0) ? 0.0 : 100.0 * n_hit / bin_hits.size();
    endfunction

    function void report_phase(uvm_phase phase);
        string missing = "";
        int unsigned n_hit = 0;
        foreach (bin_hits[k]) begin
            if (bin_hits[k] > 0) n_hit++;
            else             missing = {missing, "\n    ", k};
        end
        `uvm_info(get_type_name(),
            $sformatf("AXI functional coverage = %0.2f%% (%0d / %0d bin_hits)",
                      get_coverage(), n_hit, bin_hits.size()), UVM_NONE)
        if (missing != "")
            `uvm_info(get_type_name(), {"Bins not hit:", missing}, UVM_LOW)
    endfunction

endclass
