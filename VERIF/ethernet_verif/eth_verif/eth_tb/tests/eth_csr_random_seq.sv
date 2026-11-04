class eth_csr_random_seq extends uvm_sequence #(eth_axil_item);
    `uvm_object_utils(eth_csr_random_seq)

    int unsigned num_iterations = 100;
    bit [31:0] expected[10];

    function new(string name = "eth_csr_random_seq");
        super.new(name);
    endfunction

    function automatic bit [31:0] apply_strb(
        bit [31:0] old_value,
        bit [31:0] new_value,
        bit [3:0] strb
    );
        bit [31:0] result;
        result = old_value;

        for (int i = 0; i < 4; i++) begin
            if (strb[i])
                result[i*8 +: 8] = new_value[i*8 +: 8];
        end

        return result;
    endfunction

    task automatic access_csr(
        bit write_op,
        bit [31:0] addr,
        bit [31:0] data,
        bit [3:0] strb,
        bit [1:0] expected_resp,
        output bit [31:0] read_data
    );
        eth_axil_item tr;

        tr = eth_axil_item::type_id::create("csr_tr");

        start_item(tr);
        tr.write = write_op;
        tr.addr  = addr;
        tr.data  = data;
        tr.strb  = strb;
        finish_item(tr);

        read_data = tr.data;

        if (tr.resp !== expected_resp)
            `uvm_error("CSR_RESP",
                $sformatf("ADDR=%08h WRITE=%0b EXP_RESP=%0h GOT=%0h",
                          addr, write_op, expected_resp, tr.resp))
    endtask

    task automatic write_and_check(
        bit [31:0] addr,
        bit [31:0] data,
        bit [3:0] strb
    );
        bit [31:0] unused_data;
        bit [31:0] read_data;
        int idx;

        idx = int'(addr >> 2);

        access_csr(1'b1, addr, data, strb, 2'b00, unused_data);

        expected[idx] = apply_strb(expected[idx], data, strb);

        if (addr == 32'h08)
            expected[idx] &= 32'h0000_0007;

        access_csr(1'b0, addr, 32'h0, 4'hF, 2'b00, read_data);

        if (read_data !== expected[idx])
            `uvm_error("CSR_MISMATCH",
                $sformatf("ADDR=%08h EXP=%08h GOT=%08h",
                          addr, expected[idx], read_data))
        else
            `uvm_info("CSR_PASS",
                $sformatf("ADDR=%08h DATA=%08h STRB=%h",
                          addr, read_data, strb), UVM_LOW)
    endtask

    task body();
        bit [31:0] data;
        bit [31:0] read_data;
        bit [31:0] addr;
        bit [3:0] strb;
        int unsigned choice;

        for (int i = 0; i < 10; i++)
            expected[i] = 0;

        for (int unsigned n = 0; n < num_iterations; n++) begin
            choice = $urandom_range(0, 6);

            case (choice)
                0: addr = 32'h08;
                1: addr = 32'h10;
                2: addr = 32'h14;
                3: addr = 32'h18;
                4: addr = 32'h1C;
                5: addr = 32'h20;
                6: addr = 32'h24;
                default: addr = 32'h08;
            endcase

            data = $urandom();
            strb = 4'($urandom_range(0, 15));

            write_and_check(addr, data, strb);
        end

        // Read-only DMA_STATUS write must return SLVERR.
        access_csr(1'b1, 32'h04, 32'hFFFF_FFFF,
                   4'hF, 2'b10, read_data);

        // Unmapped address must return SLVERR.
        access_csr(1'b1, 32'h28, 32'h1234_5678,
                   4'hF, 2'b10, read_data);

        access_csr(1'b0, 32'h28, 32'h0,
                   4'hF, 2'b10, read_data);

        // Misaligned read must return SLVERR.
        access_csr(1'b0, 32'h11, 32'h0,
                   4'hF, 2'b10, read_data);

        `uvm_info("CSR_RANDOM",
            $sformatf("Completed %0d randomized CSR iterations",
                      num_iterations), UVM_LOW)
    endtask
endclass
