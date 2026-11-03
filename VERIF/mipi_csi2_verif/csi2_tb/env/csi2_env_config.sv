class csi2_env_config extends uvm_object;
  `uvm_object_utils(csi2_env_config)

   function new(string name= "csi2_env_config");
     super.new(name);
     mode                            = CSI2_RX_STANDALONE;
     no_of_tx_agents                 = 0;
     no_of_rx_agents                 = 1;
     enable_timeout_cycles           = 100;
     active_segment_mask             = 4'hf;
     rtl_sync_workaround             = 1'b1;
     rtl_ulps_polarity_workaround    = 1'b1;
     rtl_eot_workaround              = 1'b1;
     axi_awready_delay               = 0;
     axi_wready_delay                = 0;
     axi_bvalid_delay                = 0;
     axi_bresp                       = 2'b00;
     control_only_test               = 1'b0;
     reset_interruption_test         = 1'b0;
   endfunction

   csi2_verification_mode_e mode;
   int unsigned no_of_tx_agents;
   int unsigned no_of_rx_agents;

   int unsigned enable_timeout_cycles;
   logic [3:0] active_segment_mask;

   // These switches describe current-RTL compatibility behavior.  Turning a
   // switch off must produce specification-facing stimulus rather than
   // silently changing the expected result.
   bit rtl_sync_workaround;
   bit rtl_ulps_polarity_workaround;
   bit rtl_eot_workaround;

   // Memory-side AXI response policy.  Non-zero delays create controlled
   // backpressure while the DUT remains the AXI write master.
   int unsigned axi_awready_delay;
   int unsigned axi_wready_delay;
   int unsigned axi_bvalid_delay;
   bit [1:0]    axi_bresp;
   bit          control_only_test;
   bit          reset_interruption_test;

   virtual c_phy_bfm_if       phy_vif;
   virtual csi2_axi_write_if  axi_vif;
   virtual csi2_axi4_lite_if  axi_lite_vif;
   virtual csi2_reset_if      rst_vif;
   virtual csi2_rx_status_if  status_vif;

endclass
