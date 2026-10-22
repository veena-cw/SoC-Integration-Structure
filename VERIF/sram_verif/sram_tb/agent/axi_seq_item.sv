// ------------------------------------------------------------
// axi_seq_item.sv
//
// One complete AXI4 burst (write: AW+W+B, read: AR+R).
//
// Supported stimulus space (AXI4 spec, IHI0022):
//   * size   : 0..4 (1,2,4,8,16 bytes; 16 B = full 128-bit bus)
//   * len    : 0..255 for INCR, 0..15 for FIXED,
//              1/3/7/15 for WRAP
//   * burst  : FIXED / INCR / WRAP
//   * aligned=1 : addr aligned to 2^size
//     aligned=0 : addr NOT aligned to 2^size (INCR/FIXED only,
//                 size>0) -- first beat is a partial transfer
//   * INCR bursts never cross a 4 KB boundary
//   * by default addr stays inside the 1 MB SRAM window;
//     disable c_in_range for decode-error tests
//   * AxCACHE always uses an AXI4 legal encoding (A4.4, Table A4-5)
//   * optional AXI4 features, off by default (constraint ON =
//     feature off; axi_base_sequence switches them from the agent
//     config):
//       c_no_excl     AxLOCK = NORMAL. Off -> exclusive accesses
//                     allowed, legal per A7.2.4 (c_excl): 1/2/4/8/16
//                     beats, <= 128 bytes, address aligned to the
//                     total size
//       c_region_off  AxREGION = 0
//       c_user_off    AxUSER = 0 (WUSER follows user_en)
//
// Distribution weighting (burst type, length class, strobe
// mode) is done by axi_base_sequence.gen_and_send() and passed
// in as inline constraints, not with 'dist' here: Verilator
// treats dist as a hard pick that ignores inline constraints.
//
// Write strobes are not randomized directly -- they are derived
// in post_randomize() from addr/size/burst (lane_mask()) and
// strb_mode, so every generated strobe is AXI-legal.
//
// The driver writes the responses (bresp / rresp / read data)
// back into the same object, so a sequence can inspect them
// after finish_item() -- or, with more than one outstanding burst
// (axi_agent_config.pipelined()), after 'completed' is set.
//
// The monitor also records handshake timing per burst (aclk
// cycles) for coverage: addr_wait, w_gap_cycles, w_lead,
// resp_stall, idle_before.
// ------------------------------------------------------------
`include "uvm_macros.svh"
`include "axi_defines.svh"
import uvm_pkg::*;

class axi_seq_item extends uvm_sequence_item;

    `uvm_object_utils(axi_seq_item)

    localparam int DATA_BYTES = `AXI_STRB_WIDTH;
    localparam int MAX_SIZE   = $clog2(`AXI_STRB_WIDTH);

    // ---- Request -----------------------------------------------
    rand bit                        write;
    rand bit [`AXI_ID_WIDTH-1:0]    id;
    rand bit [`AXI_ADDR_WIDTH-1:0]  addr;
    rand bit [7:0]                  len;
    rand bit [2:0]                  size;
    rand axi_burst_e                burst;
    rand bit                        aligned;
    rand axi_strb_mode_e            strb_mode;

    rand bit                        lock;
    rand bit [3:0]                  cache;
    rand bit [2:0]                  prot;
    rand bit [3:0]                  qos;
    rand bit [`AXI_REGION_WIDTH-1:0] region;
    rand bit [`AXI_USER_WIDTH-1:0]  auser;

    bit                             user_en;  // fill wuser[] with random values

    bit      [`AXI_DATA_WIDTH-1:0]  data[];   // write data (read data after a read), see post_randomize
    bit      [`AXI_STRB_WIDTH-1:0]  strb[];   // derived in post_randomize
    bit      [`AXI_USER_WIDTH-1:0]  wuser[];  // per W beat, see post_randomize

    // ---- Response (filled by driver / monitor) -----------------
    bit [1:0]                       bresp;
    bit [1:0]                       rresp[];
    bit [`AXI_USER_WIDTH-1:0]       buser;
    bit [`AXI_USER_WIDTH-1:0]       ruser[];
    bit                             aborted;    // reset hit mid-transfer
    bit                             timed_out;  // handshake watchdog fired

    // ---- Driver bookkeeping --------------------------------------
    bit                             aw_done;    // address phase accepted
    bit                             w_done;     // last W beat accepted
    bit                             completed;  // response(s) received or aborted

    // ---- WLAST error injection (sram_wlast_err_test) --------------
    // Defaults = legal AXI: len+1 W beats, WLAST on the last one.
    //   n_wbeats   : W beats to drive (0 = len+1); data[]/strb[] must
    //                hold at least that many entries
    //   wlast_beat : beat index carrying WLAST; -1 = the last driven
    //                beat (normal), -2 = no beat (WLAST never asserted)
    int unsigned                    n_wbeats   = 0;
    int                             wlast_beat = -1;

    // ---- Monitor timing (aclk cycles) ----------------------------
    int unsigned                    addr_wait;     // AxVALID high before AxREADY
    int unsigned                    w_gap_cycles;  // WVALID low inside the W burst
    int                             w_lead;        // first WVALID vs AWVALID: <0 W first, 0 same cycle, >0 AW first
    int unsigned                    resp_stall;    // BVALID/RVALID high while READY low
    int unsigned                    idle_before;   // bus-idle cycles since the previous burst ended
    longint unsigned                addr_cycle;    // AxVALID first seen
    longint unsigned                end_cycle;     // B / RLAST handshake
    longint unsigned                first_data_cycle;  // first R beat (reads)
    int unsigned                    inflight;      // other bursts in flight when the address was accepted
    bit                             out_of_order;  // completed before an older burst of the same direction

    // ---- Constraints --------------------------------------------
    constraint c_size {
        size <= MAX_SIZE;
    }

    constraint c_burst {
        burst inside {AXI_FIXED, AXI_INCR, AXI_WRAP};
        burst == AXI_WRAP  -> len inside {1, 3, 7, 15};
        burst == AXI_FIXED -> len <= 15;
    }

    constraint c_align {
        burst == AXI_WRAP -> aligned == 1'b1;
        size  == 0        -> aligned == 1'b1;
        aligned == 1'b1   -> (addr & ((32'd1 << size) - 1)) == 0;
        aligned == 1'b0   -> (addr & ((32'd1 << size) - 1)) != 0;
    }

    // INCR bursts must not cross a 4 KB boundary.
    constraint c_4kb {
        burst == AXI_INCR ->
            ((32'(addr[11:0]) >> size) + 32'(len) + 1) <= (32'd4096 >> size);
    }

    // SRAM window. 0x1070_0000 and 1 MB are both 4 KB aligned, so
    // together with c_4kb (INCR) and the wrap container (WRAP) a
    // burst that starts in range also ends in range.
    constraint c_in_range {
        addr inside {[`SRAM_BASE_ADDR : `SRAM_END_ADDR]};
    }

    // AXI4 legal AxCACHE values (reserved: 0100 0101 1000 1001 1100 1101).
    constraint c_cache {
        cache inside {4'b0000, 4'b0001, 4'b0010, 4'b0011, 4'b0110,
                      4'b0111, 4'b1010, 4'b1011, 4'b1110, 4'b1111};
    }

`ifdef TB_CONSTRAINT_DIST
    // Bias sideband values towards the common encodings.
    constraint c_sideband_dist {
        cache dist {4'b0000 := 2, [4'b0001 : 4'b0010] :/ 2, 4'b0011 := 4,
                    [4'b0110 : 4'b1111] :/ 4};
        qos   dist {4'h0 := 4, [4'h1 : 4'hE] :/ 4, 4'hF := 2};
    }
`endif

    // Exclusive access rules (A7.2.4).
    constraint c_excl {
        lock -> len inside {0, 1, 3, 7, 15};
        lock -> ((32'(len) + 1) << size) <= 128;
        lock -> (addr & (((32'(len) + 1) << size) - 1)) == 0;
        lock -> aligned == 1'b1;
    }

    constraint c_no_excl    { lock   == 1'b0; }
    constraint c_region_off { region == '0;   }
    constraint c_user_off   { auser  == '0;   }

    constraint c_order {
        solve lock  before len;
        solve burst before len;
        solve burst before aligned;
        solve size  before aligned;
        solve aligned before addr;
    }

    // UVM constructor.
    function new(string name = "axi_seq_item");
        super.new(name);
    endfunction

    // data[] is not a rand member: Verilator leaves the elements of a
    // randomized dynamic array at zero, so it is sized and filled here.
    function void post_randomize();
        bit [`AXI_DATA_WIDTH-1:0] d;
        data  = new[write ? 32'(len) + 1 : 0];
        wuser = new[data.size()];
        foreach (data[i]) begin
            for (int w = 0; w < `AXI_DATA_WIDTH / 32; w++)
                d[32*w +: 32] = $urandom();
            data[i]  = d;
            wuser[i] = user_en ? `AXI_USER_WIDTH'($urandom()) : '0;
        end
        build_strobes();
    endfunction

    // ---- AXI address helpers (IHI0022 A3.4.1) -------------------
    function int unsigned num_bytes();
        return 32'd1 << size;
    endfunction

    // Start address rounded down to a multiple of the transfer size.
    function bit [`AXI_ADDR_WIDTH-1:0] aligned_addr();
        return (addr >> size) << size;
    endfunction

    // 1 if the start address is a multiple of the transfer size.
    function bit is_aligned();
        return (addr & (num_bytes() - 1)) == 0;
    endfunction

    // 1 for an exclusive access (AxLOCK=1).
    function bit is_exclusive();
        return lock == AXI_EXCLUSIVE;
    endfunction

    // Lowest / highest byte address the burst can touch (whole
    // words for FIXED/INCR beats, the wrap container for WRAP).
    function bit [`AXI_ADDR_WIDTH-1:0] lo_addr();
        bit [`AXI_ADDR_WIDTH-1:0] total;
        if (burst == AXI_WRAP) begin
            total = num_bytes() * (32'(len) + 1);
            return (addr / total) * total;
        end
        return addr;
    endfunction

    // Highest byte address the burst can touch.
    function bit [`AXI_ADDR_WIDTH-1:0] hi_addr();
        bit [`AXI_ADDR_WIDTH-1:0] total;
        total = num_bytes() * (32'(len) + 1);
        case (burst)
            AXI_FIXED: return aligned_addr() + num_bytes() - 1;
            AXI_WRAP:  return lo_addr() + total - 1;
            default:   return aligned_addr() + total - 1;
        endcase
    endfunction

    // 1 if this burst and t can touch at least one common byte.
    function bit overlaps(axi_seq_item t);
        return (lo_addr() <= t.hi_addr()) && (t.lo_addr() <= hi_addr());
    endfunction

    // Byte address of beat n (0-based).
    function bit [`AXI_ADDR_WIDTH-1:0] beat_addr(int unsigned n);
        bit [`AXI_ADDR_WIDTH-1:0] nb, total, wrap_base, a;
        nb    = num_bytes();
        total = nb * (32'(len) + 1);
        case (burst)
            AXI_FIXED: return addr;
            AXI_WRAP: begin
                wrap_base = (addr / total) * total;
                a = aligned_addr() + n * nb;
                if (a >= wrap_base + total) a -= total;
                return a;
            end
            default: return (n == 0) ? addr : aligned_addr() + n * nb;
        endcase
    endfunction

    // Byte lanes carrying valid data on beat n.
    function bit [`AXI_STRB_WIDTH-1:0] lane_mask(int unsigned n);
        int unsigned lower, upper;
        bit [`AXI_ADDR_WIDTH-1:0] a;
        lane_mask = '0;
        a     = beat_addr(n);
        lower = a % DATA_BYTES;
        if (n == 0 || burst == AXI_FIXED)
            upper = (aligned_addr() % DATA_BYTES) + num_bytes() - 1;
        else
            upper = lower + num_bytes() - 1;
        for (int unsigned l = lower; l <= upper; l++)
            lane_mask[l] = 1'b1;
    endfunction

    // Fill strb[] from strb_mode: valid lanes, a random subset, or none.
    // Reads get an empty array.
    function void build_strobes();
        if (!write) begin
            strb = new[0];
            return;
        end
        strb = new[32'(len) + 1];
        foreach (strb[i]) begin
            case (strb_mode)
                STRB_FULL:   strb[i] = lane_mask(i);
                STRB_RANDOM: strb[i] = lane_mask(i) & `AXI_STRB_WIDTH'($urandom());
                default:     strb[i] = '0;
            endcase
        end
    endfunction

    // ---- UVM housekeeping ---------------------------------------
    function void do_copy(uvm_object rhs);
        axi_seq_item t;
        super.do_copy(rhs);
        if (!$cast(t, rhs))
            `uvm_fatal(get_type_name(), "do_copy: wrong type")
        write     = t.write;     id        = t.id;
        addr      = t.addr;      len       = t.len;
        size      = t.size;      burst     = t.burst;
        aligned   = t.aligned;   strb_mode = t.strb_mode;
        lock      = t.lock;      cache     = t.cache;
        prot      = t.prot;      qos       = t.qos;
        region    = t.region;    auser     = t.auser;
        user_en   = t.user_en;   wuser     = t.wuser;
        data      = t.data;      strb      = t.strb;
        bresp     = t.bresp;     rresp     = t.rresp;
        buser     = t.buser;     ruser     = t.ruser;
        aborted   = t.aborted;   timed_out = t.timed_out;
        aw_done   = t.aw_done;   completed = t.completed;
        w_done    = t.w_done;
        n_wbeats  = t.n_wbeats;  wlast_beat = t.wlast_beat;
        addr_wait = t.addr_wait; w_gap_cycles = t.w_gap_cycles;
        w_lead    = t.w_lead;    resp_stall   = t.resp_stall;
        idle_before = t.idle_before;
        addr_cycle  = t.addr_cycle;  end_cycle = t.end_cycle;
        first_data_cycle = t.first_data_cycle;
        inflight  = t.inflight;  out_of_order = t.out_of_order;
    endfunction

    // One-line description of the burst (and its response) for logs.
    function string convert2string();
        string s;
        s = $sformatf("%s id=%0h addr=0x%08h len=%0d size=%0d(%0dB) burst=%s %s strb=%s",
                      write ? "WR" : "RD", id, addr, len, size, num_bytes(),
                      burst.name(), is_aligned() ? "aligned" : "unaligned",
                      strb_mode.name());
        if (lock)
            s = {s, " EXCL"};
        if (region != 0 || auser != 0)
            s = {s, $sformatf(" region=%0h auser=%0h", region, auser)};
        if (write)
            s = {s, $sformatf(" bresp=%0d", bresp)};
        if (aborted)
            s = {s, timed_out ? " [TIMED OUT]" : " [ABORTED BY RESET]"};
        return s;
    endfunction

endclass
