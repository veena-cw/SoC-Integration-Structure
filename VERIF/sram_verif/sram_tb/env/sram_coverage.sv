// ------------------------------------------------------------
// sram_coverage.sv
//
// Functional coverage of sram_top, as SystemVerilog covergroups.
// With --coverage-user, Verilator 5.052 writes every bin to the run's
// coverage .dat file; sim/Makefile merges them over a regression
// (make regress / make cov) with verilator_coverage, and
// sim/cov_report.py lists the bins that were never hit.
//
// Inputs (analysis imps, connected by sram_env):
//   axi_imp      <- axi_monitor        every burst (aborted ones too)
//   axi_rst_imp  <- axi reset_monitor  aresetn assert / deassert
//   sram_rst_imp <- sram reset_monitor sram_resetn assert / deassert
//
// Covergroups (all always on):
//   cg_sram_burst     dir x burst x size, dir x burst-length class,
//                     dir x aligned/unaligned x size, aligned x burst,
//                     start byte offset 0..15, dir x response,
//                     dir x address region
//   cg_sram_id        dir x AxID (all 16 IDs)
//   cg_sram_sideband  AxCACHE (AXI4 legal values), dir x AxPROT, AxQOS
//   cg_sram_wstrb     write strobe kind (full / partial / zero)
//   cg_sram_handshake AxVALID wait for AxREADY, W vs AW lead, W gaps,
//                     dir x B/R back-pressure, dir x idle cycles
//                     before the burst
//   cg_sram_trans     transitions between consecutive bursts:
//                     RD/WR order, burst type, OKAY<->DECERR, and the
//                     address hazard with the previous burst
//                     (RAW / WAR / WAW / RAR) x back-to-back
//   cg_sram_reset     per domain: pulse length, traffic in flight
//                     (AXI: aborted bursts; SRAM: bursts completed
//                     while sram_resetn was low)
//   cg_sram_rst_order which domain left reset first
//
// Optional AXI4 features: their covergroups live in wrapper
// classes that are only built when the feature is on in the agent
// config, so a disabled feature adds no (unhittable) bins:
//   exclusive_en -> cg_sram_excl, region_en -> cg_sram_region,
//   user_en -> cg_sram_user, pipelined() -> cg_sram_pipe
//
// There are no binsof()/cross bin selects in Verilator 5.052, so crosses
// that would contain illegal AXI combinations are built from
// encoded coverpoints whose bins list only the legal values (e.g.
// cp_len = burst x length class). With TB_COV_CROSS_SELECT (other
// simulators, see tb_tool_defines.svh) the same space is also
// covered as full crosses with ignore_bins.
//
// Bins are named after the case they cover; the covergroup type
// name (cg_sram_*) is the key in the coverage database, so keep it
// unique.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

`uvm_analysis_imp_decl(_cov_axi)
`uvm_analysis_imp_decl(_cov_axi_rst)
`uvm_analysis_imp_decl(_cov_sram_rst)

// ---- Optional-feature covergroups ------------------------------
class sram_excl_cov;
    bit       dir;
    bit [1:0] resp;
    int       beats;

    covergroup cg_sram_excl;
        option.per_instance = 1;
        cp_dir:   coverpoint dir   { bins RD = {0}; bins WR = {1}; }
        cp_resp:  coverpoint resp  { bins OKAY = {AXI_OKAY}; bins EXOKAY = {AXI_EXOKAY}; }
        cp_beats: coverpoint beats { bins b1 = {1}; bins b2 = {2}; bins b4 = {4};
                                     bins b8 = {8}; bins b16 = {16}; }
        x_dir_resp: cross cp_dir, cp_resp;
    endgroup

    function new();
        cg_sram_excl = new();
    endfunction
endclass

class sram_region_cov;
    bit                          dir;
    bit [`AXI_REGION_WIDTH-1:0]  region;

    covergroup cg_sram_region;
        option.per_instance = 1;
        cp_dir:    coverpoint dir    { bins RD = {0}; bins WR = {1}; }
        cp_region: coverpoint region { bins r[] = {[0 : (1 << `AXI_REGION_WIDTH) - 1]}; }
        x_dir_region: cross cp_dir, cp_region;
    endgroup

    function new();
        cg_sram_region = new();
    endfunction
endclass

class sram_user_cov;
    bit                        dir;
    bit [`AXI_USER_WIDTH-1:0]  auser;

    covergroup cg_sram_user;
        option.per_instance = 1;
        cp_dir:   coverpoint dir   { bins RD = {0}; bins WR = {1}; }
        cp_auser: coverpoint auser { bins u[] = {[0 : (1 << `AXI_USER_WIDTH) - 1]}; }
        x_dir_auser: cross cp_dir, cp_auser;
    endgroup

    function new();
        cg_sram_user = new();
    endfunction
endclass

class sram_pipe_cov;
    bit          dir;
    int unsigned inflight;
    bit          ooo;

    covergroup cg_sram_pipe;
        option.per_instance = 1;
        cp_dir:      coverpoint dir      { bins RD = {0}; bins WR = {1}; }
        cp_inflight: coverpoint inflight { bins none = {0}; bins one = {1};
                                           bins two_three = {[2:3]}; bins four_plus = {[4:$]}; }
        cp_ooo:      coverpoint ooo      { bins in_order = {0}; bins out_of_order = {1}; }
        x_dir_inflight: cross cp_dir, cp_inflight;
    endgroup

    function new();
        cg_sram_pipe = new();
    endfunction
endclass

// ---- Main coverage component -----------------------------------
class sram_coverage extends uvm_component;

    `uvm_component_utils(sram_coverage)

    uvm_analysis_imp_cov_axi      #(axi_seq_item,   sram_coverage) axi_imp;
    uvm_analysis_imp_cov_axi_rst  #(reset_seq_item, sram_coverage) axi_rst_imp;
    uvm_analysis_imp_cov_sram_rst #(reset_seq_item, sram_coverage) sram_rst_imp;

    axi_agent_config cfg;   // set by sram_env: which optional groups to build

    sram_excl_cov    excl_cov;
    sram_region_cov  region_cov;
    sram_user_cov    user_cov;
    sram_pipe_cov    pipe_cov;

    // ---- Sampled values (set before each sample()) ---------------
    bit          c_dir;          // 0 RD, 1 WR
    bit [1:0]    c_burst;
    bit [2:0]    c_size;
    int unsigned c_len_code;     // burst * 16 + length class
    int unsigned c_len_beats;
    int unsigned c_align_size;   // aligned * 8 + size
    int unsigned c_align_burst;  // aligned * 4 + burst
    bit          c_aligned;
    bit [3:0]    c_offset;
    bit [1:0]    c_resp;
    int unsigned c_region;       // 0 below, 1 first 4 KB, 2 middle, 3 last 4 KB, 4 above
    bit [`AXI_ID_WIDTH-1:0] c_id;
    bit [3:0]    c_cache;
    bit [2:0]    c_prot;
    bit [3:0]    c_qos;
    int unsigned c_strb_kind;    // 0 full, 1 partial, 2 zero
    int unsigned c_addr_wait;
    int          c_w_lead;
    int unsigned c_w_gaps;
    bit          c_multi_beat;
    int unsigned c_resp_stall;
    int unsigned c_idle;
    int unsigned c_hazard;       // 0 none, 1 RAW, 2 WAR, 3 WAW, 4 RAR
    bit          c_resp_err;
    bit          c_b2b;

    // reset
    bit          r_domain;       // 0 AXI, 1 SRAM
    int unsigned r_pulse;
    int unsigned r_traffic;      // 0 idle, 1 writes, 2 reads, 3 both  (AXI)
                                 // 0 idle, 1 bursts completed during reset (SRAM)
    int unsigned r_order;        // 0 AXI released first, 1 SRAM first, 2 same instant

    // state
    axi_seq_item prev;
    int unsigned axi_rst_abort_wr, axi_rst_abort_rd, bursts_in_sram_rst;
    bit          in_rst[2];
    bit          rst_overlap;
    realtime     rel_time[2];
    int unsigned n_bursts;

    // ============================================================
    covergroup cg_sram_burst;
        option.per_instance = 1;
        cp_dir:   coverpoint c_dir   { bins RD = {0}; bins WR = {1}; }
        cp_burst: coverpoint c_burst { bins FIXED = {AXI_FIXED}; bins INCR = {AXI_INCR};
                                       bins WRAP  = {AXI_WRAP};
                                       illegal_bins reserved = {2'b11}; }
        cp_size:  coverpoint c_size  { bins B1 = {0}; bins B2 = {1}; bins B4 = {2};
                                       bins B8 = {3}; bins B16 = {4};
                                       illegal_bins wider_than_bus = {[5:7]}; }
        // Only AXI-legal lengths per burst type.
        cp_len:   coverpoint c_len_code {
            bins FIXED_len1      = {0  + 0};
            bins FIXED_len2      = {0  + 1};
            bins FIXED_len3_15   = {0  + 2};
            bins FIXED_len16     = {0  + 3};
            bins INCR_len1       = {16 + 0};
            bins INCR_len2       = {16 + 1};
            bins INCR_len3_15    = {16 + 2};
            bins INCR_len16      = {16 + 3};
            bins INCR_len17_64   = {16 + 4};
            bins INCR_len65_255  = {16 + 5};
            bins INCR_len256     = {16 + 6};
            bins WRAP_len2       = {32 + 1};
            bins WRAP_len4       = {32 + 7};
            bins WRAP_len8       = {32 + 8};
            bins WRAP_len16      = {32 + 3};
        }
        // No unaligned 1-byte transfer exists.
        cp_align_size: coverpoint c_align_size {
            bins aligned_B1    = {8 + 0};
            bins aligned_B2    = {8 + 1};
            bins aligned_B4    = {8 + 2};
            bins aligned_B8    = {8 + 3};
            bins aligned_B16   = {8 + 4};
            bins unaligned_B2  = {1};
            bins unaligned_B4  = {2};
            bins unaligned_B8  = {3};
            bins unaligned_B16 = {4};
        }
        // WRAP must be aligned.
        cp_align_burst: coverpoint c_align_burst {
            bins aligned_FIXED   = {4 + AXI_FIXED};
            bins aligned_INCR    = {4 + AXI_INCR};
            bins aligned_WRAP    = {4 + AXI_WRAP};
            bins unaligned_FIXED = {AXI_FIXED};
            bins unaligned_INCR  = {AXI_INCR};
        }
        cp_offset: coverpoint c_offset { bins off[] = {[0:15]}; }
        cp_resp:   coverpoint c_resp   { bins OKAY = {AXI_OKAY}; bins DECERR = {AXI_DECERR};
                                         ignore_bins exclusive_or_slverr = {AXI_EXOKAY, AXI_SLVERR}; }
        cp_region: coverpoint c_region { bins below_base = {0}; bins first_4KB = {1};
                                         bins middle = {2}; bins last_4KB = {3};
                                         bins above_end = {4}; }

        x_dir_burst_size: cross cp_dir, cp_burst, cp_size;
        x_dir_len:        cross cp_dir, cp_len;
        x_dir_align_size: cross cp_dir, cp_align_size;
        x_dir_resp:       cross cp_dir, cp_resp;
        x_dir_region:     cross cp_dir, cp_region;

`ifdef TB_COV_CROSS_SELECT
        // Full burst x size x length space, illegal combos removed.
        cp_aligned: coverpoint c_aligned { bins UNALIGNED = {0}; bins ALIGNED = {1}; }
        cp_beats:   coverpoint c_len_beats {
            bins l1 = {1}; bins l2 = {2}; bins l4 = {4}; bins l8 = {8}; bins l16 = {16};
            bins l3_15 = {3, [5:7], [9:15]};
            bins l17_64 = {[17:64]}; bins l65_255 = {[65:255]}; bins l256 = {256};
        }
        x_burst_size_beats: cross cp_burst, cp_size, cp_beats {
            ignore_bins wrap_len = binsof(cp_burst.WRAP) &&
                                   binsof(cp_beats) intersect {1, 3, 5, 6, 7, [9:15], [17:256]};
            ignore_bins fixed_len = binsof(cp_burst.FIXED) && binsof(cp_beats) intersect {[17:256]};
        }
        x_align_burst_size: cross cp_aligned, cp_burst, cp_size {
            ignore_bins unaligned_wrap = binsof(cp_aligned.UNALIGNED) && binsof(cp_burst.WRAP);
            ignore_bins unaligned_byte = binsof(cp_aligned.UNALIGNED) && binsof(cp_size.B1);
        }
`endif
    endgroup

    // ============================================================
    covergroup cg_sram_id;
        option.per_instance = 1;
        cp_dir: coverpoint c_dir { bins RD = {0}; bins WR = {1}; }
        cp_id:  coverpoint c_id  { bins id[] = {[0 : (1 << `AXI_ID_WIDTH) - 1]}; }
        x_dir_id: cross cp_dir, cp_id;
    endgroup

    // ============================================================
    covergroup cg_sram_sideband;
        option.per_instance = 1;
        cp_dir:   coverpoint c_dir   { bins RD = {0}; bins WR = {1}; }
        cp_cache: coverpoint c_cache {
            bins dev_nonbuf        = {4'b0000};
            bins dev_buf           = {4'b0001};
            bins normal_nc_nonbuf  = {4'b0010};
            bins normal_nc_buf     = {4'b0011};
            bins wt_no_alloc       = {4'b0110};
            bins wt_rd_alloc       = {4'b0111};
            bins wt_wr_alloc       = {4'b1010};
            bins wt_rw_alloc       = {4'b1011};
            bins wb_no_alloc       = {4'b1110};
            bins wb_rw_alloc       = {4'b1111};
            illegal_bins reserved  = {4'b0100, 4'b0101, 4'b1000, 4'b1001, 4'b1100, 4'b1101};
        }
        cp_prot:  coverpoint c_prot  { bins p[] = {[0:7]}; }
        cp_qos:   coverpoint c_qos   { bins zero = {0}; bins mid = {[1:14]}; bins max = {15}; }
        x_dir_prot: cross cp_dir, cp_prot;
    endgroup

    // ============================================================
    covergroup cg_sram_wstrb;
        option.per_instance = 1;
        cp_kind: coverpoint c_strb_kind { bins full = {0}; bins partial = {1}; bins zero = {2}; }
    endgroup

    // ============================================================
    covergroup cg_sram_handshake;
        option.per_instance = 1;
        cp_dir:       coverpoint c_dir { bins RD = {0}; bins WR = {1}; }
        cp_addr_wait: coverpoint c_addr_wait { bins no_wait = {0}; bins waited = {[1:$]}; }
        cp_w_lead:    coverpoint c_w_lead iff (c_dir) {
                          bins w_before_aw = {[-1000000:-1]};
                          bins same_cycle  = {0};
                          bins aw_before_w = {[1:1000000]}; }
        cp_w_gaps:    coverpoint c_w_gaps iff (c_dir && c_multi_beat) {
                          bins no_gap = {0}; bins gaps = {[1:$]}; }
        cp_stall:     coverpoint c_resp_stall { bins none = {0}; bins short = {[1:4]};
                                                bins long = {[5:$]}; }
        cp_idle:      coverpoint c_idle { bins back_to_back = {[0:1]}; bins short = {[2:4]};
                                          bins long = {[5:$]}; }
        x_dir_addr_wait: cross cp_dir, cp_addr_wait;
        x_dir_stall:     cross cp_dir, cp_stall;
        x_dir_idle:      cross cp_dir, cp_idle;
    endgroup

    // ============================================================
    covergroup cg_sram_trans;
        option.per_instance = 1;
        cp_dir_seq: coverpoint c_dir {
            bins rd_then_rd = (0 => 0);
            bins rd_then_wr = (0 => 1);
            bins wr_then_rd = (1 => 0);
            bins wr_then_wr = (1 => 1);
        }
        cp_burst_seq: coverpoint c_burst {
            bins fixed_fixed = (2'd0 => 2'd0);
            bins fixed_incr  = (2'd0 => 2'd1);
            bins fixed_wrap  = (2'd0 => 2'd2);
            bins incr_fixed  = (2'd1  => 2'd0);
            bins incr_incr   = (2'd1  => 2'd1);
            bins incr_wrap   = (2'd1  => 2'd2);
            bins wrap_fixed  = (2'd2  => 2'd0);
            bins wrap_incr   = (2'd2  => 2'd1);
            bins wrap_wrap   = (2'd2  => 2'd2);
        }
        cp_resp_seq: coverpoint c_resp_err {
            bins okay_then_err = (0 => 1);
            bins err_then_err  = (1 => 1);
            bins err_then_okay = (1 => 0);
        }
        cp_hazard: coverpoint c_hazard { bins none = {0}; bins raw = {1}; bins war = {2};
                                         bins waw = {3}; bins rar = {4}; }
        cp_b2b:    coverpoint c_b2b    { bins gap = {0}; bins back_to_back = {1}; }
        x_hazard_b2b: cross cp_hazard, cp_b2b;
    endgroup

    // ============================================================
    covergroup cg_sram_reset;
        option.per_instance = 1;
        cp_domain:  coverpoint r_domain { bins AXI = {0}; bins SRAM = {1}; }
        cp_pulse:   coverpoint r_pulse  { bins short = {[1:9]}; bins mid = {[10:20]};
                                          bins long = {[21:$]}; }
        cp_axi_traffic: coverpoint r_traffic iff (r_domain == 0) {
                          bins idle = {0}; bins write_aborted = {1}; bins read_aborted = {2};
                          bins both_aborted = {3}; }
        cp_sram_traffic: coverpoint r_traffic iff (r_domain == 1) {
                          bins idle = {0}; bins bursts_during_reset = {1}; }
        x_domain_pulse: cross cp_domain, cp_pulse;
    endgroup

    covergroup cg_sram_rst_order;
        option.per_instance = 1;
        // Each domain releases on its own clock's falling edge, so an
        // exact tie is not a goal.
        cp_order: coverpoint r_order { bins axi_released_first = {0};
                                       bins sram_released_first = {1};
                                       ignore_bins same_instant = {2}; }
    endgroup

    // ============================================================
    function new(string name = "sram_coverage", uvm_component parent = null);
        super.new(name, parent);
        axi_imp      = new("axi_imp", this);
        axi_rst_imp  = new("axi_rst_imp", this);
        sram_rst_imp = new("sram_rst_imp", this);
        cg_sram_burst     = new();
        cg_sram_id        = new();
        cg_sram_sideband  = new();
        cg_sram_wstrb     = new();
        cg_sram_handshake = new();
        cg_sram_trans     = new();
        cg_sram_reset     = new();
        cg_sram_rst_order = new();
    endfunction

    function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        if (cfg == null) cfg = axi_agent_config::type_id::create("cfg");
        if (cfg.exclusive_en) excl_cov   = new();
        if (cfg.region_en)    region_cov = new();
        if (cfg.user_en)      user_cov   = new();
        if (cfg.pipelined())  pipe_cov   = new();
    endfunction

    // ---- helpers -------------------------------------------------
    function int unsigned len_class(axi_seq_item t);
        int unsigned beats = 32'(t.len) + 1;
        if (beats == 1)  return 0;
        if (beats == 2)  return 1;
        if (t.burst == AXI_WRAP) begin
            if (beats == 4)  return 7;
            if (beats == 8)  return 8;
            return 3;                       // 16
        end
        if (beats <= 15)  return 2;
        if (beats == 16)  return 3;
        if (beats <= 64)  return 4;
        if (beats <= 255) return 5;
        return 6;
    endfunction

    function int unsigned region_of(bit [`AXI_ADDR_WIDTH-1:0] a);
        if (a <  `SRAM_BASE_ADDR)            return 0;
        if (a >  `SRAM_END_ADDR)             return 4;
        if (a <  `SRAM_BASE_ADDR + 32'h1000) return 1;
        if (a >  `SRAM_END_ADDR  - 32'h1000) return 3;
        return 2;
    endfunction

    function int unsigned strb_kind(axi_seq_item t);
        bit all_full = 1'b1, all_zero = 1'b1;
        foreach (t.strb[i]) begin
            if (t.strb[i] != t.lane_mask(i)) all_full = 1'b0;
            if (t.strb[i] != 0)              all_zero = 1'b0;
        end
        return all_zero ? 2 : (all_full ? 0 : 1);
    endfunction

    // Whole-word footprint overlap with the previous burst.
    function int unsigned hazard_with_prev(axi_seq_item t);
        bit [`AXI_ADDR_WIDTH-1:0] m = ~(`AXI_ADDR_WIDTH'(`AXI_STRB_WIDTH - 1));
        if (prev == null) return 0;
        if (!(((t.lo_addr() & m) <= (prev.hi_addr() | ~m)) &&
              ((prev.lo_addr() & m) <= (t.hi_addr() | ~m))))
            return 0;
        case ({prev.write, t.write})
            2'b10:   return 1;   // RAW
            2'b01:   return 2;   // WAR
            2'b11:   return 3;   // WAW
            default: return 4;   // RAR
        endcase
    endfunction

    // ---- AXI bursts ------------------------------------------------
    function void write_cov_axi(axi_seq_item t);
        if (in_rst[1]) bursts_in_sram_rst++;
        if (t.aborted) begin
            if (t.write) axi_rst_abort_wr++;
            else         axi_rst_abort_rd++;
            prev = null;     // the next burst starts a new sequence
            return;
        end
        n_bursts++;

        c_dir         = t.write;
        c_burst       = t.burst;
        c_size        = t.size;
        c_len_code    = 16 * int'(t.burst) + len_class(t);
        c_len_beats   = 32'(t.len) + 1;
        c_aligned     = t.is_aligned();
        c_align_size  = (c_aligned ? 8 : 0) + t.size;
        c_align_burst = (c_aligned ? 4 : 0) + int'(t.burst);
        c_offset      = t.addr[3:0];
        c_resp        = t.write ? t.bresp : (t.rresp.size() ? t.rresp[0] : 2'(AXI_OKAY));
        c_region      = region_of(t.addr);
        c_id          = t.id;
        c_cache       = t.cache;
        c_prot        = t.prot;
        c_qos         = t.qos;
        c_addr_wait   = t.addr_wait;
        c_w_lead      = t.w_lead;
        c_w_gaps      = t.w_gap_cycles;
        c_multi_beat  = (t.len != 0);
        c_resp_stall  = t.resp_stall;
        c_idle        = t.idle_before;
        c_hazard      = hazard_with_prev(t);
        c_resp_err    = (c_resp == AXI_DECERR);
        c_b2b         = (t.idle_before <= 1);

        cg_sram_burst.sample();
        cg_sram_id.sample();
        cg_sram_sideband.sample();
        cg_sram_handshake.sample();
        cg_sram_trans.sample();
        if (t.write) begin
            c_strb_kind = strb_kind(t);
            cg_sram_wstrb.sample();
        end

        if (excl_cov != null && t.is_exclusive()) begin
            excl_cov.dir   = t.write;
            excl_cov.resp  = c_resp;
            excl_cov.beats = 32'(t.len) + 1;
            excl_cov.cg_sram_excl.sample();
        end
        if (region_cov != null) begin
            region_cov.dir    = t.write;
            region_cov.region = t.region;
            region_cov.cg_sram_region.sample();
        end
        if (user_cov != null) begin
            user_cov.dir   = t.write;
            user_cov.auser = t.auser;
            user_cov.cg_sram_user.sample();
        end
        if (pipe_cov != null) begin
            pipe_cov.dir      = t.write;
            pipe_cov.inflight = t.inflight;
            pipe_cov.ooo      = t.out_of_order;
            pipe_cov.cg_sram_pipe.sample();
        end

        prev = t;
    endfunction

    // ---- Resets ----------------------------------------------------
    function void write_cov_axi_rst(reset_seq_item t);
        reset_event(0, t);
    endfunction

    function void write_cov_sram_rst(reset_seq_item t);
        reset_event(1, t);
    endfunction

    // pulse_cycles == 0: assert, else deassert after pulse_cycles clocks.
    function void reset_event(bit dom, reset_seq_item t);
        if (t.pulse_cycles == 0) begin
            // Counters are cleared after the deassert sample, not here:
            // the AXI monitor may publish the aborted bursts before this.
            in_rst[dom] = 1'b1;
            if (in_rst[!dom]) rst_overlap = 1'b1;
            return;
        end

        in_rst[dom]   = 1'b0;
        rel_time[dom] = $realtime;
        r_domain = dom;
        r_pulse  = t.pulse_cycles;
        if (dom == 0)
            r_traffic = (axi_rst_abort_wr ? 1 : 0) + (axi_rst_abort_rd ? 2 : 0);
        else
            r_traffic = (bursts_in_sram_rst > 0) ? 1 : 0;
        cg_sram_reset.sample();
        if (dom == 0) begin axi_rst_abort_wr = 0; axi_rst_abort_rd = 0; end
        else          bursts_in_sram_rst = 0;

        // Both domains were in reset together and this one left last.
        if (rst_overlap && !in_rst[!dom]) begin
            if (rel_time[0] == rel_time[1]) r_order = 2;
            else                            r_order = (dom == 1) ? 0 : 1;
            cg_sram_rst_order.sample();
            rst_overlap = 1'b0;
        end
        prev = null;
    endfunction

    // ---- Report ----------------------------------------------------
    function void report_line(ref string s, input string name, input real pct);
        s = {s, $sformatf("\n    %-20s %6.2f%%", name, pct)};
    endfunction

    function void report_phase(uvm_phase phase);
        string s = "";
        real   sum = 0.0;
        int    n = 0;
        real   p;

        p = cg_sram_burst.get_inst_coverage();     report_line(s, "cg_sram_burst", p);     sum += p; n++;
        p = cg_sram_id.get_inst_coverage();        report_line(s, "cg_sram_id", p);        sum += p; n++;
        p = cg_sram_sideband.get_inst_coverage();  report_line(s, "cg_sram_sideband", p);  sum += p; n++;
        p = cg_sram_wstrb.get_inst_coverage();     report_line(s, "cg_sram_wstrb", p);     sum += p; n++;
        p = cg_sram_handshake.get_inst_coverage(); report_line(s, "cg_sram_handshake", p); sum += p; n++;
        p = cg_sram_trans.get_inst_coverage();     report_line(s, "cg_sram_trans", p);     sum += p; n++;
        p = cg_sram_reset.get_inst_coverage();     report_line(s, "cg_sram_reset", p);     sum += p; n++;
        p = cg_sram_rst_order.get_inst_coverage(); report_line(s, "cg_sram_rst_order", p); sum += p; n++;
        if (excl_cov != null) begin
            p = excl_cov.cg_sram_excl.get_inst_coverage();     report_line(s, "cg_sram_excl", p);   sum += p; n++;
        end
        if (region_cov != null) begin
            p = region_cov.cg_sram_region.get_inst_coverage(); report_line(s, "cg_sram_region", p); sum += p; n++;
        end
        if (user_cov != null) begin
            p = user_cov.cg_sram_user.get_inst_coverage();     report_line(s, "cg_sram_user", p);   sum += p; n++;
        end
        if (pipe_cov != null) begin
            p = pipe_cov.cg_sram_pipe.get_inst_coverage();     report_line(s, "cg_sram_pipe", p);   sum += p; n++;
        end

`ifdef TB_COV_GET_COVERAGE
        s = {s, "\n  per coverpoint:"};
        report_line(s, "burst.cp_len",        cg_sram_burst.cp_len.get_inst_coverage());
        report_line(s, "burst.x_dir_len",     cg_sram_burst.x_dir_len.get_inst_coverage());
        report_line(s, "handshake.cp_stall",  cg_sram_handshake.cp_stall.get_inst_coverage());
        report_line(s, "trans.cp_hazard",     cg_sram_trans.cp_hazard.get_inst_coverage());
        report_line(s, "reset.cp_pulse",      cg_sram_reset.cp_pulse.get_inst_coverage());
        report_line(s, "type cg_sram_burst",  cg_sram_burst.get_coverage());
`endif

        `uvm_info(get_type_name(),
            $sformatf("Functional coverage (%0d bursts sampled), per covergroup:%s\n  average over %0d groups = %0.2f%%  (bin-level detail: make cov)",
                      n_bursts, s, n, (n > 0) ? sum / n : 0.0), UVM_NONE)
    endfunction

endclass
