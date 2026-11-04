class eth_dma_desc_asym_ready_test extends eth_base_test;
    `uvm_component_utils(eth_dma_desc_asym_ready_test)

    virtual eth_desc_debug_if desc_vif;

    function new(
        string name = "eth_dma_desc_asym_ready_test",
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

        bit tx_first_handshake_seen;
        bit rx_pending_seen;
        bit premature_cfg_retire;
        bit rx_handshake_seen;
        bit cfg_retired_after_both;
        int unsigned timeout_cycles;

        phase.raise_objection(this);

        tx_first_handshake_seen = 1'b0;
        rx_pending_seen         = 1'b0;
        premature_cfg_retire    = 1'b0;
        rx_handshake_seen       = 1'b0;
        cfg_retired_after_both  = 1'b0;

        `uvm_info(
            "DESC_ASYM",
            "CASE_A: verify TX may accept first while RX is blocked, but RX descriptor remains pending",
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
         * Case A:
         * allow TX descriptor consumer to operate,
         * force RX descriptor consumer not-ready.
         */
        desc_vif.force_wr_not_ready = 1'b1;

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
         * TX must handshake while RX is blocked.
         *
         * Important:
         * Do NOT require CFG_READY=1 here.
         * With the fixed RTL, CFG_READY should remain low until
         * every enabled descriptor consumer has accepted the config.
         */
        timeout_cycles = 0;

        while (!tx_first_handshake_seen &&
               timeout_cycles < 100) begin

            @(posedge desc_vif.clk);
            #1ps;

            if ((desc_vif.cfg_valid === 1'b1) &&
                (desc_vif.rd_valid  === 1'b1) &&
                (desc_vif.rd_ready  === 1'b1) &&
                (desc_vif.wr_valid  === 1'b1) &&
                (desc_vif.wr_ready  === 1'b0)) begin

                tx_first_handshake_seen = 1'b1;
                rx_pending_seen         = 1'b1;

                print_state("TX_HANDSHAKE_RX_BLOCKED");

                if (desc_vif.cfg_ready === 1'b1) begin
                    premature_cfg_retire = 1'b1;

                    `uvm_error(
                        "DESC_ASYM_PREMATURE_READY",
                        {"CFG_READY asserted when TX accepted its descriptor ",
                         "but RX was still blocked"}
                    )
                end
                else begin
                    `uvm_info(
                        "DESC_ASYM_EVENT",
                        "TX descriptor accepted while RX remained pending and CFG_READY stayed low",
                        UVM_LOW
                    )
                end
            end

            timeout_cycles++;
        end

        if (!tx_first_handshake_seen) begin
            `uvm_fatal(
                "DESC_ASYM_TX_TIMEOUT",
                "Did not observe TX descriptor handshake while RX was forced not-ready"
            )
        end

        /*
         * Keep RX blocked for several clocks.
         * Configuration must remain valid and RX request must
         * remain pending; shared configuration must not retire.
         */
        repeat (5) begin
            @(posedge desc_vif.clk);
            #1ps;

            if (desc_vif.cfg_valid !== 1'b1) begin
                premature_cfg_retire = 1'b1;

                print_state("CFG_CLEARED_WHILE_RX_BLOCKED");

                `uvm_error(
                    "DESC_ASYM_PREMATURE_RETIRE",
                    "CFG_VALID cleared before the blocked RX descriptor was accepted"
                )
            end

            if ((desc_vif.wr_valid === 1'b1) &&
                (desc_vif.wr_ready === 1'b0))
                rx_pending_seen = 1'b1;
        end

        if (!rx_pending_seen) begin
            `uvm_error(
                "DESC_ASYM_RX_NOT_PENDING",
                "RX descriptor was not observed pending while RX was blocked"
            )
        end

        print_state("BEFORE_RX_RELEASE");

        /*
         * Phase 2:
         * release RX and require the previously pending RX
         * descriptor to complete.
         */
        desc_vif.force_wr_not_ready = 1'b0;

        timeout_cycles = 0;

        while (!rx_handshake_seen &&
               timeout_cycles < 100) begin

            @(posedge desc_vif.clk);
            #1ps;

            if ((desc_vif.wr_valid === 1'b1) &&
                (desc_vif.wr_ready === 1'b1)) begin

                rx_handshake_seen = 1'b1;

                print_state("RX_HANDSHAKE_AFTER_RELEASE");

                `uvm_info(
                    "DESC_ASYM_EVENT",
                    "RX descriptor successfully handshook after RX ready was released",
                    UVM_LOW
                )
            end

            timeout_cycles++;
        end

        if (!rx_handshake_seen) begin
            `uvm_error(
                "DESC_ASYM_LOST_RX",
                {"RX descriptor did not handshake after RX became ready; ",
                 "descriptor/configuration was lost"}
            )
        end

        /*
         * Phase 3:
         * after both enabled descriptor consumers have accepted
         * their descriptors, the shared configuration may retire.
         */
        if (rx_handshake_seen) begin

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
                    "CFG_VALID did not clear after both TX and RX descriptor handshakes completed"
                )
            end
        end

        print_state("FINAL_STATE");

        if (tx_first_handshake_seen &&
            rx_pending_seen &&
            rx_handshake_seen &&
            cfg_retired_after_both &&
            !premature_cfg_retire) begin

            `uvm_info(
                "DESC_ASYM_PASS",
                {"CASE_A PASS: TX accepted first, RX remained pending ",
                 "while blocked, RX accepted after release, and configuration ",
                 "retired only after both descriptor consumers were serviced"},
                UVM_LOW
            )

        end
        else begin

            `uvm_error(
                "DESC_ASYM_FAIL",
                $sformatf(
                    "CASE_A FAIL: tx_hs=%0b rx_pending=%0b rx_hs=%0b cfg_retired=%0b premature_retire=%0b",
                    tx_first_handshake_seen,
                    rx_pending_seen,
                    rx_handshake_seen,
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
