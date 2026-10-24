class NoC_vseq_base extends uvm_sequence;
  `uvm_object_utils(NoC_vseq_base)
  `uvm_declare_p_sequencer(NoC_vsqr)

  function new(string name = "NoC_vseq_base");
    super.new(name);
  endfunction

  task automatic run_master(int index);
    NoC_master_seq seq;
    seq = NoC_master_seq::type_id::create($sformatf("master_seq_%0d", index));
    seq.start(p_sequencer.mst_sq[index]);
  endtask

  task automatic run_slave(int index);
    NoC_slave_seq seq;
    seq = NoC_slave_seq::type_id::create($sformatf("slave_seq_%0d", index));
    seq.start(p_sequencer.slv_sq[index]);
  endtask

  virtual task body();
    NoC_reset_seq reset_seq;
    reset_seq = NoC_reset_seq::type_id::create("reset_seq");
    if (p_sequencer.rst_sq != null)
      reset_seq.start(p_sequencer.rst_sq);
    for (int i = 0; i < p_sequencer.mst_sq.size(); i++) begin
      automatic int index = i;
      if (p_sequencer.mst_sq[index] != null) begin
        fork
          run_master(index);
        join_none
      end
    end
    for (int i = 0; i < p_sequencer.slv_sq.size(); i++) begin
      automatic int index = i;

      if (p_sequencer.slv_sq[index] != null) begin
        fork
          run_slave(index);
        join_none
      end
    end
    wait fork;
  endtask
endclass
