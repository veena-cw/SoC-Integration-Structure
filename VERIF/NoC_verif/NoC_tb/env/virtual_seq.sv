class NoC_vseq_base extends uvm_sequence;
  `uvm_object_utils(NoC_vseq_base)

  // Declare p_sequencer to gain type-safe access to your virtual sequencer
  `uvm_declare_p_sequencer(NoC_vsqr)

  function new(string name = "NoC_vseq_base");
    super.new(name);
  endfunction

  // Example body running sub-sequences sequentially using p_sequencer handles
  virtual task body();
    NoC_reset_seq   m_rst_seq;
    NoC_master_seq  m_mst_seq;
    NoC_slave_seq   m_slv_seq;

    // 1. Run Reset Sequence
    m_rst_seq = NoC_reset_seq::type_id::create("m_rst_seq");
    `uvm_info("VSEQ", "Starting Reset Sequence...", UVM_LOW)
    m_rst_seq.start(p_sequencer.rst_sq);

    // 2. Run Master and Slave Sequences
    m_mst_seq = NoC_master_seq::type_id::create("m_mst_seq");
    m_slv_seq = NoC_slave_seq::type_id::create("m_slv_seq");
    
    `uvm_info("VSEQ", "Starting Master/Slave Sequences...", UVM_LOW)
    fork
      m_mst_seq.start(p_sequencer.mst_sq);
      m_slv_seq.start(p_sequencer.slv_sq);
    join
  endtask
endclass
