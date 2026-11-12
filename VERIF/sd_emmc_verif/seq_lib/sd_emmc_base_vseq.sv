// ============================================================================
// sd_emmc_base_vseq.sv
//
// Goal : shared base virtual sequence for all SD/eMMC tests. It owns the register
//        access helpers and the command helpers, so each test-specific vseq stays
//        small and only holds its own steps and checks.
// Flow : a test starts a derived vseq on env.vseqr (sd_emmc_virtual_sequencer).
//        Every helper below turns into AXI-Lite items that are sent to
//        p_sequencer.axi_lite_sqr, so derived vseqs never touch the sequencer.
// Place: include this file in sd_emmc_tb_pkg.sv BEFORE the first vseq that extends it.
// Notes: failures use the project tags [SPEC] (spec behaviour) and [DESIGN]
//        (behaviour this RTL implements). n_errors counts the failures raised here.
// ============================================================================
`ifndef SD_EMMC_BASE_VSEQ_SV
`define SD_EMMC_BASE_VSEQ_SV

// Goal: carry one pre-built AXI-Lite item to the driver.
// Flow: started ON the AXI-Lite sequencer, so that sequencer registers it and can grant it to the driver.
class axi_lite_item_seq extends uvm_sequence #(sd_emmc_controller_axi_lite_agent_seq_item);
  `uvm_object_utils(axi_lite_item_seq)
  
  sd_emmc_controller_axi_lite_agent_seq_item item;
  
  function new(string name = "axi_lite_item_seq"); 
  super.new(name); 
  endfunction
  
  task body();
    start_item(item);
    finish_item(item);   // same handle goes back, so the driver's read_data/rresp land in the caller's item
  endtask
endclass

class sd_emmc_base_vseq extends uvm_sequence;
  `uvm_object_utils(sd_emmc_base_vseq)
  `uvm_declare_p_sequencer(sd_emmc_virtual_sequencer)

  // Register offsets (RTL map). Names are deliberately different from the ones
  // test vseqs define locally, so a derived class never redeclares a base name.
  localparam bit [31:0] REG_ARG2          = 32'h0000_0000; // slv_reg0
  localparam bit [31:0] REG_BLK_SIZE_CNT  = 32'h0000_0004; // slv_reg1  [15:0] size, [31:16] count
  localparam bit [31:0] REG_ARG1          = 32'h0000_0008; // slv_reg2
  localparam bit [31:0] REG_CMD_XFER      = 32'h0000_000C; // slv_reg3  [15:0] transfer mode, [31:16] command
  localparam bit [31:0] REG_PRESENT_STATE = 32'h0000_0024; // slv_reg9  (RO)
  localparam bit [31:0] REG_CLK_CTRL      = 32'h0000_002C; // slv_reg11 {sw reset, timeout, clock control}
  localparam bit [31:0] REG_INT_STAT_WORD = 32'h0000_0030; // slv_reg12 {0x32 error status, 0x30 normal status}

  // Byte-lane strobes
  localparam bit [3:0]  STRB_ALL = 4'b1111;
  localparam bit [3:0]  STRB_LO  = 4'b0011;   // bits [15:0]
  localparam bit [3:0]  STRB_HI  = 4'b1100;   // bits [31:16]

  // Knobs
  int unsigned poll_max_reads = 20;      // poll_reg gives up after this many reads
  int unsigned cmd_poll_max   = 200;     // wait_cmd_complete gives up after this many reads
  bit [3:0]    cmd_strb       = 4'hC;    // strobe used to launch a command ([DESIGN]: 4'hC; [SPEC]: byte 3 only = 4'h8)

  int unsigned n_errors = 0;

  function new(string name = "sd_emmc_base_vseq");
    super.new(name);
  endfunction

  // --------------------------------------------------------------------------
  // Reporting
  // --------------------------------------------------------------------------
  // Goal: one place that counts a failure and prints it with its [SPEC]/[DESIGN] tag.
  // Flow: used by check_reg and available to derived vseqs.
  function void fail(string rule, string id, string msg);
    n_errors++;
    `uvm_error(id, $sformatf("[%s] %s", rule, msg))
  endfunction

  // Goal: the single entry point for every AXI-Lite access made by any vseq.
  // Flow: write_reg_strobe / read_reg -> send_axi -> axi_lite_item_seq on axi_lite_sqr -> driver -> DUT.
  task send_axi(sd_emmc_controller_axi_lite_agent_seq_item t);
    axi_lite_item_seq s = axi_lite_item_seq::type_id::create("s");
    s.item = t;
    s.start(p_sequencer.axi_lite_sqr);
  endtask
  // --------------------------------------------------------------------------
  // AXI-Lite access
  // --------------------------------------------------------------------------
  // Goal: one AXI-Lite write with an explicit byte strobe.
  // Flow: builds the item and sends it on the AXI-Lite sequencer via the virtual sequencer.
  task write_reg_strobe(bit [31:0] addr, bit [31:0] data, bit [3:0] strb);
    sd_emmc_controller_axi_lite_agent_seq_item req = sd_emmc_controller_axi_lite_agent_seq_item::type_id::create("req");
    req.cmd = sd_emmc_controller_axi_lite_agent_seq_item::AXI_WRITE;
    req.cmd        = sd_emmc_controller_axi_lite_agent_seq_item::AXI_WRITE;
    req.addr       = addr;
    req.write_data = data;
    req.wstrb      = strb;
    send_axi(req); 
  endtask

  // Goal: one AXI-Lite read; returns the 32-bit word at addr.
  // Flow: the driver fills req.read_data before finish_item returns.
  task read_reg(bit [31:0] addr, output bit [31:0] data);
    sd_emmc_controller_axi_lite_agent_seq_item req = sd_emmc_controller_axi_lite_agent_seq_item::type_id::create("req");
    req.cmd = sd_emmc_controller_axi_lite_agent_seq_item::AXI_READ;
    req.cmd  = sd_emmc_controller_axi_lite_agent_seq_item::AXI_READ;
    req.addr = addr;
    send_axi(req); 
    data = req.read_data;
  endtask

  // Goal: read a register and require (read & mask) == (exp & mask).
  // Flow: the basic "verify against the spec" step used by most tests. A mismatch is
  // counted and reported with the given rule tag (default SPEC).
  task check_reg(bit [31:0] addr, bit [31:0] exp, bit [31:0] mask,
                 string tag, string rule = "SPEC");
    bit [31:0] got;
    read_reg(addr, got);
    if ((got & mask) !== (exp & mask))
      fail(rule, tag, $sformatf("0x%03h read=0x%08h exp=0x%08h (mask 0x%08h)",
                                addr, got & mask, exp & mask, mask));
  endtask

  // Goal: wait until (read & mask) == val, for at most poll_max_reads reads.
  // Flow: reads the register without clearing anything; ok=0 means the condition never
  // appeared, so callers can report a PRECONDITION and skip.
  task poll_reg(bit [31:0] addr, bit [31:0] mask, bit [31:0] val, output bit ok);
    bit [31:0] rd;
    ok = 1'b0;
    for (int unsigned i = 0; i < poll_max_reads && !ok; i++) begin
      read_reg(addr, rd);
      if ((rd & mask) === (val & mask)) ok = 1'b1;
      else #50ns;
    end
  endtask

  // --------------------------------------------------------------------------
  // Setup helpers
  // --------------------------------------------------------------------------
  // Goal: enable the SD clock path (0x2C bits [2:0], same value the lockout test uses).
  // Flow: first step of every test that sends commands.
  task enable_clocks();
    write_reg_strobe(REG_CLK_CTRL, 32'h0000_0007, STRB_ALL);
    // Goal: 0x30 reads are masked by 0x34/0x36 in this RTL, so every test that reads
    // status must enable the bits first. Fits the flow as part of bring-up.
    write_reg_strobe(32'h0000_0034, 32'hFFFF_FFFF, STRB_ALL);
    #100ns;
  endtask

  // Goal: clear the Normal and Error Interrupt Status words (write-1-to-clear on 0x30).
  // Flow: run after a command or an error so the next command starts from clean status.
  // Note: all-ones is written; if the RTL treated 0x30 as a plain register this would
  // leave bits set, which the RW1C test (COMMON-F-003) is there to catch.
  task clear_status();
    // Goal: clear status AND release the mask. A written 1 clears the event (via the
    // int_rst pulse) but also masks that bit until a 0 is written, so a second write follows.
    write_reg_strobe(REG_INT_STAT_WORD, 32'hFFFF_FFFF, STRB_ALL);
    write_reg_strobe(REG_INT_STAT_WORD, 32'h0000_0000, STRB_ALL);
    #50ns;
  endtask

  // Goal: pulse the reset agent (assert, then release) to reset the DUT mid-test.
  // Flow: runs rst_assert_seq on the reset sequencer; duration knobs are the sequence's own.
  task apply_reset();
    rst_assert_seq rseq = rst_assert_seq::type_id::create("rseq");
    rseq.start(p_sequencer.rst_sqr);
    #100ns;
  endtask

  // --------------------------------------------------------------------------
  // Command helpers
  // --------------------------------------------------------------------------
  // Goal: build the 16-bit Command register value (0x0E[15:0] as seen in 0x0C[31:16]).
  // Layout: [13:8] index, [5] data present, [4] index check, [3] CRC check,
  //         [1:0] response type (00 none, 01 136-bit, 10 48-bit, 11 48-bit + busy).
  // Flow: chk=1 turns on the CRC check for every response and the index check for
  // 48-bit responses. Use chk=0 for R3 (ACMD41, CMD1), which has no CRC or index echo.
  function bit [15:0] make_cmd_reg(bit [5:0] idx, bit [1:0] resp, bit chk, bit data_present = 1'b0);
    bit idx_chk, crc_chk;
    idx_chk = chk && resp[1];
    crc_chk = chk && (resp != 2'b00);
    return {2'b00, idx, 2'b00, data_present, idx_chk, crc_chk, 1'b0, resp};
  endfunction

  // Goal: issue one command: write Argument 1, then write the Command half of 0x0C.
  // Flow: the Command write launches the command (strobe from cmd_strb). Transfer Mode
  // is not touched, so tests that need it write it first with write_reg_strobe.
  task send_cmd(bit [5:0] idx, bit [31:0] arg, bit [1:0] resp,
                bit chk = 1'b1, bit data_present = 1'b0);
    write_reg_strobe(REG_ARG1, arg, STRB_ALL);
    write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(idx, resp, chk, data_present), 16'h0}, cmd_strb);
  endtask

  // Goal: wait for the command that was just sent to finish.
  // Flow: polls 0x30; ok=1 when Command Complete (bit 0) rises, ok=0 on the Error summary
  // (bit 15) or after cmd_poll_max reads. On success Command Complete is cleared (write-1)
  // so the next command is seen. NOTE: this clears bit 0, so tests that need to observe
  // the bit themselves use poll_reg instead.
  task wait_cmd_complete(output bit ok);
    bit [31:0] rd;
    bit        done = 1'b0;
    ok = 1'b0;
    for (int unsigned i = 0; i < cmd_poll_max && !done; i++) begin
      read_reg(REG_INT_STAT_WORD, rd);
      if (rd[0])       begin ok = 1'b1; done = 1'b1; end
      else if (rd[15]) begin ok = 1'b0; done = 1'b1; end
      else #50ns;
    end
     if (ok) clear_status();  
  endtask
  
    // ==========================================================================
  // BFM / card-flow additions
  // ==========================================================================
  localparam bit [1:0]  RESP_NONE  = 2'b00;          // no response
  localparam bit [1:0]  RESP_136   = 2'b01;          // R2
  localparam bit [1:0]  RESP_48    = 2'b10;          // R1 / R3 / R6 / R7
  localparam bit [1:0]  RESP_48B   = 2'b11;          // R1b
  localparam bit [31:0] REG_RESP0  = 32'h0000_0010;  // response regs 0x10..0x1C
  localparam bit [31:0] R1_ILLEGAL = 32'h0040_0000;  // R1 bit 22

  virtual sd_emmc_controller_sd_emmc_if vif;       // set by bfm_setup
  bit [31:0] last_st;           // raw 0x30 word seen when the last command finished
  bit [31:0] last_resp [4];     // 0x10..0x1C after the last command
  bit        last_ok;           // last command: Command Complete and no error bit

  // Goal: pass/fail helper for a masked compare. rule: SPEC, DESIGN or BFM (card-model behaviour).
  function void check_val(string tag, string rule, bit [31:0] got, bit [31:0] exp,
                          bit [31:0] mask = 32'hFFFF_FFFF);
    if ((got & mask) !== (exp & mask))
      fail(rule, tag, $sformatf("got=0x%08h exp=0x%08h (mask 0x%08h)", got & mask, exp & mask, mask));
  endfunction

  // Goal: R2 check. Response registers hold bits [127:8] of the 136-bit frame (SD Host spec layout).
  function void check_r2(string tag, bit [127:0] exp);
    bit [119:0] got;
    got = {last_resp[3][23:0], last_resp[2], last_resp[1], last_resp[0]};
    if (got !== exp[127:8])
      fail("SPEC", tag, $sformatf("R2 payload got=0x%030h exp=0x%030h", got, exp[127:8]));
  endfunction

  // Goal: a skipped step must be visible as a failure, never a silent pass.
  function void precond(string msg);
    n_errors++;
    `uvm_error("PRECONDITION", msg)
  endfunction

  // Goal: switch the card BFM on with a clean configuration. First step of every BFM test.
  task bfm_setup(bit emmc = 1'b0, bit hc = 1'b1, bit [15:0] busy = 16'd20);
    if (!uvm_config_db#(virtual sd_emmc_controller_sd_emmc_if)::get(m_sequencer, "", "vif", vif)) begin
  // Fallback to checking full scope if root-level string was used
  if (!uvm_config_db#(virtual sd_emmc_controller_sd_emmc_if)::get(null, "*", "vif", vif)) begin
    `uvm_fatal("VSEQ_NOVIF", "Could not get virtual interface 'vif' from uvm_config_db")
  end
end
    vif.cfg_emmc     = emmc;
    vif.cfg_hc       = hc;
    vif.cfg_busy     = busy;
    vif.cfg_s18a     = 1'b0;
    vif.cfg_resp_dly = 8'd0;
    bfm_clear_inj();
    vif.use_bfm      = 1'b1;
    vif.cfg_skip_crc7 = 1'b0;   //temporary to check the CMD pass without crc7 check
    #200ns;
  endtask

  task bfm_clear_inj();
    vif.inj_no_resp   = 1'b0;
    vif.inj_resp_crc  = 1'b0;
    vif.inj_dat_crc   = 1'b0;
    vif.inj_wr_tok    = 1'b0;
    vif.inj_idx_err   = 1'b0;
    vif.inj_eb_err    = 1'b0;
  endtask

  // Goal: wait until the command finished: Command Complete (bit 0) or any command error
  // (0x30 bits 19:16). The summary bit 15 is not used because it is tied to 0 in this RTL (BUG-4).
  // Flow: does not clear anything; last_st keeps the raw word for the caller.
  task wait_cmd_done(output bit ok);
    bit [31:0] rd;
    bit        done = 1'b0;
    ok      = 1'b0;
    last_st = 32'h0;
    for (int unsigned i = 0; i < cmd_poll_max && !done; i++) begin
      read_reg(REG_INT_STAT_WORD, rd);
      last_st = rd;
      if (rd[0] || (rd[19:16] != 4'h0)) done = 1'b1;
      else #50ns;
    end
    ok = done && rd[0] && (rd[19:16] == 4'h0);
  endtask

  // Goal: one complete command: send, wait, capture status + response registers, clear status.
  // R1b: also waits for DAT inhibit to drop so the next command is not issued during busy.
  task do_cmd(bit [5:0] idx, bit [31:0] arg, bit [1:0] resp, bit chk = 1'b1,
              bit data_present = 1'b0);
    send_cmd(idx, arg, resp, chk, data_present);
    wait_cmd_done(last_ok);
    for (int i = 0; i < 4; i++) read_reg(REG_RESP0 + 32'(4*i), last_resp[i]);
    clear_status();
    if (resp == RESP_48B) begin
      int unsigned keep;
      bit          busy_ok;
      keep           = poll_max_reads;
      poll_max_reads = 200;
      poll_reg(REG_PRESENT_STATE, 32'h2, 32'h0, busy_ok);
      poll_max_reads = keep;
    end
  endtask

  // Goal: SD ACMD41 loop (CMD55 + CMD41) until OCR bit 31 = 1 or 16 tries; returns OCR and tries.
  task acmd41_loop(bit [31:0] arg, bit [15:0] rca, output bit [31:0] ocr, output int unsigned polls);
    ocr   = 32'h0;
    polls = 0;
    for (int i = 0; i < 16; i++) begin
      do_cmd(6'd55, {rca, 16'h0}, RESP_48, 1'b1);
      do_cmd(6'd41, arg, RESP_48, 1'b0);          // R3: no CRC / index check
      polls++;
      ocr = last_resp[0];
      if (!last_ok || ocr[31]) break;
    end
  endtask

  // Goal: eMMC CMD1 loop, same idea as acmd41_loop.
  task cmd1_loop(bit [31:0] arg, output bit [31:0] ocr, output int unsigned polls);
    ocr   = 32'h0;
    polls = 0;
    for (int i = 0; i < 16; i++) begin
      do_cmd(6'd1, arg, RESP_48, 1'b0);
      polls++;
      ocr = last_resp[0];
      if (!last_ok || ocr[31]) break;
    end
  endtask

  // Goal: if a failed command left CMD inhibit set (BUG-2 style), reset the DUT (this also
  // resets the BFM to Idle) and re-enable the clocks so the next step starts clean.
  task recover_if_stuck();
    bit [31:0] ps;
    read_reg(REG_PRESENT_STATE, ps);
    if (ps[0]) begin
      apply_reset();
      enable_clocks();
    end
  endtask
  
  
  
endclass : sd_emmc_base_vseq

`endif // SD_EMMC_BASE_VSEQ_SV
