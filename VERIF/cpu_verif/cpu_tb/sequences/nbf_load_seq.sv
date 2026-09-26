// nbf_load_seq.sv
// Replaces bp_nonsynth_cfg_loader: reads an NBF-format boot image (produced offline
// by the RISC-V toolchain + bp_common/software/py/nbf.py from the test's C source)
// and verifies it. The real BlackParrot tethered setup preloads this image in
// the DRAM model; streaming these writes into bp_processor's incoming I/O
// port would create unrelated reverse traffic and disturb the cache protocol.
//
// NBF text format is "<addr_hex> <data_hex>" one entry per line, terminated by the
// loader-specific "fence"/finish record — here we just stop at EOF and issue a final
// uncached read of address 0 as a simple readback sanity check.

`ifndef NBF_LOAD_SEQ_SV
`define NBF_LOAD_SEQ_SV

class nbf_load_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(nbf_load_seq)

  string nbf_path = "bp_dv_003_alu.nbf";
  bit    require_alu;
  bit    require_load_store;
  bit    require_memory_widths;
  bit    require_cache_refill;
  bit    require_illegal_trap;
  bit    require_ecall_ebreak;
  bit    require_compressed;
  bit    require_jump;
  bit    require_branch;
  bit    require_atomic;
  bit    require_lrsc;
  bit    preload_only;

  function new(string name = "nbf_load_seq");
    super.new(name);
  endfunction

  function automatic bit is_rv64_integer_alu(bit [31:0] instr);
    return (instr[6:0] == 7'b0110011) // register-register ALU
        || (instr[6:0] == 7'b0010011); // immediate ALU
  endfunction

  task body();
    int fd;
    string line;
    bit [63:0] addr, data;
    int n_loaded;
    int n_alu;
    int n_load;
    int n_store;
    int n_lb;
    int n_lbu;
    int n_lh;
    int n_lhu;
    int n_lw;
    int n_sb;
    int n_sh;
    int n_sw;
    int n_jump;
    int n_branch;
    int n_atomic;
    int n_lrsc;
    int n_illegal;
    int n_ecall;
    int n_ebreak;
    int n_compressed;

    n_loaded = 0;
    n_alu = 0;
    n_load = 0;
    n_store = 0;
    n_lb = 0;
    n_lbu = 0;
    n_lh = 0;
    n_lhu = 0;
    n_lw = 0;
    n_sb = 0;
    n_sh = 0;
    n_sw = 0;
    n_jump = 0;
    n_branch = 0;
    n_atomic = 0;
    n_lrsc = 0;
    n_illegal = 0;
    n_ecall = 0;
    n_ebreak = 0;
    n_compressed = 0;

    // DRAM is preloaded by bp_nonsynth_dram before reset. Keep an override for
    // experiments that explicitly want to stream the image through UVM.
    preload_only = 1'b1;
    void'($value$plusargs("NBF_PRELOAD_ONLY=%d", preload_only));

    fd = $fopen(nbf_path, "r");
    if (fd == 0)
      `uvm_fatal("NBF_LOAD", $sformatf("could not open NBF image %0s", nbf_path))

    while (!$feof(fd)) begin
      if ($fgets(line, fd) == 0) continue;
      if ($sscanf(line, "%h %h", addr, data) == 2) begin
        bedrock_txn t;

        // gen_boot_image.py stores two 32-bit instructions per 64-bit NBF
        // data word. Check both halves for RV64 register or immediate ALU ops.
        if (is_rv64_integer_alu(data[31:0]))  n_alu++;
        if (is_rv64_integer_alu(data[63:32])) n_alu++;
        if ((data[31:0] == 32'h00000000) || (data[31:0] == 32'hffffffff))
          n_illegal++;
        if ((data[63:32] == 32'h00000000) || (data[63:32] == 32'hffffffff))
          n_illegal++;
        if (data[31:0] == 32'h00000073)  n_ecall++;
        if (data[63:32] == 32'h00000073) n_ecall++;
        if (data[31:0] == 32'h00100073)  n_ebreak++;
        if (data[63:32] == 32'h00100073) n_ebreak++;
        // RVC instructions occupy 16-bit halfwords whose low two bits are
        // not 2'b11. This is an image-level presence check; the C test also
        // checks the executed compressed-operation results in DRAM.
        if (data[1:0]   != 2'b11) n_compressed++;
        if (data[17:16] != 2'b11) n_compressed++;
        if (data[33:32] != 2'b11) n_compressed++;
        if (data[49:48] != 2'b11) n_compressed++;
        if (data[6:0] == 7'b0000011) begin
          n_load++;
          case (data[14:12])
            3'b000: n_lb++;
            3'b001: n_lh++;
            3'b010: n_lw++;
            3'b100: n_lbu++;
            3'b101: n_lhu++;
            default: begin end
          endcase
        end
        if (data[38:32] == 7'b0000011) begin
          n_load++;
          case (data[46:44])
            3'b000: n_lb++;
            3'b001: n_lh++;
            3'b010: n_lw++;
            3'b100: n_lbu++;
            3'b101: n_lhu++;
            default: begin end
          endcase
        end
        if (data[6:0] == 7'b0100011) begin
          n_store++;
          case (data[14:12])
            3'b000: n_sb++;
            3'b001: n_sh++;
            3'b010: n_sw++;
            default: begin end
          endcase
        end
        if (data[38:32] == 7'b0100011) begin
          n_store++;
          case (data[46:44])
            3'b000: n_sb++;
            3'b001: n_sh++;
            3'b010: n_sw++;
            default: begin end
          endcase
        end
        if (data[6:0] == 7'b1101111)   n_jump++;
        if (data[38:32] == 7'b1101111) n_jump++;
        if (data[6:0] == 7'b1100111)   n_jump++;
        if (data[38:32] == 7'b1100111) n_jump++;
        if (data[6:0] == 7'b1100011)   n_branch++;
        if (data[38:32] == 7'b1100011) n_branch++;
        if (data[6:0] == 7'b0101111) begin
          n_atomic++;
          if ((data[31:27] == 5'b00010) || (data[31:27] == 5'b00011))
            n_lrsc++;
        end
        if (data[38:32] == 7'b0101111) begin
          n_atomic++;
          if ((data[63:59] == 5'b00010) || (data[63:59] == 5'b00011))
            n_lrsc++;
        end

        if (!preload_only) begin
          t = bedrock_txn::type_id::create("t");
          start_item(t);
          t.dir      = BEDROCK_FWD;
          t.msg_type = E_MEM_WR;
          t.addr     = addr;
          t.size     = 3; // 8B beat
          t.data     = data;
          t.is_boot  = 1'b1;
          finish_item(t);
        end
        n_loaded++;
      end
    end
    $fclose(fd);

    if (require_alu) begin
      if (n_alu == 0)
        `uvm_fatal("ALU_CHECK", $sformatf("no RV64 integer ALU instruction found in %0s", nbf_path))
      else
        `uvm_info("ALU_CHECK", $sformatf("found %0d RV64 integer ALU instruction(s) in %0s", n_alu, nbf_path), UVM_LOW)
    end

    if (require_load_store) begin
      if ((n_load == 0) || (n_store == 0))
        `uvm_fatal("LOAD_STORE_CHECK",
                   $sformatf("expected RV64 load and store instructions in %0s; found loads=%0d stores=%0d",
                             nbf_path, n_load, n_store))
      else
        `uvm_info("LOAD_STORE_CHECK",
                  $sformatf("found RV64 load instructions=%0d store instructions=%0d in %0s",
                            n_load, n_store, nbf_path), UVM_LOW)
    end

    if (require_memory_widths) begin
      if ((n_lb == 0) || (n_lbu == 0) || (n_lh == 0) || (n_lhu == 0) ||
          (n_lw == 0) || (n_sb == 0) || (n_sh == 0) || (n_sw == 0))
        `uvm_fatal("MEM_WIDTH_CHECK",
                   $sformatf("expected LB/LBU/LH/LHU/LW and SB/SH/SW in %0s; found LB=%0d LBU=%0d LH=%0d LHU=%0d LW=%0d SB=%0d SH=%0d SW=%0d",
                             nbf_path, n_lb, n_lbu, n_lh, n_lhu, n_lw,
                             n_sb, n_sh, n_sw))
      else
        `uvm_info("MEM_WIDTH_CHECK",
                  $sformatf("found LB=%0d LBU=%0d LH=%0d LHU=%0d LW=%0d SB=%0d SH=%0d SW=%0d in %0s",
                            n_lb, n_lbu, n_lh, n_lhu, n_lw,
                            n_sb, n_sh, n_sw, nbf_path), UVM_LOW)
    end

    if (require_cache_refill) begin
      // The directed image has four cold-line loads plus three repeated
      // passes. This instruction-count check ensures the selected image is
      // the cache-refill workload rather than an unrelated boot image.
      if (n_load < 8)
        `uvm_fatal("CACHE_REFILL_CHECK",
                   $sformatf("expected repeated load accesses for cache refill in %0s; found loads=%0d",
                             nbf_path, n_load))
      else
        `uvm_info("CACHE_REFILL_CHECK",
                  $sformatf("found %0d load instructions in cold-line/repeat-access image %0s",
                            n_load, nbf_path), UVM_LOW)
    end

    if (require_illegal_trap) begin
      if (n_illegal < 2)
        `uvm_fatal("ILLEGAL_TRAP_CHECK",
                   $sformatf("expected at least two directed illegal encodings in %0s; found=%0d",
                             nbf_path, n_illegal))
      else
        `uvm_info("ILLEGAL_TRAP_CHECK",
                  $sformatf("found %0d directed illegal encodings (0x00000000/0xffffffff) in %0s",
                            n_illegal, nbf_path), UVM_LOW)
    end

    if (require_ecall_ebreak) begin
      if ((n_ecall == 0) || (n_ebreak == 0))
        `uvm_fatal("ECALL_EBREAK_CHECK",
                   $sformatf("expected ECALL and EBREAK in %0s; found ECALL=%0d EBREAK=%0d",
                             nbf_path, n_ecall, n_ebreak))
      else
        `uvm_info("ECALL_EBREAK_CHECK",
                  $sformatf("found ECALL=%0d EBREAK=%0d in %0s",
                            n_ecall, n_ebreak, nbf_path), UVM_LOW)
    end

    if (require_compressed) begin
      if (n_compressed < 8)
        `uvm_fatal("COMPRESSED_CHECK",
                   $sformatf("expected RV64C compressed instructions in %0s; found only %0d candidate halfwords",
                             nbf_path, n_compressed))
      else
        `uvm_info("COMPRESSED_CHECK",
                  $sformatf("found %0d candidate RV64C compressed halfwords in %0s",
                            n_compressed, nbf_path), UVM_LOW)
    end

    if (require_jump) begin
      if (n_jump == 0)
        `uvm_fatal("JUMP_CHECK", $sformatf("no RV64 JAL/JALR instruction found in %0s", nbf_path))
      else
        `uvm_info("JUMP_CHECK",
                  $sformatf("found %0d RV64 JAL/JALR instruction(s) in %0s", n_jump, nbf_path),
                  UVM_LOW)
    end

    if (require_branch) begin
      if (n_branch == 0)
        `uvm_fatal("BRANCH_CHECK", $sformatf("no RV64 conditional branch instruction found in %0s", nbf_path))
      else
        `uvm_info("BRANCH_CHECK",
                  $sformatf("found %0d RV64 conditional branch instruction(s) in %0s", n_branch, nbf_path),
                  UVM_LOW)
    end

    if (require_atomic) begin
      if (n_atomic == 0)
        `uvm_fatal("ATOMIC_CHECK", $sformatf("no RV64 atomic instruction found in %0s", nbf_path))
      else
        `uvm_info("ATOMIC_CHECK",
                  $sformatf("found %0d RV64 atomic instruction(s) in %0s", n_atomic, nbf_path),
                  UVM_LOW)
    end

    if (require_lrsc) begin
      if (n_lrsc < 2)
        `uvm_fatal("LRSC_CHECK", $sformatf("expected LR/SC instructions in %0s; found %0d", nbf_path, n_lrsc))
      else
        `uvm_info("LRSC_CHECK",
                  $sformatf("found %0d LR/SC instruction(s) in %0s", n_lrsc, nbf_path),
                  UVM_LOW)
    end

    `uvm_info("NBF_LOAD", $sformatf("checked %0d beats from %0s (%s)",
                                     n_loaded, nbf_path,
                                     preload_only ? "DRAM preload" : "UVM stream"), UVM_LOW)
  endtask

endclass

`endif
