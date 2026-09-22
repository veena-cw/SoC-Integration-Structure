class axi_mem_monitor extends uvm_monitor;                                                  // Declares this UVM testbench class.
    `uvm_component_utils(axi_mem_monitor)                                                   // Registers this component type with the UVM factory.
    virtual axi_mem_if vif;                                                                 // Declares the virtual interface used to access DUT-facing signals.
    uvm_analysis_port #(axi_mem_item) ap;                                                   // Declares an analysis port for broadcasting monitored transactions.
    function new(string n,uvm_component p);                                                 // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);                                                                     // Calls the corresponding base-class UVM implementation.
        ap=new("ap",this);                                                                  // Updates ap for the current transaction or testbench state.
    endfunction                                                                             // Ends this function.
    function void build_phase(uvm_phase p);                                                 // Builds this component and obtains required configuration objects.
        if(!uvm_config_db#(virtual axi_mem_if)::get(this,"","vif",vif)) `uvm_fatal("VIF","axi_mem_if missing")  // Checks this condition before performing the associated action.
    endfunction                                                                             // Ends this function.
            task run_phase(uvm_phase p);                                                    // Executes this component runtime protocol behavior.
        forever                                                                             // Repeats the following protocol handling continuously.
        begin                                                                               // Starts this procedural block.
            @vif.mon_cb;                                                                    // Waits for the next interface clocking event.
            if(vif.mon_cb.arvalid&&vif.mon_cb.arready)                                      // Checks this condition before performing the associated action.
            begin                                                                           // Starts this procedural block.
                axi_mem_item t=axi_mem_item::type_id::create("rd");                         // Creates this UVM object/component through the UVM factory.
                t.op=AXI_MEM_READ;                                                          // Updates t.op for the current transaction or testbench state.
                t.id=vif.mon_cb.arid;                                                       // Updates t.id for the current transaction or testbench state.
                t.addr=vif.mon_cb.araddr;                                                   // Updates t.addr for the current transaction or testbench state.
                t.len=vif.mon_cb.arlen;                                                     // Updates t.len for the current transaction or testbench state.
                t.size=vif.mon_cb.arsize;                                                   // Updates t.size for the current transaction or testbench state.
                t.burst=vif.mon_cb.arburst;                                                 // Updates t.burst for the current transaction or testbench state.
                ap.write(t);                                                                // Publishes this observed transaction through a UVM analysis port.
            end                                                                             // Ends this procedural block.
            if(vif.mon_cb.awvalid&&vif.mon_cb.awready)                                      // Checks this condition before performing the associated action.
            begin                                                                           // Starts this procedural block.
                axi_mem_item t=axi_mem_item::type_id::create("wr");                         // Creates this UVM object/component through the UVM factory.
                t.op=AXI_MEM_WRITE;                                                         // Updates t.op for the current transaction or testbench state.
                t.id=vif.mon_cb.awid;                                                       // Updates t.id for the current transaction or testbench state.
                t.addr=vif.mon_cb.awaddr;                                                   // Updates t.addr for the current transaction or testbench state.
                t.len=vif.mon_cb.awlen;                                                     // Updates t.len for the current transaction or testbench state.
                t.size=vif.mon_cb.awsize;                                                   // Updates t.size for the current transaction or testbench state.
                t.burst=vif.mon_cb.awburst;                                                 // Updates t.burst for the current transaction or testbench state.
                ap.write(t);                                                                // Publishes this observed transaction through a UVM analysis port.
            end                                                                             // Ends this procedural block.
        end                                                                                 // Ends this procedural block.
    endtask                                                                                 // Ends this task.
endclass                                                                                    // Ends this UVM class definition.
