class csi2_tx_config extends uvm_object;
  `uvm_object_utils(csi2_tx_config)
   function new(string name= "csi2_tx_config");
           super.new(name);
   endfunction
   uvm_active_passive_enum is_active;
   virtual csi2_if vif;
   virtual csi2_reset_if rst_vif;
endclass
