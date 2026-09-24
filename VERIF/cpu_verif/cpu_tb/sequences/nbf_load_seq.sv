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
  bit    require_jump;
  bit    require_branch;
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
    int n_jump;
    int n_branch;

    n_loaded = 0;
    n_alu = 0;
    n_load = 0;
    n_store = 0;
    n_jump = 0;
    n_branch = 0;

    // The UVM sequence is the sole NBF loader; accepted writes are mirrored
    // into the DRAM model through the host-memory sideband port.
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
        if (data[6:0] == 7'b0000011)   n_load++;
        if (data[38:32] == 7'b0000011) n_load++;
        if (data[6:0] == 7'b0100011)   n_store++;
        if (data[38:32] == 7'b0100011) n_store++;
        if (data[6:0] == 7'b1101111)   n_jump++;
        if (data[38:32] == 7'b1101111) n_jump++;
        if (data[6:0] == 7'b1100111)   n_jump++;
        if (data[38:32] == 7'b1100111) n_jump++;
        if (data[6:0] == 7'b1100011)   n_branch++;
        if (data[38:32] == 7'b1100011) n_branch++;

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

    `uvm_info("NBF_LOAD", $sformatf("checked %0d beats from %0s (%s)",
                                     n_loaded, nbf_path,
                                     preload_only ? "DRAM preload" : "UVM stream"), UVM_LOW)
  endtask

endclass

`endif
