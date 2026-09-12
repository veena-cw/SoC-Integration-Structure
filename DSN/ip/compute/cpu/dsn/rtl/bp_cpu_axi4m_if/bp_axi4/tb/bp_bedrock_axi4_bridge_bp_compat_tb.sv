`timescale 1ns/1ps

`include "bp_common_defines.svh"
`include "bp_be_defines.svh"
`include "bp_me_defines.svh"
`include "bsg_noc_links.svh"

module bp_bedrock_axi4_bridge_bp_compat_tb
  import bp_common_pkg::*;
 #(parameter bp_params_e bp_params_p = e_bp_default_cfg
   `declare_bp_proc_params(bp_params_p)
   `declare_bp_bedrock_if_widths(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p)
  )
  ();

  `declare_bp_bedrock_if(paddr_width_p, lce_id_width_p, cce_id_width_p, did_width_p, lce_assoc_p);

  // ID_WIDTH for the AXI side is independent of BedRock's own ID fields;
  // pick a width that comfortably covers the fabric's needs.
  localparam int ID_WIDTH = 4;

  // This bridge release requires CPU_DATA_WIDTH == AXI_DATA_WIDTH (see
  // bp_bedrock_axi4_bridge.sv header). Tie the AXI fabric width to
  // BlackParrot's own bedrock_fill_width_p so that requirement holds
  // here. If your real fabric is narrower/wider than
  // bedrock_fill_width_p, that is exactly the asymmetric-width case
  // flagged as unimplemented - add a width-conversion stage ahead of
  // this bridge before wiring it to such a fabric.
  localparam int AXI_DATA_WIDTH = bedrock_fill_width_p;
  localparam int BYTES_PER_BEAT = AXI_DATA_WIDTH / 8;
  localparam int MAX_BEATS      = 8;   // 128B message / >=16B-per-beat fabrics

  // ------------------------------------------------------------------
  // Clocks / resets
  // ------------------------------------------------------------------
  logic cpu_clk_i, cpu_reset_i;
  initial cpu_clk_i = 1'b0;
  always #0.333333 cpu_clk_i = ~cpu_clk_i;   // 1.5 GHz

  logic axi_clk_i, axi_reset_i;
  initial axi_clk_i = 1'b0;
  always #1.25 axi_clk_i = ~axi_clk_i;       // 400 MHz

  // ------------------------------------------------------------------
  // BFM signal bundle - named/directed exactly like bp_processor's
  // "Outgoing I/O" port group.
  //
  // SWAP-IN INSTRUCTIONS: to run this same test sequence against the
  // real core instead of the BFM tasks below, delete the "BP-side BFM"
  // section further down and instantiate:
  //
  //   bp_processor #(.bp_params_p(bp_params_p)) dut_bp
  //    (.clk_i(cpu_clk_i), .rt_clk_i(cpu_clk_i), .reset_i(cpu_reset_i)
  //     ,.my_did_i('0), .host_did_i('0)
  //     ,.mem_fwd_header_o(bp_mem_fwd_header_o)
  //     ,.mem_fwd_data_o(bp_mem_fwd_data_o)
  //     ,.mem_fwd_v_o(bp_mem_fwd_v_o)
  //     ,.mem_fwd_ready_and_i(bp_mem_fwd_ready_and_i)
  //     ,.mem_rev_header_i(bp_mem_rev_header_i)
  //     ,.mem_rev_data_i(bp_mem_rev_data_i)
  //     ,.mem_rev_v_i(bp_mem_rev_v_i)
  //     ,.mem_rev_ready_and_o(bp_mem_rev_ready_and_o)
  //     ,.mem_fwd_header_i('0), .mem_fwd_data_i('0), .mem_fwd_v_i(1'b0)
  //     ,.mem_fwd_ready_and_o()
  //     ,.mem_rev_header_o(), .mem_rev_data_o(), .mem_rev_v_o()
  //     ,.mem_rev_ready_and_i(1'b1)
  //     ,.dma_pkt_o(), .dma_pkt_v_o(), .dma_pkt_ready_and_i('0)
  //     ,.dma_data_i('0), .dma_data_v_i('0), .dma_data_ready_and_o()
  //     ,.dma_data_o(), .dma_data_v_o(), .dma_data_ready_and_i('0)
  //     );
  //
  // (the "Incoming I/O" and DMA ports are tied off/unused here since this
  // TB only exercises the memory-forward/reverse path into our bridge)
  // ------------------------------------------------------------------
  logic [mem_fwd_header_width_lp-1:0] bp_mem_fwd_header_o;
  logic [bedrock_fill_width_p-1:0]    bp_mem_fwd_data_o;
  logic                               bp_mem_fwd_v_o;
  logic                               bp_mem_fwd_ready_and_i;

  logic [mem_rev_header_width_lp-1:0] bp_mem_rev_header_i;
  logic [bedrock_fill_width_p-1:0]    bp_mem_rev_data_i;
  logic                               bp_mem_rev_v_i;
  logic                               bp_mem_rev_ready_and_o;

  // ------------------------------------------------------------------
  // Bridge under test
  // ------------------------------------------------------------------
  logic mem_fwd_ready_and_o;
  logic mem_rev_v_o;
  logic [mem_rev_header_width_lp-1:0] mem_rev_header_o;
  logic [bedrock_fill_width_p-1:0]    mem_rev_data_o;

  logic [ID_WIDTH-1:0]        awid;
  logic [paddr_width_p-1:0]   awaddr;
  logic [7:0]                 awlen;
  logic [2:0]                 awsize;
  logic [1:0]                 awburst;
  logic                       awlock;
  logic [3:0]                 awcache;
  logic [2:0]                 awprot;
  logic [3:0]                 awqos;
  logic                       awvalid;
  logic                       awready;

  logic [AXI_DATA_WIDTH-1:0]   wdata;
  logic [AXI_DATA_WIDTH/8-1:0] wstrb;
  logic                        wlast;
  logic                        wvalid;
  logic                        wready;

  logic [ID_WIDTH-1:0] bid;
  logic [1:0]           bresp;
  logic                 bvalid;
  logic                 bready;

  logic [ID_WIDTH-1:0]       arid;
  logic [paddr_width_p-1:0]  araddr;
  logic [7:0]                arlen;
  logic [2:0]                arsize;
  logic [1:0]                arburst;
  logic                      arlock;
  logic [3:0]                arcache;
  logic [2:0]                arprot;
  logic [3:0]                arqos;
  logic                      arvalid;
  logic                      arready;

  logic [ID_WIDTH-1:0]       rid;
  logic [AXI_DATA_WIDTH-1:0] rdata;
  logic [1:0]                 rresp;
  logic                       rlast;
  logic                       rvalid;
  logic                       rready;

  bp_bedrock_axi4_bridge #(
      .ADDR_WIDTH          (paddr_width_p),
      .ID_WIDTH            (ID_WIDTH),
      .CPU_DATA_WIDTH      (bedrock_fill_width_p),
      .AXI_DATA_WIDTH      (AXI_DATA_WIDTH),
      .LCE_ID_WIDTH        (lce_id_width_p),
      .CCE_ID_WIDTH        (cce_id_width_p),
      .DID_WIDTH           (did_width_p),
      .LCE_ASSOC           (lce_assoc_p),
      .MEM_FWD_HEADER_WIDTH(mem_fwd_header_width_lp),
      .MEM_REV_HEADER_WIDTH(mem_rev_header_width_lp),
      .FIFO_DEPTH          (8)
  ) dut (
      .cpu_clk_i  (cpu_clk_i),
      .cpu_reset_i(cpu_reset_i),

      // Bridge's mem_fwd_i side is driven by the BP-side "outgoing" bundle.
      .mem_fwd_header_i   (bp_mem_fwd_header_o),
      .mem_fwd_data_i     (bp_mem_fwd_data_o),
      .mem_fwd_v_i        (bp_mem_fwd_v_o),
      .mem_fwd_ready_and_o(mem_fwd_ready_and_o),

      // Bridge's mem_rev_o side feeds the BP-side "incoming" bundle.
      .mem_rev_header_o   (mem_rev_header_o),
      .mem_rev_data_o     (mem_rev_data_o),
      .mem_rev_v_o        (mem_rev_v_o),
      .mem_rev_ready_and_i(bp_mem_rev_ready_and_o),

      .axi_clk_i  (axi_clk_i),
      .axi_reset_i(axi_reset_i),

      .m_axi_awid   (awid),   .m_axi_awaddr (awaddr),  .m_axi_awlen (awlen),
      .m_axi_awsize (awsize), .m_axi_awburst(awburst), .m_axi_awlock(awlock),
      .m_axi_awcache(awcache),.m_axi_awprot (awprot),  .m_axi_awqos (awqos),
      .m_axi_awvalid(awvalid),.m_axi_awready(awready),

      .m_axi_wdata (wdata), .m_axi_wstrb(wstrb), .m_axi_wlast(wlast),
      .m_axi_wvalid(wvalid),.m_axi_wready(wready),

      .m_axi_bid(bid), .m_axi_bresp(bresp), .m_axi_bvalid(bvalid), .m_axi_bready(bready),

      .m_axi_arid   (arid),   .m_axi_araddr (araddr),  .m_axi_arlen (arlen),
      .m_axi_arsize (arsize), .m_axi_arburst(arburst), .m_axi_arlock(arlock),
      .m_axi_arcache(arcache),.m_axi_arprot (arprot),  .m_axi_arqos (arqos),
      .m_axi_arvalid(arvalid),.m_axi_arready(arready),

      .m_axi_rid(rid), .m_axi_rdata(rdata), .m_axi_rresp(rresp),
      .m_axi_rlast(rlast), .m_axi_rvalid(rvalid), .m_axi_rready(rready)
  );

  // Feed the bridge's ready output back to the BP-side bundle.
  assign bp_mem_fwd_ready_and_i = mem_fwd_ready_and_o;
  assign bp_mem_rev_header_i    = mem_rev_header_o;
  assign bp_mem_rev_data_i      = mem_rev_data_o;
  assign bp_mem_rev_v_i         = mem_rev_v_o;

  // ------------------------------------------------------------------
  // Byte-addressable, byte-strobe-aware AXI memory-slave model.
  // ------------------------------------------------------------------
  localparam int MEM_BYTES = 65536;
  logic [7:0] mem_bytes [0:MEM_BYTES-1];

  logic [paddr_width_p-1:0] write_addr_q, read_addr_q;
  logic [7:0]               write_len_q, write_count_q, read_len_q, read_count_q;
  logic                     write_active_q, read_active_q;

  integer i, b, errors;
  integer exp_beats_m1;
  logic [2:0] exp_axsize;

  always_ff @(posedge axi_clk_i) begin
    if (axi_reset_i) begin
      awready <= 1'b0; wready <= 1'b0;
      bid <= '0; bresp <= 2'b00; bvalid <= 1'b0;
      arready <= 1'b0;
      rid <= '0; rdata <= '0; rresp <= 2'b00; rlast <= 1'b0; rvalid <= 1'b0;
      write_addr_q <= '0; write_len_q <= '0; write_count_q <= '0; write_active_q <= 1'b0;
      read_addr_q  <= '0; read_len_q  <= '0; read_count_q  <= '0; read_active_q  <= 1'b0;
      for (i = 0; i < MEM_BYTES; i = i + 1) mem_bytes[i] = 8'h00;
    end
    else begin
      awready <= !write_active_q && !bvalid;
      wready  <= write_active_q;
      arready <= !read_active_q && !rvalid;

      if (awvalid && awready) begin
        write_addr_q   <= awaddr;
        write_len_q    <= awlen;
        write_count_q  <= 8'd0;
        write_active_q <= 1'b1;

        $display("[%0t] AXI AW: ADDR=%h LEN=%0d SIZE=%0d BURST=%b",
                 $time, awaddr, awlen, awsize, awburst);

        if (awlen !== exp_beats_m1[7:0]) begin
          $display("[%0t] ERROR: AWLEN mismatch, expected %0d got %0d",
                   $time, exp_beats_m1, awlen);
          errors = errors + 1;
        end
        if (awsize !== exp_axsize) begin
          $display("[%0t] ERROR: AWSIZE mismatch, expected %0d got %0d",
                   $time, exp_axsize, awsize);
          errors = errors + 1;
        end
        if (awburst !== 2'b01) begin
          $display("[%0t] ERROR: AWBURST expected INCR, got %b", $time, awburst);
          errors = errors + 1;
        end
      end

      if (wvalid && wready) begin
        for (b = 0; b < BYTES_PER_BEAT; b = b + 1)
          if (wstrb[b])
            mem_bytes[write_addr_q + write_count_q*BYTES_PER_BEAT + b] <= wdata[b*8 +: 8];

        $display("[%0t] AXI W: BEAT=%0d STRB=%h LAST=%b", $time, write_count_q, wstrb, wlast);

        if (write_count_q == write_len_q) begin
          if (wlast !== 1'b1) begin
            $display("[%0t] ERROR: WLAST must be 1 on final beat", $time);
            errors = errors + 1;
          end
          write_active_q <= 1'b0;
          bid    <= awid;
          bresp  <= 2'b00;
          bvalid <= 1'b1;
        end
        else begin
          if (wlast !== 1'b0) begin
            $display("[%0t] ERROR: WLAST asserted early on beat %0d", $time, write_count_q);
            errors = errors + 1;
          end
          write_count_q <= write_count_q + 1'b1;
        end
      end

      if (bvalid && bready) bvalid <= 1'b0;

      if (arvalid && arready) begin
        read_addr_q   <= araddr;
        read_len_q    <= arlen;
        read_count_q  <= 8'd0;
        read_active_q <= 1'b1;

        $display("[%0t] AXI AR: ADDR=%h LEN=%0d SIZE=%0d BURST=%b",
                 $time, araddr, arlen, arsize, arburst);

        if (arlen !== exp_beats_m1[7:0]) begin
          $display("[%0t] ERROR: ARLEN mismatch, expected %0d got %0d",
                   $time, exp_beats_m1, arlen);
          errors = errors + 1;
        end
        if (arsize !== exp_axsize) begin
          $display("[%0t] ERROR: ARSIZE mismatch, expected %0d got %0d",
                   $time, exp_axsize, arsize);
          errors = errors + 1;
        end
      end

      if (read_active_q && !rvalid) begin
        for (b = 0; b < BYTES_PER_BEAT; b = b + 1)
          rdata[b*8 +: 8] <= mem_bytes[read_addr_q + read_count_q*BYTES_PER_BEAT + b];
        rid    <= arid;
        rresp  <= 2'b00;
        rlast  <= (read_count_q == read_len_q);
        rvalid <= 1'b1;
      end

      if (rvalid && rready) begin
        $display("[%0t] AXI R: BEAT=%0d DATA=%h LAST=%b", $time, read_count_q, rdata, rlast);

        if (read_count_q == read_len_q) begin
          if (rlast !== 1'b1) begin
            $display("[%0t] ERROR: RLAST must be 1 on beat %0d", $time, read_count_q);
            errors = errors + 1;
          end
          read_active_q <= 1'b0;
        end
        else begin
          if (rlast !== 1'b0) begin
            $display("[%0t] ERROR: RLAST asserted early on beat %0d", $time, read_count_q);
            errors = errors + 1;
          end
          read_count_q <= read_count_q + 1'b1;
        end
        rvalid <= 1'b0;
      end
    end
  end

  // ------------------------------------------------------------------
  // BedRock reverse-channel monitor: captures every mem_rev flit the
  // bridge sends toward the BP side, so the driver can assert on
  // header content and beat count, not just print it.
  // ------------------------------------------------------------------
  bp_bedrock_mem_rev_header_s rev_hdr_q [$];
  logic [bedrock_fill_width_p-1:0] rev_data_q [$];

  always @(posedge cpu_clk_i) begin
    if (!cpu_reset_i && bp_mem_rev_v_i && bp_mem_rev_ready_and_o) begin
      rev_hdr_q.push_back(bp_bedrock_mem_rev_header_s'(bp_mem_rev_header_i));
      rev_data_q.push_back(bp_mem_rev_data_i);
      $display("[%0t] BEDROCK REV (BP-side): HEADER=%h DATA=%h",
               $time, bp_mem_rev_header_i, bp_mem_rev_data_i);
    end
  end

  // ------------------------------------------------------------------
  // BP-side BFM: drives bp_mem_fwd_* exactly as bp_processor would,
  // consumes bp_mem_rev_* exactly as bp_processor would (always ready
  // in this test, matching mem_rev_ready_and_o's usual behavior for a
  // simple in-order consumer).
  // ------------------------------------------------------------------
  task automatic bedrock_write(
      input logic [paddr_width_p-1:0] addr,
      input bp_bedrock_msg_size_e     sz,
      input int                       beats,
      input logic [511:0]             data [MAX_BEATS]   // widened scratch, sliced per beat
  );
    bp_bedrock_mem_fwd_header_s hdr;
    int k;
    begin
      hdr = '0;
      hdr.addr         = addr;
      hdr.size         = sz;
      hdr.msg_type.fwd = e_bedrock_mem_wr;

      for (k = 0; k < beats; k = k + 1) begin
        @(negedge cpu_clk_i);
        bp_mem_fwd_header_o = (k == 0) ? hdr : '0;
        bp_mem_fwd_data_o   = data[k][bedrock_fill_width_p-1:0];
        bp_mem_fwd_v_o      = 1'b1;
        do @(posedge cpu_clk_i); while (!bp_mem_fwd_ready_and_i);
      end

      @(negedge cpu_clk_i);
      bp_mem_fwd_v_o      = 1'b0;
      bp_mem_fwd_data_o   = '0;
      bp_mem_fwd_header_o = '0;
    end
  endtask

  task automatic bedrock_read(
      input logic [paddr_width_p-1:0] addr,
      input bp_bedrock_msg_size_e     sz
  );
    bp_bedrock_mem_fwd_header_s hdr;
    begin
      hdr = '0;
      hdr.addr         = addr;
      hdr.size         = sz;
      hdr.msg_type.fwd = e_bedrock_mem_rd;

      @(negedge cpu_clk_i);
      bp_mem_fwd_header_o = hdr;
      bp_mem_fwd_data_o   = '0;
      bp_mem_fwd_v_o      = 1'b1;
      do @(posedge cpu_clk_i); while (!bp_mem_fwd_ready_and_i);

      @(negedge cpu_clk_i);
      bp_mem_fwd_v_o      = 1'b0;
      bp_mem_fwd_header_o = '0;
    end
  endtask

  // ------------------------------------------------------------------
  // Size sweep: e_bedrock_msg_size_1 .. e_bedrock_msg_size_128
  // ------------------------------------------------------------------
  bp_bedrock_msg_size_e size_enum [8] = '{
      e_bedrock_msg_size_1,  e_bedrock_msg_size_2,  e_bedrock_msg_size_4,
      e_bedrock_msg_size_8,  e_bedrock_msg_size_16, e_bedrock_msg_size_32,
      e_bedrock_msg_size_64, e_bedrock_msg_size_128
  };
  int size_bytes_v [8] = '{1, 2, 4, 8, 16, 32, 64, 128};

  task automatic run_one_size(input int idx);
    int nbytes, beats, k, offset, exp_size_code, failed_before;
    logic [paddr_width_p-1:0]  addr;
    logic [511:0]               wdata_beats [MAX_BEATS];
    logic [BYTES_PER_BEAT-1:0]  exp_strb;
    begin
      failed_before = errors;
      nbytes = size_bytes_v[idx];
      beats  = (nbytes + BYTES_PER_BEAT - 1) / BYTES_PER_BEAT;
      if (beats < 1) beats = 1;

      // Sub-beat sizes get a deliberately unaligned offset on odd
      // indices, to exercise the partial-WSTRB path; sizes that fill
      // one or more whole beats stay beat-aligned (offset 0).
      if (nbytes < BYTES_PER_BEAT)
        offset = (idx % 2) ? (BYTES_PER_BEAT - nbytes) : 0;
      else
        offset = 0;

      addr = paddr_width_p'(40'h0000_0000_4000 + idx * 1024 + offset);

      exp_size_code = (nbytes >= BYTES_PER_BEAT) ? $clog2(BYTES_PER_BEAT) : $clog2(nbytes);
      exp_axsize    = exp_size_code[2:0];
      exp_beats_m1  = beats - 1;

      $display("");
      $display("==============================================");
      $display("BP-COMPAT SWEEP: %0d bytes, addr=%h, offset=%0d, beats=%0d, fill_width=%0d",
               nbytes, addr, offset, beats, bedrock_fill_width_p);
      $display("==============================================");

      for (k = 0; k < beats; k = k + 1)
        wdata_beats[k] = {32{8'(8'h20 + idx*8 + k)}};

      bedrock_write(addr, size_enum[idx], beats, wdata_beats);

      wait (bvalid);
      wait (!bvalid);
      repeat (3) @(posedge axi_clk_i);

      if (beats == 1) begin
        exp_strb = '0;
        for (k = 0; k < BYTES_PER_BEAT; k = k + 1)
          if ((k >= offset) && (k < offset + nbytes))
            exp_strb[k] = 1'b1;
      end
      else begin
        exp_strb = '1;
      end

      // --- write-response check: exactly 1 flit, correct msg_type/addr/size ---
      if (rev_hdr_q.size() != 1) begin
        $display("[%0t] ERROR: expected 1 write-response flit, got %0d",
                 $time, rev_hdr_q.size());
        errors = errors + 1;
      end
      else begin
        bp_bedrock_mem_rev_header_s rh;
        rh = rev_hdr_q.pop_front();
        rev_data_q.pop_front();
        if (rh.msg_type.rev !== e_bedrock_mem_wr) begin
          $display("[%0t] ERROR: write response msg_type.rev wrong", $time);
          errors = errors + 1;
        end
        if (rh.addr !== addr) begin
          $display("[%0t] ERROR: write response addr echo wrong: exp=%h got=%h",
                   $time, addr, rh.addr);
          errors = errors + 1;
        end
        if (rh.size !== size_enum[idx]) begin
          $display("[%0t] ERROR: write response size echo wrong", $time);
          errors = errors + 1;
        end
      end
      rev_hdr_q.delete();
      rev_data_q.delete();

      // --- read back and verify data + response beat count ---
      bedrock_read(addr, size_enum[idx]);
      // NOTE: Verilator's `wait()` needs to build change-detection logic
      // for its expression, and can't do that across a SystemVerilog
      // dynamic-queue method call like rev_hdr_q.size(). A clocked
      // polling loop sidesteps this entirely - it's just re-evaluated
      // procedurally after each edge, no auto-generated sensitivity list
      // required.
      while (rev_hdr_q.size() != beats) @(posedge cpu_clk_i);
      repeat (2) @(posedge cpu_clk_i);

      for (k = 0; k < beats; k = k + 1) begin
        bp_bedrock_mem_rev_header_s rh;
        logic [bedrock_fill_width_p-1:0] rd;
        rh = rev_hdr_q.pop_front();
        rd = rev_data_q.pop_front();

        if (rh.msg_type.rev !== e_bedrock_mem_rd) begin
          $display("[%0t] ERROR: read response beat %0d msg_type.rev wrong", $time, k);
          errors = errors + 1;
        end

        if (beats == 1) begin
          int bb;
          for (bb = 0; bb < BYTES_PER_BEAT; bb = bb + 1) begin
            logic [7:0] exp_byte;
            exp_byte = exp_strb[bb] ? wdata_beats[0][bb*8 +: 8] : 8'h00;
            if (rd[bb*8 +: 8] !== exp_byte) begin
              $display("[%0t] ERROR: readback byte %0d mismatch: exp=%h got=%h",
                       $time, bb, exp_byte, rd[bb*8 +: 8]);
              errors = errors + 1;
            end
          end
        end
        else begin
          if (rd !== wdata_beats[k][bedrock_fill_width_p-1:0]) begin
            $display("[%0t] ERROR: readback beat %0d mismatch: exp=%h got=%h",
                     $time, k, wdata_beats[k][bedrock_fill_width_p-1:0], rd);
            errors = errors + 1;
          end
        end
      end
      rev_hdr_q.delete();
      rev_data_q.delete();

      if (errors == failed_before)
        $display("[%0t] SIZE %0d BYTES: PASS", $time, nbytes);
      else
        $display("[%0t] SIZE %0d BYTES: FAIL (%0d new errors)",
                 $time, nbytes, errors - failed_before);
    end
  endtask

  initial begin
    int idx;

    errors = 0;
    cpu_reset_i = 1'b1;
    axi_reset_i = 1'b1;

    bp_mem_fwd_header_o    = '0;
    bp_mem_fwd_data_o      = '0;
    bp_mem_fwd_v_o         = 1'b0;
    bp_mem_rev_ready_and_o = 1'b1;

    exp_beats_m1 = 0;
    exp_axsize   = 0;

    $display("");
    $display("==============================================");
    $display("bp_bedrock_axi4_bridge <-> BlackParrot compat TB");
    $display("bp_params_p        = %s", bp_params_p.name());
    $display("paddr_width_p      = %0d", paddr_width_p);
    $display("bedrock_fill_width_p = %0d", bedrock_fill_width_p);
    $display("mem_fwd_header_width_lp = %0d", mem_fwd_header_width_lp);
    $display("mem_rev_header_width_lp = %0d", mem_rev_header_width_lp);
    $display("==============================================");

    repeat (10) @(posedge cpu_clk_i);
    repeat (4)  @(posedge axi_clk_i);

    cpu_reset_i = 1'b0;
    axi_reset_i = 1'b0;

    repeat (2) @(posedge cpu_clk_i);

    for (idx = 0; idx < 8; idx = idx + 1)
      run_one_size(idx);

    $display("");
    $display("==============================================");
    if (errors == 0)
      $display("BP-COMPAT SWEEP TEST PASS: all 8 sizes (1..128 bytes) clean");
    else
      $display("BP-COMPAT SWEEP TEST FAIL: total errors = %0d", errors);
    $display("==============================================");

    $finish;
  end

  initial begin
    $dumpfile("bp_bedrock_axi4_bridge_bp_compat_tb.vcd");
    $dumpvars(0, bp_bedrock_axi4_bridge_bp_compat_tb);
  end

endmodule
