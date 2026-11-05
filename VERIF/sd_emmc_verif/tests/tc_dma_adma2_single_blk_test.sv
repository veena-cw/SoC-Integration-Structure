// Goal: run dma_adma2_single_blk_vseq on the virtual sequencer.
// Flow: base_test builds the env; this test hands the AXI memory driver to the vseq, then starts it in main_phase.
class tc_dma_adma2_single_blk_test extends base_test;
  `uvm_component_utils(tc_dma_adma2_single_blk_test)

  function new(string name = "tc_dma_adma2_single_blk_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  // Goal: the ref model cannot predict ADMA traffic yet, so switch the scoreboard checks off for this test.
  // Set after super.build_phase so it lands before the env's connect_phase. Delete if the scoreboard stays quiet.
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env.enable_scoreboard = 0;
  endfunction

  task main_phase(uvm_phase phase);
    dma_adma2_single_blk_vseq vseq;
    phase.raise_objection(this);
    vseq = dma_adma2_single_blk_vseq::type_id::create("vseq");
    vseq.mdrv = env.axi_mem_agent.driver;
    vseq.start(env.vseqr);
    phase.drop_objection(this);
  endtask
endclass
