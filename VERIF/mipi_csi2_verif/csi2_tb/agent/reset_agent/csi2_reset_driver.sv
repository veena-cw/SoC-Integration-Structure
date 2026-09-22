class csi2_reset_driver extends uvm_driver#(csi2_reset_sequence_item);
  `uvm_component_utils(csi2_reset_driver)
  csi2_reset_config rst_cfg;
  virtual csi2_reset_if vif;
  function new(string name="csi2_reset_driver",uvm_component parent); super.new(name,parent); endfunction
  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if(!uvm_config_db#(csi2_reset_config)::get(this,"","rst_cfg",rst_cfg))
      `uvm_fatal("RESET_DRV","Missing reset configuration")
    vif = rst_cfg.vif;
    if(vif == null) `uvm_fatal("RESET_DRV","Null reset interface")
  endfunction
  task run_phase(uvm_phase phase);
    csi2_reset_sequence_item req;
    forever begin
      seq_item_port.get_next_item(req);
      if(req.assertion_cycles < 3) `uvm_fatal("RESET_DRV","Use at least three reset cycles")
      repeat(req.delay_cycles) @(vif.drv_cb);
      @(vif.drv_cb);
      vif.drv_cb.rst_n <= 1'b0;
      repeat(req.assertion_cycles) @(vif.drv_cb);
      vif.drv_cb.rst_n <= 1'b1;
      repeat(2) @(vif.drv_cb); // recovery before sequence completion
      seq_item_port.item_done();
    end
  endtask
endclass
