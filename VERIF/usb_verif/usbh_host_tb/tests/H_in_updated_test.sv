// IN Transfer Test
class H_in_updated_test extends base_test; 

  `uvm_component_utils(H_in_updated_test)

  function new(string name = "H_in_updated_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    usbh_host_axi4_agent_in_H_seq sequence_h;

    phase.raise_objection(this);

    sequence_h = usbh_host_axi4_agent_in_H_seq::type_id::create("sequence_h");
    
    //Wait for reset deassertion
    wait (vif.rst_i == 1'b1);
    @(posedge vif.clk_i);
    // Configure the BFM after reset initialization
    usbh_top_tb.device_bfm.setup_ep1_in_for_test(); // For payload loading.
    @(posedge vif.clk_i);
    
    sequence_h.start(env.axi4_agent.sequencer);
    
    // Give DUT + Device BFM time to perform USB transaction
    #1000;
    phase.drop_objection(this);
    //phase.phase_done.set_drain_time(this, 50);
  endtask

endclass : H_in_updated_test

