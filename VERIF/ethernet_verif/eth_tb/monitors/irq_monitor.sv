class irq_event extends uvm_sequence_item;  // Declares this UVM testbench class.
    bit tx,rx,err;  // Declares storage used by this testbench object or operation.
    `uvm_object_utils(irq_event)  // Registers this sequence-item or sequence type with the UVM factory.
    function new(string n="irq_event");  // Constructs this UVM object/component and initializes its base class.
        super.new(n);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
class irq_monitor extends uvm_monitor;  // Declares this UVM testbench class.
    `uvm_component_utils(irq_monitor)  // Registers this component type with the UVM factory.
    virtual irq_if vif;  // Declares the virtual interface used to access DUT-facing signals.
    uvm_analysis_port #(irq_event) ap;  // Declares an analysis port for broadcasting monitored transactions.
    bit ptx,prx,perr;  // Declares storage used by this testbench object or operation.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
        ap=new("ap",this);  // Updates ap for the current transaction or testbench state.
    endfunction  // Ends this function.
    function void build_phase(uvm_phase p);  // Builds this component and obtains required configuration objects.
        if(!uvm_config_db#(virtual irq_if)::get(this,"","vif",vif)) `uvm_fatal("VIF","irq_if missing")  // Checks this condition before performing the associated action.
    endfunction  // Ends this function.
    task run_phase(uvm_phase p);  // Executes this component runtime protocol behavior.
        forever  // Repeats the following protocol handling continuously.
        begin  // Starts this procedural block.
            @vif.mon_cb;  // Waits for the next interface clocking event.
            if((vif.mon_cb.irq_tx_cmpl&&!ptx)||(vif.mon_cb.irq_rx_cmpl&&!prx)||(vif.mon_cb.irq_DMA_err&&!perr))  // Checks this condition before performing the associated action.
            begin  // Starts this procedural block.
                irq_event e=irq_event::type_id::create("e");  // Creates this UVM object/component through the UVM factory.
                e.tx=vif.mon_cb.irq_tx_cmpl;  // Updates e.tx for the current transaction or testbench state.
                e.rx=vif.mon_cb.irq_rx_cmpl;  // Updates e.rx for the current transaction or testbench state.
                e.err=vif.mon_cb.irq_DMA_err;  // Updates e.err for the current transaction or testbench state.
                ap.write(e);  // Publishes this observed transaction through a UVM analysis port.
            end  // Ends this procedural block.
            ptx=vif.mon_cb.irq_tx_cmpl;  // Updates ptx for the current transaction or testbench state.
            prx=vif.mon_cb.irq_rx_cmpl;  // Updates prx for the current transaction or testbench state.
            perr=vif.mon_cb.irq_DMA_err;  // Updates perr for the current transaction or testbench state.
        end  // Ends this procedural block.
    endtask  // Ends this task.
endclass  // Ends this UVM class definition.
