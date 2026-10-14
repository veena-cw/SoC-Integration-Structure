
class usbh_device_detect_irq_test extends base_test;

    `uvm_component_utils(usbh_device_detect_irq_test)

    usbh_device_detect_irq_seq detect_seq;

    function new(string name = "usbh_device_detect_irq_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        `uvm_info(get_type_name(),
                  "Building USB device-detect IRQ test",
                  UVM_MEDIUM)
    endfunction

    virtual task run_phase(uvm_phase phase);
        super.run_phase(phase);

        phase.raise_objection(this,
                              "Running device-detect IRQ sequence");

        detect_seq = usbh_device_detect_irq_seq::type_id::create(
            "detect_seq"
        );

        `uvm_info(get_type_name(),
                  "Starting DEVICE_DETECT IRQ sequence",
                  UVM_MEDIUM)

        detect_seq.start(env.axi4_agent.sequencer);

        `uvm_info(get_type_name(),
                  "DEVICE_DETECT IRQ sequence finished",
                  UVM_MEDIUM)

        phase.drop_objection(this,
                             "Device-detect IRQ sequence completed");
    endtask

endclass

