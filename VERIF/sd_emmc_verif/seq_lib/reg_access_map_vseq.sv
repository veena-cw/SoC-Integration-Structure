// ============================================================================
// reg_access_map_vseq.sv       
//
// Goal : check the host-controller register map against the SD Host Controller spec (access
//        type, fixed-zero bits, read-only immunity, reserved addresses) and against what this RTL
//        implements (idle reset values, no buffer data port). One table drives every check.
// Flow : build_map -> reset values -> RW retention -> read-only immunity -> reserved reads.
//        Needs no card and no clocks; it only talks to the AXI-Lite port through the base vseq.
// IDs  : COMMON-F-001 (register access), COMMON-F-014 (reset values)
// Tags : [SPEC]   spec behaviour (access type, fixed-0 bit, reserved reads 0)
//        [DESIGN] behaviour this RTL implements (idle Present State, 0x20 data port absent)
// Table: only bits whose spec definition is certain are in 'rw'. Bits the RTL stores but the spec
//        calls reserved are left out, so they are never reported either way.
//        Not written here: 0x0C (a write launches a command: COMMON-F-002) and 0x30 (RW1C:
//        COMMON-F-003). Walking bits and byte lanes stay in sd_emmc_reg_seq (COMMON-F-001).
// ============================================================================
class reg_access_map_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(reg_access_map_vseq)
  `uvm_declare_p_sequencer(sd_emmc_virtual_sequencer)

  localparam bit [31:0] M_ALL = 32'hFFFF_FFFF;

  // Register table, one entry per register (parallel queues)
  string     m_name  [$];
  bit [31:0] m_addr  [$];
  bit [31:0] m_rw    [$];   // bits that must hold a written value
  bit [31:0] m_z     [$];   // bits that must read 0 after writing ones (fixed-zero bits)
  bit [31:0] m_rst   [$];   // expected reset value (compared under m_rst_m)
  bit [31:0] m_rst_m [$];   // bits compared at reset (0 = skip)
  bit [31:0] m_vol   [$];   // bits excluded from the read-only immunity check (reserved or volatile)
  bit [31:0] m_wr    [$];   // bits a test may write (0 = never write this register)

  function new(string name = "reg_access_map_vseq");
    super.new(name);
  endfunction

  // Goal: add one register to the table.
  function void add_reg(string name, bit [31:0] addr, bit [31:0] rw, bit [31:0] z,
                        bit [31:0] rst, bit [31:0] rst_m, bit [31:0] vol, bit [31:0] wr);
    m_name.push_back(name);   m_addr.push_back(addr);
    m_rw.push_back(rw);       m_z.push_back(z);
    m_rst.push_back(rst);     m_rst_m.push_back(rst_m);
    m_vol.push_back(vol);     m_wr.push_back(wr);
  endfunction

  // Goal: the register map. Columns: name, byte offset, rw, z, rst, rst_m, vol, wr.
  function void build_map();
    add_reg("ARG2",         'h00, M_ALL,          0,          0,          M_ALL,  0,          M_ALL);
    add_reg("BLK_SIZE_CNT", 'h04, 32'hFFFF_7FFF,  0,          0,          M_ALL,  32'h0000_8000, M_ALL);
    add_reg("ARG1",         'h08, M_ALL,          0,          0,          M_ALL,  0,          M_ALL);
    add_reg("XFER_CMD",     'h0C, 0,              0,          0,          M_ALL,  0,          0);        // reset only
    add_reg("RESP0",        'h10, 0,              0,          0,          0,      0,          M_ALL);
    add_reg("RESP1",        'h14, 0,              0,          0,          0,      0,          M_ALL);
    add_reg("RESP2",        'h18, 0,              0,          0,          0,      0,          M_ALL);
    add_reg("RESP3",        'h1C, 0,              0,          0,          0,      0,          M_ALL);
    add_reg("PRESENT_STATE",'h24, 0,              0,          32'h01FF_0000, M_ALL, 0,        M_ALL);    // idle level is RTL-defined
    add_reg("HOST_CTRL",    'h28, 32'h070F_0FFF,  0,          0,          M_ALL,  32'hF8F0_F000, M_ALL);
    add_reg("CLK_TMO_RST",  'h2C, 32'h000F_FFE5,  0,          0,          32'hFFFF_FFFD, 32'hFFF0_001A, 32'hF8FF_FFFF); // not [26:24] (software reset)
    add_reg("INT_STAT",     'h30, 0,              0,          0,          M_ALL,  0,          0);        // reset only (RW1C: COMMON-F-003)
    add_reg("INT_STAT_EN",  'h34, 32'h03FF_01FF,  32'h0000_8000, 0,       M_ALL,  32'hFC00_FE00, M_ALL);
    add_reg("INT_SIG_EN",   'h38, 32'h03FF_01FF,  32'h0000_8000, 0,       M_ALL,  32'hFC00_FE00, M_ALL);
    add_reg("ACMD_ERR_HC2", 'h3C, 32'h0007_0000,  0,          0,          32'h0007_FFFF, 32'hFFF8_0000, M_ALL);
    add_reg("CAPS0",        'h40, 0,              0,          0,          0,      0,          M_ALL);
    add_reg("CAPS1",        'h44, 0,              0,          0,          0,      0,          M_ALL);
    add_reg("ADMA_ADDR",    'h58, 32'hFFFF_FFFC,  0,          0,          32'hFFFF_FFFC, 32'h0000_0003, M_ALL);
  endfunction

  virtual task body();
    bit [31:0] got, v0, v1, p, im;
    bit [31:0] pats [3] = '{32'hA5A5_A5A5, 32'h5A5A_5A5A, 32'hFFFF_FFFF};  // each bit is 1 and 0 once
    bit [31:0] unm  []  = '{'h4C, 'h60, 'h68, 'h70, 'h78};                  // reserved addresses
    string     rule;
     //if (p_sequencer.axi_lite_sqr == null)
    //`uvm_fatal("REG_MAP", "p_sequencer.axi_lite_sqr is null at vseq start")
    `uvm_info("REG_MAP", "=== reg_access_map_vseq start ===", UVM_LOW)
     /*begin
      sd_emmc_controller_axi_lite_agent_seq_item it =
        sd_emmc_controller_axi_lite_agent_seq_item::type_id::create("it");
      `uvm_info("DBG", $sformatf("vseq sequencer=%s  p_sequencer=%s  axi_lite_sqr=%s",
        (get_sequencer() == null) ? "NULL" : get_sequencer().get_full_name(),
        (p_sequencer == null)     ? "NULL" : p_sequencer.get_full_name(),
        (p_sequencer.axi_lite_sqr == null) ? "NULL" : p_sequencer.axi_lite_sqr.get_full_name()), UVM_LOW)
        start_item(it, -1, p_sequencer.axi_lite_sqr);
      //it.set_item_context(this, p_sequencer.axi_lite_sqr);
      start_item(it, , p_sequencer.axi_lite_sqr);   // single line, no set_item_context
      `uvm_info("DBG", $sformatf("after start_item: item sequencer=%s",
        (it.get_sequencer() == null) ? "NULL" : it.get_sequencer().get_full_name()), UVM_LOW)
      it.cmd  = sd_emmc_controller_axi_lite_agent_seq_item::AXI_READ;
      it.addr = 32'h0;
      finish_item(it);
      `uvm_info("DBG", "finish_item returned", UVM_LOW)
    end*/
    build_map();

    // S1 - reset values. Goal: nothing has been written yet, so every register shows its default.
    // A non-zero expected value comes from the RTL (idle pin levels): DESIGN. Zero is the spec default: SPEC.
    read_reg(32'h0, got);
    `uvm_info("DBG", $sformatf("Initial ARG2 read value: 0x%08h", got), UVM_LOW)
    // S1 - Reset values check
    foreach (m_addr[i]) begin
      if (m_rst_m[i] != 0) begin
        read_reg(m_addr[i], got);
        rule = (m_rst[i] != 0) ? "DESIGN" : "SPEC";
        check_val({"RST_", m_name[i]}, rule, got, m_rst[i], m_rst_m[i]);
      end
    end

    // S2 - RW retention. Goal: every writable bit keeps what was written. The two complementary patterns
    // set and clear each bit once. The all-ones pass also checks the fixed-zero bits (bit 15 of 0x34/0x38: BUG-6).
    foreach (m_addr[i]) begin
      if (m_rw[i] != 0 && m_wr[i] != 0) begin
        foreach (pats[k]) begin
          p = pats[k] & m_wr[i];
          write_reg_strobe(m_addr[i], p, STRB_ALL);
          read_reg(m_addr[i], got);
          check_val($sformatf("RW_%s_P%0d", m_name[i], k), "SPEC", got, p, m_rw[i]);
          if (m_z[i] != 0 && pats[k] == M_ALL)
            check_val($sformatf("FIXED0_%s", m_name[i]), "SPEC", got, 32'h0, m_z[i]);
        end
      end
    end

    // S3 - read-only immunity. Goal: a write of ones must not change the read-only bits.
    foreach (m_addr[i]) begin
      im = ~m_rw[i] & ~m_vol[i];
      if (im != 0 && m_wr[i] != 0) begin
        read_reg(m_addr[i], v0);
        write_reg_strobe(m_addr[i], M_ALL & m_wr[i], STRB_ALL);
        read_reg(m_addr[i], v1);
        check_val($sformatf("RO_%s", m_name[i]), "SPEC", v1, v0, im);
      end
    end

    // S4 - reserved addresses read 0.
    foreach (unm[i]) begin
      read_reg(unm[i], got);
      check_val($sformatf("RESV_0x%03h", unm[i]), "SPEC", got, 32'h0);
    end

    // S5 - this RTL has no Buffer Data Port (0x20): reads 0 and ignores writes, so data moves only by DMA.
    write_reg_strobe('h20, M_ALL, STRB_ALL);
    read_reg('h20, got);
    check_val("BUFPORT_ABSENT", "DESIGN", got, 32'h0);

    `uvm_info("REG_MAP", $sformatf("=== reg_access_map_vseq done, failures=%0d ===", n_errors), UVM_LOW)
  endtask

endclass : reg_access_map_vseq
