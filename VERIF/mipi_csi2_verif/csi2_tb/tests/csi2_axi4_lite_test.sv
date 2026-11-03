class csi2_axi4_lite_test extends csi2_base_test;
  `uvm_component_utils(csi2_axi4_lite_test)
  function new(string name = "csi2_axi4_lite_test", uvm_component parent = null); super.new(name, parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    env_cfg.control_only_test = 1'b1;
  endfunction
  virtual task run_scenario();
    bit [31:0] data;
    bit [1:0] response;
    apply_reset();
    axi4_lite_read(32'h0000_0000, data, response);
    if ((response != 2'b00) || (data != 32'h0000_0002))
      `uvm_error("AXI4L_TEST", $sformatf("Lane config readback failed data=0x%08h resp=%0h", data, response))
    axi4_lite_write(32'h0000_0004, 32'h0000_0001, 4'b0001, response);
    axi4_lite_read(32'h0000_0004, data, response);
    if ((response != 2'b00) || (data[0] != 1'b1))
      `uvm_error("AXI4L_TEST", "Mode selection partial-strobe access failed")
    axi4_lite_read(32'h0000_0008, data, response);
    axi4_lite_read(32'h0000_000c, data, response);
    axi4_lite_read(32'h0000_0010, data, response);
    axi4_lite_read(32'hffff_0000, data, response);
    if (response != 2'b10)
      `uvm_error("AXI4L_TEST", "Unmapped read did not return SLVERR")
    drain_pipeline(20);
  endtask
endclass : csi2_axi4_lite_test
