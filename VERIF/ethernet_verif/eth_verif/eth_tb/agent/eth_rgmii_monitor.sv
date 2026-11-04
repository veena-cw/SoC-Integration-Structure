class eth_rgmii_monitor extends uvm_monitor;                                      // Observes and reconstructs Ethernet bytes transmitted on the external RGMII interface.

    `uvm_component_utils(eth_rgmii_monitor)                                       // Registers the passive RGMII monitor with the UVM factory.

    virtual eth_rgmii_if vif;                                                     // Provides access to the external RGMII TX signals.
    uvm_analysis_port #(eth_frame_item) ap;
    byte unsigned current_frame_bytes[$];
   
    byte unsigned tx_bytes[$];                                                    // Stores reconstructed bytes observed while TX_EN is asserted.
    int unsigned   tx_byte_count;                                                 // Counts reconstructed RGMII transmit bytes.
    int unsigned   tx_frame_count;                                                // Counts detected RGMII transmit frames.
    bit            tx_frame_active;                                               // Indicates that an RGMII transmit frame is currently active.
    bit            tx_error_seen;                                                 // Records any TX error indication decoded from RGMII TX_CTL.

    function new(string name, uvm_component parent);                              // Constructs the passive RGMII monitor.
        super.new(name, parent);
        ap = new("ap", this);
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        if (!uvm_config_db#(virtual eth_rgmii_if)::get(this, "", "vif", vif)) begin // Checks that the RGMII interface was supplied by the testbench.
            `uvm_fatal("RGMII_MON", "Unable to obtain eth_rgmii_if from config_db")
        end
    endfunction

    task run_phase(uvm_phase phase);                                              // Continuously samples both edges of the DDR RGMII transmit interface.

        logic [3:0] rise_data;                                                    // Stores TXD sampled on the rising edge of TX_CLK.
        logic [3:0] fall_data;                                                    // Stores TXD sampled on the falling edge of TX_CLK.
        logic       rise_ctl;                                                     // Stores TX_CTL sampled on the rising edge and therefore TX_EN.
        logic       fall_ctl;                                                     // Stores TX_CTL sampled on the falling edge and therefore TX_EN XOR TX_ER.
        logic       tx_en;                                                        // Holds the decoded RGMII transmit-enable state.
        logic       tx_er;                                                        // Holds the decoded RGMII transmit-error state.
        byte unsigned reconstructed_byte;                                         // Holds one byte reconstructed from the two RGMII nibbles.

        tx_bytes.delete();                                                        // Clears previously captured RGMII bytes at monitor startup.
        current_frame_bytes.delete();
        tx_byte_count   = 0;                                                      // Clears the reconstructed-byte counter.
        tx_frame_count  = 0;                                                      // Clears the detected-frame counter.
        tx_frame_active = 0;                                                      // Starts with no active RGMII transmit frame.
        tx_error_seen   = 0;                                                      // Clears the transmit-error indication.

        forever begin

            @(posedge vif.tx_clk);                                                // Samples the rising-edge RGMII data and control values.
            rise_data = vif.txd;                                                  // Captures the low nibble transmitted on the rising edge.
            rise_ctl  = vif.tx_ctl;                                               // Captures TX_EN from rising-edge TX_CTL.

            @(negedge vif.tx_clk);                                                // Samples the falling-edge RGMII data and control values.
            fall_data = vif.txd;                                                  // Captures the high nibble transmitted on the falling edge.
            fall_ctl  = vif.tx_ctl;                                               // Captures TX_EN XOR TX_ER from falling-edge TX_CTL.

            tx_en = rise_ctl;                                                     // Decodes TX_EN according to RGMII DDR control encoding.
            tx_er = rise_ctl ^ fall_ctl;                                          // Decodes TX_ER from the two TX_CTL edge values.

            if (tx_en) begin                                                      // Processes one transmitted byte while the MAC asserts transmit enable.

                reconstructed_byte = {fall_data, rise_data};                      // Combines falling-edge high nibble and rising-edge low nibble into one byte.

                if (!tx_frame_active) begin                                       // Detects the first enabled byte of a new RGMII frame.
                    tx_frame_active = 1'b1;                                       // Records that an RGMII transmit frame is now active.
                    tx_frame_count++;                                             // Counts the newly detected RGMII frame.
                    `uvm_info("RGMII_TX_FRAME",
                              $sformatf("START frame=%0d", tx_frame_count),
                              UVM_LOW)
                end

                tx_bytes.push_back(reconstructed_byte);                           // Stores the reconstructed byte for later frame checking.
                current_frame_bytes.push_back(reconstructed_byte);

                `uvm_info("RGMII_TX_BYTE",
                          $sformatf("INDEX=%0d DATA=%02h TX_EN=%0b TX_ER=%0b",
                                    tx_byte_count,
                                    reconstructed_byte,
                                    tx_en,
                                    tx_er),
                          UVM_LOW)

                tx_byte_count++;                                                  // Counts this reconstructed RGMII byte.

                if (tx_er) begin                                                  // Detects an error indication during an active transmitted frame.
                    tx_error_seen = 1'b1;                                         // Records the RGMII transmit error for the test checker.
                    `uvm_error("RGMII_TX_ERROR",
                               $sformatf("TX_ER asserted at RGMII byte index %0d",
                                         tx_byte_count - 1))
                end

            end
            else if (tx_frame_active) begin                                       // Detects the first disabled DDR cycle after an active frame.
                tx_frame_active = 1'b0;                                           // Records that the current RGMII transmit frame has ended.
                begin
                   eth_frame_item frame;

                   frame = eth_frame_item::type_id::create("tx_frame");
                   frame.data = new[current_frame_bytes.size()];

                   foreach (frame.data[i])
                       frame.data[i] = current_frame_bytes[i];

                   ap.write(frame);
                   current_frame_bytes.delete();
                end

 
               `uvm_info("RGMII_TX_FRAME",
                          $sformatf("END frame=%0d total_bytes=%0d",
                                    tx_frame_count,
                                    tx_byte_count),
                          UVM_LOW)
            end

        end

    endtask                                                                       // Ends continuous RGMII monitoring.

endclass
