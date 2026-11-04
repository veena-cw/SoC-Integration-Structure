class eth_axil_monitor extends uvm_monitor;

    `uvm_component_utils(eth_axil_monitor)

    uvm_analysis_port#(eth_axil_item) ap;
    virtual eth_axil_if vif;

    int unsigned aw_count;
    int unsigned w_count;
    int unsigned b_count;
    int unsigned b_stall_cycles;

    bit stalled_previous;
    logic [1:0] previous_bresp;

    function new(string n, uvm_component p);
        super.new(n, p);
        ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_axil_if)::get(this, "", "vif", vif))
            `uvm_fatal("AXIL_MON", "AXI-Lite virtual interface not found")
    endfunction

    task run_phase(uvm_phase phase);

        aw_count = 0;
        w_count  = 0;
        b_count  = 0;
        b_stall_cycles = 0;
        stalled_previous = 0;

        forever begin
            @(posedge vif.aclk);

            if (vif.aresetn !== 1'b1) begin
                aw_count = 0;
                w_count  = 0;
                b_count  = 0;
                stalled_previous = 0;
            end
            else begin

                // Check previously stalled response.
                if (stalled_previous) begin
                    if (vif.bvalid !== 1'b1)
                        `uvm_error("AXIL_BVALID",
                            "BVALID dropped before BREADY handshake")

                    if (vif.bresp !== previous_bresp)
                        `uvm_error("AXIL_BRESP",
                            "BRESP changed while response was stalled")
                end

                stalled_previous =
                    (vif.bvalid === 1'b1 &&
                     vif.bready === 1'b0);

                if (stalled_previous) begin
                    previous_bresp = vif.bresp;
                    b_stall_cycles++;
                end

                // Count write-address handshakes.
                if (vif.awvalid && vif.awready)
                    aw_count++;

                // Count write-data handshakes.
                if (vif.wvalid && vif.wready)
                    w_count++;

                // Validate B-channel response.
                if (vif.bvalid === 1'b1) begin

                    if (vif.bresp !== 2'b00 &&
                        vif.bresp !== 2'b10 &&
                        vif.bresp !== 2'b11)
                        `uvm_error("AXIL_BRESP",
                            $sformatf("Invalid AXI-Lite BRESP=%b",
                                      vif.bresp))

                    if (b_count >= aw_count || b_count >= w_count)
                        `uvm_error("AXIL_BCOUNT",
                            "BVALID observed without a complete AW/W pair")
                end

                // Count accepted B-channel responses.
                if (vif.bvalid && vif.bready) begin
                    b_count++;

                    `uvm_info("AXIL_B_PASS",
                        $sformatf(
                            "B handshake #%0d BRESP=%b AW=%0d W=%0d",
                            b_count, vif.bresp, aw_count, w_count),
                        UVM_LOW)
                end
            end
        end
    endtask

    function void report_phase(uvm_phase phase);
        super.report_phase(phase);

        `uvm_info("AXIL_B_STALL_SUMMARY",
            $sformatf(
                "B_STALL_CYCLES=%0d AW=%0d W=%0d B=%0d",
                b_stall_cycles, aw_count, w_count, b_count),
            UVM_NONE)

        if (b_stall_cycles == 0)
            `uvm_warning("AXIL_B_COVERAGE",
                "No B-channel backpressure cycles observed")

        if (aw_count != w_count || aw_count != b_count)
            `uvm_error("AXIL_B_INCOMPLETE",
                "AW/W/B handshake counts do not match")
    endfunction

endclass
