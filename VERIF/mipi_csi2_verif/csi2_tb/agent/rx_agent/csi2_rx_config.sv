class csi2_rx_config extends uvm_object;
  `uvm_object_utils(csi2_rx_config)
  uvm_active_passive_enum is_active = UVM_ACTIVE;
  virtual csi2_if vif;
  virtual csi2_reset_if rst_vif;
  rx_fault_e fault = RX_CLEAN;
  function new(string name="csi2_rx_config"); super.new(name); endfunction
endclass
