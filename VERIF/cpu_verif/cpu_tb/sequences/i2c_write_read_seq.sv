// Supplemental direct BedRock I2C write/read smoke test (BP-DV-027).
// Loads the I2C test image and allows the CPU to execute it. The scoreboard
// observes the final tohost write and reports pass/fail.

`ifndef I2C_WRITE_READ_SEQ_SV
`define I2C_WRITE_READ_SEQ_SV

class i2c_write_read_seq extends uvm_sequence #(bedrock_txn);
  `uvm_object_utils(i2c_write_read_seq)

  function new(string name = "i2c_write_read_seq");
    super.new(name);
  endfunction

  task body();
    nbf_load_seq load_seq;
    string nbf_file;
    bit preload_only;

    load_seq = nbf_load_seq::type_id::create("load_seq");
    nbf_file = "i2c_write_read.nbf";
    void'($value$plusargs("NBF_FILE=%s", nbf_file));
    load_seq.nbf_path = nbf_file;
    load_seq.require_alu = 1'b0;
    load_seq.start(m_sequencer);

    `uvm_info("I2C_SEQ", $sformatf("boot image %0s loaded, running I2C write/read checks", nbf_file), UVM_LOW)

    preload_only = 1'b1;
    void'($value$plusargs("NBF_PRELOAD_ONLY=%d", preload_only));

    if (preload_only) begin
      #(20us);
      return;
    end

    for (int i = 0; i < 500; i++) begin
      bedrock_txn t = bedrock_txn::type_id::create("t");
      start_item(t);
      t.dir      = BEDROCK_FWD;
      t.msg_type = E_MEM_UC_RD;
      t.addr     = 64'h0010_2000;
      t.size     = 3;
      finish_item(t);
      #(200ns);
    end
  endtask

endclass

`endif
