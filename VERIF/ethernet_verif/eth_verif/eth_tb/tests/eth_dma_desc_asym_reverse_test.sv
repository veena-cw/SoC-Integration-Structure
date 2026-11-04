class eth_dma_desc_asym_reverse_test extends eth_base_test;
    `uvm_component_utils(eth_dma_desc_asym_reverse_test)

    virtual eth_desc_debug_if desc_vif;

    function new(
        string name = "eth_dma_desc_asym_reverse_test",
        uvm_component parent = null
    );
        super.new(name, parent);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(virtual eth_desc_debug_if)::get(
                this,
                "",
                "desc_debug_vif",
                desc_vif
            ))
            `uvm_fatal(
                "DESC_ASYM",
                "desc_debug_vif not found"
            )
    endfunction

    task automatic print_state(string label);
        `uvm_info(
            "DESC_ASYM",
            $sformatf(
                "%s CFG_VALID=%0b CFG_READY=%0b RD_VALID=%0b RD_READY=%0b WR_VALID=%0b WR_READY=%0b",
                label,
                desc_vif.cfg_valid,
                desc_vif.cfg_ready,
                desc_vif.rd_valid,
                desc_vif.rd_ready,
                desc_vif.wr_valid,
                desc_vif.wr_ready
            ),
            UVM_LOW
        )
    endtask

    task run_phase(uvm_phase phase);

        eth_reset_seq               reset_sequence;
        eth_parallel_dma_config_seq config_sequence;
        eth_parallel_dma_start_seq  start_sequence;

        bit rx_first_handshake_seen;
        bit tx_pending_seen;
        bit premature_cfg_retire;
        bit tx_handshake_seen;
        bit cfg_retired_after_both;
        int unsigned timeout_cycles;

        phase.raise_objection(this);

        rx_first_handshake_seen = 1'b0;
        tx_pending_seen         = 1'b0;
        premature_cfg_retire    = 1'b0;
        tx_handshake_seen       = 1'b0;
        cfg_retired_after_both  = 1'b0;

        `uvm_info(
            "DESC_ASYM",
            "CASE_B: verify RX may accept first while TX is blocked, but TX descriptor remains pending",
            UVM_LOW
        )

        desc_vif.force_rd_not_ready = 1'b0;
        desc_vif.force_wr_not_ready = 1'b0;

        reset_sequence =
            eth_reset_seq::type_id::create("reset_sequence");

        reset_sequence.start(env.reset_ag.sqr);

        repeat (5)
            @(posedge desc_vif.clk);

        config_sequence =
            eth_parallel_dma_config_seq::type_id::create(
                "config_sequence"
            );

        config_sequence.start(env.axil_ag.sqr);

        repeat (3)
            @(posedge desc_vif.clk);

        /*
         * Case B:
         * block TX/read descriptor consumer.
         * RX/write descriptor consumer remains free.
         */
        desc_vif.force_rd_not_ready = 1'b1;

        repeat (3)
            @(posedge desc_vif.clk);

        print_state("BEFORE_COMMIT");

        start_sequence =
            eth_parallel_dma_start_seq::type_id::create(
                "start_sequence"
            );

        fork
            begin
                start_sequence.start(env.axil_ag.sqr);
            end
        join_none

        /*
         * Phase 1:
         *
         * RX must handshake while TX is blocked.
         *
         * Do not require CFG_READY=1 here.
         * For the registered fix CFG_READY must remain low until
         * the blocked TX descriptor is also accepted.
         */
        timeout_cycles = 0;

        while (!rx_first_handshake_seen &&
               timeout_cycles < 100) begin

            @(posedge desc_vif.clk);
            #1ps;

            if ((desc_vif.cfg_valid === 1'b1) &&
                (desc_vif.rd_valid  === 1'b1) &&
                (desc_vif.rd_ready  === 1'b0) &&
                (desc_vif.wr_valid  === 1'b1) &&
                (desc_vif.wr_ready  === 1'b1)) begin

                rx_first_handshake_seen = 1'b1;
                tx_pending_seen         = 1'b1;

                print_state("RX_HANDSHAKE_TX_BLOCKED");

                if (desc_vif.cfg_ready === 1'b1) begin
                    premature_cfg_retire = 1'b1;

                    `uvm_error(
                        "DESC_ASYM_PREMATURE_READY",
                        {"CFG_READY asserted when RX accepted its descriptor ",
                         "but TX was still blocked"}
                    )
                end
                else begin
                    `uvm_info(
                        "DESC_ASYM_EVENT",
                        "RX descriptor accepted while TX remained pending and CFG_READY stayed low",
                        UVM_LOW
                    )
                end
            end

            timeout_cycles++;
        end

        if (!rx_first_handshake_seen) begin
            `uvm_fatal(
                "DESC_ASYM_RX_TIMEOUT",
                "Did not observe RX descriptor handshake while TX was forced not-ready"
            )
        end

        /*
         * Keep TX blocked for several clocks.
         *
         * CFG_VALID must remain asserted and the TX descriptor
         * request must remain pending.
         */
        repeat (5) begin

            @(posedge desc_vif.clk);
            #1ps;

            if (desc_vif.cfg_valid !== 1'b1) begin

                premature_cfg_retire = 1'b1;

                print_state("CFG_CLEARED_WHILE_TX_BLOCKED");

                `uvm_error(
                    "DESC_ASYM_PREMATURE_RETIRE",
                    "CFG_VALID cleared before the blocked TX descriptor was accepted"
                )
            end

            if ((desc_vif.rd_valid === 1'b1) &&
                (desc_vif.rd_ready === 1'b0))
                tx_pending_seen = 1'b1;

        end

        if (!tx_pending_seen) begin
            `uvm_error(
                "DESC_ASYM_TX_NOT_PENDING",
                "TX descriptor was not observed pending while TX was blocked"
            )
        end

        print_state("BEFORE_TX_RELEASE");

        /*
         * Phase 2:
         * allow TX/read descriptor consumer to become ready.
         */
        desc_vif.force_rd_not_ready = 1'b0;

        timeout_cycles = 0;

        while (!tx_handshake_seen &&
               timeout_cycles < 100) begin

            @(posedge desc_vif.clk);
            #1ps;

            if ((desc_vif.rd_valid === 1'b1) &&
                (desc_vif.rd_ready === 1'b1)) begin

                tx_handshake_seen = 1'b1;

                print_state("TX_HANDSHAKE_AFTER_RELEASE");

                `uvm_info(
                    "DESC_ASYM_EVENT",
                    "TX descriptor successfully handshook after TX ready was released",
                    UVM_LOW
                )
            end

            timeout_cycles++;
        end

        if (!tx_handshake_seen) begin
            `uvm_error(
                "DESC_ASYM_LOST_TX",
                {"TX descriptor did not handshake after TX became ready; ",
                 "descriptor/configuration was lost"}
            )
        end

        /*
         * Phase 3:
         * shared configuration may retire only after both enabled
         * descriptor consumers have accepted their descriptors.
         */
        if (tx_handshake_seen) begin

            timeout_cycles = 0;

            while (!cfg_retired_after_both &&
                   timeout_cycles < 20) begin

                @(posedge desc_vif.clk);
                #1ps;

                if (desc_vif.cfg_valid === 1'b0) begin

                    cfg_retired_after_both = 1'b1;

                    print_state("CFG_RETIRED_AFTER_BOTH");
                end

                timeout_cycles++;
            end

            if (!cfg_retired_after_both) begin
                `uvm_error(
                    "DESC_ASYM_CFG_NOT_RETIRED",
                    "CFG_VALID did not clear after both RX and TX descriptor handshakes completed"
                )
            end

        end

        print_state("FINAL_STATE");

        if (rx_first_handshake_seen &&
            tx_pending_seen &&
            tx_handshake_seen &&
            cfg_retired_after_both &&
            !premature_cfg_retire) begin

            `uvm_info(
                "DESC_ASYM_REVERSE_PASS",
                {"CASE_B PASS: RX accepted first, TX remained pending ",
                 "while blocked, TX accepted after release, and configuration ",
                 "retired only after both descriptor consumers were serviced"},
                UVM_LOW
            )

        end
        else begin

            `uvm_error(
                "DESC_ASYM_REVERSE_FAIL",
                $sformatf(
                    "CASE_B FAIL: rx_hs=%0b tx_pending=%0b tx_hs=%0b cfg_retired=%0b premature_retire=%0b",
                    rx_first_handshake_seen,
                    tx_pending_seen,
                    tx_handshake_seen,
                    cfg_retired_after_both,
                    premature_cfg_retire
                )
            )

        end

        desc_vif.force_rd_not_ready = 1'b0;
        desc_vif.force_wr_not_ready = 1'b0;

        repeat (5)
            @(posedge desc_vif.clk);

        phase.drop_objection(this);

    endtask

endclass
