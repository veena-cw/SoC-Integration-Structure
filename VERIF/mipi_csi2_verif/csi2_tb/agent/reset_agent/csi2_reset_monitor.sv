class csi2_reset_monitor extends uvm_monitor;
  `uvm_component_utils(csi2_reset_monitor)
  csi2_reset_config rst_cfg;
  virtual csi2_reset_if vif;
  int unsigned asserted_cycles;
  function new(string name="csi2_reset_monitor",uvm_component parent); super.new(name,parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if(!uvm_config_db#(csi2_reset_config)::get(this,"","rst_cfg",rst_cfg))
    `uvm_fatal("RESET_MON","Missing reset configuration")
    vif = rst_cfg.vif;
    if(vif == null)
    `uvm_fatal("RESET_MON","Null reset interface")
  endfunction
  task run_phase(uvm_phase phase);
    forever begin
      @(posedge vif.clk);
      if(vif.rst_n === 1'b0)
      asserted_cycles++;
      else if(vif.rst_n !== 1'b1)
      `uvm_error("RESET_MON",$sformatf("Reset unknown: raw=%b sampled=%b", vif.rst_n, vif.rst_n))
    end
  endtask
endclass
