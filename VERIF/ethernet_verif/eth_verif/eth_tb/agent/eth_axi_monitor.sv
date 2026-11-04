class eth_axi_monitor extends uvm_monitor;

    `uvm_component_utils(eth_axi_monitor)

    uvm_analysis_port #(eth_axi_item) ap;
    uvm_analysis_port #(eth_axi_cov_event) cov_event_ap;

    int unsigned cov_stall_len[5];
    int unsigned cov_stall_episodes[5];
    int unsigned cov_r_beats;
    int unsigned cov_r_last_beats;
    int unsigned cov_b_responses;
    virtual eth_axi_if vif;

    int unsigned ar_stall_cycles;
    int unsigned aw_stall_cycles;
    int unsigned w_stall_cycles;

    int unsigned ar_stability_errors;
    int unsigned aw_stability_errors;
    int unsigned w_stability_errors;

    bit ar_stall_active;
    bit aw_stall_active;
    bit w_stall_active;

    logic [$bits(vif.arid)-1:0]    saved_arid;
    logic [$bits(vif.araddr)-1:0]  saved_araddr;
    logic [7:0]                    saved_arlen;
    logic [2:0]                    saved_arsize;
    logic [1:0]                    saved_arburst;
    logic                          saved_arlock;
    logic [3:0]                    saved_arcache;
    logic [2:0]                    saved_arprot;

    logic [$bits(vif.awid)-1:0]    saved_awid;
    logic [$bits(vif.awaddr)-1:0]  saved_awaddr;
    logic [7:0]                    saved_awlen;
    logic [2:0]                    saved_awsize;
    logic [1:0]                    saved_awburst;
    logic                          saved_awlock;
    logic [3:0]                    saved_awcache;
    logic [2:0]                    saved_awprot;

    logic [$bits(vif.wdata)-1:0]   saved_wdata;
    logic [$bits(vif.wstrb)-1:0]   saved_wstrb;
    logic                          saved_wlast;


    function new(string name, uvm_component parent);
        super.new(name, parent);
        ap = new("ap", this);
        cov_event_ap = new("cov_event_ap", this);
    endfunction


    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_axi_if)::get(
                this, "", "vif", vif)) begin
            `uvm_fatal("AXI_MON",
                "Failed to get eth_axi_if from uvm_config_db")
        end
    endfunction


    function void publish_cov_event(
        int unsigned kind,
        int unsigned ch,
        bit [1:0] resp,
        bit last_beat,
        int unsigned stall_len
    );
        eth_axi_cov_event ev;
        ev = eth_axi_cov_event::type_id::create("axi_cov_event");
        ev.event_kind = kind;
        ev.channel = ch;
        ev.response = resp;
        ev.last = last_beat;
        ev.stall_cycles = stall_len;
        cov_event_ap.write(ev);
    endfunction

    task run_phase(uvm_phase phase);

        ar_stall_cycles      = 0;
        aw_stall_cycles      = 0;
        w_stall_cycles       = 0;

        ar_stability_errors  = 0;
        aw_stability_errors  = 0;
        w_stability_errors   = 0;

        ar_stall_active      = 1'b0;
        aw_stall_active      = 1'b0;
        w_stall_active       = 1'b0;

        forever begin

            @(posedge vif.aclk);

            if (!vif.aresetn) begin

                // Reset discards incomplete stall episodes.
                for (int ch = 0; ch < 5; ch++)
                    cov_stall_len[ch] = 0;

                ar_stall_active = 1'b0;
                aw_stall_active = 1'b0;
                w_stall_active  = 1'b0;

            end
            else begin

                // ----------------------------------------------------
                // AXI read-address channel stability
                // ----------------------------------------------------

                if (ar_stall_active) begin

                    if (vif.arvalid !== 1'b1) begin
                        ar_stability_errors++;

                        `uvm_error("AXI_AR_STABILITY",
                            "ARVALID deasserted before ARREADY handshake")
                    end
                    else begin

                        if ((vif.arid    !== saved_arid)    ||
                            (vif.araddr  !== saved_araddr)  ||
                            (vif.arlen   !== saved_arlen)   ||
                            (vif.arsize  !== saved_arsize)  ||
                            (vif.arburst !== saved_arburst) ||
                            (vif.arlock  !== saved_arlock)  ||
                            (vif.arcache !== saved_arcache) ||
                            (vif.arprot  !== saved_arprot)) begin

                            ar_stability_errors++;

                            `uvm_error("AXI_AR_STABILITY",
                                $sformatf(
                                    "AR channel changed while stalled: old_addr=%016h new_addr=%016h",
                                    saved_araddr,
                                    vif.araddr))
                        end
                    end
                end

                if (vif.arvalid && !vif.arready) begin

                    ar_stall_cycles++;

                    if (!ar_stall_active) begin
                        saved_arid    = vif.arid;
                        saved_araddr  = vif.araddr;
                        saved_arlen   = vif.arlen;
                        saved_arsize  = vif.arsize;
                        saved_arburst = vif.arburst;
                        saved_arlock  = vif.arlock;
                        saved_arcache = vif.arcache;
                        saved_arprot  = vif.arprot;
                    end

                    ar_stall_active = 1'b1;

                end
                else begin
                    ar_stall_active = 1'b0;
                end


                // ----------------------------------------------------
                // AXI write-address channel stability
                // ----------------------------------------------------

                if (aw_stall_active) begin

                    if (vif.awvalid !== 1'b1) begin
                        aw_stability_errors++;

                        `uvm_error("AXI_AW_STABILITY",
                            "AWVALID deasserted before AWREADY handshake")
                    end
                    else begin

                        if ((vif.awid    !== saved_awid)    ||
                            (vif.awaddr  !== saved_awaddr)  ||
                            (vif.awlen   !== saved_awlen)   ||
                            (vif.awsize  !== saved_awsize)  ||
                            (vif.awburst !== saved_awburst) ||
                            (vif.awlock  !== saved_awlock)  ||
                            (vif.awcache !== saved_awcache) ||
                            (vif.awprot  !== saved_awprot)) begin

                            aw_stability_errors++;

                            `uvm_error("AXI_AW_STABILITY",
                                $sformatf(
                                    "AW channel changed while stalled: old_addr=%016h new_addr=%016h",
                                    saved_awaddr,
                                    vif.awaddr))
                        end
                    end
                end

                if (vif.awvalid && !vif.awready) begin

                    aw_stall_cycles++;

                    if (!aw_stall_active) begin
                        saved_awid    = vif.awid;
                        saved_awaddr  = vif.awaddr;
                        saved_awlen   = vif.awlen;
                        saved_awsize  = vif.awsize;
                        saved_awburst = vif.awburst;
                        saved_awlock  = vif.awlock;
                        saved_awcache = vif.awcache;
                        saved_awprot  = vif.awprot;
                    end

                    aw_stall_active = 1'b1;

                end
                else begin
                    aw_stall_active = 1'b0;
                end


                // ----------------------------------------------------
                // AXI write-data channel stability
                // ----------------------------------------------------

                if (w_stall_active) begin

                    if (vif.wvalid !== 1'b1) begin
                        w_stability_errors++;

                        `uvm_error("AXI_W_STABILITY",
                            "WVALID deasserted before WREADY handshake")
                    end
                    else begin

                        if ((vif.wdata !== saved_wdata) ||
                            (vif.wstrb !== saved_wstrb) ||
                            (vif.wlast !== saved_wlast)) begin

                            w_stability_errors++;

                            `uvm_error("AXI_W_STABILITY",
                                $sformatf(
                                    "W channel changed while stalled: old_data=%016h new_data=%016h old_strb=%02h new_strb=%02h old_last=%0b new_last=%0b",
                                    saved_wdata,
                                    vif.wdata,
                                    saved_wstrb,
                                    vif.wstrb,
                                    saved_wlast,
                                    vif.wlast))
                        end
                    end
                end

                if (vif.wvalid && !vif.wready) begin

                    w_stall_cycles++;

                    if (!w_stall_active) begin
                        saved_wdata = vif.wdata;
                        saved_wstrb = vif.wstrb;
                        saved_wlast = vif.wlast;
                    end

                    w_stall_active = 1'b1;

                end
                else begin
                    w_stall_active = 1'b0;
                end


                // ----------------------------------------------------
                // -----------------------------------------------
                // AXI response and backpressure coverage
                // -----------------------------------------------
                if (vif.rvalid && vif.rready) begin
                    publish_cov_event(
                        0, 3, vif.rresp, vif.rlast, 0);
                    cov_r_beats++;
                    if (vif.rlast)
                        cov_r_last_beats++;
                end

                if (vif.bvalid && vif.bready) begin
                    publish_cov_event(
                        1, 4, vif.bresp, 1'b1, 0);
                    cov_b_responses++;
                end

                // Each channel records one event per stall episode.
                for (int ch = 0; ch < 5; ch++) begin
                    bit stalled;

                    case (ch)
                        0: stalled = vif.arvalid && !vif.arready;
                        1: stalled = vif.awvalid && !vif.awready;
                        2: stalled = vif.wvalid  && !vif.wready;
                        3: stalled = vif.rvalid  && !vif.rready;
                        4: stalled = vif.bvalid  && !vif.bready;
                        default: stalled = 1'b0;
                    endcase

                    if (stalled) begin
                        cov_stall_len[ch]++;
                    end
                    else if (cov_stall_len[ch] != 0) begin
                        publish_cov_event(
                            2, ch, 2'b00, 1'b0,
                            cov_stall_len[ch]);
                        cov_stall_episodes[ch]++;
                        cov_stall_len[ch] = 0;
                    end
                end

                // Publish accepted AXI address requests.
                // These are address handshakes, not completed bursts.
                if (vif.arvalid && vif.arready) begin
                    eth_axi_item tr;
                    tr = eth_axi_item::type_id::create("axi_read_cov");
                    tr.kind = eth_axi_item::AXI_RD;
                    tr.addr = vif.araddr[31:0];
                    tr.len  = vif.arlen;
                    tr.size = vif.arsize;
                    ap.write(tr);
                end

                if (vif.awvalid && vif.awready) begin
                    eth_axi_item tr;
                    tr = eth_axi_item::type_id::create("axi_write_cov");
                    tr.kind = eth_axi_item::AXI_WR;
                    tr.addr = vif.awaddr[31:0];
                    tr.len  = vif.awlen;
                    tr.size = vif.awsize;
                    ap.write(tr);
                end

                // Existing transaction logging
                // ----------------------------------------------------

                if (vif.arvalid && vif.arready)
                    `uvm_info("AXI_READ_ADDR",
                        $sformatf(
                            "ADDR=%08h LEN=%0d SIZE=%0d",
                            vif.araddr,
                            vif.arlen,
                            vif.arsize),
                        UVM_LOW)

                if (vif.rvalid && vif.rready)
                    `uvm_info("AXI_READ_DATA",
                        $sformatf(
                            "DATA=%016h LAST=%0b",
                            vif.rdata,
                            vif.rlast),
                        UVM_LOW)

                if (vif.awvalid && vif.awready)
                    `uvm_info("AXI_WRITE_ADDR",
                        $sformatf(
                            "ADDR=%08h LEN=%0d SIZE=%0d",
                            vif.awaddr,
                            vif.awlen,
                            vif.awsize),
                        UVM_LOW)

                if (vif.wvalid && vif.wready)
                    `uvm_info("AXI_WRITE_DATA",
                        $sformatf(
                            "DATA=%016h STRB=%02h LAST=%0b",
                            vif.wdata,
                            vif.wstrb,
                            vif.wlast),
                        UVM_LOW)

            end
        end
    endtask


    function void report_phase(uvm_phase phase);
        super.report_phase(phase);

        `uvm_info("AXI_STABILITY_SUMMARY",
            $sformatf(
                "AR_STALL_CYCLES=%0d AW_STALL_CYCLES=%0d W_STALL_CYCLES=%0d AR_ERRORS=%0d AW_ERRORS=%0d W_ERRORS=%0d",
                ar_stall_cycles,
                aw_stall_cycles,
                w_stall_cycles,
                ar_stability_errors,
                aw_stability_errors,
                w_stability_errors),
            UVM_NONE)

    endfunction

endclass
