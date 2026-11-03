
class OUT_transfer_test extends base_test; 

  `uvm_component_utils(OUT_transfer_test)

  function new(string name = "OUT_transfer_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    axi4_agent_out_transfer_seq sequence_h;

    phase.raise_objection(this);
    
    wait (vif.rst_i == 1'b1);
    @(posedge vif.clk_i);
    // Configure the BFM after reset initialization
    usbh_top_tb.device_bfm.setup_ep2_out_for_test();
    @(posedge vif.clk_i);
    
    
    sequence_h = axi4_agent_out_transfer_seq::type_id::create("sequence_h");
    sequence_h.start(env.axi4_agent.sequencer);
    // Give DUT + Device BFM time to perform USB transaction
    #1000;
    phase.drop_objection(this);
    //phase.phase_done.set_drain_time(this, 50);
  endtask

endclass : OUT_transfer_test

