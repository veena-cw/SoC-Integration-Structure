class NoC_vsqr extends uvm_sequencer;
  `uvm_component_utils(NoC_vsqr)

  NoC_master_sqr mst_sq[];
  NoC_slave_sqr  slv_sq[];
  NoC_reset_sqr  rst_sq;

  function new(string name = "NoC_vsqr",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction
endclass
