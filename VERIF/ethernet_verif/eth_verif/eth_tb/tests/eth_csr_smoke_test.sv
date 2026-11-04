class eth_csr_smoke_test extends eth_base_test;
    `uvm_component_utils(eth_csr_smoke_test)

    function new(string name = "eth_csr_smoke_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    task run_phase(uvm_phase phase);
        eth_reset_seq     reset_sequence;
        eth_csr_smoke_seq csr_smoke_sequence;

        phase.raise_objection(this);

        // Reset first so every CSR starts from the RTL-defined reset state.
        reset_sequence = eth_reset_seq::type_id::create("reset_sequence");
        reset_sequence.start(env.reset_ag.sqr);

        // Verify software-visible DMA configuration registers through AXI-Lite.
        csr_smoke_sequence = eth_csr_smoke_seq::type_id::create("csr_smoke_sequence");
        csr_smoke_sequence.start(env.axil_ag.sqr);

        #1us;  // Preserve the proven CSR smoke-test timing used by the current regression.
        phase.drop_objection(this);
    endtask
    
    
endclass
