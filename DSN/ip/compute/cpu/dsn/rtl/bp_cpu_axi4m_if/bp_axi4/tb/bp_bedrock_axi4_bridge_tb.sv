`timescale 1ns/1ps

`include "bp_common_defines.svh"
`include "bp_me_defines.svh"

import bp_common_pkg::*;

module bp_bedrock_axi4_bridge_tb;

  localparam int ADDR_WIDTH     = 40;
  localparam int CPU_DATA_WIDTH = 128;
  localparam int AXI_DATA_WIDTH = 128;
  localparam int ID_WIDTH       = 4;
  localparam int HEADER_WIDTH   = 64;
  localparam int BYTES_PER_BEAT = AXI_DATA_WIDTH / 8;
  localparam int NUM_BEATS      = 4;

  // CPU / BedRock = 1.5 GHz
  logic cpu_clk_i;
  logic cpu_reset_i;

  initial cpu_clk_i = 1'b0;
  always #0.333333 cpu_clk_i = ~cpu_clk_i;

  // AXI / NoC = 400 MHz
  logic axi_clk_i;
  logic axi_reset_i;

  initial axi_clk_i = 1'b0;
  always #1.25 axi_clk_i = ~axi_clk_i;

  `declare_bp_bedrock_if(
    ADDR_WIDTH,
    1,
    1,
    3,
    8
  );

  logic [HEADER_WIDTH-1:0]     mem_fwd_header_i;
  logic [CPU_DATA_WIDTH-1:0]   mem_fwd_data_i;
  logic                        mem_fwd_v_i;
  logic                        mem_fwd_ready_and_o;

  logic [HEADER_WIDTH-1:0]     mem_rev_header_o;
  logic [CPU_DATA_WIDTH-1:0]   mem_rev_data_o;
  logic                        mem_rev_v_o;
  logic                        mem_rev_ready_and_i;

  logic [ID_WIDTH-1:0]     awid;
  logic [ADDR_WIDTH-1:0]   awaddr;
  logic [7:0]              awlen;
  logic [2:0]              awsize;
  logic [1:0]              awburst;
  logic                    awlock;
  logic [3:0]              awcache;
  logic [2:0]              awprot;
  logic [3:0]              awqos;
  logic                    awvalid;
  logic                    awready;

  logic [AXI_DATA_WIDTH-1:0]   wdata;
  logic [AXI_DATA_WIDTH/8-1:0] wstrb;
  logic                        wlast;
  logic                        wvalid;
  logic                        wready;

  logic [ID_WIDTH-1:0]     bid;
  logic [1:0]              bresp;
  logic                    bvalid;
  logic                    bready;

  logic [ID_WIDTH-1:0]     arid;
  logic [ADDR_WIDTH-1:0]   araddr;
  logic [7:0]              arlen;
  logic [2:0]              arsize;
  logic [1:0]              arburst;
  logic                    arlock;
  logic [3:0]              arcache;
  logic [2:0]              arprot;
  logic [3:0]              arqos;
  logic                    arvalid;
  logic                    arready;

  logic [ID_WIDTH-1:0]         rid;
  logic [AXI_DATA_WIDTH-1:0]   rdata;
  logic [1:0]                  rresp;
  logic                        rlast;
  logic                        rvalid;
  logic                        rready;

  bp_bedrock_axi4_bridge #(
      .ADDR_WIDTH          (ADDR_WIDTH),
      .ID_WIDTH            (ID_WIDTH),
      .CPU_DATA_WIDTH      (CPU_DATA_WIDTH),
      .AXI_DATA_WIDTH      (AXI_DATA_WIDTH),
      .LCE_ID_WIDTH        (1),
      .CCE_ID_WIDTH        (1),
      .DID_WIDTH           (3),
      .LCE_ASSOC           (8),
      .MEM_FWD_HEADER_WIDTH(HEADER_WIDTH),
      .MEM_REV_HEADER_WIDTH(HEADER_WIDTH),
      .FIFO_DEPTH          (8)
  ) dut (
      .cpu_clk_i  (cpu_clk_i),
      .cpu_reset_i(cpu_reset_i),

      .mem_fwd_header_i   (mem_fwd_header_i),
      .mem_fwd_data_i     (mem_fwd_data_i),
      .mem_fwd_v_i        (mem_fwd_v_i),
      .mem_fwd_ready_and_o(mem_fwd_ready_and_o),

      .mem_rev_header_o   (mem_rev_header_o),
      .mem_rev_data_o     (mem_rev_data_o),
      .mem_rev_v_o        (mem_rev_v_o),
      .mem_rev_ready_and_i(mem_rev_ready_and_i),

      .axi_clk_i  (axi_clk_i),
      .axi_reset_i(axi_reset_i),

      .m_axi_awid   (awid),
      .m_axi_awaddr (awaddr),
      .m_axi_awlen  (awlen),
      .m_axi_awsize (awsize),
      .m_axi_awburst(awburst),
      .m_axi_awlock (awlock),
      .m_axi_awcache(awcache),
      .m_axi_awprot (awprot),
      .m_axi_awqos  (awqos),
      .m_axi_awvalid(awvalid),
      .m_axi_awready(awready),

      .m_axi_wdata (wdata),
      .m_axi_wstrb (wstrb),
      .m_axi_wlast (wlast),
      .m_axi_wvalid(wvalid),
      .m_axi_wready(wready),

      .m_axi_bid   (bid),
      .m_axi_bresp (bresp),
      .m_axi_bvalid(bvalid),
      .m_axi_bready(bready),

      .m_axi_arid   (arid),
      .m_axi_araddr (araddr),
      .m_axi_arlen  (arlen),
      .m_axi_arsize (arsize),
      .m_axi_arburst(arburst),
      .m_axi_arlock (arlock),
      .m_axi_arcache(arcache),
      .m_axi_arprot (arprot),
      .m_axi_arqos  (arqos),
      .m_axi_arvalid(arvalid),
      .m_axi_arready(arready),

      .m_axi_rid   (rid),
      .m_axi_rdata (rdata),
      .m_axi_rresp (rresp),
      .m_axi_rlast (rlast),
      .m_axi_rvalid(rvalid),
      .m_axi_rready(rready)
  );

  logic [AXI_DATA_WIDTH-1:0] memory [0:1023];

  logic [ADDR_WIDTH-1:0] write_addr_q;
  logic [7:0]            write_len_q;
  logic [7:0]            write_count_q;
  logic                  write_active_q;

  logic [ADDR_WIDTH-1:0] read_addr_q;
  logic [7:0]            read_len_q;
  logic [7:0]            read_count_q;
  logic                  read_active_q;

  integer i;

  logic [AXI_DATA_WIDTH-1:0] expected_data [0:NUM_BEATS-1];
  integer axi_write_beats;
  integer axi_read_beats;
  integer errors;

  /*
   * Simple AXI4 memory slave.
   *
   * 128-bit AXI data width = 16 bytes/beat.
   * A 64-byte transaction therefore contains 4 beats.
   */
  always_ff @(posedge axi_clk_i) begin
    if (axi_reset_i) begin
      awready <= 1'b0;
      wready  <= 1'b0;
      bid     <= '0;
      bresp   <= 2'b00;
      bvalid  <= 1'b0;

      arready <= 1'b0;
      rid     <= '0;
      rdata   <= '0;
      rresp   <= 2'b00;
      rlast   <= 1'b0;
      rvalid  <= 1'b0;

      write_addr_q   <= '0;
      write_len_q    <= '0;
      write_count_q  <= '0;
      write_active_q <= 1'b0;

      read_addr_q   <= '0;
      read_len_q    <= '0;
      read_count_q  <= '0;
      read_active_q <= 1'b0;

      for (i = 0; i < 1024; i = i + 1)
        memory[i] = '0;
    end
    else begin

      awready <= !write_active_q && !bvalid;
      wready  <= write_active_q;
      arready <= !read_active_q && !rvalid;

      /* AXI AW */
      if (awvalid && awready) begin
        write_addr_q   <= awaddr;
        write_len_q    <= awlen;
        write_count_q  <= 8'd0;
        write_active_q <= 1'b1;

        $display("[%0t] AXI AW: ID=%0d ADDR=%h LEN=%0d SIZE=%0d BURST=%b",
                 $time, awid, awaddr, awlen, awsize, awburst);

        if (awlen == 8'd3)
          $display("[%0t] AXI AWLEN CHECK PASS: 4 beats", $time);
        else begin
          $display("[%0t] ERROR: Expected AWLEN=3, got %0d", $time, awlen);
          errors = errors + 1;
        end

        if (awsize == 3'd4)
          $display("[%0t] AXI AWSIZE CHECK PASS: 16 bytes/beat", $time);
        else begin
          $display("[%0t] ERROR: Expected AWSIZE=4, got %0d", $time, awsize);
          errors = errors + 1;
        end

        if (awburst == 2'b01)
          $display("[%0t] AXI AWBURST CHECK PASS: INCR", $time);
        else begin
          $display("[%0t] ERROR: Expected AWBURST=INCR, got %b", $time, awburst);
          errors = errors + 1;
        end
      end

      /* AXI W */
      if (wvalid && wready) begin
        memory[(write_addr_q >> 4) + write_count_q] <= wdata;
        axi_write_beats = axi_write_beats + 1;

        $display("[%0t] AXI W: BEAT=%0d DATA=%h STRB=%h LAST=%b",
                 $time, write_count_q, wdata, wstrb, wlast);

        if (write_count_q < NUM_BEATS) begin
          if (wdata !== expected_data[write_count_q]) begin
            $display("[%0t] WRITE DATA ERROR: BEAT=%0d", $time, write_count_q);
            $display("           Expected = %h", expected_data[write_count_q]);
            $display("           Received = %h", wdata);
            errors = errors + 1;
          end
          else
            $display("[%0t] WRITE DATA PASS: BEAT=%0d", $time, write_count_q);
        end

        if (write_count_q == write_len_q) begin
          if (wlast !== 1'b1) begin
            $display("[%0t] ERROR: WLAST must be 1 on final beat", $time);
            errors = errors + 1;
          end
          else
            $display("[%0t] WLAST CHECK PASS: BEAT=%0d", $time, write_count_q);

          write_active_q <= 1'b0;
          bid            <= awid;
          bresp          <= 2'b00;
          bvalid         <= 1'b1;

          $display("[%0t] AXI B: OKAY", $time);
        end
        else begin
          if (wlast !== 1'b0) begin
            $display("[%0t] ERROR: WLAST asserted early on beat %0d", $time, write_count_q);
            errors = errors + 1;
          end

          write_count_q <= write_count_q + 1'b1;
        end
      end

      /* AXI B */
      if (bvalid && bready) begin
        bvalid <= 1'b0;
        $display("[%0t] AXI B handshake complete", $time);
      end

      /* AXI AR */
      if (arvalid && arready) begin
        read_addr_q   <= araddr;
        read_len_q    <= arlen;
        read_count_q  <= 8'd0;
        read_active_q <= 1'b1;

        $display("[%0t] AXI AR: ID=%0d ADDR=%h LEN=%0d SIZE=%0d BURST=%b",
                 $time, arid, araddr, arlen, arsize, arburst);

        if (arlen == 8'd3)
          $display("[%0t] AXI ARLEN CHECK PASS: 4 beats", $time);
        else begin
          $display("[%0t] ERROR: Expected ARLEN=3, got %0d", $time, arlen);
          errors = errors + 1;
        end

        if (arsize == 3'd4)
          $display("[%0t] AXI ARSIZE CHECK PASS: 16 bytes/beat", $time);
        else begin
          $display("[%0t] ERROR: Expected ARSIZE=4, got %0d", $time, arsize);
          errors = errors + 1;
        end

        if (arburst == 2'b01)
          $display("[%0t] AXI ARBURST CHECK PASS: INCR", $time);
        else begin
          $display("[%0t] ERROR: Expected ARBURST=INCR, got %b", $time, arburst);
          errors = errors + 1;
        end
      end

      /* AXI R data generation */
      if (read_active_q && !rvalid) begin
        rdata <= memory[(read_addr_q >> 4) + read_count_q];
        rid   <= arid;
        rresp <= 2'b00;

        if (read_count_q == read_len_q)
          rlast <= 1'b1;
        else
          rlast <= 1'b0;

        rvalid <= 1'b1;
      end

      /* AXI R handshake */
      if (rvalid && rready) begin
        axi_read_beats = axi_read_beats + 1;

        $display("[%0t] AXI R: BEAT=%0d DATA=%h LAST=%b RESP=%b",
                 $time, read_count_q, rdata, rlast, rresp);

        if (read_count_q < NUM_BEATS) begin
          if (rdata !== expected_data[read_count_q]) begin
            $display("[%0t] READ DATA ERROR: BEAT=%0d", $time, read_count_q);
            $display("           Expected = %h", expected_data[read_count_q]);
            $display("           Received = %h", rdata);
            errors = errors + 1;
          end
          else
            $display("[%0t] READ DATA PASS: BEAT=%0d", $time, read_count_q);
        end

        if (read_count_q == read_len_q) begin
          if (rlast !== 1'b1) begin
            $display("[%0t] ERROR: RLAST must be 1 on beat %0d", $time, read_count_q);
            errors = errors + 1;
          end
          else
            $display("[%0t] RLAST CHECK PASS: BEAT=%0d", $time, read_count_q);

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

  /*
   * BedRock 64-byte WRITE.
   *
   * Four 128-bit flits, header supplied only on flit 0.
   * msg_type is set through the .fwd accessor, matching the bridge's
   * mem_fwd_header_cast_i.msg_type.fwd check in ST_IDLE.
   */
  task automatic send_bedrock_write_4beat;
    bp_bedrock_mem_fwd_header_s hdr;

    hdr = '0;
    hdr.addr          = 40'h0000_0000_1000;
    hdr.size          = e_bedrock_msg_size_64;
    hdr.msg_type.fwd  = e_bedrock_mem_wr;

    $display("");
    $display("==============================================");
    $display("BEDROCK 64-BYTE WRITE TEST");
    $display("==============================================");

    // BEAT 0
    @(negedge cpu_clk_i);
    mem_fwd_header_i = hdr;
    mem_fwd_data_i   = expected_data[0];
    mem_fwd_v_i      = 1'b1;
    do @(posedge cpu_clk_i); while (!mem_fwd_ready_and_o);
    $display("[%0t] BedRock WRITE FLIT 0 accepted DATA=%h", $time, mem_fwd_data_i);

    // BEAT 1
    @(negedge cpu_clk_i);
    mem_fwd_header_i = '0;
    mem_fwd_data_i   = expected_data[1];
    mem_fwd_v_i      = 1'b1;
    do @(posedge cpu_clk_i); while (!mem_fwd_ready_and_o);
    $display("[%0t] BedRock WRITE FLIT 1 accepted DATA=%h", $time, mem_fwd_data_i);

    // BEAT 2
    @(negedge cpu_clk_i);
    mem_fwd_data_i = expected_data[2];
    mem_fwd_v_i    = 1'b1;
    do @(posedge cpu_clk_i); while (!mem_fwd_ready_and_o);
    $display("[%0t] BedRock WRITE FLIT 2 accepted DATA=%h", $time, mem_fwd_data_i);

    // BEAT 3
    @(negedge cpu_clk_i);
    mem_fwd_data_i = expected_data[3];
    mem_fwd_v_i    = 1'b1;
    do @(posedge cpu_clk_i); while (!mem_fwd_ready_and_o);
    $display("[%0t] BedRock WRITE FLIT 3 accepted DATA=%h", $time, mem_fwd_data_i);

    // Deassert only after final beat has been presented.
    @(negedge cpu_clk_i);
    mem_fwd_v_i      = 1'b0;
    mem_fwd_data_i   = '0;
    mem_fwd_header_i = '0;

    $display("[%0t] BedRock 64-BYTE WRITE complete", $time);
  endtask

  task automatic send_bedrock_read_4beat;
    bp_bedrock_mem_fwd_header_s hdr;

    hdr = '0;
    hdr.addr         = 40'h0000_0000_1000;
    hdr.size         = e_bedrock_msg_size_64;
    hdr.msg_type.fwd = e_bedrock_mem_rd;

    $display("");
    $display("==============================================");
    $display("BEDROCK 64-BYTE READ TEST");
    $display("==============================================");

    @(negedge cpu_clk_i);
    mem_fwd_header_i = hdr;
    mem_fwd_data_i   = '0;
    mem_fwd_v_i      = 1'b1;
    do @(posedge cpu_clk_i); while (!mem_fwd_ready_and_o);
    $display("[%0t] BedRock 64-BYTE READ accepted", $time);

    @(negedge cpu_clk_i);
    mem_fwd_v_i      = 1'b0;
    mem_fwd_header_i = '0;
    mem_fwd_data_i   = '0;

    $display("[%0t] BedRock READ request complete", $time);
  endtask

  initial begin
    expected_data[0] = 128'h1111_1111_1111_1111_1111_1111_1111_1111;
    expected_data[1] = 128'h2222_2222_2222_2222_2222_2222_2222_2222;
    expected_data[2] = 128'h3333_3333_3333_3333_3333_3333_3333_3333;
    expected_data[3] = 128'h4444_4444_4444_4444_4444_4444_4444_4444;

    axi_write_beats = 0;
    axi_read_beats  = 0;
    errors          = 0;

    cpu_reset_i = 1'b1;
    axi_reset_i = 1'b1;

    mem_fwd_header_i = '0;
    mem_fwd_data_i   = '0;
    mem_fwd_v_i      = 1'b0;

    mem_rev_ready_and_i = 1'b1;

    awready = 1'b0;
    wready  = 1'b0;
    bid     = '0;
    bresp   = 2'b00;
    bvalid  = 1'b0;
    arready = 1'b0;
    rid     = '0;
    rdata   = '0;
    rresp   = 2'b00;
    rlast   = 1'b0;
    rvalid  = 1'b0;

    repeat (10) @(posedge cpu_clk_i);
    repeat (4)  @(posedge axi_clk_i);

    cpu_reset_i = 1'b0;
    axi_reset_i = 1'b0;

    repeat (2) @(posedge cpu_clk_i);

    $display("");
    $display("==============================================");
    $display("BP BedRock -> AXI4 BRIDGE 4-BEAT TEST");
    $display("==============================================");
    $display("AXI_DATA_WIDTH = %0d bits", AXI_DATA_WIDTH);
    $display("BYTES_PER_BEAT = %0d", BYTES_PER_BEAT);
    $display("NUM_BEATS      = %0d", NUM_BEATS);
    $display("TOTAL_BYTES    = %0d", NUM_BEATS * BYTES_PER_BEAT);
    $display("==============================================");

    /* 64-byte write */
    send_bedrock_write_4beat();

    wait (bvalid);
    wait (!bvalid);

    repeat (3) @(posedge axi_clk_i);

    $display("");
    $display("[%0t] WRITE CHECK: AXI beats received = %0d", $time, axi_write_beats);

    if (axi_write_beats != NUM_BEATS) begin
      $display("[%0t] ERROR: Expected 4 AXI W beats, received %0d", $time, axi_write_beats);
      errors = errors + 1;
    end
    else
      $display("[%0t] AXI WRITE BEAT COUNT PASS", $time);

    /* 64-byte read */
    send_bedrock_read_4beat();

    wait (axi_read_beats == NUM_BEATS);

    $display("");
    $display("==============================================");
    $display("4-BEAT AXI READ VERIFICATION");
    $display("==============================================");
    $display("Expected AXI R beats = 4");
    $display("Received AXI R beats = %0d", axi_read_beats);
    $display("Total errors         = %0d", errors);

    if ((axi_read_beats == NUM_BEATS) && (errors == 0)) begin
      $display("");
      $display("==============================================");
      $display("TEST PASS");
      $display("64-byte BedRock transaction");
      $display("successfully transferred as");
      $display("4 x 128-bit AXI4 beats.");
      $display("==============================================");
    end
    else begin
      $display("");
      $display("==============================================");
      $display("TEST FAIL");
      $display("AXI write beats = %0d", axi_write_beats);
      $display("AXI read beats  = %0d", axi_read_beats);
      $display("Errors          = %0d", errors);
      $display("==============================================");
    end

    repeat (10) @(posedge cpu_clk_i);

    $display("");
    $display("==============================================");
    $display("FINAL BEDROCK RESPONSE SIGNALS");
    $display("==============================================");
    $display("[%0t] mem_rev_v_o=%b", $time, mem_rev_v_o);
    $display("[%0t] mem_rev_header_o=%h", $time, mem_rev_header_o);
    $display("[%0t] mem_rev_data_o=%h", $time, mem_rev_data_o);

    $finish;
  end

  /*
   * Monitor BedRock reverse channel.
   * A 64-byte read may return multiple 128-bit reverse flits.
   */
  always @(posedge cpu_clk_i) begin
    if (!cpu_reset_i && mem_rev_v_o && mem_rev_ready_and_i) begin
      $display("[%0t] BEDROCK REV: HEADER=%h DATA=%h", $time, mem_rev_header_o, mem_rev_data_o);
    end
  end

  initial begin
    $dumpfile("bp_bedrock_axi4_bridge_tb.vcd");
    $dumpvars(0, bp_bedrock_axi4_bridge_tb);
  end

endmodule
