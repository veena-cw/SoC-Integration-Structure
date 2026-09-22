class csi2_reset_config extends uvm_object;
  `uvm_object_utils(csi2_reset_config)
   function new(string name= "csi2_reset_config");
           super.new(name);
   endfunction
   //uvm_active_passive_enum is_active;
   virtual csi2_reset_if vif;
endclass
