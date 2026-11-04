`uvm_analysis_imp_decl(_rx_cov)
`uvm_analysis_imp_decl(_axi_cov)
`uvm_analysis_imp_decl(_axi_event_cov)

class eth_coverage extends uvm_subscriber #(eth_frame_item);

    `uvm_component_utils(eth_coverage)

    uvm_analysis_imp_rx_cov #(eth_frame_item, eth_coverage) rx_export;

    uvm_analysis_imp_axi_cov #(eth_axi_item, eth_coverage) axi_export;

    uvm_analysis_imp_axi_event_cov #(
        eth_axi_cov_event, eth_coverage
    ) axi_event_export;

    int unsigned cov_resp_channel;
    int unsigned cov_resp_code;
    int unsigned cov_resp_last;
    int unsigned cov_stall_channel;
    int unsigned cov_stall_duration;

    int unsigned cov_read_response_count;
    int unsigned cov_read_last_count;
    int unsigned cov_write_response_count;
    int unsigned cov_stall_event_count[5];

    covergroup axi_response_cg;
        option.per_instance = 1;

        cp_channel : coverpoint cov_resp_channel {
            bins read_response  = {0};
            bins write_response = {1};
        }

        cp_response : coverpoint cov_resp_code {
            bins okay   = {0};
            bins exokay = {1};
            bins slverr = {2};
            bins decerr = {3};
        }

        cp_read_last : coverpoint cov_resp_last
            iff (cov_resp_channel == 0) {
            bins intermediate = {0};
            bins final_beat   = {1};
        }

        cross_channel_response :
            cross cp_channel, cp_response;
    endgroup

    covergroup axi_stall_cg;
        option.per_instance = 1;

        cp_channel : coverpoint cov_stall_channel {
            bins ar = {0};
            bins aw = {1};
            bins w  = {2};
            bins r  = {3};
            bins b  = {4};
        }

        cp_duration : coverpoint cov_stall_duration {
            bins one_cycle = {1};
            bins cycles_2_4 = {[2:4]};
            bins cycles_5_16 = {[5:16]};
            bins cycles_over_16 = {[17:$]};
        }

        cross_channel_duration :
            cross cp_channel, cp_duration;
    endgroup

    int unsigned axi_direction;
    int unsigned axi_beats;
    int unsigned axi_size;
    int unsigned axi_alignment;
    int unsigned axi_read_count;
    int unsigned axi_write_count;

    // AXI address-handshake functional coverage.
    covergroup axi_addr_cg;
        option.per_instance = 1;

        cp_direction : coverpoint axi_direction {
            bins read_req  = {0};
            bins write_req = {1};
        }

        cp_beats : coverpoint axi_beats {
            bins one_beat    = {1};
            bins beats_2_4   = {[2:4]};
            bins beats_5_16  = {[5:16]};
            bins beats_17_64 = {[17:64]};
            bins beats_65_256 = {[65:256]};
        }

        cp_size : coverpoint axi_size {
            bins bytes_1 = {0};
            bins bytes_2 = {1};
            bins bytes_4 = {2};
            bins bytes_8 = {3};
            bins larger_sizes = {[4:7]};
        }

        cp_alignment : coverpoint axi_alignment {
            bins aligned   = {0};
            bins unaligned = {1};
        }

        cross_direction_beats : cross cp_direction, cp_beats;
        cross_direction_alignment : cross cp_direction, cp_alignment;
    endgroup

    int unsigned tx_frame_len;
    int unsigned rx_frame_len;
    int unsigned frame_direction;
    int unsigned frame_length;
    int unsigned frame_alignment;

    int unsigned tx_frame_count;
    int unsigned rx_frame_count;

    // ---------------------------------------------
    // TX frame coverage
    // ---------------------------------------------

    covergroup tx_frame_cg;

        option.per_instance = 1;

        cp_tx_length : coverpoint tx_frame_len {

            bins minimum       = {60};
            bins short_frames  = {[61:63]};
            bins length_64     = {64};
            bins small_frames  = {[65:127]};
            bins length_128    = {128};
            bins medium_frames = {[129:511]};
            bins length_512    = {512};
            bins large_frames  = {[513:1023]};
            bins length_1024   = {1024};
            bins near_maximum  = {[1025:1513]};
            bins maximum       = {1514};

        }

        cp_tx_alignment : coverpoint (tx_frame_len % 4) {
            bins align_0 = {0};
            bins align_1 = {1};
            bins align_2 = {2};
            bins align_3 = {3};
        }

    endgroup

    // ---------------------------------------------
    // RX frame coverage
    // ---------------------------------------------

    covergroup rx_frame_cg;

        option.per_instance = 1;

        cp_rx_length : coverpoint rx_frame_len {

            bins minimum       = {60};
            bins short_frames  = {[61:63]};
            bins length_64     = {64};
            bins small_frames  = {[65:127]};
            bins length_128    = {128};
            bins medium_frames = {[129:511]};
            bins length_512    = {512};
            bins large_frames  = {[513:1023]};
            bins length_1024   = {1024};
            bins near_maximum  = {[1025:1513]};
            bins maximum       = {1514};

        }

        cp_rx_alignment : coverpoint (rx_frame_len % 4) {
            bins align_0 = {0};
            bins align_1 = {1};
            bins align_2 = {2};
            bins align_3 = {3};
        }

    endgroup

    // ---------------------------------------------
    // Combined TX/RX coverage
    // ---------------------------------------------

    covergroup frame_cross_cg;

        option.per_instance = 1;

        cp_direction : coverpoint frame_direction {
            bins tx = {0};
            bins rx = {1};
        }

        cp_length : coverpoint frame_length {
            bins minimum = {60};
            bins small_frames = {[61:127]};
            bins medium_frames  = {[128:511]};
            bins large_frames   = {[512:1023]};
            bins maximum_range = {[1024:1514]};
        }

        cp_alignment : coverpoint frame_alignment {
            bins align_0 = {0};
            bins align_1 = {1};
            bins align_2 = {2};
            bins align_3 = {3};
        }

        cross_direction_length :
            cross cp_direction, cp_length;

        cross_direction_alignment :
            cross cp_direction, cp_alignment;

    endgroup

    // ---------------------------------------------
    // Constructor
    // ---------------------------------------------

    function new(
        string name,
        uvm_component parent
    );

        super.new(name, parent);

        tx_frame_cg = new();
        rx_frame_cg = new();
        frame_cross_cg = new();
        axi_addr_cg = new();
        axi_response_cg = new();
        axi_stall_cg = new();

    endfunction

    // ---------------------------------------------
    // Build phase
    // ---------------------------------------------

    function void build_phase(uvm_phase phase);

        super.build_phase(phase);

        rx_export = new("rx_export", this);
        axi_export = new("axi_export", this);
        axi_event_export = new("axi_event_export", this);

    endfunction

    // ---------------------------------------------
    // TX monitor callback
    // ---------------------------------------------

    virtual function void write(eth_frame_item t);

        if (t == null)
            return;

        tx_frame_len = t.data.size();

        frame_direction = 0;
        frame_length = tx_frame_len;
        frame_alignment = tx_frame_len % 4;

        tx_frame_cg.sample();
        frame_cross_cg.sample();

        tx_frame_count++;

    endfunction

    // ---------------------------------------------
    // RX monitor callback
    // ---------------------------------------------

    function void write_rx_cov(eth_frame_item t);

        if (t == null)
            return;

        rx_frame_len = t.data.size();

        frame_direction = 1;
        frame_length = rx_frame_len;
        frame_alignment = rx_frame_len % 4;

        rx_frame_cg.sample();
        frame_cross_cg.sample();

        rx_frame_count++;

    endfunction

    // ---------------------------------------------
    // AXI address-handshake monitor callback.
    // AXI len is encoded as beats minus one.
    function void write_axi_cov(eth_axi_item t);
        int unsigned bytes_per_beat;

        if (t == null)
            return;

        axi_direction = (t.kind == eth_axi_item::AXI_WR) ? 1 : 0;
        axi_beats = int'(t.len) + 1;
        axi_size = int'(t.size);

        bytes_per_beat = 1 << axi_size;
        axi_alignment = ((t.addr % bytes_per_beat) == 0) ? 0 : 1;

        axi_addr_cg.sample();

        if (axi_direction == 0)
            axi_read_count++;
        else
            axi_write_count++;
    endfunction

    function void write_axi_event_cov(eth_axi_cov_event ev);
        if (ev == null)
            return;

        case (ev.event_kind)
            0, 1: begin
                cov_resp_channel = ev.event_kind;
                cov_resp_code = int'(ev.response);
                cov_resp_last = int'(ev.last);
                axi_response_cg.sample();

                if (ev.event_kind == 0) begin
                    cov_read_response_count++;
                    if (ev.last)
                        cov_read_last_count++;
                end
                else begin
                    cov_write_response_count++;
                end
            end

            2: begin
                if (ev.channel < 5) begin
                    cov_stall_channel = ev.channel;
                    cov_stall_duration = ev.stall_cycles;
                    axi_stall_cg.sample();
                    cov_stall_event_count[ev.channel]++;
                end
            end
        endcase
    endfunction

    // Final coverage report
    // ---------------------------------------------

    virtual function void report_phase(uvm_phase phase);

        super.report_phase(phase);

        `uvm_info("ETH_AXI_RESPONSE_COVERAGE",
            $sformatf(
                "R beats=%0d RLAST=%0d B responses=%0d coverage=%0.2f%%",
                cov_read_response_count,
                cov_read_last_count,
                cov_write_response_count,
                axi_response_cg.get_inst_coverage()
            ),
            UVM_LOW)

        `uvm_info("ETH_AXI_STALL_COVERAGE",
            $sformatf(
                "AR=%0d AW=%0d W=%0d R=%0d B=%0d coverage=%0.2f%%",
                cov_stall_event_count[0],
                cov_stall_event_count[1],
                cov_stall_event_count[2],
                cov_stall_event_count[3],
                cov_stall_event_count[4],
                axi_stall_cg.get_inst_coverage()
            ),
            UVM_LOW)

        `uvm_info("ETH_AXI_COVERAGE",
            $sformatf(
                "AXI read requests=%0d write requests=%0d coverage=%0.2f%%",
                axi_read_count,
                axi_write_count,
                axi_addr_cg.get_inst_coverage()
            ),
            UVM_LOW)

        `uvm_info(
            "ETH_COVERAGE",
            $sformatf(
                "TX frames=%0d RX frames=%0d",
                tx_frame_count,
                rx_frame_count
            ),
            UVM_LOW
        )

        `uvm_info(
            "ETH_COVERAGE",
            $sformatf(
                "TX=%0.2f%% RX=%0.2f%% CROSS=%0.2f%%",
                tx_frame_cg.get_inst_coverage(),
                rx_frame_cg.get_inst_coverage(),
                frame_cross_cg.get_inst_coverage()
            ),
            UVM_LOW
        )

    endfunction

endclass
