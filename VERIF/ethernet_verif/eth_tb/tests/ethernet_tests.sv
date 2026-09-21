class ethernet_base_test extends uvm_test;  // Declares this UVM testbench class.
    `uvm_component_utils(ethernet_base_test)  // Registers this component type with the UVM factory.
    ethernet_env env;  // Implements this testbench declaration or operation.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
    function void build_phase(uvm_phase p);  // Builds this component and obtains required configuration objects.
        env=ethernet_env::type_id::create("env",this);  // Creates this UVM object/component through the UVM factory.
    endfunction  // Ends this function.
    task run_phase(uvm_phase p);  // Executes this component runtime protocol behavior.
        power_on_reset_seq r;  // Implements this testbench declaration or operation.
        p.raise_objection(this);  // Implements this testbench declaration or operation.
        r=power_on_reset_seq::type_id::create("r");  // Creates this UVM object/component through the UVM factory.
        r.start(env.reset_ag.sqr);  // Starts this sequence on the selected sequencer.
        #1us;  // Implements this testbench declaration or operation.
        p.drop_objection(this);  // Implements this testbench declaration or operation.
    endtask  // Ends this task.
endclass  // Ends this UVM class definition.
class dma_tx_test extends ethernet_base_test;  // Declares this UVM testbench class.
    `uvm_component_utils(dma_tx_test)  // Registers this component type with the UVM factory.
    task run_phase(uvm_phase p);  // Executes this component runtime protocol behavior.
        power_on_reset_seq r;  // Implements this testbench declaration or operation.
        dma_tx_vseq v;  // Implements this testbench declaration or operation.
        p.raise_objection(this);  // Implements this testbench declaration or operation.
        r=power_on_reset_seq::type_id::create("r");  // Creates this UVM object/component through the UVM factory.
        r.start(env.reset_ag.sqr);  // Starts this sequence on the selected sequencer.
        v=dma_tx_vseq::type_id::create("v");  // Creates this UVM object/component through the UVM factory.
        v.start(env.vsqr);  // Starts this sequence on the selected sequencer.
        #20us;  // Implements this testbench declaration or operation.
        p.drop_objection(this);  // Implements this testbench declaration or operation.
    endtask  // Ends this task.
endclass  // Ends this UVM class definition.
class dma_rx_test extends ethernet_base_test;  // Declares this UVM testbench class.
    `uvm_component_utils(dma_rx_test)  // Registers this component type with the UVM factory.
    task run_phase(uvm_phase p);  // Executes this component runtime protocol behavior.
        power_on_reset_seq r;  // Implements this testbench declaration or operation.
        dma_rx_vseq v;  // Implements this testbench declaration or operation.
        p.raise_objection(this);  // Implements this testbench declaration or operation.
        r=power_on_reset_seq::type_id::create("r");  // Creates this UVM object/component through the UVM factory.
        r.start(env.reset_ag.sqr);  // Starts this sequence on the selected sequencer.
        v=dma_rx_vseq::type_id::create("v");  // Creates this UVM object/component through the UVM factory.
        v.start(env.vsqr);  // Starts this sequence on the selected sequencer.
        #20us;  // Implements this testbench declaration or operation.
        p.drop_objection(this);  // Implements this testbench declaration or operation.
    endtask  // Ends this task.
endclass  // Ends this UVM class definition.
