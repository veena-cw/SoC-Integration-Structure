// Goal: run dma_dat_inhibit_lockout_vseq on the virtual sequencer.
// Flow: same pattern as tc_dma_adma2_single_blk_test: hand the AXI memory driver to the vseq, start it in main_phase.
class tc_dma_dat_inhibit_lockout_test extends base_test;
  `uvm_component_utils(tc_dma_dat_inhibit_lockout_test)
  function new(string name = "tc_dma_dat_inhibit_lockout_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env.enable_scoreboard = 0;   // the ref model does not predict ADMA traffic
  endfunction
  task main_phase(uvm_phase phase);
    dma_dat_inhibit_lockout_vseq vseq;
    phase.raise_objection(this);
    vseq = dma_dat_inhibit_lockout_vseq::type_id::create("vseq");
    vseq.mdrv = env.axi_mem_agent.driver;
    vseq.start(env.vseqr);
    phase.drop_objection(this);
  endtask
endclass
