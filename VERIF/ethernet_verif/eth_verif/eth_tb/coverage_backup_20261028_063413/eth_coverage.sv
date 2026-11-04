class eth_coverage extends uvm_subscriber #(eth_frame_item);

    `uvm_component_utils(eth_coverage)

    int frame_len;

    covergroup cg;
        cp_len : coverpoint frame_len {
            bins min    = {60};
            bins normal = {[61:1518]};
            bins jumbo  = {[1519:9216]};
        }
    endgroup

    function new(string name, uvm_component parent);
        super.new(name, parent);
        cg = new;
    endfunction

    function void write(eth_frame_item t);
        frame_len = t.data.size();
        cg.sample();
    endfunction

endclass
