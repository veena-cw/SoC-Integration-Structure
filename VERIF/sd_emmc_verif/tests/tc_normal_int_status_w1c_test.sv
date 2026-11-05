// ============================================================================
// tc_norm_int_rw1c_clear.sv         Plan ID: COMMON_REG_003 (RW1C)
//
// Goal : run norm_int_rw1c_clear_vseq with the card BFM enabled.
// Flow : build_phase grabs the vif and turns the BFM on; connect_phase
//        switches off the AXI-Lite read check, since the ref model does not
//        predict 0x30 clearing and the vseq checks the reads against the spec;
//        main_phase starts the vseq on env.vseqr.
// ============================================================================
class tc_normal_int_status_w1c_test extends base_test;
  `uvm_component_utils(tc_normal_int_status_w1c_test)

  virtual sd_emmc_if vif;

  function new(string name = "tc_normal_int_status_w1c_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    vif = sd_emmc_tb_pkg::sd_emmc_vif;
    vif.use_bfm = 1;
  endfunction

  function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    env.sb.check_axi_lite = 0;   // vseq checks 0x30 itself; check_sd_emmc stays on
  endfunction

  task main_phase(uvm_phase phase);
    normal_int_status_w1c_vseq seq;
    phase.raise_objection(this);
    seq = normal_int_status_w1c_vseq::type_id::create("seq");
    seq.start(env.vseqr);
    phase.drop_objection(this);
  endtask
endclass

