class eth_axi_cov_event extends uvm_sequence_item;

    `uvm_object_utils(eth_axi_cov_event)

    // Event types:
    // 0 = accepted read response
    // 1 = accepted write response
    // 2 = completed stall episode
    int unsigned event_kind;

    // AXI channels:
    // 0 = AR, 1 = AW, 2 = W, 3 = R, 4 = B
    int unsigned channel;

    bit [1:0] response;
    bit last;
    int unsigned stall_cycles;

    function new(string name = "eth_axi_cov_event");
        super.new(name);
    endfunction

endclass
