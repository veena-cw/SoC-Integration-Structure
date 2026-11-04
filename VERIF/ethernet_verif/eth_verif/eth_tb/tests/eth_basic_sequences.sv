class eth_reset_seq extends uvm_sequence #(eth_reset_item);
    `uvm_object_utils(eth_reset_seq)

    function new(string name = "eth_reset_seq");
        super.new(name);
    endfunction

    task body();
        eth_reset_item reset_transaction;
        reset_transaction = eth_reset_item::type_id::create("reset_transaction");
        start_item(reset_transaction);
        reset_transaction.cycles = 10;                         // Hold the DUT in reset for 10 interface clock cycles.
        finish_item(reset_transaction);
    endtask
endclass


class eth_csr_smoke_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_csr_smoke_seq)

    function new(string name = "eth_csr_smoke_seq");
        super.new(name);
    endfunction

    task automatic axil_write(bit [31:0] register_address,
                              bit [31:0] write_data);
        eth_axil_item write_transaction;

        write_transaction = eth_axil_item::type_id::create(
            $sformatf("write_transaction_%08h", register_address));
        start_item(write_transaction);
        write_transaction.write = 1'b1;
        write_transaction.addr  = register_address;
        write_transaction.data  = write_data;
        write_transaction.strb  = 4'hF;                        // Update all four bytes of the 32-bit CSR.
        finish_item(write_transaction);

        if (write_transaction.resp != 2'b00)
            `uvm_error("CSR_WR", $sformatf(
                "Write failed ADDR=%08h DATA=%08h RESP=%0h",
                register_address, write_data, write_transaction.resp))
    endtask

    task automatic axil_read_check(bit [31:0] register_address,
                                   bit [31:0] expected_data);
        eth_axil_item read_transaction;

        read_transaction = eth_axil_item::type_id::create(
            $sformatf("read_transaction_%08h", register_address));
        start_item(read_transaction);
        read_transaction.write = 1'b0;
        read_transaction.addr  = register_address;
        read_transaction.data  = '0;
        read_transaction.strb  = 4'hF;
        finish_item(read_transaction);

        if (read_transaction.resp != 2'b00)
            `uvm_error("CSR_RD", $sformatf(
                "Read failed ADDR=%08h RESP=%0h",
                register_address, read_transaction.resp))
        else if (read_transaction.data !== expected_data)
            `uvm_error("CSR_CMP", $sformatf(
                "ADDR=%08h EXP=%08h GOT=%08h",
                register_address, expected_data, read_transaction.data))
        else
            `uvm_info("CSR_CMP", $sformatf(
                "PASS ADDR=%08h DATA=%08h",
                register_address, read_transaction.data), UVM_LOW)
    endtask

    task body();
        // Program the software-visible DMA configuration without starting a transfer.
        axil_write(32'h0000_0008, 32'h0000_0007);             // Enable the three implemented interrupt sources.
        axil_write(32'h0000_0010, 32'h0000_1000);             // TX base address = 0x00000000_00001000.
        axil_write(32'h0000_0014, 32'h0000_0000);
        axil_write(32'h0000_0018, 32'h0000_0040);             // Program the directed TX ring-length value.
        axil_write(32'h0000_001C, 32'h0000_2000);             // RX base address = 0x00000000_00002000.
        axil_write(32'h0000_0020, 32'h0000_0000);
        axil_write(32'h0000_0024, 32'h0000_0040);             // Program the directed RX ring-length value.

        // DMA_CTRL is intentionally not written: in this RTL a write commits the DMA configuration.
        axil_read_check(32'h0000_0000, 32'h0000_0000);        // DMA remains disabled in this CSR-only test.
        axil_read_check(32'h0000_0008, 32'h0000_0007);
        axil_read_check(32'h0000_0010, 32'h0000_1000);
        axil_read_check(32'h0000_0014, 32'h0000_0000);
        axil_read_check(32'h0000_0018, 32'h0000_0040);
        axil_read_check(32'h0000_001C, 32'h0000_2000);
        axil_read_check(32'h0000_0020, 32'h0000_0000);
        axil_read_check(32'h0000_0024, 32'h0000_0040);
    endtask
endclass


class eth_tx_dma_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_tx_dma_seq)

    function new(string name = "eth_tx_dma_seq");
        super.new(name);
    endfunction

    task automatic axil_write(bit [31:0] register_address,
                              bit [31:0] write_data);
        eth_axil_item write_transaction;

        write_transaction = eth_axil_item::type_id::create(
            $sformatf("tx_write_transaction_%08h", register_address));
        start_item(write_transaction);
        write_transaction.write = 1'b1;
        write_transaction.addr  = register_address;
        write_transaction.data  = write_data;
        write_transaction.strb  = 4'hF;
        finish_item(write_transaction);

        if (write_transaction.resp != 2'b00)
            `uvm_error("TX_DMA_WR", $sformatf(
                "Write failed ADDR=%08h DATA=%08h RESP=%0h",
                register_address, write_data, write_transaction.resp))
        else
            `uvm_info("TX_DMA_WR", $sformatf(
                "PASS ADDR=%08h DATA=%08h",
                register_address, write_data), UVM_LOW)
    endtask

    task body();
        // Point the TX DMA at the 64-byte frame preloaded by the TX testcase.
        axil_write(32'h0000_0010, 32'h0000_1000);             // TX source base = 0x1000.
        axil_write(32'h0000_0014, 32'h0000_0000);
        axil_write(32'h0000_0018, 32'h0000_0040);

        // IRQ isolation test: enable TX, RX and DMA error interrupts.
        // This must happen before DMA_CTRL commits the configuration.
        axil_write(32'h0000_0008, 32'h0000_0007);             // Current integration uses this value as DMA request length.

        // DMA_CTRL is written last because it commits the shadowed configuration and enables TX/read DMA.
        axil_write(32'h0000_0000, 32'h0000_0001);
    endtask
endclass


class eth_rx_loopback_dma_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_rx_loopback_dma_seq)

    function new(string name = "eth_rx_loopback_dma_seq");
        super.new(name);
    endfunction

    task automatic axil_write(bit [31:0] register_address,
                              bit [31:0] write_data);
        eth_axil_item write_transaction;

        write_transaction = eth_axil_item::type_id::create(
            $sformatf("rx_write_transaction_%08h", register_address));

        start_item(write_transaction);

        write_transaction.write = 1'b1;
        write_transaction.addr  = register_address;
        write_transaction.data  = write_data;
        write_transaction.strb  = 4'hF;

        finish_item(write_transaction);

        if (write_transaction.resp != 2'b00)
            `uvm_error("RX_DMA_WR",
                $sformatf(
                    "Write failed ADDR=%08h DATA=%08h RESP=%0h",
                    register_address,
                    write_data,
                    write_transaction.resp))
        else
            `uvm_info("RX_DMA_WR",
                $sformatf(
                    "PASS ADDR=%08h DATA=%08h",
                    register_address,
                    write_data),
                UVM_LOW)
    endtask

    task body();

        // TX DMA reads the known 64-byte source payload from address 0x1000.
        axil_write(32'h0000_0010, 32'h0000_1000);
        axil_write(32'h0000_0014, 32'h0000_0000);
        axil_write(32'h0000_0018, 32'h0000_0040);

        // RX DMA writes the looped-back 64-byte payload to address 0x2000.
        axil_write(32'h0000_001C, 32'h0000_2000);
        axil_write(32'h0000_0020, 32'h0000_0000);
        axil_write(32'h0000_0024, 32'h0000_0040);

        // Commit both configurations and enable TX/read plus RX/write DMA.
        axil_write(32'h0000_0000, 32'h0000_0003);

    endtask
endclass




class eth_parallel_dma_config_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_parallel_dma_config_seq)

    function new(string name = "eth_parallel_dma_config_seq");
        super.new(name);
    endfunction

    task automatic axil_write(bit [31:0] register_address,
                              bit [31:0] write_data);
        eth_axil_item write_transaction;
        write_transaction = eth_axil_item::type_id::create(
            $sformatf("parallel_cfg_%08h", register_address));
        start_item(write_transaction);
        write_transaction.write = 1'b1;
        write_transaction.addr  = register_address;
        write_transaction.data  = write_data;
        write_transaction.strb  = 4'hF;
        finish_item(write_transaction);

        if (write_transaction.resp != 2'b00)
            `uvm_error("PARALLEL_CFG",
                $sformatf("Write failed ADDR=%08h DATA=%08h RESP=%0h",
                          register_address, write_data, write_transaction.resp))
    endtask

    task body();
        axil_write(32'h0000_0010, 32'h0000_1000);
        axil_write(32'h0000_0014, 32'h0000_0000);
        axil_write(32'h0000_0018, 32'h0000_0040);
        axil_write(32'h0000_001C, 32'h0000_2000);
        axil_write(32'h0000_0020, 32'h0000_0000);
        axil_write(32'h0000_0024, 32'h0000_0040);
    endtask
endclass

class eth_parallel_dma_start_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_parallel_dma_start_seq)

    function new(string name = "eth_parallel_dma_start_seq");
        super.new(name);
    endfunction

    task body();
        eth_axil_item write_transaction;
        write_transaction = eth_axil_item::type_id::create("parallel_start");
        start_item(write_transaction);
        write_transaction.write = 1'b1;
        write_transaction.addr  = 32'h0000_0000;
        write_transaction.data  = 32'h0000_0003;
        write_transaction.strb  = 4'hF;
        finish_item(write_transaction);

        if (write_transaction.resp != 2'b00)
            `uvm_error("PARALLEL_START",
                $sformatf("DMA_CTRL write failed RESP=%0h", write_transaction.resp))
    endtask
endclass

class eth_full_duplex_frame_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_full_duplex_frame_seq)

    bit [31:0] tx_address;
    bit [31:0] rx_address;
    bit [31:0] frame_length = 32'd64;

    function new(string name = "eth_full_duplex_frame_seq");
        super.new(name);
    endfunction

    task automatic axil_write(
        bit [31:0] register_address,
        bit [31:0] write_data
    );
        eth_axil_item transaction;

        transaction = eth_axil_item::type_id::create(
            $sformatf("fd_b2b_write_%08h", register_address));

        start_item(transaction);

        transaction.write = 1'b1;
        transaction.addr  = register_address;
        transaction.data  = write_data;
        transaction.strb  = 4'hF;

        finish_item(transaction);

        if (transaction.resp != 2'b00)
            `uvm_error("FD_B2B_CFG",
                $sformatf(
                    "AXI-Lite write failed ADDR=%08h DATA=%08h RESP=%0h",
                    register_address,
                    write_data,
                    transaction.resp))
    endtask

    task body();

        axil_write(32'h0000_0010, tx_address);
        axil_write(32'h0000_0014, 32'h0000_0000);
        axil_write(32'h0000_0018, frame_length);

        axil_write(32'h0000_001C, rx_address);
        axil_write(32'h0000_0020, 32'h0000_0000);
        axil_write(32'h0000_0024, frame_length);

        // DMA_CTRL is the commit point. Enable TX and RX together.
        axil_write(32'h0000_0000, 32'h0000_0003);

    endtask

endclass
