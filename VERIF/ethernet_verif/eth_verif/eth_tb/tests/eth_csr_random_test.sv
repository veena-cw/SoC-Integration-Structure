class eth_csr_random_test extends eth_base_test;
    `uvm_component_utils(eth_csr_random_test)

    function new(string name = "eth_csr_random_test",
                 uvm_component parent = null);
        super.new(name, parent);
    endfunction

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_sequence;
        eth_csr_random_seq random_sequence;

        phase.raise_objection(this);

        reset_sequence =
            eth_reset_seq::type_id::create("reset_sequence");

        reset_sequence.start(env.reset_ag.sqr);

        random_sequence =
            eth_csr_random_seq::type_id::create("random_sequence");

        random_sequence.start(env.axil_ag.sqr);

        #1us;

        phase.drop_objection(this);
    endtask
endclass
