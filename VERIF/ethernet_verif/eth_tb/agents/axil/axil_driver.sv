class axil_driver extends uvm_driver #(axil_item);  // Declares this UVM testbench class.
    `uvm_component_utils(axil_driver)  // Registers this component type with the UVM factory.
    virtual axil_if vif;  // Declares the virtual interface used to access DUT-facing signals.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
    function void build_phase(uvm_phase phase);  // Builds this component and obtains required configuration objects.
        if(!uvm_config_db#(virtual axil_if)::get(this,"","vif",vif)) `uvm_fatal("VIF","axil_if missing")  // Checks this condition before performing the associated action.
    endfunction  // Ends this function.
    task run_phase(uvm_phase phase);  // Executes this component runtime protocol behavior.
        init();  // Implements this testbench declaration or operation.
        wait(vif.rst_n);  // Waits until the required reset or protocol condition is satisfied.
        forever  // Repeats the following protocol handling continuously.
        begin  // Starts this procedural block.
            seq_item_port.get_next_item(req);  // Gets the next transaction from the sequencer.
            if(req.op==AXIL_WRITE) write(req);  // Checks this condition before performing the associated action.
            else read(req);  // Performs the alternate action when the preceding condition is false.
            seq_item_port.item_done();  // Completes the current driver transaction.
        end  // Ends this procedural block.
    endtask  // Ends this task.
    task init();  // Declares a time-consuming helper task for this protocol operation.
        vif.drv_cb.awvalid<=0;  // Drives vif.drv_cb.awvalid for the current protocol phase.
        vif.drv_cb.wvalid<=0;  // Drives vif.drv_cb.wvalid for the current protocol phase.
        vif.drv_cb.bready<=0;  // Drives vif.drv_cb.bready for the current protocol phase.
        vif.drv_cb.arvalid<=0;  // Drives vif.drv_cb.arvalid for the current protocol phase.
        vif.drv_cb.rready<=0;  // Drives vif.drv_cb.rready for the current protocol phase.
    endtask  // Ends this task.
    task write(axil_item t);  // Declares a time-consuming helper task for this protocol operation.
        fork  // Starts concurrent protocol-processing threads.
            begin  // Starts this procedural block.
                vif.drv_cb.awaddr<=t.addr;  // Drives vif.drv_cb.awaddr for the current protocol phase.
                vif.drv_cb.awprot<=0;  // Drives vif.drv_cb.awprot for the current protocol phase.
                vif.drv_cb.awvalid<=1;  // Drives vif.drv_cb.awvalid for the current protocol phase.
                do @vif.drv_cb;  // Waits for the next interface clocking event.
                while(!vif.drv_cb.awready);  // Continues waiting while this handshake/loop condition is true.
                vif.drv_cb.awvalid<=0;  // Drives vif.drv_cb.awvalid for the current protocol phase.
            end  // Ends this procedural block.
            begin  // Starts this procedural block.
                vif.drv_cb.wdata<=t.data;  // Drives vif.drv_cb.wdata for the current protocol phase.
                vif.drv_cb.wstrb<=t.strb;  // Drives vif.drv_cb.wstrb for the current protocol phase.
                vif.drv_cb.wvalid<=1;  // Drives vif.drv_cb.wvalid for the current protocol phase.
                do @vif.drv_cb;  // Waits for the next interface clocking event.
                while(!vif.drv_cb.wready);  // Continues waiting while this handshake/loop condition is true.
                vif.drv_cb.wvalid<=0;  // Drives vif.drv_cb.wvalid for the current protocol phase.
            end  // Ends this procedural block.
        join  // Synchronizes the concurrently started threads.
        vif.drv_cb.bready<=1;  // Drives vif.drv_cb.bready for the current protocol phase.
        do @vif.drv_cb;  // Waits for the next interface clocking event.
        while(!vif.drv_cb.bvalid);  // Continues waiting while this handshake/loop condition is true.
        t.resp=vif.drv_cb.bresp;  // Updates t.resp for the current transaction or testbench state.
        vif.drv_cb.bready<=0;  // Drives vif.drv_cb.bready for the current protocol phase.
    endtask  // Ends this task.
    task read(axil_item t);  // Declares a time-consuming helper task for this protocol operation.
        vif.drv_cb.araddr<=t.addr;  // Drives vif.drv_cb.araddr for the current protocol phase.
        vif.drv_cb.arprot<=0;  // Drives vif.drv_cb.arprot for the current protocol phase.
        vif.drv_cb.arvalid<=1;  // Drives vif.drv_cb.arvalid for the current protocol phase.
        do @vif.drv_cb;  // Waits for the next interface clocking event.
        while(!vif.drv_cb.arready);  // Continues waiting while this handshake/loop condition is true.
        vif.drv_cb.arvalid<=0;  // Drives vif.drv_cb.arvalid for the current protocol phase.
        vif.drv_cb.rready<=1;  // Drives vif.drv_cb.rready for the current protocol phase.
        do @vif.drv_cb;  // Waits for the next interface clocking event.
        while(!vif.drv_cb.rvalid);  // Continues waiting while this handshake/loop condition is true.
        t.data=vif.drv_cb.rdata;  // Updates t.data for the current transaction or testbench state.
        t.resp=vif.drv_cb.rresp;  // Updates t.resp for the current transaction or testbench state.
        vif.drv_cb.rready<=0;  // Drives vif.drv_cb.rready for the current protocol phase.
    endtask  // Ends this task.
endclass  // Ends this UVM class definition.
