class eth_axis_rx_monitor extends uvm_monitor;
    `uvm_component_utils(eth_axis_rx_monitor)

    virtual eth_axis_rx_if vif;

    uvm_analysis_port #(eth_frame_item) ap;
    byte unsigned frame_bytes[$];

    byte unsigned observed_bytes[$];
    int unsigned transfer_count;
    int unsigned tlast_count;
    int unsigned tlast_index;
    bit          tuser_seen;

    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_axis_rx_if)::get(this, "", "vif", vif))
            `uvm_fatal("NO_RX_AXIS_VIF", "eth_axis_rx_if missing")
    endfunction

    task run_phase(uvm_phase phase);
        observed_bytes.delete();
        frame_bytes.delete();
        transfer_count = 0;
        tlast_count     = 0;
        tlast_index     = 0;
        tuser_seen      = 1'b0;

        forever begin
            @(posedge vif.aclk);

            if (!vif.aresetn) begin
                observed_bytes.delete();
                frame_bytes.delete();
                transfer_count = 0;
                tlast_count     = 0;
                tlast_index     = 0;
                tuser_seen      = 1'b0;
            end
            else if (vif.tvalid && vif.tready) begin
                // A byte leaves the MAC RX path only on a valid/ready handshake.
                observed_bytes.push_back(vif.tdata);
                frame_bytes.push_back(vif.tdata);
                transfer_count++;

                if (vif.tuser)
                    tuser_seen = 1'b1;

                if (vif.tlast) begin
                    eth_frame_item frame;

                    tlast_count++;
                    tlast_index = transfer_count - 1;

                    frame = eth_frame_item::type_id::create("rx_frame");
                    frame.data = new[frame_bytes.size()];

                    foreach (frame.data[i])
                        frame.data[i] = frame_bytes[i];

                    ap.write(frame);
                    frame_bytes.delete();
                end

                `uvm_info("RX_AXIS_BYTE",
                    $sformatf(
                        "INDEX=%0d DATA=%02h LAST=%0b USER=%0b",
                        transfer_count-1,
                        vif.tdata,
                        vif.tlast,
                        vif.tuser),
                    UVM_LOW)
            end
        end
    endtask
endclass
