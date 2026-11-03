`timescale 1ns/1ps

//=============================================================================
// tb_bridge_rand.sv
//
// Self-checking constrained-random testbench for axi4_to_apb_bridge_cdc.
//
//   - Independent AXI write and read masters run concurrently (AW/AR collide).
//   - Generic APB4 completer model behind all 8 decoder windows:
//       * random wait states, junk PRDATA/PSLVERR while PREADY is low
//       * PSLVERR for any address whose offset[15:12] == 4'hF ("error page")
//   - Passive AXI monitor builds the expected APB transfer stream and the
//     expected R/B responses from a byte-level reference memory.
//   - Passive APB monitor checks protocol + compares every completed transfer.
//   - End of test: all queues drained, completer memory == reference memory.
//
// Plusargs: +NTXN=<n> +MAXWAIT=<n> +ACLK_HALF_PS=<ps> +PCLK_HALF_PS=<ps>
//           +PCLK_PHASE_PS=<ps> +NO_DIRECTED
//=============================================================================

module tb_bridge_rand;

    parameter int AXI_DW     = 128;
    parameter int APB_DW     = 32;
    parameter int IDW        = 4;
    parameter int FIFO_DEPTH = 4;

    localparam int NB      = AXI_DW / 8;
    localparam int PNB     = APB_DW / 8;
    localparam int RATIO   = AXI_DW / APB_DW;
    localparam int MAXSIZE = $clog2(NB);

    //-------------------------------------------------------------------------
    // Signals
    //-------------------------------------------------------------------------
    logic ACLK = 0, PCLK = 0, ARESETn = 0, PRESETn = 0;

    logic [IDW-1:0]  AWID = '0;   logic [31:0] AWADDR = '0; logic [7:0] AWLEN = '0;
    logic [2:0]      AWSIZE = '0; logic [1:0]  AWBURST = '0; logic AWLOCK = 0;
    logic [3:0]      AWCACHE = '0; logic [2:0] AWPROT = '0;  logic AWVALID = 0;
    logic            AWREADY;
    logic [AXI_DW-1:0] WDATA = '0; logic [NB-1:0] WSTRB = '0; logic WLAST = 0, WVALID = 0;
    logic            WREADY;
    logic [IDW-1:0]  BID; logic [1:0] BRESP; logic BVALID; logic BREADY = 0;
    logic [IDW-1:0]  ARID = '0;   logic [31:0] ARADDR = '0; logic [7:0] ARLEN = '0;
    logic [2:0]      ARSIZE = '0; logic [1:0]  ARBURST = '0; logic ARLOCK = 0;
    logic [3:0]      ARCACHE = '0; logic [2:0] ARPROT = '0;  logic ARVALID = 0;
    logic            ARREADY;
    logic [IDW-1:0]  RID; logic [AXI_DW-1:0] RDATA; logic [1:0] RRESP; logic RLAST, RVALID;
    logic            RREADY = 0;

    logic [31:0]     PADDR;  logic PENABLE, PWRITE; logic [2:0] PPROT;
    logic [PNB-1:0]  PSTRB;  logic [APB_DW-1:0] PWDATA;
    logic [APB_DW-1:0] PRDATA; logic PREADY, PSLVERR;
    logic spi_psel, i2c_psel, uart_psel, gpio_psel, mipi_psel, hdmi_psel, timer_psel, debug_psel;
    logic [7:0] psel_bus;
    assign psel_bus = {debug_psel, timer_psel, hdmi_psel, mipi_psel,
                       gpio_psel, uart_psel, i2c_psel, spi_psel};

    //-------------------------------------------------------------------------
    // DUT
    //-------------------------------------------------------------------------
    axi4_to_apb_bridge_cdc #(
        .AXI_ADDR_WIDTH(32), .AXI_DATA_WIDTH(AXI_DW), .APB_DATA_WIDTH(APB_DW),
        .AXI_ID_WIDTH(IDW), .CDC_FIFO_DEPTH(FIFO_DEPTH)
    ) dut (.*);

    //-------------------------------------------------------------------------
    // Run controls, clocks, resets
    //-------------------------------------------------------------------------
    int unsigned ntxn, maxwait, aclk_half_ps, pclk_half_ps, pclk_phase_ps;
    real ah, ph, pp;

    initial begin
        if (!$value$plusargs("NTXN=%d", ntxn))                   ntxn          = 2000;
        if (!$value$plusargs("MAXWAIT=%d", maxwait))             maxwait       = 4;
        if (!$value$plusargs("ACLK_HALF_PS=%d", aclk_half_ps))   aclk_half_ps  = 1250;
        if (!$value$plusargs("PCLK_HALF_PS=%d", pclk_half_ps))   pclk_half_ps  = 5000;
        if (!$value$plusargs("PCLK_PHASE_PS=%d", pclk_phase_ps)) pclk_phase_ps = 377;
        ah = aclk_half_ps / 1000.0;
        ph = pclk_half_ps / 1000.0;
        pp = pclk_phase_ps / 1000.0;
        $display("CFG: AXI_DW=%0d APB_DW=%0d FIFO_DEPTH=%0d NTXN=%0d MAXWAIT=%0d ACLK=%.1fMHz PCLK=%.1fMHz",
                 AXI_DW, APB_DW, FIFO_DEPTH, ntxn, maxwait, 1.0e3/(2*ah), 1.0e3/(2*ph));
        fork
            forever #(ah) ACLK = ~ACLK;
            begin #(pp); forever #(ph) PCLK = ~PCLK; end
        join_none
    end

    initial begin
        #1;
        repeat (6) @(posedge ACLK); #0.1 ARESETn = 1;
    end
    initial begin
        #1;
        repeat (4) @(posedge PCLK); #0.1 PRESETn = 1;
    end

    //-------------------------------------------------------------------------
    // Error bookkeeping
    //-------------------------------------------------------------------------
    int n_err = 0;
    function automatic void fail(string msg);
        n_err++;
        if (n_err <= 40) $display("[%0t] ERROR: %s", $time, msg);
    endfunction

    //-------------------------------------------------------------------------
    // Address map helpers / memories
    //-------------------------------------------------------------------------
    function automatic bit is_mapped(logic [31:0] a);
        return (a[31:16] >= 16'h3000) && (a[31:16] <= 16'h3007);
    endfunction
    function automatic bit slv_err_page(logic [31:0] a);
        return a[15:12] == 4'hF;
    endfunction
    function automatic bit is_err(logic [31:0] a);
        return !is_mapped(a) || slv_err_page(a);
    endfunction
    function automatic logic [7:0] dflt(logic [31:0] a);
        return a[7:0] ^ a[15:8] ^ a[23:16] ^ 8'h5A;
    endfunction
    function automatic logic [7:0] decode(logic [31:0] a);
        return is_mapped(a) ? (8'b1 << a[18:16]) : 8'h00;
    endfunction

    logic [7:0] ref_mem [logic [31:0]];   // updated from AXI-level semantics
    logic [7:0] slv_mem [logic [31:0]];   // updated by the APB completer

    function automatic logic [7:0] ref_rd(logic [31:0] a);
        return ref_mem.exists(a) ? ref_mem[a] : dflt(a);
    endfunction
    function automatic logic [7:0] slv_rd(logic [31:0] a);
        return slv_mem.exists(a) ? slv_mem[a] : dflt(a);
    endfunction

    // AXI4 address of beat n (spec A3.4)
    function automatic logic [31:0] beat_addr(logic [31:0] start, int n,
                                               logic [1:0] burst, int size, int len);
        int unsigned bytes = 1 << size;
        logic [31:0] aligned = (start / bytes) * bytes;
        logic [31:0] lb, a;
        int unsigned wsz;
        case (burst)
            2'b00: return start;
            2'b10: begin
                wsz = bytes * (len + 1);
                lb  = (start / wsz) * wsz;
                a   = start + n * bytes;
                if (a >= lb + wsz) a -= wsz;
                return a;
            end
            default: return (n == 0) ? start : aligned + n * bytes;
        endcase
    endfunction

    // Legal WSTRB lanes for a beat at address a with given size
    function automatic logic [NB-1:0] legal_lanes(logic [31:0] a, int size);
        int unsigned bytes = 1 << size;
        int lo = a % NB;
        int hi = (((a / bytes) * bytes) + bytes - 1) % NB;
        logic [NB-1:0] m = '0;
        for (int i = lo; i <= hi; i++) m[i] = 1'b1;
        return m;
    endfunction

    //-------------------------------------------------------------------------
    // Transaction class + generator
    //-------------------------------------------------------------------------
    class axi_txn;
        bit              wr;
        logic [IDW-1:0]  id;
        logic [31:0]     addr;
        logic [7:0]      len;
        logic [2:0]      size;
        logic [1:0]      burst;
        logic [2:0]      prot;
        logic [AXI_DW-1:0] wdata [256];
        logic [NB-1:0]     wstrb [256];
    endclass

    function automatic logic [AXI_DW-1:0] rand_wide();
        logic [AXI_DW-1:0] d;
        for (int i = 0; i < AXI_DW / 32; i++) d[i*32 +: 32] = $urandom;
        return d;
    endfunction

    function automatic void fill_wdata(axi_txn t, int zero_pct, int part_pct);
        logic [NB-1:0] lg;
        int r;
        for (int b = 0; b <= t.len; b++) begin
            lg = legal_lanes(beat_addr(t.addr, b, t.burst, t.size, t.len), t.size);
            r  = $urandom_range(0, 99);
            t.wdata[b] = rand_wide();
            if (r < zero_pct)                 t.wstrb[b] = '0;
            else if (r < zero_pct + part_pct) t.wstrb[b] = lg & NB'(rand_wide());
            else                              t.wstrb[b] = lg;
        end
    endfunction

    function automatic axi_txn gen_txn(bit wr);
        axi_txn t = new;
        int r, bytes, total, room, off;
        logic [31:0] base;
        logic [31:0] unm [5] = '{32'h3008_0000, 32'h300F_0000, 32'h2000_0000,
                                 32'h0000_0000, 32'hFFFF_0000};
        t.wr   = wr;
        t.id   = IDW'($urandom);
        t.prot = 3'($urandom);
        r = $urandom_range(0, 99);
        t.burst = (r < 15) ? 2'b00 : (r < 75) ? 2'b01 : 2'b10;
        t.size  = 3'($urandom_range(0, MAXSIZE));
        if (t.burst == 2'b10) begin
            t.len = 8'((2 << $urandom_range(0, 3)) - 1);           // 1,3,7,15
        end else begin
            r = $urandom_range(0, 99);
            t.len = (r < 30) ? 8'd0 : (r < 85) ? 8'($urandom_range(1, 15)) :
                    (r < 97) ? 8'($urandom_range(16, 63)) : 8'($urandom_range(64, 255));
        end
        bytes = 1 << t.size;
        total = bytes * (t.len + 1);
        if (t.burst == 2'b01 && total > 4096) begin
            t.len = 8'(4096 / bytes - 1);
            total = 4096;
        end
        r = $urandom_range(0, 99);
        if (r < 85)      base = 32'h3000_0000 | (32'($urandom_range(0, 7)) << 16);
        else if (r < 93) base = 32'h3000_F000 | (32'($urandom_range(0, 7)) << 16);
        else             base = unm[$urandom_range(0, 4)];
        room = (t.burst == 2'b01) ? 4096 - total : 4096 - bytes;
        off  = ($urandom_range(0, 99) < 80) ? $urandom_range(0, (room < 511) ? room : 511)
                                            : $urandom_range(0, room);
        if (t.burst == 2'b10 || $urandom_range(0, 3) != 0) off = (off / bytes) * bytes;
        t.addr = base + 32'(off);
        if (wr) fill_wdata(t, 5, 25);
        return t;
    endfunction

    //-------------------------------------------------------------------------
    // AXI master drivers (drive at posedge+0.1, detect handshake at negedge)
    //-------------------------------------------------------------------------
    int unsigned ok_writes = 0, ok_reads = 0;

    task automatic do_write(axi_txn t, bit no_delay = 0);
        @(posedge ACLK); #0.1;
        fork
            begin
                if (!no_delay) repeat ($urandom_range(0, 2)) begin @(posedge ACLK); #0.1; end
                AWID = t.id; AWADDR = t.addr; AWLEN = t.len; AWSIZE = t.size;
                AWBURST = t.burst; AWPROT = t.prot; AWLOCK = 1'($urandom);
                AWCACHE = 4'($urandom); AWVALID = 1;
                do @(negedge ACLK); while (!AWREADY);
                @(posedge ACLK); #0.1;
                AWVALID = 0;
            end
            begin
                for (int b = 0; b <= t.len; b++) begin
                    if (!no_delay) repeat ($urandom_range(0, 3) == 0 ? $urandom_range(1, 3) : 0)
                        begin @(posedge ACLK); #0.1; end
                    WDATA = t.wdata[b]; WSTRB = t.wstrb[b]; WLAST = (b == t.len); WVALID = 1;
                    do @(negedge ACLK); while (!WREADY);
                    @(posedge ACLK); #0.1;
                    WVALID = 0; WLAST = 0;
                end
            end
        join
        BREADY = no_delay ? 1'b1 : 1'($urandom);
        forever begin
            @(negedge ACLK);
            if (BVALID && BREADY) begin @(posedge ACLK); #0.1; break; end
            @(posedge ACLK); #0.1;
            BREADY = no_delay ? 1'b1 : ($urandom_range(0, 2) != 0);
        end
        BREADY = 0;
        ok_writes++;
    endtask

    task automatic do_read(axi_txn t, bit no_delay = 0);
        bit done = 0;
        @(posedge ACLK); #0.1;
        if (!no_delay) repeat ($urandom_range(0, 2)) begin @(posedge ACLK); #0.1; end
        ARID = t.id; ARADDR = t.addr; ARLEN = t.len; ARSIZE = t.size;
        ARBURST = t.burst; ARPROT = t.prot; ARLOCK = 1'($urandom);
        ARCACHE = 4'($urandom); ARVALID = 1;
        do @(negedge ACLK); while (!ARREADY);
        @(posedge ACLK); #0.1;
        ARVALID = 0;
        RREADY = no_delay ? 1'b1 : 1'($urandom);
        while (!done) begin
            @(negedge ACLK);
            done = RVALID && RREADY && RLAST;
            @(posedge ACLK); #0.1;
            RREADY = no_delay ? 1'b1 : ($urandom_range(0, 3) != 0);
        end
        RREADY = 0;
        ok_reads++;
    endtask

    //-------------------------------------------------------------------------
    // APB completer model (generic, responds behind any decoded PSEL)
    //-------------------------------------------------------------------------
    logic [31:0] wcnt, wtarget;
    wire any_psel = |psel_bus;

    always @(posedge PCLK or negedge PRESETn) begin
        if (!PRESETn) begin
            wcnt <= 0; wtarget <= 0;
        end else if (any_psel && !PENABLE) begin
            wcnt    <= 0;
            wtarget <= ($urandom_range(0, 1) == 0) ? 0 : $urandom_range(0, maxwait);
        end else if (any_psel && PENABLE && !PREADY) begin
            wcnt <= wcnt + 1;
        end
    end

    assign PREADY = any_psel && PENABLE && (wcnt >= wtarget);

    always @(*) begin
        if (PREADY && !PWRITE) begin
            PRDATA = '0;
            if (!slv_err_page(PADDR))
                for (int i = 0; i < PNB; i++) PRDATA[i*8 +: 8] = slv_rd(PADDR + 32'(i));
        end else begin
            PRDATA = {PNB{8'hBD}};             // junk: must be ignored by the bridge
        end
        PSLVERR = PREADY ? slv_err_page(PADDR) : 1'b1;   // junk while not ready
    end

    always @(posedge PCLK) begin
        if (PRESETn && PREADY && PWRITE && !slv_err_page(PADDR))
            for (int i = 0; i < PNB; i++)
                if (PSTRB[i]) slv_mem[PADDR + 32'(i)] = PWDATA[i*8 +: 8];
    end

    //-------------------------------------------------------------------------
    // Expected streams
    //-------------------------------------------------------------------------
    typedef struct packed {
        logic              wr;
        logic [31:0]       addr;
        logic [PNB-1:0]    strb;
        logic [APB_DW-1:0] data;
        logic [2:0]        prot;
        logic              err;
    } apb_exp_t;
    typedef struct packed {
        logic [IDW-1:0]    id;
        logic [AXI_DW-1:0] data;
        logic [1:0]        resp;
        logic              last;
    } r_exp_t;
    typedef struct packed {
        logic [IDW-1:0]    id;
        logic [1:0]        resp;
    } b_exp_t;

    apb_exp_t apb_q[$];
    r_exp_t   r_q[$];
    b_exp_t   b_q[$];

    //-------------------------------------------------------------------------
    // Functional coverage
    //-------------------------------------------------------------------------
    class bridge_cov;
        covergroup bridge_txn_cg with function sample(bit wr, bit [1:0] burst, bit [2:0] size,
                                                       int lenc, bit err, int strbk);
            option.per_instance = 1;
            cp_dir:   coverpoint wr;
            cp_burst: coverpoint burst { bins fixed = {0}; bins incr = {1}; bins wrap = {2}; }
            cp_size:  coverpoint size  { bins s[] = {[0:MAXSIZE]}; }
            cp_len:   coverpoint lenc  { bins l0 = {0}; bins l1 = {1}; bins l2_3 = {2};
                                         bins l4_7 = {3}; bins l8_15 = {4}; bins l16p = {5}; }
            cp_err:   coverpoint err;
            cp_strb:  coverpoint strbk iff (wr) { bins full = {0}; bins partial = {1}; bins zero_beat = {2}; }
            x_dir_burst_size: cross cp_dir, cp_burst, cp_size;
            x_dir_err:        cross cp_dir, cp_err;
        endgroup
        function new(); bridge_txn_cg = new; endfunction
    endclass
    bridge_cov cov = new;

    function automatic int len_class(int len);
        return (len == 0) ? 0 : (len == 1) ? 1 : (len < 4) ? 2 : (len < 8) ? 3 : (len < 16) ? 4 : 5;
    endfunction

    int unsigned n_collide = 0, n_apb = 0, n_apb_wait = 0, n_apb_err = 0, n_skip_slices = 0;
    int unsigned psel_hits [8];
    longint unsigned last_prog_cyc = 0, acyc = 0;

    //-------------------------------------------------------------------------
    // AXI monitor / scoreboard (sample at negedge: inputs and outputs stable)
    //-------------------------------------------------------------------------
    logic [IDW-1:0] mw_id;  logic [31:0] mw_addr; logic [7:0] mw_len; logic [2:0] mw_size;
    logic [1:0]     mw_burst; logic [2:0] mw_prot;
    int             mw_beat; bit mw_err; int mw_strbk;
    bit             in_write = 0;

    logic           pr_rvalid = 0, pr_rready = 0, pr_bvalid = 0, pr_bready = 0;
    logic [AXI_DW-1:0] pr_rdata; logic [1:0] pr_rresp, pr_bresp; logic pr_rlast;
    logic [IDW-1:0] pr_rid, pr_bid;

    always @(posedge ACLK) acyc++;

    always @(negedge ACLK) if (!ARESETn || in_reset) begin
        {pr_rvalid, pr_rready, pr_bvalid, pr_bready} = '0;
    end else begin
        // ---- channel stability rules (VALID held, payload stable until READY) ----
        if (pr_rvalid && !pr_rready) begin
            if (!RVALID) fail("RVALID dropped before RREADY");
            else if (RDATA !== pr_rdata || RRESP !== pr_rresp || RLAST !== pr_rlast || RID !== pr_rid)
                fail("R payload changed while stalled");
        end
        if (pr_bvalid && !pr_bready) begin
            if (!BVALID) fail("BVALID dropped before BREADY");
            else if (BRESP !== pr_bresp || BID !== pr_bid) fail("B payload changed while stalled");
        end
        {pr_rvalid, pr_rready, pr_rdata, pr_rresp, pr_rlast, pr_rid} =
            {RVALID, RREADY, RDATA, RRESP, RLAST, RID};
        {pr_bvalid, pr_bready, pr_bresp, pr_bid} = {BVALID, BREADY, BRESP, BID};

        if (AWVALID && ARVALID && AWREADY) begin
            n_collide++;
            if (ARREADY) fail("ARREADY and AWREADY both high with AWVALID&&ARVALID");
        end

        // ---- AW ----
        if (AWVALID && AWREADY) begin
            if (in_write) fail("AW accepted while previous write still in progress");
            {mw_id, mw_addr, mw_len, mw_size, mw_burst, mw_prot} =
                {AWID, AWADDR, AWLEN, AWSIZE, AWBURST, AWPROT};
            mw_beat = 0; mw_err = 0; mw_strbk = 0; in_write = 1;
            last_prog_cyc = acyc;
        end

        // ---- W ----
        if (WVALID && WREADY) begin
            logic [31:0] ba, base;
            apb_exp_t e;
            logic [NB-1:0] lg;
            if (!in_write) fail("W accepted with no write in progress");
            ba   = beat_addr(mw_addr, mw_beat, mw_burst, mw_size, mw_len);
            base = ba & ~32'(NB - 1);
            lg   = legal_lanes(ba, mw_size);
            if (WSTRB == '0)       mw_strbk = 2;
            else if (WSTRB != lg && mw_strbk == 0) mw_strbk = 1;
            if (WLAST !== (mw_beat == mw_len)) fail("TB drove bad WLAST");
            for (int k = 0; k < RATIO; k++) begin
                if (|WSTRB[k*PNB +: PNB]) begin
                    e.wr   = 1;
                    e.addr = base + 32'(k * PNB);
                    e.strb = WSTRB[k*PNB +: PNB];
                    e.data = WDATA[k*APB_DW +: APB_DW];
                    e.prot = mw_prot;
                    e.err  = is_err(e.addr);
                    apb_q.push_back(e);
                    mw_err |= e.err;
                    if (!e.err)
                        for (int i = 0; i < PNB; i++)
                            if (e.strb[i]) ref_mem[e.addr + 32'(i)] = e.data[i*8 +: 8];
                end else begin
                    n_skip_slices++;
                end
            end
            mw_beat++;
            if (mw_beat == mw_len + 1) begin
                b_q.push_back('{id: mw_id, resp: mw_err ? 2'b10 : 2'b00});
                cov.bridge_txn_cg.sample(1, mw_burst, mw_size, len_class(mw_len), mw_err, mw_strbk);
                in_write = 0;
            end
            last_prog_cyc = acyc;
        end

        // ---- B ----
        if (BVALID && BREADY) begin
            b_exp_t x;
            if (b_q.size() == 0) fail("unexpected B response");
            else begin
                x = b_q.pop_front();
                if (BID !== x.id || BRESP !== x.resp)
                    fail($sformatf("B mismatch: got id=%0h resp=%0b exp id=%0h resp=%0b",
                                   BID, BRESP, x.id, x.resp));
            end
            last_prog_cyc = acyc;
        end

        // ---- AR: expected APB reads + R beats from reference memory ----
        if (ARVALID && ARREADY) begin
            logic [31:0] ba, base;
            apb_exp_t e;
            r_exp_t   rx;
            bit       any_err = 0;
            for (int b = 0; b <= ARLEN; b++) begin
                ba   = beat_addr(ARADDR, b, ARBURST, ARSIZE, ARLEN);
                base = ba & ~32'(NB - 1);
                rx.id = ARID; rx.data = '0; rx.resp = 2'b00; rx.last = (b == ARLEN);
                for (int k = 0; k < RATIO; k++) begin
                    e      = '0;
                    e.wr   = 0;
                    e.addr = base + 32'(k * PNB);
                    e.prot = ARPROT;
                    e.err  = is_err(e.addr);
                    apb_q.push_back(e);
                    if (e.err) rx.resp = 2'b10;
                    else for (int i = 0; i < PNB; i++)
                        rx.data[k*APB_DW + i*8 +: 8] = ref_rd(e.addr + 32'(i));
                end
                any_err |= (rx.resp != 0);
                r_q.push_back(rx);
            end
            cov.bridge_txn_cg.sample(0, ARBURST, ARSIZE, len_class(ARLEN), any_err, 0);
            last_prog_cyc = acyc;
        end

        // ---- R ----
        if (RVALID && RREADY) begin
            r_exp_t x;
            if (r_q.size() == 0) fail("unexpected R beat");
            else begin
                x = r_q.pop_front();
                if (RID !== x.id || RRESP !== x.resp || RLAST !== x.last || RDATA !== x.data)
                    fail($sformatf("R mismatch: got id=%0h resp=%0b last=%0b data=%h | exp id=%0h resp=%0b last=%0b data=%h",
                                   RID, RRESP, RLAST, RDATA, x.id, x.resp, x.last, x.data));
            end
            last_prog_cyc = acyc;
        end
    end

    //-------------------------------------------------------------------------
    // APB monitor: protocol checks + transfer compare (sample at negedge PCLK)
    //-------------------------------------------------------------------------
    logic [7:0]  pp_sel = 0; logic pp_en = 0, pp_wait = 0, pp_wr = 0;
    logic [31:0] pp_addr = 0; logic [PNB-1:0] pp_strb = 0; logic [APB_DW-1:0] pp_wdata = 0;
    logic [2:0]  pp_prot = 0;
    int unsigned cur_wait = 0;

    always @(negedge PCLK) if (!PRESETn || in_reset) begin
        pp_sel = 0; pp_en = 0; pp_wait = 0;
    end else begin
        bit active, done, stable;
        active = any_psel || PENABLE;
        done   = PENABLE && (!any_psel || PREADY);
        stable = (PADDR == pp_addr) && (PWRITE == pp_wr) && (PPROT == pp_prot) &&
                 (!PWRITE || (PWDATA == pp_wdata && PSTRB == pp_strb));

        if (any_psel) begin
            if (!$onehot(psel_bus)) fail($sformatf("PSEL not one-hot: %b", psel_bus));
            if (psel_bus != decode(PADDR))
                fail($sformatf("PSEL %b does not match decode of PADDR %h", psel_bus, PADDR));
        end
        if (pp_sel != 0 && !pp_en && !PENABLE)
            fail("SETUP phase not followed by ACCESS");
        if (pp_wait && !(PENABLE && psel_bus == pp_sel && stable))
            fail("APB signals changed / PENABLE dropped during wait states");
        if (PENABLE && any_psel && !(pp_sel == psel_bus && stable))
            fail($sformatf("ACCESS without matching SETUP (PADDR=%h)", PADDR));
        if (PENABLE && !any_psel && is_mapped(PADDR))
            fail("PENABLE with no PSEL for a mapped address");
        if (active && !PWRITE && PSTRB != 0) fail("PSTRB non-zero on APB read");
        if (active && PADDR[$clog2(PNB)-1:0] != 0) fail($sformatf("unaligned PADDR %h", PADDR));

        if (PENABLE && !done) cur_wait++;
        if (done) begin
            apb_exp_t x;
            n_apb++;
            n_apb_wait += cur_wait; cur_wait = 0;
            if (any_psel) psel_hits[PADDR[18:16]]++;
            if (is_err(PADDR)) n_apb_err++;
            if (apb_q.size() == 0) fail($sformatf("unexpected APB transfer PADDR=%h", PADDR));
            else begin
                x = apb_q.pop_front();
                if (PWRITE !== x.wr || PADDR !== x.addr || PPROT !== x.prot ||
                    (x.wr && (PSTRB !== x.strb || PWDATA !== x.data)))
                    fail($sformatf("APB mismatch: got wr=%0b addr=%h prot=%0d strb=%b data=%h | exp wr=%0b addr=%h prot=%0d strb=%b data=%h",
                                   PWRITE, PADDR, PPROT, PSTRB, PWDATA, x.wr, x.addr, x.prot, x.strb, x.data));
            end
        end
        pp_sel = psel_bus; pp_en = PENABLE; pp_wait = PENABLE && !done && any_psel;
        pp_addr = PADDR; pp_wr = PWRITE; pp_strb = PSTRB; pp_wdata = PWDATA; pp_prot = PPROT;
    end

    //-------------------------------------------------------------------------
    // Directed sequences
    //-------------------------------------------------------------------------
    function automatic axi_txn mk(bit wr, logic [31:0] addr, int len, int size, logic [1:0] burst);
        axi_txn t = new;
        t.wr = wr; t.id = IDW'($urandom); t.addr = addr; t.len = 8'(len);
        t.size = 3'(size); t.burst = burst; t.prot = 3'($urandom);
        if (wr) fill_wdata(t, 0, 0);
        return t;
    endfunction

    task automatic directed();
        axi_txn t, u;
        $display("[%0t] --- directed: full-width write/read to every window", $time);
        for (int s = 0; s < 8; s++) begin
            do_write(mk(1, 32'h3000_0040 | (s << 16), 0, MAXSIZE, 2'b01), 1);
            do_read (mk(0, 32'h3000_0040 | (s << 16), 0, MAXSIZE, 2'b01), 1);
        end
        $display("[%0t] --- directed: narrow sizes, every byte lane", $time);
        for (int sz = 0; sz < MAXSIZE; sz++)
            for (int o = 0; o < NB; o += (1 << sz)) begin
                do_write(mk(1, 32'h3003_0100 + o, 0, sz, 2'b01), 1);
                do_read (mk(0, 32'h3003_0100 + o, 0, sz, 2'b01), 1);
            end
        $display("[%0t] --- directed: sparse / zero strobes", $time);
        t = mk(1, 32'h3001_0200, 3, MAXSIZE, 2'b01);
        t.wstrb[0] = '0;                                // whole beat skipped
        t.wstrb[1] = NB'(1) << (NB - 1);                // only last slice
        t.wstrb[2] = NB'(1);                            // only first slice
        t.wstrb[3] = '0;                                // last beat empty
        do_write(t, 1);
        do_read(mk(0, 32'h3001_0200, 3, MAXSIZE, 2'b01), 1);
        $display("[%0t] --- directed: unmapped + completer error page", $time);
        do_write(mk(1, 32'h3008_0000, 1, MAXSIZE, 2'b01), 1);
        do_read (mk(0, 32'h3008_0000, 1, MAXSIZE, 2'b01), 1);
        do_write(mk(1, 32'h2000_0000, 0, 2, 2'b01), 1);
        do_read (mk(0, 32'h2000_0000, 0, 2, 2'b01), 1);
        do_write(mk(1, 32'h3002_F000, 0, MAXSIZE, 2'b01), 1);
        do_read (mk(0, 32'h3002_F000, 0, MAXSIZE, 2'b01), 1);
        $display("[%0t] --- directed: WRAP / FIXED / 256-beat INCR", $time);
        do_write(mk(1, 32'h3004_0000 + 2 * NB, 3, MAXSIZE, 2'b10), 1);
        do_read (mk(0, 32'h3004_0000 + 2 * NB, 3, MAXSIZE, 2'b10), 1);
        do_write(mk(1, 32'h3004_0300 + 4, 15, 2, 2'b10), 1);
        do_read (mk(0, 32'h3004_0300 + 4, 15, 2, 2'b10), 1);
        do_write(mk(1, 32'h3005_0010, 7, MAXSIZE, 2'b00), 1);
        do_read (mk(0, 32'h3005_0010, 7, MAXSIZE, 2'b00), 1);
        do_write(mk(1, 32'h3006_0000, 255, 0, 2'b01), 1);
        do_read (mk(0, 32'h3006_0000, 255, 0, 2'b01), 1);
        $display("[%0t] --- directed: AW and AR presented in the same cycle", $time);
        t = mk(1, 32'h3007_0000, 1, MAXSIZE, 2'b01);
        u = mk(0, 32'h3007_0000, 1, MAXSIZE, 2'b01);
        fork do_write(t, 1); do_read(u, 1); join
    endtask

    //-------------------------------------------------------------------------
    // Main
    //-------------------------------------------------------------------------
    bit timed_out = 0;

    initial begin
        wait (ARESETn && PRESETn);
        repeat (10) @(posedge ACLK);
        if (!$test$plusargs("NO_DIRECTED")) directed();
        $display("[%0t] --- random: %0d transactions, concurrent write/read masters, %0d mid-traffic resets (%s)",
                 $time, ntxn, n_resets, reset_domain);
        // Traffic is split into n_resets+1 segments; every segment but the last
        // is cut short by a reset asserted at a random point mid-traffic.
        for (int seg = 0; seg <= n_resets; seg++) begin
            // Aim the reset at FSM state (seg % 12): 0-7 AXI states, 8-11 APB states.
            // (Kept outside the fork: a local declared in the branch trips a V3Scope internal error.)
            rst_tgt = seg % 12;
            fork
                fork
                    for (int i = 0; i < ntxn / 2 / (n_resets + 1); i++) begin
                        do_write(gen_txn(1));
                        repeat ($urandom_range(0, 4)) @(posedge ACLK);
                    end
                    for (int i = 0; i < (ntxn - ntxn / 2) / (n_resets + 1); i++) begin
                        do_read(gen_txn(0));
                        repeat ($urandom_range(0, 4)) @(posedge ACLK);
                    end
                join
                if (seg < n_resets) begin
                    repeat ($urandom_range(500, 5000)) @(posedge ACLK);
                    fork
                        if (rst_tgt < 8) wait (dut.axi_state == 4'(rst_tgt));
                        else             wait (dut.apb_state == 2'(rst_tgt - 8));
                        repeat (20000) @(posedge ACLK);
                    join_any
                    disable fork;
                end
                else forever @(posedge ACLK);
            join_any
            disable fork;
            if (seg < n_resets) mid_reset();
        end
        repeat (50) @(posedge PCLK);
        finish_test();
    end

    //-------------------------------------------------------------------------
    // Mid-traffic reset (+RESETS=<n> +RESET_DOMAIN=both|axi|apb)
    //   both : ARESETn and PRESETn asserted together, asynchronously to both clocks
    //   axi  : only ARESETn (characterisation: bridge assumes per-domain resets
    //   apb  : only PRESETn  are both applied; one-sided reset is not claimed)
    // After release the TB flushes its expected queues and re-syncs the
    // reference memory to the completer (writes may have been cut mid-burst).
    //-------------------------------------------------------------------------
    int unsigned n_resets;
    string       reset_domain;
    int unsigned n_reset_done = 0;
    int          rst_tgt = 0;
    bit          in_reset = 0;

    initial begin
        if (!$value$plusargs("RESETS=%d", n_resets))          n_resets     = 0;
        if (!$value$plusargs("RESET_DOMAIN=%s", reset_domain)) reset_domain = "both";
    end

    // Which FSM states the bridge was in when a reset hit. Only constructed
    // when resets are enabled, so plain runs don't report empty bins.
    class reset_cov;
        covergroup bridge_reset_cg with function sample(bit [3:0] axi_st, bit [1:0] apb_st);
            option.per_instance = 1;
            cp_axi_state: coverpoint axi_st {
                bins idle = {0}; bins wr_data_wait = {1}; bins wr_push_cmd = {2}; bins wr_wait_resp = {3};
                bins wr_resp = {4}; bins rd_push_cmd = {5}; bins rd_wait_resp = {6}; bins rd_resp = {7}; }
            cp_apb_state: coverpoint apb_st {
                bins idle = {0}; bins setup = {1}; bins access = {2}; bins push_resp = {3}; }
        endgroup
        function new(); bridge_reset_cg = new; endfunction
    endclass
    reset_cov rcov;

    task automatic mid_reset();
        bit do_a = (reset_domain != "apb");
        bit do_p = (reset_domain != "axi");
        #($urandom_range(1, 999) / 1000.0);               // asynchronous to both clocks, < ACLK half period
        if (rcov == null) rcov = new;
        rcov.bridge_reset_cg.sample(dut.axi_state, dut.apb_state);
        $display("[%0t] --- reset #%0d (%s) asserted mid-traffic: axi_state=%0d apb_state=%0d",
                 $time, n_reset_done + 1, reset_domain, dut.axi_state, dut.apb_state);
        in_reset = 1;
        AWVALID = 0; WVALID = 0; WLAST = 0; ARVALID = 0; BREADY = 0; RREADY = 0;
        if (do_a) ARESETn = 0;
        if (do_p) PRESETn = 0;
        #0.5;
        if (do_a && (BVALID || RVALID)) fail("BVALID/RVALID not low during ARESETn");
        if (do_p && (PENABLE || psel_bus != 0)) fail("PENABLE/PSEL not low during PRESETn");
        repeat ($urandom_range(2, 6)) @(posedge PCLK);
        if (do_a) begin @(posedge ACLK); #0.1 ARESETn = 1; end
        if (do_p) begin @(posedge PCLK); #0.1 PRESETn = 1; end
        repeat (4) @(posedge PCLK);
        apb_q.delete(); r_q.delete(); b_q.delete();
        in_write = 0; cur_wait = 0;
        ref_mem.delete();
        foreach (slv_mem[a]) ref_mem[a] = slv_mem[a];
        in_reset = 0;
        last_prog_cyc = acyc;
        n_reset_done++;
    endtask

    // Hang detector: no AXI handshake for a long time
    always @(posedge ACLK) if (ARESETn && (acyc - last_prog_cyc) > 200000 && !timed_out) begin
        timed_out = 1;
        fail($sformatf("HANG: no AXI handshake for 200000 ACLK cycles (axi_state=%0d apb_state=%0d PADDR=%h PENABLE=%b PSEL=%b)",
                       dut.axi_state, dut.apb_state, PADDR, PENABLE, psel_bus));
        finish_test();
    end

    // Fail fast: stop once errors pile up, or if the run exceeds its time budget
    // (a corrupted burst can keep handshaking forever without tripping the hang check).
    always @(posedge ACLK) if (!timed_out && (n_err >= 20 || acyc > 64'd400 * ntxn * 1000 + 64'd2_000_000)) begin
        timed_out = 1;
        if (n_err < 20) fail("simulation time budget exceeded");
        finish_test();
    end

    task automatic finish_test();
        int mem_mis = 0;
        if (apb_q.size()) fail($sformatf("%0d expected APB transfers never seen", apb_q.size()));
        if (r_q.size())   fail($sformatf("%0d expected R beats never seen", r_q.size()));
        if (b_q.size())   fail($sformatf("%0d expected B responses never seen", b_q.size()));
        foreach (ref_mem[a]) if (slv_rd(a) !== ref_mem[a]) mem_mis++;
        foreach (slv_mem[a]) if (ref_rd(a) !== slv_mem[a]) mem_mis++;
        if (mem_mis) fail($sformatf("%0d bytes differ between completer and reference memory", mem_mis));
        $display("");
        $display("==================== SUMMARY ====================");
        $display("writes=%0d reads=%0d apb_xfers=%0d apb_err_xfers=%0d apb_wait_cycles=%0d skipped_slices=%0d",
                 ok_writes, ok_reads, n_apb, n_apb_err, n_apb_wait, n_skip_slices);
        $display("AW/AR same-cycle collisions=%0d  psel hits spi..debug = %0d %0d %0d %0d %0d %0d %0d %0d",
                 n_collide, psel_hits[0], psel_hits[1], psel_hits[2], psel_hits[3],
                 psel_hits[4], psel_hits[5], psel_hits[6], psel_hits[7]);
        $display("functional coverage (bridge_txn_cg) = %.1f%%", cov.bridge_txn_cg.get_inst_coverage());
        if (rcov != null)
            $display("reset coverage (bridge_reset_cg)  = %.1f%%  (%0d resets)",
                     rcov.bridge_reset_cg.get_inst_coverage(), n_reset_done);
        $display("errors=%0d", n_err);
        if (n_err == 0) $display("TEST PASSED");
        else            $display("TEST FAILED");
        $finish;
    endtask

endmodule
