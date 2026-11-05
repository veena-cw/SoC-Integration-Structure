// ============================================================================
// sd_card_bfm.sv  --  Behavioural SD (Physical Layer 3.0, SDR) / eMMC card
//
//  * One module, runtime-selectable personality:  cfg_emmc = 0 -> SD card
//                                                 cfg_emmc = 1 -> eMMC device
//  * Single clock domain: everything is sampled/driven on posedge sd_clk.
//  * cmd_o/cmd_oe and dat_o/dat_oe are written ONLY with non-blocking
//    assignments, each from exactly one process (Verilator BLKANDNBLK-safe).
//    oe = 1 means "the card drives the line"; connect to your bus resolver.
//  * Supported: SDR, 1/4/8-bit bus, CMD0/1/2/3/6/7/8/9/10/12/13/16/17/18/
//    23/24/25/55, ACMD6/13/41/51, CRC7 on CMD, CRC16 per DAT line, CRC status
//    token + busy on writes, R1b busy on DAT0.
//  * NOT supported: DDR, HS200/HS400, tuning (CMD19), 1.8V switch (CMD11),
//    erase, lock/unlock, boot partitions, RPMB, CMD CRC on R3.
//  * Error injection ports let tests corrupt response CRC, read-data CRC,
//    write CRC-status token, or suppress a response.
//
//  UNTESTED against a real simulator at delivery time -- see BFM_README.md.
// ============================================================================
// FLOW
//  CMD process (initial/forever) : waits for start bit -> shifts in 48 bits -> handle_cmd
//  handle_cmd                    : CRC check -> decode -> send response -> (if data needed) req_data
//  DAT process (initial/forever) : idles until req_data / busy request -> run_data / do_busy
//  run_data                      : read  = load_blk -> send_block (per block)
//                                  write = wait_start -> recv_block -> store_blk -> send_wr_status -> busy
// The two processes talk only through counters (dreq_cnt, abort_cnt, busy_cnt):
// each counter has ONE writer, so there are no races and no BLKANDNBLK.

//`timescale 1ns/1ps

module sd_card_bfm #(
  parameter int          MEM_BLOCKS = 128,       // 512-byte blocks of backing store
  parameter logic [15:0] RCA_SD     = 16'h1234,  // RCA handed out by SD CMD3
  parameter int          NCR        = 4,         // clocks: cmd end -> response start
  parameter int          NAC        = 4,         // clocks: R1 end  -> read data start
  parameter int          INIT_POLLS = 3,         // ACMD41/CMD1 polls before "ready"
  parameter int          WR_TMO     = 20000,     // clocks to wait for write start bit
  parameter bit          VERBOSE    = 1'b1
)(
  input  wire        sd_clk,
  input  wire        rst_n,

  // CMD line (cmd_i is the RESOLVED bus value)
  input  wire        cmd_i,
  output reg         cmd_o      = 1'b1,
  output reg         cmd_oe     = 1'b0,

  // DAT lines (dat_i is the RESOLVED bus value)
  input  wire [7:0]  dat_i,
  output reg  [7:0]  dat_o      = 8'hFF,
  output reg  [7:0]  dat_oe     = 8'h00,

  // Personality / configuration
  input  wire        cfg_emmc,           // 0 = SD, 1 = eMMC
  input  wire        cfg_hc,             // 1 = block addressing (SDHC / sector mode)
  input  wire [15:0] cfg_busy_clks,      // DAT0 busy length after write / R1b
  input  wire        cfg_s18a,           // 1 = ACMD41 reply carries S18A=1 when host sent S18R=1
  input  wire [7:0]  cfg_resp_dly,       // extra clocks added to NCR before every response

  // Error injection (sampled when used)
  input  wire        inj_no_resp,        // swallow the next response(s)
  input  wire        inj_resp_crc_err,   // flip CRC7 of R1/R2/R6/R7
  input  wire        inj_resp_idx_err,   // flip the index echoed in R1/R6/R7 (CRC stays valid)
  input  wire        inj_resp_eb_err,    // drive the response end bit as 0
  input  wire        inj_dat_crc_err,    // flip CRC16 (line 0) of read data
  input  wire        inj_wr_crc_status,   // answer writes with CRC-error token (101)
   input  wire        cfg_skip_crc7,      // TEMP: 1 = do not drop commands with a bad CRC7 (DUT BUG-7)
  // Observation (testbench use only)
  output wire [127:0] dbg_cid,
  output wire [127:0] dbg_csd,
  output wire [31:0]  dbg_state,
  output wire [31:0]  dbg_bw,
  output wire [15:0]  dbg_rca
);

  // --------------------------------------------------------------------------
  // Constants
  // --------------------------------------------------------------------------
  localparam int S_IDLE = 0, S_READY = 1, S_IDENT = 2, S_STBY = 3,
                 S_TRAN = 4, S_DATA  = 5, S_RCV   = 6, S_PRG  = 7;

  localparam logic [31:0] ST_OOR = 32'h8000_0000;  // bit 31 out of range
  localparam logic [31:0] ST_CRC = 32'h0080_0000;  // bit 23 com_crc_error
  localparam logic [31:0] ST_ILL = 32'h0040_0000;  // bit 22 illegal_command
  localparam logic [31:0] ST_ERR = 32'h0008_0000;  // bit 19 general error

  // --------------------------------------------------------------------------
  // Card state
  // --------------------------------------------------------------------------
  integer        cstate   = S_IDLE;
  reg [31:0]     err_bits = 32'd0;
  reg            app_cmd  = 1'b0;
  reg [15:0]     rca      = 16'd0;
  integer        bw       = 1;           // current bus width: 1 / 4 / 8
  integer        poll_cnt = 0;
  reg [31:0]     pre_cnt  = 32'd0;       // CMD23 pre-defined block count
  reg [31:0]     blen     = 32'd512;
  reg            in_rst   = 1'b0;

  reg [7:0]      mem      [0:MEM_BLOCKS*512-1];
  reg [7:0]      ext_csd  [0:511];
  reg [7:0]      tbuf     [0:511];       // block staging buffer (data process only,
                                         // plus cmd process when preloading kind 3)

  // cmd process -> data process requests (counters: single writer each)
  integer        dreq_cnt  = 0;   // written by cmd process
  integer        abort_cnt = 0;   // written by cmd process
  integer        busy_cnt  = 0;   // written by cmd process
  integer        dreq_kind = 0;   // 1=read mem 2=write mem 3=read tbuf
  reg [31:0]     dreq_blk  = 32'd0;
  reg [31:0]     dreq_nblk = 32'd0;   // 0 = open ended (until CMD12)
  integer        dreq_len  = 512;
  integer        busy_clks = 0;

  // data process status (single writer: data process)
  reg            dat_active = 1'b0;
  reg            dat_wr     = 1'b0;
  reg            dat_busy   = 1'b0;
  integer        dreq_seen  = 0;
  integer        abort_seen = 0;
  integer        busy_seen  = 0;

  // scratch used by tasks
  reg [127:0]    dcrc;           // 8 x 16-bit CRCs (tx)
  reg [127:0]    rcrc;           // 8 x 16-bit CRCs (rx)
  reg            rx_ok;
  integer        wst;            // wait_start result: 0 pending 1 start 2 give up

  // --------------------------------------------------------------------------
  // CRC helpers
  // --------------------------------------------------------------------------
  // crc7_bits : CRC7 (x^7+x^3+1) over the top 'n' bits of d, MSB first.
  //   Used for CMD frames (40 bits) and CID/CSD payload (120 bits).
  function automatic [6:0] crc7_bits(input [135:0] d, input integer n);
    integer i;
    reg [6:0] c;
    reg       fb;
    begin
      c = 7'd0;
      for (i = n-1; i >= 0; i = i - 1) begin
        fb = c[6] ^ d[i];
        c  = {c[5:0], 1'b0};
        if (fb) c = c ^ 7'h09;
      end
      crc7_bits = c;
    end
  endfunction
// crc16_bit : advances one DAT-line CRC16 (CCITT, 0x1021) by one data bit.
//   Called once per bit per line while sending/receiving a block.
  function automatic [15:0] crc16_bit(input [15:0] c, input b);
    reg fb;
    begin
      fb = c[15] ^ b;
      crc16_bit = {c[14:0], 1'b0};
      if (fb) crc16_bit = crc16_bit ^ 16'h1021;
    end
  endfunction

  // --------------------------------------------------------------------------
  // CID / CSD (CRC7 appended)
  // --------------------------------------------------------------------------
  // build_cid / build_csd : return the 128-bit CID/CSD (SD or eMMC layout) with CRC7 and end bit.
//   Called by handle_cmd for CMD2/CMD9/CMD10.
  function automatic [127:0] build_cid(input emmc);
    reg [127:0] v;
    begin
      v = 128'd0;
      if (!emmc) begin
        v[127:120] = 8'h03;                 // MID
        v[119:104] = 16'h5344;              // OID "SD"
        v[103:64]  = {"B","F","M","0","0"}; // PNM
        v[63:56]   = 8'h10;                 // PRV
        v[55:24]   = 32'hCAFE_0001;         // PSN
        v[19:8]    = 12'h5A9;               // MDT
      end else begin
        v[127:120] = 8'h13;                 // MID
        v[113:112] = 2'b01;                 // CBX
        v[111:104] = 8'h42;                 // OID
        v[103:56]  = {"E","M","M","C","0","0"}; // PNM
        v[55:48]   = 8'h01;                 // PRV
        v[47:16]   = 32'hBEEF_0001;         // PSN
        v[15:8]    = 8'h0A;                 // MDT
      end
      v[7:1] = crc7_bits({16'd0, v[127:8]}, 120);
      v[0]   = 1'b1;
      build_cid = v;
    end
  endfunction
  
// build_cid / build_csd : return the 128-bit CID/CSD (SD or eMMC layout) with CRC7 and end bit.
//   Called by handle_cmd for CMD2/CMD9/CMD10.
  function automatic [127:0] build_csd(input emmc);
    reg [127:0] v;
    begin
      v = 128'd0;
      if (!emmc) begin                      // CSD v2.0 (SDHC)
        v[127:126] = 2'b01;
        v[119:112] = 8'h0E;                 // TAAC
        v[103:96]  = 8'h32;                 // TRAN_SPEED 25 MHz
        v[95:84]   = 12'h5B5;               // CCC
        v[83:80]   = 4'd9;                  // READ_BL_LEN
        v[69:48]   = 22'd0;                 // C_SIZE (placeholder, tiny)
        v[46]      = 1'b1;                  // ERASE_BLK_EN
        v[45:39]   = 7'h7F;                 // SECTOR_SIZE
        v[28:26]   = 3'd2;                  // R2W_FACTOR
        v[25:22]   = 4'd9;                  // WRITE_BL_LEN
      end else begin                        // eMMC CSD (capacity in EXT_CSD)
        v[127:126] = 2'b11;
        v[125:122] = 4'd4;                  // SPEC_VERS
        v[119:112] = 8'h0E;
        v[103:96]  = 8'h32;
        v[95:84]   = 12'h5F5;
        v[83:80]   = 4'd9;
        v[73:62]   = 12'hFFF;               // C_SIZE = 0xFFF -> use SEC_COUNT
        v[25:22]   = 4'd9;
      end
      v[7:1] = crc7_bits({16'd0, v[127:8]}, 120);
      v[0]   = 1'b1;
      build_csd = v;
    end
  endfunction

  // --------------------------------------------------------------------------
  // Card status word (R1)
  // --------------------------------------------------------------------------
  // card_status : builds the 32-bit R1 status word (error bits + current state + READY_FOR_DATA + APP_CMD).
//   Called by handle_cmd just before the response is sent.
  function automatic [31:0] card_status(input appc);
    integer cs;
    reg     rdy;
    begin
      cs = cstate;
      if (dat_active)    cs = dat_wr ? S_RCV : S_DATA;
      else if (dat_busy) cs = S_PRG;
      rdy = !dat_active && !dat_busy;
      card_status = err_bits | {19'd0, cs[3:0], rdy, 2'b00, appc, 5'd0};
    end
  endfunction
  
  assign dbg_cid   = build_cid(cfg_emmc);
  assign dbg_csd   = build_csd(cfg_emmc);
  assign dbg_state = cstate;
  assign dbg_bw    = bw;
  assign dbg_rca   = rca;

  // --------------------------------------------------------------------------
  // Memory init
  // --------------------------------------------------------------------------
  integer mi;
  reg [31:0] mb;
  initial begin
    for (mi = 0; mi < MEM_BLOCKS*512; mi = mi + 1) mem[mi] = 8'h00;
    for (mi = 0; mi < 512; mi = mi + 1) begin ext_csd[mi] = 8'h00; tbuf[mi] = 8'h00; end
    ext_csd[192] = 8'd8;                                  // EXT_CSD_REV
    ext_csd[196] = 8'h01;                                 // DEVICE_TYPE
    mb = MEM_BLOCKS;
    ext_csd[212] = mb[7:0];                               // SEC_COUNT (LE)
    ext_csd[213] = mb[15:8];
    ext_csd[214] = mb[23:16];
    ext_csd[215] = mb[31:24];
  end

  // Back-door access for tests / scoreboards
  // bd_write8 / bd_read8 / bd_fill_block : read or preload card memory directly from the testbench.
  task bd_write8(input integer a, input [7:0] v);
    begin mem[a] = v; end
  endtask
  function [7:0] bd_read8(input integer a);
    begin bd_read8 = mem[a]; end
  endfunction
  // Use bd_fill_block to preload expected data before a CMD17/18 read, and bd_read8 to check
 // what a CMD24/25 write stored.
  task bd_fill_block(input integer blk, input [7:0] seed);
    integer i;
    begin
      for (i = 0; i < 512; i = i + 1) mem[blk*512 + i] = seed + i[7:0];
    end
  endtask

  // --------------------------------------------------------------------------
  // CMD line: response transmit
  // --------------------------------------------------------------------------
  // tx_frame : drives one response on CMD. Waits NCR clocks, shifts the frame out MSB first with
  // cmd_oe=1, then releases the line. Does nothing when inj_no_resp=1.
  task tx_frame(input [135:0] fr, input integer n);
    integer k;
    begin
      if (!inj_no_resp) begin
        //repeat (NCR) @(posedge sd_clk);
        repeat (NCR + cfg_resp_dly) @(posedge sd_clk);
        for (k = n-1; k >= 0; k = k - 1) begin
          cmd_o  <= fr[k];
          cmd_oe <= 1'b1;
          @(posedge sd_clk);
        end
        cmd_oe <= 1'b0;
        cmd_o  <= 1'b1;
      end
    end
  endtask

  // R1 / R6 / R7 share this 48-bit format: {0,0,idx,32-bit,crc7,1}
  // send_r1  : builds {0,0,idx,32-bit,CRC7,1}. Also used for R6 and R7 (same format). Clears the
  // reported error bits afterwards. inj_resp_crc_err flips one CRC bit.
  task send_r1(input [5:0] idx, input [31:0] st);
    reg [39:0]  b;
    reg [6:0]   c;
    reg [135:0] fr;
    begin
       // Goal: let a test corrupt ONLY the index or ONLY the end bit of a response, so the host's
      // Command Index Error and Command End Bit Error are tested separately from CRC.
      b = {2'b00, (idx ^ {5'd0, inj_resp_idx_err}), st};   // wrong index, CRC computed over it
      c = crc7_bits({96'd0, b}, 40);
      if (inj_resp_crc_err) c = c ^ 7'h01;
      fr = 136'd0;
      fr[47:0] = {b, c, ~inj_resp_eb_err};
      tx_frame(fr, 48);
      err_bits = 32'd0;
    end
  endtask
  
  // send_r1b : send_r1, then asks the DAT process to hold DAT0 low for cfg_busy_clks (busy_cnt++).
  // Used by CMD7, CMD12 and eMMC CMD6.
  task send_r1b(input [5:0] idx, input [31:0] st);
    begin
      send_r1(idx, st);
      busy_clks = cfg_busy_clks;
      if (cfg_busy_clks != 16'd0) busy_cnt = busy_cnt + 1;
    end
  endtask

  // send_r2  : 136-bit response carrying CID or CSD (CRC is inside the payload).
  task send_r2(input [127:0] v);
    reg [127:0] p;
    reg [135:0] fr;
    begin
      p = v;
      if (inj_resp_crc_err) p[1] = ~p[1];
      fr = {2'b00, 6'h3F, p};
      tx_frame(fr, 136);
      err_bits = 32'd0;
    end
  endtask
  
  // send_r3  : 48-bit OCR response (no CRC, fixed 0x3F/0x7F fields). Used by ACMD41 and CMD1.
  task send_r3(input [31:0] ocr);
    reg [135:0] fr;
    begin
      fr = 136'd0;
      fr[47:0] = {2'b00, 6'h3F, ocr, 7'h7F, 1'b1};
      tx_frame(fr, 48);
      err_bits = 32'd0;
    end
  endtask

  // do_illegal : sets ILLEGAL_COMMAND and answers with R1. Called for any unsupported command or
  // command sent in the wrong card state.
  task do_illegal(input [5:0] idx);
    begin
      err_bits = err_bits | ST_ILL;
      send_r1(idx, card_status(1'b0));
      if (VERBOSE) $display("[%0t] SD_BFM: illegal/unsupported CMD%0d (emmc=%0d state=%0d app=%0d)",
                            $time, idx, cfg_emmc, cstate, app_cmd);
    end
  endtask
  
  //Command handling
  // req_data : the CMD process's hand-off to the DAT process. Sets kind (1 read, 2 write, 3 read from
  // tbuf), start block, block count (0 = open-ended) and length, then bumps dreq_cnt.
  task req_data(input integer kind, input [31:0] blk, input [31:0] nblk, input integer len);
    begin
      dreq_kind = kind;
      dreq_blk  = blk;
      dreq_nblk = nblk;
      dreq_len  = len;
      dreq_cnt  = dreq_cnt + 1;
    end
  endtask

  // card_reset : puts the card in Idle with default state (RCA 0, 1-bit bus, counters cleared).
  // Called by CMD0 and when rst_n goes low. Also bumps abort_cnt so any running transfer stops.
  task card_reset;
    begin
      cstate   = S_IDLE;
      rca      = 16'd0;
      bw       = 1;
      poll_cnt = 0;
      app_cmd  = 1'b0;
      err_bits = 32'd0;
      pre_cnt  = 32'd0;
      blen     = 32'd512;
      abort_cnt = abort_cnt + 1;
      cmd_oe  <= 1'b0;
      cmd_o   <= 1'b1;
    end
  endtask

  // --------------------------------------------------------------------------
  // Command decode / execute
  // --------------------------------------------------------------------------
  // handle_cmd : the card's brain. Checks start/stop bits and CRC7 (bad frame = no response and
  // COM_CRC_ERROR reported on the next R1), then decodes the command index.
  // Step order: SD init (CMD0,8,ACMD41,2,3,7), eMMC init (CMD0,1,2,3,7,6,8),
  // then data commands (CMD16/17/18/23/24/25/12).
  // ACMDs only apply if the previous command was CMD55 (app_cmd flag).
  task handle_cmd(input [47:0] f);
    reg [5:0]  idx;
    reg [31:0] arg, stat, ocr, blk;
    reg        is_a;
    integer    i;
    begin
      idx = f[45:40];
      arg = f[39:8];
      //if (f[47] !== 1'b0 || f[46] !== 1'b1 || f[0] !== 1'b1 ||
      //    (crc7_bits({96'd0, f[47:8]}, 40) !== f[7:1])) begin
      if (f[47] !== 1'b0 || f[46] !== 1'b1 || f[0] !== 1'b1 ||
          (!cfg_skip_crc7 && (crc7_bits({96'd0, f[47:8]}, 40) !== f[7:1]))) begin   //TEMP change to check the Command without CRC
        err_bits = err_bits | ST_CRC;
        if (VERBOSE) $display("[%0t] SD_BFM: CMD CRC/framing error on CMD%0d frame=0x%012h exp_crc7=0x%02h -> ignored",
                              $time, idx, f, crc7_bits({96'd0, f[47:8]}, 40));
      end else begin
        if (VERBOSE) $display("[%0t] SD_BFM: rx CMD%0d arg=0x%08h app=%0d", $time, idx, arg, app_cmd);
        is_a    = app_cmd;
        app_cmd = 1'b0;
        stat    = card_status(is_a);
        blk     = cfg_hc ? arg : (arg >> 9);

        if (is_a && !cfg_emmc) begin
          // ------------------------------ SD application commands
          case (idx)
            6'd6: begin
              if (cstate == S_TRAN) begin
                bw = (arg[1:0] == 2'b10) ? 4 : 1;
                send_r1(idx, stat);
              end else do_illegal(idx);
            end
            6'd13: begin                                  // SD status, 64 bytes
              if (cstate == S_TRAN) begin
                for (i = 0; i < 64; i = i + 1) tbuf[i] = 8'h00;
                send_r1(idx, stat);
                req_data(3, 32'd0, 32'd1, 64);
              end else do_illegal(idx);
            end
            6'd41: begin
              if (cstate == S_IDLE || cstate == S_READY) begin
                if (arg[23:0] == 24'd0) begin
                  send_r3({1'b0, 1'b0, 6'd0, 24'hFF8000});
                end else begin
                  poll_cnt = poll_cnt + 1;
                  if (poll_cnt > INIT_POLLS) begin
                    //ocr = {1'b1, (cfg_hc & arg[30]), 6'd0, 24'hFF8000};
                    // Goal: report S18A (OCR bit 24) only when the card is ready, the host asked for it (S18R,
		    // arg[24]) and the test enabled it. Fits the ACMD41 loop: the last poll returns busy=1.
                    ocr = {1'b1, (cfg_hc & arg[30]), 5'd0, (cfg_s18a & arg[24]), 24'hFF8000};
                    send_r3(ocr);
                    cstate = S_READY;
                  end else begin
                    send_r3({1'b0, 1'b0, 6'd0, 24'hFF8000});
                  end
                end
              end else do_illegal(idx);
            end
            6'd51: begin                                  // SCR, 8 bytes
              if (cstate == S_TRAN) begin
                for (i = 0; i < 8; i = i + 1) tbuf[i] = 8'h00;
                tbuf[0] = 8'h02; tbuf[1] = 8'h35; tbuf[2] = 8'h80;
                send_r1(idx, stat);
                req_data(3, 32'd0, 32'd1, 8);
              end else do_illegal(idx);
            end
            default: do_illegal(idx);
          endcase
        end else begin
          // ------------------------------ general commands
          case (idx)
            6'd0: begin
              card_reset;                                  // no response
            end

            6'd1: begin                                    // eMMC SEND_OP_COND
              if (cfg_emmc && (cstate == S_IDLE || cstate == S_READY)) begin
                poll_cnt = poll_cnt + 1;
                if (poll_cnt > INIT_POLLS) begin
                  send_r3({1'b1, cfg_hc, 1'b0, 5'd0, 24'hFF8080});
                  cstate = S_READY;
                end else begin
                  send_r3({1'b0, cfg_hc, 1'b0, 5'd0, 24'hFF8080});
                end
              end else do_illegal(idx);
            end

            6'd2: begin
              if (cstate == S_READY || cstate == S_IDENT) begin
                send_r2(build_cid(cfg_emmc));
                cstate = S_IDENT;
              end else do_illegal(idx);
            end

            6'd3: begin
              if (!cfg_emmc && (cstate == S_IDENT || cstate == S_STBY)) begin
                rca = RCA_SD;
                send_r1(6'd3, {rca, stat[23], stat[22], stat[19], stat[12:0]});
                cstate = S_STBY;
              end else if (cfg_emmc && cstate == S_IDENT) begin
                rca = arg[31:16];
                send_r1(idx, stat);
                cstate = S_STBY;
              end else do_illegal(idx);
            end

            6'd6: begin
              if (cfg_emmc && cstate == S_TRAN) begin     // SWITCH
                if (arg[25:24] == 2'b11) begin
                  ext_csd[arg[23:16]] = arg[15:8];
                  if (arg[23:16] == 8'd183) begin
                    case (arg[15:8])
                      8'd0:           bw = 1;
                      8'd1, 8'd5:     bw = 4;
                      8'd2, 8'd6:     bw = 8;
                      default:        bw = 1;
                    endcase
                  end
                end
                send_r1b(idx, stat);
              end else if (!cfg_emmc && cstate == S_TRAN) begin   // SD SWITCH_FUNC
                for (i = 0; i < 64; i = i + 1) tbuf[i] = 8'h00;
                tbuf[13] = 8'h01;                          // group1: default only
                send_r1(idx, stat);
                req_data(3, 32'd0, 32'd1, 64);
              end else do_illegal(idx);
            end

            6'd7: begin
              if (arg[31:16] == rca && cstate == S_STBY) begin
                send_r1b(idx, stat);
                cstate = S_TRAN;
              end else if (arg[31:16] == rca && cstate == S_TRAN) begin
                send_r1b(idx, stat);
              end else if (arg[31:16] != rca && cstate == S_TRAN) begin
                if (cfg_emmc) send_r1b(idx, stat);         // SD: deselect, no response
                cstate = S_STBY;
              end else do_illegal(idx);
            end

            6'd8: begin
              if (!cfg_emmc) begin                         // SEND_IF_COND
                if (arg[11:8] == 4'h1) send_r1(6'd8, {20'd0, arg[11:0]});
                // else: unsupported voltage -> no response (per spec)
              end else if (cstate == S_TRAN) begin         // SEND_EXT_CSD
                for (i = 0; i < 512; i = i + 1) tbuf[i] = ext_csd[i];
                send_r1(idx, stat);
                req_data(3, 32'd0, 32'd1, 512);
              end else do_illegal(idx);
            end

            6'd9: begin
              if (cstate == S_STBY && arg[31:16] == rca) send_r2(build_csd(cfg_emmc));
              else do_illegal(idx);
            end

            6'd10: begin
              if (cstate == S_STBY && arg[31:16] == rca) send_r2(build_cid(cfg_emmc));
              else do_illegal(idx);
            end

            6'd12: begin
              abort_cnt = abort_cnt + 1;
              send_r1b(idx, stat);
              if (cstate != S_IDLE) cstate = S_TRAN;
            end

            6'd13: begin
              if (arg[31:16] == rca) send_r1(idx, stat);
              else do_illegal(idx);
            end

            6'd16: begin
              blen = arg;
              if (arg != 32'd512) err_bits = err_bits | ST_ERR;
              send_r1(idx, card_status(1'b0));
            end

            6'd17, 6'd18: begin
              if (cstate == S_TRAN) begin
                if (blk >= MEM_BLOCKS) begin
                  err_bits = err_bits | ST_OOR;
                  send_r1(idx, card_status(1'b0));
                end else begin
                  send_r1(idx, stat);
                  req_data(1, blk, (idx == 6'd17) ? 32'd1 : pre_cnt, 512);
                  if (idx == 6'd18) pre_cnt = 32'd0;
                end
              end else do_illegal(idx);
            end

            6'd23: begin
              pre_cnt = {16'd0, arg[15:0]};
              send_r1(idx, stat);
            end

            6'd24, 6'd25: begin
              if (cstate == S_TRAN) begin
                if (blk >= MEM_BLOCKS) begin
                  err_bits = err_bits | ST_OOR;
                  send_r1(idx, card_status(1'b0));
                end else begin
                  send_r1(idx, stat);
                  req_data(2, blk, (idx == 6'd24) ? 32'd1 : pre_cnt, 512);
                  if (idx == 6'd25) pre_cnt = 32'd0;
                end
              end else do_illegal(idx);
            end

            6'd55: begin
              app_cmd = 1'b1;
              send_r1(idx, card_status(1'b1));
            end

            default: do_illegal(idx);
          endcase
        end
      end
    end
  endtask

  // --------------------------------------------------------------------------
  // CMD process (single driver of cmd_o / cmd_oe)
  // --------------------------------------------------------------------------
  // Every clock: if rst_n is low, reset the card; otherwise wait for a 0 on CMD (start bit),
  // shift in the remaining 47 bits, and call handle_cmd with the 48-bit frame.
  reg [47:0] rx;
  integer    ii;
  initial begin
    forever begin
      @(posedge sd_clk);
      if (!rst_n) begin
        if (!in_rst) begin card_reset; in_rst = 1'b1; end
      end else begin
        in_rst = 1'b0;
        if (cmd_i === 1'b0) begin                 // start bit
          rx     = 48'd0;
          rx[47] = 1'b0;
          for (ii = 46; ii >= 0; ii = ii - 1) begin
            @(posedge sd_clk);
            rx[ii] = cmd_i;
          end
          handle_cmd(rx);
        end
      end
    end
  end

  // --------------------------------------------------------------------------
  // DAT: transmit one block from tbuf
  // --------------------------------------------------------------------------
  // send_block : sends one block card -> host. Start bit on all active lines, data bits per bus
  // width (1 bit/clk, 4 bits/clk, 8 bits/clk), 16 CRC bits per line, end bit, then releases.
  // Used by run_data for CMD17/18 and for the 64-byte/8-byte/512-byte special reads (kind 3).
  // inj_dat_crc_err flips one CRC bit on line 0.
  task send_block(input integer len);
    integer k, j, nclk;
    reg [7:0] bits, by, mask, cb;
    begin
      nclk = (bw == 1) ? len*8 : (bw == 4) ? len*2 : len;
      mask = (bw == 1) ? 8'h01 : (bw == 4) ? 8'h0F : 8'hFF;
      dcrc = 128'd0;

      dat_o  <= 8'h00;                 // start bit on all active lines
      dat_oe <= mask;
      @(posedge sd_clk);

      for (k = 0; k < nclk; k = k + 1) begin
        if (bw == 1) begin
          by   = tbuf[k/8];
          bits = {7'd0, by[7 - (k % 8)]};
        end else if (bw == 4) begin
          by   = tbuf[k/2];
          bits = (k % 2 == 0) ? {4'd0, by[7:4]} : {4'd0, by[3:0]};
        end else begin
          bits = tbuf[k];
        end
        dat_o <= bits | ~mask;
        for (j = 0; j < 8; j = j + 1)
          if (mask[j]) dcrc[16*j +: 16] = crc16_bit(dcrc[16*j +: 16], bits[j]);
        @(posedge sd_clk);
      end

      if (inj_dat_crc_err) dcrc[0] = ~dcrc[0];

      for (k = 15; k >= 0; k = k - 1) begin
        for (j = 0; j < 8; j = j + 1) cb[j] = dcrc[16*j + k];
        dat_o <= cb | ~mask;
        @(posedge sd_clk);
      end

      dat_o <= 8'hFF;                  // end bit
      @(posedge sd_clk);
      dat_oe <= 8'h00;
    end
  endtask

  // --------------------------------------------------------------------------
  // DAT: receive one block into tbuf (start bit already consumed)
  // --------------------------------------------------------------------------
  // recv_block : receives one block host -> card (start bit already consumed by wait_start).
 // Samples data bits into tbuf and compares per-line CRC16; sets rx_ok.
  task recv_block(input integer len);
    integer k, j, nclk;
    reg [7:0] bits, mask, acc;
    begin
      nclk = (bw == 1) ? len*8 : (bw == 4) ? len*2 : len;
      mask = (bw == 1) ? 8'h01 : (bw == 4) ? 8'h0F : 8'hFF;
      rcrc  = 128'd0;
      rx_ok = 1'b1;
      acc   = 8'h00;

      for (k = 0; k < nclk; k = k + 1) begin
        @(posedge sd_clk);
        bits = dat_i & mask;
        if (bw == 1) begin
          acc = {acc[6:0], bits[0]};
          if (k % 8 == 7) tbuf[k/8] = acc;
        end else if (bw == 4) begin
          if (k % 2 == 0) acc[7:4] = bits[3:0];
          else begin acc[3:0] = bits[3:0]; tbuf[k/2] = acc; end
        end else begin
          tbuf[k] = bits;
        end
        for (j = 0; j < 8; j = j + 1)
          if (mask[j]) rcrc[16*j +: 16] = crc16_bit(rcrc[16*j +: 16], bits[j]);
      end

      for (k = 15; k >= 0; k = k - 1) begin
        @(posedge sd_clk);
        for (j = 0; j < 8; j = j + 1)
          if (mask[j] && (dat_i[j] !== rcrc[16*j + k])) rx_ok = 1'b0;
      end
      @(posedge sd_clk);               // end bit
      if (dat_i[0] !== 1'b1) rx_ok = 1'b0;
    end
  endtask
  // send_wr_status : after a write block, sends the CRC status token on DAT0:
 // start(0), 010 = accepted / 101 = CRC error, end(1).
  task send_wr_status(input ok);
    reg [4:0] tok;
    integer k;
    begin
      tok = ok ? 5'b00101 : 5'b01011;  // start, status(010|101), end
      @(posedge sd_clk);
      for (k = 4; k >= 0; k = k - 1) begin
        dat_o  <= {7'h7F, tok[k]};
        dat_oe <= 8'h01;
        @(posedge sd_clk);
      end
    end
  endtask
  // do_busy : holds DAT0 low for n clocks, then releases. Used for R1b busy.
  task do_busy(input integer n);
    begin
      dat_busy = 1'b1;
      if (n > 0) begin
        dat_o  <= 8'hFE;
        dat_oe <= 8'h01;
        repeat (n) @(posedge sd_clk);
      end
      dat_o  <= 8'hFF;
      @(posedge sd_clk);
      dat_oe <= 8'h00;
      @(posedge sd_clk);
      dat_busy = 1'b0;
    end
  endtask
  // wait_start : waits for the host's start bit on DAT0 for a write block. Gives up on abort
  // (CMD12) or timeout (WR_TMO). Returns the result in wst.
  task wait_start;
    integer t;
    begin
      wst = 0;
      t   = 0;
      while (wst == 0) begin
        @(posedge sd_clk);
        if (abort_seen != abort_cnt) wst = 2;
        else if (dat_i[0] === 1'b0)  wst = 1;
        else begin
          t = t + 1;
          if (t > WR_TMO) begin
            wst = 2;
            if (VERBOSE) $display("[%0t] SD_BFM: write start-bit timeout", $time);
          end
        end
      end
    end
  endtask
  
  // load_blk / store_blk : copy one 512-byte block between memory and the staging buffer tbuf.
 // load_blk before send_block (read); store_blk after a good recv_block (write).
   task load_blk(input [31:0] blk);
    integer i;
    begin
      for (i = 0; i < 512; i = i + 1) tbuf[i] = mem[(blk % MEM_BLOCKS)*512 + i];
    end
  endtask

  task store_blk(input [31:0] blk);
    integer i;
    begin
      for (i = 0; i < 512; i = i + 1) mem[(blk % MEM_BLOCKS)*512 + i] = tbuf[i];
    end
  endtask
  
  // run_data : executes one data request.
  // read  (kind 1): NAC wait -> repeat { load_blk, send_block, 2-clock gap } until block count
  // reached or CMD12 seen.
  // kind 3        : sends tbuf as-is (EXT_CSD, SCR, switch status).
  // write (kind 2): repeat { wait_start, recv_block, store_blk if CRC ok, send_wr_status,
  // busy } until count reached or CMD12 seen.
  task run_data;
    reg [31:0] blk, cnt;
    reg        done;
    begin
      abort_seen = abort_cnt;                  // discard stale aborts
      dat_active = 1'b1;
      dat_wr     = (dreq_kind == 2);
      blk  = dreq_blk;
      cnt  = 32'd0;
      done = 1'b0;

      if (dreq_kind == 1) begin
        repeat (NAC) @(posedge sd_clk);
        while (!done) begin
          load_blk(blk);
          send_block(512);
          cnt = cnt + 1;
          blk = blk + 1;
          if (VERBOSE) $display("[%0t] SD_BFM: sent block %0d (bw=%0d)", $time, blk-1, bw);
          if (dreq_nblk != 0 && cnt >= dreq_nblk) done = 1'b1;
          if (abort_seen != abort_cnt) begin abort_seen = abort_cnt; done = 1'b1; end
          if (!done) repeat (2) @(posedge sd_clk);   // <-- ADD: inter-block gap
        end
      end else if (dreq_kind == 3) begin
        repeat (NAC) @(posedge sd_clk);
        send_block(dreq_len);
      end else if (dreq_kind == 2) begin
        while (!done) begin
          wait_start;
          if (wst != 1) done = 1'b1;
          else begin
            recv_block(512);
            if (rx_ok) store_blk(blk);
            send_wr_status(rx_ok && !inj_wr_crc_status);
            dat_busy = 1'b1;
            if (VERBOSE) $display("[%0t] SD_BFM: write block %0d crc_ok=%0d", $time, blk, rx_ok);
            if (cfg_busy_clks != 16'd0) begin
              dat_o  <= 8'hFE;
              dat_oe <= 8'h01;
              repeat (cfg_busy_clks) @(posedge sd_clk);
            end
            dat_o  <= 8'hFF;
            @(posedge sd_clk);
            dat_oe <= 8'h00;
            @(posedge sd_clk);
            dat_busy = 1'b0;
            cnt = cnt + 1;
            blk = blk + 1;
            if (dreq_nblk != 0 && cnt >= dreq_nblk) done = 1'b1;
          end
        end
      end
      dat_active = 1'b0;
      dat_wr     = 1'b0;
    end
  endtask

  // --------------------------------------------------------------------------
  // DAT process (single driver of dat_o / dat_oe)
  // --------------------------------------------------------------------------
  // Every clock: reset handling; else if a new data request arrived (dreq_cnt changed) run_data;
  // else if a busy request arrived (busy_cnt changed) do_busy.
  initial begin
    forever begin
      @(posedge sd_clk);
      if (!rst_n) begin
        dat_oe     <= 8'h00;
        dat_o      <= 8'hFF;
        dat_active  = 1'b0;
        dat_busy    = 1'b0;
        dreq_seen   = dreq_cnt;
        busy_seen   = busy_cnt;
        abort_seen  = abort_cnt;
      end else if (dreq_seen != dreq_cnt) begin
        dreq_seen = dreq_cnt;
        run_data;
      end else if (busy_seen != busy_cnt) begin
        busy_seen = busy_cnt;
        do_busy(busy_clks);
      end
    end
  end

endmodule
