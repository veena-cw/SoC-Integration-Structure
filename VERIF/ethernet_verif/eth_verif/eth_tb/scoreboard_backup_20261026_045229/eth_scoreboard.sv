class eth_scoreboard extends uvm_scoreboard;

    `uvm_component_utils(eth_scoreboard)

    int errors;

    function new(string name, uvm_component parent);
        super.new(name, parent);
    endfunction

    function void compare_bytes(
        byte unsigned expected_bytes[],
        byte unsigned actual_bytes[]
    );
        if (expected_bytes.size() != actual_bytes.size()) begin
            errors++;
            `uvm_error("ETH_SCB", "Length mismatch")
        end
        else begin
            foreach (expected_bytes[i]) begin
                if (expected_bytes[i] !== actual_bytes[i]) begin
                    errors++;
                    `uvm_error(
                        "ETH_SCB",
                        $sformatf(
                            "byte[%0d] exp=%02h act=%02h",
                            i,
                            expected_bytes[i],
                            actual_bytes[i]
                        )
                    )
                end
            end
        end
    endfunction

endclass
