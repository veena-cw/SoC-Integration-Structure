class eth_base_test extends uvm_test;
    `uvm_component_utils(eth_base_test)

    eth_env env;

    function new(string name = "eth_base_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        env = eth_env::type_id::create("env", this);
    endfunction

    task run_phase(uvm_phase phase);
        eth_reset_seq reset_sequence;

        phase.raise_objection(this);
        reset_sequence = eth_reset_seq::type_id::create("reset_sequence");
        repeat(200)
        reset_sequence.start(env.reset_ag.sqr); // Places the DUT in a known reset state before a base-test idle period.
        #1us;
        phase.drop_objection(this);
    endtask
endclass
