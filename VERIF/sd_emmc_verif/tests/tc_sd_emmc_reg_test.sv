`ifndef TC_SD_EMMC_REG_TEST_SV
`define TC_SD_EMMC_REG_TEST_SV

`include "base_test.sv"
`include "sd_emmc_reg_seq.sv"

class tc_sd_emmc_reg_test extends base_test;

  `uvm_component_utils(tc_sd_emmc_reg_test)

  function new(string name = "tc_sd_emmc_reg_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
    
    // Direct access through hierarchy: test -> env -> sb
    if (env != null && env.sb != null) begin
      env.sb.check_sd_emmc = 1'b0;
      `uvm_info("TEST", "Disabled check_sd_emmc directly via hierarchy", UVM_LOW)
    end
  endfunction

  virtual task main_phase(uvm_phase phase);
    sd_emmc_reg_seq reg_seq;

    phase.raise_objection(this);

    `uvm_info(get_type_name(), "Starting Register Access Test", UVM_LOW)

    reg_seq = sd_emmc_reg_seq::type_id::create("reg_seq");
    reg_seq.start(env.vseqr);

    #1000ns;

    phase.drop_objection(this);
  endtask : main_phase

endclass : tc_sd_emmc_reg_test

`endif
