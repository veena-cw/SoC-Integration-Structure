`uvm_analysis_imp_decl(_axi)  // Declares an analysis implementation for receiving transactions.
`uvm_analysis_imp_decl(_irq)  // Declares an analysis implementation for receiving transactions.
class ethernet_scoreboard extends uvm_scoreboard;  // Declares this UVM testbench class.
    `uvm_component_utils(ethernet_scoreboard)  // Registers this component type with the UVM factory.
    uvm_analysis_imp_axi #(axi_mem_item,ethernet_scoreboard) axi_imp;  // Declares an analysis implementation for receiving transactions.
    uvm_analysis_imp_irq #(irq_event,ethernet_scoreboard) irq_imp;  // Declares an analysis implementation for receiving transactions.
    int axi_reads,axi_writes,tx_irqs,rx_irqs,err_irqs;  // Declares storage used by this testbench object or operation.
    function new(string n,uvm_component p);  // Constructs this UVM object/component and initializes its base class.
        super.new(n,p);  // Calls the corresponding base-class UVM implementation.
        axi_imp=new("axi_imp",this);  // Updates axi_imp for the current transaction or testbench state.
        irq_imp=new("irq_imp",this);  // Updates irq_imp for the current transaction or testbench state.
    endfunction  // Ends this function.
    function void write_axi(axi_mem_item t);  // Declares a helper function used by this testbench class.
        if(t.op==AXI_MEM_READ)axi_reads++;  // Checks this condition before performing the associated action.
        else axi_writes++;  // Performs the alternate action when the preceding condition is false.
    endfunction  // Ends this function.
    function void write_irq(irq_event e);  // Declares a helper function used by this testbench class.
        tx_irqs+=e.tx;  // Updates tx_irqs+ for the current transaction or testbench state.
        rx_irqs+=e.rx;  // Updates rx_irqs+ for the current transaction or testbench state.
        err_irqs+=e.err;  // Updates err_irqs+ for the current transaction or testbench state.
    endfunction  // Ends this function.
    function void report_phase(uvm_phase p);  // Declares a helper function used by this testbench class.
        `uvm_info("SB",$sformatf("AXI reads=%0d writes=%0d TX_IRQ=%0d RX_IRQ=%0d ERR_IRQ=%0d",axi_reads,axi_writes,tx_irqs,rx_irqs,err_irqs),UVM_LOW)  // Updates `uvm_info("SB",$sformatf("AXI reads for the current transaction or testbench state.
    endfunction  // Ends this function.
endclass  // Ends this UVM class definition.
