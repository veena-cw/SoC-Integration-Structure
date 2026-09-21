class axi_mem_slave_driver extends uvm_component;  // Declares this UVM testbench class.
    `uvm_component_utils(axi_mem_slave_driver)  // Registers this component type with the UVM factory.
    virtual axi_mem_if vif;  // Declares the virtual interface used to access DUT-facing signals.
    ethernet_memory_model mem;  // Implements this testbench declaration or operation.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
    endfunction  // Ends this function.
    function void build_phase(uvm_phase p);  // Builds this component and obtains required configuration objects.
        if(!uvm_config_db#(virtual axi_mem_if)::get(this,"","vif",vif)) `uvm_fatal("VIF","axi_mem_if missing")  // Checks this condition before performing the associated action.
        if(!uvm_config_db#(ethernet_memory_model)::get(this,"","mem",mem)) `uvm_fatal("MEM","memory model missing")  // Checks this condition before performing the associated action.
    endfunction  // Ends this function.
    task run_phase(uvm_phase p);  // Executes this component runtime protocol behavior.
        vif.slv_cb.awready<=0;  // Drives vif.slv_cb.awready for the current protocol phase.
        vif.slv_cb.wready<=0;  // Drives vif.slv_cb.wready for the current protocol phase.
        vif.slv_cb.bvalid<=0;  // Drives vif.slv_cb.bvalid for the current protocol phase.
        vif.slv_cb.arready<=0;  // Drives vif.slv_cb.arready for the current protocol phase.
        vif.slv_cb.rvalid<=0;  // Drives vif.slv_cb.rvalid for the current protocol phase.
        fork  // Starts concurrent protocol-processing threads.
            read_thread();  // Implements this testbench declaration or operation.
            write_thread();  // Implements this testbench declaration or operation.
        join  // Synchronizes the concurrently started threads.
    endtask  // Ends this task.
    task read_thread();  // Declares a time-consuming helper task for this protocol operation.
        forever  // Repeats the following protocol handling continuously.
        begin  // Starts this procedural block.
            bit[31:0] a;  // Declares storage used by this testbench object or operation.
            bit[7:0] l;  // Declares storage used by this testbench object or operation.
            bit[3:0] id;  // Declares storage used by this testbench object or operation.
            do @vif.slv_cb;  // Waits for the next interface clocking event.
            while(!vif.slv_cb.arvalid);  // Continues waiting while this handshake/loop condition is true.
            a=vif.slv_cb.araddr;  // Updates a for the current transaction or testbench state.
            l=vif.slv_cb.arlen;  // Updates l for the current transaction or testbench state.
            id=vif.slv_cb.arid;  // Updates id for the current transaction or testbench state.
            vif.slv_cb.arready<=1;  // Drives vif.slv_cb.arready for the current protocol phase.
            @vif.slv_cb;  // Waits for the next interface clocking event.
            vif.slv_cb.arready<=0;  // Drives vif.slv_cb.arready for the current protocol phase.
            for(int beat=0;beat<=l;beat++)  // Iterates through the required beats or bytes.
            begin  // Starts this procedural block.
                bit[63:0] d=0;  // Updates bit[63:0] d for the current transaction or testbench state.
                for(int b=0;b<8;b++) d[b*8+:8]=mem.read_byte(a+beat*8+b);  // Iterates through the required beats or bytes.
                vif.slv_cb.rid<=id;  // Drives vif.slv_cb.rid for the current protocol phase.
                vif.slv_cb.rdata<=d;  // Drives vif.slv_cb.rdata for the current protocol phase.
                vif.slv_cb.rresp<=0;  // Drives vif.slv_cb.rresp for the current protocol phase.
                vif.slv_cb.rlast<=(beat==l);  // Drives vif.slv_cb.rlast for the current protocol phase.
                vif.slv_cb.rvalid<=1;  // Drives vif.slv_cb.rvalid for the current protocol phase.
                do @vif.slv_cb;  // Waits for the next interface clocking event.
                while(!vif.slv_cb.rready);  // Continues waiting while this handshake/loop condition is true.
                vif.slv_cb.rvalid<=0;  // Drives vif.slv_cb.rvalid for the current protocol phase.
            end  // Ends this procedural block.
        end  // Ends this procedural block.
    endtask  // Ends this task.
    task write_thread();  // Declares a time-consuming helper task for this protocol operation.
        forever  // Repeats the following protocol handling continuously.
        begin  // Starts this procedural block.
            bit[31:0] a;  // Declares storage used by this testbench object or operation.
            bit[3:0] id;  // Declares storage used by this testbench object or operation.
            do @vif.slv_cb;  // Waits for the next interface clocking event.
            while(!vif.slv_cb.awvalid);  // Continues waiting while this handshake/loop condition is true.
            a=vif.slv_cb.awaddr;  // Updates a for the current transaction or testbench state.
            id=vif.slv_cb.awid;  // Updates id for the current transaction or testbench state.
            vif.slv_cb.awready<=1;  // Drives vif.slv_cb.awready for the current protocol phase.
            @vif.slv_cb;  // Waits for the next interface clocking event.
            vif.slv_cb.awready<=0;  // Drives vif.slv_cb.awready for the current protocol phase.
            for(int beat=0;;beat++)  // Iterates through the required beats or bytes.
            begin  // Starts this procedural block.
                do  // Starts the handshake wait loop.
                begin  // Starts this procedural block.
                    vif.slv_cb.wready<=1;  // Drives vif.slv_cb.wready for the current protocol phase.
                    @vif.slv_cb;  // Waits for the next interface clocking event.
                end  // Ends this procedural block.
                while(!vif.slv_cb.wvalid);  // Continues waiting while this handshake/loop condition is true.
                for(int b=0;b<8;b++) if(vif.slv_cb.wstrb[b]) mem.write_byte(a+beat*8+b,vif.slv_cb.wdata[b*8+:8]);  // Iterates through the required beats or bytes.
                if(vif.slv_cb.wlast)  // Checks this condition before performing the associated action.
                begin  // Starts this procedural block.
                    vif.slv_cb.wready<=0;  // Drives vif.slv_cb.wready for the current protocol phase.
                    break;  // Implements this testbench declaration or operation.
                end  // Ends this procedural block.
            end  // Ends this procedural block.
            vif.slv_cb.bid<=id;  // Drives vif.slv_cb.bid for the current protocol phase.
            vif.slv_cb.bresp<=0;  // Drives vif.slv_cb.bresp for the current protocol phase.
            vif.slv_cb.bvalid<=1;  // Drives vif.slv_cb.bvalid for the current protocol phase.
            do @vif.slv_cb;  // Waits for the next interface clocking event.
            while(!vif.slv_cb.bready);  // Continues waiting while this handshake/loop condition is true.
            vif.slv_cb.bvalid<=0;  // Drives vif.slv_cb.bvalid for the current protocol phase.
        end  // Ends this procedural block.
    endtask  // Ends this task.
endclass  // Ends this UVM class definition.
