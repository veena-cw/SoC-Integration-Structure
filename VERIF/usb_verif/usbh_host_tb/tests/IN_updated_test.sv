// IN Transfer Test
class IN_updated_test extends base_test; 

  `uvm_component_utils(IN_updated_test)

  function new(string name = "IN_updated_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    usbh_host_axi4_agent_cfg_IN_seq_updated sequence_h;

    phase.raise_objection(this);

    sequence_h = usbh_host_axi4_agent_cfg_IN_seq_updated::type_id::create("sequence_h");
    sequence_h.start(env.axi4_agent.sequencer);
    // Give DUT + Device BFM time to perform USB transaction
    #1000;
    phase.drop_objection(this);
    //phase.phase_done.set_drain_time(this, 50);
  endtask

endclass : IN_updated_test



class usbh_host_axi4_agent_in_test extends base_test;

  `uvm_component_utils(usbh_host_axi4_agent_in_test)

  function new(string name = "usbh_host_axi4_agent_in_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    usbh_host_axi4_agent_in_seq seq;

    phase.raise_objection(this);

    `uvm_info("IN_TEST", "Starting USB IN transfer test", UVM_MEDIUM)

    

   

    // Create and start the IN transfer sequence.
    seq = usbh_host_axi4_agent_in_seq::type_id::create("seq");

    `uvm_info("IN_TEST", "Starting IN sequence on AXI4 sequencer",
              UVM_MEDIUM)

    seq.start(env.axi4_agent.sequencer);
#1000;
    `uvm_info("IN_TEST", "IN sequence completed", UVM_MEDIUM)

    phase.drop_objection(this);
  endtask

endclass
//usbh_host_axi4_agent_cfg_IN_seq_updated




class usbh_host_out_transfer_test extends base_test;

    `uvm_component_utils(usbh_host_out_transfer_test)

    function new(string name = "usbh_host_out_transfer_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual task run_phase(uvm_phase phase);
        usbh_host_axi4_agent_out_seq seq;

        phase.raise_objection(this);

        seq = usbh_host_axi4_agent_out_seq::type_id::create("seq");

        if (seq == null) begin
            `uvm_fatal("SEQ_CREATE",
                       "Failed to create usbh_host_axi4_agent_out_seq")
        end

        seq.start(env.axi4_agent.sequencer);

        phase.drop_objection(this);
    endtask

endclass



class usb_control_read_test extends base_test;

  `uvm_component_utils(usb_control_read_test)

  function new(string name = "usb_control_read_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);
    usbh_host_control_read_seq sequence_h;

    phase.raise_objection(this);

    `uvm_info("USB_CTRL_TEST",
      "Starting USB GET_DESCRIPTOR control-read test",
      UVM_MEDIUM)

    sequence_h = usbh_host_control_read_seq::type_id::create(
                   "sequence_h"
                 );

    sequence_h.start(env.axi4_agent.sequencer);

    `uvm_info("USB_CTRL_TEST",
      "USB control-read sequence returned",
      UVM_MEDIUM)

    phase.drop_objection(this);
  endtask

endclass : usb_control_read_test



class usbh_sof_validation_test extends base_test;

  `uvm_component_utils(usbh_sof_validation_test)

  function new(string name = "usbh_sof_validation_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  task run_phase(uvm_phase phase);

    usbh_sof_validation_seq sof_seq;

    phase.raise_objection(this);

    `uvm_info("USB_SOF_TEST",
      "Starting USB SOF validation test",
      UVM_MEDIUM)

    // Create the SOF validation sequence
    sof_seq = usbh_sof_validation_seq::type_id::create("sof_seq");

    // Start the sequence on the AXI4 sequencer
    sof_seq.start(env.axi4_agent.sequencer);

    `uvm_info("USB_SOF_TEST",
      "USB SOF validation sequence completed",
      UVM_MEDIUM)

    phase.drop_objection(this);

  endtask

endclass : usbh_sof_validation_test

