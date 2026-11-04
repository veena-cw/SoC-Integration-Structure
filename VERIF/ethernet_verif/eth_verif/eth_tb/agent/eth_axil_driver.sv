class eth_axil_driver extends uvm_driver #(eth_axil_item);
    `uvm_component_utils(eth_axil_driver)

    virtual eth_axil_if vif;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual eth_axil_if)::get(this, "", "vif", vif))
            `uvm_fatal("NOVIF", "eth_axil_if missing")
    endfunction

    task run_phase(uvm_phase phase);
        vif.awvalid <= 1'b0;
        vif.awprot  <= 3'b000;
        vif.wvalid  <= 1'b0;
        vif.bready  <= 1'b0;
        vif.arvalid <= 1'b0;
        vif.arprot  <= 3'b000;
        vif.rready  <= 1'b0;

        forever begin
            seq_item_port.get_next_item(req);
            if (req.write)
                write_reg(req);
            else
                read_reg(req);
            seq_item_port.item_done();
        end
    endtask

    task write_reg(eth_axil_item axil_transaction);
        int unsigned aw_timeout;
        int unsigned w_timeout;
        int unsigned b_timeout;

        wait (vif.aresetn === 1'b1 &&
              vif.dut_reset_done === 1'b1);
        @(negedge vif.aclk);

        `uvm_info("AXIL_DEBUG",
            $sformatf("WRITE START ADDR=%08h DATA=%08h",
                axil_transaction.addr,
                axil_transaction.data), UVM_LOW)

        fork
            begin
                aw_timeout = 0;

                @(negedge vif.aclk);
                vif.awaddr  = axil_transaction.addr;
                vif.awvalid = 1'b1;

                do begin
                    @(posedge vif.aclk);
                    aw_timeout++;

                    if (aw_timeout >= 5000)
                        `uvm_fatal("AXIL_AW_TIMEOUT",
                            "AWREADY timeout")
                end while (vif.awready !== 1'b1);

                @(negedge vif.aclk);
                vif.awvalid = 1'b0;

                `uvm_info("AXIL_DEBUG",
                    "AW handshake completed", UVM_LOW)
            end

            begin
                w_timeout = 0;

                @(negedge vif.aclk);
                vif.wdata  = axil_transaction.data;
                vif.wstrb  = axil_transaction.strb;
                vif.wvalid = 1'b1;

                do begin
                    @(posedge vif.aclk);
                    w_timeout++;

                    if (w_timeout >= 5000)
                        `uvm_fatal("AXIL_W_TIMEOUT",
                            "WREADY timeout")
                end while (vif.wready !== 1'b1);

                @(negedge vif.aclk);
                vif.wvalid = 1'b0;

                `uvm_info("AXIL_DEBUG",
                    "W handshake completed", UVM_LOW)
            end
        join

        `uvm_info("AXIL_DEBUG",
            "AW/W completed; waiting for BVALID", UVM_LOW)

        // Optional AXI4-Lite B-channel backpressure.
        // Default zero preserves existing test behavior.
        begin
            int unsigned bready_delay;
            bready_delay = 0;
            begin
                bit plusarg_found;
                plusarg_found = $value$plusargs("AXIL_BREADY_DELAY=%d", bready_delay);
            end

            repeat (bready_delay)
                @(negedge vif.aclk);
        end

        @(negedge vif.aclk);
        vif.bready = 1'b1;
        b_timeout = 0;

        do begin
            @(posedge vif.aclk);
            b_timeout++;

            if (b_timeout >= 5000)
                `uvm_fatal("AXIL_B_TIMEOUT",
                    $sformatf("BVALID timeout ADDR=%08h",
                        axil_transaction.addr))
        end while (vif.bvalid !== 1'b1);

        axil_transaction.resp = vif.bresp;

        @(negedge vif.aclk);
        vif.bready = 1'b0;

        `uvm_info("AXIL_WR",
            $sformatf("ADDR=%08h DATA=%08h RESP=%0h",
                axil_transaction.addr,
                axil_transaction.data,
                axil_transaction.resp), UVM_LOW)
    endtask

    task read_reg(eth_axil_item axil_transaction);
        wait (vif.aresetn === 1'b1 &&
              vif.dut_reset_done === 1'b1);
        @(negedge vif.aclk);

        // Present the CSR address and wait until the register bank accepts it.
        @(posedge vif.aclk);
        vif.araddr  <= axil_transaction.addr;
        vif.arvalid <= 1'b1;
        do @(posedge vif.aclk); while (!vif.arready);
        vif.arvalid <= 1'b0;

        // Hold RREADY until the DUT returns the selected register value and response.
        vif.rready <= 1'b1;
        do @(posedge vif.aclk); while (!vif.rvalid);
        axil_transaction.data = vif.rdata;
        axil_transaction.resp = vif.rresp;
        vif.rready <= 1'b0;

        `uvm_info("AXIL_RD",
                  $sformatf("ADDR=%08h DATA=%08h RESP=%0h",
                            axil_transaction.addr, axil_transaction.data, axil_transaction.resp),
                  UVM_LOW)
    endtask
endclass
