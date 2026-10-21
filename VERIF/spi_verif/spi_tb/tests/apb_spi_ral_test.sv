//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//  Project                                     : APB_SPI (apb_spi_top) UVM testbench
//  Module                                      : apb_spi_ral_test
//  Primary Unit Owner                          :
//  Secondary Contact                           :
//  Source [SystemVerilog|Verilog|VHDL|Other]   : SystemVerilog
//=================================================================================
//  Description: RAL regression: write-only and side-effect registers, then reset values, RO read/write-ignore, volatile, access, write/read, walking ones, RW1C and mirror/predict
//=================================================================================

class apb_spi_ral_test extends apb_spi_base_test;

  `uvm_component_utils(apb_spi_ral_test)

  function new(string name = "apb_spi_ral_test", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_ral(apb_spi_ral_base_seq s);
    apb_spi_ral_vseq v;
    v = apb_spi_ral_vseq::type_id::create("ral_v");
    v.ral_seq = s;
    run_vseq(v);
  endtask

  task run_scenario();
    apb_spi_reg_wo_test_seq s_apb_spi_reg_wo_test_seq;
    apb_spi_reg_side_effect_seq s_apb_spi_reg_side_effect_seq;
    apb_spi_reg_reset_seq s_apb_spi_reg_reset_seq;
    apb_spi_reg_ro_read_seq s_apb_spi_reg_ro_read_seq;
    apb_spi_reg_ro_write_ignore_seq s_apb_spi_reg_ro_write_ignore_seq;
    apb_spi_reg_volatile_seq s_apb_spi_reg_volatile_seq;
    apb_spi_reg_access_seq s_apb_spi_reg_access_seq;
    apb_spi_reg_write_read_seq s_apb_spi_reg_write_read_seq;
    apb_spi_reg_walk_one_seq s_apb_spi_reg_walk_one_seq;
    apb_spi_reg_rw1c_seq s_apb_spi_reg_rw1c_seq;
    apb_spi_reg_mirror_predict_seq s_apb_spi_reg_mirror_predict_seq;
    s_apb_spi_reg_wo_test_seq = apb_spi_reg_wo_test_seq::type_id::create("apb_spi_reg_wo_test_seq");
    run_ral(s_apb_spi_reg_wo_test_seq);
    s_apb_spi_reg_side_effect_seq = apb_spi_reg_side_effect_seq::type_id::create("apb_spi_reg_side_effect_seq");
    run_ral(s_apb_spi_reg_side_effect_seq);
    apply_reset();   // flush TX FIFO / registers before the register sequences that write random CTRL values
    s_apb_spi_reg_reset_seq = apb_spi_reg_reset_seq::type_id::create("apb_spi_reg_reset_seq");
    run_ral(s_apb_spi_reg_reset_seq);
    env.scoreboard.check_reset_values();
    s_apb_spi_reg_ro_read_seq = apb_spi_reg_ro_read_seq::type_id::create("apb_spi_reg_ro_read_seq");
    run_ral(s_apb_spi_reg_ro_read_seq);
    s_apb_spi_reg_ro_write_ignore_seq = apb_spi_reg_ro_write_ignore_seq::type_id::create("apb_spi_reg_ro_write_ignore_seq");
    run_ral(s_apb_spi_reg_ro_write_ignore_seq);
    s_apb_spi_reg_volatile_seq = apb_spi_reg_volatile_seq::type_id::create("apb_spi_reg_volatile_seq");
    run_ral(s_apb_spi_reg_volatile_seq);
    s_apb_spi_reg_access_seq = apb_spi_reg_access_seq::type_id::create("apb_spi_reg_access_seq");
    run_ral(s_apb_spi_reg_access_seq);
    s_apb_spi_reg_write_read_seq = apb_spi_reg_write_read_seq::type_id::create("apb_spi_reg_write_read_seq");
    run_ral(s_apb_spi_reg_write_read_seq);
    s_apb_spi_reg_walk_one_seq = apb_spi_reg_walk_one_seq::type_id::create("apb_spi_reg_walk_one_seq");
    run_ral(s_apb_spi_reg_walk_one_seq);
    s_apb_spi_reg_rw1c_seq = apb_spi_reg_rw1c_seq::type_id::create("apb_spi_reg_rw1c_seq");
    run_ral(s_apb_spi_reg_rw1c_seq);
    s_apb_spi_reg_mirror_predict_seq = apb_spi_reg_mirror_predict_seq::type_id::create("apb_spi_reg_mirror_predict_seq");
    run_ral(s_apb_spi_reg_mirror_predict_seq);
  endtask

endclass
