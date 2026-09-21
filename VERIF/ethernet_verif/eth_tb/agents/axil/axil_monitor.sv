class axil_monitor extends uvm_monitor;  // Declares this UVM testbench class.
    `uvm_component_utils(axil_monitor)  // Registers this component type with the UVM factory.
    virtual axil_if vif;  // Declares the virtual interface used to access DUT-facing signals.
    uvm_analysis_port #(axil_item) ap;  // Declares an analysis port for broadcasting monitored transactions.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
        ap=new("ap",this);  // Updates ap for the current transaction or testbench state.
    endfunction  // Ends this function.
    function void build_phase(uvm_phase phase);  // Builds this component and obtains required configuration objects.
        if(!uvm_config_db#(virtual axil_if)::get(this,"","vif",vif)) `uvm_fatal("VIF","axil_if missing")  // Checks this condition before performing the associated action.
    endfunction  // Ends this function.
    task run_phase(uvm_phase phase);  // Executes this component runtime protocol behavior.
        forever  // Repeats the following protocol handling continuously.
        begin  // Starts this procedural block.
            @vif.mon_cb;  // Waits for the next interface clocking event.
            if(vif.mon_cb.awvalid&&vif.mon_cb.awready)  // Checks this condition before performing the associated action.
            begin  // Starts this procedural block.
                axil_item t=axil_item::type_id::create("t");  // Creates this UVM object/component through the UVM factory.
                t.op=AXIL_WRITE;  // Updates t.op for the current transaction or testbench state.
                t.addr=vif.mon_cb.awaddr;  // Updates t.addr for the current transaction or testbench state.
                ap.write(t);  // Publishes this observed transaction through a UVM analysis port.
            end  // Ends this procedural block.
            if(vif.mon_cb.arvalid&&vif.mon_cb.arready)  // Checks this condition before performing the associated action.
            begin  // Starts this procedural block.
                axil_item t=axil_item::type_id::create("t");  // Creates this UVM object/component through the UVM factory.
                t.op=AXIL_READ;  // Updates t.op for the current transaction or testbench state.
                t.addr=vif.mon_cb.araddr;  // Updates t.addr for the current transaction or testbench state.
                ap.write(t);  // Publishes this observed transaction through a UVM analysis port.
            end  // Ends this procedural block.
        end  // Ends this procedural block.
    endtask  // Ends this task.
endclass  // Ends this UVM class definition.
