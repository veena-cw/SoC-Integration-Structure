class eth_reg32 extends uvm_reg;                                                // Defines a reusable 32-bit register model.

    `uvm_object_utils(eth_reg32)                                                // Registers eth_reg32 with the UVM factory.

    uvm_reg_field value;                                                       // Models the complete 32-bit value of the register.

    function new(string name = "eth_reg32");                                   // Constructs the 32-bit register object.
        super.new(name, 32, UVM_NO_COVERAGE);                                  // Creates a 32-bit UVM register without register coverage.
    endfunction

    virtual function void build(string access = "RW");                         // Creates and configures the register field.
        value = uvm_reg_field::type_id::create("value");                       // Creates the 32-bit register field through the UVM factory.

        value.configure(
            this,                                                              // Associates the field with this register.
            32,                                                                // Defines the field width as 32 bits.
            0,                                                                 // Places the field starting at bit position 0.
            access,                                                            // Sets the requested access policy such as RW, RO, or W1C.
            0,                                                                 // Marks the field as non-volatile.
            32'h0000_0000,                                                     // Defines the field reset value as zero.
            1,                                                                 // Indicates that the field has a defined reset value.
            0,                                                                 // Disables individual field randomization.
            0                                                                  // Indicates that this is the only field in the register.
        );
    endfunction

endclass


class eth_dma_reg_block extends uvm_reg_block;                                  // Models the Ethernet DMA AXI4-Lite register address space.

    `uvm_object_utils(eth_dma_reg_block)                                        // Registers the Ethernet DMA register block with the UVM factory.

    eth_reg32 dma_ctrl;                                                        // Models DMA_CTRL at address 0x00.
    eth_reg32 dma_status;                                                      // Models DMA_STATUS at address 0x04.
    eth_reg32 int_enable;                                                      // Models INT_ENABLE at address 0x08.
    eth_reg32 int_status;                                                      // Models INT_STATUS at address 0x0C.
    eth_reg32 tx_base_addr_l;                                                  // Models the lower 32 bits of the TX base address at 0x10.
    eth_reg32 tx_base_addr_h;                                                  // Models the upper 32 bits of the TX base address at 0x14.
    eth_reg32 tx_ring_len;                                                     // Models the TX ring-length register at address 0x18.
    eth_reg32 rx_base_addr_l;                                                  // Models the lower 32 bits of the RX base address at 0x1C.
    eth_reg32 rx_base_addr_h;                                                  // Models the upper 32 bits of the RX base address at 0x20.
    eth_reg32 rx_ring_len;                                                     // Models the RX ring-length register at address 0x24.

    function new(string name = "eth_dma_reg_block");                           // Constructs the Ethernet DMA register block.
        super.new(name, UVM_NO_COVERAGE);                                      // Initializes the UVM register block without register coverage.
    endfunction


    virtual function void build();                                             // Builds all registers and maps them into the AXI4-Lite address space.

        default_map = create_map(
            "default_map",                                                     // Names the register map used by the environment.
            'h0000_0000,                                                       // Sets the base address of the register block to zero.
            4,                                                                 // Defines four address bytes per 32-bit register access.
            UVM_LITTLE_ENDIAN                                                  // Uses little-endian byte ordering.
        );


        dma_ctrl = eth_reg32::type_id::create("dma_ctrl");                     // Creates the DMA control register model.
        dma_ctrl.configure(this);                                              // Associates DMA_CTRL with this register block.
        dma_ctrl.build("RW");                                                  // Configures DMA_CTRL as a read/write register.
        default_map.add_reg(dma_ctrl, 'h00, "RW");                             // Maps DMA_CTRL to AXI4-Lite address 0x00.


        dma_status = eth_reg32::type_id::create("dma_status");                 // Creates the DMA status register model.
        dma_status.configure(this);                                            // Associates DMA_STATUS with this register block.
        dma_status.build("RO");                                                // Configures DMA_STATUS as a read-only register.
        default_map.add_reg(dma_status, 'h04, "RO");                           // Maps DMA_STATUS to AXI4-Lite address 0x04.


        int_enable = eth_reg32::type_id::create("int_enable");                 // Creates the interrupt-enable register model.
        int_enable.configure(this);                                            // Associates INT_ENABLE with this register block.
        int_enable.build("RW");                                                // Configures INT_ENABLE as a read/write register.
        default_map.add_reg(int_enable, 'h08, "RW");                           // Maps INT_ENABLE to AXI4-Lite address 0x08.


        int_status = eth_reg32::type_id::create("int_status");                 // Creates the interrupt-status register model.
        int_status.configure(this);                                            // Associates INT_STATUS with this register block.
        int_status.build("W1C");                                               // Configures INT_STATUS with write-one-to-clear behavior.
        default_map.add_reg(int_status, 'h0C, "RW");                           // Maps INT_STATUS to AXI4-Lite address 0x0C.


        tx_base_addr_l = eth_reg32::type_id::create("tx_base_addr_l");         // Creates the TX base-address low register model.
        tx_base_addr_l.configure(this);                                        // Associates TX_BASE_ADDR_L with this register block.
        tx_base_addr_l.build("RW");                                            // Configures TX_BASE_ADDR_L as read/write.
        default_map.add_reg(tx_base_addr_l, 'h10, "RW");                       // Maps TX_BASE_ADDR_L to AXI4-Lite address 0x10.


        tx_base_addr_h = eth_reg32::type_id::create("tx_base_addr_h");         // Creates the TX base-address high register model.
        tx_base_addr_h.configure(this);                                        // Associates TX_BASE_ADDR_H with this register block.
        tx_base_addr_h.build("RW");                                            // Configures TX_BASE_ADDR_H as read/write.
        default_map.add_reg(tx_base_addr_h, 'h14, "RW");                       // Maps TX_BASE_ADDR_H to AXI4-Lite address 0x14.


        tx_ring_len = eth_reg32::type_id::create("tx_ring_len");               // Creates the TX ring-length register model.
        tx_ring_len.configure(this);                                           // Associates TX_RING_LEN with this register block.
        tx_ring_len.build("RW");                                               // Configures TX_RING_LEN as read/write.
        default_map.add_reg(tx_ring_len, 'h18, "RW");                          // Maps TX_RING_LEN to AXI4-Lite address 0x18.


        rx_base_addr_l = eth_reg32::type_id::create("rx_base_addr_l");         // Creates the RX base-address low register model.
        rx_base_addr_l.configure(this);                                        // Associates RX_BASE_ADDR_L with this register block.
        rx_base_addr_l.build("RW");                                            // Configures RX_BASE_ADDR_L as read/write.
        default_map.add_reg(rx_base_addr_l, 'h1C, "RW");                       // Maps RX_BASE_ADDR_L to AXI4-Lite address 0x1C.


        rx_base_addr_h = eth_reg32::type_id::create("rx_base_addr_h");         // Creates the RX base-address high register model.
        rx_base_addr_h.configure(this);                                        // Associates RX_BASE_ADDR_H with this register block.
        rx_base_addr_h.build("RW");                                            // Configures RX_BASE_ADDR_H as read/write.
        default_map.add_reg(rx_base_addr_h, 'h20, "RW");                       // Maps RX_BASE_ADDR_H to AXI4-Lite address 0x20.


        rx_ring_len = eth_reg32::type_id::create("rx_ring_len");               // Creates the RX ring-length register model.
        rx_ring_len.configure(this);                                           // Associates RX_RING_LEN with this register block.
        rx_ring_len.build("RW");                                               // Configures RX_RING_LEN as read/write.
        default_map.add_reg(rx_ring_len, 'h24, "RW");                          // Maps RX_RING_LEN to AXI4-Lite address 0x24.


        lock_model();                                                          // Locks the completed register model against structural changes.

    endfunction

endclass
