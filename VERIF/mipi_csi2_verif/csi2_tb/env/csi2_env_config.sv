class csi2_env_config extends uvm_object;
  `uvm_object_utils(csi2_env_config)
   function new(string name= "csi2_env_config");
           super.new(name);
   endfunction
   int unsigned no_of_tx_agents;
   int unsigned no_of_rx_agents;

endclass
