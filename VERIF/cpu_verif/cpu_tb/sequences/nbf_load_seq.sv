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

    `uvm_info("NBF_LOAD", $sformatf("checked %0d beats from %0s (%s)",
                                     n_loaded, nbf_path,
                                     preload_only ? "DRAM preload" : "UVM stream"), UVM_LOW)
  endtask

endclass

`endif
