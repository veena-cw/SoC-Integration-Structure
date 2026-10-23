class i2c_irq_agent extends uvm_agent;

    `uvm_component_utils(i2c_irq_agent)

    i2c_irq_sequencer irq_sequencer;
    i2c_irq_driver    irq_driver;
    i2c_irq_monitor   irq_monitor;

    function new(string name = "i2c_irq_agent",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);

        super.build_phase(phase);

        irq_sequencer =
            i2c_irq_sequencer::type_id::create(
                "irq_sequencer", this);

        irq_driver =
            i2c_irq_driver::type_id::create(
                "irq_driver", this);

        irq_monitor =
            i2c_irq_monitor::type_id::create(
                "irq_monitor", this);

    endfunction

    function void connect_phase(uvm_phase phase);

        irq_driver.seq_item_port.connect(
            irq_sequencer.seq_item_export
        );

    endfunction

endclass
